#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_doctype = 1,
  anon_sym_POUND = 2,
  aux_sym_element_name_token1 = 3,
  sym_inline_action = 4,
  sym_exec_action = 5,
  anon_sym_DOT = 6,
  sym_tag_name = 7,
  anon_sym_COMMA = 8,
  anon_sym_EQ = 9,
  sym_attribute_name = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_attribute_value_token1 = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_attribute_value_token2 = 14,
  sym_loud_comment = 15,
  sym_silent_comment = 16,
  sym_document = 17,
  sym__node = 18,
  sym_element = 19,
  sym_element_name = 20,
  sym_element_id_name = 21,
  sym__action = 22,
  sym_tag = 23,
  sym_attribute = 24,
  sym_attribute_value = 25,
  sym__comment = 26,
  aux_sym_document_repeat1 = 27,
  aux_sym_element_repeat1 = 28,
  aux_sym_element_repeat2 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_doctype] = "doctype",
  [anon_sym_POUND] = "#",
  [aux_sym_element_name_token1] = "element_name_token1",
  [sym_inline_action] = "inline_action",
  [sym_exec_action] = "exec_action",
  [anon_sym_DOT] = ".",
  [sym_tag_name] = "tag_name",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_attribute_value_token2] = "attribute_value_token2",
  [sym_loud_comment] = "loud_comment",
  [sym_silent_comment] = "silent_comment",
  [sym_document] = "document",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_element_name] = "element_name",
  [sym_element_id_name] = "element_id_name",
  [sym__action] = "_action",
  [sym_tag] = "tag",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [sym__comment] = "_comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_element_repeat2] = "element_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_doctype] = sym_doctype,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_element_name_token1] = aux_sym_element_name_token1,
  [sym_inline_action] = sym_inline_action,
  [sym_exec_action] = sym_exec_action,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_attribute_value_token2] = aux_sym_attribute_value_token2,
  [sym_loud_comment] = sym_loud_comment,
  [sym_silent_comment] = sym_silent_comment,
  [sym_document] = sym_document,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_element_name] = sym_element_name,
  [sym_element_id_name] = sym_element_id_name,
  [sym__action] = sym__action,
  [sym_tag] = sym_tag,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym__comment] = sym__comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_element_repeat2] = aux_sym_element_repeat2,
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
  [aux_sym_element_name_token1] = {
    .visible = false,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_value_token2] = {
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
  [sym_element_name] = {
    .visible = true,
    .named = true,
  },
  [sym_element_id_name] = {
    .visible = true,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
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
  [aux_sym_element_repeat2] = {
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_doctype);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
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
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_inline_action);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_inline_action);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_inline_action);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_exec_action);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_loud_comment);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_silent_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_doctype] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_element_name_token1] = ACTIONS(1),
    [sym_inline_action] = ACTIONS(1),
    [sym_exec_action] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_loud_comment] = ACTIONS(1),
    [sym_silent_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(21),
    [sym__node] = STATE(4),
    [sym_element] = STATE(4),
    [sym_element_name] = STATE(2),
    [sym__action] = STATE(4),
    [sym__comment] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_doctype] = ACTIONS(5),
    [aux_sym_element_name_token1] = ACTIONS(7),
    [sym_inline_action] = ACTIONS(9),
    [sym_exec_action] = ACTIONS(5),
    [sym_loud_comment] = ACTIONS(5),
    [sym_silent_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_inline_action,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    STATE(5), 2,
      sym_tag,
      aux_sym_element_repeat1,
    STATE(11), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [29] = 6,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(23), 1,
      sym_inline_action,
    STATE(8), 2,
      sym_tag,
      aux_sym_element_repeat1,
    STATE(10), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [55] = 6,
    ACTIONS(7), 1,
      aux_sym_element_name_token1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_inline_action,
    STATE(2), 1,
      sym_element_name,
    ACTIONS(27), 4,
      sym_doctype,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
    STATE(6), 5,
      sym__node,
      sym_element,
      sym__action,
      sym__comment,
      aux_sym_document_repeat1,
  [81] = 6,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      sym_inline_action,
    STATE(8), 2,
      sym_tag,
      aux_sym_element_repeat1,
    STATE(13), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [107] = 6,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      aux_sym_element_name_token1,
    ACTIONS(43), 1,
      sym_inline_action,
    STATE(2), 1,
      sym_element_name,
    ACTIONS(37), 4,
      sym_doctype,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
    STATE(6), 5,
      sym__node,
      sym_element,
      sym__action,
      sym__comment,
      aux_sym_document_repeat1,
  [133] = 6,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(48), 1,
      sym_inline_action,
    STATE(3), 2,
      sym_tag,
      aux_sym_element_repeat1,
    STATE(12), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [159] = 4,
    ACTIONS(52), 1,
      sym_inline_action,
    ACTIONS(54), 1,
      anon_sym_DOT,
    STATE(8), 2,
      sym_tag,
      aux_sym_element_repeat1,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [179] = 2,
    ACTIONS(59), 1,
      sym_inline_action,
    ACTIONS(57), 9,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_POUND,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [194] = 4,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      sym_inline_action,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [213] = 4,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      sym_inline_action,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [232] = 4,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(23), 1,
      sym_inline_action,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [251] = 4,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(48), 1,
      sym_inline_action,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [270] = 4,
    ACTIONS(67), 1,
      sym_inline_action,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [289] = 2,
    ACTIONS(74), 1,
      sym_inline_action,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [303] = 2,
    ACTIONS(78), 1,
      sym_inline_action,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [317] = 2,
    ACTIONS(82), 1,
      sym_inline_action,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [330] = 2,
    ACTIONS(86), 1,
      sym_inline_action,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      sym_doctype,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [343] = 3,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym_attribute_value,
  [353] = 2,
    ACTIONS(92), 1,
      aux_sym_element_name_token1,
    STATE(7), 1,
      sym_element_id_name,
  [360] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [364] = 1,
    ACTIONS(96), 1,
      anon_sym_EQ,
  [368] = 1,
    ACTIONS(98), 1,
      sym_attribute_name,
  [372] = 1,
    ACTIONS(100), 1,
      aux_sym_attribute_value_token1,
  [376] = 1,
    ACTIONS(102), 1,
      aux_sym_attribute_value_token2,
  [380] = 1,
    ACTIONS(104), 1,
      sym_tag_name,
  [384] = 1,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
  [388] = 1,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 179,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 232,
  [SMALL_STATE(13)] = 251,
  [SMALL_STATE(14)] = 270,
  [SMALL_STATE(15)] = 289,
  [SMALL_STATE(16)] = 303,
  [SMALL_STATE(17)] = 317,
  [SMALL_STATE(18)] = 330,
  [SMALL_STATE(19)] = 343,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 360,
  [SMALL_STATE(22)] = 364,
  [SMALL_STATE(23)] = 368,
  [SMALL_STATE(24)] = 372,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 380,
  [SMALL_STATE(27)] = 384,
  [SMALL_STATE(28)] = 388,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_name, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_name, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat2, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat2, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat2, 2), SHIFT_REPEAT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_id_name, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_id_name, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
