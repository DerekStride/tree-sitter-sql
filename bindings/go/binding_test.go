package tree_sitter_sql_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-sql"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_sql.Language())
	if language == nil {
		t.Errorf("Error loading Sql grammar")
	}
}
