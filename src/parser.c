#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_keyword_select = 1,
  sym_keyword_from = 2,
  anon_sym_SEMI = 3,
  anon_sym_STAR = 4,
  sym__identifier = 5,
  sym_query = 6,
  sym_select_statement = 7,
  sym_select = 8,
  sym_select_expression = 9,
  sym_from = 10,
  sym_table_expression = 11,
  sym_table_name = 12,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_from] = "keyword_from",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [sym__identifier] = "_identifier",
  [sym_query] = "query",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym__identifier] = sym__identifier,
  [sym_query] = sym_query,
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
  [sym_query] = {
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
      if (eof) ADVANCE(18);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == 'C') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'L') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(7),
    [sym_select_statement] = STATE(8),
    [sym_select] = STATE(3),
    [sym_keyword_select] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(6), 1,
      sym_select_expression,
    ACTIONS(5), 2,
      anon_sym_STAR,
      sym__identifier,
  [8] = 3,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_from,
  [18] = 3,
    ACTIONS(11), 1,
      sym__identifier,
    STATE(12), 1,
      sym_table_expression,
    STATE(13), 1,
      sym_table_name,
  [28] = 1,
    ACTIONS(13), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [33] = 1,
    ACTIONS(15), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [38] = 1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
  [42] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [46] = 1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
  [50] = 1,
    ACTIONS(23), 1,
      anon_sym_SEMI,
  [54] = 1,
    ACTIONS(25), 1,
      anon_sym_SEMI,
  [58] = 1,
    ACTIONS(27), 1,
      anon_sym_SEMI,
  [62] = 1,
    ACTIONS(29), 1,
      anon_sym_SEMI,
  [66] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 8,
  [SMALL_STATE(4)] = 18,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 42,
  [SMALL_STATE(9)] = 46,
  [SMALL_STATE(10)] = 50,
  [SMALL_STATE(11)] = 54,
  [SMALL_STATE(12)] = 58,
  [SMALL_STATE(13)] = 62,
  [SMALL_STATE(14)] = 66,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [17] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
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
