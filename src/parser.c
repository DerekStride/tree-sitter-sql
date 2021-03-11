#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
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
  sym_comment = 9,
  anon_sym_SEMI = 10,
  anon_sym_STAR = 11,
  anon_sym_COMMA = 12,
  anon_sym_DOT = 13,
  anon_sym_AND = 14,
  anon_sym_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_LT = 17,
  sym__string = 18,
  sym__number = 19,
  sym_program = 20,
  sym_statement = 21,
  sym__select_statement = 22,
  sym_select = 23,
  sym_select_expression = 24,
  sym__field_list = 25,
  sym_field = 26,
  sym_from = 27,
  sym_table_expression = 28,
  sym_where = 29,
  sym_order_by = 30,
  sym_limit = 31,
  sym_offset = 32,
  sym_where_expression = 33,
  sym_predicate = 34,
  sym_operator = 35,
  sym_direction = 36,
  sym_literal = 37,
  sym_identifier = 38,
  aux_sym__field_list_repeat1 = 39,
  aux_sym_where_expression_repeat1 = 40,
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
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_AND] = "AND",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [sym__string] = "_string",
  [sym__number] = "_number",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym__select_statement] = "_select_statement",
  [sym_select] = "select",
  [sym_select_expression] = "select_expression",
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
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [sym__string] = sym__string,
  [sym__number] = sym__number,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym__select_statement] = sym__select_statement,
  [sym_select] = sym_select,
  [sym_select_expression] = sym_select_expression,
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
  [sym_comment] = {
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
  field_name = 1,
  field_table_alias = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_table_alias] = "table_alias",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
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
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(73);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'W') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(100);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'W') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == 'B') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'S') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(2);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 38:
      if (lookahead == 'Y') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(100);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'W') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'W') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'D') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'H') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'M') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'd') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
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
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(46),
    [sym_statement] = STATE(53),
    [sym__select_statement] = STATE(51),
    [sym_select] = STATE(32),
    [sym_keyword_select] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 12,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [18] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [35] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(11), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [52] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [66] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      sym__string,
    ACTIONS(21), 1,
      sym__number,
    STATE(4), 1,
      sym_identifier,
    STATE(25), 1,
      sym_field,
    STATE(38), 1,
      sym_select_expression,
    STATE(40), 1,
      sym__field_list,
  [91] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_keyword_where,
    ACTIONS(25), 1,
      sym_keyword_order_by,
    ACTIONS(27), 1,
      sym_keyword_limit,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_where,
    STATE(33), 1,
      sym_order_by,
    STATE(45), 1,
      sym_limit,
  [116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(35), 1,
      sym__string,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(31), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(33), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [137] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__string,
    ACTIONS(21), 1,
      sym__number,
    STATE(4), 1,
      sym_identifier,
    STATE(15), 1,
      sym_predicate,
    STATE(24), 1,
      sym_field,
    STATE(35), 1,
      sym_where_expression,
  [159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      sym__number,
    ACTIONS(37), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__string,
  [173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_AND,
    STATE(11), 1,
      aux_sym_where_expression_repeat1,
    ACTIONS(39), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_AND,
    STATE(11), 1,
      aux_sym_where_expression_repeat1,
    ACTIONS(44), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__string,
    ACTIONS(21), 1,
      sym__number,
    STATE(4), 1,
      sym_identifier,
    STATE(18), 1,
      sym_predicate,
    STATE(24), 1,
      sym_field,
  [222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_offset,
      anon_sym_SEMI,
      anon_sym_AND,
  [233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_AND,
    STATE(12), 1,
      aux_sym_where_expression_repeat1,
    ACTIONS(50), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [248] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_keyword_order_by,
    ACTIONS(27), 1,
      sym_keyword_limit,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_order_by,
    STATE(43), 1,
      sym_limit,
  [267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__string,
    ACTIONS(21), 1,
      sym__number,
    STATE(4), 1,
      sym_identifier,
    STATE(36), 1,
      sym_field,
  [283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_AND,
  [293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_AND,
  [303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__string,
    ACTIONS(21), 1,
      sym__number,
    STATE(4), 1,
      sym_identifier,
    STATE(30), 1,
      sym_field,
  [319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(56), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(60), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      sym_operator,
    ACTIONS(67), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(69), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym_table_expression,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(71), 2,
      sym__string,
      sym__number,
  [397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_keyword_limit,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_limit,
  [410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(19), 2,
      sym__string,
      sym__number,
  [421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      sym_literal,
    ACTIONS(75), 2,
      sym__string,
      sym__number,
  [432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 3,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      sym_literal,
    ACTIONS(75), 2,
      sym__string,
      sym__number,
  [452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_keyword_from,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_from,
  [465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_keyword_limit,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_limit,
  [478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_literal,
    ACTIONS(75), 2,
      sym__string,
      sym__number,
  [489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_direction,
    ACTIONS(83), 2,
      sym_keyword_desc,
      sym_keyword_asc,
  [509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_keyword_offset,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_offset,
  [522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym__string,
      sym__number,
  [538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_SEMI,
  [569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_SEMI,
  [583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_SEMI,
  [597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SEMI,
  [604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_SEMI,
  [618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SEMI,
  [632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 233,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 333,
  [SMALL_STATE(23)] = 347,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 383,
  [SMALL_STATE(27)] = 397,
  [SMALL_STATE(28)] = 410,
  [SMALL_STATE(29)] = 421,
  [SMALL_STATE(30)] = 432,
  [SMALL_STATE(31)] = 441,
  [SMALL_STATE(32)] = 452,
  [SMALL_STATE(33)] = 465,
  [SMALL_STATE(34)] = 478,
  [SMALL_STATE(35)] = 489,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 509,
  [SMALL_STATE(38)] = 522,
  [SMALL_STATE(39)] = 530,
  [SMALL_STATE(40)] = 538,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 554,
  [SMALL_STATE(43)] = 562,
  [SMALL_STATE(44)] = 569,
  [SMALL_STATE(45)] = 576,
  [SMALL_STATE(46)] = 583,
  [SMALL_STATE(47)] = 590,
  [SMALL_STATE(48)] = 597,
  [SMALL_STATE(49)] = 604,
  [SMALL_STATE(50)] = 611,
  [SMALL_STATE(51)] = 618,
  [SMALL_STATE(52)] = 625,
  [SMALL_STATE(53)] = 632,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_expression_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_expression_repeat1, 2), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
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
