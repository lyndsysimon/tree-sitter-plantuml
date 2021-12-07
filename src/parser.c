#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  sym__unquoted_string = 3,
  sym__quoted_string = 4,
  sym_comment = 5,
  anon_sym_as = 6,
  anon_sym_skinparam = 7,
  anon_sym_participant = 8,
  sym_source_file = 9,
  sym_document = 10,
  sym__declaration = 11,
  sym_identifier = 12,
  sym_string = 13,
  sym_keyword = 14,
  sym_skinparam = 15,
  sym_participant = 16,
  aux_sym_document_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [sym__unquoted_string] = "_unquoted_string",
  [sym__quoted_string] = "_quoted_string",
  [sym_comment] = "comment",
  [anon_sym_as] = "as",
  [anon_sym_skinparam] = "skinparam",
  [anon_sym_participant] = "participant",
  [sym_source_file] = "source_file",
  [sym_document] = "document",
  [sym__declaration] = "_declaration",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_keyword] = "keyword",
  [sym_skinparam] = "skinparam",
  [sym_participant] = "participant",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [sym__unquoted_string] = sym__unquoted_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_comment] = sym_comment,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_skinparam] = anon_sym_skinparam,
  [anon_sym_participant] = anon_sym_participant,
  [sym_source_file] = sym_source_file,
  [sym_document] = sym_document,
  [sym__declaration] = sym__declaration,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_keyword] = sym_keyword,
  [sym_skinparam] = sym_skinparam,
  [sym_participant] = sym_participant,
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
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skinparam] = {
    .visible = true,
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
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_skinparam] = {
    .visible = true,
    .named = true,
  },
  [sym_participant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_skinparam);
      END_STATE();
    case 45:
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_skinparam] = ACTIONS(1),
    [anon_sym_participant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_document] = STATE(17),
    [anon_sym_ATstartuml] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_ATenduml,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_skinparam,
    ACTIONS(11), 1,
      anon_sym_participant,
    STATE(3), 4,
      sym__declaration,
      sym_skinparam,
      sym_participant,
      aux_sym_document_repeat1,
  [19] = 5,
    ACTIONS(9), 1,
      anon_sym_skinparam,
    ACTIONS(11), 1,
      anon_sym_participant,
    ACTIONS(13), 1,
      anon_sym_ATenduml,
    ACTIONS(15), 1,
      sym_comment,
    STATE(4), 4,
      sym__declaration,
      sym_skinparam,
      sym_participant,
      aux_sym_document_repeat1,
  [38] = 5,
    ACTIONS(17), 1,
      anon_sym_ATenduml,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_skinparam,
    ACTIONS(25), 1,
      anon_sym_participant,
    STATE(4), 4,
      sym__declaration,
      sym_skinparam,
      sym_participant,
      aux_sym_document_repeat1,
  [57] = 3,
    ACTIONS(30), 1,
      anon_sym_as,
    STATE(11), 1,
      sym_keyword,
    ACTIONS(28), 4,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_skinparam,
      anon_sym_participant,
  [70] = 1,
    ACTIONS(32), 5,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_as,
      anon_sym_skinparam,
      anon_sym_participant,
  [78] = 1,
    ACTIONS(34), 4,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_skinparam,
      anon_sym_participant,
  [85] = 1,
    ACTIONS(36), 4,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_skinparam,
      anon_sym_participant,
  [92] = 1,
    ACTIONS(38), 4,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_skinparam,
      anon_sym_participant,
  [99] = 2,
    STATE(8), 1,
      sym_string,
    ACTIONS(40), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [107] = 2,
    STATE(9), 1,
      sym_string,
    ACTIONS(40), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [115] = 2,
    ACTIONS(42), 1,
      sym__unquoted_string,
    STATE(10), 1,
      sym_identifier,
  [122] = 2,
    ACTIONS(44), 1,
      sym__unquoted_string,
    STATE(5), 1,
      sym_identifier,
  [129] = 1,
    ACTIONS(32), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [134] = 1,
    ACTIONS(46), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [139] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [143] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [147] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [151] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 92,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 115,
  [SMALL_STATE(13)] = 122,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 139,
  [SMALL_STATE(17)] = 143,
  [SMALL_STATE(18)] = 147,
  [SMALL_STATE(19)] = 151,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant, 2, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant, 4, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
