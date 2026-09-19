import { comma_list, paren_list } from "../helpers.js";

// Procedural statements shared by PL/pgSQL and PL/SQL. They are only reachable
// from a function or procedure body and from a BEGIN ... END block, never from
// a plain top-level statement.
export default {

  _procedural_statement: $ => choice(
    alias($._variable_assignment, $.assignment),
    $.if_statement,
    $.case_statement,
    $.loop_statement,
    $.exit_statement,
    $.continue_statement,
    $.keyword_null,
    $.block,
  ),

  _procedural_statements: $ => repeat1(
    seq(
      $._function_body_statement,
      ';',
    ),
  ),

  _variable_assignment: $ => seq(
    field('left', alias($._qualified_field, $.field)),
    choice(':=', '='),
    field('right', $._expression),
  ),

  label: $ => seq('<<', $.identifier, '>>'),

  if_statement: $ => seq(
    $.keyword_if,
    $._expression,
    $.keyword_then,
    optional($._procedural_statements),
    repeat(
      seq(
        choice($.keyword_elsif, $.keyword_elseif),
        $._expression,
        $.keyword_then,
        optional($._procedural_statements),
      ),
    ),
    optional(
      seq(
        $.keyword_else,
        optional($._procedural_statements),
      ),
    ),
    $.keyword_end,
    $.keyword_if,
  ),

  case_statement: $ => seq(
    $.keyword_case,
    optional($._expression),
    repeat1(
      seq(
        $.keyword_when,
        comma_list($._expression, true),
        $.keyword_then,
        optional($._procedural_statements),
      ),
    ),
    optional(
      seq(
        $.keyword_else,
        optional($._procedural_statements),
      ),
    ),
    $.keyword_end,
    $.keyword_case,
  ),

  loop_statement: $ => seq(
    optional($.label),
    optional(
      choice(
        seq($.keyword_while, $._expression),
        seq(
          $.keyword_for,
          comma_list($.identifier, true),
          $.keyword_in,
          choice(
            $._for_range,
            $.statement,
            // a bound cursor, with or without arguments
            alias($._qualified_field, $.field),
            $.invocation,
          ),
        ),
        seq(
          $.keyword_foreach,
          comma_list($.identifier, true),
          optional(seq($.keyword_slice, $._natural_number)),
          $.keyword_in,
          $.keyword_array,
          $._expression,
        ),
      ),
    ),
    $.keyword_loop,
    optional($._procedural_statements),
    $.keyword_end,
    $.keyword_loop,
    optional($.identifier),
  ),

  _for_range: $ => seq(
    optional($.keyword_reverse),
    choice(
      alias($._range_start_integer, $.literal),
      $._expression,
    ),
    '..',
    $._expression,
    optional(seq($.keyword_by, $._expression)),
  ),

  // `1..10` would otherwise lex as the two decimals `1.` and `.10`; a higher
  // lexical precedence stops the integer from absorbing the dot.
  _range_start_integer: $ => seq(
    optional(choice('-', '+')),
    token(prec(1, /\d+/)),
  ),

  exit_statement: $ => seq(
    $.keyword_exit,
    optional($.identifier),
    optional(seq($.keyword_when, $._expression)),
  ),

  continue_statement: $ => seq(
    $.keyword_continue,
    optional($.identifier),
    optional(seq($.keyword_when, $._expression)),
  ),

};
