package tree_sitter_hotkey_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-hotkey"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hotkey.Language())
	if language == nil {
		t.Errorf("Error loading Hotkey grammar")
	}
}
