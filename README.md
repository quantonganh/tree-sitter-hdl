# tree-sitter-hdl

A [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for HDL (Hardware Description Language), as used in the [nand2tetris](https://www.nand2tetris.org/) course.

This grammar enables syntax highlighting and language support for `.hdl` files in editors that support Tree-sitter, such as [Helix](https://helix-editor.com/).

## Usage in Helix

1. Add the following entries to your `languages.toml`:

```toml
[[language]]
name = "hdl"
scope = "source.hdl"
file-types = ["hdl"]

[[grammar]]
name = "hdl"
source = { git = "https://github.com/quantonganh/tree-sitter-hdl", rev="adcb20742ffecbffb2851dce83de37e6594f3ae8" }
```

2. Fetch and build the grammar:

```sh
hx --grammar fetch
hx --grammar build
```
Once completed, `.hdl` files will be highlighted and parsed using this grammar in Helix.
