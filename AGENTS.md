# tree-sitter-sql-extended — Architecture Guide

## What this repo is

A tree-sitter SQL parser forked from DerekStride/tree-sitter-sql. The upstream ships a
"permissive" SQL grammar that mixes PostgreSQL, Hive/Spark, MySQL, and MariaDB syntax into one
compiled parser. This fork extends it with Databricks/Unity Catalog support and restructures the
grammar into independently compiled dialect grammars.

---

## Grammar hierarchy

```
grammar.js                ← ANSI SQL base (clean, no dialect-specific rules)
  ├── hive/grammar.js     ← grammar(base, hive_rules)      [LATERAL VIEW, STORED BY/AS, multi-table INSERT]
  │     └── spark/grammar.js  ← grammar(hive, spark_rules)  [QUALIFY, PIVOT, scripting, Iceberg, VARIANT]
  │           └── databricks/grammar.js  ← grammar(spark, databricks_rules)  [OPTIMIZE delta, Unity Catalog]
  ├── postgres/grammar.js ← grammar(base, postgres_rules)  [COPY, VACUUM, PARTITION BY, extensions, policies]
  ├── mysql/grammar.js    ← grammar(base, mysql_rules)     [ENGINE=, CHARSET=, index hints, SHOW/DESCRIBE]
  │     └── mariadb/grammar.js  ← grammar(mysql, mariadb_rules)  [INVISIBLE columns]
  ├── oracle/grammar.js   ← grammar(base, oracle_rules)    [CONNECT BY, PL/SQL blocks, packages, cursors]
  ├── db2/grammar.js      ← grammar(base, db2_rules)       [SQL PL, modules, audit, federated objects]
  ├── tsql/grammar.js     ← grammar(base, tsql_rules)      [T-SQL scripting, APPLY, hints, temp tables]
  ├── bigquery/grammar.js ← grammar(base, bq_rules)        [INT64/STRUCT/ARRAY types, UNNEST, QUALIFY]
  ├── snowflake/grammar.js← grammar(base, sf_rules)        [scripting, FLATTEN, time travel, stages]
  └── sqlite/grammar.js   ← grammar(base, sqlite_rules)    [AUTOINCREMENT, INDEXED BY, INSERT OR REPLACE]
```

Each dialect compiles to its own `<dialect>/src/parser.c` independently. Changing Databricks rules
only requires regenerating `databricks/src/parser.c` — base and sibling parsers are unaffected.
Dependencies: databricks depends on spark; spark depends on hive; mariadb depends on mysql.
Regenerate the child dialect when the parent grammar changes.

---

## Directory layout

```
grammar.js                      # Entry point — spreads all rule groups
grammar/
  keywords.js                   # 500+ case-insensitive keyword regexes
  types.js                      # SQL type system (INT, VARCHAR, ARRAY, custom, etc.)
  expressions.js                # Binary/unary expressions, CASE, window functions
  helpers.js                    # make_keyword(), comma_list(), paren_list(), optional_parenthesis()
  transactions.js               # BEGIN/COMMIT/ROLLBACK
  column-lists.js               # Column definitions and constraints
  statements/
    index.js                    # Composes all statement rules; dispatch lists (_ddl_statement etc.)
    create.js                   # CREATE TABLE/VIEW/INDEX/TYPE/ROLE/SEQUENCE/TRIGGER/FUNCTION/PROCEDURE
    alter.js                    # ALTER TABLE/VIEW/TYPE/SEQUENCE/ROLE/INDEX/DATABASE/SCHEMA
    drop.js                     # DROP TABLE/VIEW/INDEX/TYPE/SCHEMA/SEQUENCE/FUNCTION/PROCEDURE/ROLE
    select.js                   # SELECT, CTEs, window functions, joins, set operations
    insert.js                   # INSERT INTO ... VALUES / SELECT
    update.js                   # UPDATE ... SET ... WHERE
    delete.js                   # DELETE FROM
    merge.js                    # MERGE INTO ... USING ... WHEN MATCHED
    optimize.js                 # OPTIMIZE TABLE ... REWRITE DATA (Iceberg/Athena)
    show.js                     # SHOW TABLES [FROM …] [LIKE …]
    set.js                      # SET variable = value
    refresh.js                  # REFRESH MATERIALIZED VIEW
    truncate.js                 # TRUNCATE TABLE
    rename.js                   # RENAME TABLE/COLUMN
    grant.js                    # GRANT/REVOKE (ANSI DCL)
    comment.js                  # COMMENT ON ...
    create-function.js          # CREATE FUNCTION (with dollar-quoted body support)
    create-procedure.js         # CREATE PROCEDURE
src/
  parser.c                      # Generated C parser (do not edit manually)
  scanner.c                     # External scanner for dollar-quoted strings
queries/
  highlights.scm                # Syntax highlighting (tree-sitter query language)
  indents.scm                   # Indentation rules
test/corpus/                    # Base SQL corpus tests

spark/                          # Spark/Hive SQL dialect
  grammar.js                    # grammar(base, spark_rules)
  grammar/
    create.js                   # _table_settings, table_cluster, stored_as, row_format, table_partition
    optimize.js                 # _compute_stats, _spark_analyze, _partition_spec
  src/parser.c                  # Generated independently from base
  src/scanner.c                 # Delegates to ../../src/scanner.c via #define macros
  queries/highlights.scm
  test/corpus/
  tree-sitter.json

databricks/                     # Databricks SQL (extends spark/)
  grammar.js                    # grammar(spark, databricks_rules)
  grammar/
    vacuum.js, optimize.js, restore.js, grant.js, drop.js
    describe.js, show.js, cache.js, resource.js, call.js, create.js
  src/parser.c
  src/scanner.c
  queries/highlights.scm
  test/corpus/
  tree-sitter.json

postgres/                       # PostgreSQL dialect
  grammar.js                    # grammar(base, postgres_rules)
  grammar/
    copy.js                     # COPY FROM/TO
    optimize.js                 # VACUUM FULL/ANALYZE/PARALLEL
    create.js                   # CREATE EXTENSION, CREATE POLICY
    alter.js                    # ALTER POLICY, RLS enable/disable
    drop.js                     # DROP EXTENSION
  src/parser.c
  src/scanner.c
  queries/highlights.scm
  test/corpus/
  tree-sitter.json

mysql/                          # MySQL/MariaDB dialect
  grammar.js                    # grammar(base, mysql_rules)
  grammar/
    create.js                   # ENGINE=, CHARSET=, inline index syntax
    optimize.js                 # MariaDB OPTIMIZE TABLE
  src/parser.c
  src/scanner.c
  queries/highlights.scm
  test/corpus/
  tree-sitter.json

scripts/
  generate.js                   # Hash-cached wrapper around tree-sitter generate
  test-keywords.sh              # Validates keyword/highlights.scm sync
  bump-version.sh               # Bumps version in all 5 manifest files
bindings/                       # Node/Python/Rust/Go/Swift language bindings
.github/workflows/
  ci.yml                        # Build + test on macOS/Ubuntu/Windows
```

---

## How grammar composition works

`grammar.js` uses spread operators to compose rule groups:

```javascript
rules: {
  program: $ => ...,
  ...keyword_rules,
  ...type_rules,
  ...expression_rules,
  ...statement_rules,   // ← includes all of grammar/statements/
}
```

`grammar/statements/index.js` follows the same pattern. It spreads the ANSI core statement
modules, then overrides the dispatch lists at the end:

```javascript
// Spreads come first (define all rule names)
...create_rules,
...optimize_rules,
// ...

// Overrides come last (dispatch lists must enumerate every valid choice explicitly)
_ddl_statement: $ => choice(
  $._create_statement,
  $._alter_statement,
  // ...
),
```

Dialect grammars extend the base using tree-sitter's `grammar(base, overrides)` pattern. A rule
in `overrides` **replaces** the base rule entirely for that dialect — there is no automatic
merging. Dispatch lists must therefore re-enumerate all base alternatives plus the new ones.

---

## How to add a new ANSI SQL statement

1. **Find the file**: look in `grammar/statements/` — pick the file matching the statement type.

2. **Define the rule** in that file:
   ```javascript
   create_streaming_table: $ => seq(
     $.keyword_create, $.keyword_streaming, $.keyword_table,
     $.object_reference,
   ),
   ```

3. **Wire into the dispatch list** in `grammar/statements/index.js`:
   ```javascript
   _create_statement: $ => seq(choice(
     $.create_table,
     // ...
     $.create_streaming_table,  // ← add here
   )),
   ```

4. **New keywords**: add to `grammar/keywords.js` using `make_keyword()`:
   ```javascript
   keyword_streaming: _ => make_keyword("streaming"),
   ```

5. **Highlight**: add to `queries/highlights.scm`:
   ```scheme
   (keyword_streaming) @keyword
   ```

6. **Test**: `npm run generate && npm run test:corpus` — the keyword sync check in
   `test:keywords` will fail if step 5 is missing.

7. **Corpus test**: add a test case to the relevant file in `test/corpus/`.

---

## How to add a new dialect

Use `spark/grammar.js` as the canonical example of `grammar(base, overrides)`.

1. **Create the dialect directory**:
   ```
   <dialect>/
     grammar.js              # The dialect grammar file
     grammar/                # Dialect-specific rule files
     src/scanner.c           # Delegate to base scanner (see below)
     queries/highlights.scm  # Dialect-specific highlight additions (can be empty)
     test/corpus/            # Dialect-specific corpus tests
     tree-sitter.json        # Registers the dialect grammar + metadata
   ```

2. **Write `<dialect>/grammar.js`**:
   ```javascript
   import base from '../grammar.js'; // or '../spark/grammar.js' for Spark extensions
   import my_create_rules from './grammar/create.js';

   export default grammar(base, {
     name: 'my_dialect_sql',

     rules: {
       // Override dispatch lists — must re-enumerate ALL base alternatives plus new ones
       _create_statement: $ => seq(choice(
         $.create_table,
         $.create_view,
         // ... (copy from base)
         $.my_new_statement,  // ← dialect addition
       )),

       // Define new rules
       my_new_statement: $ => seq(
         $.keyword_my, $.keyword_statement, $.object_reference,
       ),

       ...my_create_rules,
     },
   });
   ```

3. **Create `<dialect>/src/scanner.c`** to delegate to the base external scanner:
   ```c
   #define tree_sitter_sql_external_scanner_create      tree_sitter_my_dialect_sql_external_scanner_create
   #define tree_sitter_sql_external_scanner_destroy     tree_sitter_my_dialect_sql_external_scanner_destroy
   #define tree_sitter_sql_external_scanner_scan        tree_sitter_my_dialect_sql_external_scanner_scan
   #define tree_sitter_sql_external_scanner_serialize   tree_sitter_my_dialect_sql_external_scanner_serialize
   #define tree_sitter_sql_external_scanner_deserialize tree_sitter_my_dialect_sql_external_scanner_deserialize
   #include "../../src/scanner.c"
   ```

4. **Create `<dialect>/tree-sitter.json`** with the grammar registration and metadata block.
   See `spark/tree-sitter.json` for the exact structure required.

5. **Add npm scripts** in `package.json`:
   ```json
   "generate:my_dialect": "node scripts/generate.js my_dialect",
   "test:corpus:my_dialect": "cd my_dialect && npx --yes --package=tree-sitter-cli@v0.26.3 -- tree-sitter test"
   ```

6. **Generate the parser**:
   ```bash
   npm run generate:my_dialect
   ```

7. **Add CI steps** in `.github/workflows/ci.yml`:
   ```yaml
   - run: cd my_dialect && tree-sitter generate grammar.js
   ```
   and a `parser-test-action` step for `grammar-path: my_dialect`.

---

## Dev workflow

```bash
# Generate all parsers (hash-cached — skips unchanged grammars)
npm run generate:all

# Generate individual parsers
npm run generate              # base SQL
npm run generate:spark        # Spark/Hive dialect
npm run generate:databricks   # Databricks dialect (depends on spark)
npm run generate:postgres     # PostgreSQL dialect
npm run generate:mysql        # MySQL/MariaDB dialect

# Force regeneration (bypasses cache)
npm run generate:force

# Run tests
npm run test:corpus           # base SQL corpus (440+ tests)
npm run test:corpus:spark     # Spark corpus
npm run test:corpus:databricks  # Databricks corpus (78 tests)
npm run test:corpus:postgres  # PostgreSQL corpus
npm run test:corpus:mysql     # MySQL corpus
npm run test:keywords         # Keyword/highlights sync check

# Debug a parse tree
npm run parse -- path/to/file.sql
```

---

## Corpus test format

```
================================================================================
Test case name
================================================================================

SQL INPUT HERE

--------------------------------------------------------------------------------

(program
  (statement
    (select
      (keyword_select)
      (select_expression ...))))
```

- Section separator: `=` repeated 80 times (name above, SQL below)
- Output separator: `-` repeated 80 times
- Run `npm run generate && npm run test:corpus` to validate

---

## Hash-based grammar caching

`scripts/generate.js` hashes all files in `grammar/` plus the grammar entry point. If the hash
matches `.grammar-cache/<name>.hash`, it skips `tree-sitter generate`. Use
`npm run generate:force` to bypass the cache. The `.grammar-cache/` directory is gitignored.

---

## Keyword sync requirement

Every keyword reachable in a parse tree (present in `src/node-types.json`) must appear as a
`@keyword` capture in `queries/highlights.scm`. The check runs automatically via
`npm run test:keywords`. If it fails:

1. Add the missing keyword: `(keyword_foo) @keyword` in `queries/highlights.scm`
2. Or if the keyword is intentionally not highlighted, re-examine whether it needs to exist

This check applies to the **base** grammar only. Dialect-specific keywords live in the dialect's
own `queries/highlights.scm` and are not checked by `test-keywords.sh`.

---

## Keyword architecture rule

**All keyword token definitions must live in the base `grammar/keywords.js`**, even if a keyword
is only used by one specific dialect. This is a hard constraint imposed by tree-sitter's keyword
extraction mechanism.

### Why this matters

tree-sitter performs *keyword extraction* during parser generation: it builds a `ts_lex_keywords`
function in the generated C parser that maps identifier tokens to keyword tokens. This function
is only populated from the **base** grammar. Keywords defined solely in a dialect
`grammar(base, overrides)` block are added to the parser's symbol table but NOT to the keyword
extraction function. As a result, they are never recognized as keywords in ambiguous positions
where both a keyword and an identifier are grammatically valid — the parser treats them as
plain identifiers instead, producing incorrect parse trees.

### Rule

- `grammar/keywords.js`: define **all** keywords (ANSI and dialect-specific) using `make_keyword()`
- Dialect grammars (`spark/grammar.js`, `postgres/grammar.js`, etc.): may **override** a keyword
  definition (e.g., to split `keyword_like` / `keyword_ilike`) but must NOT be the sole place
  where a keyword token is defined
- Base grammar **rules** should only reference ANSI SQL keywords in ANSI constructs — dialect
  keywords defined in `grammar/keywords.js` for extraction purposes may remain unused by any
  base grammar rule

### The keyword_like / keyword_ilike split

`keyword_ilike` (PostgreSQL-only `ILIKE` operator) is defined in base `grammar/keywords.js` for
keyword extraction, but is **not used** in any base grammar rule. Postgres overrides the
`binary_expression` (via its expression rules) to add `$.keyword_ilike` as a valid operator.
The base keeps only `keyword_like` in its `binary_expression` rule.

### Adding a new dialect-specific keyword

1. Add the definition in `grammar/keywords.js`:
   ```javascript
   keyword_myfoo: _ => make_keyword("myfoo"),
   ```
2. Use it only in the relevant dialect's grammar rules (no need to add it to any base rule)
3. Add it to the dialect's `queries/highlights.scm` if it should be highlighted
4. Do NOT duplicate the definition inside the dialect's `grammar.js` rules block
