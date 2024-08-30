#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 19

enum ts_symbol_identifiers {
  anon_sym_summon = 1,
  sym_line_comment = 2,
  sym_block_comment = 3,
  anon_sym_rune = 4,
  anon_sym_r8 = 5,
  anon_sym_r16 = 6,
  anon_sym_r32 = 7,
  anon_sym_r64 = 8,
  anon_sym_r128 = 9,
  anon_sym_flow = 10,
  anon_sym_f32 = 11,
  anon_sym_f64 = 12,
  anon_sym_f128 = 13,
  anon_sym_glyph = 14,
  anon_sym_chant = 15,
  anon_sym_sigil = 16,
  sym_identifier = 17,
  sym_int_literal = 18,
  sym_float_literal = 19,
  sym_string_literal = 20,
  sym_char_literal = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_COLON_COLON = 24,
  anon_sym_create = 25,
  anon_sym_spell = 26,
  anon_sym_cantrip = 27,
  anon_sym_LPAREN = 28,
  anon_sym_self = 29,
  anon_sym_COMMA = 30,
  anon_sym_RPAREN = 31,
  anon_sym_COLON = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_DASH_GT = 35,
  anon_sym_artifact = 36,
  anon_sym_EQ = 37,
  anon_sym_enchant = 38,
  anon_sym_SEMI = 39,
  sym_source_file = 40,
  sym_primitive_type = 41,
  sym_type_identifier = 42,
  sym_mod_identifier = 43,
  sym_type = 44,
  sym_bool_literal = 45,
  sym_literal = 46,
  sym_path = 47,
  sym__definition = 48,
  sym_create_statement = 49,
  sym_function_definition = 50,
  sym_parameter_list = 51,
  sym_parameter_list_inner = 52,
  sym_block = 53,
  sym_ret_type = 54,
  sym_artifact_definition = 55,
  sym_artifact_member_list = 56,
  sym_artifact_member_list_inner = 57,
  sym_variable_definition = 58,
  sym_enchant_statement = 59,
  sym_statement = 60,
  sym_expression = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_source_file_repeat2 = 63,
  aux_sym_path_repeat1 = 64,
  aux_sym_path_repeat2 = 65,
  aux_sym_parameter_list_repeat1 = 66,
  aux_sym_parameter_list_repeat2 = 67,
  aux_sym_block_repeat1 = 68,
  aux_sym_artifact_member_list_repeat1 = 69,
  aux_sym_artifact_member_list_repeat2 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_summon] = "summon",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [anon_sym_rune] = "rune",
  [anon_sym_r8] = "r8",
  [anon_sym_r16] = "r16",
  [anon_sym_r32] = "r32",
  [anon_sym_r64] = "r64",
  [anon_sym_r128] = "r128",
  [anon_sym_flow] = "flow",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_f128] = "f128",
  [anon_sym_glyph] = "glyph",
  [anon_sym_chant] = "chant",
  [anon_sym_sigil] = "sigil",
  [sym_identifier] = "identifier",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_create] = "create",
  [anon_sym_spell] = "spell",
  [anon_sym_cantrip] = "cantrip",
  [anon_sym_LPAREN] = "(",
  [anon_sym_self] = "self",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_artifact] = "artifact",
  [anon_sym_EQ] = "=",
  [anon_sym_enchant] = "enchant",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym_primitive_type] = "primitive_type",
  [sym_type_identifier] = "type_identifier",
  [sym_mod_identifier] = "mod_identifier",
  [sym_type] = "type",
  [sym_bool_literal] = "bool_literal",
  [sym_literal] = "literal",
  [sym_path] = "path",
  [sym__definition] = "_definition",
  [sym_create_statement] = "create_statement",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_list_inner] = "parameter_list_inner",
  [sym_block] = "block",
  [sym_ret_type] = "ret_type",
  [sym_artifact_definition] = "artifact_definition",
  [sym_artifact_member_list] = "artifact_member_list",
  [sym_artifact_member_list_inner] = "artifact_member_list_inner",
  [sym_variable_definition] = "variable_definition",
  [sym_enchant_statement] = "enchant_statement",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_path_repeat2] = "path_repeat2",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_parameter_list_repeat2] = "parameter_list_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_artifact_member_list_repeat1] = "artifact_member_list_repeat1",
  [aux_sym_artifact_member_list_repeat2] = "artifact_member_list_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_summon] = anon_sym_summon,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_rune] = anon_sym_rune,
  [anon_sym_r8] = anon_sym_r8,
  [anon_sym_r16] = anon_sym_r16,
  [anon_sym_r32] = anon_sym_r32,
  [anon_sym_r64] = anon_sym_r64,
  [anon_sym_r128] = anon_sym_r128,
  [anon_sym_flow] = anon_sym_flow,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_f128] = anon_sym_f128,
  [anon_sym_glyph] = anon_sym_glyph,
  [anon_sym_chant] = anon_sym_chant,
  [anon_sym_sigil] = anon_sym_sigil,
  [sym_identifier] = sym_identifier,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_char_literal] = sym_char_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_spell] = anon_sym_spell,
  [anon_sym_cantrip] = anon_sym_cantrip,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_artifact] = anon_sym_artifact,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_enchant] = anon_sym_enchant,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym_primitive_type] = sym_primitive_type,
  [sym_type_identifier] = sym_type_identifier,
  [sym_mod_identifier] = sym_mod_identifier,
  [sym_type] = sym_type,
  [sym_bool_literal] = sym_bool_literal,
  [sym_literal] = sym_literal,
  [sym_path] = sym_path,
  [sym__definition] = sym__definition,
  [sym_create_statement] = sym_create_statement,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_list_inner] = sym_parameter_list_inner,
  [sym_block] = sym_block,
  [sym_ret_type] = sym_ret_type,
  [sym_artifact_definition] = sym_artifact_definition,
  [sym_artifact_member_list] = sym_artifact_member_list,
  [sym_artifact_member_list_inner] = sym_artifact_member_list_inner,
  [sym_variable_definition] = sym_variable_definition,
  [sym_enchant_statement] = sym_enchant_statement,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_path_repeat2] = aux_sym_path_repeat2,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_parameter_list_repeat2] = aux_sym_parameter_list_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_artifact_member_list_repeat1] = aux_sym_artifact_member_list_repeat1,
  [aux_sym_artifact_member_list_repeat2] = aux_sym_artifact_member_list_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_summon] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rune] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_glyph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sigil] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cantrip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_artifact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enchant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_create_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_ret_type] = {
    .visible = true,
    .named = true,
  },
  [sym_artifact_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_artifact_member_list] = {
    .visible = true,
    .named = true,
  },
  [sym_artifact_member_list_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enchant_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_artifact_member_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_artifact_member_list_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_member = 2,
  field_name = 3,
  field_param = 4,
  field_parameters = 5,
  field_return = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_member] = "member",
  [field_name] = "name",
  [field_param] = "param",
  [field_parameters] = "parameters",
  [field_return] = "return",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 3},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_type, 2},
  [3] =
    {field_body, 2},
    {field_name, 1},
  [5] =
    {field_name, 1},
  [6] =
    {field_param, 0},
  [7] =
    {field_name, 1},
    {field_parameters, 2},
  [9] =
    {field_param, 1, .inherited = true},
  [10] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [12] =
    {field_name, 1},
    {field_parameters, 2},
    {field_return, 3},
  [15] =
    {field_member, 1},
  [16] =
    {field_member, 1, .inherited = true},
  [17] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [19] =
    {field_param, 2, .inherited = true},
  [20] =
    {field_param, 1, .inherited = true},
    {field_param, 2, .inherited = true},
  [22] =
    {field_member, 1},
    {field_member, 2, .inherited = true},
  [24] =
    {field_param, 2, .inherited = true},
    {field_param, 3, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_mod_identifier,
  },
  [3] = {
    [0] = sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 39,
  [40] = 40,
  [41] = 37,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 12,
  [47] = 15,
  [48] = 16,
  [49] = 13,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 14,
  [58] = 19,
  [59] = 18,
  [60] = 22,
  [61] = 30,
  [62] = 62,
  [63] = 31,
  [64] = 64,
  [65] = 27,
  [66] = 66,
  [67] = 21,
  [68] = 32,
  [69] = 69,
  [70] = 70,
  [71] = 29,
  [72] = 26,
  [73] = 25,
  [74] = 20,
  [75] = 28,
  [76] = 24,
  [77] = 77,
  [78] = 17,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 82,
  [83] = 62,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 13,
  [93] = 93,
  [94] = 93,
  [95] = 16,
  [96] = 15,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 99,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 112,
  [121] = 117,
  [122] = 122,
  [123] = 119,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 113,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 130,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '"', 3,
        '\'', 4,
        '(', 162,
        ')', 165,
        ',', 164,
        '-', 22,
        '.', 9,
        '/', 7,
        '0', 141,
        '9', 142,
        ':', 167,
        ';', 175,
        '=', 172,
        'a', 124,
        'c', 78,
        'e', 113,
        'f', 67,
        'g', 105,
        'r', 69,
        's', 92,
        't', 126,
        '{', 168,
        '}', 169,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 3,
        '\'', 4,
        '.', 9,
        '/', 7,
        '0', 141,
        '9', 142,
        ':', 166,
        ';', 175,
        '=', 172,
        'c', 125,
        'f', 80,
        't', 126,
        '}', 169,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == '9') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 't') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == 's') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '}') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 's') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 's') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(140);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == '6') ADVANCE(140);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(140);
      END_STATE();
    case 20:
      if (lookahead == '8') ADVANCE(140);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(157);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 's') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 's') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 45:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(148);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(151);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '{') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_summon);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_summon);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_rune);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_r8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_r16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_r32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_r64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_r128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_flow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_f128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_glyph);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_chant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_sigil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '3') ADVANCE(71);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '3') ADVANCE(71);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '3') ADVANCE(72);
      if (lookahead == '6') ADVANCE(75);
      if (lookahead == '8') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(77);
      if (lookahead == '6') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_int_literal);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '1') ADVANCE(145);
      if (lookahead == '3') ADVANCE(144);
      if (lookahead == '6') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '2') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '2') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '4') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '8') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_create);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_spell);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_cantrip);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(157);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_artifact);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_enchant);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_enchant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 48},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 48},
  [66] = {.lex_state = 48},
  [67] = {.lex_state = 48},
  [68] = {.lex_state = 48},
  [69] = {.lex_state = 48},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 48},
  [75] = {.lex_state = 48},
  [76] = {.lex_state = 48},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 48},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 48},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 48},
  [135] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_summon] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(1),
    [anon_sym_rune] = ACTIONS(1),
    [anon_sym_r8] = ACTIONS(1),
    [anon_sym_r16] = ACTIONS(1),
    [anon_sym_r32] = ACTIONS(1),
    [anon_sym_r64] = ACTIONS(1),
    [anon_sym_r128] = ACTIONS(1),
    [anon_sym_flow] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_f128] = ACTIONS(1),
    [anon_sym_glyph] = ACTIONS(1),
    [anon_sym_chant] = ACTIONS(1),
    [anon_sym_sigil] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_spell] = ACTIONS(1),
    [anon_sym_cantrip] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_artifact] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_enchant] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(129),
    [sym__definition] = STATE(35),
    [sym_create_statement] = STATE(35),
    [sym_enchant_statement] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(43),
    [aux_sym_source_file_repeat2] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_summon] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(7),
    [sym_block_comment] = ACTIONS(7),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_enchant] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_int_literal,
    ACTIONS(23), 1,
      anon_sym_create,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_bool_literal,
    STATE(22), 1,
      sym_literal,
    ACTIONS(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(23), 2,
      sym_create_statement,
      sym_expression,
    ACTIONS(19), 3,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
  [40] = 11,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_int_literal,
    ACTIONS(23), 1,
      anon_sym_create,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_bool_literal,
    STATE(22), 1,
      sym_literal,
    ACTIONS(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(23), 2,
      sym_create_statement,
      sym_expression,
    ACTIONS(19), 3,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
  [80] = 11,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_int_literal,
    ACTIONS(23), 1,
      anon_sym_create,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_bool_literal,
    STATE(22), 1,
      sym_literal,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(23), 2,
      sym_create_statement,
      sym_expression,
    ACTIONS(19), 3,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
  [120] = 4,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(128), 1,
      sym_type,
    STATE(49), 2,
      sym_primitive_type,
      sym_type_identifier,
    ACTIONS(33), 13,
      anon_sym_rune,
      anon_sym_r8,
      anon_sym_r16,
      anon_sym_r32,
      anon_sym_r64,
      anon_sym_r128,
      anon_sym_flow,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_glyph,
      anon_sym_chant,
      anon_sym_sigil,
  [146] = 11,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_int_literal,
    ACTIONS(23), 1,
      anon_sym_create,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_bool_literal,
    STATE(22), 1,
      sym_literal,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(23), 2,
      sym_create_statement,
      sym_expression,
    ACTIONS(19), 3,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
  [186] = 4,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(14), 1,
      sym_type,
    STATE(13), 2,
      sym_primitive_type,
      sym_type_identifier,
    ACTIONS(41), 13,
      anon_sym_rune,
      anon_sym_r8,
      anon_sym_r16,
      anon_sym_r32,
      anon_sym_r64,
      anon_sym_r128,
      anon_sym_flow,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_glyph,
      anon_sym_chant,
      anon_sym_sigil,
  [212] = 4,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(100), 1,
      sym_type,
    STATE(92), 2,
      sym_primitive_type,
      sym_type_identifier,
    ACTIONS(45), 13,
      anon_sym_rune,
      anon_sym_r8,
      anon_sym_r16,
      anon_sym_r32,
      anon_sym_r64,
      anon_sym_r128,
      anon_sym_flow,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_glyph,
      anon_sym_chant,
      anon_sym_sigil,
  [238] = 4,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(57), 1,
      sym_type,
    STATE(49), 2,
      sym_primitive_type,
      sym_type_identifier,
    ACTIONS(33), 13,
      anon_sym_rune,
      anon_sym_r8,
      anon_sym_r16,
      anon_sym_r32,
      anon_sym_r64,
      anon_sym_r128,
      anon_sym_flow,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_glyph,
      anon_sym_chant,
      anon_sym_sigil,
  [264] = 4,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(102), 1,
      sym_type,
    STATE(92), 2,
      sym_primitive_type,
      sym_type_identifier,
    ACTIONS(45), 13,
      anon_sym_rune,
      anon_sym_r8,
      anon_sym_r16,
      anon_sym_r32,
      anon_sym_r64,
      anon_sym_r128,
      anon_sym_flow,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_glyph,
      anon_sym_chant,
      anon_sym_sigil,
  [290] = 11,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_int_literal,
    ACTIONS(64), 1,
      anon_sym_create,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_bool_literal,
    STATE(22), 1,
      sym_literal,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(23), 2,
      sym_create_statement,
      sym_expression,
    ACTIONS(58), 3,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
  [330] = 4,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(71), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(69), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [353] = 2,
    ACTIONS(79), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(77), 8,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [371] = 3,
    ACTIONS(85), 1,
      anon_sym_EQ,
    ACTIONS(83), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(81), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [391] = 2,
    ACTIONS(89), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(87), 8,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [409] = 2,
    ACTIONS(93), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(91), 8,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [427] = 2,
    ACTIONS(97), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(95), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [444] = 2,
    ACTIONS(101), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(99), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [461] = 2,
    ACTIONS(105), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(103), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [478] = 2,
    ACTIONS(109), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(107), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [495] = 2,
    ACTIONS(113), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(111), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [512] = 2,
    ACTIONS(117), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(115), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [529] = 3,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(121), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(119), 6,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
  [548] = 2,
    ACTIONS(127), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(125), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [565] = 2,
    ACTIONS(131), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(129), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [582] = 2,
    ACTIONS(135), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(133), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [599] = 2,
    ACTIONS(139), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(137), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [616] = 2,
    ACTIONS(143), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(141), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [633] = 2,
    ACTIONS(147), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(145), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [650] = 2,
    ACTIONS(151), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(149), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [667] = 2,
    ACTIONS(155), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(153), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [684] = 2,
    ACTIONS(159), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(157), 7,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [701] = 7,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      anon_sym_summon,
    ACTIONS(169), 1,
      anon_sym_create,
    ACTIONS(172), 1,
      anon_sym_enchant,
    STATE(43), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(166), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 4,
      sym__definition,
      sym_create_statement,
      sym_enchant_statement,
      aux_sym_source_file_repeat2,
  [727] = 2,
    ACTIONS(177), 5,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_create,
    ACTIONS(175), 6,
      sym_line_comment,
      sym_block_comment,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
      anon_sym_RBRACE,
  [743] = 7,
    ACTIONS(5), 1,
      anon_sym_summon,
    ACTIONS(9), 1,
      anon_sym_create,
    ACTIONS(11), 1,
      anon_sym_enchant,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(181), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 4,
      sym__definition,
      sym_create_statement,
      sym_enchant_statement,
      aux_sym_source_file_repeat2,
  [769] = 7,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_int_literal,
    STATE(58), 1,
      sym_bool_literal,
    STATE(60), 1,
      sym_literal,
    STATE(72), 1,
      sym_expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 3,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
  [794] = 7,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_int_literal,
    STATE(19), 1,
      sym_bool_literal,
    STATE(22), 1,
      sym_literal,
    STATE(31), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 3,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
  [819] = 7,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_int_literal,
    STATE(19), 1,
      sym_bool_literal,
    STATE(22), 1,
      sym_literal,
    STATE(26), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 3,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
  [844] = 6,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_COLON_COLON,
    STATE(50), 1,
      aux_sym_path_repeat2,
    ACTIONS(193), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(45), 2,
      sym_mod_identifier,
      aux_sym_path_repeat1,
    ACTIONS(191), 3,
      anon_sym_summon,
      anon_sym_create,
      anon_sym_enchant,
  [867] = 6,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_COLON_COLON,
    STATE(55), 1,
      aux_sym_path_repeat2,
    ACTIONS(201), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(39), 2,
      sym_mod_identifier,
      aux_sym_path_repeat1,
    ACTIONS(199), 3,
      anon_sym_summon,
      anon_sym_create,
      anon_sym_enchant,
  [890] = 7,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_int_literal,
    STATE(58), 1,
      sym_bool_literal,
    STATE(60), 1,
      sym_literal,
    STATE(63), 1,
      sym_expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 3,
      sym_float_literal,
      sym_string_literal,
      sym_char_literal,
  [915] = 4,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(44), 2,
      sym_mod_identifier,
      aux_sym_path_repeat1,
    ACTIONS(203), 3,
      anon_sym_summon,
      anon_sym_create,
      anon_sym_enchant,
    ACTIONS(205), 3,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COLON_COLON,
  [933] = 6,
    ACTIONS(5), 1,
      anon_sym_summon,
    ACTIONS(9), 1,
      anon_sym_create,
    ACTIONS(11), 1,
      anon_sym_enchant,
    STATE(69), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(207), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(70), 3,
      sym__definition,
      sym_create_statement,
      sym_enchant_statement,
  [955] = 4,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(45), 2,
      sym_mod_identifier,
      aux_sym_path_repeat1,
    ACTIONS(209), 3,
      anon_sym_summon,
      anon_sym_create,
      anon_sym_enchant,
    ACTIONS(211), 3,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COLON_COLON,
  [973] = 4,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(45), 2,
      sym_mod_identifier,
      aux_sym_path_repeat1,
    ACTIONS(213), 3,
      anon_sym_summon,
      anon_sym_create,
      anon_sym_enchant,
    ACTIONS(215), 3,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COLON_COLON,
  [991] = 3,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1006] = 1,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_enchant,
  [1017] = 1,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_enchant,
  [1028] = 1,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_enchant,
  [1039] = 3,
    ACTIONS(197), 1,
      anon_sym_COLON_COLON,
    STATE(56), 1,
      aux_sym_path_repeat2,
    ACTIONS(224), 5,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1053] = 4,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_artifact,
    ACTIONS(228), 2,
      anon_sym_spell,
      anon_sym_cantrip,
    STATE(75), 3,
      sym_function_definition,
      sym_artifact_definition,
      sym_variable_definition,
  [1069] = 2,
    ACTIONS(234), 3,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COLON_COLON,
    ACTIONS(232), 4,
      anon_sym_summon,
      sym_identifier,
      anon_sym_create,
      anon_sym_enchant,
  [1081] = 4,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_artifact,
    ACTIONS(238), 2,
      anon_sym_spell,
      anon_sym_cantrip,
    STATE(28), 3,
      sym_function_definition,
      sym_artifact_definition,
      sym_variable_definition,
  [1097] = 7,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_self,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_parameter_list_repeat1,
    STATE(98), 1,
      sym_parameter_list_inner,
    STATE(104), 1,
      aux_sym_parameter_list_repeat2,
  [1119] = 3,
    ACTIONS(197), 1,
      anon_sym_COLON_COLON,
    STATE(56), 1,
      aux_sym_path_repeat2,
    ACTIONS(193), 5,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1133] = 3,
    ACTIONS(250), 1,
      anon_sym_COLON_COLON,
    STATE(56), 1,
      aux_sym_path_repeat2,
    ACTIONS(211), 5,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1147] = 2,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1159] = 1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1168] = 1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1177] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1186] = 1,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1195] = 5,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_artifact_member_list_repeat2,
    STATE(91), 2,
      sym_artifact_member_list_inner,
      aux_sym_artifact_member_list_repeat1,
  [1212] = 1,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1221] = 6,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(98), 1,
      sym_parameter_list_inner,
    STATE(110), 1,
      aux_sym_parameter_list_repeat2,
  [1240] = 1,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1249] = 1,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1258] = 1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1267] = 1,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1276] = 3,
    ACTIONS(267), 1,
      anon_sym_summon,
    STATE(69), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(270), 4,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1289] = 1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1298] = 1,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1307] = 1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1316] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1325] = 1,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1334] = 1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1343] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1352] = 6,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(97), 1,
      aux_sym_parameter_list_repeat2,
    STATE(98), 1,
      sym_parameter_list_inner,
  [1371] = 1,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1380] = 5,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_artifact_member_list_repeat2,
    STATE(62), 2,
      sym_artifact_member_list_inner,
      aux_sym_artifact_member_list_repeat1,
  [1397] = 5,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_artifact_member_list_repeat2,
    STATE(83), 2,
      sym_artifact_member_list_inner,
      aux_sym_artifact_member_list_repeat1,
  [1414] = 5,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_self,
    STATE(88), 1,
      aux_sym_parameter_list_repeat1,
    STATE(98), 1,
      sym_parameter_list_inner,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1431] = 6,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_parameter_list_repeat1,
    STATE(98), 1,
      sym_parameter_list_inner,
    STATE(108), 1,
      aux_sym_parameter_list_repeat2,
  [1450] = 5,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_artifact_member_list_repeat2,
    STATE(91), 2,
      sym_artifact_member_list_inner,
      aux_sym_artifact_member_list_repeat1,
  [1467] = 4,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(98), 1,
      sym_parameter_list_inner,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1481] = 3,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(91), 2,
      sym_artifact_member_list_inner,
      aux_sym_artifact_member_list_repeat1,
  [1493] = 3,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(85), 2,
      sym_artifact_member_list_inner,
      aux_sym_artifact_member_list_repeat1,
  [1505] = 4,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_parameter_list_repeat1,
    STATE(98), 1,
      sym_parameter_list_inner,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1519] = 4,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(98), 1,
      sym_parameter_list_inner,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1533] = 4,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(98), 1,
      sym_parameter_list_inner,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1547] = 1,
    ACTIONS(270), 5,
      anon_sym_summon,
      sym_line_comment,
      sym_block_comment,
      anon_sym_create,
      anon_sym_enchant,
  [1555] = 3,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(91), 2,
      sym_artifact_member_list_inner,
      aux_sym_artifact_member_list_repeat1,
  [1567] = 1,
    ACTIONS(77), 4,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1574] = 4,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 1,
      anon_sym_DASH_GT,
    STATE(29), 1,
      sym_block,
    STATE(127), 1,
      sym_ret_type,
  [1587] = 4,
    ACTIONS(308), 1,
      anon_sym_DASH_GT,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
    STATE(113), 1,
      sym_ret_type,
  [1600] = 1,
    ACTIONS(91), 4,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1607] = 1,
    ACTIONS(87), 4,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1614] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_parameter_list_repeat2,
  [1624] = 1,
    ACTIONS(314), 3,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1630] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_artifact_member_list_repeat2,
  [1640] = 1,
    ACTIONS(318), 3,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1646] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_parameter_list_repeat2,
  [1656] = 1,
    ACTIONS(325), 3,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1662] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_artifact_member_list_repeat2,
  [1672] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_parameter_list_repeat2,
  [1682] = 3,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_artifact_member_list_repeat2,
  [1692] = 3,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(40), 1,
      sym_mod_identifier,
    STATE(90), 1,
      sym_path,
  [1702] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_artifact_member_list_repeat2,
  [1712] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_parameter_list_repeat2,
  [1722] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_artifact_member_list_repeat2,
  [1732] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_parameter_list_repeat2,
  [1742] = 1,
    ACTIONS(346), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1747] = 2,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_artifact_member_list,
  [1754] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
  [1761] = 1,
    ACTIONS(350), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1766] = 1,
    ACTIONS(352), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1771] = 1,
    ACTIONS(354), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1776] = 2,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_parameter_list,
  [1783] = 1,
    ACTIONS(358), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1788] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(112), 1,
      sym_type_identifier,
  [1795] = 2,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_artifact_member_list,
  [1802] = 2,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_parameter_list,
  [1809] = 1,
    ACTIONS(352), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1814] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(120), 1,
      sym_type_identifier,
  [1821] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(132), 1,
      sym_type_identifier,
  [1828] = 1,
    ACTIONS(358), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1833] = 1,
    ACTIONS(364), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1838] = 2,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [1845] = 1,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
  [1849] = 1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [1853] = 1,
    ACTIONS(370), 1,
      sym_identifier,
  [1857] = 1,
    ACTIONS(372), 1,
      anon_sym_COLON,
  [1861] = 1,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
  [1865] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
  [1869] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [1873] = 1,
    ACTIONS(380), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 212,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 353,
  [SMALL_STATE(14)] = 371,
  [SMALL_STATE(15)] = 391,
  [SMALL_STATE(16)] = 409,
  [SMALL_STATE(17)] = 427,
  [SMALL_STATE(18)] = 444,
  [SMALL_STATE(19)] = 461,
  [SMALL_STATE(20)] = 478,
  [SMALL_STATE(21)] = 495,
  [SMALL_STATE(22)] = 512,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 548,
  [SMALL_STATE(25)] = 565,
  [SMALL_STATE(26)] = 582,
  [SMALL_STATE(27)] = 599,
  [SMALL_STATE(28)] = 616,
  [SMALL_STATE(29)] = 633,
  [SMALL_STATE(30)] = 650,
  [SMALL_STATE(31)] = 667,
  [SMALL_STATE(32)] = 684,
  [SMALL_STATE(33)] = 701,
  [SMALL_STATE(34)] = 727,
  [SMALL_STATE(35)] = 743,
  [SMALL_STATE(36)] = 769,
  [SMALL_STATE(37)] = 794,
  [SMALL_STATE(38)] = 819,
  [SMALL_STATE(39)] = 844,
  [SMALL_STATE(40)] = 867,
  [SMALL_STATE(41)] = 890,
  [SMALL_STATE(42)] = 915,
  [SMALL_STATE(43)] = 933,
  [SMALL_STATE(44)] = 955,
  [SMALL_STATE(45)] = 973,
  [SMALL_STATE(46)] = 991,
  [SMALL_STATE(47)] = 1006,
  [SMALL_STATE(48)] = 1017,
  [SMALL_STATE(49)] = 1028,
  [SMALL_STATE(50)] = 1039,
  [SMALL_STATE(51)] = 1053,
  [SMALL_STATE(52)] = 1069,
  [SMALL_STATE(53)] = 1081,
  [SMALL_STATE(54)] = 1097,
  [SMALL_STATE(55)] = 1119,
  [SMALL_STATE(56)] = 1133,
  [SMALL_STATE(57)] = 1147,
  [SMALL_STATE(58)] = 1159,
  [SMALL_STATE(59)] = 1168,
  [SMALL_STATE(60)] = 1177,
  [SMALL_STATE(61)] = 1186,
  [SMALL_STATE(62)] = 1195,
  [SMALL_STATE(63)] = 1212,
  [SMALL_STATE(64)] = 1221,
  [SMALL_STATE(65)] = 1240,
  [SMALL_STATE(66)] = 1249,
  [SMALL_STATE(67)] = 1258,
  [SMALL_STATE(68)] = 1267,
  [SMALL_STATE(69)] = 1276,
  [SMALL_STATE(70)] = 1289,
  [SMALL_STATE(71)] = 1298,
  [SMALL_STATE(72)] = 1307,
  [SMALL_STATE(73)] = 1316,
  [SMALL_STATE(74)] = 1325,
  [SMALL_STATE(75)] = 1334,
  [SMALL_STATE(76)] = 1343,
  [SMALL_STATE(77)] = 1352,
  [SMALL_STATE(78)] = 1371,
  [SMALL_STATE(79)] = 1380,
  [SMALL_STATE(80)] = 1397,
  [SMALL_STATE(81)] = 1414,
  [SMALL_STATE(82)] = 1431,
  [SMALL_STATE(83)] = 1450,
  [SMALL_STATE(84)] = 1467,
  [SMALL_STATE(85)] = 1481,
  [SMALL_STATE(86)] = 1493,
  [SMALL_STATE(87)] = 1505,
  [SMALL_STATE(88)] = 1519,
  [SMALL_STATE(89)] = 1533,
  [SMALL_STATE(90)] = 1547,
  [SMALL_STATE(91)] = 1555,
  [SMALL_STATE(92)] = 1567,
  [SMALL_STATE(93)] = 1574,
  [SMALL_STATE(94)] = 1587,
  [SMALL_STATE(95)] = 1600,
  [SMALL_STATE(96)] = 1607,
  [SMALL_STATE(97)] = 1614,
  [SMALL_STATE(98)] = 1624,
  [SMALL_STATE(99)] = 1630,
  [SMALL_STATE(100)] = 1640,
  [SMALL_STATE(101)] = 1646,
  [SMALL_STATE(102)] = 1656,
  [SMALL_STATE(103)] = 1662,
  [SMALL_STATE(104)] = 1672,
  [SMALL_STATE(105)] = 1682,
  [SMALL_STATE(106)] = 1692,
  [SMALL_STATE(107)] = 1702,
  [SMALL_STATE(108)] = 1712,
  [SMALL_STATE(109)] = 1722,
  [SMALL_STATE(110)] = 1732,
  [SMALL_STATE(111)] = 1742,
  [SMALL_STATE(112)] = 1747,
  [SMALL_STATE(113)] = 1754,
  [SMALL_STATE(114)] = 1761,
  [SMALL_STATE(115)] = 1766,
  [SMALL_STATE(116)] = 1771,
  [SMALL_STATE(117)] = 1776,
  [SMALL_STATE(118)] = 1783,
  [SMALL_STATE(119)] = 1788,
  [SMALL_STATE(120)] = 1795,
  [SMALL_STATE(121)] = 1802,
  [SMALL_STATE(122)] = 1809,
  [SMALL_STATE(123)] = 1814,
  [SMALL_STATE(124)] = 1821,
  [SMALL_STATE(125)] = 1828,
  [SMALL_STATE(126)] = 1833,
  [SMALL_STATE(127)] = 1838,
  [SMALL_STATE(128)] = 1845,
  [SMALL_STATE(129)] = 1849,
  [SMALL_STATE(130)] = 1853,
  [SMALL_STATE(131)] = 1857,
  [SMALL_STATE(132)] = 1861,
  [SMALL_STATE(133)] = 1865,
  [SMALL_STATE(134)] = 1869,
  [SMALL_STATE(135)] = 1873,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 1, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 1, 0, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1, 0, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artifact_member_list, 4, 0, 17),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_artifact_member_list, 4, 0, 17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 11),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 11),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artifact_member_list, 3, 0, 13),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_artifact_member_list, 3, 0, 13),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artifact_member_list, 3, 0, 12),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_artifact_member_list, 3, 0, 12),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artifact_definition, 3, 0, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_artifact_definition, 3, 0, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_statement, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 8),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 8),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artifact_member_list, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_artifact_member_list, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(106),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat2, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat2, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_identifier, 1, 0, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_identifier, 1, 0, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat2, 2, 0, 0), SHIFT_REPEAT(42),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enchant_statement, 4, 0, 6),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat2, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 10), SHIFT_REPEAT(134),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 10),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_artifact_member_list_repeat2, 2, 0, 12),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_artifact_member_list_repeat2, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat2, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat2, 2, 0, 9),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat2, 3, 0, 15),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_artifact_member_list_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_artifact_member_list_repeat1, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1, 0, 7),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list_inner, 3, 0, 0),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat2, 2, 0, 10), SHIFT_REPEAT(81),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat2, 2, 0, 10),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artifact_member_list_inner, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_artifact_member_list_repeat2, 2, 0, 14), SHIFT_REPEAT(86),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_artifact_member_list_repeat2, 2, 0, 14),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, 0, 18),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 15),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 9),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 16),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret_type, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_orb(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
