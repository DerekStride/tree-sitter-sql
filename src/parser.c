#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_keyword_select = 1,
  sym_keyword_from = 2,
  sym_keyword_join = 3,
  sym_keyword_on = 4,
  sym_keyword_where = 5,
  sym_keyword_order_by = 6,
  sym_keyword_group_by = 7,
  sym_keyword_having = 8,
  sym_keyword_desc = 9,
  sym_keyword_asc = 10,
  sym_keyword_limit = 11,
  sym_keyword_offset = 12,
  sym_keyword_distinct = 13,
  sym_keyword_count = 14,
  sym_keyword_max = 15,
  sym_keyword_min = 16,
  sym_keyword_avg = 17,
  sym_keyword_in = 18,
  sym_keyword_and = 19,
  sym_keyword_or = 20,
  sym_comment = 21,
  sym_marginalia = 22,
  anon_sym_SEMI = 23,
  anon_sym_STAR = 24,
  anon_sym_COMMA = 25,
  anon_sym_DOT = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_SLASH = 31,
  anon_sym_PERCENT = 32,
  anon_sym_CARET = 33,
  anon_sym_EQ = 34,
  anon_sym_LT = 35,
  anon_sym_LT_EQ = 36,
  anon_sym_BANG_EQ = 37,
  anon_sym_GT_EQ = 38,
  anon_sym_GT = 39,
  sym__literal_string = 40,
  sym__string = 41,
  sym__number = 42,
  sym_program = 43,
  sym_statement = 44,
  sym__select_statement = 45,
  sym_select = 46,
  sym_select_expression = 47,
  sym__field_list = 48,
  sym_field = 49,
  sym_function_call = 50,
  sym__function_name = 51,
  sym_from = 52,
  sym_table_expression = 53,
  sym_join = 54,
  sym_where = 55,
  sym_group_by = 56,
  sym__having = 57,
  sym_order_by = 58,
  sym_limit = 59,
  sym_offset = 60,
  sym_where_expression = 61,
  sym_predicate = 62,
  sym__expression = 63,
  sym_direction = 64,
  sym_literal = 65,
  sym_identifier = 66,
  aux_sym__field_list_repeat1 = 67,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_join] = "keyword_join",
  [sym_keyword_on] = "keyword_on",
  [sym_keyword_where] = "keyword_where",
  [sym_keyword_order_by] = "keyword_order_by",
  [sym_keyword_group_by] = "keyword_group_by",
  [sym_keyword_having] = "keyword_having",
  [sym_keyword_desc] = "keyword_desc",
  [sym_keyword_asc] = "keyword_asc",
  [sym_keyword_limit] = "keyword_limit",
  [sym_keyword_offset] = "keyword_offset",
  [sym_keyword_distinct] = "keyword_distinct",
  [sym_keyword_count] = "keyword_count",
  [sym_keyword_max] = "keyword_max",
  [sym_keyword_min] = "keyword_min",
  [sym_keyword_avg] = "keyword_avg",
  [sym_keyword_in] = "keyword_in",
  [sym_keyword_and] = "keyword_and",
  [sym_keyword_or] = "keyword_or",
  [sym_comment] = "comment",
  [sym_marginalia] = "marginalia",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [sym__literal_string] = "_literal_string",
  [sym__string] = "_string",
  [sym__number] = "_number",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym__select_statement] = "_select_statement",
  [sym_select] = "select",
  [sym_select_expression] = "select_expression",
  [sym__field_list] = "_field_list",
  [sym_field] = "field",
  [sym_function_call] = "function_call",
  [sym__function_name] = "_function_name",
  [sym_from] = "from",
  [sym_table_expression] = "table_expression",
  [sym_join] = "join",
  [sym_where] = "where",
  [sym_group_by] = "group_by",
  [sym__having] = "_having",
  [sym_order_by] = "order_by",
  [sym_limit] = "limit",
  [sym_offset] = "offset",
  [sym_where_expression] = "where_expression",
  [sym_predicate] = "predicate",
  [sym__expression] = "_expression",
  [sym_direction] = "direction",
  [sym_literal] = "literal",
  [sym_identifier] = "identifier",
  [aux_sym__field_list_repeat1] = "_field_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_from] = sym_keyword_from,
  [sym_keyword_join] = sym_keyword_join,
  [sym_keyword_on] = sym_keyword_on,
  [sym_keyword_where] = sym_keyword_where,
  [sym_keyword_order_by] = sym_keyword_order_by,
  [sym_keyword_group_by] = sym_keyword_group_by,
  [sym_keyword_having] = sym_keyword_having,
  [sym_keyword_desc] = sym_keyword_desc,
  [sym_keyword_asc] = sym_keyword_asc,
  [sym_keyword_limit] = sym_keyword_limit,
  [sym_keyword_offset] = sym_keyword_offset,
  [sym_keyword_distinct] = sym_keyword_distinct,
  [sym_keyword_count] = sym_keyword_count,
  [sym_keyword_max] = sym_keyword_max,
  [sym_keyword_min] = sym_keyword_min,
  [sym_keyword_avg] = sym_keyword_avg,
  [sym_keyword_in] = sym_keyword_in,
  [sym_keyword_and] = sym_keyword_and,
  [sym_keyword_or] = sym_keyword_or,
  [sym_comment] = sym_comment,
  [sym_marginalia] = sym_marginalia,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [sym__literal_string] = sym__literal_string,
  [sym__string] = sym__string,
  [sym__number] = sym__number,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym__select_statement] = sym__select_statement,
  [sym_select] = sym_select,
  [sym_select_expression] = sym_select_expression,
  [sym__field_list] = sym__field_list,
  [sym_field] = sym_field,
  [sym_function_call] = sym_function_call,
  [sym__function_name] = sym__function_name,
  [sym_from] = sym_from,
  [sym_table_expression] = sym_table_expression,
  [sym_join] = sym_join,
  [sym_where] = sym_where,
  [sym_group_by] = sym_group_by,
  [sym__having] = sym__having,
  [sym_order_by] = sym_order_by,
  [sym_limit] = sym_limit,
  [sym_offset] = sym_offset,
  [sym_where_expression] = sym_where_expression,
  [sym_predicate] = sym_predicate,
  [sym__expression] = sym__expression,
  [sym_direction] = sym_direction,
  [sym_literal] = sym_literal,
  [sym_identifier] = sym_identifier,
  [aux_sym__field_list_repeat1] = aux_sym__field_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_select] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_from] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_join] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_on] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_where] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_order_by] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_having] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_asc] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_distinct] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_count] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_max] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_min] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_avg] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_in] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_and] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_or] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_marginalia] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__select_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__field_list] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_name] = {
    .visible = false,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_table_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_join] = {
    .visible = true,
    .named = true,
  },
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym__having] = {
    .visible = false,
    .named = true,
  },
  [sym_order_by] = {
    .visible = true,
    .named = true,
  },
  [sym_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_where_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function_name = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_parameter = 5,
  field_right = 6,
  field_table_alias = 7,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameter] = "parameter",
  [field_right] = "right",
  [field_table_alias] = "table_alias",
};

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 2},
    {field_table_alias, 0},
  [3] =
    {field_name, 0},
    {field_table_alias, 1},
  [5] =
    {field_function_name, 0},
    {field_parameter, 2},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(186);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == 'G') ADVANCE(61);
      if (lookahead == 'H') ADVANCE(16);
      if (lookahead == 'I') ADVANCE(47);
      if (lookahead == 'J') ADVANCE(54);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(36);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'j') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'I') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'C') ADVANCE(223);
      if (lookahead == 'D') ADVANCE(212);
      if (lookahead == 'M') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == 'G') ADVANCE(229);
      if (lookahead == 'J') ADVANCE(225);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'O') ADVANCE(227);
      if (lookahead == 'W') ADVANCE(211);
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead == 'j') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'w') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(161);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(160);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(176);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(178);
      END_STATE();
    case 33:
      if (lookahead == 'F') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(173);
      END_STATE();
    case 35:
      if (lookahead == 'G') ADVANCE(159);
      END_STATE();
    case 36:
      if (lookahead == 'H') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(150);
      END_STATE();
    case 44:
      if (lookahead == 'M') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'V') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(175);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(171);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(177);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(167);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(162);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(164);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 72:
      if (lookahead == 'U') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == 'V') ADVANCE(40);
      END_STATE();
    case 75:
      if (lookahead == 'X') ADVANCE(169);
      END_STATE();
    case 76:
      if (lookahead == 'Y') ADVANCE(158);
      END_STATE();
    case 77:
      if (lookahead == 'Y') ADVANCE(157);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 137:
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(158);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 140:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'I') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 142:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'C') ADVANCE(223);
      if (lookahead == 'D') ADVANCE(212);
      if (lookahead == 'M') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 143:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 144:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == 'G') ADVANCE(229);
      if (lookahead == 'J') ADVANCE(225);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'O') ADVANCE(227);
      if (lookahead == 'W') ADVANCE(211);
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead == 'j') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'w') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 145:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 146:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(186);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == 'G') ADVANCE(61);
      if (lookahead == 'H') ADVANCE(16);
      if (lookahead == 'I') ADVANCE(47);
      if (lookahead == 'J') ADVANCE(54);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(36);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'j') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__literal_string);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'I') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'D') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'G') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'H') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'M') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'P') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'V') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'X') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'c') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'g') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'h') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'm') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'p') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'v') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_join] = ACTIONS(1),
    [sym_keyword_on] = ACTIONS(1),
    [sym_keyword_where] = ACTIONS(1),
    [sym_keyword_order_by] = ACTIONS(1),
    [sym_keyword_group_by] = ACTIONS(1),
    [sym_keyword_having] = ACTIONS(1),
    [sym_keyword_desc] = ACTIONS(1),
    [sym_keyword_asc] = ACTIONS(1),
    [sym_keyword_limit] = ACTIONS(1),
    [sym_keyword_offset] = ACTIONS(1),
    [sym_keyword_distinct] = ACTIONS(1),
    [sym_keyword_count] = ACTIONS(1),
    [sym_keyword_max] = ACTIONS(1),
    [sym_keyword_min] = ACTIONS(1),
    [sym_keyword_avg] = ACTIONS(1),
    [sym_keyword_in] = ACTIONS(1),
    [sym_keyword_and] = ACTIONS(1),
    [sym_keyword_or] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__literal_string] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(73),
    [sym_statement] = STATE(88),
    [sym__select_statement] = STATE(86),
    [sym_select] = STATE(63),
    [sym_keyword_select] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(9), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 24,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [38] = 4,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [75] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [109] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(7), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(23), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 16,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [143] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 17,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_offset,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [174] = 6,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(27), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 12,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [209] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(39), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 10,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [240] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_PLUS,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(27), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [279] = 11,
    ACTIONS(27), 1,
      sym_keyword_or,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_PLUS,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(25), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
  [324] = 4,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 14,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [355] = 9,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_PLUS,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(27), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 10,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [396] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 15,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [425] = 12,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_PLUS,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_keyword_in,
    ACTIONS(53), 1,
      sym_keyword_and,
    ACTIONS(55), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [471] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(57), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(39), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 10,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [500] = 4,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [527] = 11,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      sym__literal_string,
    ACTIONS(65), 1,
      sym__string,
    ACTIONS(67), 1,
      sym__number,
    STATE(3), 1,
      sym_identifier,
    STATE(71), 1,
      sym_select_expression,
    STATE(75), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 2,
      sym_field,
      sym_function_call,
    STATE(72), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(59), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [568] = 4,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [595] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 12,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [620] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [644] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [668] = 10,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_PLUS,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(47), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [706] = 7,
    ACTIONS(65), 1,
      sym__string,
    ACTIONS(71), 1,
      sym__number,
    STATE(3), 1,
      sym_identifier,
    STATE(75), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(66), 2,
      sym_field,
      sym_function_call,
    ACTIONS(59), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [734] = 7,
    ACTIONS(65), 1,
      sym__string,
    ACTIONS(71), 1,
      sym__number,
    STATE(3), 1,
      sym_identifier,
    STATE(75), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(87), 2,
      sym_field,
      sym_function_call,
    ACTIONS(59), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [762] = 12,
    ACTIONS(73), 1,
      sym_keyword_join,
    ACTIONS(75), 1,
      sym_keyword_where,
    ACTIONS(77), 1,
      sym_keyword_order_by,
    ACTIONS(79), 1,
      sym_keyword_group_by,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_join,
    STATE(38), 1,
      sym_where,
    STATE(43), 1,
      sym_group_by,
    STATE(56), 1,
      sym_order_by,
    STATE(82), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [800] = 7,
    ACTIONS(63), 1,
      sym__literal_string,
    ACTIONS(67), 1,
      sym__number,
    ACTIONS(71), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    STATE(51), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(14), 4,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_literal,
  [826] = 10,
    ACTIONS(75), 1,
      sym_keyword_where,
    ACTIONS(77), 1,
      sym_keyword_order_by,
    ACTIONS(79), 1,
      sym_keyword_group_by,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_where,
    STATE(44), 1,
      sym_group_by,
    STATE(55), 1,
      sym_order_by,
    STATE(74), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [858] = 6,
    ACTIONS(65), 1,
      sym__string,
    ACTIONS(71), 1,
      sym__number,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 3,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(89), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
  [882] = 6,
    ACTIONS(63), 1,
      sym__literal_string,
    ACTIONS(67), 1,
      sym__number,
    ACTIONS(71), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(12), 4,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_literal,
  [905] = 7,
    ACTIONS(91), 1,
      sym__literal_string,
    ACTIONS(93), 1,
      sym__string,
    ACTIONS(95), 1,
      sym__number,
    STATE(15), 1,
      sym_predicate,
    STATE(18), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(22), 3,
      sym_field,
      sym__expression,
      sym_literal,
  [930] = 6,
    ACTIONS(63), 1,
      sym__literal_string,
    ACTIONS(67), 1,
      sym__number,
    ACTIONS(71), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(13), 4,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_literal,
  [953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(7), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      sym__number,
    ACTIONS(9), 4,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym__string,
  [970] = 6,
    ACTIONS(63), 1,
      sym__literal_string,
    ACTIONS(67), 1,
      sym__number,
    ACTIONS(71), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(7), 4,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_literal,
  [993] = 6,
    ACTIONS(63), 1,
      sym__literal_string,
    ACTIONS(67), 1,
      sym__number,
    ACTIONS(71), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(11), 4,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_literal,
  [1016] = 6,
    ACTIONS(63), 1,
      sym__literal_string,
    ACTIONS(67), 1,
      sym__number,
    ACTIONS(71), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(10), 4,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_literal,
  [1039] = 6,
    ACTIONS(63), 1,
      sym__literal_string,
    ACTIONS(67), 1,
      sym__number,
    ACTIONS(71), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(9), 4,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_literal,
  [1062] = 7,
    ACTIONS(91), 1,
      sym__literal_string,
    ACTIONS(93), 1,
      sym__string,
    ACTIONS(95), 1,
      sym__number,
    STATE(8), 1,
      sym_predicate,
    STATE(18), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(22), 3,
      sym_field,
      sym__expression,
      sym_literal,
  [1087] = 8,
    ACTIONS(77), 1,
      sym_keyword_order_by,
    ACTIONS(79), 1,
      sym_keyword_group_by,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_group_by,
    STATE(55), 1,
      sym_order_by,
    STATE(74), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1113] = 8,
    ACTIONS(77), 1,
      sym_keyword_order_by,
    ACTIONS(79), 1,
      sym_keyword_group_by,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_group_by,
    STATE(60), 1,
      sym_order_by,
    STATE(85), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1139] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 7,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1153] = 4,
    ACTIONS(103), 1,
      sym_keyword_having,
    STATE(54), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1169] = 6,
    ACTIONS(77), 1,
      sym_keyword_order_by,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_order_by,
    STATE(78), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1189] = 6,
    ACTIONS(77), 1,
      sym_keyword_order_by,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_order_by,
    STATE(74), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1209] = 6,
    ACTIONS(77), 1,
      sym_keyword_order_by,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_order_by,
    STATE(85), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1229] = 4,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [1244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(112), 4,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1255] = 5,
    ACTIONS(65), 1,
      sym__string,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(87), 1,
      sym_keyword_on,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1272] = 4,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(114), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [1287] = 4,
    STATE(25), 1,
      sym_table_expression,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(118), 2,
      sym__string,
      sym__number,
  [1302] = 4,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(120), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [1317] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(122), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1328] = 4,
    STATE(3), 1,
      sym_identifier,
    STATE(61), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 2,
      sym__string,
      sym__number,
  [1343] = 4,
    STATE(47), 1,
      sym_identifier,
    STATE(81), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(124), 2,
      sym__string,
      sym__number,
  [1358] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(126), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1368] = 4,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1382] = 4,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1396] = 3,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(9), 2,
      sym_keyword_on,
      sym__string,
  [1408] = 3,
    STATE(64), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      sym__literal_string,
      sym__number,
  [1420] = 3,
    STATE(41), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 2,
      sym__string,
      sym__number,
  [1432] = 4,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1446] = 3,
    STATE(70), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(128), 2,
      sym_keyword_desc,
      sym_keyword_asc,
  [1458] = 3,
    STATE(76), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      sym__literal_string,
      sym__number,
  [1470] = 4,
    ACTIONS(130), 1,
      sym_keyword_from,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1484] = 4,
    ACTIONS(134), 1,
      sym_keyword_offset,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1498] = 3,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 2,
      sym__string,
      sym__number,
  [1510] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 3,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1520] = 3,
    STATE(4), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 2,
      sym__string,
      sym__number,
  [1532] = 4,
    ACTIONS(81), 1,
      sym_keyword_limit,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1546] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(140), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1555] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(142), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1564] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(144), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [1573] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(146), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [1582] = 2,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1590] = 2,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1598] = 2,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1606] = 2,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1614] = 2,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1622] = 2,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1630] = 2,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1638] = 2,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1646] = 2,
    ACTIONS(160), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1654] = 2,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1662] = 2,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1670] = 2,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1678] = 2,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1686] = 2,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1694] = 2,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1702] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 209,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 279,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 425,
  [SMALL_STATE(15)] = 471,
  [SMALL_STATE(16)] = 500,
  [SMALL_STATE(17)] = 527,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 595,
  [SMALL_STATE(20)] = 620,
  [SMALL_STATE(21)] = 644,
  [SMALL_STATE(22)] = 668,
  [SMALL_STATE(23)] = 706,
  [SMALL_STATE(24)] = 734,
  [SMALL_STATE(25)] = 762,
  [SMALL_STATE(26)] = 800,
  [SMALL_STATE(27)] = 826,
  [SMALL_STATE(28)] = 858,
  [SMALL_STATE(29)] = 882,
  [SMALL_STATE(30)] = 905,
  [SMALL_STATE(31)] = 930,
  [SMALL_STATE(32)] = 953,
  [SMALL_STATE(33)] = 970,
  [SMALL_STATE(34)] = 993,
  [SMALL_STATE(35)] = 1016,
  [SMALL_STATE(36)] = 1039,
  [SMALL_STATE(37)] = 1062,
  [SMALL_STATE(38)] = 1087,
  [SMALL_STATE(39)] = 1113,
  [SMALL_STATE(40)] = 1139,
  [SMALL_STATE(41)] = 1153,
  [SMALL_STATE(42)] = 1169,
  [SMALL_STATE(43)] = 1189,
  [SMALL_STATE(44)] = 1209,
  [SMALL_STATE(45)] = 1229,
  [SMALL_STATE(46)] = 1244,
  [SMALL_STATE(47)] = 1255,
  [SMALL_STATE(48)] = 1272,
  [SMALL_STATE(49)] = 1287,
  [SMALL_STATE(50)] = 1302,
  [SMALL_STATE(51)] = 1317,
  [SMALL_STATE(52)] = 1328,
  [SMALL_STATE(53)] = 1343,
  [SMALL_STATE(54)] = 1358,
  [SMALL_STATE(55)] = 1368,
  [SMALL_STATE(56)] = 1382,
  [SMALL_STATE(57)] = 1396,
  [SMALL_STATE(58)] = 1408,
  [SMALL_STATE(59)] = 1420,
  [SMALL_STATE(60)] = 1432,
  [SMALL_STATE(61)] = 1446,
  [SMALL_STATE(62)] = 1458,
  [SMALL_STATE(63)] = 1470,
  [SMALL_STATE(64)] = 1484,
  [SMALL_STATE(65)] = 1498,
  [SMALL_STATE(66)] = 1510,
  [SMALL_STATE(67)] = 1520,
  [SMALL_STATE(68)] = 1532,
  [SMALL_STATE(69)] = 1546,
  [SMALL_STATE(70)] = 1555,
  [SMALL_STATE(71)] = 1564,
  [SMALL_STATE(72)] = 1573,
  [SMALL_STATE(73)] = 1582,
  [SMALL_STATE(74)] = 1590,
  [SMALL_STATE(75)] = 1598,
  [SMALL_STATE(76)] = 1606,
  [SMALL_STATE(77)] = 1614,
  [SMALL_STATE(78)] = 1622,
  [SMALL_STATE(79)] = 1630,
  [SMALL_STATE(80)] = 1638,
  [SMALL_STATE(81)] = 1646,
  [SMALL_STATE(82)] = 1654,
  [SMALL_STATE(83)] = 1662,
  [SMALL_STATE(84)] = 1670,
  [SMALL_STATE(85)] = 1678,
  [SMALL_STATE(86)] = 1686,
  [SMALL_STATE(87)] = 1694,
  [SMALL_STATE(88)] = 1702,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
