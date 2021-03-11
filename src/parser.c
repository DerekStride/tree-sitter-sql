#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_keyword_select = 1,
  sym_keyword_from = 2,
  sym_keyword_where = 3,
  sym_keyword_order_by = 4,
  sym_keyword_group_by = 5,
  sym_keyword_having = 6,
  sym_keyword_desc = 7,
  sym_keyword_asc = 8,
  sym_keyword_limit = 9,
  sym_keyword_offset = 10,
  sym_keyword_distinct = 11,
  sym_keyword_count = 12,
  sym_keyword_max = 13,
  sym_keyword_min = 14,
  sym_keyword_avg = 15,
  sym_comment = 16,
  sym_marginalia = 17,
  anon_sym_SEMI = 18,
  anon_sym_STAR = 19,
  anon_sym_COMMA = 20,
  anon_sym_DOT = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_AND = 24,
  anon_sym_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_LT = 27,
  sym__literal_string = 28,
  sym__string = 29,
  sym__number = 30,
  sym_program = 31,
  sym_statement = 32,
  sym__select_statement = 33,
  sym_select = 34,
  sym_select_expression = 35,
  sym__field_list = 36,
  sym_field = 37,
  sym_function_call = 38,
  sym__function_name = 39,
  sym_from = 40,
  sym_table_expression = 41,
  sym_where = 42,
  sym_group_by = 43,
  sym__having = 44,
  sym_order_by = 45,
  sym_limit = 46,
  sym_offset = 47,
  sym_where_expression = 48,
  sym_predicate = 49,
  sym_operator = 50,
  sym_direction = 51,
  sym_literal = 52,
  sym_identifier = 53,
  aux_sym__field_list_repeat1 = 54,
  aux_sym_where_expression_repeat1 = 55,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_from] = "keyword_from",
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
  [sym_comment] = "comment",
  [sym_marginalia] = "marginalia",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AND] = "AND",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
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
  [sym_where] = "where",
  [sym_group_by] = "group_by",
  [sym__having] = "_having",
  [sym_order_by] = "order_by",
  [sym_limit] = "limit",
  [sym_offset] = "offset",
  [sym_where_expression] = "where_expression",
  [sym_predicate] = "predicate",
  [sym_operator] = "operator",
  [sym_direction] = "direction",
  [sym_literal] = "literal",
  [sym_identifier] = "identifier",
  [aux_sym__field_list_repeat1] = "_field_list_repeat1",
  [aux_sym_where_expression_repeat1] = "where_expression_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_from] = sym_keyword_from,
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
  [sym_comment] = sym_comment,
  [sym_marginalia] = sym_marginalia,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
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
  [sym_where] = sym_where,
  [sym_group_by] = sym_group_by,
  [sym__having] = sym__having,
  [sym_order_by] = sym_order_by,
  [sym_limit] = sym_limit,
  [sym_offset] = sym_offset,
  [sym_where_expression] = sym_where_expression,
  [sym_predicate] = sym_predicate,
  [sym_operator] = sym_operator,
  [sym_direction] = sym_direction,
  [sym_literal] = sym_literal,
  [sym_identifier] = sym_identifier,
  [aux_sym__field_list_repeat1] = aux_sym__field_list_repeat1,
  [aux_sym_where_expression_repeat1] = aux_sym_where_expression_repeat1,
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
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
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
  [sym_operator] = {
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
  [aux_sym_where_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function_name = 1,
  field_name = 2,
  field_parameter = 3,
  field_table_alias = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_table_alias] = "table_alias",
};

static const TSFieldMapSlice ts_field_map_slices[5] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
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
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(132);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead == 'M') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(202);
      if (lookahead == 'C') ADVANCE(188);
      if (lookahead == 'D') ADVANCE(180);
      if (lookahead == 'M') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == 'G') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'O') ADVANCE(191);
      if (lookahead == 'W') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'w') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(141);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(140);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(163);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'G') ADVANCE(153);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(139);
      END_STATE();
    case 34:
      if (lookahead == 'H') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'M') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(21);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'V') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 65:
      if (lookahead == 'U') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'V') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 'X') ADVANCE(149);
      END_STATE();
    case 68:
      if (lookahead == 'Y') ADVANCE(138);
      END_STATE();
    case 69:
      if (lookahead == 'Y') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 122:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'x') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(202);
      if (lookahead == 'C') ADVANCE(188);
      if (lookahead == 'D') ADVANCE(180);
      if (lookahead == 'M') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 128:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == 'G') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'O') ADVANCE(191);
      if (lookahead == 'W') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'w') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 129:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 130:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 131:
      if (eof) ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead == 'M') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__literal_string);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'I') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'D') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'G') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'H') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'M') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'P') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'V') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'X') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'c') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'g') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'h') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'm') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'p') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'v') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
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
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 0},
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
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym__literal_string] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(58),
    [sym_statement] = STATE(67),
    [sym__select_statement] = STATE(63),
    [sym_select] = STATE(36),
    [sym_keyword_select] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      sym__literal_string,
    ACTIONS(13), 1,
      sym__string,
    ACTIONS(15), 1,
      sym__number,
    STATE(6), 1,
      sym_identifier,
    STATE(52), 1,
      sym_select_expression,
    STATE(62), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(26), 2,
      sym_field,
      sym_function_call,
    STATE(53), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(7), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [41] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 15,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [63] = 7,
    ACTIONS(13), 1,
      sym__string,
    ACTIONS(19), 1,
      sym__number,
    STATE(6), 1,
      sym_identifier,
    STATE(62), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(44), 2,
      sym_field,
      sym_function_call,
    ACTIONS(7), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [91] = 7,
    ACTIONS(13), 1,
      sym__string,
    ACTIONS(19), 1,
      sym__number,
    STATE(6), 1,
      sym_identifier,
    STATE(62), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(56), 2,
      sym_field,
      sym_function_call,
    ACTIONS(7), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [119] = 3,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 9,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [138] = 3,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 9,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [157] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 9,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [173] = 10,
    ACTIONS(29), 1,
      sym_keyword_where,
    ACTIONS(31), 1,
      sym_keyword_order_by,
    ACTIONS(33), 1,
      sym_keyword_group_by,
    ACTIONS(35), 1,
      sym_keyword_limit,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_where,
    STATE(19), 1,
      sym_group_by,
    STATE(39), 1,
      sym_order_by,
    STATE(64), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [205] = 6,
    ACTIONS(13), 1,
      sym__string,
    ACTIONS(43), 1,
      sym__number,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(41), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
  [228] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__string,
    ACTIONS(17), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      sym__number,
  [244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 7,
      sym_keyword_from,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_offset,
      anon_sym_SEMI,
      anon_sym_AND,
  [258] = 8,
    ACTIONS(31), 1,
      sym_keyword_order_by,
    ACTIONS(33), 1,
      sym_keyword_group_by,
    ACTIONS(35), 1,
      sym_keyword_limit,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_group_by,
    STATE(47), 1,
      sym_order_by,
    STATE(54), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [284] = 4,
    ACTIONS(53), 1,
      anon_sym_AND,
    STATE(14), 1,
      aux_sym_where_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [301] = 4,
    ACTIONS(58), 1,
      anon_sym_AND,
    STATE(14), 1,
      aux_sym_where_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(56), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [318] = 4,
    ACTIONS(58), 1,
      anon_sym_AND,
    STATE(15), 1,
      aux_sym_where_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(60), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [335] = 7,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(43), 1,
      sym__string,
    STATE(6), 1,
      sym_identifier,
    STATE(16), 1,
      sym_predicate,
    STATE(30), 1,
      sym_where_expression,
    STATE(34), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [358] = 6,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(43), 1,
      sym__string,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_predicate,
    STATE(34), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [378] = 6,
    ACTIONS(31), 1,
      sym_keyword_order_by,
    ACTIONS(35), 1,
      sym_keyword_limit,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_order_by,
    STATE(54), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [398] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_AND,
  [410] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(62), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_AND,
  [422] = 6,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(43), 1,
      sym__string,
    STATE(6), 1,
      sym_identifier,
    STATE(34), 1,
      sym_field,
    STATE(40), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [442] = 6,
    ACTIONS(31), 1,
      sym_keyword_order_by,
    ACTIONS(35), 1,
      sym_keyword_limit,
    ACTIONS(64), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_order_by,
    STATE(60), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [462] = 4,
    ACTIONS(68), 1,
      sym_keyword_having,
    STATE(43), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(66), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [478] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(70), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [490] = 4,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(72), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [505] = 4,
    STATE(9), 1,
      sym_table_expression,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(76), 2,
      sym__string,
      sym__number,
  [520] = 3,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 3,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [533] = 4,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(78), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [548] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(80), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [559] = 4,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(82), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [574] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 4,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [585] = 5,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(43), 1,
      sym__string,
    STATE(6), 1,
      sym_identifier,
    STATE(35), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [602] = 3,
    STATE(48), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [615] = 3,
    STATE(51), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 2,
      sym_keyword_desc,
      sym_keyword_asc,
  [627] = 4,
    ACTIONS(93), 1,
      sym_keyword_from,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [641] = 3,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 2,
      sym__string,
      sym__number,
  [653] = 3,
    STATE(45), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 2,
      sym__literal_string,
      sym__number,
  [665] = 4,
    ACTIONS(35), 1,
      sym_keyword_limit,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [679] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [689] = 4,
    ACTIONS(35), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [703] = 3,
    STATE(65), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 2,
      sym__literal_string,
      sym__number,
  [715] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [725] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(82), 3,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [735] = 4,
    ACTIONS(103), 1,
      sym_keyword_offset,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [749] = 3,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 2,
      sym__string,
      sym__number,
  [761] = 4,
    ACTIONS(35), 1,
      sym_keyword_limit,
    ACTIONS(64), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [775] = 3,
    STATE(21), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 2,
      sym__literal_string,
      sym__number,
  [787] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      sym__literal_string,
      sym__number,
  [796] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [805] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [814] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [823] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [832] = 2,
    ACTIONS(64), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [840] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [848] = 2,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [856] = 2,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [864] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [872] = 2,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [880] = 2,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [888] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [896] = 2,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [904] = 2,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [912] = 2,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [920] = 2,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [928] = 2,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [936] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 157,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 244,
  [SMALL_STATE(13)] = 258,
  [SMALL_STATE(14)] = 284,
  [SMALL_STATE(15)] = 301,
  [SMALL_STATE(16)] = 318,
  [SMALL_STATE(17)] = 335,
  [SMALL_STATE(18)] = 358,
  [SMALL_STATE(19)] = 378,
  [SMALL_STATE(20)] = 398,
  [SMALL_STATE(21)] = 410,
  [SMALL_STATE(22)] = 422,
  [SMALL_STATE(23)] = 442,
  [SMALL_STATE(24)] = 462,
  [SMALL_STATE(25)] = 478,
  [SMALL_STATE(26)] = 490,
  [SMALL_STATE(27)] = 505,
  [SMALL_STATE(28)] = 520,
  [SMALL_STATE(29)] = 533,
  [SMALL_STATE(30)] = 548,
  [SMALL_STATE(31)] = 559,
  [SMALL_STATE(32)] = 574,
  [SMALL_STATE(33)] = 585,
  [SMALL_STATE(34)] = 602,
  [SMALL_STATE(35)] = 615,
  [SMALL_STATE(36)] = 627,
  [SMALL_STATE(37)] = 641,
  [SMALL_STATE(38)] = 653,
  [SMALL_STATE(39)] = 665,
  [SMALL_STATE(40)] = 679,
  [SMALL_STATE(41)] = 689,
  [SMALL_STATE(42)] = 703,
  [SMALL_STATE(43)] = 715,
  [SMALL_STATE(44)] = 725,
  [SMALL_STATE(45)] = 735,
  [SMALL_STATE(46)] = 749,
  [SMALL_STATE(47)] = 761,
  [SMALL_STATE(48)] = 775,
  [SMALL_STATE(49)] = 787,
  [SMALL_STATE(50)] = 796,
  [SMALL_STATE(51)] = 805,
  [SMALL_STATE(52)] = 814,
  [SMALL_STATE(53)] = 823,
  [SMALL_STATE(54)] = 832,
  [SMALL_STATE(55)] = 840,
  [SMALL_STATE(56)] = 848,
  [SMALL_STATE(57)] = 856,
  [SMALL_STATE(58)] = 864,
  [SMALL_STATE(59)] = 872,
  [SMALL_STATE(60)] = 880,
  [SMALL_STATE(61)] = 888,
  [SMALL_STATE(62)] = 896,
  [SMALL_STATE(63)] = 904,
  [SMALL_STATE(64)] = 912,
  [SMALL_STATE(65)] = 920,
  [SMALL_STATE(66)] = 928,
  [SMALL_STATE(67)] = 936,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_expression_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_expression_repeat1, 2), SHIFT_REPEAT(18),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
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
