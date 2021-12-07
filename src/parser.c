#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  anon_sym_SQUOTE = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_participant = 5,
  sym_source_file = 6,
  sym_document = 7,
  sym__command = 8,
  sym_comment = 9,
  sym_participant = 10,
  sym_name = 11,
  aux_sym_document_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_participant] = "participant",
  [sym_source_file] = "source_file",
  [sym_document] = "document",
  [sym__command] = "_command",
  [sym_comment] = "comment",
  [sym_participant] = "participant",
  [sym_name] = "name",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_participant] = anon_sym_participant,
  [sym_source_file] = sym_source_file,
  [sym_document] = sym_document,
  [sym__command] = sym__command,
  [sym_comment] = sym_comment,
  [sym_participant] = sym_participant,
  [sym_name] = sym_name,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATstartuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATenduml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_participant] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_participant] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_participant);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_participant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym_document] = STATE(10),
    [anon_sym_ATstartuml] = ACTIONS(3),
  },
  [2] = {
    [sym__command] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_participant] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_ATenduml] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_participant] = ACTIONS(9),
  },
  [3] = {
    [sym__command] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_participant] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATenduml] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_participant] = ACTIONS(9),
  },
  [4] = {
    [sym__command] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_participant] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATenduml] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_participant] = ACTIONS(18),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(21), 3,
      anon_sym_ATenduml,
      anon_sym_SQUOTE,
      anon_sym_participant,
  [6] = 1,
    ACTIONS(23), 3,
      anon_sym_ATenduml,
      anon_sym_SQUOTE,
      anon_sym_participant,
  [12] = 1,
    ACTIONS(25), 3,
      anon_sym_ATenduml,
      anon_sym_SQUOTE,
      anon_sym_participant,
  [18] = 2,
    ACTIONS(27), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_name,
  [25] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [29] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [33] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [37] = 1,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
  [41] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 6,
  [SMALL_STATE(7)] = 12,
  [SMALL_STATE(8)] = 18,
  [SMALL_STATE(9)] = 25,
  [SMALL_STATE(10)] = 29,
  [SMALL_STATE(11)] = 33,
  [SMALL_STATE(12)] = 37,
  [SMALL_STATE(13)] = 41,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_plantuml(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
