# tree-sitter-sql

[![Build/test](https://github.com/derekstride/tree-sitter-sql/actions/workflows/ci.yml/badge.svg)](https://github.com/derekstride/tree-sitter-sql/actions/workflows/ci.yml)
[![GitHub Pages](https://github.com/DerekStride/tree-sitter-sql/actions/workflows/gh-pages.yml/badge.svg)](https://github.com/DerekStride/tree-sitter-sql/actions/workflows/gh-pages.yml)

A general/permissive SQL grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Notes

We don't commit the generated parser files to the main branch. Instead, you can find them on the
[gh-pages](https://github.com/DerekStride/tree-sitter-sql/tree/gh-pages) branch. They are also hosted on the [GitHub
pages site](https://derek.stride.host/tree-sitter-sql/). We're open to feedback & encourage you to [open an
issue](https://github.com/DerekStride/tree-sitter-sql/issues/new) to discuss any problems.

## Features

For a complete list of features see the the [tests](test/corpus)

## References

* [Wikipedia#SQL_syntax](https://en.wikipedia.org/wiki/SQL_syntax) - I consulted wikipedia for naming conventions,
  though I may not have been strict early on in the prototyping.
* [Phoenix Language Reference](https://forcedotcom.github.io/phoenix/index.html) - A reference diagram.
* [SQLite's railroad diagram for expr](https://www.sqlite.org/lang_expr.html) - Another reference diagram.

### Other projects

* https://github.com/m-novikov/tree-sitter-sql
* https://github.com/tjdevries/tree-sitter-sql
* https://github.com/dhcmrlchtdj/tree-sitter-sqlite
