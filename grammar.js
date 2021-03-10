module.exports = grammar({
  name: 'sql',

  extras: $ => [/\s\n/, /\s/, $.comment],

  rules: {
    program: $ => seq(
      $.statement,
      // TODO: other kinds of definitions
    ),

    keyword_select: _ => make_keyword("select"),
    keyword_from: _ => make_keyword("from"),

    comment: $ => /--.*\n/,

    statement: $ => choice(
      $.select_statement,
    ),

    select_statement: $ => seq(
      $.select,
      optional($.from),
      ';',
    ),

    select: $ => seq(
      $.keyword_select,
      $.select_expression,
    ),

    select_expression: $ => seq(
      choice(
        '*',
        $._identifier,
      )
    ),

    from: $ => seq(
      $.keyword_from,
      $.table_expression,
    ),

    table_expression: $ => seq(
      $.table_name,
    ),

    table_name: $ => $._identifier,

    _identifier: _ => /([a-zA-Z_$][0-9a-zA-Z_]*)|\d+/,
  }

});

function make_keyword(word) {
  return new RegExp(word + "|" + word.toUpperCase());
}
