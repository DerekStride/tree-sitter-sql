import { make_keyword, comma_list, optional_parenthesis, paren_list } from '../../grammar/helpers.js';

export default {

  // SELECT [TOP n [PERCENT] [WITH TIES]] [DISTINCT] ...
  select: $ => seq(
    $.keyword_select,
    optional($.top_clause),
    optional($.keyword_distinct),
    $.select_expression,
  ),

  top_clause: $ => seq(
    $.keyword_top,
    choice(
      alias($._natural_number, $.literal),
      seq('(', $._expression, ')'),
    ),
    optional($.keyword_percent),
    optional(seq($.keyword_with, $.keyword_ties)),
  ),

  // Extend FROM to include CROSS/OUTER APPLY and FOR XML / FOR JSON
  from: $ => seq(
    $.keyword_from,
    optional($.keyword_only),
    comma_list($.relation, true),
    repeat(
      choice(
        $.join,
        $.cross_join,
        $.lateral_join,
        $.lateral_cross_join,
        $.tsql_cross_apply,
        $.tsql_outer_apply,
      ),
    ),
    optional($.where),
    optional($.group_by),
    optional($.having),
    optional($.window_clause),
    optional($.order_by),
    optional($.limit),
    optional($.for_clause),
  ),

  // CROSS APPLY <subquery|function> [alias]
  tsql_cross_apply: $ => seq(
    $.keyword_cross,
    $.keyword_apply,
    choice($.subquery, $.invocation),
    optional($._alias),
  ),

  // OUTER APPLY <subquery|function> [alias]
  tsql_outer_apply: $ => seq(
    $.keyword_outer,
    $.keyword_apply,
    choice($.subquery, $.invocation),
    optional($._alias),
  ),

  // PIVOT (agg_fn(col) FOR pivot_col IN (val [AS alias], ...)) AS alias
  tsql_pivot: $ => seq(
    $.keyword_pivot,
    '(',
    $.invocation,
    $.keyword_for,
    field('pivot_col', $.identifier),
    $.keyword_in,
    paren_list(
      seq($._expression, optional(seq($.keyword_as, field('alias', $.identifier)))),
      true,
    ),
    ')',
  ),

  // UNPIVOT (value_col FOR name_col IN (col, ...)) AS alias
  tsql_unpivot: $ => seq(
    $.keyword_unpivot,
    '(',
    field('value_col', $.identifier),
    $.keyword_for,
    field('name_col', $.identifier),
    $.keyword_in,
    paren_list($.identifier, true),
    ')',
  ),


  // FOR XML { RAW | AUTO | EXPLICIT | PATH ['(root)'] } [, ...options]
  // FOR JSON { AUTO | PATH ['(root)'] } [, WITHOUT_ARRAY_WRAPPER]
  for_clause: $ => seq(
    $.keyword_for,
    choice(
      seq($.keyword_xml, $.tsql_xml_mode),
      seq($.keyword_json, $.tsql_json_mode),
    ),
  ),

  tsql_xml_mode: $ => seq(
    choice(
      make_keyword("raw"),
      make_keyword("auto"),
      make_keyword("explicit"),
      seq(make_keyword("path"), optional(seq('(', alias($._literal_string, $.literal), ')'))),
    ),
    repeat(seq(',', $.tsql_for_xml_option)),
  ),

  tsql_for_xml_option: $ => choice(
    seq(make_keyword("elements"), optional(choice(make_keyword("xsinil"), make_keyword("absent")))),
    make_keyword("xmldata"),
    make_keyword("xmlschema"),
    seq(make_keyword("root"), optional(seq('(', alias($._literal_string, $.literal), ')'))),
    make_keyword("type"),
    make_keyword("binary"),
    make_keyword("base64"),
  ),

  tsql_json_mode: $ => seq(
    choice(
      make_keyword("auto"),
      seq(make_keyword("path"), optional(seq('(', alias($._literal_string, $.literal), ')'))),
    ),
    repeat(seq(',', $.tsql_for_json_option)),
  ),

  tsql_for_json_option: $ => choice(
    seq(make_keyword("root"), optional(seq('(', alias($._literal_string, $.literal), ')'))),
    make_keyword("include_null_values"),
    make_keyword("without_array_wrapper"),
  ),

};
