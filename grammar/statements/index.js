const { optional_parenthesis, wrapped_in_parenthesis } = require("../helpers");

module.exports = {

  block: $ => seq(
    $.keyword_begin,
    optional(';'),
    repeat(
      seq(
        $.statement,
        ';'
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
    ),
  ),

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

  var_declarations: $ => seq($.keyword_declare, repeat1($.var_declaration)),
  var_declaration: $ => seq(
    $.identifier,
    $._type,
    optional(
      seq(
        choice($.keyword_default, '='),
        $.literal,
      ),
    ),
    optional(','),
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

  ...require("./create"),
  ...require("./alter"),
  ...require("./drop"),
  ...require("./rename"),
  ...require("./optimize"),
  ...require("./merge"),
  ...require("./comment"),

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

  ...require("./delete"),
  ...require("./insert"),
  ...require("./update"),
  ...require("./truncate"),
  ...require("./copy"),

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

  ...require("./select"),
  ...require("./set"),

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
