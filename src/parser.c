#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_doctype = 1,
  anon_sym_POUND = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  aux_sym_element_name_token1 = 5,
  sym_inline_action = 6,
  sym_exec_action = 7,
  anon_sym_DOT = 8,
  sym_tag_name = 9,
  anon_sym_COMMA = 10,
  anon_sym_EQ = 11,
  sym_attribute_name = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_attribute_value_token1 = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_attribute_value_token2 = 16,
  sym_loud_comment = 17,
  sym_silent_comment = 18,
  sym_document = 19,
  sym__node = 20,
  sym_element = 21,
  sym_content = 22,
  sym_element_name = 23,
  sym_element_id_name = 24,
  sym__action = 25,
  sym_tag = 26,
  sym_attribute = 27,
  sym_attribute_value = 28,
  sym__comment = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_element_repeat1 = 31,
  aux_sym_element_repeat2 = 32,
  aux_sym_content_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_doctype] = "doctype",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_content] = "content",
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
  [aux_sym_content_repeat1] = "content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_doctype] = sym_doctype,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_content] = sym_content,
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
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_content] = {
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
  [aux_sym_content_repeat1] = {
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_doctype);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
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
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_element_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_inline_action);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_inline_action);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_inline_action);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_exec_action);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
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
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_loud_comment);
      END_STATE();
    case 89:
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
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_doctype] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_document] = STATE(32),
    [sym__node] = STATE(7),
    [sym_element] = STATE(7),
    [sym_element_name] = STATE(2),
    [sym__action] = STATE(7),
    [sym__comment] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
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
  [0] = 9,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_inline_action,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      sym_content,
    STATE(4), 2,
      sym_tag,
      aux_sym_element_repeat1,
    STATE(10), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(11), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [36] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      sym_inline_action,
    STATE(25), 1,
      sym_content,
    STATE(6), 2,
      sym_tag,
      aux_sym_element_repeat1,
    STATE(8), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [69] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      sym_inline_action,
    STATE(21), 1,
      sym_content,
    STATE(6), 2,
      sym_tag,
      aux_sym_element_repeat1,
    STATE(12), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(27), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [102] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      sym_inline_action,
    STATE(22), 1,
      sym_content,
    STATE(3), 2,
      sym_tag,
      aux_sym_element_repeat1,
    STATE(9), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [135] = 4,
    ACTIONS(37), 1,
      sym_inline_action,
    ACTIONS(39), 1,
      anon_sym_DOT,
    STATE(6), 2,
      sym_tag,
      aux_sym_element_repeat1,
    ACTIONS(35), 9,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [157] = 6,
    ACTIONS(7), 1,
      aux_sym_element_name_token1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_inline_action,
    STATE(2), 1,
      sym_element_name,
    ACTIONS(44), 4,
      sym_doctype,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
    STATE(11), 5,
      sym__node,
      sym_element,
      sym__action,
      sym__comment,
      aux_sym_document_repeat1,
  [183] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      sym_inline_action,
    STATE(26), 1,
      sym_content,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [209] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      sym_inline_action,
    STATE(25), 1,
      sym_content,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [235] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      sym_inline_action,
    STATE(21), 1,
      sym_content,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(27), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [261] = 6,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym_element_name_token1,
    ACTIONS(60), 1,
      sym_inline_action,
    STATE(2), 1,
      sym_element_name,
    ACTIONS(54), 4,
      sym_doctype,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
    STATE(11), 5,
      sym__node,
      sym_element,
      sym__action,
      sym__comment,
      aux_sym_document_repeat1,
  [287] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      sym_inline_action,
    STATE(22), 1,
      sym_content,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [313] = 2,
    ACTIONS(65), 1,
      sym_inline_action,
    ACTIONS(63), 11,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [330] = 4,
    ACTIONS(69), 1,
      sym_inline_action,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat2,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [351] = 2,
    ACTIONS(76), 1,
      sym_inline_action,
    ACTIONS(74), 10,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [367] = 2,
    ACTIONS(80), 1,
      sym_inline_action,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [383] = 3,
    ACTIONS(84), 1,
      sym_inline_action,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(82), 9,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [401] = 2,
    ACTIONS(90), 1,
      sym_inline_action,
    ACTIONS(88), 9,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [416] = 2,
    ACTIONS(94), 1,
      sym_inline_action,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      anon_sym_COMMA,
      sym_loud_comment,
      sym_silent_comment,
  [431] = 2,
    ACTIONS(98), 1,
      sym_inline_action,
    ACTIONS(96), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [444] = 2,
    ACTIONS(33), 1,
      sym_inline_action,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [457] = 2,
    ACTIONS(25), 1,
      sym_inline_action,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [470] = 2,
    ACTIONS(102), 1,
      sym_inline_action,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [483] = 2,
    ACTIONS(29), 1,
      sym_inline_action,
    ACTIONS(27), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [496] = 2,
    ACTIONS(50), 1,
      sym_inline_action,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [509] = 2,
    ACTIONS(106), 1,
      sym_inline_action,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      sym_doctype,
      anon_sym_RBRACE,
      aux_sym_element_name_token1,
      sym_exec_action,
      sym_loud_comment,
      sym_silent_comment,
  [522] = 4,
    ACTIONS(7), 1,
      aux_sym_element_name_token1,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_element_name,
    STATE(28), 2,
      sym_element,
      aux_sym_content_repeat1,
  [536] = 4,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      aux_sym_element_name_token1,
    STATE(2), 1,
      sym_element_name,
    STATE(28), 2,
      sym_element,
      aux_sym_content_repeat1,
  [550] = 4,
    ACTIONS(7), 1,
      aux_sym_element_name_token1,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_element_name,
    STATE(27), 2,
      sym_element,
      aux_sym_content_repeat1,
  [564] = 3,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym_attribute_value,
  [574] = 2,
    ACTIONS(121), 1,
      aux_sym_element_name_token1,
    STATE(5), 1,
      sym_element_id_name,
  [581] = 1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [585] = 1,
    ACTIONS(125), 1,
      sym_attribute_name,
  [589] = 1,
    ACTIONS(127), 1,
      sym_tag_name,
  [593] = 1,
    ACTIONS(129), 1,
      aux_sym_attribute_value_token1,
  [597] = 1,
    ACTIONS(131), 1,
      aux_sym_attribute_value_token2,
  [601] = 1,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
  [605] = 1,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 135,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 183,
  [SMALL_STATE(9)] = 209,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 287,
  [SMALL_STATE(13)] = 313,
  [SMALL_STATE(14)] = 330,
  [SMALL_STATE(15)] = 351,
  [SMALL_STATE(16)] = 367,
  [SMALL_STATE(17)] = 383,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 416,
  [SMALL_STATE(20)] = 431,
  [SMALL_STATE(21)] = 444,
  [SMALL_STATE(22)] = 457,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 483,
  [SMALL_STATE(25)] = 496,
  [SMALL_STATE(26)] = 509,
  [SMALL_STATE(27)] = 522,
  [SMALL_STATE(28)] = 536,
  [SMALL_STATE(29)] = 550,
  [SMALL_STATE(30)] = 564,
  [SMALL_STATE(31)] = 574,
  [SMALL_STATE(32)] = 581,
  [SMALL_STATE(33)] = 585,
  [SMALL_STATE(34)] = 589,
  [SMALL_STATE(35)] = 593,
  [SMALL_STATE(36)] = 597,
  [SMALL_STATE(37)] = 601,
  [SMALL_STATE(38)] = 605,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(34),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_name, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_name, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat2, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat2, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat2, 2), SHIFT_REPEAT(33),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_id_name, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_id_name, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(13),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
