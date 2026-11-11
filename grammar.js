import keyword_rules from "./grammar/keywords.js";
import type_rules from "./grammar/types.js";
import column_list_rules from "./grammar/column-lists.js";
import expression_rules from "./grammar/expressions.js";
import transaction_rules from "./grammar/transactions.js";
import statement_rules from "./grammar/statements/index.js";

export default grammar({
  name: 'sql',

  extras: $ => [
    /\s\n/,
    /\s/,
    $.comment,
    $.marginalia,
    $.meta_command,
  ],


  externals: $ => [
    $._dollar_quoted_string_start_tag,
    $._dollar_quoted_string_end_tag,
    $._dollar_quoted_string,
  ],

  conflicts: $ => [
    [$.object_reference, $._qualified_field],
    [$.field, $._qualified_field],
    [$._column, $._qualified_field],
    [$.object_reference],
    [$.object_reference, $.function_argument],
    [$.between_expression, $.binary_expression],
    [$._subquery_body, $._select_statement],
    [$.subquery, $._subquery_body],
    [$.time],
    [$.timestamp],
    [$.all_fields],
    [$.values],
  ],

  precedences: $ => [
    [
      'subscript',
      'unary_sign',
      'binary_is',
      'unary_not',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'unary_other',
      'binary_other',
      'binary_in',
      'binary_compare',
      'binary_relation',
      'pattern_matching',
      'between',
      'clause_connective',
      'clause_disjunctive',
    ],
    [$._qualified_field, 'subscript'],
  ],

  word: $ => $._identifier,

  rules: {
    program: $ => seq(
      // any number of transactions, statements, or blocks with a terminating ;
      repeat(
        seq(
          choice(
            $.transaction,
            $.statement,
            $.block,
          ),
          ';',
        ),
      ),
      // optionally, a single statement without a terminating ;
      optional(
        $.statement,
      ),
    ),

    comment: _ => /--.*/,
    // https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment
    marginalia: _ => /\/\*[^*]*\*+(?:[^/*][^*]*\*+)*\//,
    // psql lexes an unquoted backslash by itself (psqlscanslash.l): the command name ends at
    // whitespace or a backslash, its arguments at the end of the line or the next unquoted
    // backslash, and `\\` returns to SQL. `\;` and `\:` belong to the SQL lexer instead.
    // https://www.postgresql.org/docs/current/app-psql.html#APP-PSQL-META-COMMANDS
    meta_command: _ => token(choice(
      '\\\\',
      seq(
        /\\[^\s\\;:][^\s\\]*/,
        repeat(choice(
          /[^\\\n'"`]/,
          /'([^'\\\n]|\\[^\n])*'/,
          /"[^"\n]*"/,
          /`[^`\n]*`/,
        )),
      ),
      // these commands take the rest of the line as it is written
      seq(/\\(!|\?|copy|ef|ev|h|help|sf\+?|sv\+?)/, /[ \t\f\r][^\n]*/),
      // and so do these once their argument opens with a pipe
      seq(/\\(g|gx|o|out|w|write)[ \t\f\r]+\|/, /[^\n]*/),
    )),

    ...keyword_rules,
    ...type_rules,
    ...column_list_rules,
    ...expression_rules,
    ...transaction_rules,
    ...statement_rules,

  }

});
