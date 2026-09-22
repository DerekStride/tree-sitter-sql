-- Load with nvim --cmd 'lua dofile(".../contrib/neovim/preview.lua")'.
-- This runs before the normal configuration loads a SQL parser or its queries.
local source = debug.getinfo(1, "S").source:sub(2)
local directory = vim.fn.fnamemodify(source, ":p:h")
local root = vim.fn.fnamemodify(directory, ":h:h")
assert(vim.fn.filereadable(root .. "/sql.so") == 1,
  "Build sql.so in " .. root .. " before starting the preview")
assert(vim.treesitter.language.add("sql", { path = root .. "/sql.so" }))
-- Lazy.nvim may reset runtimepath during startup. An explicit query extension
-- survives that reset and resolves the normal SQL queries when first used.
vim.treesitter.query.set("sql", "highlights",
  table.concat(vim.fn.readfile(directory .. "/queries/sql/highlights.scm"), "\n"))
