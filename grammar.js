const MODIFIERS = [
  "fn",

  "cmd",
  "lcmd",
  "rcmd",

  "shift",
  "lshift",
  "rshift",

  "alt",
  "lalt",
  "ralt",

  "ctrl",
  "lctrl",
  "rctrl",

  "hyper", // (cmd + shift + alt + ctrl)

  "meh", // (shift + alt + ctrl)
];

const KEYCODES = [
  "return",    // kVK_Return
  "tab",       // kVK_Tab
  "space",     // kVK_Space
  "backspace", // kVK_Delete
  "escape",    // kVK_Escape

  // The following keys can not be used with the fn-modifier:

  "delete",   // kVK_ForwardDelete
  "home",     // kVK_Home
  "end",      // kVK_End
  "pageup",   // kVK_PageUp
  "pagedown", // kVK_PageDown
  "insert",   // kVK_Help
  "left",     // kVK_LeftArrow
  "right",    // kVK_RightArrow
  "up",       // kVK_UpArrow
  "down",     // kVK_DownArrow
  "f1",       // kVK_F1
  "f2",       // kVK_F2
  "f3",       // kVK_F3
  "f4",       // kVK_F4
  "f5",       // kVK_F5
  "f6",       // kVK_F6
  "f7",       // kVK_F7
  "f8",       // kVK_F8
  "f9",       // kVK_F9
  "f10",      // kVK_F10
  "f11",      // kVK_F11
  "f12",      // kVK_F12
  "f13",      // kVK_F13
  "f14",      // kVK_F14
  "f15",      // kVK_F15
  "f16",      // kVK_F16
  "f17",      // kVK_F17
  "f18",      // kVK_F18
  "f19",      // kVK_F19
  "f20",      // kVK_F20

  "sound_up",          // NX_KEYTYPE_SOUND_UP
  "sound_down",        // NX_KEYTYPE_SOUND_DOWN
  "mute",              // NX_KEYTYPE_MUTE
  "play",              // NX_KEYTYPE_PLAY
  "previous",          // NX_KEYTYPE_PREVIOUS
  "next",              // NX_KEYTYPE_NEXT
  "rewind",            // NX_KEYTYPE_REWIND
  "fast",              // NX_KEYTYPE_FAST
  "brightness_up",     // NX_KEYTYPE_BRIGHTNESS_UP
  "brightness_down",   // NX_KEYTYPE_BRIGHTNESS_DOWN
  "illumination_up",   // NX_KEYTYPE_ILLUMINATION_UP
  "illumination_down", // NX_KEYTYPE_ILLUMINATION_DOWN)
];

module.exports = grammar({
  name: "skhdrc",

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.comment,
      $._macro,
      $.hotkey,
      $.mode_decl,
    ),

    comment: $ => /\#[^\n]*/,

    _macro: $ => choice(
      $.load,
      $.blacklist,
    ),

    load: $ => seq(
      ".load",
      field("path", $.string),
    ),

    blacklist: $ => seq(
      ".blacklist",
      seq(
        "[",
        repeat(field("item", $.string)),
        "]",
      ),
    ),

    hotkey: $ => choice(
      seq($.modes, "<", $.action),
      $.action
    ),

    modes: $ => repeat1(seq(
      $.mode,
      optional(",")
    )),

    mode: $ => /\w+/,

    action: $ => choice(
      seq($.keysym, "[", $.proc_map_lst, "]"),
      seq($.keysym, "->", "[", $.proc_map_lst, "]"),
      seq($.keysym, ":", $.command),
      seq($.keysym, "->", ":", $.command),
      seq($.keysym, ";", $.mode),
      seq($.keysym, "->", ";", $.mode)
    ),

    keysym: $ => choice(
      seq($.mod, "-", $.key),
      $.key
    ),

    mod: $ => prec.right(choice(
      $.modifier_keyword,
      seq($.mod, "+", $.mod)
    )),

    key: $ => choice(
      $.literal,
      $.keycode
    ),

    literal: $ => /[A-Z0-9]/i,

    keycode: $ => choice(/0x[0-9A-F]{2}/i, ...KEYCODES),

    proc_map_lst: $ => seq($.proc_map, repeat($.proc_map)),

    proc_map: $ => choice(
      seq($.string, ":", $.command),
      seq($.string, "~"),
      seq("*", ":", $.command),
      seq("*", "~")
    ),

    string: $ => token(seq("\"", /[^"]*/, "\"")),

    command: $ => seq(
      // Match lines that are continued with "\"
      repeat(seq(/[^\n]*\\/, "\n")),
      // Match a line that ends without continuation
      /[^\n]+/
    ),

    mode_decl: $ => choice(
      seq("::", $.mode, "@", ":", $.command),
      seq("::", $.mode, ":", $.command),
      seq("::", $.mode, "@"),
      seq("::", $.mode)
    ),

    modifier_keyword: $ => choice(...MODIFIERS),
  }
});
