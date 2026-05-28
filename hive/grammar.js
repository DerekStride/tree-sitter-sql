import base from '../grammar.js';
import { paren_list, optional_parenthesis, comma_list, wrapped_in_parenthesis, make_keyword } from '../grammar/helpers.js';
import hive_storage_rules from './grammar/storage.js';
import hive_partition_rules from './grammar/partition.js';
import hive_lateral_view_rules from './grammar/lateral_view.js';

export default grammar(base, {
  name: 'hive_sql',

  conflicts: $ => [
    [$.object_reference, $._qualified_field],
    [$._column, $._qualified_field],
    [$.object_reference],
    [$.between_expression, $.binary_expression],
    [$.create_function],
    [$.list, $.grouping_set],
    [$.list, $.rollup_element],
    [$.list, $.cube_element],
    [$.stored_by],
    [$.row_format],
    [$.skewed_by],
    [$.cluster_by],
    [$.distribute_by],
    [$.sort_by],
    [$.multi_table_insert],
    [$.select, $.multi_table_insert],
  ],

  rules: {

    // Hive DDL: no Spark 4.x variable statements, no scripting constructs,
    // no Iceberg-specific statements.  MSCK REPAIR TABLE is Hive/Impala-specific.
    _ddl_statement: $ => choice(
      $._create_statement,
      $._alter_statement,
      $._drop_statement,
      $._rename_statement,
      $._merge_statement,
      $._refresh_statement,
      $.comment_statement,
      $.set_statement,
      $.reset_statement,
      $.use_statement,
      $.msck_repair_statement,
      $.load_data,
      $.grant_statement,
      $.revoke_statement,
    ),

    // Override _dml_write to include Hive's multi-table insert and overwrite-directory
    _dml_write: $ => seq(
      optional($._cte),
      choice(
        $._delete_statement,
        $._insert_statement,
        $._update_statement,
        $._truncate_statement,
        $.multi_table_insert,
        $.insert_overwrite_directory,
      ),
    ),

    // LOAD DATA [LOCAL] INPATH 'path' [OVERWRITE] INTO TABLE tbl [PARTITION (key=val)]
    load_data: $ => seq(
      $.keyword_load,
      $.keyword_data,
      optional($.keyword_local),
      $.keyword_inpath,
      alias($._literal_string, $.literal),
      optional($.keyword_overwrite),
      $.keyword_into,
      $.keyword_table,
      $.object_reference,
      optional($.table_partition),
    ),

    // INSERT OVERWRITE [LOCAL] DIRECTORY 'path' [ROW FORMAT ...] [STORED AS ...]
    // SELECT ...
    insert_overwrite_directory: $ => seq(
      $.keyword_insert,
      $.keyword_overwrite,
      optional($.keyword_local),
      $.keyword_directory,
      alias($._literal_string, $.literal),
      repeat(
        choice(
          $.row_format,
          $.stored_as,
        ),
      ),
      $._dml_read,
    ),

    // FROM src INSERT [OVERWRITE] [INTO] TABLE tbl [PARTITION] SELECT/VALUES ...
    // (one or more INSERT targets in a single scan)
    multi_table_insert: $ => seq(
      $.keyword_from,
      $.object_reference,
      optional($._alias),
      repeat1(
        seq(
          $.keyword_insert,
          optional(choice($.keyword_overwrite, $.keyword_into)),
          optional($.keyword_table),
          $.object_reference,
          optional($.table_partition),
          choice(
            seq($.keyword_select, $.select_expression, optional($.where)),
            $._insert_values,
          ),
        ),
      ),
    ),

    // CREATE TABLE with EXTERNAL support and HiveQL table settings
    create_table: $ => prec.left(
      seq(
        $.keyword_create,
        optional(
          choice(
            $._temporary,
            $.keyword_external,
          ),
        ),
        $.keyword_table,
        optional($._if_not_exists),
        $.object_reference,
        seq(
          optional($.column_definitions),
          repeat($._table_settings),
          optional(seq($.keyword_as, $.create_query)),
        ),
      ),
    ),

    // Hive _table_settings: hive_compat storage rules + Hive-specific STORED BY / SKEWED BY.
    // No shallow_clone (Databricks-only).
    _table_settings: $ => choice(
      $.table_partition,
      $.stored_as,
      $.stored_by,
      $.storage_location,
      $.table_sort,
      $.table_cluster,
      $.row_format,
      $.skewed_by,
      seq($.keyword_tblproperties, paren_list($.table_option, true)),
      seq($.keyword_without, $.keyword_oids),
      $.storage_parameters,
      $.table_option,
    ),

    // INSERT OVERWRITE ... PARTITION (key=val) — core HiveQL DML
    insert: $ => seq(
      $.keyword_insert,
      optional($.keyword_ignore),
      optional(
        choice(
          $.keyword_into,
          $.keyword_overwrite,
        ),
      ),
      $.object_reference,
      optional($.table_partition),
      optional(
        seq(
          $.keyword_as,
          field('alias', $.identifier),
        ),
      ),
      choice(
        $._insert_values,
        $._set_values,
      ),
      optional(
        choice(
          $._on_conflict,
          $._on_duplicate_key_update,
        ),
      ),
    ),

    // ALTER TABLE specifications: add_partition (from hive_compat) but no Iceberg ops
    _alter_specifications: $ => choice(
      $.add_partition,
      $.add_column,
      $.add_constraint,
      $.drop_constraint,
      $.alter_column,
      $.modify_column,
      $.change_column,
      $.drop_column,
      $.rename_object,
      $.rename_column,
      $.set_schema,
      $.change_ownership,
    ),

    // FROM with LATERAL VIEW, CLUSTER/DISTRIBUTE/SORT BY support
    from: $ => seq(
      $.keyword_from,
      optional($.keyword_only),
      comma_list($.relation, true),
      repeat(
        choice(
          $.join,
          $.cross_join,
          $.lateral_join,
          $.lateral_cross_join,
          $.lateral_view,
        ),
      ),
      optional($.where),
      optional($.group_by),
      optional($.having),
      optional($.window_clause),
      optional($.order_by),
      optional(
        choice(
          $.cluster_by,
          $.distribute_by,
          $.sort_by,
        ),
      ),
      optional($.limit),
      optional($.offset_fetch_clause),
    ),

    // CLUSTER BY col [, col]
    cluster_by: $ => seq(
      $.keyword_cluster,
      $.keyword_by,
      comma_list($._expression, true),
    ),

    // DISTRIBUTE BY col [, col]
    distribute_by: $ => seq(
      $.keyword_distribute,
      $.keyword_by,
      comma_list($._expression, true),
    ),

    // SORT BY col [ASC|DESC] [, col]
    sort_by: $ => seq(
      $.keyword_sort,
      $.keyword_by,
      comma_list($.order_target, true),
    ),

    // TABLESAMPLE with BUCKET n OUT OF n support (Hive-specific bucket sampling)
    tablesample: $ => seq(
      $.keyword_tablesample,
      '(',
      choice(
        seq($._natural_number, $.keyword_rows),
        seq($._natural_number, $.keyword_percent),
        seq($.keyword_bucket, $._natural_number, $.keyword_out, $.keyword_of, $._natural_number),
      ),
      ')',
    ),

    // Hive-specific keywords — token(prec(1,...)) so the lexer prefers these over
    // the base _identifier pattern when both are valid in a parse state.
    keyword_serde:           _ => token(prec(1, make_keyword("serde"))),
    keyword_serdeproperties: _ => token(prec(1, make_keyword("serdeproperties"))),
    keyword_skewed:          _ => token(prec(1, make_keyword("skewed"))),
    keyword_directories:     _ => token(prec(1, make_keyword("directories"))),

    ...hive_storage_rules,
    ...hive_partition_rules,
    ...hive_lateral_view_rules,

  },
});
