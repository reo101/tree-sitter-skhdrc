Based on the [official grammar](https://github.com/koekeishiya/skhd/blob/master/README.md#configuration) of [`skhd`](https://github.com/koekeishiya/skhd)'s configuration language

# Neovim

This repo can also be used as a neovim package, with an optional dependency on [`nvim-treesitter`](https://github.com/nvim-treesitter/nvim-treesitter) (for automatically making the `skhdrc` parser available for `:TSInstall`-ing).

```lua
{
  "reo101/tree-sitter-skhdrc",
  dependencies = {
    -- Optional, only for automating the parser adding
    "nvim-treesitter/nvim-treesitter",
  },
}
```

Instead of depending on `nvim-treesitter`, you can also just add the parser manually:

```lua
require("nvim-treesitter.parsers").get_parser_configs().skhdrc = {
  install_info = {
    url = "https://github.com/reo101/tree-sitter-skhdrc",
    files = { "src/parser.c" },
    branch = "main",
  },
  filetype = "skhdrc",
}
```
