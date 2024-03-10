test: build
	tree-sitter test

build: grammar.js
	tree-sitter generate
