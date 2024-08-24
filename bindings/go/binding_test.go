package tree_sitter_vhs_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-vhs"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_vhs.Language())
	if language == nil {
		t.Errorf("Error loading Vhs grammar")
	}
}
