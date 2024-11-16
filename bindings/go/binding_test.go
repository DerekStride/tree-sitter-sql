package tree_sitter_sql_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_sql "git+github.com/derekstride/tree-sitter-sql.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_sql.Language())
	if language == nil {
		t.Errorf("Error loading Sql grammar")
	}
}
