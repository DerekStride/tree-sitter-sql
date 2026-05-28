import { comma_list } from '../../grammar/helpers.js';

export default {

  // target := expression
  plsql_assign: $ => seq(
    field('target', choice($.identifier, $._qualified_field)),
    ':=',
    field('value', $._expression),
  ),

  // IF cond THEN ... [ELSIF cond THEN ...] [ELSE ...] END IF
  plsql_if: $ => seq(
    $.keyword_if,
    field('condition', $._expression),
    $.keyword_then,
    repeat(seq($.statement, ';')),
    repeat(seq(
      $.keyword_elsif,
      field('condition', $._expression),
      $.keyword_then,
      repeat(seq($.statement, ';')),
    )),
    optional(seq(
      $.keyword_else,
      repeat(seq($.statement, ';')),
    )),
    $.keyword_end,
    $.keyword_if,
  ),

  // WHILE condition LOOP ... END LOOP
  plsql_while: $ => seq(
    $.keyword_while,
    field('condition', $._expression),
    $.keyword_loop,
    repeat(seq($.statement, ';')),
    $.keyword_end,
    $.keyword_loop,
  ),

  // LOOP ... END LOOP (infinite / EXIT-controlled)
  plsql_loop: $ => seq(
    $.keyword_loop,
    repeat(seq($.statement, ';')),
    $.keyword_end,
    $.keyword_loop,
  ),

  // FOR i IN lower..upper [REVERSE] LOOP ... END LOOP
  plsql_for: $ => seq(
    $.keyword_for,
    field('index', $.identifier),
    $.keyword_in,
    optional($.keyword_reverse),
    field('lower', $._expression),
    '..',
    field('upper', $._expression),
    $.keyword_loop,
    repeat(seq($.statement, ';')),
    $.keyword_end,
    $.keyword_loop,
  ),

  // RETURN [expression]
  plsql_return: $ => seq(
    $.keyword_return,
    optional($._expression),
  ),

  // EXIT [WHEN condition]
  plsql_exit: $ => seq(
    $.keyword_exit,
    optional(seq($.keyword_when, field('condition', $._expression))),
  ),

  // CONTINUE [WHEN condition]
  plsql_continue: $ => seq(
    $.keyword_continue,
    optional(seq($.keyword_when, field('condition', $._expression))),
  ),

  // NULL (no-op statement)
  plsql_null: $ => $.keyword_null,

};
