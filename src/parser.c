#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8

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
  sym_keyword_force = 21,
  sym_keyword_use = 22,
  sym_keyword_index = 23,
  sym_keyword_for = 24,
  sym_comment = 25,
  sym_marginalia = 26,
  anon_sym_SEMI = 27,
  anon_sym_STAR = 28,
  anon_sym_COMMA = 29,
  anon_sym_DOT = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_SLASH = 35,
  anon_sym_PERCENT = 36,
  anon_sym_CARET = 37,
  anon_sym_EQ = 38,
  anon_sym_LT = 39,
  anon_sym_LT_EQ = 40,
  anon_sym_BANG_EQ = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_GT = 43,
  sym__literal_string = 44,
  sym__string = 45,
  sym__number = 46,
  sym_program = 47,
  sym_statement = 48,
  sym__select_statement = 49,
  sym_select = 50,
  sym_select_expression = 51,
  sym__field_list = 52,
  sym_field = 53,
  sym_function_call = 54,
  sym__function_name = 55,
  sym_from = 56,
  sym_table_expression = 57,
  sym_index_hint = 58,
  sym_join = 59,
  sym_where = 60,
  sym_group_by = 61,
  sym__having = 62,
  sym_order_by = 63,
  sym_order_expression = 64,
  sym_limit = 65,
  sym_offset = 66,
  sym_where_expression = 67,
  sym_predicate = 68,
  sym__expression = 69,
  sym_list = 70,
  sym_direction = 71,
  sym_literal = 72,
  sym_identifier = 73,
  aux_sym__field_list_repeat1 = 74,
  aux_sym_from_repeat1 = 75,
  aux_sym_list_repeat1 = 76,
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
  [sym_keyword_force] = "keyword_force",
  [sym_keyword_use] = "keyword_use",
  [sym_keyword_index] = "keyword_index",
  [sym_keyword_for] = "keyword_for",
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
  [sym_index_hint] = "index_hint",
  [sym_join] = "join",
  [sym_where] = "where",
  [sym_group_by] = "group_by",
  [sym__having] = "_having",
  [sym_order_by] = "order_by",
  [sym_order_expression] = "order_expression",
  [sym_limit] = "limit",
  [sym_offset] = "offset",
  [sym_where_expression] = "where_expression",
  [sym_predicate] = "predicate",
  [sym__expression] = "_expression",
  [sym_list] = "list",
  [sym_direction] = "direction",
  [sym_literal] = "literal",
  [sym_identifier] = "identifier",
  [aux_sym__field_list_repeat1] = "_field_list_repeat1",
  [aux_sym_from_repeat1] = "from_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
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
  [sym_keyword_force] = sym_keyword_force,
  [sym_keyword_use] = sym_keyword_use,
  [sym_keyword_index] = sym_keyword_index,
  [sym_keyword_for] = sym_keyword_for,
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
  [sym_index_hint] = sym_index_hint,
  [sym_join] = sym_join,
  [sym_where] = sym_where,
  [sym_group_by] = sym_group_by,
  [sym__having] = sym__having,
  [sym_order_by] = sym_order_by,
  [sym_order_expression] = sym_order_expression,
  [sym_limit] = sym_limit,
  [sym_offset] = sym_offset,
  [sym_where_expression] = sym_where_expression,
  [sym_predicate] = sym_predicate,
  [sym__expression] = sym__expression,
  [sym_list] = sym_list,
  [sym_direction] = sym_direction,
  [sym_literal] = sym_literal,
  [sym_identifier] = sym_identifier,
  [aux_sym__field_list_repeat1] = aux_sym__field_list_repeat1,
  [aux_sym_from_repeat1] = aux_sym_from_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [sym_keyword_force] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_use] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_index] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_for] = {
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
  [sym_index_hint] = {
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
  [sym_order_expression] = {
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
  [sym_list] = {
    .visible = true,
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
  [aux_sym_from_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function_name = 1,
  field_index_name = 2,
  field_left = 3,
  field_name = 4,
  field_operator = 5,
  field_parameter = 6,
  field_right = 7,
  field_table_alias = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
  [field_index_name] = "index_name",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameter] = "parameter",
  [field_right] = "right",
  [field_table_alias] = "table_alias",
};

static const TSFieldMapSlice ts_field_map_slices[8] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 1},
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
  [10] =
    {field_index_name, 3},
  [11] =
    {field_index_name, 5},
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(184);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(235);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'C') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(18);
      if (lookahead == 'I') ADVANCE(56);
      if (lookahead == 'J') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(44);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'j') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(235);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'I') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(235);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(69);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(18);
      if (lookahead == 'I') ADVANCE(56);
      if (lookahead == 'J') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(44);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'j') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(178)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(288);
      if (lookahead == 'C') ADVANCE(270);
      if (lookahead == 'D') ADVANCE(259);
      if (lookahead == 'M') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == 'F') ADVANCE(272);
      if (lookahead == 'G') ADVANCE(278);
      if (lookahead == 'J') ADVANCE(273);
      if (lookahead == 'L') ADVANCE(260);
      if (lookahead == 'O') ADVANCE(275);
      if (lookahead == 'U') ADVANCE(281);
      if (lookahead == 'W') ADVANCE(258);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == 'j') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(179)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(272);
      if (lookahead == 'O') ADVANCE(268);
      if (lookahead == 'U') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(181)
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(240);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(95);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(197);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(196);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(86);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(212);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(218);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(216);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(191);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 41:
      if (lookahead == 'F') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'G') ADVANCE(209);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(195);
      END_STATE();
    case 44:
      if (lookahead == 'H') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(186);
      END_STATE();
    case 52:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 54:
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(22);
      if (lookahead == 'V') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(211);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 58:
      if (lookahead == 'N') ADVANCE(207);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(187);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(222);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(213);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(221);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 79:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(203);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(200);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 89:
      if (lookahead == 'U') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 'U') ADVANCE(62);
      END_STATE();
    case 91:
      if (lookahead == 'V') ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 'X') ADVANCE(205);
      END_STATE();
    case 93:
      if (lookahead == 'X') ADVANCE(220);
      END_STATE();
    case 94:
      if (lookahead == 'Y') ADVANCE(194);
      END_STATE();
    case 95:
      if (lookahead == 'Y') ADVANCE(193);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 'v') ADVANCE(120);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 169:
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 170:
      if (lookahead == 'x') ADVANCE(205);
      END_STATE();
    case 171:
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(193);
      END_STATE();
    case 174:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(235);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(69);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(18);
      if (lookahead == 'I') ADVANCE(56);
      if (lookahead == 'J') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(44);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'j') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(122);
      END_STATE();
    case 176:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(235);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'I') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 177:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(288);
      if (lookahead == 'C') ADVANCE(270);
      if (lookahead == 'D') ADVANCE(259);
      if (lookahead == 'M') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 178:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(178)
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 179:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(179)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == 'F') ADVANCE(272);
      if (lookahead == 'G') ADVANCE(278);
      if (lookahead == 'J') ADVANCE(273);
      if (lookahead == 'L') ADVANCE(260);
      if (lookahead == 'O') ADVANCE(275);
      if (lookahead == 'U') ADVANCE(281);
      if (lookahead == 'W') ADVANCE(258);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == 'j') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == 'w') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 180:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(272);
      if (lookahead == 'O') ADVANCE(268);
      if (lookahead == 'U') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 'u') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 181:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(181)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 182:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 183:
      if (eof) ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(235);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'C') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'H') ADVANCE(18);
      if (lookahead == 'I') ADVANCE(56);
      if (lookahead == 'J') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(44);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'j') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(38);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__literal_string);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == 'I') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'D') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'G') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'H') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'M') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'P') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'V') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'X') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'c') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'c') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'd') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'g') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'h') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'm') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'v') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
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
    [sym_keyword_force] = ACTIONS(1),
    [sym_keyword_use] = ACTIONS(1),
    [sym_keyword_for] = ACTIONS(1),
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
    [sym_program] = STATE(120),
    [sym_statement] = STATE(119),
    [sym__select_statement] = STATE(117),
    [sym_select] = STATE(81),
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
    ACTIONS(7), 26,
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
      sym_keyword_force,
      sym_keyword_use,
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
  [40] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 22,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_offset,
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
  [76] = 4,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 21,
      sym_keyword_from,
      sym_keyword_join,
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
  [114] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 21,
      sym_keyword_from,
      sym_keyword_join,
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
  [149] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(7), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(13), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 19,
      sym_keyword_from,
      sym_keyword_join,
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
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [186] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 16,
      sym_keyword_join,
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
  [216] = 4,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(31), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 15,
      sym_keyword_join,
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
  [248] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
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
  [280] = 8,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 12,
      sym_keyword_join,
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
  [320] = 11,
    ACTIONS(31), 1,
      sym_keyword_or,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
  [366] = 6,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 13,
      sym_keyword_join,
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
  [402] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(31), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 16,
      sym_keyword_join,
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
  [432] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(57), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 16,
      sym_keyword_join,
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
  [462] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
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
  [494] = 9,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 11,
      sym_keyword_join,
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
  [536] = 12,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(63), 1,
      sym_keyword_and,
    ACTIONS(65), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(61), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [582] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(67), 3,
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
  [611] = 4,
    ACTIONS(7), 1,
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
  [638] = 4,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 11,
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
  [665] = 11,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(79), 1,
      sym__number,
    STATE(4), 1,
      sym_identifier,
    STATE(98), 1,
      sym_select_expression,
    STATE(109), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(55), 2,
      sym_field,
      sym_function_call,
    STATE(100), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(71), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [706] = 3,
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
  [731] = 11,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(81), 1,
      anon_sym_STAR,
    STATE(4), 1,
      sym_identifier,
    STATE(95), 1,
      sym_order_expression,
    STATE(109), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(55), 2,
      sym_field,
      sym_function_call,
    STATE(66), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(71), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [772] = 3,
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
  [796] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(57), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 11,
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
  [820] = 14,
    ACTIONS(83), 1,
      sym_keyword_join,
    ACTIONS(85), 1,
      sym_keyword_where,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(89), 1,
      sym_keyword_group_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_index_hint,
    STATE(53), 1,
      sym_where,
    STATE(63), 1,
      sym_group_by,
    STATE(85), 1,
      sym_order_by,
    STATE(110), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 2,
      sym_keyword_force,
      sym_keyword_use,
    STATE(30), 2,
      sym_join,
      aux_sym_from_repeat1,
  [866] = 3,
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
  [890] = 10,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [928] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
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
  [952] = 12,
    ACTIONS(83), 1,
      sym_keyword_join,
    ACTIONS(85), 1,
      sym_keyword_where,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(89), 1,
      sym_keyword_group_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_where,
    STATE(62), 1,
      sym_group_by,
    STATE(90), 1,
      sym_order_by,
    STATE(108), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 2,
      sym_join,
      aux_sym_from_repeat1,
  [991] = 12,
    ACTIONS(83), 1,
      sym_keyword_join,
    ACTIONS(85), 1,
      sym_keyword_where,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(89), 1,
      sym_keyword_group_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_where,
    STATE(65), 1,
      sym_group_by,
    STATE(76), 1,
      sym_order_by,
    STATE(121), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1030] = 12,
    ACTIONS(83), 1,
      sym_keyword_join,
    ACTIONS(85), 1,
      sym_keyword_where,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(89), 1,
      sym_keyword_group_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_where,
    STATE(62), 1,
      sym_group_by,
    STATE(90), 1,
      sym_order_by,
    STATE(108), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(31), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1069] = 8,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym__string,
    STATE(4), 1,
      sym_identifier,
    STATE(67), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(17), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1099] = 7,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(103), 1,
      sym__number,
    STATE(4), 1,
      sym_identifier,
    STATE(109), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(59), 2,
      sym_field,
      sym_function_call,
    ACTIONS(71), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1127] = 6,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(103), 1,
      sym__number,
    STATE(47), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(105), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [1153] = 7,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(103), 1,
      sym__number,
    STATE(4), 1,
      sym_identifier,
    STATE(109), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(112), 2,
      sym_field,
      sym_function_call,
    ACTIONS(71), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1181] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym__string,
    STATE(4), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(10), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1208] = 8,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym__literal_string,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(115), 1,
      sym__number,
    STATE(18), 1,
      sym_predicate,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(28), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1237] = 8,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym__literal_string,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(115), 1,
      sym__number,
    STATE(15), 1,
      sym_predicate,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(28), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1266] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(7), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      sym__number,
    ACTIONS(9), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [1285] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym__string,
    STATE(4), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(16), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1312] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym__string,
    STATE(4), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(13), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1339] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym__string,
    STATE(4), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(12), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1366] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym__string,
    STATE(4), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(8), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1393] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym__string,
    STATE(4), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(11), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1420] = 8,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym__literal_string,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(115), 1,
      sym__number,
    STATE(9), 1,
      sym_predicate,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(28), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1449] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 9,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      anon_sym_SEMI,
  [1465] = 4,
    ACTIONS(119), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(122), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1484] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(124), 7,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1498] = 4,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(126), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1516] = 8,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(89), 1,
      sym_keyword_group_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_group_by,
    STATE(93), 1,
      sym_order_by,
    STATE(118), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1542] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1556] = 8,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(89), 1,
      sym_keyword_group_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_group_by,
    STATE(90), 1,
      sym_order_by,
    STATE(108), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1582] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1600] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1618] = 8,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(89), 1,
      sym_keyword_group_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_group_by,
    STATE(76), 1,
      sym_order_by,
    STATE(121), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1644] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(141), 7,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1658] = 5,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(103), 1,
      sym__number,
    STATE(47), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(105), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [1677] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(126), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1690] = 6,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_order_by,
    STATE(104), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1710] = 4,
    ACTIONS(147), 1,
      sym_keyword_having,
    STATE(80), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1726] = 6,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_order_by,
    STATE(121), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1746] = 6,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_order_by,
    STATE(108), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1766] = 3,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(9), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [1780] = 6,
    ACTIONS(87), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_order_by,
    STATE(118), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1800] = 4,
    STATE(96), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(151), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1816] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1827] = 4,
    ACTIONS(155), 1,
      sym_keyword_on,
    STATE(111), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 2,
      sym_keyword_force,
      sym_keyword_use,
  [1842] = 4,
    STATE(58), 1,
      sym_identifier,
    STATE(68), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 2,
      sym__string,
      sym__number,
  [1857] = 4,
    STATE(26), 1,
      sym_table_expression,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 2,
      sym__string,
      sym__number,
  [1872] = 4,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1886] = 3,
    STATE(101), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [1898] = 3,
    STATE(77), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [1910] = 4,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1924] = 3,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym__string,
      sym__number,
  [1936] = 4,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(118), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1950] = 4,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1964] = 3,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym__string,
      sym__number,
  [1976] = 3,
    STATE(92), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [1988] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(172), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1998] = 4,
    ACTIONS(174), 1,
      sym_keyword_from,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2012] = 3,
    STATE(99), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [2024] = 3,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2036] = 4,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2050] = 4,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2064] = 4,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2078] = 3,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym__string,
      sym__number,
  [2090] = 3,
    STATE(86), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [2102] = 4,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2116] = 4,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(121), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2130] = 3,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym__string,
      sym__number,
  [2142] = 4,
    ACTIONS(184), 1,
      sym_keyword_offset,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2156] = 4,
    ACTIONS(91), 1,
      sym_keyword_limit,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2170] = 3,
    ACTIONS(188), 1,
      sym_keyword_for,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2181] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(192), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2190] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(194), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2199] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(196), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2208] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(198), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [2217] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2226] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(200), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [2235] = 2,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2243] = 2,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2251] = 2,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2259] = 2,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2267] = 2,
    ACTIONS(208), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2275] = 2,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2283] = 2,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2291] = 2,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2299] = 2,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2307] = 2,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2315] = 2,
    ACTIONS(216), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2323] = 2,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2331] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2339] = 2,
    ACTIONS(222), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2347] = 2,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2355] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2363] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2371] = 2,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2379] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2387] = 2,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2395] = 2,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2403] = 2,
    ACTIONS(234), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 280,
  [SMALL_STATE(11)] = 320,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 402,
  [SMALL_STATE(14)] = 432,
  [SMALL_STATE(15)] = 462,
  [SMALL_STATE(16)] = 494,
  [SMALL_STATE(17)] = 536,
  [SMALL_STATE(18)] = 582,
  [SMALL_STATE(19)] = 611,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 665,
  [SMALL_STATE(22)] = 706,
  [SMALL_STATE(23)] = 731,
  [SMALL_STATE(24)] = 772,
  [SMALL_STATE(25)] = 796,
  [SMALL_STATE(26)] = 820,
  [SMALL_STATE(27)] = 866,
  [SMALL_STATE(28)] = 890,
  [SMALL_STATE(29)] = 928,
  [SMALL_STATE(30)] = 952,
  [SMALL_STATE(31)] = 991,
  [SMALL_STATE(32)] = 1030,
  [SMALL_STATE(33)] = 1069,
  [SMALL_STATE(34)] = 1099,
  [SMALL_STATE(35)] = 1127,
  [SMALL_STATE(36)] = 1153,
  [SMALL_STATE(37)] = 1181,
  [SMALL_STATE(38)] = 1208,
  [SMALL_STATE(39)] = 1237,
  [SMALL_STATE(40)] = 1266,
  [SMALL_STATE(41)] = 1285,
  [SMALL_STATE(42)] = 1312,
  [SMALL_STATE(43)] = 1339,
  [SMALL_STATE(44)] = 1366,
  [SMALL_STATE(45)] = 1393,
  [SMALL_STATE(46)] = 1420,
  [SMALL_STATE(47)] = 1449,
  [SMALL_STATE(48)] = 1465,
  [SMALL_STATE(49)] = 1484,
  [SMALL_STATE(50)] = 1498,
  [SMALL_STATE(51)] = 1516,
  [SMALL_STATE(52)] = 1542,
  [SMALL_STATE(53)] = 1556,
  [SMALL_STATE(54)] = 1582,
  [SMALL_STATE(55)] = 1600,
  [SMALL_STATE(56)] = 1618,
  [SMALL_STATE(57)] = 1644,
  [SMALL_STATE(58)] = 1658,
  [SMALL_STATE(59)] = 1677,
  [SMALL_STATE(60)] = 1690,
  [SMALL_STATE(61)] = 1710,
  [SMALL_STATE(62)] = 1726,
  [SMALL_STATE(63)] = 1746,
  [SMALL_STATE(64)] = 1766,
  [SMALL_STATE(65)] = 1780,
  [SMALL_STATE(66)] = 1800,
  [SMALL_STATE(67)] = 1816,
  [SMALL_STATE(68)] = 1827,
  [SMALL_STATE(69)] = 1842,
  [SMALL_STATE(70)] = 1857,
  [SMALL_STATE(71)] = 1872,
  [SMALL_STATE(72)] = 1886,
  [SMALL_STATE(73)] = 1898,
  [SMALL_STATE(74)] = 1910,
  [SMALL_STATE(75)] = 1924,
  [SMALL_STATE(76)] = 1936,
  [SMALL_STATE(77)] = 1950,
  [SMALL_STATE(78)] = 1964,
  [SMALL_STATE(79)] = 1976,
  [SMALL_STATE(80)] = 1988,
  [SMALL_STATE(81)] = 1998,
  [SMALL_STATE(82)] = 2012,
  [SMALL_STATE(83)] = 2024,
  [SMALL_STATE(84)] = 2036,
  [SMALL_STATE(85)] = 2050,
  [SMALL_STATE(86)] = 2064,
  [SMALL_STATE(87)] = 2078,
  [SMALL_STATE(88)] = 2090,
  [SMALL_STATE(89)] = 2102,
  [SMALL_STATE(90)] = 2116,
  [SMALL_STATE(91)] = 2130,
  [SMALL_STATE(92)] = 2142,
  [SMALL_STATE(93)] = 2156,
  [SMALL_STATE(94)] = 2170,
  [SMALL_STATE(95)] = 2181,
  [SMALL_STATE(96)] = 2190,
  [SMALL_STATE(97)] = 2199,
  [SMALL_STATE(98)] = 2208,
  [SMALL_STATE(99)] = 2217,
  [SMALL_STATE(100)] = 2226,
  [SMALL_STATE(101)] = 2235,
  [SMALL_STATE(102)] = 2243,
  [SMALL_STATE(103)] = 2251,
  [SMALL_STATE(104)] = 2259,
  [SMALL_STATE(105)] = 2267,
  [SMALL_STATE(106)] = 2275,
  [SMALL_STATE(107)] = 2283,
  [SMALL_STATE(108)] = 2291,
  [SMALL_STATE(109)] = 2299,
  [SMALL_STATE(110)] = 2307,
  [SMALL_STATE(111)] = 2315,
  [SMALL_STATE(112)] = 2323,
  [SMALL_STATE(113)] = 2331,
  [SMALL_STATE(114)] = 2339,
  [SMALL_STATE(115)] = 2347,
  [SMALL_STATE(116)] = 2355,
  [SMALL_STATE(117)] = 2363,
  [SMALL_STATE(118)] = 2371,
  [SMALL_STATE(119)] = 2379,
  [SMALL_STATE(120)] = 2387,
  [SMALL_STATE(121)] = 2395,
  [SMALL_STATE(122)] = 2403,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 5),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(69),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 7),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(82),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [232] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
