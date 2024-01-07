local M = {}

M.treesitter = {
  ensure_installed = {
    -- defaults
    "vim",
    "lua",

    -- web dev
    "html",
    "css",
    "javascript",
    "typescript",
    "tsx",
    "json",
    "svelte",

    -- low level
    "c",
    "cpp",
    "go",

    -- other
    "dockerfile",
    "bash",
    "sql",
  },
  indent = {
    enable = true,
    -- disable = {
    --   "python"
    -- },
  },
}

M.mason = {
  ensure_installed = {
    -- lua stuff
    "lua-language-server",
    "stylua",

    -- web dev stuff
    "css-lsp",
    "html-lsp",
    "typescript-language-server",
    "js-debug-adapter",
    "eslint-lsp",
    "deno",
    "tailwindcss-language-server",

    -- c/cpp stuff
    "clangd",
    "clang-format",

    -- golang stuff
    "gopls",
    "gofumpt",
    "goimports-reviser",

    --extras
    "sqls",
    "bash-language-server",
    "beautysh",
    "emmet-language-server",
    "prettierd",
    "markdownlint",
    "dockerfile-language-server",
    "yamlfmt",
  },
}

-- git support in nvimtree
M.nvimtree = {
  git = {
    enable = true,
  },

  renderer = {
    highlight_git = true,
    icons = {
      show = {
        git = true,
      },
    },
  },
}

return M
