import base from '../grammar.js';
import { optional_parenthesis, comma_list, paren_list, make_keyword, wrapped_in_parenthesis } from '../grammar/helpers.js';
import sqlite_pragma_rules from './grammar/pragma.js';
import sqlite_attach_rules from './grammar/attach.js';
import sqlite_virtual_table_rules from './grammar/virtual_table.js';

export default grammar(base, {
  name: 'sqlite_sql',

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

    // Extend statement to add SQLite-specific top-level statements
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
        $.pragma_statement,
        $.attach_statement,
        $.detach_statement,
        $.vacuum_statement,
        $.reindex_statement,
      ),
    ),

    // Extend _create_statement to add CREATE VIRTUAL TABLE
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
        $.create_virtual_table,
        prec.left(seq(
          $.create_schema,
          repeat($._create_statement),
        )),
      ),
    ),

    // Override create_table to support WITHOUT ROWID and STRICT table options
    create_table: $ => prec.left(
      seq(
        $.keyword_create,
        optional($._temporary),
        $.keyword_table,
        optional($._if_not_exists),
        $.object_reference,
        seq(
          optional($.column_definitions),
          optional(seq($.keyword_as, $.create_query)),
        ),
        optional(choice(
          seq($.keyword_without, $.keyword_rowid),
          $.keyword_strict,
          seq($.keyword_without, $.keyword_rowid, ',', $.keyword_strict),
          seq($.keyword_strict, ',', $.keyword_without, $.keyword_rowid),
        )),
      ),
    ),

    // VACUUM [schema] [INTO 'file']
    vacuum_statement: $ => seq(
      $.keyword_vacuum,
      optional(field('schema', $.identifier)),
      optional(seq($.keyword_into, field('path', alias($._literal_string, $.literal)))),
    ),

    // REINDEX [schema.name]
    reindex_statement: $ => seq(
      $.keyword_reindex,
      optional(field('name', $.object_reference)),
    ),

    // Override insert to add: INSERT OR action, ON CONFLICT clause, RETURNING
    insert: $ => seq(
      $.keyword_insert,
      optional(
        seq($.keyword_or, $.sqlite_conflict_action),
      ),
      optional($.keyword_into),
      $.object_reference,
      optional(
        seq($.keyword_as, field('alias', $.identifier)),
      ),
      choice(
        $._insert_values,
        $._set_values,
      ),
      optional($._on_conflict),
      optional($.returning),
    ),

    // REPLACE INTO t ... is syntactic sugar for INSERT OR REPLACE
    // (already covered by base via keyword_replace → insert, but kept here for clarity)

    // Conflict resolution algorithms used in INSERT OR ...
    sqlite_conflict_action: $ => choice(
      $.keyword_rollback,
      $.keyword_abort,
      $.keyword_replace,
      $.keyword_fail,
      $.keyword_ignore,
    ),

    // Override _column_constraint to wire AUTOINCREMENT and add CONFLICT clause on UNIQUE/PK
    _column_constraint: $ => prec.left(choice(
      choice($.keyword_null, $._not_null),
      seq(
        $.keyword_references,
        $.object_reference,
        optional(wrapped_in_parenthesis($.identifier)),
        repeat(
          seq(
            $.keyword_on,
            choice($.keyword_delete, $.keyword_update),
            choice(
              seq($.keyword_no, $.keyword_action),
              $.keyword_restrict,
              $.keyword_cascade,
              seq($.keyword_set, choice($.keyword_null, $.keyword_default)),
            ),
          ),
        ),
      ),
      $._default_expression,
      $._primary_key,
      $.keyword_autoincrement,
      $.direction,
      $._column_comment,
      $._check_constraint,
      seq(
        optional(seq($.keyword_generated, $.keyword_always)),
        $.keyword_as,
        wrapped_in_parenthesis($._expression),
        optional(choice($.keyword_stored, $.keyword_virtual)),
      ),
      $.keyword_unique,
    )),

    // Override relation to add INDEXED BY / NOT INDEXED
    relation: $ => prec.right(
      seq(
        choice(
          $.subquery,
          $.invocation,
          $.object_reference,
          wrapped_in_parenthesis($.values),
        ),
        optional($.tablesample),
        optional(choice(
          seq($.keyword_indexed, $.keyword_by, field('index', $.identifier)),
          seq($.keyword_not, $.keyword_indexed),
        )),
        optional(
          seq(
            $._alias,
            optional(alias($._column_list, $.list)),
          ),
        ),
      ),
    ),

    // SQLite-specific keywords
    keyword_pragma:        _ => make_keyword("pragma"),
    keyword_attach:        _ => make_keyword("attach"),
    keyword_detach:        _ => make_keyword("detach"),
    keyword_rowid:         _ => make_keyword("rowid"),
    keyword_reindex:       _ => make_keyword("reindex"),
    keyword_indexed:       _ => token(prec(1, make_keyword("indexed"))),
    keyword_autoincrement: _ => make_keyword("autoincrement"),
    keyword_rollback:      _ => make_keyword("rollback"),
    keyword_abort:         _ => make_keyword("abort"),
    keyword_fail:          _ => make_keyword("fail"),
    keyword_strict:        _ => make_keyword("strict"),
    keyword_virtual:       _ => make_keyword("virtual"),
    keyword_stored:        _ => make_keyword("stored"),

    ...sqlite_pragma_rules,
    ...sqlite_attach_rules,
    ...sqlite_virtual_table_rules,

  },
});
