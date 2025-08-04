package tree_sitter_hdl_test

import (
	"testing"

	tree_sitter_hdl "github.com/quantonganh/tree-sitter-hdl/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hdl.Language())
	if language == nil {
		t.Errorf("Error loading HDL grammar")
	}
}
