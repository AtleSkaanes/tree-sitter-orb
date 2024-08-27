/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: 'YOUR_LANGUAGE_NAME',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.function_definition
            // TODO: other kinds of definitions
        ),

        function_definition: $ => seq(
            choice('create spell', 'create cantrip'),
            $.identifier,
            '(',
            optional($.parameter_list),
            ')',
            optional($.ret_type),
            $.block,
        ),

        ret_type: $ => seq(
            '-> ',
            $._type
        ),

        identifier: $ => /[a-z_][a-z0-9_]*/,

        _type: $ => /[A-Z][a-zA-Z0-9_]*/,

        parameter_list: $ => seq(
            $.identifier,
            ': ',
            $._type,
        ),

        block: $ => seq(
            '{',
            '}'
        ),


    }
});
