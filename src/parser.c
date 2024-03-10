#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_doctype = 1,
  anon_sym_POUND = 2,
  anon_sym_DOT = 3,
  sym_inline_action = 4,
  sym_exec_action = 5,
  aux_sym_element_name_token1 = 6,
  sym_loud_comment = 7,
  sym_silent_comment = 8,
  sym_document = 9,
  sym__node = 10,
  sym_element = 11,
  sym__action = 12,
  sym_element_name = 13,
  sym_element_id_name = 14,
  sym_element_tag_name = 15,
  sym__comment = 16,
  aux_sym_document_repeat1 = 17,
  aux_sym_element_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_doctype] = "doctype",
  [anon_sym_POUND] = "#",
  [anon_sym_DOT] = ".",
  [sym_inline_action] = "inline_action",
  [sym_exec_action] = "exec_action",
  [aux_sym_element_name_token1] = "element_name_token1",
  [sym_loud_comment] = "loud_comment",
  [sym_silent_comment] = "silent_comment",
  [sym_document] = "document",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym__action] = "_action",
  [sym_element_name] = "element_name",
  [sym_element_id_name] = "element_id_name",
  [sym_element_tag_name] = "element_tag_name",
  [sym__comment] = "_comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_doctype] = sym_doctype,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_inline_action] = sym_inline_action,
  [sym_exec_action] = sym_exec_action,
  [aux_sym_element_name_token1] = aux_sym_element_name_token1,
  [sym_loud_comment] = sym_loud_comment,
  [sym_silent_comment] = sym_silent_comment,
  [sym_document] = sym_document,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym__action] = sym__action,
  [sym_element_name] = sym_element_name,
  [sym_element_id_name] = sym_element_id_name,
  [sym_element_tag_name] = sym_element_tag_name,
  [sym__comment] = sym__comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_inline_action] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_action] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_element_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_loud_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_silent_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym_element_name] = {
    .visible = true,
    .named = true,
  },
  [sym_element_id_name] = {
    .visible = true,
    .named = true,
  },
  [sym_element_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (eof) ADVANCE(2);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_doctype);
      if (lookahead == '>') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_inline_action);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_inline_action);
      if (lookahead == '>') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_inline_action);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_exec_action);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_loud_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_silent_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_doctype] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_inline_action] = ACTIONS(1),
    [sym_exec_action] = ACTIONS(1),
    [aux_sym_element_name_token1] = ACTIONS(1),
    [sym_loud_comment] = ACTIONS(1),
    [sym_silent_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(15),
    [sym__node] = STATE(2),
    [sym_element] = STATE(2),
    [sym__action] = STATE(2),
    [sym_element_name] = STATE(4),
    [sym__comment] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_doctype] = ACTIONS(5),
    [sym_inline_action] = ACTIONS(7),
    [sym_exec_action] = ACTIONS(5),
    [aux_sym_element_name_token1] = ACTIONS(9),
    [sym_loud_comment] = ACTIONS(5),
    [sym_silent_comment] = ACTIONS(5),
  },
  [2] = {
    [sym__node] = STATE(3),
    [sym_element] = STATE(3),
    [sym__action] = STATE(3),
    [sym_element_name] = STATE(4),
    [sym__comment] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_doctype] = ACTIONS(13),
    [sym_inline_action] = ACTIONS(15),
    [sym_exec_action] = ACTIONS(13),
    [aux_sym_element_name_token1] = ACTIONS(9),
    [sym_loud_comment] = ACTIONS(13),
    [sym_silent_comment] = ACTIONS(13),
  },
  [3] = {
    [sym__node] = STATE(3),
    [sym_element] = STATE(3),
    [sym__action] = STATE(3),
    [sym_element_name] = STATE(4),
    [sym__comment] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_doctype] = ACTIONS(19),
    [sym_inline_action] = ACTIONS(22),
    [sym_exec_action] = ACTIONS(19),
    [aux_sym_element_name_token1] = ACTIONS(25),
    [sym_loud_comment] = ACTIONS(19),
    [sym_silent_comment] = ACTIONS(19),
  },
  [4] = {
    [aux_sym_element_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_doctype] = ACTIONS(28),
    [anon_sym_POUND] = ACTIONS(30),
    [anon_sym_DOT] = ACTIONS(32),
    [sym_inline_action] = ACTIONS(34),
    [sym_exec_action] = ACTIONS(28),
    [aux_sym_element_name_token1] = ACTIONS(28),
    [sym_loud_comment] = ACTIONS(28),
    [sym_silent_comment] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(38), 3,
      anon_sym_POUND,
      sym_inline_action,
      sym_silent_comment,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_DOT,
      sym_exec_action,
      aux_sym_element_name_token1,
      sym_loud_comment,
  [14] = 4,
    ACTIONS(32), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      sym_inline_action,
    STATE(8), 1,
      aux_sym_element_repeat1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      sym_doctype,
      sym_exec_action,
      aux_sym_element_name_token1,
      sym_loud_comment,
      sym_silent_comment,
  [32] = 4,
    ACTIONS(32), 1,
      anon_sym_DOT,
    ACTIONS(46), 1,
      sym_inline_action,
    STATE(9), 1,
      aux_sym_element_repeat1,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      sym_doctype,
      sym_exec_action,
      aux_sym_element_name_token1,
      sym_loud_comment,
      sym_silent_comment,
  [50] = 4,
    ACTIONS(50), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_inline_action,
    STATE(8), 1,
      aux_sym_element_repeat1,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      sym_doctype,
      sym_exec_action,
      aux_sym_element_name_token1,
      sym_loud_comment,
      sym_silent_comment,
  [68] = 4,
    ACTIONS(32), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      sym_inline_action,
    STATE(8), 1,
      aux_sym_element_repeat1,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      sym_doctype,
      sym_exec_action,
      aux_sym_element_name_token1,
      sym_loud_comment,
      sym_silent_comment,
  [86] = 2,
    ACTIONS(61), 1,
      sym_inline_action,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_DOT,
      sym_exec_action,
      aux_sym_element_name_token1,
      sym_loud_comment,
      sym_silent_comment,
  [99] = 2,
    ACTIONS(65), 1,
      sym_inline_action,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_DOT,
      sym_exec_action,
      aux_sym_element_name_token1,
      sym_loud_comment,
      sym_silent_comment,
  [112] = 2,
    ACTIONS(53), 1,
      sym_inline_action,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_DOT,
      sym_exec_action,
      aux_sym_element_name_token1,
      sym_loud_comment,
      sym_silent_comment,
  [125] = 2,
    ACTIONS(67), 1,
      aux_sym_element_name_token1,
    STATE(7), 1,
      sym_element_id_name,
  [132] = 2,
    ACTIONS(69), 1,
      aux_sym_element_name_token1,
    STATE(12), 1,
      sym_element_tag_name,
  [139] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 32,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 99,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 125,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_name, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_name, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(14),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_id_name, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_id_name, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_tag_name, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_tag_name, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ezML(void) {
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
