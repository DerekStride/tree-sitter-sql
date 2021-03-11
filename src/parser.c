#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_keyword_select = 1,
  sym_keyword_from = 2,
  sym_keyword_where = 3,
  sym_keyword_order_by = 4,
  sym_keyword_desc = 5,
  sym_keyword_asc = 6,
  sym_keyword_limit = 7,
  sym_keyword_offset = 8,
  sym_keyword_distinct = 9,
  sym_keyword_count = 10,
  sym_keyword_max = 11,
  sym_keyword_min = 12,
  sym_keyword_avg = 13,
  sym_comment = 14,
  sym_marginalia = 15,
  anon_sym_SEMI = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_STAR = 19,
  anon_sym_COMMA = 20,
  anon_sym_DOT = 21,
  anon_sym_AND = 22,
  anon_sym_EQ = 23,
  anon_sym_GT = 24,
  anon_sym_LT = 25,
  sym__literal_string = 26,
  sym__string = 27,
  sym__number = 28,
  sym_program = 29,
  sym_statement = 30,
  sym__select_statement = 31,
  sym_select = 32,
  sym_select_expression = 33,
  sym_function_call = 34,
  sym__function_name = 35,
  sym__field_list = 36,
  sym_field = 37,
  sym_from = 38,
  sym_table_expression = 39,
  sym_where = 40,
  sym_order_by = 41,
  sym_limit = 42,
  sym_offset = 43,
  sym_where_expression = 44,
  sym_predicate = 45,
  sym_operator = 46,
  sym_direction = 47,
  sym_literal = 48,
  sym_identifier = 49,
  aux_sym__field_list_repeat1 = 50,
  aux_sym_where_expression_repeat1 = 51,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_where] = "keyword_where",
  [sym_keyword_order_by] = "keyword_order_by",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
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
  [sym_function_call] = "function_call",
  [sym__function_name] = "_function_name",
  [sym__field_list] = "_field_list",
  [sym_field] = "field",
  [sym_from] = "from",
  [sym_table_expression] = "table_expression",
  [sym_where] = "where",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_function_call] = sym_function_call,
  [sym__function_name] = sym__function_name,
  [sym__field_list] = sym__field_list,
  [sym_field] = sym_field,
  [sym_from] = sym_from,
  [sym_table_expression] = sym_table_expression,
  [sym_where] = sym_where,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_name] = {
    .visible = false,
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
      if (eof) ADVANCE(108);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(30);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(160);
      if (lookahead == 'D') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == 'L') ADVANCE(153);
      if (lookahead == 'O') ADVANCE(161);
      if (lookahead == 'W') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(137);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'F') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'G') ADVANCE(127);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'M') ADVANCE(110);
      END_STATE();
    case 35:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(125);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(2);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'U') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'X') ADVANCE(123);
      END_STATE();
    case 56:
      if (lookahead == 'Y') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(160);
      if (lookahead == 'D') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 104:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == 'L') ADVANCE(153);
      if (lookahead == 'O') ADVANCE(161);
      if (lookahead == 'W') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 105:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 106:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 107:
      if (eof) ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(30);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__literal_string);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'D') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'G') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'H') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'M') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'V') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'X') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'c') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'd') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'g') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'h') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'm') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'v') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'x') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_where] = ACTIONS(1),
    [sym_keyword_order_by] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym__literal_string] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(49),
    [sym_statement] = STATE(58),
    [sym__select_statement] = STATE(56),
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
    STATE(21), 1,
      sym_field,
    STATE(42), 1,
      sym_select_expression,
    STATE(46), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(44), 3,
      sym_function_call,
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
    ACTIONS(17), 13,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [61] = 7,
    ACTIONS(13), 1,
      sym__string,
    ACTIONS(19), 1,
      sym__number,
    STATE(6), 1,
      sym_identifier,
    STATE(46), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(50), 2,
      sym_function_call,
      sym_field,
    ACTIONS(7), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [89] = 3,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 9,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [108] = 3,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 9,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [127] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 9,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [143] = 8,
    ACTIONS(29), 1,
      sym_keyword_where,
    ACTIONS(31), 1,
      sym_keyword_order_by,
    ACTIONS(33), 1,
      sym_keyword_limit,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_where,
    STATE(34), 1,
      sym_order_by,
    STATE(48), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [169] = 6,
    ACTIONS(13), 1,
      sym__string,
    ACTIONS(41), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(37), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(39), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [191] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      sym__number,
    ACTIONS(43), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__string,
  [206] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 6,
      sym_keyword_from,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_offset,
      anon_sym_SEMI,
      anon_sym_AND,
  [219] = 7,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(41), 1,
      sym__string,
    STATE(6), 1,
      sym_identifier,
    STATE(16), 1,
      sym_predicate,
    STATE(24), 1,
      sym_field,
    STATE(39), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [242] = 4,
    ACTIONS(49), 1,
      anon_sym_AND,
    STATE(13), 1,
      aux_sym_where_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [258] = 4,
    ACTIONS(54), 1,
      anon_sym_AND,
    STATE(13), 1,
      aux_sym_where_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(52), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [274] = 6,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(41), 1,
      sym__string,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_predicate,
    STATE(24), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [294] = 4,
    ACTIONS(54), 1,
      anon_sym_AND,
    STATE(14), 1,
      aux_sym_where_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(56), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [310] = 6,
    ACTIONS(31), 1,
      sym_keyword_order_by,
    ACTIONS(33), 1,
      sym_keyword_limit,
    ACTIONS(58), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_order_by,
    STATE(47), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [330] = 4,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(60), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [345] = 3,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 3,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [358] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_AND,
  [369] = 4,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(65), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [384] = 4,
    STATE(8), 1,
      sym_table_expression,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 2,
      sym__string,
      sym__number,
  [399] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_AND,
  [410] = 3,
    STATE(33), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [423] = 5,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(41), 1,
      sym__string,
    STATE(6), 1,
      sym_identifier,
    STATE(30), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [440] = 4,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [455] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [466] = 5,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(41), 1,
      sym__string,
    STATE(6), 1,
      sym_identifier,
    STATE(40), 1,
      sym_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [483] = 3,
    STATE(57), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 2,
      sym__literal_string,
      sym__number,
  [495] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(60), 3,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [505] = 4,
    ACTIONS(79), 1,
      sym_keyword_offset,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [519] = 3,
    STATE(31), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 2,
      sym__literal_string,
      sym__number,
  [531] = 3,
    STATE(23), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 2,
      sym__literal_string,
      sym__number,
  [543] = 4,
    ACTIONS(33), 1,
      sym_keyword_limit,
    ACTIONS(58), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [557] = 4,
    ACTIONS(33), 1,
      sym_keyword_limit,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [571] = 4,
    ACTIONS(85), 1,
      sym_keyword_from,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [585] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(89), 3,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [595] = 3,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      sym__string,
      sym__number,
  [607] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [617] = 3,
    STATE(45), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 2,
      sym_keyword_desc,
      sym_keyword_asc,
  [629] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(95), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [638] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [647] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 2,
      sym__literal_string,
      sym__number,
  [656] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [665] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [674] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [682] = 2,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [690] = 2,
    ACTIONS(58), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [698] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [706] = 2,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [714] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [722] = 2,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [730] = 2,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [738] = 2,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [746] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [754] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [762] = 2,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [770] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 206,
  [SMALL_STATE(12)] = 219,
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 258,
  [SMALL_STATE(15)] = 274,
  [SMALL_STATE(16)] = 294,
  [SMALL_STATE(17)] = 310,
  [SMALL_STATE(18)] = 330,
  [SMALL_STATE(19)] = 345,
  [SMALL_STATE(20)] = 358,
  [SMALL_STATE(21)] = 369,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 399,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 423,
  [SMALL_STATE(26)] = 440,
  [SMALL_STATE(27)] = 455,
  [SMALL_STATE(28)] = 466,
  [SMALL_STATE(29)] = 483,
  [SMALL_STATE(30)] = 495,
  [SMALL_STATE(31)] = 505,
  [SMALL_STATE(32)] = 519,
  [SMALL_STATE(33)] = 531,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 557,
  [SMALL_STATE(36)] = 571,
  [SMALL_STATE(37)] = 585,
  [SMALL_STATE(38)] = 595,
  [SMALL_STATE(39)] = 607,
  [SMALL_STATE(40)] = 617,
  [SMALL_STATE(41)] = 629,
  [SMALL_STATE(42)] = 638,
  [SMALL_STATE(43)] = 647,
  [SMALL_STATE(44)] = 656,
  [SMALL_STATE(45)] = 665,
  [SMALL_STATE(46)] = 674,
  [SMALL_STATE(47)] = 682,
  [SMALL_STATE(48)] = 690,
  [SMALL_STATE(49)] = 698,
  [SMALL_STATE(50)] = 706,
  [SMALL_STATE(51)] = 714,
  [SMALL_STATE(52)] = 722,
  [SMALL_STATE(53)] = 730,
  [SMALL_STATE(54)] = 738,
  [SMALL_STATE(55)] = 746,
  [SMALL_STATE(56)] = 754,
  [SMALL_STATE(57)] = 762,
  [SMALL_STATE(58)] = 770,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_expression_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_expression_repeat1, 2), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
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
