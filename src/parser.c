#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_keyword_select = 1,
  sym_keyword_from = 2,
  sym_comment = 3,
  anon_sym_SEMI = 4,
  anon_sym_STAR = 5,
  sym__identifier = 6,
  sym_program = 7,
  sym_statement = 8,
  sym_select_statement = 9,
  sym_select = 10,
  sym_select_expression = 11,
  sym_from = 12,
  sym_table_expression = 13,
  sym_table_name = 14,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_from] = "keyword_from",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [sym__identifier] = "_identifier",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_select_statement] = "select_statement",
  [sym_select] = "select",
  [sym_select_expression] = "select_expression",
  [sym_from] = "from",
  [sym_table_expression] = "table_expression",
  [sym_table_name] = "table_name",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_from] = sym_keyword_from,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym__identifier] = sym__identifier,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select] = sym_select,
  [sym_select_expression] = sym_select_expression,
  [sym_from] = sym_from,
  [sym_table_expression] = sym_table_expression,
  [sym_table_name] = sym_table_name,
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
  [sym__identifier] = {
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
  [sym_select_statement] = {
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
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_table_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(22);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'L') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'M') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '-') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 2},
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym_statement] = STATE(8),
    [sym_select_statement] = STATE(9),
    [sym_select] = STATE(3),
    [sym_keyword_select] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_select_expression,
    ACTIONS(7), 2,
      anon_sym_STAR,
      sym__identifier,
  [11] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      sym_from,
  [24] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(13), 1,
      sym_table_expression,
    STATE(14), 1,
      sym_table_name,
  [37] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [45] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [53] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [60] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
  [67] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [74] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [81] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SEMI,
  [88] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
  [95] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SEMI,
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SEMI,
  [109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 37,
  [SMALL_STATE(6)] = 45,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 67,
  [SMALL_STATE(10)] = 74,
  [SMALL_STATE(11)] = 81,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 95,
  [SMALL_STATE(14)] = 102,
  [SMALL_STATE(15)] = 109,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [19] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
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
