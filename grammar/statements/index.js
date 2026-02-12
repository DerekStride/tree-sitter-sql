import { comma_list, optional_parenthesis, wrapped_in_parenthesis } from "../helpers.js";

import create_rules from "./create.js";
import alter_rules from "./alter.js";
import drop_rules from "./drop.js";
import rename_rules from "./rename.js";
import optimize_rules from "./optimize.js";
import merge_rules from "./merge.js";
import comment_rules from "./comment.js";
import delete_rules from "./delete.js";
import insert_rules from "./insert.js";
import update_rules from "./update.js";
import truncate_rules from "./truncate.js";
import copy_rules from "./copy.js";
import select_rules from "./select.js";
import set_rules from "./set.js";

export default {

  block: $ => seq(
    $.keyword_begin,
    optional(';'),
    repeat(
      seq(
        $.statement,
        optional(';')
      ),
    ),
    $.keyword_end,
  ),

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
      $.while_statement,
      $.if_statement,
      $.var_declarations,
      $.return_statement,
      $.print_statement,
      $.raiserror_statement,
      $.exec_statement,
      $.goto_statement,
      $.label,
      $.transaction_statement,
    ),
  ),

  transaction_statement: $ => choice(
    prec.right(seq($.keyword_begin, $.keyword_transaction, optional($.identifier))),
    prec.right(seq($.keyword_commit, optional($.keyword_transaction), optional($.identifier))),
    prec.right(seq($.keyword_rollback, optional($.keyword_transaction), optional($.identifier))),
  ),

  return_statement: $ => prec.right(seq(
    $.keyword_return,
    optional($._expression),
  )),

  print_statement: $ => seq(
    $.keyword_print,
    $._expression,
  ),

  raiserror_statement: $ => seq(
    $.keyword_raiserror,
    wrapped_in_parenthesis(
      seq(
        choice($.literal, $._expression),
        ',',
        $._expression,
        ',',
        $._expression,
        repeat(seq(',', $._expression))
      )
    )
  ),

  exec_statement: $ => prec.left(seq(
    choice($.keyword_execute, $.keyword_exec),
    optional(wrapped_in_parenthesis($.identifier)), // for return value or dynamic sql?
    $.object_reference,
    optional(comma_list($.procedure_argument, true)) // reuse procedure_argument for calls too?
  )),

  goto_statement: $ => seq(
    $.keyword_goto,
    $.identifier
  ),

  label: $ => seq(
    $.identifier,
    ':'
  ),

  if_statement: $ => prec.left(seq(
    $.keyword_if,
    $._expression,
    choice(
      seq($.statement, optional(';')),
      $.block
    ),
    optional(seq(
      $.keyword_else,
      choice(
        seq($.statement, optional(';')),
        $.block
      )
    ))
  )),

  while_statement: $ => prec.left(seq(
    $.keyword_while,
    optional_parenthesis($._expression),
    choice(
      seq(
        $.statement,
        optional(';'),
      ),
      seq(
        $.keyword_begin,
        repeat($.statement),
        $.keyword_end,
      ),
    ),
  )),

  var_declarations: $ => prec.left(seq($.keyword_declare, repeat1($.var_declaration))),
  var_declaration: $ => choice(
    seq(
      $.parameter,
      $._type,
      optional(
        seq(
          choice($.keyword_default, '='),
          $._expression,
        ),
      ),
      optional(','),
    ),
    seq(
      $.parameter,
      $.keyword_table,
      $.column_definitions,
      optional(','),
    )
  ),

  _ddl_statement: $ => choice(
    $._create_statement,
    $._alter_statement,
    $._drop_statement,
    $._rename_statement,
    $._optimize_statement,
    $._merge_statement,
    $.comment_statement,
    $.set_statement,
    $.reset_statement,
  ),

  ...create_rules,
  ...alter_rules,
  ...drop_rules,
  ...rename_rules,
  ...optimize_rules,
  ...merge_rules,
  ...comment_rules,

  _dml_write: $ => seq(
    seq(
      optional(
        $._cte,
      ),
      choice(
        $._delete_statement,
        $._insert_statement,
        $._update_statement,
        $._truncate_statement,
        $._copy_statement,
      ),
    ),
  ),

  ...delete_rules,
  ...insert_rules,
  ...update_rules,
  ...truncate_rules,
  ...copy_rules,

  _dml_read: $ => seq(
    optional(optional_parenthesis($._cte)),
    optional_parenthesis(
      choice(
        $._select_statement,
        $.set_operation,
        $._show_statement,
        $._unload_statement,
      ),
    ),
  ),

  ...select_rules,
  ...set_rules,

  _show_statement: $ => seq(
    $.keyword_show,
    choice(
      $._show_create,
      $.keyword_all, // Postgres
      $._show_tables // trino/presto
    ),
  ),

  _show_create: $ => seq(
    $.keyword_create,
    choice(
      // Trino/Presto/MySQL
      $.keyword_schema,
      $.keyword_table,
      seq(optional($.keyword_materialized), $.keyword_view),
      // MySQL
      $.keyword_user,
      $.keyword_trigger,
      $.keyword_procedure,
      $.keyword_function
    ),
    $.object_reference
  ),

  _show_tables: $ => seq(
    $.keyword_tables,
    optional(seq($.keyword_from, $._qualified_field)),
    optional(seq($.keyword_like, $._expression))
  ),

  // athena
  _unload_statement: $ => seq(
    $.keyword_unload,
    wrapped_in_parenthesis($._select_statement),
    $.keyword_to,
    $._single_quote_string,
    $.storage_parameters,
  ),

};
