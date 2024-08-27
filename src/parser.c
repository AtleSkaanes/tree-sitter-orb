#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_createspell = 1,
  anon_sym_createcantrip = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_DASH_GT = 5,
  sym_identifier = 6,
  sym__type = 7,
  anon_sym_COLON = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_source_file = 11,
  sym__definition = 12,
  sym_function_definition = 13,
  sym_ret_type = 14,
  sym_parameter_list = 15,
  sym_block = 16,
  aux_sym_source_file_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_createspell] = "create spell",
  [anon_sym_createcantrip] = "create cantrip",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "-> ",
  [sym_identifier] = "identifier",
  [sym__type] = "_type",
  [anon_sym_COLON] = ": ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_ret_type] = "ret_type",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_createspell] = anon_sym_createspell,
  [anon_sym_createcantrip] = anon_sym_createcantrip,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_identifier] = sym_identifier,
  [sym__type] = sym__type,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_ret_type] = sym_ret_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_createspell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_createcantrip] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_ret_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == 'c') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_createspell);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_createcantrip);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__type] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_createspell] = ACTIONS(5),
    [anon_sym_createcantrip] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_createspell,
      anon_sym_createcantrip,
    STATE(3), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [13] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_createspell,
      anon_sym_createcantrip,
    STATE(3), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [26] = 4,
    ACTIONS(14), 1,
      anon_sym_DASH_GT,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_block,
    STATE(12), 1,
      sym_ret_type,
  [39] = 4,
    ACTIONS(14), 1,
      anon_sym_DASH_GT,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_block,
    STATE(11), 1,
      sym_ret_type,
  [52] = 1,
    ACTIONS(18), 3,
      ts_builtin_sym_end,
      anon_sym_createspell,
      anon_sym_createcantrip,
  [58] = 1,
    ACTIONS(20), 3,
      ts_builtin_sym_end,
      anon_sym_createspell,
      anon_sym_createcantrip,
  [64] = 1,
    ACTIONS(22), 3,
      ts_builtin_sym_end,
      anon_sym_createspell,
      anon_sym_createcantrip,
  [70] = 3,
    ACTIONS(24), 1,
      anon_sym_RPAREN,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(13), 1,
      sym_parameter_list,
  [80] = 1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_createspell,
      anon_sym_createcantrip,
  [86] = 2,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_block,
  [93] = 2,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_block,
  [100] = 1,
    ACTIONS(30), 1,
      anon_sym_RPAREN,
  [104] = 1,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
  [108] = 1,
    ACTIONS(34), 1,
      sym__type,
  [112] = 1,
    ACTIONS(36), 1,
      sym_identifier,
  [116] = 1,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
  [120] = 1,
    ACTIONS(40), 1,
      sym__type,
  [124] = 1,
    ACTIONS(42), 1,
      anon_sym_COLON,
  [128] = 1,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
  [132] = 1,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
  [136] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 64,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 100,
  [SMALL_STATE(14)] = 104,
  [SMALL_STATE(15)] = 108,
  [SMALL_STATE(16)] = 112,
  [SMALL_STATE(17)] = 116,
  [SMALL_STATE(18)] = 120,
  [SMALL_STATE(19)] = 124,
  [SMALL_STATE(20)] = 128,
  [SMALL_STATE(21)] = 132,
  [SMALL_STATE(22)] = 136,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret_type, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_YOUR_LANGUAGE_NAME(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
