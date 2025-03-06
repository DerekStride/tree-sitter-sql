package tree_sitter_sql_test

import (
	"testing"

	tree_sitter_sql "github.com/DerekStride/tree-sitter-sql/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_sql.Language())
	if language == nil {
		t.Errorf("Error loading Sql grammar")
	}
}
