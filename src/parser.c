#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  sym__unquoted_string = 3,
  sym__quoted_string = 4,
  sym_comment = 5,
  anon_sym_as = 6,
  anon_sym_skinparam = 7,
  anon_sym_participant = 8,
  anon_sym_actor = 9,
  anon_sym_boundary = 10,
  anon_sym_control = 11,
  anon_sym_entity = 12,
  anon_sym_database = 13,
  anon_sym_collections = 14,
  anon_sym_queue = 15,
  sym_source_file = 16,
  sym_document = 17,
  sym__statement = 18,
  sym_identifier = 19,
  sym_string = 20,
  sym_keyword = 21,
  sym_skinparam = 22,
  sym__participant_keyword = 23,
  sym_participant = 24,
  aux_sym_document_repeat1 = 25,
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
  [anon_sym_actor] = "actor",
  [anon_sym_boundary] = "boundary",
  [anon_sym_control] = "control",
  [anon_sym_entity] = "entity",
  [anon_sym_database] = "database",
  [anon_sym_collections] = "collections",
  [anon_sym_queue] = "queue",
  [sym_source_file] = "source_file",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_keyword] = "keyword",
  [sym_skinparam] = "skinparam",
  [sym__participant_keyword] = "keyword",
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
  [anon_sym_actor] = anon_sym_actor,
  [anon_sym_boundary] = anon_sym_boundary,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_database] = anon_sym_database,
  [anon_sym_collections] = anon_sym_collections,
  [anon_sym_queue] = anon_sym_queue,
  [sym_source_file] = sym_source_file,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_keyword] = sym_keyword,
  [sym_skinparam] = sym_skinparam,
  [sym__participant_keyword] = sym_keyword,
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
  [anon_sym_actor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boundary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_database] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_collections] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_queue] = {
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
  [sym__statement] = {
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
  [sym__participant_keyword] = {
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
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == 'q') ADVANCE(69);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 76:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_skinparam);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_participant);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_actor);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_boundary);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_database);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_collections);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_queue);
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
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
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
    [anon_sym_actor] = ACTIONS(1),
    [anon_sym_boundary] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_database] = ACTIONS(1),
    [anon_sym_collections] = ACTIONS(1),
    [anon_sym_queue] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym_document] = STATE(20),
    [anon_sym_ATstartuml] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_skinparam] = STATE(3),
    [sym__participant_keyword] = STATE(12),
    [sym_participant] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_ATenduml] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_skinparam] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(11),
    [anon_sym_boundary] = ACTIONS(11),
    [anon_sym_control] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_database] = ACTIONS(11),
    [anon_sym_collections] = ACTIONS(11),
    [anon_sym_queue] = ACTIONS(11),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym_skinparam] = STATE(4),
    [sym__participant_keyword] = STATE(12),
    [sym_participant] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATenduml] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_skinparam] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(11),
    [anon_sym_boundary] = ACTIONS(11),
    [anon_sym_control] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_database] = ACTIONS(11),
    [anon_sym_collections] = ACTIONS(11),
    [anon_sym_queue] = ACTIONS(11),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_skinparam] = STATE(4),
    [sym__participant_keyword] = STATE(12),
    [sym_participant] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATenduml] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_skinparam] = ACTIONS(22),
    [anon_sym_participant] = ACTIONS(25),
    [anon_sym_actor] = ACTIONS(25),
    [anon_sym_boundary] = ACTIONS(25),
    [anon_sym_control] = ACTIONS(25),
    [anon_sym_entity] = ACTIONS(25),
    [anon_sym_database] = ACTIONS(25),
    [anon_sym_collections] = ACTIONS(25),
    [anon_sym_queue] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(30), 1,
      anon_sym_as,
    STATE(10), 1,
      sym_keyword,
    ACTIONS(28), 11,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_skinparam,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [20] = 1,
    ACTIONS(32), 12,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_as,
      anon_sym_skinparam,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [35] = 1,
    ACTIONS(34), 11,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_skinparam,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [49] = 1,
    ACTIONS(36), 11,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_skinparam,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [63] = 1,
    ACTIONS(38), 11,
      anon_sym_ATenduml,
      sym_comment,
      anon_sym_skinparam,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [77] = 2,
    STATE(8), 1,
      sym_string,
    ACTIONS(40), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [85] = 2,
    STATE(13), 1,
      sym_identifier,
    ACTIONS(42), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [93] = 2,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(44), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [101] = 2,
    STATE(9), 1,
      sym_string,
    ACTIONS(40), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [109] = 1,
    ACTIONS(32), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [114] = 1,
    ACTIONS(46), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [119] = 1,
    ACTIONS(48), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [124] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [128] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [132] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 35,
  [SMALL_STATE(8)] = 49,
  [SMALL_STATE(9)] = 63,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 85,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 101,
  [SMALL_STATE(14)] = 109,
  [SMALL_STATE(15)] = 114,
  [SMALL_STATE(16)] = 119,
  [SMALL_STATE(17)] = 124,
  [SMALL_STATE(18)] = 128,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 136,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__participant_keyword, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [52] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
