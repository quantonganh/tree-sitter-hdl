/**
 * @file A Tree-sitter grammar for parsing HDL (nand2tetris)
 * @author Quan Tong <quantonganh@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "hdl",

    extras: $ => [
        /\s/,
        $.comment
    ],
    
    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => $.chip_definition,

        chip_definition: $ => seq(
            'CHIP',
            field('name', $.identifier),
            '{',
            field('header', $.chip_header),
            field('body', $.chip_body),
            '}'
        ),

        chip_header: $ => seq(
            $.in_section,
            $.out_section,
        ),

        in_section: $ => seq(
            'IN',
            commaSep1(field('input_pin_name', $.identifier)),
            ';'
        ),

        out_section: $ => seq(
            'OUT',
            commaSep1(field('output_pin_name', $.identifier)),
            ';'
        ),

        chip_body: $ => seq(
            'PARTS',
            ':',
            repeat($.part),
        ),

        part: $ => seq(
            field('chip_name', $.identifier),
            '(',
            optional(commaSep1($.connection)),
            ')',
            ';'
        ),

        connection: $ => seq(
            field('part_pin', $.identifier),
            '=',
            field('chip_pin', $.identifier)
        ),

        identifier_list: $ => seq(
            $.identifier,
            repeat(seq(',', $.identifier))
        ),

        identifier: _ => /[A-Za-z_][A-Za-z0-9_]*/,

        number: _ => /\d+/,
        
        comment: _ => token(choice(
            seq('//', /.*/),
            seq('/**', repeat(/[^*]|\*[^/]/), '*/')
        )),
    }
});

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)))
}
