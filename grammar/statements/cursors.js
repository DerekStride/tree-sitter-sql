import { comma_list } from "../helpers.js";

// Cursor statements in PL/pgSQL and PL/SQL bodies. The cursor FOR loop lives
// in control-flow.js and cursor declarations next to the other declarations
// in create-function.js.
export default {

  open_statement: $ => seq(
    $.keyword_open,
    $.identifier,
    optional(
      choice(
        // a bound cursor with arguments
        $.list,
        // an unbound cursor variable
        seq(
          optional(seq(optional($.keyword_no), $.keyword_scroll)),
          $.keyword_for,
          $.statement,
        ),
      ),
    ),
  ),

  fetch_statement: $ => seq(
    $.keyword_fetch,
    optional(
      seq(
        $._cursor_direction,
        choice($.keyword_from, $.keyword_in),
      ),
    ),
    $.identifier,
    $.keyword_into,
    comma_list(alias($._qualified_field, $.field), true),
  ),

  move_statement: $ => seq(
    $.keyword_move,
    optional(
      seq(
        $._cursor_direction,
        choice($.keyword_from, $.keyword_in),
      ),
    ),
    $.identifier,
  ),

  close_statement: $ => seq(
    $.keyword_close,
    $.identifier,
  ),

  _cursor_direction: $ => choice(
    $.keyword_next,
    $.keyword_prior,
    $.keyword_first,
    $.keyword_last,
    $.keyword_forward,
    $.keyword_backward,
    // left associativity so that the count is complete before `in cur`, which
    // would otherwise read as the start of `expr in (...)`
    prec.left(
      seq(
        choice($.keyword_absolute, $.keyword_relative),
        $._expression,
      ),
    ),
  ),

};
