#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_DOTload = 2,
  anon_sym_DOTblacklist = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LT = 6,
  anon_sym_COMMA = 7,
  sym_mode = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_COLON = 10,
  anon_sym_SEMI = 11,
  anon_sym_DASH = 12,
  anon_sym_PLUS = 13,
  sym_literal = 14,
  aux_sym_keycode_token1 = 15,
  anon_sym_return = 16,
  anon_sym_tab = 17,
  anon_sym_space = 18,
  anon_sym_backspace = 19,
  anon_sym_escape = 20,
  anon_sym_delete = 21,
  anon_sym_home = 22,
  anon_sym_end = 23,
  anon_sym_pageup = 24,
  anon_sym_pagedown = 25,
  anon_sym_insert = 26,
  anon_sym_left = 27,
  anon_sym_right = 28,
  anon_sym_up = 29,
  anon_sym_down = 30,
  anon_sym_f1 = 31,
  anon_sym_f2 = 32,
  anon_sym_f3 = 33,
  anon_sym_f4 = 34,
  anon_sym_f5 = 35,
  anon_sym_f6 = 36,
  anon_sym_f7 = 37,
  anon_sym_f8 = 38,
  anon_sym_f9 = 39,
  anon_sym_f10 = 40,
  anon_sym_f11 = 41,
  anon_sym_f12 = 42,
  anon_sym_f13 = 43,
  anon_sym_f14 = 44,
  anon_sym_f15 = 45,
  anon_sym_f16 = 46,
  anon_sym_f17 = 47,
  anon_sym_f18 = 48,
  anon_sym_f19 = 49,
  anon_sym_f20 = 50,
  anon_sym_sound_up = 51,
  anon_sym_sound_down = 52,
  anon_sym_mute = 53,
  anon_sym_play = 54,
  anon_sym_previous = 55,
  anon_sym_next = 56,
  anon_sym_rewind = 57,
  anon_sym_fast = 58,
  anon_sym_brightness_up = 59,
  anon_sym_brightness_down = 60,
  anon_sym_illumination_up = 61,
  anon_sym_illumination_down = 62,
  anon_sym_TILDE = 63,
  anon_sym_STAR = 64,
  sym_string = 65,
  aux_sym_command_token1 = 66,
  anon_sym_LF = 67,
  aux_sym_command_token2 = 68,
  anon_sym_COLON_COLON = 69,
  anon_sym_AT = 70,
  anon_sym_fn = 71,
  anon_sym_cmd = 72,
  anon_sym_lcmd = 73,
  anon_sym_rcmd = 74,
  anon_sym_shift = 75,
  anon_sym_lshift = 76,
  anon_sym_rshift = 77,
  anon_sym_alt = 78,
  anon_sym_lalt = 79,
  anon_sym_ralt = 80,
  anon_sym_ctrl = 81,
  anon_sym_lctrl = 82,
  anon_sym_rctrl = 83,
  anon_sym_hyper = 84,
  anon_sym_meh = 85,
  sym_source_file = 86,
  sym__statement = 87,
  sym__macro = 88,
  sym_load = 89,
  sym_blacklist = 90,
  sym_hotkey = 91,
  sym_modes = 92,
  sym_action = 93,
  sym_keysym = 94,
  sym_mod = 95,
  sym_key = 96,
  sym_keycode = 97,
  sym_proc_map_lst = 98,
  sym_proc_map = 99,
  sym_command = 100,
  sym_mode_decl = 101,
  sym_modifier_keyword = 102,
  aux_sym_source_file_repeat1 = 103,
  aux_sym_blacklist_repeat1 = 104,
  aux_sym_modes_repeat1 = 105,
  aux_sym_proc_map_lst_repeat1 = 106,
  aux_sym_command_repeat1 = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DOTload] = ".load",
  [anon_sym_DOTblacklist] = ".blacklist",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [sym_mode] = "mode",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [sym_literal] = "literal",
  [aux_sym_keycode_token1] = "keycode_token1",
  [anon_sym_return] = "return",
  [anon_sym_tab] = "tab",
  [anon_sym_space] = "space",
  [anon_sym_backspace] = "backspace",
  [anon_sym_escape] = "escape",
  [anon_sym_delete] = "delete",
  [anon_sym_home] = "home",
  [anon_sym_end] = "end",
  [anon_sym_pageup] = "pageup",
  [anon_sym_pagedown] = "pagedown",
  [anon_sym_insert] = "insert",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [anon_sym_f1] = "f1",
  [anon_sym_f2] = "f2",
  [anon_sym_f3] = "f3",
  [anon_sym_f4] = "f4",
  [anon_sym_f5] = "f5",
  [anon_sym_f6] = "f6",
  [anon_sym_f7] = "f7",
  [anon_sym_f8] = "f8",
  [anon_sym_f9] = "f9",
  [anon_sym_f10] = "f10",
  [anon_sym_f11] = "f11",
  [anon_sym_f12] = "f12",
  [anon_sym_f13] = "f13",
  [anon_sym_f14] = "f14",
  [anon_sym_f15] = "f15",
  [anon_sym_f16] = "f16",
  [anon_sym_f17] = "f17",
  [anon_sym_f18] = "f18",
  [anon_sym_f19] = "f19",
  [anon_sym_f20] = "f20",
  [anon_sym_sound_up] = "sound_up",
  [anon_sym_sound_down] = "sound_down",
  [anon_sym_mute] = "mute",
  [anon_sym_play] = "play",
  [anon_sym_previous] = "previous",
  [anon_sym_next] = "next",
  [anon_sym_rewind] = "rewind",
  [anon_sym_fast] = "fast",
  [anon_sym_brightness_up] = "brightness_up",
  [anon_sym_brightness_down] = "brightness_down",
  [anon_sym_illumination_up] = "illumination_up",
  [anon_sym_illumination_down] = "illumination_down",
  [anon_sym_TILDE] = "~",
  [anon_sym_STAR] = "*",
  [sym_string] = "string",
  [aux_sym_command_token1] = "command_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_command_token2] = "command_token2",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_AT] = "@",
  [anon_sym_fn] = "fn",
  [anon_sym_cmd] = "cmd",
  [anon_sym_lcmd] = "lcmd",
  [anon_sym_rcmd] = "rcmd",
  [anon_sym_shift] = "shift",
  [anon_sym_lshift] = "lshift",
  [anon_sym_rshift] = "rshift",
  [anon_sym_alt] = "alt",
  [anon_sym_lalt] = "lalt",
  [anon_sym_ralt] = "ralt",
  [anon_sym_ctrl] = "ctrl",
  [anon_sym_lctrl] = "lctrl",
  [anon_sym_rctrl] = "rctrl",
  [anon_sym_hyper] = "hyper",
  [anon_sym_meh] = "meh",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__macro] = "_macro",
  [sym_load] = "load",
  [sym_blacklist] = "blacklist",
  [sym_hotkey] = "hotkey",
  [sym_modes] = "modes",
  [sym_action] = "action",
  [sym_keysym] = "keysym",
  [sym_mod] = "mod",
  [sym_key] = "key",
  [sym_keycode] = "keycode",
  [sym_proc_map_lst] = "proc_map_lst",
  [sym_proc_map] = "proc_map",
  [sym_command] = "command",
  [sym_mode_decl] = "mode_decl",
  [sym_modifier_keyword] = "modifier_keyword",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_blacklist_repeat1] = "blacklist_repeat1",
  [aux_sym_modes_repeat1] = "modes_repeat1",
  [aux_sym_proc_map_lst_repeat1] = "proc_map_lst_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_DOTload] = anon_sym_DOTload,
  [anon_sym_DOTblacklist] = anon_sym_DOTblacklist,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_mode] = sym_mode,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_literal] = sym_literal,
  [aux_sym_keycode_token1] = aux_sym_keycode_token1,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_tab] = anon_sym_tab,
  [anon_sym_space] = anon_sym_space,
  [anon_sym_backspace] = anon_sym_backspace,
  [anon_sym_escape] = anon_sym_escape,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_home] = anon_sym_home,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_pageup] = anon_sym_pageup,
  [anon_sym_pagedown] = anon_sym_pagedown,
  [anon_sym_insert] = anon_sym_insert,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_f1] = anon_sym_f1,
  [anon_sym_f2] = anon_sym_f2,
  [anon_sym_f3] = anon_sym_f3,
  [anon_sym_f4] = anon_sym_f4,
  [anon_sym_f5] = anon_sym_f5,
  [anon_sym_f6] = anon_sym_f6,
  [anon_sym_f7] = anon_sym_f7,
  [anon_sym_f8] = anon_sym_f8,
  [anon_sym_f9] = anon_sym_f9,
  [anon_sym_f10] = anon_sym_f10,
  [anon_sym_f11] = anon_sym_f11,
  [anon_sym_f12] = anon_sym_f12,
  [anon_sym_f13] = anon_sym_f13,
  [anon_sym_f14] = anon_sym_f14,
  [anon_sym_f15] = anon_sym_f15,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_f17] = anon_sym_f17,
  [anon_sym_f18] = anon_sym_f18,
  [anon_sym_f19] = anon_sym_f19,
  [anon_sym_f20] = anon_sym_f20,
  [anon_sym_sound_up] = anon_sym_sound_up,
  [anon_sym_sound_down] = anon_sym_sound_down,
  [anon_sym_mute] = anon_sym_mute,
  [anon_sym_play] = anon_sym_play,
  [anon_sym_previous] = anon_sym_previous,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_rewind] = anon_sym_rewind,
  [anon_sym_fast] = anon_sym_fast,
  [anon_sym_brightness_up] = anon_sym_brightness_up,
  [anon_sym_brightness_down] = anon_sym_brightness_down,
  [anon_sym_illumination_up] = anon_sym_illumination_up,
  [anon_sym_illumination_down] = anon_sym_illumination_down,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_string] = sym_string,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_command_token2] = aux_sym_command_token2,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_lcmd] = anon_sym_lcmd,
  [anon_sym_rcmd] = anon_sym_rcmd,
  [anon_sym_shift] = anon_sym_shift,
  [anon_sym_lshift] = anon_sym_lshift,
  [anon_sym_rshift] = anon_sym_rshift,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_lalt] = anon_sym_lalt,
  [anon_sym_ralt] = anon_sym_ralt,
  [anon_sym_ctrl] = anon_sym_ctrl,
  [anon_sym_lctrl] = anon_sym_lctrl,
  [anon_sym_rctrl] = anon_sym_rctrl,
  [anon_sym_hyper] = anon_sym_hyper,
  [anon_sym_meh] = anon_sym_meh,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__macro] = sym__macro,
  [sym_load] = sym_load,
  [sym_blacklist] = sym_blacklist,
  [sym_hotkey] = sym_hotkey,
  [sym_modes] = sym_modes,
  [sym_action] = sym_action,
  [sym_keysym] = sym_keysym,
  [sym_mod] = sym_mod,
  [sym_key] = sym_key,
  [sym_keycode] = sym_keycode,
  [sym_proc_map_lst] = sym_proc_map_lst,
  [sym_proc_map] = sym_proc_map,
  [sym_command] = sym_command,
  [sym_mode_decl] = sym_mode_decl,
  [sym_modifier_keyword] = sym_modifier_keyword,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_blacklist_repeat1] = aux_sym_blacklist_repeat1,
  [aux_sym_modes_repeat1] = aux_sym_modes_repeat1,
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
  [anon_sym_DOTload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTblacklist] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
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
  [aux_sym_keycode_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_space] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pageup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pagedown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sound_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sound_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_play] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_previous] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightness_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightness_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_illumination_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_illumination_down] = {
    .visible = true,
    .named = false,
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
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lcmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rcmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lalt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ralt] = {
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
  [anon_sym_rctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hyper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meh] = {
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
  [sym__macro] = {
    .visible = false,
    .named = true,
  },
  [sym_load] = {
    .visible = true,
    .named = true,
  },
  [sym_blacklist] = {
    .visible = true,
    .named = true,
  },
  [sym_hotkey] = {
    .visible = true,
    .named = true,
  },
  [sym_modes] = {
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
  [sym_keycode] = {
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
  [aux_sym_blacklist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modes_repeat1] = {
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

enum ts_field_identifiers {
  field_item = 1,
  field_path = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_item] = "item",
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_item, 0},
  [2] =
    {field_item, 2, .inherited = true},
  [3] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
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
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(152);
      ADVANCE_MAP(
        '"', 3,
        '#', 153,
        '*', 432,
        '+', 317,
        ',', 159,
        '-', 316,
        '.', 17,
        '0', 307,
        ':', 313,
        ';', 314,
        '<', 158,
        '@', 439,
        '[', 156,
        ']', 157,
        '_', 310,
        'a', 226,
        'b', 164,
        'c', 235,
        'd', 198,
        'e', 246,
        'f', 160,
        'h', 252,
        'i', 231,
        'l', 170,
        'm', 200,
        'n', 189,
        'p', 165,
        'r', 173,
        's', 212,
        't', 166,
        'u', 259,
        '~', 431,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\\') ADVANCE(434);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(436);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(433);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '<') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '-', 6,
        '0', 335,
        ':', 312,
        ';', 314,
        '[', 156,
        'a', 329,
        'b', 323,
        'c', 331,
        'd', 327,
        'e', 332,
        'f', 319,
        'h', 333,
        'i', 330,
        'l', 322,
        'm', 326,
        'n', 325,
        'p', 320,
        'r', 324,
        's', 328,
        't', 321,
        'u', 334,
        '~', 431,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(311);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(339);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(132);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(468);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(462);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(407);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(423);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(427);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 142:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 143:
      if (lookahead == 'w') ADVANCE(83);
      END_STATE();
    case 144:
      if (lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 145:
      if (lookahead == 'w') ADVANCE(86);
      END_STATE();
    case 146:
      if (lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 147:
      if (lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 148:
      if (lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 149:
      if (lookahead == 'y') ADVANCE(413);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOTload);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTblacklist);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_mode);
      ADVANCE_MAP(
        '1', 367,
        '2', 369,
        '3', 372,
        '4', 374,
        '5', 376,
        '6', 378,
        '7', 380,
        '8', 382,
        '9', 384,
        'a', 275,
        'n', 441,
      );
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == '_') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == '_') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == '_') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'b') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'c') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'c') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'c') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'c') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'u') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'f') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'f') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'f') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'f') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'g') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'g') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'h') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'h') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'h') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'h') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'h') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'h') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'i') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'i') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'i') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'k') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'l') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'l') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'l') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'l') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'l') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'l') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'l') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'm') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'm') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'y') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'o') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'o') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'o') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'p') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'p') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'p') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'p') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'p') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'p') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'p') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'r') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'r') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'r') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 's') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 's') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 's') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 's') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == 'w') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'u') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'u') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'u') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'u') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'v') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'w') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'w') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'w') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'w') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'x') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'y') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_mode);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_mode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_mode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_mode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(438);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(311);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_literal);
      ADVANCE_MAP(
        '1', 368,
        '2', 370,
        '3', 371,
        '4', 373,
        '5', 375,
        '6', 377,
        '7', 379,
        '8', 381,
        '9', 383,
        'a', 117,
        'n', 440,
      );
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'p') ADVANCE(363);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(151);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_tab);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_space);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_backspace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_escape);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_home);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_home);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_pageup);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_pageup);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_pagedown);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_pagedown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_insert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_f1);
      ADVANCE_MAP(
        '0', 386,
        '1', 388,
        '2', 390,
        '3', 392,
        '4', 394,
        '5', 396,
        '6', 398,
        '7', 400,
        '8', 402,
        '9', 404,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_f1);
      ADVANCE_MAP(
        '0', 385,
        '1', 387,
        '2', 389,
        '3', 391,
        '4', 393,
        '5', 395,
        '6', 397,
        '7', 399,
        '8', 401,
        '9', 403,
      );
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_f2);
      if (lookahead == '0') ADVANCE(406);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_f2);
      if (lookahead == '0') ADVANCE(405);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_f3);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_f3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_f4);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_f4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_f5);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_f5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_f6);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_f6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_f7);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_f7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_f8);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_f8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_f9);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_f9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_f10);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_f10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_f11);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_f11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_f12);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_f12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_f13);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_f13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_f14);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_f14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_f15);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_f15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_f17);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_f17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_f18);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_f18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_f19);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_f19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_f20);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_f20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_sound_up);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_sound_up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_sound_down);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_sound_down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_mute);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_mute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_play);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_previous);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_previous);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_rewind);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_rewind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_fast);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_fast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_brightness_up);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_brightness_up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_brightness_down);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_brightness_down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_illumination_up);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_illumination_up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_illumination_down);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_illumination_down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\\') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\\') ADVANCE(434);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\\') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_lcmd);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_lcmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_rcmd);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_rcmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_lshift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_rshift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_lalt);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_lalt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_ralt);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_ralt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_lctrl);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_lctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_rctrl);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_rctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_hyper);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_hyper);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_meh);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_meh);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
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
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DOTload] = ACTIONS(1),
    [anon_sym_DOTblacklist] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_mode] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [aux_sym_keycode_token1] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_tab] = ACTIONS(1),
    [anon_sym_space] = ACTIONS(1),
    [anon_sym_backspace] = ACTIONS(1),
    [anon_sym_escape] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_home] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_pageup] = ACTIONS(1),
    [anon_sym_pagedown] = ACTIONS(1),
    [anon_sym_insert] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_f1] = ACTIONS(1),
    [anon_sym_f2] = ACTIONS(1),
    [anon_sym_f3] = ACTIONS(1),
    [anon_sym_f4] = ACTIONS(1),
    [anon_sym_f5] = ACTIONS(1),
    [anon_sym_f6] = ACTIONS(1),
    [anon_sym_f7] = ACTIONS(1),
    [anon_sym_f8] = ACTIONS(1),
    [anon_sym_f9] = ACTIONS(1),
    [anon_sym_f10] = ACTIONS(1),
    [anon_sym_f11] = ACTIONS(1),
    [anon_sym_f12] = ACTIONS(1),
    [anon_sym_f13] = ACTIONS(1),
    [anon_sym_f14] = ACTIONS(1),
    [anon_sym_f15] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_f17] = ACTIONS(1),
    [anon_sym_f18] = ACTIONS(1),
    [anon_sym_f19] = ACTIONS(1),
    [anon_sym_f20] = ACTIONS(1),
    [anon_sym_sound_up] = ACTIONS(1),
    [anon_sym_sound_down] = ACTIONS(1),
    [anon_sym_mute] = ACTIONS(1),
    [anon_sym_play] = ACTIONS(1),
    [anon_sym_previous] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_rewind] = ACTIONS(1),
    [anon_sym_fast] = ACTIONS(1),
    [anon_sym_brightness_up] = ACTIONS(1),
    [anon_sym_brightness_down] = ACTIONS(1),
    [anon_sym_illumination_up] = ACTIONS(1),
    [anon_sym_illumination_down] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_lcmd] = ACTIONS(1),
    [anon_sym_rcmd] = ACTIONS(1),
    [anon_sym_shift] = ACTIONS(1),
    [anon_sym_lshift] = ACTIONS(1),
    [anon_sym_rshift] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(1),
    [anon_sym_lalt] = ACTIONS(1),
    [anon_sym_ralt] = ACTIONS(1),
    [anon_sym_ctrl] = ACTIONS(1),
    [anon_sym_lctrl] = ACTIONS(1),
    [anon_sym_rctrl] = ACTIONS(1),
    [anon_sym_hyper] = ACTIONS(1),
    [anon_sym_meh] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym__statement] = STATE(2),
    [sym__macro] = STATE(2),
    [sym_load] = STATE(2),
    [sym_blacklist] = STATE(2),
    [sym_hotkey] = STATE(2),
    [sym_modes] = STATE(58),
    [sym_action] = STATE(13),
    [sym_keysym] = STATE(32),
    [sym_mod] = STATE(51),
    [sym_key] = STATE(24),
    [sym_keycode] = STATE(28),
    [sym_mode_decl] = STATE(2),
    [sym_modifier_keyword] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modes_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DOTload] = ACTIONS(7),
    [anon_sym_DOTblacklist] = ACTIONS(9),
    [sym_mode] = ACTIONS(11),
    [sym_literal] = ACTIONS(13),
    [aux_sym_keycode_token1] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_tab] = ACTIONS(15),
    [anon_sym_space] = ACTIONS(15),
    [anon_sym_backspace] = ACTIONS(15),
    [anon_sym_escape] = ACTIONS(15),
    [anon_sym_delete] = ACTIONS(15),
    [anon_sym_home] = ACTIONS(15),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_pageup] = ACTIONS(15),
    [anon_sym_pagedown] = ACTIONS(15),
    [anon_sym_insert] = ACTIONS(15),
    [anon_sym_left] = ACTIONS(15),
    [anon_sym_right] = ACTIONS(15),
    [anon_sym_up] = ACTIONS(15),
    [anon_sym_down] = ACTIONS(15),
    [anon_sym_f1] = ACTIONS(15),
    [anon_sym_f2] = ACTIONS(15),
    [anon_sym_f3] = ACTIONS(15),
    [anon_sym_f4] = ACTIONS(15),
    [anon_sym_f5] = ACTIONS(15),
    [anon_sym_f6] = ACTIONS(15),
    [anon_sym_f7] = ACTIONS(15),
    [anon_sym_f8] = ACTIONS(15),
    [anon_sym_f9] = ACTIONS(15),
    [anon_sym_f10] = ACTIONS(15),
    [anon_sym_f11] = ACTIONS(15),
    [anon_sym_f12] = ACTIONS(15),
    [anon_sym_f13] = ACTIONS(15),
    [anon_sym_f14] = ACTIONS(15),
    [anon_sym_f15] = ACTIONS(15),
    [anon_sym_f16] = ACTIONS(15),
    [anon_sym_f17] = ACTIONS(15),
    [anon_sym_f18] = ACTIONS(15),
    [anon_sym_f19] = ACTIONS(15),
    [anon_sym_f20] = ACTIONS(15),
    [anon_sym_sound_up] = ACTIONS(15),
    [anon_sym_sound_down] = ACTIONS(15),
    [anon_sym_mute] = ACTIONS(15),
    [anon_sym_play] = ACTIONS(15),
    [anon_sym_previous] = ACTIONS(15),
    [anon_sym_next] = ACTIONS(15),
    [anon_sym_rewind] = ACTIONS(15),
    [anon_sym_fast] = ACTIONS(15),
    [anon_sym_brightness_up] = ACTIONS(15),
    [anon_sym_brightness_down] = ACTIONS(15),
    [anon_sym_illumination_up] = ACTIONS(15),
    [anon_sym_illumination_down] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_fn] = ACTIONS(19),
    [anon_sym_cmd] = ACTIONS(19),
    [anon_sym_lcmd] = ACTIONS(19),
    [anon_sym_rcmd] = ACTIONS(19),
    [anon_sym_shift] = ACTIONS(19),
    [anon_sym_lshift] = ACTIONS(19),
    [anon_sym_rshift] = ACTIONS(19),
    [anon_sym_alt] = ACTIONS(19),
    [anon_sym_lalt] = ACTIONS(19),
    [anon_sym_ralt] = ACTIONS(19),
    [anon_sym_ctrl] = ACTIONS(19),
    [anon_sym_lctrl] = ACTIONS(19),
    [anon_sym_rctrl] = ACTIONS(19),
    [anon_sym_hyper] = ACTIONS(19),
    [anon_sym_meh] = ACTIONS(19),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym__macro] = STATE(3),
    [sym_load] = STATE(3),
    [sym_blacklist] = STATE(3),
    [sym_hotkey] = STATE(3),
    [sym_modes] = STATE(58),
    [sym_action] = STATE(13),
    [sym_keysym] = STATE(32),
    [sym_mod] = STATE(51),
    [sym_key] = STATE(24),
    [sym_keycode] = STATE(28),
    [sym_mode_decl] = STATE(3),
    [sym_modifier_keyword] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_modes_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [anon_sym_DOTload] = ACTIONS(7),
    [anon_sym_DOTblacklist] = ACTIONS(9),
    [sym_mode] = ACTIONS(11),
    [sym_literal] = ACTIONS(13),
    [aux_sym_keycode_token1] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_tab] = ACTIONS(15),
    [anon_sym_space] = ACTIONS(15),
    [anon_sym_backspace] = ACTIONS(15),
    [anon_sym_escape] = ACTIONS(15),
    [anon_sym_delete] = ACTIONS(15),
    [anon_sym_home] = ACTIONS(15),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_pageup] = ACTIONS(15),
    [anon_sym_pagedown] = ACTIONS(15),
    [anon_sym_insert] = ACTIONS(15),
    [anon_sym_left] = ACTIONS(15),
    [anon_sym_right] = ACTIONS(15),
    [anon_sym_up] = ACTIONS(15),
    [anon_sym_down] = ACTIONS(15),
    [anon_sym_f1] = ACTIONS(15),
    [anon_sym_f2] = ACTIONS(15),
    [anon_sym_f3] = ACTIONS(15),
    [anon_sym_f4] = ACTIONS(15),
    [anon_sym_f5] = ACTIONS(15),
    [anon_sym_f6] = ACTIONS(15),
    [anon_sym_f7] = ACTIONS(15),
    [anon_sym_f8] = ACTIONS(15),
    [anon_sym_f9] = ACTIONS(15),
    [anon_sym_f10] = ACTIONS(15),
    [anon_sym_f11] = ACTIONS(15),
    [anon_sym_f12] = ACTIONS(15),
    [anon_sym_f13] = ACTIONS(15),
    [anon_sym_f14] = ACTIONS(15),
    [anon_sym_f15] = ACTIONS(15),
    [anon_sym_f16] = ACTIONS(15),
    [anon_sym_f17] = ACTIONS(15),
    [anon_sym_f18] = ACTIONS(15),
    [anon_sym_f19] = ACTIONS(15),
    [anon_sym_f20] = ACTIONS(15),
    [anon_sym_sound_up] = ACTIONS(15),
    [anon_sym_sound_down] = ACTIONS(15),
    [anon_sym_mute] = ACTIONS(15),
    [anon_sym_play] = ACTIONS(15),
    [anon_sym_previous] = ACTIONS(15),
    [anon_sym_next] = ACTIONS(15),
    [anon_sym_rewind] = ACTIONS(15),
    [anon_sym_fast] = ACTIONS(15),
    [anon_sym_brightness_up] = ACTIONS(15),
    [anon_sym_brightness_down] = ACTIONS(15),
    [anon_sym_illumination_up] = ACTIONS(15),
    [anon_sym_illumination_down] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_fn] = ACTIONS(19),
    [anon_sym_cmd] = ACTIONS(19),
    [anon_sym_lcmd] = ACTIONS(19),
    [anon_sym_rcmd] = ACTIONS(19),
    [anon_sym_shift] = ACTIONS(19),
    [anon_sym_lshift] = ACTIONS(19),
    [anon_sym_rshift] = ACTIONS(19),
    [anon_sym_alt] = ACTIONS(19),
    [anon_sym_lalt] = ACTIONS(19),
    [anon_sym_ralt] = ACTIONS(19),
    [anon_sym_ctrl] = ACTIONS(19),
    [anon_sym_lctrl] = ACTIONS(19),
    [anon_sym_rctrl] = ACTIONS(19),
    [anon_sym_hyper] = ACTIONS(19),
    [anon_sym_meh] = ACTIONS(19),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__macro] = STATE(3),
    [sym_load] = STATE(3),
    [sym_blacklist] = STATE(3),
    [sym_hotkey] = STATE(3),
    [sym_modes] = STATE(58),
    [sym_action] = STATE(13),
    [sym_keysym] = STATE(32),
    [sym_mod] = STATE(51),
    [sym_key] = STATE(24),
    [sym_keycode] = STATE(28),
    [sym_mode_decl] = STATE(3),
    [sym_modifier_keyword] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_modes_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
    [anon_sym_DOTload] = ACTIONS(30),
    [anon_sym_DOTblacklist] = ACTIONS(33),
    [sym_mode] = ACTIONS(36),
    [sym_literal] = ACTIONS(39),
    [aux_sym_keycode_token1] = ACTIONS(42),
    [anon_sym_return] = ACTIONS(42),
    [anon_sym_tab] = ACTIONS(42),
    [anon_sym_space] = ACTIONS(42),
    [anon_sym_backspace] = ACTIONS(42),
    [anon_sym_escape] = ACTIONS(42),
    [anon_sym_delete] = ACTIONS(42),
    [anon_sym_home] = ACTIONS(42),
    [anon_sym_end] = ACTIONS(42),
    [anon_sym_pageup] = ACTIONS(42),
    [anon_sym_pagedown] = ACTIONS(42),
    [anon_sym_insert] = ACTIONS(42),
    [anon_sym_left] = ACTIONS(42),
    [anon_sym_right] = ACTIONS(42),
    [anon_sym_up] = ACTIONS(42),
    [anon_sym_down] = ACTIONS(42),
    [anon_sym_f1] = ACTIONS(42),
    [anon_sym_f2] = ACTIONS(42),
    [anon_sym_f3] = ACTIONS(42),
    [anon_sym_f4] = ACTIONS(42),
    [anon_sym_f5] = ACTIONS(42),
    [anon_sym_f6] = ACTIONS(42),
    [anon_sym_f7] = ACTIONS(42),
    [anon_sym_f8] = ACTIONS(42),
    [anon_sym_f9] = ACTIONS(42),
    [anon_sym_f10] = ACTIONS(42),
    [anon_sym_f11] = ACTIONS(42),
    [anon_sym_f12] = ACTIONS(42),
    [anon_sym_f13] = ACTIONS(42),
    [anon_sym_f14] = ACTIONS(42),
    [anon_sym_f15] = ACTIONS(42),
    [anon_sym_f16] = ACTIONS(42),
    [anon_sym_f17] = ACTIONS(42),
    [anon_sym_f18] = ACTIONS(42),
    [anon_sym_f19] = ACTIONS(42),
    [anon_sym_f20] = ACTIONS(42),
    [anon_sym_sound_up] = ACTIONS(42),
    [anon_sym_sound_down] = ACTIONS(42),
    [anon_sym_mute] = ACTIONS(42),
    [anon_sym_play] = ACTIONS(42),
    [anon_sym_previous] = ACTIONS(42),
    [anon_sym_next] = ACTIONS(42),
    [anon_sym_rewind] = ACTIONS(42),
    [anon_sym_fast] = ACTIONS(42),
    [anon_sym_brightness_up] = ACTIONS(42),
    [anon_sym_brightness_down] = ACTIONS(42),
    [anon_sym_illumination_up] = ACTIONS(42),
    [anon_sym_illumination_down] = ACTIONS(42),
    [anon_sym_COLON_COLON] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(48),
    [anon_sym_cmd] = ACTIONS(48),
    [anon_sym_lcmd] = ACTIONS(48),
    [anon_sym_rcmd] = ACTIONS(48),
    [anon_sym_shift] = ACTIONS(48),
    [anon_sym_lshift] = ACTIONS(48),
    [anon_sym_rshift] = ACTIONS(48),
    [anon_sym_alt] = ACTIONS(48),
    [anon_sym_lalt] = ACTIONS(48),
    [anon_sym_ralt] = ACTIONS(48),
    [anon_sym_ctrl] = ACTIONS(48),
    [anon_sym_lctrl] = ACTIONS(48),
    [anon_sym_rctrl] = ACTIONS(48),
    [anon_sym_hyper] = ACTIONS(48),
    [anon_sym_meh] = ACTIONS(48),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(51),
    [anon_sym_DOTload] = ACTIONS(51),
    [anon_sym_DOTblacklist] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [sym_mode] = ACTIONS(53),
    [sym_literal] = ACTIONS(53),
    [aux_sym_keycode_token1] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(53),
    [anon_sym_tab] = ACTIONS(53),
    [anon_sym_space] = ACTIONS(53),
    [anon_sym_backspace] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(53),
    [anon_sym_delete] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(53),
    [anon_sym_pageup] = ACTIONS(53),
    [anon_sym_pagedown] = ACTIONS(53),
    [anon_sym_insert] = ACTIONS(53),
    [anon_sym_left] = ACTIONS(53),
    [anon_sym_right] = ACTIONS(53),
    [anon_sym_up] = ACTIONS(53),
    [anon_sym_down] = ACTIONS(53),
    [anon_sym_f1] = ACTIONS(53),
    [anon_sym_f2] = ACTIONS(53),
    [anon_sym_f3] = ACTIONS(53),
    [anon_sym_f4] = ACTIONS(53),
    [anon_sym_f5] = ACTIONS(53),
    [anon_sym_f6] = ACTIONS(53),
    [anon_sym_f7] = ACTIONS(53),
    [anon_sym_f8] = ACTIONS(53),
    [anon_sym_f9] = ACTIONS(53),
    [anon_sym_f10] = ACTIONS(53),
    [anon_sym_f11] = ACTIONS(53),
    [anon_sym_f12] = ACTIONS(53),
    [anon_sym_f13] = ACTIONS(53),
    [anon_sym_f14] = ACTIONS(53),
    [anon_sym_f15] = ACTIONS(53),
    [anon_sym_f16] = ACTIONS(53),
    [anon_sym_f17] = ACTIONS(53),
    [anon_sym_f18] = ACTIONS(53),
    [anon_sym_f19] = ACTIONS(53),
    [anon_sym_f20] = ACTIONS(53),
    [anon_sym_sound_up] = ACTIONS(53),
    [anon_sym_sound_down] = ACTIONS(53),
    [anon_sym_mute] = ACTIONS(53),
    [anon_sym_play] = ACTIONS(53),
    [anon_sym_previous] = ACTIONS(53),
    [anon_sym_next] = ACTIONS(53),
    [anon_sym_rewind] = ACTIONS(53),
    [anon_sym_fast] = ACTIONS(53),
    [anon_sym_brightness_up] = ACTIONS(53),
    [anon_sym_brightness_down] = ACTIONS(53),
    [anon_sym_illumination_up] = ACTIONS(53),
    [anon_sym_illumination_down] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [anon_sym_fn] = ACTIONS(53),
    [anon_sym_cmd] = ACTIONS(53),
    [anon_sym_lcmd] = ACTIONS(53),
    [anon_sym_rcmd] = ACTIONS(53),
    [anon_sym_shift] = ACTIONS(53),
    [anon_sym_lshift] = ACTIONS(53),
    [anon_sym_rshift] = ACTIONS(53),
    [anon_sym_alt] = ACTIONS(53),
    [anon_sym_lalt] = ACTIONS(53),
    [anon_sym_ralt] = ACTIONS(53),
    [anon_sym_ctrl] = ACTIONS(53),
    [anon_sym_lctrl] = ACTIONS(53),
    [anon_sym_rctrl] = ACTIONS(53),
    [anon_sym_hyper] = ACTIONS(53),
    [anon_sym_meh] = ACTIONS(53),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(55),
    [anon_sym_DOTload] = ACTIONS(55),
    [anon_sym_DOTblacklist] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [sym_mode] = ACTIONS(57),
    [sym_literal] = ACTIONS(57),
    [aux_sym_keycode_token1] = ACTIONS(57),
    [anon_sym_return] = ACTIONS(57),
    [anon_sym_tab] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(57),
    [anon_sym_backspace] = ACTIONS(57),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_delete] = ACTIONS(57),
    [anon_sym_home] = ACTIONS(57),
    [anon_sym_end] = ACTIONS(57),
    [anon_sym_pageup] = ACTIONS(57),
    [anon_sym_pagedown] = ACTIONS(57),
    [anon_sym_insert] = ACTIONS(57),
    [anon_sym_left] = ACTIONS(57),
    [anon_sym_right] = ACTIONS(57),
    [anon_sym_up] = ACTIONS(57),
    [anon_sym_down] = ACTIONS(57),
    [anon_sym_f1] = ACTIONS(57),
    [anon_sym_f2] = ACTIONS(57),
    [anon_sym_f3] = ACTIONS(57),
    [anon_sym_f4] = ACTIONS(57),
    [anon_sym_f5] = ACTIONS(57),
    [anon_sym_f6] = ACTIONS(57),
    [anon_sym_f7] = ACTIONS(57),
    [anon_sym_f8] = ACTIONS(57),
    [anon_sym_f9] = ACTIONS(57),
    [anon_sym_f10] = ACTIONS(57),
    [anon_sym_f11] = ACTIONS(57),
    [anon_sym_f12] = ACTIONS(57),
    [anon_sym_f13] = ACTIONS(57),
    [anon_sym_f14] = ACTIONS(57),
    [anon_sym_f15] = ACTIONS(57),
    [anon_sym_f16] = ACTIONS(57),
    [anon_sym_f17] = ACTIONS(57),
    [anon_sym_f18] = ACTIONS(57),
    [anon_sym_f19] = ACTIONS(57),
    [anon_sym_f20] = ACTIONS(57),
    [anon_sym_sound_up] = ACTIONS(57),
    [anon_sym_sound_down] = ACTIONS(57),
    [anon_sym_mute] = ACTIONS(57),
    [anon_sym_play] = ACTIONS(57),
    [anon_sym_previous] = ACTIONS(57),
    [anon_sym_next] = ACTIONS(57),
    [anon_sym_rewind] = ACTIONS(57),
    [anon_sym_fast] = ACTIONS(57),
    [anon_sym_brightness_up] = ACTIONS(57),
    [anon_sym_brightness_down] = ACTIONS(57),
    [anon_sym_illumination_up] = ACTIONS(57),
    [anon_sym_illumination_down] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_fn] = ACTIONS(57),
    [anon_sym_cmd] = ACTIONS(57),
    [anon_sym_lcmd] = ACTIONS(57),
    [anon_sym_rcmd] = ACTIONS(57),
    [anon_sym_shift] = ACTIONS(57),
    [anon_sym_lshift] = ACTIONS(57),
    [anon_sym_rshift] = ACTIONS(57),
    [anon_sym_alt] = ACTIONS(57),
    [anon_sym_lalt] = ACTIONS(57),
    [anon_sym_ralt] = ACTIONS(57),
    [anon_sym_ctrl] = ACTIONS(57),
    [anon_sym_lctrl] = ACTIONS(57),
    [anon_sym_rctrl] = ACTIONS(57),
    [anon_sym_hyper] = ACTIONS(57),
    [anon_sym_meh] = ACTIONS(57),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(59),
    [anon_sym_DOTload] = ACTIONS(59),
    [anon_sym_DOTblacklist] = ACTIONS(59),
    [sym_mode] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_literal] = ACTIONS(61),
    [aux_sym_keycode_token1] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(61),
    [anon_sym_tab] = ACTIONS(61),
    [anon_sym_space] = ACTIONS(61),
    [anon_sym_backspace] = ACTIONS(61),
    [anon_sym_escape] = ACTIONS(61),
    [anon_sym_delete] = ACTIONS(61),
    [anon_sym_home] = ACTIONS(61),
    [anon_sym_end] = ACTIONS(61),
    [anon_sym_pageup] = ACTIONS(61),
    [anon_sym_pagedown] = ACTIONS(61),
    [anon_sym_insert] = ACTIONS(61),
    [anon_sym_left] = ACTIONS(61),
    [anon_sym_right] = ACTIONS(61),
    [anon_sym_up] = ACTIONS(61),
    [anon_sym_down] = ACTIONS(61),
    [anon_sym_f1] = ACTIONS(61),
    [anon_sym_f2] = ACTIONS(61),
    [anon_sym_f3] = ACTIONS(61),
    [anon_sym_f4] = ACTIONS(61),
    [anon_sym_f5] = ACTIONS(61),
    [anon_sym_f6] = ACTIONS(61),
    [anon_sym_f7] = ACTIONS(61),
    [anon_sym_f8] = ACTIONS(61),
    [anon_sym_f9] = ACTIONS(61),
    [anon_sym_f10] = ACTIONS(61),
    [anon_sym_f11] = ACTIONS(61),
    [anon_sym_f12] = ACTIONS(61),
    [anon_sym_f13] = ACTIONS(61),
    [anon_sym_f14] = ACTIONS(61),
    [anon_sym_f15] = ACTIONS(61),
    [anon_sym_f16] = ACTIONS(61),
    [anon_sym_f17] = ACTIONS(61),
    [anon_sym_f18] = ACTIONS(61),
    [anon_sym_f19] = ACTIONS(61),
    [anon_sym_f20] = ACTIONS(61),
    [anon_sym_sound_up] = ACTIONS(61),
    [anon_sym_sound_down] = ACTIONS(61),
    [anon_sym_mute] = ACTIONS(61),
    [anon_sym_play] = ACTIONS(61),
    [anon_sym_previous] = ACTIONS(61),
    [anon_sym_next] = ACTIONS(61),
    [anon_sym_rewind] = ACTIONS(61),
    [anon_sym_fast] = ACTIONS(61),
    [anon_sym_brightness_up] = ACTIONS(61),
    [anon_sym_brightness_down] = ACTIONS(61),
    [anon_sym_illumination_up] = ACTIONS(61),
    [anon_sym_illumination_down] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(65),
    [anon_sym_fn] = ACTIONS(61),
    [anon_sym_cmd] = ACTIONS(61),
    [anon_sym_lcmd] = ACTIONS(61),
    [anon_sym_rcmd] = ACTIONS(61),
    [anon_sym_shift] = ACTIONS(61),
    [anon_sym_lshift] = ACTIONS(61),
    [anon_sym_rshift] = ACTIONS(61),
    [anon_sym_alt] = ACTIONS(61),
    [anon_sym_lalt] = ACTIONS(61),
    [anon_sym_ralt] = ACTIONS(61),
    [anon_sym_ctrl] = ACTIONS(61),
    [anon_sym_lctrl] = ACTIONS(61),
    [anon_sym_rctrl] = ACTIONS(61),
    [anon_sym_hyper] = ACTIONS(61),
    [anon_sym_meh] = ACTIONS(61),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(67),
    [anon_sym_DOTload] = ACTIONS(67),
    [anon_sym_DOTblacklist] = ACTIONS(67),
    [sym_mode] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [sym_literal] = ACTIONS(69),
    [aux_sym_keycode_token1] = ACTIONS(69),
    [anon_sym_return] = ACTIONS(69),
    [anon_sym_tab] = ACTIONS(69),
    [anon_sym_space] = ACTIONS(69),
    [anon_sym_backspace] = ACTIONS(69),
    [anon_sym_escape] = ACTIONS(69),
    [anon_sym_delete] = ACTIONS(69),
    [anon_sym_home] = ACTIONS(69),
    [anon_sym_end] = ACTIONS(69),
    [anon_sym_pageup] = ACTIONS(69),
    [anon_sym_pagedown] = ACTIONS(69),
    [anon_sym_insert] = ACTIONS(69),
    [anon_sym_left] = ACTIONS(69),
    [anon_sym_right] = ACTIONS(69),
    [anon_sym_up] = ACTIONS(69),
    [anon_sym_down] = ACTIONS(69),
    [anon_sym_f1] = ACTIONS(69),
    [anon_sym_f2] = ACTIONS(69),
    [anon_sym_f3] = ACTIONS(69),
    [anon_sym_f4] = ACTIONS(69),
    [anon_sym_f5] = ACTIONS(69),
    [anon_sym_f6] = ACTIONS(69),
    [anon_sym_f7] = ACTIONS(69),
    [anon_sym_f8] = ACTIONS(69),
    [anon_sym_f9] = ACTIONS(69),
    [anon_sym_f10] = ACTIONS(69),
    [anon_sym_f11] = ACTIONS(69),
    [anon_sym_f12] = ACTIONS(69),
    [anon_sym_f13] = ACTIONS(69),
    [anon_sym_f14] = ACTIONS(69),
    [anon_sym_f15] = ACTIONS(69),
    [anon_sym_f16] = ACTIONS(69),
    [anon_sym_f17] = ACTIONS(69),
    [anon_sym_f18] = ACTIONS(69),
    [anon_sym_f19] = ACTIONS(69),
    [anon_sym_f20] = ACTIONS(69),
    [anon_sym_sound_up] = ACTIONS(69),
    [anon_sym_sound_down] = ACTIONS(69),
    [anon_sym_mute] = ACTIONS(69),
    [anon_sym_play] = ACTIONS(69),
    [anon_sym_previous] = ACTIONS(69),
    [anon_sym_next] = ACTIONS(69),
    [anon_sym_rewind] = ACTIONS(69),
    [anon_sym_fast] = ACTIONS(69),
    [anon_sym_brightness_up] = ACTIONS(69),
    [anon_sym_brightness_down] = ACTIONS(69),
    [anon_sym_illumination_up] = ACTIONS(69),
    [anon_sym_illumination_down] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [anon_sym_fn] = ACTIONS(69),
    [anon_sym_cmd] = ACTIONS(69),
    [anon_sym_lcmd] = ACTIONS(69),
    [anon_sym_rcmd] = ACTIONS(69),
    [anon_sym_shift] = ACTIONS(69),
    [anon_sym_lshift] = ACTIONS(69),
    [anon_sym_rshift] = ACTIONS(69),
    [anon_sym_alt] = ACTIONS(69),
    [anon_sym_lalt] = ACTIONS(69),
    [anon_sym_ralt] = ACTIONS(69),
    [anon_sym_ctrl] = ACTIONS(69),
    [anon_sym_lctrl] = ACTIONS(69),
    [anon_sym_rctrl] = ACTIONS(69),
    [anon_sym_hyper] = ACTIONS(69),
    [anon_sym_meh] = ACTIONS(69),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_comment] = ACTIONS(73),
    [anon_sym_DOTload] = ACTIONS(73),
    [anon_sym_DOTblacklist] = ACTIONS(73),
    [sym_mode] = ACTIONS(75),
    [sym_literal] = ACTIONS(75),
    [aux_sym_keycode_token1] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_tab] = ACTIONS(75),
    [anon_sym_space] = ACTIONS(75),
    [anon_sym_backspace] = ACTIONS(75),
    [anon_sym_escape] = ACTIONS(75),
    [anon_sym_delete] = ACTIONS(75),
    [anon_sym_home] = ACTIONS(75),
    [anon_sym_end] = ACTIONS(75),
    [anon_sym_pageup] = ACTIONS(75),
    [anon_sym_pagedown] = ACTIONS(75),
    [anon_sym_insert] = ACTIONS(75),
    [anon_sym_left] = ACTIONS(75),
    [anon_sym_right] = ACTIONS(75),
    [anon_sym_up] = ACTIONS(75),
    [anon_sym_down] = ACTIONS(75),
    [anon_sym_f1] = ACTIONS(75),
    [anon_sym_f2] = ACTIONS(75),
    [anon_sym_f3] = ACTIONS(75),
    [anon_sym_f4] = ACTIONS(75),
    [anon_sym_f5] = ACTIONS(75),
    [anon_sym_f6] = ACTIONS(75),
    [anon_sym_f7] = ACTIONS(75),
    [anon_sym_f8] = ACTIONS(75),
    [anon_sym_f9] = ACTIONS(75),
    [anon_sym_f10] = ACTIONS(75),
    [anon_sym_f11] = ACTIONS(75),
    [anon_sym_f12] = ACTIONS(75),
    [anon_sym_f13] = ACTIONS(75),
    [anon_sym_f14] = ACTIONS(75),
    [anon_sym_f15] = ACTIONS(75),
    [anon_sym_f16] = ACTIONS(75),
    [anon_sym_f17] = ACTIONS(75),
    [anon_sym_f18] = ACTIONS(75),
    [anon_sym_f19] = ACTIONS(75),
    [anon_sym_f20] = ACTIONS(75),
    [anon_sym_sound_up] = ACTIONS(75),
    [anon_sym_sound_down] = ACTIONS(75),
    [anon_sym_mute] = ACTIONS(75),
    [anon_sym_play] = ACTIONS(75),
    [anon_sym_previous] = ACTIONS(75),
    [anon_sym_next] = ACTIONS(75),
    [anon_sym_rewind] = ACTIONS(75),
    [anon_sym_fast] = ACTIONS(75),
    [anon_sym_brightness_up] = ACTIONS(75),
    [anon_sym_brightness_down] = ACTIONS(75),
    [anon_sym_illumination_up] = ACTIONS(75),
    [anon_sym_illumination_down] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_cmd] = ACTIONS(75),
    [anon_sym_lcmd] = ACTIONS(75),
    [anon_sym_rcmd] = ACTIONS(75),
    [anon_sym_shift] = ACTIONS(75),
    [anon_sym_lshift] = ACTIONS(75),
    [anon_sym_rshift] = ACTIONS(75),
    [anon_sym_alt] = ACTIONS(75),
    [anon_sym_lalt] = ACTIONS(75),
    [anon_sym_ralt] = ACTIONS(75),
    [anon_sym_ctrl] = ACTIONS(75),
    [anon_sym_lctrl] = ACTIONS(75),
    [anon_sym_rctrl] = ACTIONS(75),
    [anon_sym_hyper] = ACTIONS(75),
    [anon_sym_meh] = ACTIONS(75),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_comment] = ACTIONS(77),
    [anon_sym_DOTload] = ACTIONS(77),
    [anon_sym_DOTblacklist] = ACTIONS(77),
    [sym_mode] = ACTIONS(79),
    [sym_literal] = ACTIONS(79),
    [aux_sym_keycode_token1] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_tab] = ACTIONS(79),
    [anon_sym_space] = ACTIONS(79),
    [anon_sym_backspace] = ACTIONS(79),
    [anon_sym_escape] = ACTIONS(79),
    [anon_sym_delete] = ACTIONS(79),
    [anon_sym_home] = ACTIONS(79),
    [anon_sym_end] = ACTIONS(79),
    [anon_sym_pageup] = ACTIONS(79),
    [anon_sym_pagedown] = ACTIONS(79),
    [anon_sym_insert] = ACTIONS(79),
    [anon_sym_left] = ACTIONS(79),
    [anon_sym_right] = ACTIONS(79),
    [anon_sym_up] = ACTIONS(79),
    [anon_sym_down] = ACTIONS(79),
    [anon_sym_f1] = ACTIONS(79),
    [anon_sym_f2] = ACTIONS(79),
    [anon_sym_f3] = ACTIONS(79),
    [anon_sym_f4] = ACTIONS(79),
    [anon_sym_f5] = ACTIONS(79),
    [anon_sym_f6] = ACTIONS(79),
    [anon_sym_f7] = ACTIONS(79),
    [anon_sym_f8] = ACTIONS(79),
    [anon_sym_f9] = ACTIONS(79),
    [anon_sym_f10] = ACTIONS(79),
    [anon_sym_f11] = ACTIONS(79),
    [anon_sym_f12] = ACTIONS(79),
    [anon_sym_f13] = ACTIONS(79),
    [anon_sym_f14] = ACTIONS(79),
    [anon_sym_f15] = ACTIONS(79),
    [anon_sym_f16] = ACTIONS(79),
    [anon_sym_f17] = ACTIONS(79),
    [anon_sym_f18] = ACTIONS(79),
    [anon_sym_f19] = ACTIONS(79),
    [anon_sym_f20] = ACTIONS(79),
    [anon_sym_sound_up] = ACTIONS(79),
    [anon_sym_sound_down] = ACTIONS(79),
    [anon_sym_mute] = ACTIONS(79),
    [anon_sym_play] = ACTIONS(79),
    [anon_sym_previous] = ACTIONS(79),
    [anon_sym_next] = ACTIONS(79),
    [anon_sym_rewind] = ACTIONS(79),
    [anon_sym_fast] = ACTIONS(79),
    [anon_sym_brightness_up] = ACTIONS(79),
    [anon_sym_brightness_down] = ACTIONS(79),
    [anon_sym_illumination_up] = ACTIONS(79),
    [anon_sym_illumination_down] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(77),
    [anon_sym_fn] = ACTIONS(79),
    [anon_sym_cmd] = ACTIONS(79),
    [anon_sym_lcmd] = ACTIONS(79),
    [anon_sym_rcmd] = ACTIONS(79),
    [anon_sym_shift] = ACTIONS(79),
    [anon_sym_lshift] = ACTIONS(79),
    [anon_sym_rshift] = ACTIONS(79),
    [anon_sym_alt] = ACTIONS(79),
    [anon_sym_lalt] = ACTIONS(79),
    [anon_sym_ralt] = ACTIONS(79),
    [anon_sym_ctrl] = ACTIONS(79),
    [anon_sym_lctrl] = ACTIONS(79),
    [anon_sym_rctrl] = ACTIONS(79),
    [anon_sym_hyper] = ACTIONS(79),
    [anon_sym_meh] = ACTIONS(79),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(81),
    [anon_sym_DOTload] = ACTIONS(81),
    [anon_sym_DOTblacklist] = ACTIONS(81),
    [sym_mode] = ACTIONS(83),
    [sym_literal] = ACTIONS(83),
    [aux_sym_keycode_token1] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(83),
    [anon_sym_tab] = ACTIONS(83),
    [anon_sym_space] = ACTIONS(83),
    [anon_sym_backspace] = ACTIONS(83),
    [anon_sym_escape] = ACTIONS(83),
    [anon_sym_delete] = ACTIONS(83),
    [anon_sym_home] = ACTIONS(83),
    [anon_sym_end] = ACTIONS(83),
    [anon_sym_pageup] = ACTIONS(83),
    [anon_sym_pagedown] = ACTIONS(83),
    [anon_sym_insert] = ACTIONS(83),
    [anon_sym_left] = ACTIONS(83),
    [anon_sym_right] = ACTIONS(83),
    [anon_sym_up] = ACTIONS(83),
    [anon_sym_down] = ACTIONS(83),
    [anon_sym_f1] = ACTIONS(83),
    [anon_sym_f2] = ACTIONS(83),
    [anon_sym_f3] = ACTIONS(83),
    [anon_sym_f4] = ACTIONS(83),
    [anon_sym_f5] = ACTIONS(83),
    [anon_sym_f6] = ACTIONS(83),
    [anon_sym_f7] = ACTIONS(83),
    [anon_sym_f8] = ACTIONS(83),
    [anon_sym_f9] = ACTIONS(83),
    [anon_sym_f10] = ACTIONS(83),
    [anon_sym_f11] = ACTIONS(83),
    [anon_sym_f12] = ACTIONS(83),
    [anon_sym_f13] = ACTIONS(83),
    [anon_sym_f14] = ACTIONS(83),
    [anon_sym_f15] = ACTIONS(83),
    [anon_sym_f16] = ACTIONS(83),
    [anon_sym_f17] = ACTIONS(83),
    [anon_sym_f18] = ACTIONS(83),
    [anon_sym_f19] = ACTIONS(83),
    [anon_sym_f20] = ACTIONS(83),
    [anon_sym_sound_up] = ACTIONS(83),
    [anon_sym_sound_down] = ACTIONS(83),
    [anon_sym_mute] = ACTIONS(83),
    [anon_sym_play] = ACTIONS(83),
    [anon_sym_previous] = ACTIONS(83),
    [anon_sym_next] = ACTIONS(83),
    [anon_sym_rewind] = ACTIONS(83),
    [anon_sym_fast] = ACTIONS(83),
    [anon_sym_brightness_up] = ACTIONS(83),
    [anon_sym_brightness_down] = ACTIONS(83),
    [anon_sym_illumination_up] = ACTIONS(83),
    [anon_sym_illumination_down] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(83),
    [anon_sym_cmd] = ACTIONS(83),
    [anon_sym_lcmd] = ACTIONS(83),
    [anon_sym_rcmd] = ACTIONS(83),
    [anon_sym_shift] = ACTIONS(83),
    [anon_sym_lshift] = ACTIONS(83),
    [anon_sym_rshift] = ACTIONS(83),
    [anon_sym_alt] = ACTIONS(83),
    [anon_sym_lalt] = ACTIONS(83),
    [anon_sym_ralt] = ACTIONS(83),
    [anon_sym_ctrl] = ACTIONS(83),
    [anon_sym_lctrl] = ACTIONS(83),
    [anon_sym_rctrl] = ACTIONS(83),
    [anon_sym_hyper] = ACTIONS(83),
    [anon_sym_meh] = ACTIONS(83),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(85),
    [anon_sym_DOTload] = ACTIONS(85),
    [anon_sym_DOTblacklist] = ACTIONS(85),
    [sym_mode] = ACTIONS(87),
    [sym_literal] = ACTIONS(87),
    [aux_sym_keycode_token1] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_tab] = ACTIONS(87),
    [anon_sym_space] = ACTIONS(87),
    [anon_sym_backspace] = ACTIONS(87),
    [anon_sym_escape] = ACTIONS(87),
    [anon_sym_delete] = ACTIONS(87),
    [anon_sym_home] = ACTIONS(87),
    [anon_sym_end] = ACTIONS(87),
    [anon_sym_pageup] = ACTIONS(87),
    [anon_sym_pagedown] = ACTIONS(87),
    [anon_sym_insert] = ACTIONS(87),
    [anon_sym_left] = ACTIONS(87),
    [anon_sym_right] = ACTIONS(87),
    [anon_sym_up] = ACTIONS(87),
    [anon_sym_down] = ACTIONS(87),
    [anon_sym_f1] = ACTIONS(87),
    [anon_sym_f2] = ACTIONS(87),
    [anon_sym_f3] = ACTIONS(87),
    [anon_sym_f4] = ACTIONS(87),
    [anon_sym_f5] = ACTIONS(87),
    [anon_sym_f6] = ACTIONS(87),
    [anon_sym_f7] = ACTIONS(87),
    [anon_sym_f8] = ACTIONS(87),
    [anon_sym_f9] = ACTIONS(87),
    [anon_sym_f10] = ACTIONS(87),
    [anon_sym_f11] = ACTIONS(87),
    [anon_sym_f12] = ACTIONS(87),
    [anon_sym_f13] = ACTIONS(87),
    [anon_sym_f14] = ACTIONS(87),
    [anon_sym_f15] = ACTIONS(87),
    [anon_sym_f16] = ACTIONS(87),
    [anon_sym_f17] = ACTIONS(87),
    [anon_sym_f18] = ACTIONS(87),
    [anon_sym_f19] = ACTIONS(87),
    [anon_sym_f20] = ACTIONS(87),
    [anon_sym_sound_up] = ACTIONS(87),
    [anon_sym_sound_down] = ACTIONS(87),
    [anon_sym_mute] = ACTIONS(87),
    [anon_sym_play] = ACTIONS(87),
    [anon_sym_previous] = ACTIONS(87),
    [anon_sym_next] = ACTIONS(87),
    [anon_sym_rewind] = ACTIONS(87),
    [anon_sym_fast] = ACTIONS(87),
    [anon_sym_brightness_up] = ACTIONS(87),
    [anon_sym_brightness_down] = ACTIONS(87),
    [anon_sym_illumination_up] = ACTIONS(87),
    [anon_sym_illumination_down] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [anon_sym_fn] = ACTIONS(87),
    [anon_sym_cmd] = ACTIONS(87),
    [anon_sym_lcmd] = ACTIONS(87),
    [anon_sym_rcmd] = ACTIONS(87),
    [anon_sym_shift] = ACTIONS(87),
    [anon_sym_lshift] = ACTIONS(87),
    [anon_sym_rshift] = ACTIONS(87),
    [anon_sym_alt] = ACTIONS(87),
    [anon_sym_lalt] = ACTIONS(87),
    [anon_sym_ralt] = ACTIONS(87),
    [anon_sym_ctrl] = ACTIONS(87),
    [anon_sym_lctrl] = ACTIONS(87),
    [anon_sym_rctrl] = ACTIONS(87),
    [anon_sym_hyper] = ACTIONS(87),
    [anon_sym_meh] = ACTIONS(87),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(89),
    [anon_sym_DOTload] = ACTIONS(89),
    [anon_sym_DOTblacklist] = ACTIONS(89),
    [sym_mode] = ACTIONS(91),
    [sym_literal] = ACTIONS(91),
    [aux_sym_keycode_token1] = ACTIONS(91),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_tab] = ACTIONS(91),
    [anon_sym_space] = ACTIONS(91),
    [anon_sym_backspace] = ACTIONS(91),
    [anon_sym_escape] = ACTIONS(91),
    [anon_sym_delete] = ACTIONS(91),
    [anon_sym_home] = ACTIONS(91),
    [anon_sym_end] = ACTIONS(91),
    [anon_sym_pageup] = ACTIONS(91),
    [anon_sym_pagedown] = ACTIONS(91),
    [anon_sym_insert] = ACTIONS(91),
    [anon_sym_left] = ACTIONS(91),
    [anon_sym_right] = ACTIONS(91),
    [anon_sym_up] = ACTIONS(91),
    [anon_sym_down] = ACTIONS(91),
    [anon_sym_f1] = ACTIONS(91),
    [anon_sym_f2] = ACTIONS(91),
    [anon_sym_f3] = ACTIONS(91),
    [anon_sym_f4] = ACTIONS(91),
    [anon_sym_f5] = ACTIONS(91),
    [anon_sym_f6] = ACTIONS(91),
    [anon_sym_f7] = ACTIONS(91),
    [anon_sym_f8] = ACTIONS(91),
    [anon_sym_f9] = ACTIONS(91),
    [anon_sym_f10] = ACTIONS(91),
    [anon_sym_f11] = ACTIONS(91),
    [anon_sym_f12] = ACTIONS(91),
    [anon_sym_f13] = ACTIONS(91),
    [anon_sym_f14] = ACTIONS(91),
    [anon_sym_f15] = ACTIONS(91),
    [anon_sym_f16] = ACTIONS(91),
    [anon_sym_f17] = ACTIONS(91),
    [anon_sym_f18] = ACTIONS(91),
    [anon_sym_f19] = ACTIONS(91),
    [anon_sym_f20] = ACTIONS(91),
    [anon_sym_sound_up] = ACTIONS(91),
    [anon_sym_sound_down] = ACTIONS(91),
    [anon_sym_mute] = ACTIONS(91),
    [anon_sym_play] = ACTIONS(91),
    [anon_sym_previous] = ACTIONS(91),
    [anon_sym_next] = ACTIONS(91),
    [anon_sym_rewind] = ACTIONS(91),
    [anon_sym_fast] = ACTIONS(91),
    [anon_sym_brightness_up] = ACTIONS(91),
    [anon_sym_brightness_down] = ACTIONS(91),
    [anon_sym_illumination_up] = ACTIONS(91),
    [anon_sym_illumination_down] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_fn] = ACTIONS(91),
    [anon_sym_cmd] = ACTIONS(91),
    [anon_sym_lcmd] = ACTIONS(91),
    [anon_sym_rcmd] = ACTIONS(91),
    [anon_sym_shift] = ACTIONS(91),
    [anon_sym_lshift] = ACTIONS(91),
    [anon_sym_rshift] = ACTIONS(91),
    [anon_sym_alt] = ACTIONS(91),
    [anon_sym_lalt] = ACTIONS(91),
    [anon_sym_ralt] = ACTIONS(91),
    [anon_sym_ctrl] = ACTIONS(91),
    [anon_sym_lctrl] = ACTIONS(91),
    [anon_sym_rctrl] = ACTIONS(91),
    [anon_sym_hyper] = ACTIONS(91),
    [anon_sym_meh] = ACTIONS(91),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(93),
    [anon_sym_DOTload] = ACTIONS(93),
    [anon_sym_DOTblacklist] = ACTIONS(93),
    [sym_mode] = ACTIONS(95),
    [sym_literal] = ACTIONS(95),
    [aux_sym_keycode_token1] = ACTIONS(95),
    [anon_sym_return] = ACTIONS(95),
    [anon_sym_tab] = ACTIONS(95),
    [anon_sym_space] = ACTIONS(95),
    [anon_sym_backspace] = ACTIONS(95),
    [anon_sym_escape] = ACTIONS(95),
    [anon_sym_delete] = ACTIONS(95),
    [anon_sym_home] = ACTIONS(95),
    [anon_sym_end] = ACTIONS(95),
    [anon_sym_pageup] = ACTIONS(95),
    [anon_sym_pagedown] = ACTIONS(95),
    [anon_sym_insert] = ACTIONS(95),
    [anon_sym_left] = ACTIONS(95),
    [anon_sym_right] = ACTIONS(95),
    [anon_sym_up] = ACTIONS(95),
    [anon_sym_down] = ACTIONS(95),
    [anon_sym_f1] = ACTIONS(95),
    [anon_sym_f2] = ACTIONS(95),
    [anon_sym_f3] = ACTIONS(95),
    [anon_sym_f4] = ACTIONS(95),
    [anon_sym_f5] = ACTIONS(95),
    [anon_sym_f6] = ACTIONS(95),
    [anon_sym_f7] = ACTIONS(95),
    [anon_sym_f8] = ACTIONS(95),
    [anon_sym_f9] = ACTIONS(95),
    [anon_sym_f10] = ACTIONS(95),
    [anon_sym_f11] = ACTIONS(95),
    [anon_sym_f12] = ACTIONS(95),
    [anon_sym_f13] = ACTIONS(95),
    [anon_sym_f14] = ACTIONS(95),
    [anon_sym_f15] = ACTIONS(95),
    [anon_sym_f16] = ACTIONS(95),
    [anon_sym_f17] = ACTIONS(95),
    [anon_sym_f18] = ACTIONS(95),
    [anon_sym_f19] = ACTIONS(95),
    [anon_sym_f20] = ACTIONS(95),
    [anon_sym_sound_up] = ACTIONS(95),
    [anon_sym_sound_down] = ACTIONS(95),
    [anon_sym_mute] = ACTIONS(95),
    [anon_sym_play] = ACTIONS(95),
    [anon_sym_previous] = ACTIONS(95),
    [anon_sym_next] = ACTIONS(95),
    [anon_sym_rewind] = ACTIONS(95),
    [anon_sym_fast] = ACTIONS(95),
    [anon_sym_brightness_up] = ACTIONS(95),
    [anon_sym_brightness_down] = ACTIONS(95),
    [anon_sym_illumination_up] = ACTIONS(95),
    [anon_sym_illumination_down] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_fn] = ACTIONS(95),
    [anon_sym_cmd] = ACTIONS(95),
    [anon_sym_lcmd] = ACTIONS(95),
    [anon_sym_rcmd] = ACTIONS(95),
    [anon_sym_shift] = ACTIONS(95),
    [anon_sym_lshift] = ACTIONS(95),
    [anon_sym_rshift] = ACTIONS(95),
    [anon_sym_alt] = ACTIONS(95),
    [anon_sym_lalt] = ACTIONS(95),
    [anon_sym_ralt] = ACTIONS(95),
    [anon_sym_ctrl] = ACTIONS(95),
    [anon_sym_lctrl] = ACTIONS(95),
    [anon_sym_rctrl] = ACTIONS(95),
    [anon_sym_hyper] = ACTIONS(95),
    [anon_sym_meh] = ACTIONS(95),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(97),
    [anon_sym_DOTload] = ACTIONS(97),
    [anon_sym_DOTblacklist] = ACTIONS(97),
    [sym_mode] = ACTIONS(99),
    [sym_literal] = ACTIONS(99),
    [aux_sym_keycode_token1] = ACTIONS(99),
    [anon_sym_return] = ACTIONS(99),
    [anon_sym_tab] = ACTIONS(99),
    [anon_sym_space] = ACTIONS(99),
    [anon_sym_backspace] = ACTIONS(99),
    [anon_sym_escape] = ACTIONS(99),
    [anon_sym_delete] = ACTIONS(99),
    [anon_sym_home] = ACTIONS(99),
    [anon_sym_end] = ACTIONS(99),
    [anon_sym_pageup] = ACTIONS(99),
    [anon_sym_pagedown] = ACTIONS(99),
    [anon_sym_insert] = ACTIONS(99),
    [anon_sym_left] = ACTIONS(99),
    [anon_sym_right] = ACTIONS(99),
    [anon_sym_up] = ACTIONS(99),
    [anon_sym_down] = ACTIONS(99),
    [anon_sym_f1] = ACTIONS(99),
    [anon_sym_f2] = ACTIONS(99),
    [anon_sym_f3] = ACTIONS(99),
    [anon_sym_f4] = ACTIONS(99),
    [anon_sym_f5] = ACTIONS(99),
    [anon_sym_f6] = ACTIONS(99),
    [anon_sym_f7] = ACTIONS(99),
    [anon_sym_f8] = ACTIONS(99),
    [anon_sym_f9] = ACTIONS(99),
    [anon_sym_f10] = ACTIONS(99),
    [anon_sym_f11] = ACTIONS(99),
    [anon_sym_f12] = ACTIONS(99),
    [anon_sym_f13] = ACTIONS(99),
    [anon_sym_f14] = ACTIONS(99),
    [anon_sym_f15] = ACTIONS(99),
    [anon_sym_f16] = ACTIONS(99),
    [anon_sym_f17] = ACTIONS(99),
    [anon_sym_f18] = ACTIONS(99),
    [anon_sym_f19] = ACTIONS(99),
    [anon_sym_f20] = ACTIONS(99),
    [anon_sym_sound_up] = ACTIONS(99),
    [anon_sym_sound_down] = ACTIONS(99),
    [anon_sym_mute] = ACTIONS(99),
    [anon_sym_play] = ACTIONS(99),
    [anon_sym_previous] = ACTIONS(99),
    [anon_sym_next] = ACTIONS(99),
    [anon_sym_rewind] = ACTIONS(99),
    [anon_sym_fast] = ACTIONS(99),
    [anon_sym_brightness_up] = ACTIONS(99),
    [anon_sym_brightness_down] = ACTIONS(99),
    [anon_sym_illumination_up] = ACTIONS(99),
    [anon_sym_illumination_down] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_fn] = ACTIONS(99),
    [anon_sym_cmd] = ACTIONS(99),
    [anon_sym_lcmd] = ACTIONS(99),
    [anon_sym_rcmd] = ACTIONS(99),
    [anon_sym_shift] = ACTIONS(99),
    [anon_sym_lshift] = ACTIONS(99),
    [anon_sym_rshift] = ACTIONS(99),
    [anon_sym_alt] = ACTIONS(99),
    [anon_sym_lalt] = ACTIONS(99),
    [anon_sym_ralt] = ACTIONS(99),
    [anon_sym_ctrl] = ACTIONS(99),
    [anon_sym_lctrl] = ACTIONS(99),
    [anon_sym_rctrl] = ACTIONS(99),
    [anon_sym_hyper] = ACTIONS(99),
    [anon_sym_meh] = ACTIONS(99),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(101),
    [anon_sym_DOTload] = ACTIONS(101),
    [anon_sym_DOTblacklist] = ACTIONS(101),
    [sym_mode] = ACTIONS(103),
    [sym_literal] = ACTIONS(103),
    [aux_sym_keycode_token1] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(103),
    [anon_sym_tab] = ACTIONS(103),
    [anon_sym_space] = ACTIONS(103),
    [anon_sym_backspace] = ACTIONS(103),
    [anon_sym_escape] = ACTIONS(103),
    [anon_sym_delete] = ACTIONS(103),
    [anon_sym_home] = ACTIONS(103),
    [anon_sym_end] = ACTIONS(103),
    [anon_sym_pageup] = ACTIONS(103),
    [anon_sym_pagedown] = ACTIONS(103),
    [anon_sym_insert] = ACTIONS(103),
    [anon_sym_left] = ACTIONS(103),
    [anon_sym_right] = ACTIONS(103),
    [anon_sym_up] = ACTIONS(103),
    [anon_sym_down] = ACTIONS(103),
    [anon_sym_f1] = ACTIONS(103),
    [anon_sym_f2] = ACTIONS(103),
    [anon_sym_f3] = ACTIONS(103),
    [anon_sym_f4] = ACTIONS(103),
    [anon_sym_f5] = ACTIONS(103),
    [anon_sym_f6] = ACTIONS(103),
    [anon_sym_f7] = ACTIONS(103),
    [anon_sym_f8] = ACTIONS(103),
    [anon_sym_f9] = ACTIONS(103),
    [anon_sym_f10] = ACTIONS(103),
    [anon_sym_f11] = ACTIONS(103),
    [anon_sym_f12] = ACTIONS(103),
    [anon_sym_f13] = ACTIONS(103),
    [anon_sym_f14] = ACTIONS(103),
    [anon_sym_f15] = ACTIONS(103),
    [anon_sym_f16] = ACTIONS(103),
    [anon_sym_f17] = ACTIONS(103),
    [anon_sym_f18] = ACTIONS(103),
    [anon_sym_f19] = ACTIONS(103),
    [anon_sym_f20] = ACTIONS(103),
    [anon_sym_sound_up] = ACTIONS(103),
    [anon_sym_sound_down] = ACTIONS(103),
    [anon_sym_mute] = ACTIONS(103),
    [anon_sym_play] = ACTIONS(103),
    [anon_sym_previous] = ACTIONS(103),
    [anon_sym_next] = ACTIONS(103),
    [anon_sym_rewind] = ACTIONS(103),
    [anon_sym_fast] = ACTIONS(103),
    [anon_sym_brightness_up] = ACTIONS(103),
    [anon_sym_brightness_down] = ACTIONS(103),
    [anon_sym_illumination_up] = ACTIONS(103),
    [anon_sym_illumination_down] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_cmd] = ACTIONS(103),
    [anon_sym_lcmd] = ACTIONS(103),
    [anon_sym_rcmd] = ACTIONS(103),
    [anon_sym_shift] = ACTIONS(103),
    [anon_sym_lshift] = ACTIONS(103),
    [anon_sym_rshift] = ACTIONS(103),
    [anon_sym_alt] = ACTIONS(103),
    [anon_sym_lalt] = ACTIONS(103),
    [anon_sym_ralt] = ACTIONS(103),
    [anon_sym_ctrl] = ACTIONS(103),
    [anon_sym_lctrl] = ACTIONS(103),
    [anon_sym_rctrl] = ACTIONS(103),
    [anon_sym_hyper] = ACTIONS(103),
    [anon_sym_meh] = ACTIONS(103),
  },
  [16] = {
    [sym_action] = STATE(10),
    [sym_keysym] = STATE(32),
    [sym_mod] = STATE(51),
    [sym_key] = STATE(24),
    [sym_keycode] = STATE(28),
    [sym_modifier_keyword] = STATE(50),
    [sym_literal] = ACTIONS(13),
    [aux_sym_keycode_token1] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_tab] = ACTIONS(105),
    [anon_sym_space] = ACTIONS(105),
    [anon_sym_backspace] = ACTIONS(105),
    [anon_sym_escape] = ACTIONS(105),
    [anon_sym_delete] = ACTIONS(105),
    [anon_sym_home] = ACTIONS(105),
    [anon_sym_end] = ACTIONS(105),
    [anon_sym_pageup] = ACTIONS(105),
    [anon_sym_pagedown] = ACTIONS(105),
    [anon_sym_insert] = ACTIONS(105),
    [anon_sym_left] = ACTIONS(105),
    [anon_sym_right] = ACTIONS(105),
    [anon_sym_up] = ACTIONS(105),
    [anon_sym_down] = ACTIONS(105),
    [anon_sym_f1] = ACTIONS(15),
    [anon_sym_f2] = ACTIONS(15),
    [anon_sym_f3] = ACTIONS(105),
    [anon_sym_f4] = ACTIONS(105),
    [anon_sym_f5] = ACTIONS(105),
    [anon_sym_f6] = ACTIONS(105),
    [anon_sym_f7] = ACTIONS(105),
    [anon_sym_f8] = ACTIONS(105),
    [anon_sym_f9] = ACTIONS(105),
    [anon_sym_f10] = ACTIONS(105),
    [anon_sym_f11] = ACTIONS(105),
    [anon_sym_f12] = ACTIONS(105),
    [anon_sym_f13] = ACTIONS(105),
    [anon_sym_f14] = ACTIONS(105),
    [anon_sym_f15] = ACTIONS(105),
    [anon_sym_f16] = ACTIONS(105),
    [anon_sym_f17] = ACTIONS(105),
    [anon_sym_f18] = ACTIONS(105),
    [anon_sym_f19] = ACTIONS(105),
    [anon_sym_f20] = ACTIONS(105),
    [anon_sym_sound_up] = ACTIONS(105),
    [anon_sym_sound_down] = ACTIONS(105),
    [anon_sym_mute] = ACTIONS(105),
    [anon_sym_play] = ACTIONS(105),
    [anon_sym_previous] = ACTIONS(105),
    [anon_sym_next] = ACTIONS(105),
    [anon_sym_rewind] = ACTIONS(105),
    [anon_sym_fast] = ACTIONS(105),
    [anon_sym_brightness_up] = ACTIONS(105),
    [anon_sym_brightness_down] = ACTIONS(105),
    [anon_sym_illumination_up] = ACTIONS(105),
    [anon_sym_illumination_down] = ACTIONS(105),
    [anon_sym_fn] = ACTIONS(107),
    [anon_sym_cmd] = ACTIONS(107),
    [anon_sym_lcmd] = ACTIONS(107),
    [anon_sym_rcmd] = ACTIONS(107),
    [anon_sym_shift] = ACTIONS(107),
    [anon_sym_lshift] = ACTIONS(107),
    [anon_sym_rshift] = ACTIONS(107),
    [anon_sym_alt] = ACTIONS(107),
    [anon_sym_lalt] = ACTIONS(107),
    [anon_sym_ralt] = ACTIONS(107),
    [anon_sym_ctrl] = ACTIONS(107),
    [anon_sym_lctrl] = ACTIONS(107),
    [anon_sym_rctrl] = ACTIONS(107),
    [anon_sym_hyper] = ACTIONS(107),
    [anon_sym_meh] = ACTIONS(107),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(109),
    [anon_sym_DOTload] = ACTIONS(109),
    [anon_sym_DOTblacklist] = ACTIONS(109),
    [sym_mode] = ACTIONS(111),
    [sym_literal] = ACTIONS(111),
    [aux_sym_keycode_token1] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(111),
    [anon_sym_tab] = ACTIONS(111),
    [anon_sym_space] = ACTIONS(111),
    [anon_sym_backspace] = ACTIONS(111),
    [anon_sym_escape] = ACTIONS(111),
    [anon_sym_delete] = ACTIONS(111),
    [anon_sym_home] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(111),
    [anon_sym_pageup] = ACTIONS(111),
    [anon_sym_pagedown] = ACTIONS(111),
    [anon_sym_insert] = ACTIONS(111),
    [anon_sym_left] = ACTIONS(111),
    [anon_sym_right] = ACTIONS(111),
    [anon_sym_up] = ACTIONS(111),
    [anon_sym_down] = ACTIONS(111),
    [anon_sym_f1] = ACTIONS(111),
    [anon_sym_f2] = ACTIONS(111),
    [anon_sym_f3] = ACTIONS(111),
    [anon_sym_f4] = ACTIONS(111),
    [anon_sym_f5] = ACTIONS(111),
    [anon_sym_f6] = ACTIONS(111),
    [anon_sym_f7] = ACTIONS(111),
    [anon_sym_f8] = ACTIONS(111),
    [anon_sym_f9] = ACTIONS(111),
    [anon_sym_f10] = ACTIONS(111),
    [anon_sym_f11] = ACTIONS(111),
    [anon_sym_f12] = ACTIONS(111),
    [anon_sym_f13] = ACTIONS(111),
    [anon_sym_f14] = ACTIONS(111),
    [anon_sym_f15] = ACTIONS(111),
    [anon_sym_f16] = ACTIONS(111),
    [anon_sym_f17] = ACTIONS(111),
    [anon_sym_f18] = ACTIONS(111),
    [anon_sym_f19] = ACTIONS(111),
    [anon_sym_f20] = ACTIONS(111),
    [anon_sym_sound_up] = ACTIONS(111),
    [anon_sym_sound_down] = ACTIONS(111),
    [anon_sym_mute] = ACTIONS(111),
    [anon_sym_play] = ACTIONS(111),
    [anon_sym_previous] = ACTIONS(111),
    [anon_sym_next] = ACTIONS(111),
    [anon_sym_rewind] = ACTIONS(111),
    [anon_sym_fast] = ACTIONS(111),
    [anon_sym_brightness_up] = ACTIONS(111),
    [anon_sym_brightness_down] = ACTIONS(111),
    [anon_sym_illumination_up] = ACTIONS(111),
    [anon_sym_illumination_down] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_fn] = ACTIONS(111),
    [anon_sym_cmd] = ACTIONS(111),
    [anon_sym_lcmd] = ACTIONS(111),
    [anon_sym_rcmd] = ACTIONS(111),
    [anon_sym_shift] = ACTIONS(111),
    [anon_sym_lshift] = ACTIONS(111),
    [anon_sym_rshift] = ACTIONS(111),
    [anon_sym_alt] = ACTIONS(111),
    [anon_sym_lalt] = ACTIONS(111),
    [anon_sym_ralt] = ACTIONS(111),
    [anon_sym_ctrl] = ACTIONS(111),
    [anon_sym_lctrl] = ACTIONS(111),
    [anon_sym_rctrl] = ACTIONS(111),
    [anon_sym_hyper] = ACTIONS(111),
    [anon_sym_meh] = ACTIONS(111),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_comment] = ACTIONS(113),
    [anon_sym_DOTload] = ACTIONS(113),
    [anon_sym_DOTblacklist] = ACTIONS(113),
    [sym_mode] = ACTIONS(115),
    [sym_literal] = ACTIONS(115),
    [aux_sym_keycode_token1] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(115),
    [anon_sym_tab] = ACTIONS(115),
    [anon_sym_space] = ACTIONS(115),
    [anon_sym_backspace] = ACTIONS(115),
    [anon_sym_escape] = ACTIONS(115),
    [anon_sym_delete] = ACTIONS(115),
    [anon_sym_home] = ACTIONS(115),
    [anon_sym_end] = ACTIONS(115),
    [anon_sym_pageup] = ACTIONS(115),
    [anon_sym_pagedown] = ACTIONS(115),
    [anon_sym_insert] = ACTIONS(115),
    [anon_sym_left] = ACTIONS(115),
    [anon_sym_right] = ACTIONS(115),
    [anon_sym_up] = ACTIONS(115),
    [anon_sym_down] = ACTIONS(115),
    [anon_sym_f1] = ACTIONS(115),
    [anon_sym_f2] = ACTIONS(115),
    [anon_sym_f3] = ACTIONS(115),
    [anon_sym_f4] = ACTIONS(115),
    [anon_sym_f5] = ACTIONS(115),
    [anon_sym_f6] = ACTIONS(115),
    [anon_sym_f7] = ACTIONS(115),
    [anon_sym_f8] = ACTIONS(115),
    [anon_sym_f9] = ACTIONS(115),
    [anon_sym_f10] = ACTIONS(115),
    [anon_sym_f11] = ACTIONS(115),
    [anon_sym_f12] = ACTIONS(115),
    [anon_sym_f13] = ACTIONS(115),
    [anon_sym_f14] = ACTIONS(115),
    [anon_sym_f15] = ACTIONS(115),
    [anon_sym_f16] = ACTIONS(115),
    [anon_sym_f17] = ACTIONS(115),
    [anon_sym_f18] = ACTIONS(115),
    [anon_sym_f19] = ACTIONS(115),
    [anon_sym_f20] = ACTIONS(115),
    [anon_sym_sound_up] = ACTIONS(115),
    [anon_sym_sound_down] = ACTIONS(115),
    [anon_sym_mute] = ACTIONS(115),
    [anon_sym_play] = ACTIONS(115),
    [anon_sym_previous] = ACTIONS(115),
    [anon_sym_next] = ACTIONS(115),
    [anon_sym_rewind] = ACTIONS(115),
    [anon_sym_fast] = ACTIONS(115),
    [anon_sym_brightness_up] = ACTIONS(115),
    [anon_sym_brightness_down] = ACTIONS(115),
    [anon_sym_illumination_up] = ACTIONS(115),
    [anon_sym_illumination_down] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_fn] = ACTIONS(115),
    [anon_sym_cmd] = ACTIONS(115),
    [anon_sym_lcmd] = ACTIONS(115),
    [anon_sym_rcmd] = ACTIONS(115),
    [anon_sym_shift] = ACTIONS(115),
    [anon_sym_lshift] = ACTIONS(115),
    [anon_sym_rshift] = ACTIONS(115),
    [anon_sym_alt] = ACTIONS(115),
    [anon_sym_lalt] = ACTIONS(115),
    [anon_sym_ralt] = ACTIONS(115),
    [anon_sym_ctrl] = ACTIONS(115),
    [anon_sym_lctrl] = ACTIONS(115),
    [anon_sym_rctrl] = ACTIONS(115),
    [anon_sym_hyper] = ACTIONS(115),
    [anon_sym_meh] = ACTIONS(115),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      sym_literal,
    STATE(25), 1,
      sym_key,
    STATE(28), 1,
      sym_keycode,
    ACTIONS(15), 2,
      anon_sym_f1,
      anon_sym_f2,
    ACTIONS(105), 46,
      aux_sym_keycode_token1,
      anon_sym_return,
      anon_sym_tab,
      anon_sym_space,
      anon_sym_backspace,
      anon_sym_escape,
      anon_sym_delete,
      anon_sym_home,
      anon_sym_end,
      anon_sym_pageup,
      anon_sym_pagedown,
      anon_sym_insert,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_f3,
      anon_sym_f4,
      anon_sym_f5,
      anon_sym_f6,
      anon_sym_f7,
      anon_sym_f8,
      anon_sym_f9,
      anon_sym_f10,
      anon_sym_f11,
      anon_sym_f12,
      anon_sym_f13,
      anon_sym_f14,
      anon_sym_f15,
      anon_sym_f16,
      anon_sym_f17,
      anon_sym_f18,
      anon_sym_f19,
      anon_sym_f20,
      anon_sym_sound_up,
      anon_sym_sound_down,
      anon_sym_mute,
      anon_sym_play,
      anon_sym_previous,
      anon_sym_next,
      anon_sym_rewind,
      anon_sym_fast,
      anon_sym_brightness_up,
      anon_sym_brightness_down,
      anon_sym_illumination_up,
      anon_sym_illumination_down,
  [62] = 3,
    STATE(47), 1,
      sym_mod,
    STATE(50), 1,
      sym_modifier_keyword,
    ACTIONS(107), 15,
      anon_sym_fn,
      anon_sym_cmd,
      anon_sym_lcmd,
      anon_sym_rcmd,
      anon_sym_shift,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_alt,
      anon_sym_lalt,
      anon_sym_ralt,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_rctrl,
      anon_sym_hyper,
      anon_sym_meh,
  [86] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 2,
      anon_sym_STAR,
      sym_string,
    STATE(22), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
  [98] = 3,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 2,
      anon_sym_STAR,
      sym_string,
    STATE(23), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
  [110] = 3,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(125), 2,
      anon_sym_STAR,
      sym_string,
    STATE(23), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
  [122] = 1,
    ACTIONS(128), 4,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
  [129] = 1,
    ACTIONS(130), 4,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
  [136] = 3,
    STATE(21), 1,
      sym_proc_map,
    STATE(63), 1,
      sym_proc_map_lst,
    ACTIONS(119), 2,
      anon_sym_STAR,
      sym_string,
  [147] = 4,
    ACTIONS(132), 1,
      aux_sym_command_token1,
    ACTIONS(134), 1,
      aux_sym_command_token2,
    STATE(15), 1,
      sym_command,
    STATE(46), 1,
      aux_sym_command_repeat1,
  [160] = 1,
    ACTIONS(136), 4,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
  [167] = 1,
    ACTIONS(138), 4,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
  [174] = 4,
    ACTIONS(132), 1,
      aux_sym_command_token1,
    ACTIONS(134), 1,
      aux_sym_command_token2,
    STATE(14), 1,
      sym_command,
    STATE(46), 1,
      aux_sym_command_repeat1,
  [187] = 4,
    ACTIONS(132), 1,
      aux_sym_command_token1,
    ACTIONS(134), 1,
      aux_sym_command_token2,
    STATE(11), 1,
      sym_command,
    STATE(46), 1,
      aux_sym_command_repeat1,
  [200] = 4,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_DASH_GT,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      anon_sym_SEMI,
  [213] = 3,
    STATE(21), 1,
      sym_proc_map,
    STATE(60), 1,
      sym_proc_map_lst,
    ACTIONS(119), 2,
      anon_sym_STAR,
      sym_string,
  [224] = 4,
    ACTIONS(132), 1,
      aux_sym_command_token1,
    ACTIONS(134), 1,
      aux_sym_command_token2,
    STATE(17), 1,
      sym_command,
    STATE(46), 1,
      aux_sym_command_repeat1,
  [237] = 4,
    ACTIONS(132), 1,
      aux_sym_command_token1,
    ACTIONS(134), 1,
      aux_sym_command_token2,
    STATE(40), 1,
      sym_command,
    STATE(46), 1,
      aux_sym_command_repeat1,
  [250] = 3,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(150), 1,
      sym_mode,
    STATE(44), 1,
      aux_sym_modes_repeat1,
  [260] = 3,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    ACTIONS(154), 1,
      sym_string,
    STATE(39), 1,
      aux_sym_blacklist_repeat1,
  [270] = 2,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(156), 2,
      anon_sym_LT,
      sym_mode,
  [278] = 3,
    ACTIONS(154), 1,
      sym_string,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_blacklist_repeat1,
  [288] = 1,
    ACTIONS(162), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym_string,
  [294] = 3,
    ACTIONS(164), 1,
      aux_sym_command_token1,
    ACTIONS(167), 1,
      aux_sym_command_token2,
    STATE(41), 1,
      aux_sym_command_repeat1,
  [304] = 1,
    ACTIONS(169), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym_string,
  [310] = 3,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    ACTIONS(173), 1,
      sym_string,
    STATE(43), 1,
      aux_sym_blacklist_repeat1,
  [320] = 3,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym_mode,
    STATE(44), 1,
      aux_sym_modes_repeat1,
  [330] = 3,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [340] = 3,
    ACTIONS(132), 1,
      aux_sym_command_token1,
    ACTIONS(187), 1,
      aux_sym_command_token2,
    STATE(41), 1,
      aux_sym_command_repeat1,
  [350] = 2,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_PLUS,
  [357] = 1,
    ACTIONS(176), 2,
      anon_sym_LT,
      sym_mode,
  [362] = 2,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_TILDE,
  [369] = 1,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [374] = 2,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_DASH,
  [381] = 1,
    ACTIONS(167), 2,
      aux_sym_command_token1,
      aux_sym_command_token2,
  [386] = 1,
    ACTIONS(201), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [391] = 1,
    ACTIONS(203), 2,
      anon_sym_RBRACK,
      sym_string,
  [396] = 1,
    ACTIONS(205), 1,
      sym_mode,
  [400] = 1,
    ACTIONS(207), 1,
      anon_sym_LF,
  [404] = 1,
    ACTIONS(209), 1,
      sym_mode,
  [408] = 1,
    ACTIONS(211), 1,
      anon_sym_LT,
  [412] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [416] = 1,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
  [420] = 1,
    ACTIONS(217), 1,
      sym_mode,
  [424] = 1,
    ACTIONS(219), 1,
      sym_string,
  [428] = 1,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
  [432] = 1,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 62,
  [SMALL_STATE(21)] = 86,
  [SMALL_STATE(22)] = 98,
  [SMALL_STATE(23)] = 110,
  [SMALL_STATE(24)] = 122,
  [SMALL_STATE(25)] = 129,
  [SMALL_STATE(26)] = 136,
  [SMALL_STATE(27)] = 147,
  [SMALL_STATE(28)] = 160,
  [SMALL_STATE(29)] = 167,
  [SMALL_STATE(30)] = 174,
  [SMALL_STATE(31)] = 187,
  [SMALL_STATE(32)] = 200,
  [SMALL_STATE(33)] = 213,
  [SMALL_STATE(34)] = 224,
  [SMALL_STATE(35)] = 237,
  [SMALL_STATE(36)] = 250,
  [SMALL_STATE(37)] = 260,
  [SMALL_STATE(38)] = 270,
  [SMALL_STATE(39)] = 278,
  [SMALL_STATE(40)] = 288,
  [SMALL_STATE(41)] = 294,
  [SMALL_STATE(42)] = 304,
  [SMALL_STATE(43)] = 310,
  [SMALL_STATE(44)] = 320,
  [SMALL_STATE(45)] = 330,
  [SMALL_STATE(46)] = 340,
  [SMALL_STATE(47)] = 350,
  [SMALL_STATE(48)] = 357,
  [SMALL_STATE(49)] = 362,
  [SMALL_STATE(50)] = 369,
  [SMALL_STATE(51)] = 374,
  [SMALL_STATE(52)] = 381,
  [SMALL_STATE(53)] = 386,
  [SMALL_STATE(54)] = 391,
  [SMALL_STATE(55)] = 396,
  [SMALL_STATE(56)] = 400,
  [SMALL_STATE(57)] = 404,
  [SMALL_STATE(58)] = 408,
  [SMALL_STATE(59)] = 412,
  [SMALL_STATE(60)] = 416,
  [SMALL_STATE(61)] = 420,
  [SMALL_STATE(62)] = 424,
  [SMALL_STATE(63)] = 428,
  [SMALL_STATE(64)] = 432,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load, 2, 0, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blacklist, 4, 0, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blacklist, 4, 0, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hotkey, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blacklist, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blacklist, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hotkey, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 5, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map_lst, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map_lst, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_map_lst_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_map_lst_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keysym, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keysym, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modes, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modes_repeat1, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map, 3, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blacklist_repeat1, 2, 0, 4),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blacklist_repeat1, 2, 0, 4), SHIFT_REPEAT(54),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modes_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modes_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_keyword, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blacklist_repeat1, 1, 0, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
