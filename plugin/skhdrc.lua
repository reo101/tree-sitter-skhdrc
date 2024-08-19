vim.api.nvim_create_autocmd("FileType", {
  pattern = "skhdrc",
  callback = function(event)
    vim.bo[event.buf].commentstring = "# %s"
  end,
})

local ok, parsers = pcall(require, "nvim-treesitter.parsers")
if ok then
  local parser_configs = parsers.get_parser_configs()
  if not parser_configs.skhdrc then
    parser_config.skhdrc = {
      install_info = {
        url = "https://github.com/reo101/tree-sitter-skhdrc",
        files = { "src/parser.c" },
        branch = "main",
      },
      filetype = "skhdrc",
    }
  end
end
