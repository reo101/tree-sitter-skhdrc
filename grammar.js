module.exports = grammar({
  name: "skhdrc",

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.comment,
      $.hotkey,
      $.mode_decl,
    ),

    comment: $ => /\#[^\n]*/,

    hotkey: $ => choice(
      seq($.mode, "<", $.action),
      $.action
    ),

    mode: $ => prec.left(choice(
      $.name,
      seq($.mode, ",", $.mode)
    )),

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

    literal: $ => /[a-zA-Z0-9]+/,

    keycode: $ => /kVK_\w+/,

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
      seq("::", $.name, "@", ":", $.command),
      seq("::", $.name, ":", $.command),
      seq("::", $.name, "@"),
      seq("::", $.name)
    ),

    name: $ => /\w+/,

    modifier_keyword: $ => choice("cmd", "alt", "shift", "ctrl", "lctrl", "lalt", "lshift"),
  }
});

// vim: set shiftwidth=2:
