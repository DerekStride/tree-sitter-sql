# Contributing to tree-sitter-sql

## Getting Started

Clone the repository and run the setup script.

```
git clone https://github.com/DerekStride/tree-sitter-sql.git
npm install
```

### Testing

The Makefile will ensure the parser is generated & compiled when testing changes during development. Use `make test` to
run the testsuite.

Before you commit it's a good idea to run `make format` to make sure the tests are will formatted & correct. Be careful
to make sure there are no unintended updates to the tests.

### Commit Messages

Follow the [conventional commits](https://www.conventionalcommits.org/en/v1.0.0/) guidelines to make reviews easier and
to make the git logs more valuable. The general structure of a commit message is:

```
<type>([optional scope]): <description>

[optional body]

[optional footer(s)]
```

- Prefix the commit subject with one of these
  [types](https://github.com/commitizen/conventional-commit-types/blob/master/index.json):
    - `feat`, `build`, `fix`, `docs`, `refactor`, `test`
- Append optional scope to type such as `(ast)`.
- Breaking changes to the syntax tree must be indicated by
    1. "!" after the type/scope, and
    2. a "BREAKING CHANGE" footer describing the change.
       Example:
       ```
       refactor(ast)!: remove predicate and merge into binary_expression

       BREAKING CHANGE: The `(predicate)` node has been replaced with `(binary_expression)`
       ```

### Github Pages

To run the Github pages server, execute the following commands and open [localhost:4000](http://localhost:4000).

```
$ cd docs/
$ bundle install
$ bundle exec jekyll serve
```

## Pushing a new Version

Create a new PR to bump the version number in `package.json`. Bump the major version if the commit log since the last
publish includes breaking changes to the AST.

```diff
{
  "name": "@derekstride/tree-sitter-sql",
+   "version": "0.1.1",
-   "version": "0.1.0",
  ...
```

Once that PR is merged, tag the latest commit with the format `v[VERSION]` and push the new tag.

```
git tag v0.1.1
git push --tags
```

Create a new Release [on Github](https://github.com/DerekStride/tree-sitter-sql/releases). When the release is
published Github Actions will publish the new version to npm.
