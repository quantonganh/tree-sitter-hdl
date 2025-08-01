/**
 * @file A Tree-sitter grammar for parsing HDL (nand2tetris)
 * @author Quan Tong <quantonganh@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "hdl",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
