test: build
	tree-sitter parse test/corpus/verbatim.zml

build: grammar.js
	tree-sitter generate
