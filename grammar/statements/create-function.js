import { paren_list, wrapped_in_parenthesis } from "../helpers.js";

export default {

  // This is only used in create function statement, it is not needed to check
  // the start tag match the end one. The usage of this syntax in other
  // context is done by _dollar_string.
  dollar_quote: () => /\$[^\$]*\$/,

  create_function: $ => seq(
    $.keyword_create,
    optional($._or_replace),
    $.keyword_function,
    $.object_reference,
    $.function_arguments,
    $.keyword_returns,
    choice(
      $._type,
      seq($.keyword_setof, $._type),
      seq($.keyword_table, $.column_definitions),
      $.keyword_trigger,
    ),
    repeat(
      choice(
        $.function_language,
        $.function_volatility,
        $.function_leakproof,
        $.function_security,
        $.function_safety,
        $.function_strictness,
        $.function_cost,
        $.function_rows,
        $.function_support,
      ),
    ),
    // ensure that there's only one function body -- other specifiers are less
    // variable but the body can have all manner of conflicting stuff
    $.function_body,
    repeat(
      choice(
        $.function_language,
        $.function_volatility,
        $.function_leakproof,
        $.function_security,
        $.function_safety,
        $.function_strictness,
        $.function_cost,
        $.function_rows,
        $.function_support,
      ),
    ),
  ),

  _argmode: $ => choice(
    $.keyword_in,
    $.keyword_out,
    $.keyword_inout,
    $.keyword_variadic,
    seq($.keyword_in, $.keyword_out),
  ),

  function_argument: $ => seq(
    optional($._argmode),
    optional($.identifier),
    choice($._type, $.type_attribute),
    optional(
      seq(
        choice($.keyword_default, '='),
        $.literal,
      ),
    ),
  ),

    function_arguments: $ => paren_list(
      $.function_argument,
      false,
    ),

  _function_return: $ => seq(
    $.keyword_return,
    optional($._expression),
  ),

  _declare_section: $ => seq(
    $.keyword_declare,
    repeat1(
      choice(
        $.function_declaration,
        $.cursor_declaration,
      ),
    ),
  ),

  function_declaration: $ => choice(
    seq(
      $.identifier,
      optional($.keyword_constant),
      choice($._type, $.type_attribute),
      optional($._not_null),
      optional(
        seq(
          choice(':=', '=', $.keyword_default),
          choice(
            wrapped_in_parenthesis($.statement),
            // TODO are there more possibilities here? We can't use `_expression` since
            // that includes subqueries
            $.literal,
          ),
        ),
      ),
      ';',
    ),
    seq(
      $.identifier,
      $.keyword_alias,
      $.keyword_for,
      choice($.parameter, $.identifier),
      ';',
    ),
  ),

  // `employees.salary%type`, `employees%rowtype`
  type_attribute: $ => seq(
    $.object_reference,
    '%',
    choice($.keyword_type, $.keyword_rowtype),
  ),

  cursor_declaration: $ => seq(
    choice(
      seq(
        $.identifier,
        optional(seq(optional($.keyword_no), $.keyword_scroll)),
        $.keyword_cursor,
      ),
      seq($.keyword_cursor, $.identifier),
    ),
    optional($.function_arguments),
    optional(seq($.keyword_return, choice($._type, $.type_attribute))),
    choice($.keyword_for, $.keyword_is),
    $.statement,
    ';',
  ),

  _function_body_statement: $ => choice(
    $.statement,
    $._function_return,
    $._procedural_statement,
  ),

  _tsql_function_body_statement: $ => seq(
    optional($.keyword_as),
    $.keyword_begin,
    optional($.var_declarations),
    choice(
      repeat($.statement),
      repeat1(seq(
        $.keyword_begin,
        repeat($.statement),
        $.keyword_end,
      )),
    ),
    $._function_return,
    $.keyword_end,
  ),

  function_body: $ => choice(
    seq(
      $._function_return,
      ';'
    ),
    seq(
      $.keyword_begin,
      $.keyword_atomic,
      $._procedural_statements,
      $.keyword_end,
    ),
    seq(
      $.keyword_as,
      alias($._dollar_quoted_string_start_tag, $.dollar_quote),
      optional($.label),
      optional($._declare_section),
      $.keyword_begin,
      $._procedural_statements,
      optional($._exception_handlers),
      $.keyword_end,
      optional(';'),
      alias($._dollar_quoted_string_end_tag, $.dollar_quote),
    ),
    seq(
      $.keyword_as,
      alias(
        choice(
          $._single_quote_string,
          $._double_quote_string,
        ),
        $.literal
      ),
    ),
    seq(
      $.keyword_as,
      alias($._dollar_quoted_string_start_tag, $.dollar_quote),
      // a single SQL statement, e.g. a `language sql` body; a procedural
      // statement here would be ambiguous with the `begin ... end` form
      choice(
        $.statement,
        $._function_return,
      ),
      optional(';'),
      alias($._dollar_quoted_string_end_tag, $.dollar_quote),
    ),
    $._tsql_function_body_statement,
  ),

  function_language: $ => seq(
    $.keyword_language,
    // TODO Maybe we should do different version of function_body_statement in
    // regard to the defined language to match either sql, plsql or
    // plpgsql. Currently the function_body_statement support only sql.  And
    // maybe for other language the function_body should be a string.
    $.identifier
  ),

  function_volatility: $ => choice(
    $.keyword_immutable,
    $.keyword_stable,
    $.keyword_volatile,
  ),

  function_leakproof: $ => seq(
    optional($.keyword_not),
    $.keyword_leakproof,
  ),

  function_security: $ => seq(
    optional($.keyword_external),
    $.keyword_security,
    choice($.keyword_invoker, $.keyword_definer),
  ),

  function_safety: $ => seq(
    $.keyword_parallel,
    choice(
      $.keyword_safe,
      $.keyword_unsafe,
      $.keyword_restricted,
    ),
  ),

  function_strictness: $ => choice(
    seq(
      choice(
        $.keyword_called,
        seq(
          $.keyword_returns,
          $.keyword_null,
        ),
      ),
      $.keyword_on,
      $.keyword_null,
      $.keyword_input,
    ),
    $.keyword_strict,
  ),

  function_cost: $ => seq(
    $.keyword_cost,
    $._natural_number,
  ),

  function_rows: $ => seq(
    $.keyword_rows,
    $._natural_number,
  ),

  function_support: $ => seq(
    $.keyword_support,
    alias($._literal_string, $.literal),
  ),

};
