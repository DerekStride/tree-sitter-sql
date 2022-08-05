# tree-sitter-sql

[![Build/test](https://github.com/derekstride/tree-sitter-sql/actions/workflows/ci.yml/badge.svg)](https://github.com/derekstride/tree-sitter-sql/actions/workflows/ci.yml)

SQL grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Features

- [x] SELECT statements (some features may be incomplete)
- [x] Function calls
- [x] Index hints
- [x] Comments
- [x] Marginalia
- [x] UPDATE statements
- [x] DELETE statements
- [x] CREATE statements
- [x] INSERT/REPLACE statements
- [x] DROP statements
- [x] ALTER TABLE statements
- [ ] CREATE INDEX statements
- [ ] DROP INDEX statements
- [ ] ALTER INDEX statements
- [ ] EXPLAIN statements
- [ ] Function definitions

For a complete list of features see the the [tests](test/corpus)

## References

* [Wikipedia#SQL_syntax](https://en.wikipedia.org/wiki/SQL_syntax) - I consulted wikipedia for naming conventions,
  though I may not have been strict early on in the prototyping.
* [Phoenix Language Reference](https://forcedotcom.github.io/phoenix/index.html) - Note I'm using this as a reference
  but implementing the Grammar in terms of the MySQL dialect of SQL.

### Other projects

* https://github.com/m-novikov/tree-sitter-sql
* https://github.com/tjdevries/tree-sitter-sql
* https://github.com/tk-shirasaka/tree-sitter-sql
* https://github.com/dhcmrlchtdj/tree-sitter-sqlite
