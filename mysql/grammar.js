import base from '../grammar.js';
import { comma_list, optional_parenthesis, wrapped_in_parenthesis, make_keyword, paren_list } from '../grammar/helpers.js';
import mysql_create_rules from './grammar/create.js';
import mysql_optimize_rules from './grammar/optimize.js';
import mysql_load_data_rules from './grammar/load_data.js';
import mysql_events_rules from './grammar/events.js';

export default grammar(base, {
  name: 'mysql_sql',

  conflicts: $ => [
    [$.object_reference, $._qualified_field],
    [$.field, $._qualified_field],
    [$._column, $._qualified_field],
    [$.object_reference],
    [$.between_expression, $.binary_expression],
    [$.create_function],
    [$.list, $.grouping_set],
    [$.list, $.rollup_element],
    [$.list, $.cube_element],
  ],

  rules: {

    create_table: $ => prec.left(
      seq(
        $.keyword_create,
        optional($._temporary),
        $.keyword_table,
        optional($._if_not_exists),
        $.object_reference,
        seq(
          optional($.column_definitions),
          repeat($.table_option),
          optional(seq($.keyword_as, $.create_query)),
        ),
      ),
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
        $.create_trigger,
        $.create_event,
        prec.left(seq(
          $.create_schema,
          repeat($._create_statement),
        )),
      ),
    ),

    _optimize_statement: $ => $._mariadb_optimize_table,

    _ddl_statement: $ => choice(
      $._create_statement,
      $._alter_statement,
      $._drop_statement,
      $._rename_statement,
      $._optimize_statement,
      $._merge_statement,
      $._refresh_statement,
      $.set_statement,
      $.show_statement,
      $.describe_statement,
      $.grant_statement,
      $.revoke_statement,
    ),

    _dml_write: $ => seq(
      optional($._cte),
      choice(
        $._delete_statement,
        $._insert_statement,
        $._update_statement,
        $._truncate_statement,
        $.load_data_statement,
      ),
    ),

    _dml_read: $ => seq(
      optional(optional_parenthesis($._cte)),
      optional_parenthesis(
        choice(
          $._select_statement,
          $.set_operation,
          $.values_row_statement,
          $.table_statement,
        ),
      ),
    ),

    insert: $ => seq(
      choice(
        $.keyword_insert,
        $.keyword_replace,
      ),
      optional(
        choice(
          $.keyword_low_priority,
          $.keyword_delayed,
          $.keyword_high_priority,
        ),
      ),
      optional($.keyword_ignore),
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
      optional(
        choice(
          $._on_conflict,
          $._on_duplicate_key_update,
        ),
      ),
    ),

    from: $ => seq(
      $.keyword_from,
      optional($.keyword_only),
      comma_list($.relation, true),
      optional($.index_hint),
      repeat(
        choice(
          $.join,
          $.cross_join,
          $.lateral_join,
          $.lateral_cross_join,
        ),
      ),
      optional($.where),
      optional($.group_by),
      optional($.having),
      optional($.window_clause),
      optional($.order_by),
      optional($.limit),
      optional($.offset_fetch_clause),
    ),

    join: $ => seq(
      optional($.keyword_natural),
      optional(
        choice(
          $.keyword_left,
          seq($.keyword_full, $.keyword_outer),
          seq($.keyword_left, $.keyword_outer),
          $.keyword_right,
          seq($.keyword_right, $.keyword_outer),
          $.keyword_inner,
          $.keyword_full,
        ),
      ),
      $.keyword_join,
      $.relation,
      optional($.index_hint),
      optional($.join),
      choice(
        seq(
          $.keyword_on,
          field('predicate', $._expression),
        ),
        seq(
          $.keyword_using,
          alias($._column_list, $.list),
        ),
      ),
    ),

    // MySQL: relation includes JSON_TABLE
    relation: $ => prec.right(
      seq(
        choice(
          $.subquery,
          $.invocation,
          $.json_table,
          $.object_reference,
          wrapped_in_parenthesis($.values),
        ),
        optional($.tablesample),
        optional(
          seq(
            $._alias,
            optional(alias($._column_list, $.list)),
          ),
        ),
      ),
    ),

    // MySQL: GROUP BY supports WITH ROLLUP
    group_by: $ => prec.left(seq(
      $.keyword_group,
      $.keyword_by,
      comma_list(choice(
        $._expression,
        $.rollup_clause,
        $.cube_clause,
        $.grouping_sets_clause,
      ), true),
      optional(seq($.keyword_with, choice($.keyword_rollup, $.keyword_cube))),
    )),

    // MySQL: window functions support IGNORE/RESPECT NULLS
    window_function: $ => seq(
      $.invocation,
      optional(choice(
        seq($.keyword_ignore, $.keyword_nulls),
        seq($.keyword_respect, $.keyword_nulls),
      )),
      $.keyword_over,
      choice(
        $.identifier,
        $.window_specification,
      ),
    ),

    // MySQL: override _column_constraint to add AUTO_INCREMENT, STORED/VIRTUAL, INVISIBLE
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
                  optional(paren_list($.identifier, true))
              ),
            ),
          ),
        ),
      ),
      $._default_expression,
      $._primary_key,
      $.keyword_auto_increment,
      $.direction,
      $._column_comment,
      $._check_constraint,
      // Generated / computed column: GENERATED ALWAYS AS (expr) [STORED|VIRTUAL]
      seq(
        optional(seq($.keyword_generated, $.keyword_always)),
        $.keyword_as,
        wrapped_in_parenthesis($._expression),
        optional(choice($.keyword_stored, $.keyword_virtual)),
      ),
      $.keyword_invisible,
      $.keyword_visible,
      $.keyword_unique,
    )),

    // MySQL: override table_option to support ENGINE=
    table_option: $ => choice(
      seq($.keyword_default, $.keyword_character, $.keyword_set, $.identifier),
      seq($.keyword_collate, $.identifier),
      field('name', $.keyword_default),
      seq(
        field('name', choice($.keyword_engine, $.identifier, $._literal_string)),
        '=',
        field('value', choice($.identifier, $._literal_string, alias($._integer, $.literal))),
      ),
    ),

    // MySQL 8: VALUES ROW(...) constructor
    values_row_statement: $ => seq(
      $.keyword_values,
      comma_list(
        seq(
          $.keyword_row,
          wrapped_in_parenthesis(comma_list($._expression, true)),
        ),
        true,
      ),
    ),

    // MySQL 8: TABLE t [ORDER BY ...] [LIMIT n]
    table_statement: $ => seq(
      $.keyword_table,
      $.object_reference,
      optional($.order_by),
      optional($.limit),
    ),

    // MySQL: JSON_TABLE(expr, path COLUMNS (...))
    json_table: $ => seq(
      $.keyword_json_table,
      '(',
      field('expr', $._expression),
      ',',
      field('path', alias($._literal_string, $.literal)),
      $.keyword_columns,
      '(',
      comma_list($._json_table_column_def, true),
      ')',
      ')',
    ),

    _json_table_column_def: $ => seq(
      field('name', $.identifier),
      field('type', $._type),
      $.keyword_path,
      field('path', alias($._literal_string, $.literal)),
    ),

    // SHOW TABLES / DATABASES / COLUMNS / INDEX / CREATE TABLE / PROCESSLIST / STATUS / VARIABLES / WARNINGS / ERRORS / GRANTS
    show_statement: $ => seq(
      $.keyword_show,
      optional($.keyword_full),
      choice(
        seq(
          $.keyword_tables,
          optional(seq(choice($.keyword_from, $.keyword_in), $.object_reference)),
          optional(seq($.keyword_like, $._expression)),
        ),
        $.keyword_databases,
        seq(
          choice($.keyword_columns, $.keyword_fields),
          $.keyword_from,
          $.object_reference,
        ),
        seq(
          choice($.keyword_index, $.keyword_indexes, $.keyword_keys),
          $.keyword_from,
          $.object_reference,
        ),
        seq($.keyword_create, $.keyword_table, $.object_reference),
        $.keyword_processlist,
        seq($.keyword_status, optional(seq($.keyword_like, $._expression))),
        seq($.keyword_variables, optional(seq($.keyword_like, $._expression))),
        seq($.keyword_warnings, optional($.limit)),
        $.keyword_errors,
        $.keyword_grants,
      ),
    ),

    // DESCRIBE table [column] / DESC table [column]
    describe_statement: $ => seq(
      choice($.keyword_describe, $.keyword_desc),
      $.object_reference,
      optional($.identifier),
    ),

    // Override limit: MySQL also supports LIMIT offset, count (comma form)
    limit: $ => seq(
      $.keyword_limit,
      choice(
        seq(alias($._integer, $.literal), ',', alias($._integer, $.literal)),
        seq($.literal, optional($.offset)),
      ),
    ),

    // MySQL user/session variables: @name and @@name
    user_variable: _ => token(/@@?[a-zA-Z_][a-zA-Z0-9_]*/),

    // Extend _expression to include user variables
    _expression: $ => prec(1,
      choice(
        $.user_variable,
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
      ),
    ),

    _backtick_quoted_string: _ => /`[^`]*`/,

    identifier: $ => choice(
      $._identifier,
      $._double_quote_string,
      $._backtick_quoted_string,
      seq("`", $._identifier, "`"),
    ),

    // MySQL-specific keywords (not ANSI) — also defined in grammar/keywords.js for extraction
    keyword_auto_increment: _ => make_keyword("auto_increment"),
    keyword_stored:         _ => make_keyword("stored"),
    keyword_virtual:        _ => make_keyword("virtual"),
    keyword_optimize:       _ => make_keyword("optimize"),
    keyword_engine:         _ => make_keyword("engine"),
    keyword_high_priority:  _ => make_keyword("high_priority"),
    keyword_low_priority:   _ => make_keyword("low_priority"),
    keyword_delayed:        _ => make_keyword("delayed"),
    keyword_rlike:          _ => choice(make_keyword("rlike"), make_keyword("regexp")),
    keyword_split:          _ => make_keyword("split"),
    keyword_tablets:        _ => make_keyword("tablets"),
    keyword_ignore:         _ => make_keyword("ignore"),
    keyword_fields:         _ => make_keyword("fields"),
    keyword_terminated:     _ => make_keyword("terminated"),
    keyword_lines:          _ => make_keyword("lines"),
    keyword_rollup:         _ => token(prec(1, make_keyword("rollup"))),
    keyword_event:          _ => token(prec(1, make_keyword("event"))),
    keyword_every:          _ => token(prec(1, make_keyword("every"))),
    keyword_starts:         _ => token(prec(1, make_keyword("starts"))),
    keyword_ends:           _ => token(prec(1, make_keyword("ends"))),
    keyword_invisible:      _ => token(prec(1, make_keyword("invisible"))),
    keyword_visible:        _ => token(prec(1, make_keyword("visible"))),
    keyword_enclosed:       _ => token(prec(1, make_keyword("enclosed"))),
    keyword_respect:        _ => token(prec(1, make_keyword("respect"))),
    keyword_completion:     _ => token(prec(1, make_keyword("completion"))),
    keyword_preserve:       _ => token(prec(1, make_keyword("preserve"))),
    keyword_slave:          _ => token(prec(1, make_keyword("slave"))),
    keyword_json_table:     _ => token(prec(1, make_keyword("json_table"))),
    keyword_path:           _ => token(prec(1, make_keyword("path"))),
    keyword_infile:         _ => token(prec(1, make_keyword("infile"))),
    keyword_databases:      _ => token(prec(1, make_keyword("databases"))),
    keyword_processlist:    _ => token(prec(1, make_keyword("processlist"))),
    keyword_status:         _ => token(prec(1, make_keyword("status"))),
    keyword_warnings:       _ => token(prec(1, make_keyword("warnings"))),
    keyword_errors:         _ => token(prec(1, make_keyword("errors"))),
    keyword_variables:      _ => token(prec(1, make_keyword("variables"))),
    keyword_indexes:        _ => token(prec(1, make_keyword("indexes"))),

    ...mysql_create_rules,
    ...mysql_optimize_rules,
    ...mysql_load_data_rules,
    ...mysql_events_rules,

  },
});
