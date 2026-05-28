import { comma_list, paren_list, wrapped_in_parenthesis } from "../../grammar/helpers.js";

export default {

  // QUALIFY predicate — post-window-function row filter
  qualify: $ => seq(
    $.keyword_qualify,
    field('predicate', $._expression),
  ),

  // CLUSTER BY col [, col] — distribute + sort (shorthand for DISTRIBUTE BY + SORT BY)
  cluster_by: $ => seq(
    $.keyword_cluster,
    $.keyword_by,
    comma_list($._expression, true),
  ),

  // DISTRIBUTE BY col [, col] — controls partition of rows to reducers (no sort)
  distribute_by: $ => seq(
    $.keyword_distribute,
    $.keyword_by,
    comma_list($._expression, true),
  ),

  // SORT BY col [ASC|DESC] [, col] — per-reducer sort (not globally sorted)
  sort_by: $ => seq(
    $.keyword_sort,
    $.keyword_by,
    comma_list($.order_target, true),
  ),

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
