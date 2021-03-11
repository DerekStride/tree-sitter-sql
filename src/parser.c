#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_keyword_select = 1,
  sym_keyword_from = 2,
  sym_keyword_where = 3,
  sym_comment = 4,
  anon_sym_SEMI = 5,
  anon_sym_STAR = 6,
  anon_sym_COMMA = 7,
  anon_sym_DOT = 8,
  anon_sym_AND = 9,
  anon_sym_EQ = 10,
  sym__string = 11,
  sym__number = 12,
  sym_program = 13,
  sym_statement = 14,
  sym__select_statement = 15,
  sym_select = 16,
  sym_select_expression = 17,
  sym__field_list = 18,
  sym_field = 19,
  sym_from = 20,
  sym_table_expression = 21,
  sym_where = 22,
  sym_where_expression = 23,
  sym_predicate = 24,
  sym_operator = 25,
  sym_literal = 26,
  sym_identifier = 27,
  aux_sym__field_list_repeat1 = 28,
  aux_sym_where_expression_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_where] = "keyword_where",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_AND] = "AND",
  [anon_sym_EQ] = "=",
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
  [sym_where_expression] = "where_expression",
  [sym_predicate] = "predicate",
  [sym_operator] = "operator",
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
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym_where_expression] = sym_where_expression,
  [sym_predicate] = sym_predicate,
  [sym_operator] = sym_operator,
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
      if (eof) ADVANCE(34);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'W') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'H') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'O') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '-') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'W') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'H') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'h') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_where] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(34),
    [sym_statement] = STATE(39),
    [sym__select_statement] = STATE(36),
    [sym_select] = STATE(23),
    [sym_keyword_select] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      sym__string,
    ACTIONS(11), 1,
      sym__number,
    STATE(7), 1,
      sym_identifier,
    STATE(13), 1,
      sym_field,
    STATE(24), 1,
      sym_select_expression,
    STATE(25), 1,
      sym__field_list,
  [25] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__string,
    ACTIONS(11), 1,
      sym__number,
    STATE(7), 1,
      sym_identifier,
    STATE(16), 1,
      sym_predicate,
    STATE(27), 1,
      sym_field,
    STATE(33), 1,
      sym_where_expression,
  [47] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 6,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_EQ,
  [59] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__string,
    ACTIONS(11), 1,
      sym__number,
    STATE(7), 1,
      sym_identifier,
    STATE(27), 1,
      sym_field,
    STATE(31), 1,
      sym_predicate,
  [78] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 4,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [91] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(17), 4,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__number,
    ACTIONS(21), 1,
      sym_keyword_where,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      sym__string,
    STATE(26), 1,
      sym_identifier,
  [123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__string,
    ACTIONS(11), 1,
      sym__number,
    STATE(7), 1,
      sym_identifier,
    STATE(22), 1,
      sym_field,
  [139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 2,
      anon_sym_SEMI,
      sym__number,
    ACTIONS(27), 2,
      sym_keyword_where,
      sym__string,
  [151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 4,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(31), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(36), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_identifier,
    STATE(20), 1,
      sym_table_expression,
    ACTIONS(40), 2,
      sym__string,
      sym__number,
  [203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(42), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_AND,
    STATE(21), 1,
      aux_sym_where_expression_repeat1,
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      sym_literal,
    ACTIONS(48), 2,
      sym__string,
      sym__number,
  [241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_AND,
    STATE(18), 1,
      aux_sym_where_expression_repeat1,
  [254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__string,
      sym__number,
  [265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_keyword_where,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_where,
  [278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_AND,
    ACTIONS(59), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      aux_sym_where_expression_repeat1,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 3,
      sym_keyword_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_keyword_from,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_from,
  [313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_EQ,
    STATE(17), 1,
      sym_operator,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      sym__string,
      sym__number,
  [355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_SEMI,
      anon_sym_AND,
  [363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_SEMI,
      anon_sym_AND,
  [371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_AND,
  [379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SEMI,
  [386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SEMI,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_SEMI,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 139,
  [SMALL_STATE(11)] = 151,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 203,
  [SMALL_STATE(16)] = 217,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 254,
  [SMALL_STATE(20)] = 265,
  [SMALL_STATE(21)] = 278,
  [SMALL_STATE(22)] = 291,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 313,
  [SMALL_STATE(25)] = 321,
  [SMALL_STATE(26)] = 329,
  [SMALL_STATE(27)] = 337,
  [SMALL_STATE(28)] = 347,
  [SMALL_STATE(29)] = 355,
  [SMALL_STATE(30)] = 363,
  [SMALL_STATE(31)] = 371,
  [SMALL_STATE(32)] = 379,
  [SMALL_STATE(33)] = 386,
  [SMALL_STATE(34)] = 393,
  [SMALL_STATE(35)] = 400,
  [SMALL_STATE(36)] = 407,
  [SMALL_STATE(37)] = 414,
  [SMALL_STATE(38)] = 421,
  [SMALL_STATE(39)] = 428,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_expression_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_expression_repeat1, 2), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
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
