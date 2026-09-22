import { comma_list } from "../helpers.js";

// Statements that run SQL from inside a PL/pgSQL or PL/SQL body, plus the
// top-level `DO` and `CALL` statements.
export default {

  // `perform` is a select whose result is discarded
  perform_statement: $ => seq(
    $.keyword_perform,
    optional($.keyword_distinct),
    $.select_expression,
    optional($.from),
  ),

  execute_statement: $ => seq(
    $.keyword_execute,
    // PL/SQL
    optional($.keyword_immediate),
    $._expression,
    optional($._into_targets),
    optional(
      seq(
        $.keyword_using,
        comma_list(
          seq(
            optional($._argmode),
            $._expression,
          ),
          true,
        ),
      ),
    ),
  ),

  _into_targets: $ => seq(
    $.keyword_into,
    optional($.keyword_strict),
    comma_list(alias($._qualified_field, $.field), true),
  ),

  do_statement: $ => seq(
    $.keyword_do,
    optional($.function_language),
    choice(
      seq(
        alias($._dollar_quoted_string_start_tag, $.dollar_quote),
        optional($.label),
        optional($._declare_section),
        $.keyword_begin,
        optional($._procedural_statements),
        optional($._exception_handlers),
        $.keyword_end,
        optional(';'),
        alias($._dollar_quoted_string_end_tag, $.dollar_quote),
      ),
      alias($._single_quote_string, $.literal),
    ),
    optional($.function_language),
  ),

  call_statement: $ => seq(
    $.keyword_call,
    $.invocation,
  ),

};
