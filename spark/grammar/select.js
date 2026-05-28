import { comma_list, paren_list, wrapped_in_parenthesis } from "../../grammar/helpers.js";

export default {

  // QUALIFY predicate — post-window-function row filter
  qualify: $ => seq(
    $.keyword_qualify,
    field('predicate', $._expression),
  ),

  // Note: cluster_by / distribute_by / sort_by are defined in Hive (parent grammar)
  // and inherited by Spark. They live there so they are also available in plain Hive.

  // PIVOT ( agg(col) FOR col IN ('v1', 'v2' [, ...]) )
  pivot_clause: $ => seq(
    $.keyword_pivot,
    '(',
    $.invocation,
    $.keyword_for,
    $.identifier,
    $.keyword_in,
    paren_list(
      seq(
        choice(alias($.literal, $.literal), $._expression),
        optional($.keyword_as),
        optional(field('alias', $.identifier)),
      ),
      true,
    ),
    ')',
  ),

  // UNPIVOT [(include|exclude) nulls] ( value_col FOR name_col IN (col1 [, col2]) )
  unpivot_clause: $ => seq(
    $.keyword_unpivot,
    optional(
      choice(
        seq($.keyword_include, $.keyword_nulls),
        seq($.keyword_exclude, $.keyword_nulls),
      ),
    ),
    '(',
    field('value_column', $.identifier),
    $.keyword_for,
    field('name_column', $.identifier),
    $.keyword_in,
    paren_list(
      seq(
        $.identifier,
        optional(seq($.keyword_as, field('alias', $.identifier))),
      ),
      true,
    ),
    ')',
  ),

};
