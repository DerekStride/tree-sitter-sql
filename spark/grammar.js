import hive from '../hive/grammar.js';
import { paren_list, optional_parenthesis, comma_list, make_keyword } from '../grammar/helpers.js';
import spark_create_rules from './grammar/create.js';
import spark_optimize_rules from './grammar/optimize.js';
import spark_spark4_rules from './grammar/spark4.js'; // TODO change file name
import spark_scripting_rules from './grammar/scripting.js';
import spark_iceberg_rules from './grammar/iceberg.js';
import spark_select_rules from './grammar/select.js';

export default grammar(hive, {
  name: 'spark_sql',

  conflicts: $ => [
    [$.object_reference, $._qualified_field],
    [$._column, $._qualified_field],
    [$.object_reference],
    [$.between_expression, $.binary_expression],
    [$.from],
    [$.create_function],
    [$.list, $.grouping_set],
    [$.list, $.rollup_element],
    [$.list, $.cube_element],
    [$.interval],
    [$.term],
    [$.lateral_cross_join],
    [$.values],
    [$.select_expression],
    [$.set_operation],
    [$.group_by],
    [$.subquery, $.lateral_subquery],
    [$.order_target],
    [$.iceberg_write_order],
    [$.cluster_by],
    [$.distribute_by],
    [$.sort_by],
    [$.qualify],
    // Inherited from Hive: multi-table INSERT ambiguity
    [$.select, $.multi_table_insert],
    // Inherited from Hive: SERDE optional WITH SERDEPROPERTIES ambiguity
    [$.row_format],
    [$.lateral_view],
  ],

  rules: {
    // Re-add $.block to program (removed from base — procedural blocks are Spark-specific)
    program: $ => seq(
      repeat(
        seq(
          choice(
            $.transaction,
            $.statement,
          ),
          ';',
        ),
      ),
      optional(
        $.statement,
      ),
    ),

    // Override base statement to include Spark scripting constructs
    statement: $ => seq(
      optional(seq(
        $.keyword_explain,
        optional($.keyword_analyze),
        optional($.keyword_verbose),
      )),
      choice(
        $._ddl_statement,
        $._dml_write,
        optional_parenthesis($._dml_read),
        $.block,
        $.while_statement,
        $.if_statement,
        $.for_statement,
        $.loop_statement,
        $.repeat_statement,
        $.leave_statement,
        $.iterate_statement,
        $.signal_statement,
        $.resignal_statement,
        $.get_diagnostics_statement,
      ),
    ),

    create_table: $ => prec.left(
      seq(
        $.keyword_create,
        optional(
          choice(
            $._temporary,
            $.keyword_unlogged,
            $.keyword_external,
          )
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

    alter_view: $ => seq(
      $.keyword_alter,
      $.keyword_view,
      optional($._if_exists),
      $.object_reference,
      choice(
        $.rename_object,
        $.rename_column,
        $.set_schema,
        $.change_ownership,
        seq($.keyword_as, $._dml_read),
        seq($.keyword_set, $.keyword_tblproperties, paren_list($.table_option, true)),
        seq($.keyword_unset, $.keyword_tblproperties, paren_list($._expression, true)),
      ),
    ),

    _optimize_statement: $ => choice(
      $._optimize_table,
      $._compute_stats,
      $._spark_analyze,
    ),

    // Override _ddl_statement to add Spark 4.0 variable statements and CALL
    _ddl_statement: $ => choice(
      $._create_statement,
      $._alter_statement,
      $._drop_statement,
      $._rename_statement,
      $._optimize_statement,
      $._merge_statement,
      $._refresh_statement,
      $.comment_statement,
      $.set_statement,
      $.reset_statement,
      $.use_statement,
      $.declare_variable_statement,
      $.set_variable_statement,
      $.call_statement,
      $.grant_statement,
      $.revoke_statement,
    ),

    // Override set_statement to add scripting assignment: SET var = expr
    set_statement: $ => prec.right(choice(
      seq($.keyword_set, $.keyword_constraints, choice($.keyword_all, comma_list($.identifier, true)), choice($.keyword_deferred, $.keyword_immediate)),
      seq($.keyword_set, $.keyword_transaction, $._transaction_mode),
      seq($.keyword_set, $.keyword_transaction, $.keyword_snapshot, $._transaction_mode),
      seq($.keyword_set, $.keyword_session, $.keyword_characteristics, $.keyword_as, $.keyword_transaction, $._transaction_mode),
      seq($.keyword_set, $.object_reference, '=', $._expression),
    )),

    // Override _type to add VARIANT
    _type: $ => prec.left(
      choice(
        $.keyword_variant,
        $.keyword_boolean,
        $.bit,
        $.binary,
        $.varbinary,
        $.smallint,
        $.int,
        $.bigint,
        $.decimal,
        $.numeric,
        $.double,
        $.float,
        $.char,
        $.varchar,
        $.nchar,
        $.nvarchar,
        $.keyword_date,
        $.time,
        $.timestamp,
        $.keyword_interval,
        $.keyword_json,
        $.keyword_xml,
        $.keyword_string,
        $.enum,
        field('custom_type', $.object_reference),
      ),
    ),

    // Override _expression to add collate and variant_path
    _expression: $ => prec(1, choice(
      $.literal,
      alias($._qualified_field, $.field),
      $.parameter,
      $.list,
      $.case,
      $.window_function,
      $.subquery,
      $.cast,
      $.exists,
      $.invocation,
      $.binary_expression,
      $.subscript,
      $.unary_expression,
      $.array,
      $.interval,
      $.between_expression,
      $.parenthesized_expression,
      $.collate_expression,
      $.variant_path_expression,
    )),

    // Override when_clause to allow bare INSERT (no values) for MERGE BY SOURCE
    when_clause: $ => prec.left(seq(
      $.keyword_when,
      optional($.keyword_not),
      $.keyword_matched,
      optional(seq(
        $.keyword_by,
        $.keyword_source,
      )),
      optional(seq(
        $.keyword_and,
        optional_parenthesis(field('predicate', $._expression)),
      )),
      $.keyword_then,
      choice(
        $.keyword_delete,
        seq($.keyword_update, $._set_values),
        seq($.keyword_insert, optional($._insert_values)),
        optional($.where),
      ),
    )),

    // Spark SQL: INSERT OVERWRITE ... PARTITION (...)
    insert: $ => seq(
      choice(
        $.keyword_insert,
        $.keyword_replace
      ),
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
          field('alias', $.identifier)
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

    // Override term to support SELECT * EXCEPT
    term: $ => seq(
      field(
        'value',
        choice(
          $.all_fields,
          $._expression,
        ),
      ),
      optional($._alias),
      optional($.select_except_clause),
    ),

    // Override relation to support LATERAL subquery, PIVOT, and UNPIVOT
    relation: $ => prec.right(
      seq(
        choice(
          $.subquery,
          $.invocation,
          $.object_reference,
          $.lateral_subquery,
          $.values,
        ),
        optional($.tablesample),
        optional(choice($.pivot_clause, $.unpivot_clause)),
        optional(
          seq(
            $._alias,
            optional(alias($._column_list, $.list)),
          ),
        ),
      ),
    ),

    // Override from to add: LATERAL VIEW, QUALIFY, CLUSTER/DISTRIBUTE/SORT BY
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
      optional($.qualify),
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
      // Iceberg partition field operations
      seq($.keyword_add, $.keyword_partition, $.keyword_field, $.iceberg_partition_transform),
      seq($.keyword_drop, $.keyword_partition, $.keyword_field, $.iceberg_partition_transform),
      seq($.keyword_replace, $.keyword_partition, $.keyword_field, $.iceberg_partition_transform,
          $.keyword_with, $.iceberg_partition_transform),
      // Iceberg write order
      $.iceberg_write_order,
      seq($.keyword_write, $.keyword_distributed, $.keyword_by, $.keyword_partition),
    ),

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

    // Spark/Hive-specific keywords (not ANSI)
    keyword_overwrite:          _ => make_keyword("overwrite"),
    keyword_clustered:          _ => make_keyword("clustered"),
    keyword_buckets:            _ => make_keyword("buckets"),
    keyword_tblproperties:      _ => make_keyword("tblproperties"),
    keyword_format:             _ => make_keyword("format"),
    keyword_delimited:          _ => make_keyword("delimited"),
    keyword_delimiter:          _ => make_keyword("delimiter"),
    keyword_fields:             _ => make_keyword("fields"),
    keyword_terminated:         _ => make_keyword("terminated"),
    keyword_escaped:            _ => make_keyword("escaped"),
    keyword_lines:              _ => make_keyword("lines"),
    keyword_parquet:            _ => make_keyword("parquet"),
    keyword_rcfile:             _ => make_keyword("rcfile"),
    keyword_csv:                _ => make_keyword("csv"),
    keyword_textfile:           _ => make_keyword("textfile"),
    keyword_avro:               _ => make_keyword("avro"),
    keyword_sequencefile:       _ => make_keyword("sequencefile"),
    keyword_orc:                _ => make_keyword("orc"),
    keyword_jsonfile:           _ => make_keyword("jsonfile"),
    keyword_stored:             _ => make_keyword("stored"),
    keyword_virtual:            _ => make_keyword("virtual"),
    keyword_cached:             _ => make_keyword("cached"),
    keyword_uncached:           _ => make_keyword("uncached"),
    keyword_replication:        _ => make_keyword("replication"),
    keyword_compute:            _ => make_keyword("compute"),
    keyword_stats:              _ => make_keyword("stats"),
    keyword_optimize:           _ => make_keyword("optimize"),
    keyword_rewrite:            _ => make_keyword("rewrite"),
    keyword_bin_pack:           _ => make_keyword("bin_pack"),
    keyword_incremental:        _ => make_keyword("incremental"),
    keyword_location:           _ => make_keyword("location"),
    keyword_partitioned:        _ => make_keyword("partitioned"),
    keyword_sort:               _ => make_keyword("sort"),
    keyword_sorted:             _ => make_keyword("sorted"),
    keyword_metadata:           _ => make_keyword("metadata"),
    keyword_noscan:             _ => make_keyword("noscan"),
    keyword_ignore:             _ => make_keyword("ignore"),
    keyword_rlike:              _ => choice(make_keyword("rlike"), make_keyword("regexp")),
    keyword_schedule:           _ => make_keyword("schedule"),
    keyword_while:              _ => make_keyword("while"),
    keyword_elseif:             _ => make_keyword("elseif"),
    keyword_loop:               _ => make_keyword("loop"),
    keyword_repeat:             _ => make_keyword("repeat"),
    keyword_signal:             _ => make_keyword("signal"),
    keyword_resignal:           _ => make_keyword("resignal"),
    keyword_leave:              _ => make_keyword("leave"),
    keyword_iterate:            _ => make_keyword("iterate"),
    keyword_diagnostics:        _ => make_keyword("diagnostics"),
    keyword_sqlstate:           _ => make_keyword("sqlstate"),
    keyword_returned_sqlstate:  _ => make_keyword("returned_sqlstate"),
    keyword_message_text:       _ => make_keyword("message_text"),
    keyword_message:            _ => make_keyword("message"),
    keyword_condition:          _ => make_keyword("condition"),
    keyword_get:                _ => make_keyword("get"),
    keyword_qualify:            _ => make_keyword("qualify"),
    keyword_pivot:              _ => make_keyword("pivot"),
    keyword_unpivot:            _ => make_keyword("unpivot"),
    keyword_bucket:             _ => make_keyword("bucket"),
    keyword_cluster:            _ => make_keyword("cluster"),
    keyword_distribute:         _ => make_keyword("distribute"),
    keyword_transform:          _ => make_keyword("transform"),
    keyword_var:                _ => make_keyword("var"),
    keyword_variable:           _ => make_keyword("variable"),
    keyword_variant:            _ => make_keyword("variant"),
    keyword_string:             _ => make_keyword("string"),
    keyword_inpath:             _ => make_keyword("inpath"),
    keyword_directory:          _ => make_keyword("directory"),
    keyword_load:               _ => make_keyword("load"),
    keyword_changes:            _ => make_keyword("changes"),
    keyword_oids:               _ => make_keyword("oids"),
    keyword_delta:              _ => make_keyword("delta"),
    keyword_source:             _ => make_keyword("source"),
    keyword_shallow:            _ => make_keyword("shallow"),
    keyword_deep:               _ => make_keyword("deep"),
    keyword_clone:              _ => make_keyword("clone"),
    keyword_field:              _ => make_keyword("field"),

    ...spark_create_rules,
    ...spark_optimize_rules,
    ...spark_spark4_rules,
    ...spark_scripting_rules,
    ...spark_iceberg_rules,
    ...spark_select_rules,
  },
});
