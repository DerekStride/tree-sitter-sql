# InterBase syntax support

The InterBase rules reuse the SQL grammar's expressions, types and DML and add:

- `CREATE` / `ALTER PROCEDURE`, input and return parameters, local declarations;
- `CREATE` / `ALTER TRIGGER`, activation, events and position;
- PSQL blocks, assignments, `IF`, `WHILE`, `FOR SELECT`, exception handlers;
- `EXECUTE PROCEDURE`, with parenthesized or unparenthesized arguments;
- `SUSPEND`, `EXIT`, `EXCEPTION`, trailing `INTO`, and `ROWS n [TO m]`;
- BLOB attributes, generators, colon parameters and dollar-containing identifiers.

Simple statements in PSQL blocks end in semicolons. Compound blocks do not
require a semicolon after `END`. Routine definitions may end with a script
terminator or be the final unterminated statement in an editor buffer.

## Caret script terminators

The grammar accepts `;` and `^` at top-level statement boundaries and recognizes
`SET TERM ^ ;` and `SET TERM ; ^`. These directives are parsed syntactically;
the parser does not maintain an active delimiter or interpret arbitrary custom
delimiters.

Because this shared grammar also supports the arithmetic caret operator, the
external scanner uses lookahead. End of input or a recognized statement-start
keyword after whitespace/comments makes the caret a terminator. An ordinary
operand makes it an arithmetic operator. Strings and comments retain their
normal lexical handling, and newlines alone do not terminate SQL expressions.

There is a deliberate ambiguity in a multi-dialect grammar:

```sql
SELECT 1 FROM t WHERE id = 1^
(SELECT 2 FROM t);
```

The current policy treats the parenthesized query as the right operand of `^`,
not as a new statement. Using `;` for that boundary removes the ambiguity.
An upstream dialect-selection or stateful delimiter policy would be needed to
interpret this text differently for InterBase without changing the meaning of
the identical arithmetic expression in other dialects.

## Neovim

See [the local preview instructions](../contrib/neovim/README.md) for the matching
Neovim query extension. The grammar repository's queries use Tree-sitter's
capture names; the extension uses Neovim's current capture names.
