import { comma_list, paren_list } from "../helpers.js";

export default {
  interbase_generator: $ => choice(
    seq($.keyword_create, $.keyword_generator, $.object_reference),
    seq($.keyword_set, $.keyword_generator, $.object_reference,
      $.keyword_to, optional('-'), alias($._natural_number, $.literal)),
  ),

  interbase_rows: $ => seq(
    $.keyword_rows,
    choice($.literal, $.parameter),
    optional(seq($.keyword_to, choice($.literal, $.parameter))),
  ),

  // InterBase PSQL uses semicolons for simple statements, but not after
  // compound BEGIN/END statements. Keep it separate from the T-SQL bodies.
  interbase_procedure: $ => prec.dynamic(-1, seq(
    choice($.keyword_create, $.keyword_alter),
    $.keyword_procedure,
    field('name', $.object_reference),
    optional($.function_arguments),
    optional(seq($.keyword_returns, $.function_arguments)),
    $.keyword_as,
    repeat($.interbase_declaration),
    $.interbase_block,
  )),

  interbase_declaration: $ => seq(
    $.keyword_declare,
    $.keyword_variable,
    field('name', $.identifier),
    $._type,
    optional(seq(choice('=', $.keyword_default), $._expression)),
    ';',
  ),

  interbase_trigger: $ => seq(
    choice($.keyword_create, $.keyword_alter),
    $.keyword_trigger,
    field('name', $.object_reference),
    optional(seq($.keyword_for, $.object_reference)),
    optional(choice($.keyword_active, $.keyword_inactive)),
    optional(seq(
      choice($.keyword_before, $.keyword_after),
      $._create_trigger_event,
      repeat(seq($.keyword_or, $._create_trigger_event)),
    )),
    optional(seq($.keyword_position, alias($._natural_number, $.literal))),
    $.keyword_as,
    repeat($.interbase_declaration),
    $.interbase_block,
  ),

  interbase_block: $ => seq(
    $.keyword_begin,
    repeat($._interbase_statement),
    repeat($.interbase_handler),
    $.keyword_end,
  ),

  _interbase_statement: $ => choice(
    seq($._interbase_simple_statement, ';'),
    $.interbase_block,
    $.interbase_if,
    $.interbase_while,
    $.interbase_for,
  ),

  _interbase_simple_statement: $ => choice(
    alias($._interbase_sql_statement, $.statement),
    $.interbase_assignment,
    $.interbase_exception,
    $.keyword_suspend,
    $.keyword_exit,
  ),

  // PSQL cannot contain arbitrary DDL (including nested routine definitions).
  // Reusing the entire top-level statement rule here also multiplies parser
  // states across every combination of procedural control flow and SQL DDL.
  _interbase_sql_statement: $ => choice(
    $._dml_read,
    $._dml_write,
    $.interbase_execute_procedure,
  ),

  interbase_assignment: $ => seq(
    field('left', choice(alias($._qualified_field, $.field), $.parameter)),
    '=',
    field('right', $._expression),
  ),

  interbase_if: $ => prec.right(seq(
    $.keyword_if,
    field('condition', $._expression),
    $.keyword_then,
    field('consequence', $._interbase_statement),
    optional(seq($.keyword_else, field('alternative', $._interbase_statement))),
  )),

  interbase_while: $ => seq(
    $.keyword_while,
    field('condition', $._expression),
    $.keyword_do,
    $._interbase_statement,
  ),

  interbase_for: $ => seq(
    $.keyword_for,
    $._select_statement,
    $.keyword_do,
    $._interbase_statement,
  ),

  interbase_into: $ => seq(
    $.keyword_into,
    comma_list(choice($.parameter, $.identifier), true),
  ),

  interbase_execute_procedure: $ => prec.right(seq(
    $.keyword_execute,
    $.keyword_procedure,
    field('name', $.object_reference),
    // Parenthesized argument lists are already SQL list expressions.
    optional(comma_list($._expression, true)),
    optional(seq(
      $.keyword_returning_values,
      choice(
        paren_list(choice($.parameter, $.identifier), true),
        comma_list(choice($.parameter, $.identifier), true),
      ),
    )),
  )),

  interbase_exception: $ => seq(
    $.keyword_exception,
    $.identifier,
    optional(alias($._literal_string, $.literal)),
  ),

  interbase_handler: $ => seq(
    $.keyword_when,
    comma_list(choice(
      $.keyword_any,
      seq($.keyword_sqlcode, optional('-'), alias($._natural_number, $.literal)),
      seq($.keyword_gdscode, $.identifier),
      seq($.keyword_exception, $.identifier),
    ), true),
    $.keyword_do,
    $._interbase_statement,
  ),
};
