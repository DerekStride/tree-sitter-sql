module.exports = grammar({
  name: 'sql',

  extras: $ => [
    /\s\n/,
    /\s/,
    $.comment,
    $.marginalia,
  ],

  precedences: $ => [
    [
      'unary_not',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'binary_in',
      'binary_compare',
      'binary_relation',
      'clause_connective',
    ],
  ],

  rules: {
    program: $ => seq(
      $.statement,
      // TODO: other kinds of definitions
    ),

    keyword_select: _ => make_keyword("select"),
    keyword_from: _ => make_keyword("from"),
    keyword_join: _ => make_keyword("join"),
    keyword_on: _ => make_keyword("on"),
    keyword_where: _ => make_keyword("where"),
    keyword_order_by: _ => make_keyword("order by"),
    keyword_group_by: _ => make_keyword("group by"),
    keyword_having: _ => make_keyword("having"),
    keyword_desc: _ => make_keyword("desc"),
    keyword_asc: _ => make_keyword("asc"),
    keyword_limit: _ => make_keyword("limit"),
    keyword_offset: _ => make_keyword("offset"),
    keyword_distinct: _ => make_keyword("distinct"),
    keyword_count: _ => make_keyword("count"),
    keyword_max: _ => make_keyword("max"),
    keyword_min: _ => make_keyword("min"),
    keyword_avg: _ => make_keyword("avg"),
    keyword_in: _ => make_keyword("in"),
    keyword_and: _ => make_keyword("and"),
    keyword_or: _ => make_keyword("or"),

    comment: _ => /--.*\n/,
    marginalia: _ => /\/'*.*\*\//,

    statement: $ => choice(
      $._select_statement,
    ),

    _select_statement: $ => seq(
      $.select,
      optional($.from),
      ';',
    ),

    select: $ => seq(
      $.keyword_select,
      $.select_expression,
    ),

    select_expression: $ => choice(
      $._field_list,
    ),

    _field_list: $ => choice(
      '*',
      $.literal,
      seq(
        choice(
          $.function_call,
          $.field,
        ),
        repeat(
          seq(
            ',',
            choice(
              $.function_call,
              $.field,
            ),
          ),
        ),
      ),
    ),

    field: $ => choice(
      seq(
        optional(
          seq(
            field('table_alias', $.identifier),
            '.',
          ),
        ),
        field('name', $.identifier),
      ),
    ),

    function_call: $ => seq(
      field('function_name', $._function_name),
      '(',
      field('parameter',
        choice(
          $.function_call,
          field('parameter', $.field),
        )
      ),
      ')',
    ),

    _function_name: $ => choice(
      $.keyword_distinct,
      $.keyword_count,
      $.keyword_max,
      $.keyword_min,
      $.keyword_avg,
    ),

    from: $ => seq(
      $.keyword_from,
      $.table_expression,
      optional($.join),
      optional($.where),
      optional($.group_by),
      optional($.order_by),
      optional($.limit),
    ),

    table_expression: $ => seq(
      field('name', $.identifier),
      optional(field('table_alias', $.identifier)),
    ),

    join: $ => seq(
      $.keyword_join,
      $.table_expression,
      $.keyword_on,
      $.predicate,
    ),

    where: $ => seq(
      $.keyword_where,
      $.where_expression,
    ),

    group_by: $ => seq(
      $.keyword_group_by,
      $.identifier,
      optional($._having),
    ),

    _having: $ => seq(
      $.keyword_having,
      $.predicate,
    ),

    order_by: $ => seq(
      $.keyword_order_by,
      $.field,
      $.direction,
    ),

    limit: $ => seq(
      $.keyword_limit,
      $.literal,
      optional($.offset),
    ),

    offset: $ => seq(
      $.keyword_offset,
      $.literal,
    ),

    where_expression: $ => seq(
      $._expression,
    ),

    predicate: $ => choice(
      ...[
        ['+', 'binary_plus'],
        ['-', 'binary_plus'],
        ['*', 'binary_times'],
        ['/', 'binary_times'],
        ['%', 'binary_times'],
        ['^', 'binary_exp'],
        ['=', 'binary_relation'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['!=', 'binary_relation'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
        [$.keyword_and, 'clause_connective'],
        [$.keyword_or, 'clause_connective'],
        [$.keyword_in, 'binary_in'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      )
    ),

    _expression: $ => choice(
      $.literal,
      $.field,
      $.predicate,
    ),

    // predicate: $ => seq(
    //   $.field,
    //   $.operator,
    //   choice(
    //     prec(2, $.literal),
    //     prec(1, $.field),
    //   ),
    // ),

    operator: $ => choice(
      '=',
      '>',
      '<',
      '+',
      '-',
      '*',
      '/',
      '%',
      '^',
      '<',
      '<=',
      '!=',
      '>=',
      '>',
      $.keyword_in,
    ),

    direction: $ => choice(
      $.keyword_desc,
      $.keyword_asc,
    ),

    literal: $ => prec(2,
      choice(
        $._number,
        $._literal_string,
      ),
    ),

    identifier: $ => choice(
      $._string,
      $._number,
    ),

    _literal_string: _ => /(['"])([a-zA-Z_$][0-9a-zA-Z_]*['"])/,
    _string: _ => /([a-zA-Z_$][0-9a-zA-Z_]*)/,
    _number: _ => /\d+/,
  }

});

function make_keyword(word) {
  return new RegExp(word + "|" + word.toUpperCase());
}
