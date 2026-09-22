# Preview the InterBase SQL parser in Neovim

The grammar in this checkout recognizes InterBase procedure and trigger bodies,
including declarations, assignments, control flow, variable references and caret
script terminators. This directory extends nvim-treesitter's SQL highlight queries
for the added nodes, using Neovim's current capture names.

## Build

From the repository root, with the Tree-sitter CLI and a C compiler installed:

```sh
tree-sitter generate
cc -O2 -shared -fPIC -I./src src/parser.c src/scanner.c -o sql.so
```

Generation is only necessary after changing the grammar. Recompile after changing
the grammar or external scanner.

## Open a preview

For a checkout at `~/gits/tree-sitter-sql`:

```sh
nvim --cmd 'lua dofile(vim.fn.expand("~/gits/tree-sitter-sql/contrib/neovim/preview.lua"))' path/to/script.sql
```

The preview uses your normal Neovim configuration and requires SQL highlighting
to be enabled in nvim-treesitter. It loads the local parser before plugins can
load the installed parser and sets an in-memory query extension which inherits
the normal SQL queries. This also works with plugin managers that reset the
runtime path during startup. Your installed parser and configuration files are
not replaced.

Restart this preview process after each rebuild: Neovim caches loaded parsers.
Use `:InspectTree` to inspect the parse tree and `:Inspect` to inspect colors at
the cursor.

For every Neovim launch, the same `dofile(...)` call can instead be placed near
the beginning of `init.lua`, before plugin initialization. Keep the built parser
and query extensions together when updating the checkout.

## Scope

Script delimiters supported here are `;` and `^`, including `SET TERM ^ ;` and
`SET TERM ; ^`. This is a permissive syntax grammar, not database validation:
it does not check whether referenced tables, procedures or variables exist.
Other tools' delimiter directives, such as MySQL `DELIMITER`, are separate syntax.
