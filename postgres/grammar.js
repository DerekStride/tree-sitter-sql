import base from '../grammar.js';
import { comma_list, optional_parenthesis, paren_list, wrapped_in_parenthesis, make_keyword } from '../grammar/helpers.js';
import pg_copy_rules from './grammar/copy.js';
import pg_optimize_rules from './grammar/optimize.js';
import pg_create_rules from './grammar/create.js';
import pg_alter_rules from './grammar/alter.js';
import pg_drop_rules from './grammar/drop.js';
import pg_replication_rules from './grammar/replication.js';
import pg_partition_rules from './grammar/partition.js';

export default grammar(base, {
  name: 'postgres_sql',

  conflicts: $ => [
    [$.object_reference, $._qualified_field],
    [$._column, $._qualified_field],
    [$.object_reference],
    [$.between_expression, $.binary_expression],
    [$.time],
    [$.timestamp],
    [$.create_function],
    [$.list, $.grouping_set],
    [$.list, $.rollup_element],
    [$.list, $.cube_element],
  ],

  externals: $ => [
    $._dollar_quoted_string_start_tag,
    $._dollar_quoted_string_end_tag,
    $._dollar_quoted_string,
  ],

  rules: {

    _dml_write: $ => seq(
      optional($._cte),
      choice(
        $._delete_statement,
        $._insert_statement,
        $._update_statement,
        $._truncate_statement,
        $._copy_statement,
      ),
    ),

    // PostgreSQL: INSERT supports ON CONFLICT and RETURNING
    _insert_statement: $ => seq(
      $.insert,
      optional($.returning),
    ),

    insert: $ => seq(
      $.keyword_insert,
      optional($.keyword_into),
      $.object_reference,
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
      optional($._on_conflict),
    ),

    // PostgreSQL: DELETE supports RETURNING
    _delete_statement: $ => seq(
      $.delete,
      alias($._delete_from, $.from),
      optional($.returning),
    ),

    // PostgreSQL: UPDATE supports RETURNING
    _update_statement: $ => seq(
      $.update,
      optional($.returning),
    ),

    _create_statement: $ => seq(
      choice(
        $.create_table,
        $.create_view,
        $.create_materialized_view,
        $.create_index,
        $.create_function,
        $.create_procedure,
        $.create_type,
        $.create_database,
        $.create_role,
        $.create_sequence,
        $.create_extension,
        $.create_trigger,
        $.create_policy,
        $.create_publication,
        $.create_subscription,
        prec.left(seq(
          $.create_schema,
          repeat($._create_statement),
        )),
      ),
    ),

    create_table: $ => prec.left(
      seq(
        $.keyword_create,
        optional(
          choice(
            $._temporary,
            $.keyword_unlogged,
          )
        ),
        $.keyword_table,
        optional($._if_not_exists),
        $.object_reference,
        choice(
          // PARTITION OF parent [FOR VALUES spec | DEFAULT]
          seq(
            $.keyword_partition,
            $.keyword_of,
            $.object_reference,
            optional(choice($.pg_partition_bound, $.keyword_default)),
          ),
          // Regular table body: optional column_definitions or (LIKE parent)
          seq(
            optional(
              choice(
                $.column_definitions,
                seq('(', $.pg_like_clause, ')'),
              ),
            ),
            optional(seq($.keyword_as, $.create_query)),
            optional($.pg_inherits),
            optional($.pg_partition_by),
          ),
        ),
      ),
    ),

    create_index: $ => seq(
      $.keyword_create,
      optional($.keyword_unique),
      $.keyword_index,
      optional($.keyword_concurrently),
      optional(
        seq(
          optional($._if_not_exists),
          field('column', $._column),
        ),
      ),
      $.keyword_on,
      optional($.keyword_only),
      seq(
        $.object_reference,
        optional(
          seq(
            $.keyword_using,
            choice(
              $.keyword_btree,
              $.keyword_hash,
              $.keyword_gist,
              $.keyword_spgist,
              $.keyword_gin,
              $.keyword_brin,
              field('index_type', $.identifier),
            ),
          ),
        ),
        $.index_fields,
      ),
      optional($.covering_columns),
      optional($.tablespace),
      optional($.where),
    ),

    _optimize_statement: $ => $._vacuum_table,

    _alter_statement: $ => seq(
      choice(
        $.alter_table,
        $.alter_view,
        $.alter_materialized_view,
        $.alter_schema,
        $.alter_type,
        $.alter_index,
        $.alter_database,
        $.alter_role,
        $.alter_sequence,
        $.alter_policy,
        $.alter_publication,
      ),
    ),

    _drop_statement: $ => seq(
      choice(
        $.drop_table,
        $.drop_view,
        $.drop_materialized_view,
        $.drop_index,
        $.drop_type,
        $.drop_schema,
        $.drop_database,
        $.drop_role,
        $.drop_sequence,
        $.drop_extension,
        $.drop_function,
        $.drop_procedure,
        $.drop_publication,
        $.drop_subscription,
      ),
    ),

    _postgres_escape_string: _ => /(e|E)'([^']|\\')*'/,

    _literal_string: $ => prec(
      1,
      choice(
        $._single_quote_string,
        $._postgres_escape_string,
        $._dollar_quoted_string,
      ),
    ),

    _expression: $ => prec(1,
      choice(
        $.literal,
        alias($._qualified_field, $.field),
        $.parameter,
        $.list,
        $.case,
        $.window_function,
        $.subquery,
        $.cast,
        alias($.implicit_cast, $.cast),
        $.exists,
        $.invocation,
        $.binary_expression,
        $.subscript,
        $.unary_expression,
        $.array,
        $.interval,
        $.between_expression,
        $.parenthesized_expression,
        $.object_id,
      ),
    ),

    implicit_cast: $ => seq(
      $._expression,
      '::',
      $._type,
    ),

    object_id: $ => seq(
      $.keyword_object_id,
      wrapped_in_parenthesis(
        seq(
          alias($._literal_string, $.literal),
          optional(
            seq(
              ',',
              alias($._literal_string, $.literal),
            ),
          ),
        ),
      ),
    ),

    _ddl_statement: $ => choice(
      $._create_statement,
      $._alter_statement,
      $._drop_statement,
      $._rename_statement,
      $._optimize_statement,
      $._merge_statement,
      $._refresh_statement,
      $.set_statement,
      $.reset_statement,
      $.comment_statement,
      $._show_statement,
      $.do_statement,
      $.grant_statement,
      $.revoke_statement,
    ),

    // PostgreSQL: DO $$ ... $$ anonymous block
    do_statement: $ => seq(
      $.keyword_do,
      optional(seq($.keyword_language, $.identifier)),
      $._dollar_quoted_string,
    ),

    // PostgreSQL: override cte to add SEARCH/CYCLE clauses (PG 14+)
    cte: $ => seq(
      field('name', $.identifier),
      optional(paren_list(field('argument', $.identifier))),
      $.keyword_as,
      optional(seq(
        optional($.keyword_not),
        $.keyword_materialized,
      )),
      wrapped_in_parenthesis(
        alias(
          choice($._dml_read, $._dml_write),
          $.statement,
        ),
      ),
      optional($._cte_search_clause),
      optional($._cte_cycle_clause),
    ),

    _cte_search_clause: $ => seq(
      $.keyword_search,
      choice($.keyword_breadth, $.keyword_depth),
      $.keyword_first,
      $.keyword_by,
      comma_list($.identifier, true),
      $.keyword_set,
      $.identifier,
    ),

    _cte_cycle_clause: $ => seq(
      $.keyword_cycle,
      comma_list($.identifier, true),
      $.keyword_set,
      $.identifier,
      $.keyword_default,
      $._expression,
      $.keyword_using,
      $.identifier,
    ),

    // PostgreSQL: override _column_constraint to add GENERATED AS IDENTITY
    _column_constraint: $ => prec.left(choice(
      choice(
        $.keyword_null,
        $._not_null,
      ),
      seq(
        $.keyword_references,
        $.object_reference,
        paren_list($.identifier, true),
        repeat(
          seq(
            $.keyword_on,
            choice($.keyword_delete, $.keyword_update),
            choice(
              seq($.keyword_no, $.keyword_action),
              $.keyword_restrict,
              $.keyword_cascade,
              seq(
                $.keyword_set,
                choice($.keyword_null, $.keyword_default),
                optional(paren_list($.identifier, true)),
              ),
            ),
          ),
        ),
      ),
      $._default_expression,
      $._primary_key,
      $.direction,
      $._column_comment,
      $._check_constraint,
      // Computed generated column: GENERATED ALWAYS AS (expr) STORED
      seq(
        optional(seq($.keyword_generated, $.keyword_always)),
        $.keyword_as,
        $._expression,
      ),
      // Identity column: GENERATED {ALWAYS|BY DEFAULT} AS IDENTITY [(opts)]
      seq(
        $.keyword_generated,
        choice(
          $.keyword_always,
          seq($.keyword_by, $.keyword_default),
        ),
        $.keyword_as,
        $.keyword_identity,
        optional(wrapped_in_parenthesis(
          repeat1(choice(
            seq($.keyword_start, optional($.keyword_with), alias($._integer, $.literal)),
            seq($.keyword_increment, optional($.keyword_by), alias($._integer, $.literal)),
            seq($.keyword_minvalue, alias($._integer, $.literal)),
            seq($.keyword_maxvalue, alias($._integer, $.literal)),
            seq($.keyword_no, choice($.keyword_minvalue, $.keyword_maxvalue, $.keyword_cycle)),
            $.keyword_cycle,
          )),
        )),
      ),
      $.keyword_unique,
    )),

    set_statement: $ => seq(
      $.keyword_set,
      choice(
        seq($.keyword_constraints, choice($.keyword_all, $.identifier), choice($.keyword_deferred, $.keyword_immediate)),
        seq($.keyword_transaction, $._transaction_mode),
        seq($.keyword_transaction, $.keyword_snapshot, $._transaction_mode),
        seq($.keyword_session, $.keyword_characteristics, $.keyword_as, $.keyword_transaction, $._transaction_mode),
        seq(
          $.object_reference,
          choice(
            seq('=', choice($.literal, $.keyword_on, $.keyword_off, $.identifier)),
            seq($.keyword_to, choice($.literal, $.keyword_default, $.keyword_on, $.keyword_off, $.identifier)),
          ),
        ),
      ),
    ),

    reset_statement: $ => seq(
      $.keyword_reset,
      choice(
        $.object_reference,
        $.keyword_all,
        seq($.keyword_session, $.keyword_authorization),
        $.keyword_role,
      ),
    ),

    use_statement: $ => seq(
      $.keyword_use,
      optional($.keyword_schema),
      $.object_reference,
    ),

    _show_statement: $ => seq(
      $.keyword_show,
      choice(
        seq($.keyword_create, choice($.keyword_table, $.keyword_view, $.keyword_schema, $.keyword_user), $.object_reference),
        $.keyword_all,
        seq($.keyword_tables, optional(seq($.keyword_from, $.object_reference)), optional(seq($.keyword_like, alias($._literal_string, $.literal)))),
        $.object_reference,
      ),
    ),

    comment_statement: $ => seq(
      $.keyword_comment,
      $.keyword_on,
      $._comment_target,
      $.keyword_is,
      choice(
        $.keyword_null,
        alias($._literal_string, $.literal),
      ),
    ),

    _comment_target: $ => choice(
      $.cast,
      seq($.keyword_column, alias($._qualified_field, $.object_reference)),
      seq($.keyword_database, $.identifier),
      seq($.keyword_extension, $.object_reference),
      seq($.keyword_function, $.object_reference, optional($.function_arguments)),
      seq($.keyword_index, $.object_reference),
      seq($.keyword_materialized, $.keyword_view, $.object_reference),
      seq($.keyword_procedure, $.object_reference, optional($.function_arguments)),
      seq($.keyword_role, $.identifier),
      seq($.keyword_schema, $.identifier),
      seq($.keyword_sequence, $.object_reference),
      seq($.keyword_table, $.object_reference),
      seq($.keyword_tablespace, $.identifier),
      seq($.keyword_trigger, $.identifier, $.keyword_on, $.object_reference),
      seq($.keyword_type, $.identifier),
      seq($.keyword_view, $.object_reference),
    ),

    // PostgreSQL-specific keywords (not ANSI)
    keyword_concurrently:   _ => make_keyword("concurrently"),
    keyword_btree:          _ => make_keyword("btree"),
    keyword_hash:           _ => make_keyword("hash"),
    keyword_gist:           _ => make_keyword("gist"),
    keyword_spgist:         _ => make_keyword("spgist"),
    keyword_gin:            _ => make_keyword("gin"),
    keyword_brin:           _ => make_keyword("brin"),
    keyword_unlogged:       _ => make_keyword("unlogged"),
    keyword_logged:         _ => make_keyword("logged"),
    keyword_extension:      _ => make_keyword("extension"),
    keyword_policy:         _ => make_keyword("policy"),
    keyword_permissive:     _ => make_keyword("permissive"),
    keyword_restrictive:    _ => make_keyword("restrictive"),
    keyword_vacuum:         _ => make_keyword("vacuum"),
    keyword_copy:           _ => make_keyword("copy"),
    keyword_stdin:          _ => make_keyword("stdin"),
    keyword_freeze:         _ => make_keyword("freeze"),
    keyword_escape:         _ => make_keyword("escape"),
    keyword_encoding:       _ => make_keyword("encoding"),
    keyword_force_quote:    _ => make_keyword("force_quote"),
    keyword_quote:          _ => make_keyword("quote"),
    keyword_force_null:     _ => make_keyword("force_null"),
    keyword_force_not_null: _ => make_keyword("force_not_null"),
    keyword_header:         _ => make_keyword("header"),
    keyword_program:        _ => make_keyword("program"),
    keyword_plain:          _ => make_keyword("plain"),
    keyword_extended:       _ => make_keyword("extended"),
    keyword_main:           _ => make_keyword("main"),
    keyword_storage:        _ => make_keyword("storage"),
    keyword_compression:    _ => make_keyword("compression"),
    keyword_returning:      _ => make_keyword("returning"),
    keyword_conflict:       _ => make_keyword("conflict"),
    keyword_upsert:         _ => make_keyword("upsert"),
    keyword_nowait:         _ => make_keyword("nowait"),
    keyword_wait:           _ => make_keyword("wait"),
    keyword_tablespace:     _ => make_keyword("tablespace"),
    keyword_replication:    _ => make_keyword("replication"),
    keyword_oid:            _ => make_keyword("oid"),
    keyword_oids:           _ => make_keyword("oids"),
    keyword_name:           _ => make_keyword("name"),
    keyword_regclass:       _ => make_keyword("regclass"),
    keyword_regnamespace:   _ => make_keyword("regnamespace"),
    keyword_regproc:        _ => make_keyword("regproc"),
    keyword_regtype:        _ => make_keyword("regtype"),
    keyword_publication:    _ => token(prec(1, make_keyword("publication"))),
    keyword_subscription:   _ => token(prec(1, make_keyword("subscription"))),
    keyword_search:         _ => token(prec(1, make_keyword("search"))),
    keyword_breadth:        _ => token(prec(1, make_keyword("breadth"))),
    keyword_depth:          _ => token(prec(1, make_keyword("depth"))),
    keyword_ilike:          _ => token(prec(1, make_keyword("ilike"))),
    keyword_setof:          _ => make_keyword("setof"),
    keyword_variadic:       _ => make_keyword("variadic"),
    keyword_leakproof:      _ => make_keyword("leakproof"),
    keyword_parallel:       _ => make_keyword("parallel"),
    keyword_safe:           _ => make_keyword("safe"),
    keyword_unsafe:         _ => make_keyword("unsafe"),
    keyword_restricted:     _ => make_keyword("restricted"),
    keyword_called:         _ => make_keyword("called"),
    keyword_strict:         _ => make_keyword("strict"),
    keyword_support:        _ => make_keyword("support"),
    keyword_cost:           _ => make_keyword("cost"),
    keyword_ordinality:     _ => make_keyword("ordinality"),
    keyword_attribute:      _ => make_keyword("attribute"),
    keyword_statistics:     _ => make_keyword("statistics"),
    keyword_format:         _ => make_keyword("format"),
    keyword_delimiter:      _ => make_keyword("delimiter"),
    keyword_csv:            _ => make_keyword("csv"),
    keyword_inherits:       _ => token(prec(1, make_keyword("inherits"))),
    keyword_including:      _ => token(prec(1, make_keyword("including"))),
    keyword_excluding:      _ => token(prec(1, make_keyword("excluding"))),
    keyword_indexes:        _ => token(prec(1, make_keyword("indexes"))),

    ...pg_copy_rules,
    ...pg_optimize_rules,
    ...pg_create_rules,
    ...pg_alter_rules,
    ...pg_drop_rules,
    ...pg_replication_rules,
    ...pg_partition_rules,

  },
});
