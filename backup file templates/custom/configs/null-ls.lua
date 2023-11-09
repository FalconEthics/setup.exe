local null_ls = require "null-ls"

local b = null_ls.builtins

local sources = {

  -- webdev stuff
  b.formatting.deno_fmt, -- choosed deno for ts/js files cuz its very fast!
  b.formatting.prettier.with { filetypes = { "html", "markdown", "css" } }, -- so prettier works only on these filetypes

  -- Lua
  b.formatting.stylua,

  -- cpp
  b.formatting.clang_format,

  -- others
  null_ls.builtins.code_actions.eslint_d,
  null_ls.builtins.code_actions.gitsigns,
  null_ls.builtins.code_actions.xo,
  null_ls.builtins.completion.tags,
  null_ls.builtins.formatting.prettierd,
  null_ls.builtins.formatting.gofumpt,
  null_ls.builtins.formatting.goimports,
}

null_ls.setup {
  debug = true,
  sources = sources,
}
