/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

let NumericTypeList = [
    // Runes / Integers
    'rune',
    'r8',
    'r16',
    'r32',
    'r64',
    'r128',

    // Flows / Floats
    'flow',
    'f32',
    'f64',
    'f128',
]

let PrimitiveTypeList = [
    ...NumericTypeList,
    // Char
    'glyph',
    // String
    'chant',
    // bool
    'sigil',
];

module.exports = grammar({
    name: 'orb',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat(seq(repeat(seq('summon', $.path)), $._definition)),

        line_comment: _ => /\/\/.*/,
        block_comment: _ => /\/\*[\r\n\w\s]*\*\//,

        primitive_type: _ => choice(...PrimitiveTypeList),

        identifier: _ => /[a-z_A-Z][a-zA-Z0-9_]*/,
        type_identifier: $ => alias($.identifier, $.type_identifier),
        mod_identifier: $ => alias($.identifier, $.mod_identifier),

        type: $ => choice($.primitive_type, $.type_identifier),

        int_literal: _ => token(seq(choice(
            /[0-9][0-9_]*/,
            /0x[0-9a-fA-F_]+/,
            /0b[01_]+/,
        ), optional(choice(...NumericTypeList)))),

        float_literal: _ => token(choice(
            /\.[0-9][0-9_]*/,
            /[0.9][0-9_]*\.[0-9_]/,
        )),

        string_literal: _ => /".*"/,

        char_literal: _ => /'.*'/,

        bool_literal: _ => choice('true', 'false'),

        literal: $ => choice($.int_literal, $.float_literal, $.char_literal, $.bool_literal, $.string_literal),

        path: $ => seq($.mod_identifier, sepBy('::', repeat($.mod_identifier))),

        _definition: $ => choice(
            $.create_statement,
            $.enchant_statement,
            $.line_comment,
            $.block_comment,
        ),

        create_statement: $ => seq('create', choice(
            $.function_definition, $.artifact_definition, $.variable_definition
        )),

        function_definition: $ => seq(
            choice('spell', 'cantrip'),
            field('name', $.identifier),
            field('parameters', $.parameter_list),
            optional(field('return', $.ret_type)),
            $.block,
        ),

        parameter_list: $ => seq(
            '(',
            sepBy(',', seq(optional('self'), repeat(field('param', $.parameter_list_inner)))),
            ')',
        ),

        parameter_list_inner: $ => seq(
            $.identifier,
            ':',
            $.type,
        ),

        block: $ => seq(
            '{',
            repeat(choice($.statement, $.line_comment, $.block_comment)),
            '}'
        ),

        ret_type: $ => seq(
            '->',
            $.type
        ),

        artifact_definition: $ => seq(
            'artifact',
            field('name', $.type_identifier),
            field('body', $.artifact_member_list),
        ),

        artifact_member_list: $ => seq(
            '{',
            sepBy(',', seq(field('member', repeat($.artifact_member_list_inner)))),
            '}'
        ),


        artifact_member_list_inner: $ => seq($.identifier, ':', $.type),

        variable_definition: $ => seq(field('name', $.identifier), optional(seq(':', field('type', $.type))), optional(seq('=', $.expression))),

        enchant_statement: $ => seq(
            'enchant', field('name', $.type_identifier), '{', '}'
        ),

        statement: $ => seq(
            choice(
                // '', // Empty statement. E.g. ";"
                $.create_statement,
                $.expression,
            ),
            optional(';')
        ),

        expression: $ => choice($.literal, $.identifier)

    }
});

/**
* Creates a rule to match one or more of the rules separated by the separator.
*
* @param {RuleOrLiteral} sep - The separator to use.
* @param {RuleOrLiteral} rule
*
* @return {SeqRule}
*
*/
function sepBy1(sep, rule) {
    return seq(rule, repeat(seq(sep, rule)));
}


/**
 * Creates a rule to optionally match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function sepBy(sep, rule) {
    return optional(sepBy1(sep, rule));
}
