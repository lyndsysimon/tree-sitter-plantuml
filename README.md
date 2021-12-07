# PlantUML Treesitter Grammar

This is my attempt to learn more about
[treesitter](https://github.com/tree-sitter/tree-sitter) and
[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) by writing
a grammer for PlantUML source files.

## Development

`tree-sitter-cli` is included in the package's dev requirements. If
`tree-sitter` is not installed on your system, use
`./node_modules/.bin/tree-sitter` instead.

After making changes to `grammar.js`, run `tree-sitter generate` to create the
grammar itself.

To run the tests in `/corpus/`, run `tree-sitter test`.
