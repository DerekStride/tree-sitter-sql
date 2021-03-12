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
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_keyword_select = 1,
  sym_keyword_delete = 2,
  sym_keyword_from = 3,
  sym_keyword_join = 4,
  sym_keyword_on = 5,
  sym_keyword_where = 6,
  sym_keyword_order_by = 7,
  sym_keyword_group_by = 8,
  sym_keyword_having = 9,
  sym_keyword_desc = 10,
  sym_keyword_asc = 11,
  sym_keyword_limit = 12,
  sym_keyword_offset = 13,
  sym_keyword_distinct = 14,
  sym_keyword_count = 15,
  sym_keyword_max = 16,
  sym_keyword_min = 17,
  sym_keyword_avg = 18,
  sym_keyword_in = 19,
  sym_keyword_and = 20,
  sym_keyword_or = 21,
  sym_keyword_force = 22,
  sym_keyword_use = 23,
  sym_keyword_index = 24,
  sym_keyword_for = 25,
  sym_comment = 26,
  sym_marginalia = 27,
  anon_sym_SEMI = 28,
  anon_sym_STAR = 29,
  anon_sym_COMMA = 30,
  anon_sym_DOT = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_SLASH = 36,
  anon_sym_PERCENT = 37,
  anon_sym_CARET = 38,
  anon_sym_EQ = 39,
  anon_sym_LT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_BANG_EQ = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_GT = 44,
  sym__literal_string = 45,
  sym__string = 46,
  sym__number = 47,
  sym_program = 48,
  sym_statement = 49,
  sym__select_statement = 50,
  sym__delete_statement = 51,
  sym_delete = 52,
  sym__delete_from = 53,
  sym_select = 54,
  sym_select_expression = 55,
  sym__field_list = 56,
  sym_field = 57,
  sym_function_call = 58,
  sym__function_name = 59,
  sym_from = 60,
  sym_table_expression = 61,
  sym_index_hint = 62,
  sym_join = 63,
  sym_where = 64,
  sym_group_by = 65,
  sym__having = 66,
  sym_order_by = 67,
  sym_order_expression = 68,
  sym_limit = 69,
  sym_offset = 70,
  sym_where_expression = 71,
  sym_predicate = 72,
  sym__expression = 73,
  sym_list = 74,
  sym_direction = 75,
  sym_literal = 76,
  sym_identifier = 77,
  aux_sym__field_list_repeat1 = 78,
  aux_sym_from_repeat1 = 79,
  aux_sym_list_repeat1 = 80,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_delete] = "keyword_delete",
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
  [sym__delete_statement] = "_delete_statement",
  [sym_delete] = "delete",
  [sym__delete_from] = "from",
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
  [sym_keyword_delete] = sym_keyword_delete,
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
  [sym__delete_statement] = sym__delete_statement,
  [sym_delete] = sym_delete,
  [sym__delete_from] = sym_from,
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
  [sym_keyword_delete] = {
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
  [sym__delete_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_delete] = {
    .visible = true,
    .named = true,
  },
  [sym__delete_from] = {
    .visible = true,
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
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
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
    {field_index_name, 3},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
      if (eof) ADVANCE(194);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(243);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead == '>') ADVANCE(253);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(69);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'J') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == '^') ADVANCE(247);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'j') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(243);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead == '>') ADVANCE(253);
      if (lookahead == 'A') ADVANCE(57);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == '^') ADVANCE(247);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(185)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(243);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead == '>') ADVANCE(253);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(38);
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'J') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == '^') ADVANCE(247);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'j') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(184)
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == 'C') ADVANCE(281);
      if (lookahead == 'D') ADVANCE(270);
      if (lookahead == 'M') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(236);
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
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == 'F') ADVANCE(283);
      if (lookahead == 'G') ADVANCE(289);
      if (lookahead == 'J') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'O') ADVANCE(286);
      if (lookahead == 'U') ADVANCE(292);
      if (lookahead == 'W') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'j') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == 'w') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'O') ADVANCE(286);
      if (lookahead == 'W') ADVANCE(269);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(283);
      if (lookahead == 'O') ADVANCE(279);
      if (lookahead == 'U') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(100);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(208);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(207);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(223);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(227);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'F') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(200);
      if (lookahead == 'R') ADVANCE(225);
      END_STATE();
    case 44:
      if (lookahead == 'F') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(220);
      END_STATE();
    case 46:
      if (lookahead == 'G') ADVANCE(206);
      END_STATE();
    case 47:
      if (lookahead == 'H') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 'M') ADVANCE(197);
      END_STATE();
    case 56:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'N') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(23);
      if (lookahead == 'V') ADVANCE(45);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(222);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(200);
      if (lookahead == 'R') ADVANCE(225);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(218);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(198);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(233);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(224);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(232);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(214);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(209);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(211);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(195);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(212);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'U') ADVANCE(75);
      END_STATE();
    case 95:
      if (lookahead == 'U') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'V') ADVANCE(51);
      END_STATE();
    case 97:
      if (lookahead == 'X') ADVANCE(216);
      END_STATE();
    case 98:
      if (lookahead == 'X') ADVANCE(231);
      END_STATE();
    case 99:
      if (lookahead == 'Y') ADVANCE(205);
      END_STATE();
    case 100:
      if (lookahead == 'Y') ADVANCE(204);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(182);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 'v') ADVANCE(127);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 178:
      if (lookahead == 'v') ADVANCE(133);
      END_STATE();
    case 179:
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 180:
      if (lookahead == 'x') ADVANCE(231);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 182:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 183:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(184)
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(243);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead == '>') ADVANCE(253);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(38);
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'J') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == '^') ADVANCE(247);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'j') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(129);
      END_STATE();
    case 185:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(185)
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(243);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead == '>') ADVANCE(253);
      if (lookahead == 'A') ADVANCE(57);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == '^') ADVANCE(247);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 186:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == 'C') ADVANCE(281);
      if (lookahead == 'D') ADVANCE(270);
      if (lookahead == 'M') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 187:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 188:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == 'F') ADVANCE(283);
      if (lookahead == 'G') ADVANCE(289);
      if (lookahead == 'J') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'O') ADVANCE(286);
      if (lookahead == 'U') ADVANCE(292);
      if (lookahead == 'W') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'j') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == 'w') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 189:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'O') ADVANCE(286);
      if (lookahead == 'W') ADVANCE(269);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 190:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(283);
      if (lookahead == 'O') ADVANCE(279);
      if (lookahead == 'U') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 191:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 192:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 193:
      if (eof) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(243);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead == '>') ADVANCE(253);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(69);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'J') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == '^') ADVANCE(247);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'j') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(33);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__literal_string);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(300);
      if (lookahead == 'I') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'D') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'G') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'H') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'M') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'P') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'V') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'X') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'c') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'c') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'd') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'g') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'h') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'v') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'x') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
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
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 9},
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
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_delete] = ACTIONS(1),
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
    [sym_program] = STATE(134),
    [sym_statement] = STATE(131),
    [sym__select_statement] = STATE(130),
    [sym__delete_statement] = STATE(130),
    [sym_delete] = STATE(107),
    [sym_select] = STATE(91),
    [sym_keyword_select] = ACTIONS(5),
    [sym_keyword_delete] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 26,
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
  [40] = 4,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 21,
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
  [78] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 22,
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
  [114] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(9), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(21), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 19,
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
  [151] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 21,
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
  [186] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 16,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(33), 10,
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
  [248] = 6,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 13,
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
  [284] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(49), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 16,
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
  [314] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 16,
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
  [344] = 9,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(51), 1,
      sym_keyword_in,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 11,
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
  [386] = 4,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 15,
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
  [418] = 8,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 12,
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
  [458] = 11,
    ACTIONS(39), 1,
      sym_keyword_or,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(51), 1,
      sym_keyword_in,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(37), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
  [504] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(33), 10,
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
  [536] = 12,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(51), 1,
      sym_keyword_in,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      sym_keyword_and,
    ACTIONS(67), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [582] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(35), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 10,
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
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 11,
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
  [638] = 11,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(79), 1,
      sym__number,
    STATE(3), 1,
      sym_identifier,
    STATE(104), 1,
      sym_select_expression,
    STATE(124), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 2,
      sym_field,
      sym_function_call,
    STATE(102), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(71), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [679] = 4,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 11,
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
  [706] = 11,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(3), 1,
      sym_identifier,
    STATE(103), 1,
      sym_order_expression,
    STATE(124), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 2,
      sym_field,
      sym_function_call,
    STATE(64), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(71), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [747] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 12,
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
  [772] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 11,
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
  [796] = 10,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(51), 1,
      sym_keyword_in,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(57), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [834] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 11,
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
  [858] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(49), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 11,
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
  [882] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 11,
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
  [906] = 14,
    ACTIONS(85), 1,
      sym_keyword_join,
    ACTIONS(87), 1,
      sym_keyword_where,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_group_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_index_hint,
    STATE(53), 1,
      sym_where,
    STATE(70), 1,
      sym_group_by,
    STATE(83), 1,
      sym_order_by,
    STATE(136), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(95), 2,
      sym_keyword_force,
      sym_keyword_use,
    STATE(30), 2,
      sym_join,
      aux_sym_from_repeat1,
  [952] = 12,
    ACTIONS(85), 1,
      sym_keyword_join,
    ACTIONS(87), 1,
      sym_keyword_where,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_group_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_where,
    STATE(67), 1,
      sym_group_by,
    STATE(95), 1,
      sym_order_by,
    STATE(113), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(50), 2,
      sym_join,
      aux_sym_from_repeat1,
  [991] = 12,
    ACTIONS(85), 1,
      sym_keyword_join,
    ACTIONS(87), 1,
      sym_keyword_where,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_group_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_where,
    STATE(67), 1,
      sym_group_by,
    STATE(95), 1,
      sym_order_by,
    STATE(113), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(32), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1030] = 12,
    ACTIONS(85), 1,
      sym_keyword_join,
    ACTIONS(87), 1,
      sym_keyword_where,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_group_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_where,
    STATE(63), 1,
      sym_group_by,
    STATE(94), 1,
      sym_order_by,
    STATE(128), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(50), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1069] = 7,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(103), 1,
      sym__number,
    STATE(3), 1,
      sym_identifier,
    STATE(124), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(125), 2,
      sym_field,
      sym_function_call,
    ACTIONS(71), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1097] = 8,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(103), 1,
      sym__string,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(75), 1,
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
  [1127] = 7,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(103), 1,
      sym__number,
    STATE(3), 1,
      sym_identifier,
    STATE(124), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(60), 2,
      sym_field,
      sym_function_call,
    ACTIONS(71), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1155] = 6,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(103), 1,
      sym__number,
    STATE(47), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(107), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [1181] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(103), 1,
      sym__string,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
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
  [1208] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(103), 1,
      sym__string,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(9), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1235] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(9), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      sym__number,
    ACTIONS(11), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [1254] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(103), 1,
      sym__string,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(14), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1281] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(103), 1,
      sym__string,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(15), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1308] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(103), 1,
      sym__string,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
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
  [1335] = 8,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym__literal_string,
    ACTIONS(115), 1,
      sym__string,
    ACTIONS(117), 1,
      sym__number,
    STATE(18), 1,
      sym_predicate,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(25), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1364] = 8,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym__literal_string,
    ACTIONS(115), 1,
      sym__string,
    ACTIONS(117), 1,
      sym__number,
    STATE(8), 1,
      sym_predicate,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(25), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1393] = 8,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym__literal_string,
    ACTIONS(115), 1,
      sym__string,
    ACTIONS(117), 1,
      sym__number,
    STATE(16), 1,
      sym_predicate,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(25), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1422] = 7,
    ACTIONS(75), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__number,
    ACTIONS(103), 1,
      sym__string,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
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
  [1449] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 9,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      anon_sym_SEMI,
  [1465] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1480] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1495] = 4,
    ACTIONS(125), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(50), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(128), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1514] = 4,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(130), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1532] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(51), 1,
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
  [1550] = 8,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_group_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_group_by,
    STATE(95), 1,
      sym_order_by,
    STATE(113), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1576] = 8,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_group_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_group_by,
    STATE(101), 1,
      sym_order_by,
    STATE(112), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1602] = 8,
    ACTIONS(87), 1,
      sym_keyword_where,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_where,
    STATE(92), 1,
      sym_order_by,
    STATE(132), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1628] = 6,
    ACTIONS(77), 1,
      sym__string,
    ACTIONS(103), 1,
      sym__number,
    STATE(47), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(109), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [1650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(143), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1664] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1682] = 8,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(91), 1,
      sym_keyword_group_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_group_by,
    STATE(94), 1,
      sym_order_by,
    STATE(128), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1708] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(130), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1721] = 5,
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
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [1740] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(9), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      sym__number,
    ACTIONS(11), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__string,
  [1755] = 6,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_order_by,
    STATE(112), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1775] = 4,
    STATE(108), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(149), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1791] = 3,
    ACTIONS(9), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [1805] = 4,
    ACTIONS(153), 1,
      sym_keyword_having,
    STATE(93), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1821] = 6,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      sym_order_by,
    STATE(128), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1841] = 6,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_order_by,
    STATE(119), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1861] = 6,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_order_by,
    STATE(123), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1881] = 6,
    ACTIONS(89), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_order_by,
    STATE(113), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1901] = 4,
    STATE(55), 1,
      sym_table_expression,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 2,
      sym__string,
      sym__number,
  [1916] = 4,
    ACTIONS(161), 1,
      sym_keyword_on,
    STATE(129), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(95), 2,
      sym_keyword_force,
      sym_keyword_use,
  [1931] = 4,
    STATE(29), 1,
      sym_table_expression,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 2,
      sym__string,
      sym__number,
  [1946] = 4,
    ACTIONS(165), 1,
      sym_keyword_from,
    STATE(118), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(95), 2,
      sym_keyword_force,
      sym_keyword_use,
  [1961] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1972] = 4,
    STATE(61), 1,
      sym_identifier,
    STATE(72), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym__string,
      sym__number,
  [1987] = 4,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2001] = 4,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    STATE(121), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2015] = 3,
    STATE(82), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [2027] = 4,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2041] = 4,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2055] = 4,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2069] = 4,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2083] = 3,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym__string,
      sym__number,
  [2095] = 3,
    STATE(80), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [2107] = 3,
    STATE(127), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym__string,
      sym__number,
  [2119] = 3,
    STATE(116), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [2131] = 4,
    ACTIONS(183), 1,
      sym_keyword_offset,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2145] = 4,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2159] = 3,
    STATE(6), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym__string,
      sym__number,
  [2171] = 4,
    ACTIONS(189), 1,
      sym_keyword_from,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2185] = 4,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2199] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2209] = 4,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2223] = 4,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2237] = 3,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 2,
      sym__string,
      sym__number,
  [2249] = 3,
    STATE(106), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [2261] = 3,
    STATE(88), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym__literal_string,
      sym__number,
  [2273] = 4,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2287] = 3,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym__string,
      sym__number,
  [2299] = 4,
    ACTIONS(93), 1,
      sym_keyword_limit,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2313] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(200), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [2322] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(202), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2331] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(204), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [2340] = 3,
    ACTIONS(206), 1,
      sym_keyword_for,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2351] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2360] = 3,
    ACTIONS(210), 1,
      sym_keyword_from,
    STATE(114), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2371] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(212), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2380] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(214), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2389] = 2,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2397] = 2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2405] = 2,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2413] = 2,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2421] = 2,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2429] = 2,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2437] = 2,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2445] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2453] = 2,
    ACTIONS(228), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2461] = 2,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2469] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2477] = 2,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2485] = 2,
    ACTIONS(234), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2493] = 2,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2501] = 2,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2509] = 2,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2517] = 2,
    ACTIONS(240), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2525] = 2,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2533] = 2,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2541] = 2,
    ACTIONS(244), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2549] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2557] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2565] = 2,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2573] = 2,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2581] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2589] = 2,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2597] = 2,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2605] = 2,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 284,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 344,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 458,
  [SMALL_STATE(16)] = 504,
  [SMALL_STATE(17)] = 536,
  [SMALL_STATE(18)] = 582,
  [SMALL_STATE(19)] = 611,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 679,
  [SMALL_STATE(22)] = 706,
  [SMALL_STATE(23)] = 747,
  [SMALL_STATE(24)] = 772,
  [SMALL_STATE(25)] = 796,
  [SMALL_STATE(26)] = 834,
  [SMALL_STATE(27)] = 858,
  [SMALL_STATE(28)] = 882,
  [SMALL_STATE(29)] = 906,
  [SMALL_STATE(30)] = 952,
  [SMALL_STATE(31)] = 991,
  [SMALL_STATE(32)] = 1030,
  [SMALL_STATE(33)] = 1069,
  [SMALL_STATE(34)] = 1097,
  [SMALL_STATE(35)] = 1127,
  [SMALL_STATE(36)] = 1155,
  [SMALL_STATE(37)] = 1181,
  [SMALL_STATE(38)] = 1208,
  [SMALL_STATE(39)] = 1235,
  [SMALL_STATE(40)] = 1254,
  [SMALL_STATE(41)] = 1281,
  [SMALL_STATE(42)] = 1308,
  [SMALL_STATE(43)] = 1335,
  [SMALL_STATE(44)] = 1364,
  [SMALL_STATE(45)] = 1393,
  [SMALL_STATE(46)] = 1422,
  [SMALL_STATE(47)] = 1449,
  [SMALL_STATE(48)] = 1465,
  [SMALL_STATE(49)] = 1480,
  [SMALL_STATE(50)] = 1495,
  [SMALL_STATE(51)] = 1514,
  [SMALL_STATE(52)] = 1532,
  [SMALL_STATE(53)] = 1550,
  [SMALL_STATE(54)] = 1576,
  [SMALL_STATE(55)] = 1602,
  [SMALL_STATE(56)] = 1628,
  [SMALL_STATE(57)] = 1650,
  [SMALL_STATE(58)] = 1664,
  [SMALL_STATE(59)] = 1682,
  [SMALL_STATE(60)] = 1708,
  [SMALL_STATE(61)] = 1721,
  [SMALL_STATE(62)] = 1740,
  [SMALL_STATE(63)] = 1755,
  [SMALL_STATE(64)] = 1775,
  [SMALL_STATE(65)] = 1791,
  [SMALL_STATE(66)] = 1805,
  [SMALL_STATE(67)] = 1821,
  [SMALL_STATE(68)] = 1841,
  [SMALL_STATE(69)] = 1861,
  [SMALL_STATE(70)] = 1881,
  [SMALL_STATE(71)] = 1901,
  [SMALL_STATE(72)] = 1916,
  [SMALL_STATE(73)] = 1931,
  [SMALL_STATE(74)] = 1946,
  [SMALL_STATE(75)] = 1961,
  [SMALL_STATE(76)] = 1972,
  [SMALL_STATE(77)] = 1987,
  [SMALL_STATE(78)] = 2001,
  [SMALL_STATE(79)] = 2015,
  [SMALL_STATE(80)] = 2027,
  [SMALL_STATE(81)] = 2041,
  [SMALL_STATE(82)] = 2055,
  [SMALL_STATE(83)] = 2069,
  [SMALL_STATE(84)] = 2083,
  [SMALL_STATE(85)] = 2095,
  [SMALL_STATE(86)] = 2107,
  [SMALL_STATE(87)] = 2119,
  [SMALL_STATE(88)] = 2131,
  [SMALL_STATE(89)] = 2145,
  [SMALL_STATE(90)] = 2159,
  [SMALL_STATE(91)] = 2171,
  [SMALL_STATE(92)] = 2185,
  [SMALL_STATE(93)] = 2199,
  [SMALL_STATE(94)] = 2209,
  [SMALL_STATE(95)] = 2223,
  [SMALL_STATE(96)] = 2237,
  [SMALL_STATE(97)] = 2249,
  [SMALL_STATE(98)] = 2261,
  [SMALL_STATE(99)] = 2273,
  [SMALL_STATE(100)] = 2287,
  [SMALL_STATE(101)] = 2299,
  [SMALL_STATE(102)] = 2313,
  [SMALL_STATE(103)] = 2322,
  [SMALL_STATE(104)] = 2331,
  [SMALL_STATE(105)] = 2340,
  [SMALL_STATE(106)] = 2351,
  [SMALL_STATE(107)] = 2360,
  [SMALL_STATE(108)] = 2371,
  [SMALL_STATE(109)] = 2380,
  [SMALL_STATE(110)] = 2389,
  [SMALL_STATE(111)] = 2397,
  [SMALL_STATE(112)] = 2405,
  [SMALL_STATE(113)] = 2413,
  [SMALL_STATE(114)] = 2421,
  [SMALL_STATE(115)] = 2429,
  [SMALL_STATE(116)] = 2437,
  [SMALL_STATE(117)] = 2445,
  [SMALL_STATE(118)] = 2453,
  [SMALL_STATE(119)] = 2461,
  [SMALL_STATE(120)] = 2469,
  [SMALL_STATE(121)] = 2477,
  [SMALL_STATE(122)] = 2485,
  [SMALL_STATE(123)] = 2493,
  [SMALL_STATE(124)] = 2501,
  [SMALL_STATE(125)] = 2509,
  [SMALL_STATE(126)] = 2517,
  [SMALL_STATE(127)] = 2525,
  [SMALL_STATE(128)] = 2533,
  [SMALL_STATE(129)] = 2541,
  [SMALL_STATE(130)] = 2549,
  [SMALL_STATE(131)] = 2557,
  [SMALL_STATE(132)] = 2565,
  [SMALL_STATE(133)] = 2573,
  [SMALL_STATE(134)] = 2581,
  [SMALL_STATE(135)] = 2589,
  [SMALL_STATE(136)] = 2597,
  [SMALL_STATE(137)] = 2605,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 6),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 7),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 5),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(76),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(35),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(97),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
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
