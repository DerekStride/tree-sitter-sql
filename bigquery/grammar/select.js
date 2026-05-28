import { paren_list, wrapped_in_parenthesis } from '../../grammar/helpers.js';

export default {

  // QUALIFY <window_function_condition>
  qualify: $ => seq($.keyword_qualify, field('predicate', $._expression)),

  // UNNEST(<array>) [WITH OFFSET]
  // The outer alias ([AS alias]) is handled by the relation rule
  bq_unnest: $ => seq(
    $.keyword_unnest,
    wrapped_in_parenthesis($._expression),
    optional(seq($.keyword_with, $.keyword_offset)),
  ),

  // SELECT * EXCEPT (col1, col2) FROM t
  bq_all_fields_except: $ => seq(
    optional(seq($.object_reference, '.')),
    '*',
    $.keyword_except,
    paren_list($.identifier, true),
  ),

  // SELECT * REPLACE (expr AS col) FROM t
  bq_all_fields_replace: $ => seq(
    optional(seq($.object_reference, '.')),
    '*',
    $.keyword_replace,
    paren_list(
      seq(field('value', $._expression), $.keyword_as, field('alias', $.identifier)),
      true,
    ),
  ),

};
