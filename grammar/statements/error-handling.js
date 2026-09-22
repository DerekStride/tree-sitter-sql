import { comma_list } from "../helpers.js";

// RAISE, ASSERT, EXCEPTION handlers and GET DIAGNOSTICS, as used by PL/pgSQL
// and PL/SQL bodies.
export default {

  raise_statement: $ => seq(
    $.keyword_raise,
    optional(
      choice(
        $.keyword_debug,
        $.keyword_log,
        $.keyword_info,
        $.keyword_notice,
        $.keyword_warning,
        $.keyword_exception,
      ),
    ),
    optional(
      choice(
        seq($.keyword_sqlstate, alias($._literal_string, $.literal)),
        // a format string with its arguments, or a bare condition name
        comma_list($._expression, true),
      ),
    ),
    optional(
      seq(
        $.keyword_using,
        comma_list($.raise_option, true),
      ),
    ),
  ),

  raise_option: $ => seq(
    choice(
      $.keyword_message,
      $.keyword_detail,
      $.keyword_hint,
      $.keyword_errcode,
      $.keyword_column,
      $.keyword_constraint,
      $.keyword_datatype,
      $.keyword_table,
      $.keyword_schema,
    ),
    choice('=', ':='),
    $._expression,
  ),

  assert_statement: $ => seq(
    $.keyword_assert,
    $._expression,
    optional(seq(',', $._expression)),
  ),

  // `exception when ... then ...`, at the end of a block or body
  _exception_handlers: $ => seq(
    $.keyword_exception,
    repeat1($.exception_handler),
  ),

  exception_handler: $ => seq(
    $.keyword_when,
    $._exception_condition,
    repeat(seq($.keyword_or, $._exception_condition)),
    $.keyword_then,
    optional($._procedural_statements),
  ),

  _exception_condition: $ => choice(
    $.keyword_others,
    seq($.keyword_sqlstate, alias($._literal_string, $.literal)),
    $.identifier,
  ),

  get_diagnostics: $ => seq(
    $.keyword_get,
    optional(choice($.keyword_current, $.keyword_stacked)),
    $.keyword_diagnostics,
    comma_list(
      seq(
        alias($._qualified_field, $.field),
        choice('=', ':='),
        $.identifier,
      ),
      true,
    ),
  ),

};
