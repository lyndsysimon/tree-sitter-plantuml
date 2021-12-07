#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  anon_sym_skinparam = 6,
  anon_sym_participant = 7,
  anon_sym_actor = 8,
  anon_sym_boundary = 9,
  anon_sym_control = 10,
  anon_sym_entity = 11,
  anon_sym_database = 12,
  anon_sym_collections = 13,
  anon_sym_queue = 14,
  anon_sym_as = 15,
  anon_sym_BANGstartsub = 16,
  anon_sym_BANGendsub = 17,
  sym_source_file = 18,
  sym_document = 19,
  sym__statement = 20,
  sym_identifier = 21,
  sym_string = 22,
  sym_skinparam = 23,
  sym__participant_keyword = 24,
  sym_participant = 25,
  sym_command = 26,
  aux_sym_document_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [sym__unquoted_string] = "_unquoted_string",
  [sym__quoted_string] = "_quoted_string",
  [sym_comment] = "comment",
  [anon_sym_skinparam] = "skinparam",
  [anon_sym_participant] = "participant",
  [anon_sym_actor] = "actor",
  [anon_sym_boundary] = "boundary",
  [anon_sym_control] = "control",
  [anon_sym_entity] = "entity",
  [anon_sym_database] = "database",
  [anon_sym_collections] = "collections",
  [anon_sym_queue] = "queue",
  [anon_sym_as] = "keyword",
  [anon_sym_BANGstartsub] = "keyword",
  [anon_sym_BANGendsub] = "keyword",
  [sym_source_file] = "source_file",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_skinparam] = "skinparam",
  [sym__participant_keyword] = "keyword",
  [sym_participant] = "participant",
  [sym_command] = "command",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [sym__unquoted_string] = sym__unquoted_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_comment] = sym_comment,
  [anon_sym_skinparam] = anon_sym_skinparam,
  [anon_sym_participant] = anon_sym_participant,
  [anon_sym_actor] = anon_sym_actor,
  [anon_sym_boundary] = anon_sym_boundary,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_database] = anon_sym_database,
  [anon_sym_collections] = anon_sym_collections,
  [anon_sym_queue] = anon_sym_queue,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_BANGstartsub] = anon_sym_as,
  [anon_sym_BANGendsub] = anon_sym_as,
  [sym_source_file] = sym_source_file,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_skinparam] = sym_skinparam,
  [sym__participant_keyword] = anon_sym_as,
  [sym_participant] = sym_participant,
  [sym_command] = sym_command,
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
  [anon_sym_as] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANGstartsub] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANGendsub] = {
    .visible = true,
    .named = true,
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
  [sym_command] = {
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
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == 'q') ADVANCE(80);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(94);
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
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 89:
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
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_skinparam);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_participant);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_actor);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_boundary);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_database);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_collections);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_queue);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANGstartsub);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BANGendsub);
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_skinparam] = ACTIONS(1),
    [anon_sym_participant] = ACTIONS(1),
    [anon_sym_actor] = ACTIONS(1),
    [anon_sym_boundary] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_database] = ACTIONS(1),
    [anon_sym_collections] = ACTIONS(1),
    [anon_sym_queue] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_BANGstartsub] = ACTIONS(1),
    [anon_sym_BANGendsub] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_document] = STATE(24),
    [anon_sym_ATstartuml] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_skinparam] = STATE(2),
    [sym__participant_keyword] = STATE(16),
    [sym_participant] = STATE(2),
    [sym_command] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [anon_sym_ATenduml] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_skinparam] = ACTIONS(10),
    [anon_sym_participant] = ACTIONS(13),
    [anon_sym_actor] = ACTIONS(13),
    [anon_sym_boundary] = ACTIONS(13),
    [anon_sym_control] = ACTIONS(13),
    [anon_sym_entity] = ACTIONS(13),
    [anon_sym_database] = ACTIONS(13),
    [anon_sym_collections] = ACTIONS(13),
    [anon_sym_queue] = ACTIONS(13),
    [anon_sym_BANGstartsub] = ACTIONS(16),
    [anon_sym_BANGendsub] = ACTIONS(5),
  },
  [3] = {
    [sym__statement] = STATE(5),
    [sym_skinparam] = STATE(5),
    [sym__participant_keyword] = STATE(16),
    [sym_participant] = STATE(5),
    [sym_command] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(19),
    [anon_sym_skinparam] = ACTIONS(21),
    [anon_sym_participant] = ACTIONS(23),
    [anon_sym_actor] = ACTIONS(23),
    [anon_sym_boundary] = ACTIONS(23),
    [anon_sym_control] = ACTIONS(23),
    [anon_sym_entity] = ACTIONS(23),
    [anon_sym_database] = ACTIONS(23),
    [anon_sym_collections] = ACTIONS(23),
    [anon_sym_queue] = ACTIONS(23),
    [anon_sym_BANGstartsub] = ACTIONS(25),
    [anon_sym_BANGendsub] = ACTIONS(27),
  },
  [4] = {
    [sym__statement] = STATE(6),
    [sym_skinparam] = STATE(6),
    [sym__participant_keyword] = STATE(16),
    [sym_participant] = STATE(6),
    [sym_command] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [anon_sym_ATenduml] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [anon_sym_skinparam] = ACTIONS(21),
    [anon_sym_participant] = ACTIONS(23),
    [anon_sym_actor] = ACTIONS(23),
    [anon_sym_boundary] = ACTIONS(23),
    [anon_sym_control] = ACTIONS(23),
    [anon_sym_entity] = ACTIONS(23),
    [anon_sym_database] = ACTIONS(23),
    [anon_sym_collections] = ACTIONS(23),
    [anon_sym_queue] = ACTIONS(23),
    [anon_sym_BANGstartsub] = ACTIONS(25),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym_skinparam] = STATE(2),
    [sym__participant_keyword] = STATE(16),
    [sym_participant] = STATE(2),
    [sym_command] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(33),
    [anon_sym_skinparam] = ACTIONS(21),
    [anon_sym_participant] = ACTIONS(23),
    [anon_sym_actor] = ACTIONS(23),
    [anon_sym_boundary] = ACTIONS(23),
    [anon_sym_control] = ACTIONS(23),
    [anon_sym_entity] = ACTIONS(23),
    [anon_sym_database] = ACTIONS(23),
    [anon_sym_collections] = ACTIONS(23),
    [anon_sym_queue] = ACTIONS(23),
    [anon_sym_BANGstartsub] = ACTIONS(25),
    [anon_sym_BANGendsub] = ACTIONS(35),
  },
  [6] = {
    [sym__statement] = STATE(2),
    [sym_skinparam] = STATE(2),
    [sym__participant_keyword] = STATE(16),
    [sym_participant] = STATE(2),
    [sym_command] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [anon_sym_ATenduml] = ACTIONS(37),
    [sym_comment] = ACTIONS(33),
    [anon_sym_skinparam] = ACTIONS(21),
    [anon_sym_participant] = ACTIONS(23),
    [anon_sym_actor] = ACTIONS(23),
    [anon_sym_boundary] = ACTIONS(23),
    [anon_sym_control] = ACTIONS(23),
    [anon_sym_entity] = ACTIONS(23),
    [anon_sym_database] = ACTIONS(23),
    [anon_sym_collections] = ACTIONS(23),
    [anon_sym_queue] = ACTIONS(23),
    [anon_sym_BANGstartsub] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(39), 14,
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
      anon_sym_as,
      anon_sym_BANGstartsub,
      anon_sym_BANGendsub,
  [17] = 2,
    ACTIONS(43), 1,
      anon_sym_as,
    ACTIONS(41), 13,
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
      anon_sym_BANGstartsub,
      anon_sym_BANGendsub,
  [36] = 1,
    ACTIONS(45), 13,
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
      anon_sym_BANGstartsub,
      anon_sym_BANGendsub,
  [52] = 1,
    ACTIONS(47), 13,
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
      anon_sym_BANGstartsub,
      anon_sym_BANGendsub,
  [68] = 1,
    ACTIONS(49), 13,
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
      anon_sym_BANGstartsub,
      anon_sym_BANGendsub,
  [84] = 1,
    ACTIONS(51), 13,
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
      anon_sym_BANGstartsub,
      anon_sym_BANGendsub,
  [100] = 1,
    ACTIONS(53), 13,
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
      anon_sym_BANGstartsub,
      anon_sym_BANGendsub,
  [116] = 2,
    STATE(15), 1,
      sym_identifier,
    ACTIONS(55), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [124] = 2,
    STATE(12), 1,
      sym_string,
    ACTIONS(57), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [132] = 2,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(59), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [140] = 2,
    STATE(3), 1,
      sym_string,
    ACTIONS(57), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [148] = 2,
    STATE(9), 1,
      sym_string,
    ACTIONS(57), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [156] = 1,
    ACTIONS(39), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [161] = 1,
    ACTIONS(61), 2,
      sym__unquoted_string,
      sym__quoted_string,
  [166] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [170] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [174] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [178] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 17,
  [SMALL_STATE(9)] = 36,
  [SMALL_STATE(10)] = 52,
  [SMALL_STATE(11)] = 68,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 100,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 124,
  [SMALL_STATE(16)] = 132,
  [SMALL_STATE(17)] = 140,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 156,
  [SMALL_STATE(20)] = 161,
  [SMALL_STATE(21)] = 166,
  [SMALL_STATE(22)] = 170,
  [SMALL_STATE(23)] = 174,
  [SMALL_STATE(24)] = 178,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__participant_keyword, 1),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
