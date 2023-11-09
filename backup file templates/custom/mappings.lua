---@type MappingsTable
local M = {}

M.general = {
  n = {
    [";"] = { ":", "enter command mode", opts = { nowait = true } },
    ["<leader>q"] = { "<cmd>:q<CR>", "quit", opts = { nowait = true } },
    ["<leader>w"] = { "<cmd>:w<CR>", "save", opts = { nowait = true } },
    ["<leader>p"] = { "<cmd>MarkdownPreviewToggle<CR>", "MarkdownPreviewToggle", opts = { nowait = true } },
    ["<leader>R"] = {"<cmd>lua require('spectre').toggle()<CR>", "Toggle Specter", opts = { nowait = true }},
    
  },
  v = {
    [">"] = { ">gv", "indent"},
  },
}

-- more keybinds!

return M
