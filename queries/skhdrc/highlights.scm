(comment) @comment

(string) @string

(modifier_keyword) @keyword

(key) @constant

[
  "-"
  "+"
] @operator

[
  "->"
  ","
  ":"
  ";"
] @punctuation

[
  "::"
  "<"
  "@"
] @punctuation.special

[
  "*"
  "~"
] @variable.builtin

(mode) @module.builtin

(load
  ".load" @keyword.directive)

(blacklist
  ".blacklist" @keyword.directive)
