package tree_sitter_hdl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_hdl "http://github.com/quantonganh/tree-sitter-hdl/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hdl.Language())
	if language == nil {
		t.Errorf("Error loading HDL grammar")
	}
}
