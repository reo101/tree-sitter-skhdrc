#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LT = 2,
  anon_sym_COMMA = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_COLON = 7,
  anon_sym_SEMI = 8,
  anon_sym_DASH = 9,
  anon_sym_PLUS = 10,
  sym_literal = 11,
  sym_keycode = 12,
  anon_sym_TILDE = 13,
  anon_sym_STAR = 14,
  sym_string = 15,
  aux_sym_command_token1 = 16,
  anon_sym_LF = 17,
  aux_sym_command_token2 = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_AT = 20,
  sym_name = 21,
  anon_sym_cmd = 22,
  anon_sym_alt = 23,
  anon_sym_shift = 24,
  anon_sym_ctrl = 25,
  anon_sym_lctrl = 26,
  anon_sym_lalt = 27,
  anon_sym_lshift = 28,
  sym_source_file = 29,
  sym__statement = 30,
  sym_hotkey = 31,
  sym_mode = 32,
  sym_action = 33,
  sym_keysym = 34,
  sym_mod = 35,
  sym_key = 36,
  sym_proc_map_lst = 37,
  sym_proc_map = 38,
  sym_command = 39,
  sym_mode_decl = 40,
  sym_modifier_keyword = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_proc_map_lst_repeat1 = 43,
  aux_sym_command_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [sym_literal] = "literal",
  [sym_keycode] = "keycode",
  [anon_sym_TILDE] = "~",
  [anon_sym_STAR] = "*",
  [sym_string] = "string",
  [aux_sym_command_token1] = "command_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_command_token2] = "command_token2",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_AT] = "@",
  [sym_name] = "name",
  [anon_sym_cmd] = "cmd",
  [anon_sym_alt] = "alt",
  [anon_sym_shift] = "shift",
  [anon_sym_ctrl] = "ctrl",
  [anon_sym_lctrl] = "lctrl",
  [anon_sym_lalt] = "lalt",
  [anon_sym_lshift] = "lshift",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_hotkey] = "hotkey",
  [sym_mode] = "mode",
  [sym_action] = "action",
  [sym_keysym] = "keysym",
  [sym_mod] = "mod",
  [sym_key] = "key",
  [sym_proc_map_lst] = "proc_map_lst",
  [sym_proc_map] = "proc_map",
  [sym_command] = "command",
  [sym_mode_decl] = "mode_decl",
  [sym_modifier_keyword] = "modifier_keyword",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_proc_map_lst_repeat1] = "proc_map_lst_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_literal] = sym_literal,
  [sym_keycode] = sym_keycode,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_string] = sym_string,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_command_token2] = aux_sym_command_token2,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [sym_name] = sym_name,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_shift] = anon_sym_shift,
  [anon_sym_ctrl] = anon_sym_ctrl,
  [anon_sym_lctrl] = anon_sym_lctrl,
  [anon_sym_lalt] = anon_sym_lalt,
  [anon_sym_lshift] = anon_sym_lshift,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_hotkey] = sym_hotkey,
  [sym_mode] = sym_mode,
  [sym_action] = sym_action,
  [sym_keysym] = sym_keysym,
  [sym_mod] = sym_mod,
  [sym_key] = sym_key,
  [sym_proc_map_lst] = sym_proc_map_lst,
  [sym_proc_map] = sym_proc_map,
  [sym_command] = sym_command,
  [sym_mode_decl] = sym_mode_decl,
  [sym_modifier_keyword] = sym_modifier_keyword,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_proc_map_lst_repeat1] = aux_sym_proc_map_lst_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_keycode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lalt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lshift] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_hotkey] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_keysym] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_map_lst] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_map] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_map_lst_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '"', 3,
        '#', 9,
        '*', 51,
        '+', 20,
        ',', 11,
        '-', 19,
        ':', 16,
        ';', 17,
        '<', 10,
        '@', 58,
        '[', 12,
        ']', 13,
        '_', 59,
        'a', 33,
        'c', 37,
        'k', 23,
        'l', 25,
        's', 29,
        '~', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\\') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == 'k') ADVANCE(24);
      if (lookahead == '~') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'K') ADVANCE(47);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'K') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'V') ADVANCE(21);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'V') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 's') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_keycode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_lctrl);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_lalt);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_lshift);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [sym_keycode] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(1),
    [anon_sym_shift] = ACTIONS(1),
    [anon_sym_ctrl] = ACTIONS(1),
    [anon_sym_lctrl] = ACTIONS(1),
    [anon_sym_lalt] = ACTIONS(1),
    [anon_sym_lshift] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym__statement] = STATE(3),
    [sym_hotkey] = STATE(3),
    [sym_mode] = STATE(47),
    [sym_action] = STATE(14),
    [sym_keysym] = STATE(26),
    [sym_mod] = STATE(44),
    [sym_key] = STATE(28),
    [sym_mode_decl] = STATE(3),
    [sym_modifier_keyword] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_literal] = ACTIONS(7),
    [sym_keycode] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [sym_name] = ACTIONS(13),
    [anon_sym_cmd] = ACTIONS(15),
    [anon_sym_alt] = ACTIONS(15),
    [anon_sym_shift] = ACTIONS(15),
    [anon_sym_ctrl] = ACTIONS(15),
    [anon_sym_lctrl] = ACTIONS(15),
    [anon_sym_lalt] = ACTIONS(15),
    [anon_sym_lshift] = ACTIONS(15),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_hotkey] = STATE(2),
    [sym_mode] = STATE(47),
    [sym_action] = STATE(14),
    [sym_keysym] = STATE(26),
    [sym_mod] = STATE(44),
    [sym_key] = STATE(28),
    [sym_mode_decl] = STATE(2),
    [sym_modifier_keyword] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym_literal] = ACTIONS(22),
    [sym_keycode] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [sym_name] = ACTIONS(31),
    [anon_sym_cmd] = ACTIONS(34),
    [anon_sym_alt] = ACTIONS(34),
    [anon_sym_shift] = ACTIONS(34),
    [anon_sym_ctrl] = ACTIONS(34),
    [anon_sym_lctrl] = ACTIONS(34),
    [anon_sym_lalt] = ACTIONS(34),
    [anon_sym_lshift] = ACTIONS(34),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_hotkey] = STATE(2),
    [sym_mode] = STATE(47),
    [sym_action] = STATE(14),
    [sym_keysym] = STATE(26),
    [sym_mod] = STATE(44),
    [sym_key] = STATE(28),
    [sym_mode_decl] = STATE(2),
    [sym_modifier_keyword] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [sym_literal] = ACTIONS(7),
    [sym_keycode] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [sym_name] = ACTIONS(13),
    [anon_sym_cmd] = ACTIONS(15),
    [anon_sym_alt] = ACTIONS(15),
    [anon_sym_shift] = ACTIONS(15),
    [anon_sym_ctrl] = ACTIONS(15),
    [anon_sym_lctrl] = ACTIONS(15),
    [anon_sym_lalt] = ACTIONS(15),
    [anon_sym_lshift] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_RBRACK,
      sym_keycode,
      anon_sym_STAR,
      sym_string,
      anon_sym_COLON_COLON,
    ACTIONS(43), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [21] = 2,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_RBRACK,
      sym_keycode,
      anon_sym_STAR,
      sym_string,
      anon_sym_COLON_COLON,
    ACTIONS(47), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [42] = 2,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LT,
      anon_sym_COMMA,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(51), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [62] = 4,
    ACTIONS(55), 1,
      anon_sym_COLON,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(57), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [86] = 2,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LT,
      anon_sym_COMMA,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(63), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [106] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(69), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [127] = 8,
    ACTIONS(7), 1,
      sym_literal,
    ACTIONS(9), 1,
      sym_keycode,
    STATE(19), 1,
      sym_action,
    STATE(26), 1,
      sym_keysym,
    STATE(28), 1,
      sym_key,
    STATE(43), 1,
      sym_modifier_keyword,
    STATE(44), 1,
      sym_mod,
    ACTIONS(15), 7,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [158] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(73), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [179] = 3,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(79), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [200] = 2,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(83), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [218] = 2,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(87), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [236] = 2,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(69), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [254] = 2,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(91), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [272] = 2,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(95), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [290] = 2,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(73), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [308] = 2,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_keycode,
      anon_sym_COLON_COLON,
    ACTIONS(99), 9,
      sym_literal,
      sym_name,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [326] = 3,
    STATE(43), 1,
      sym_modifier_keyword,
    STATE(48), 1,
      sym_mod,
    ACTIONS(101), 7,
      anon_sym_cmd,
      anon_sym_alt,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_lalt,
      anon_sym_lshift,
  [342] = 3,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 2,
      anon_sym_STAR,
      sym_string,
    STATE(23), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
  [354] = 3,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 2,
      anon_sym_STAR,
      sym_string,
    STATE(21), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
  [366] = 3,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(111), 2,
      anon_sym_STAR,
      sym_string,
    STATE(23), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
  [378] = 4,
    ACTIONS(114), 1,
      aux_sym_command_token1,
    ACTIONS(116), 1,
      aux_sym_command_token2,
    STATE(13), 1,
      sym_command,
    STATE(37), 1,
      aux_sym_command_repeat1,
  [391] = 1,
    ACTIONS(118), 4,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
  [398] = 4,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
    ACTIONS(124), 1,
      anon_sym_COLON,
    ACTIONS(126), 1,
      anon_sym_SEMI,
  [411] = 4,
    ACTIONS(114), 1,
      aux_sym_command_token1,
    ACTIONS(116), 1,
      aux_sym_command_token2,
    STATE(16), 1,
      sym_command,
    STATE(37), 1,
      aux_sym_command_repeat1,
  [424] = 1,
    ACTIONS(128), 4,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
  [431] = 4,
    ACTIONS(114), 1,
      aux_sym_command_token1,
    ACTIONS(116), 1,
      aux_sym_command_token2,
    STATE(37), 1,
      aux_sym_command_repeat1,
    STATE(38), 1,
      sym_command,
  [444] = 1,
    ACTIONS(130), 4,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
  [451] = 3,
    STATE(22), 1,
      sym_proc_map,
    STATE(53), 1,
      sym_proc_map_lst,
    ACTIONS(105), 2,
      anon_sym_STAR,
      sym_string,
  [462] = 4,
    ACTIONS(114), 1,
      aux_sym_command_token1,
    ACTIONS(116), 1,
      aux_sym_command_token2,
    STATE(15), 1,
      sym_command,
    STATE(37), 1,
      aux_sym_command_repeat1,
  [475] = 3,
    STATE(22), 1,
      sym_proc_map,
    STATE(51), 1,
      sym_proc_map_lst,
    ACTIONS(105), 2,
      anon_sym_STAR,
      sym_string,
  [486] = 4,
    ACTIONS(114), 1,
      aux_sym_command_token1,
    ACTIONS(116), 1,
      aux_sym_command_token2,
    STATE(18), 1,
      sym_command,
    STATE(37), 1,
      aux_sym_command_repeat1,
  [499] = 1,
    ACTIONS(132), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym_string,
  [505] = 3,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(138), 1,
      anon_sym_SEMI,
  [515] = 3,
    ACTIONS(114), 1,
      aux_sym_command_token1,
    ACTIONS(140), 1,
      aux_sym_command_token2,
    STATE(39), 1,
      aux_sym_command_repeat1,
  [525] = 1,
    ACTIONS(142), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym_string,
  [531] = 3,
    ACTIONS(144), 1,
      aux_sym_command_token1,
    ACTIONS(147), 1,
      aux_sym_command_token2,
    STATE(39), 1,
      aux_sym_command_repeat1,
  [541] = 3,
    ACTIONS(7), 1,
      sym_literal,
    ACTIONS(9), 1,
      sym_keycode,
    STATE(25), 1,
      sym_key,
  [551] = 2,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(151), 1,
      anon_sym_TILDE,
  [558] = 2,
    ACTIONS(153), 1,
      sym_name,
    STATE(8), 1,
      sym_mode,
  [565] = 1,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [570] = 2,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_PLUS,
  [577] = 2,
    ACTIONS(153), 1,
      sym_name,
    STATE(9), 1,
      sym_mode,
  [584] = 1,
    ACTIONS(147), 2,
      aux_sym_command_token1,
      aux_sym_command_token2,
  [589] = 2,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_LT,
  [596] = 2,
    ACTIONS(159), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH,
  [603] = 2,
    ACTIONS(153), 1,
      sym_name,
    STATE(11), 1,
      sym_mode,
  [610] = 1,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [615] = 1,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
  [619] = 1,
    ACTIONS(169), 1,
      anon_sym_LF,
  [623] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
  [627] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [631] = 1,
    ACTIONS(175), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 127,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 179,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 236,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 272,
  [SMALL_STATE(18)] = 290,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 342,
  [SMALL_STATE(22)] = 354,
  [SMALL_STATE(23)] = 366,
  [SMALL_STATE(24)] = 378,
  [SMALL_STATE(25)] = 391,
  [SMALL_STATE(26)] = 398,
  [SMALL_STATE(27)] = 411,
  [SMALL_STATE(28)] = 424,
  [SMALL_STATE(29)] = 431,
  [SMALL_STATE(30)] = 444,
  [SMALL_STATE(31)] = 451,
  [SMALL_STATE(32)] = 462,
  [SMALL_STATE(33)] = 475,
  [SMALL_STATE(34)] = 486,
  [SMALL_STATE(35)] = 499,
  [SMALL_STATE(36)] = 505,
  [SMALL_STATE(37)] = 515,
  [SMALL_STATE(38)] = 525,
  [SMALL_STATE(39)] = 531,
  [SMALL_STATE(40)] = 541,
  [SMALL_STATE(41)] = 551,
  [SMALL_STATE(42)] = 558,
  [SMALL_STATE(43)] = 565,
  [SMALL_STATE(44)] = 570,
  [SMALL_STATE(45)] = 577,
  [SMALL_STATE(46)] = 584,
  [SMALL_STATE(47)] = 589,
  [SMALL_STATE(48)] = 596,
  [SMALL_STATE(49)] = 603,
  [SMALL_STATE(50)] = 610,
  [SMALL_STATE(51)] = 615,
  [SMALL_STATE(52)] = 619,
  [SMALL_STATE(53)] = 623,
  [SMALL_STATE(54)] = 627,
  [SMALL_STATE(55)] = 631,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 5, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hotkey, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 5, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hotkey, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map_lst, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map_lst, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_map_lst_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_map_lst_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keysym, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keysym, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map, 3, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_keyword, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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

TS_PUBLIC const TSLanguage *tree_sitter_skhdrc(void) {
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
