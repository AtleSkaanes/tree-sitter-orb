[
    "create"
    "spell"
    "cantrip"
    "enchant"
    "summon"
] @keyword

[
  "artifact"
] @keyword.type


(line_comment) @comment
(block_comment) @comment

[
    "("
    ")"
    ;"["
    ;"]"
    "{"
    "}"
] @punctuation.bracket

[
;  "!"
;  "!="
;  "%"
;  "%="
;  "&"
;  "&&"
;  "&="
;  "*"
;  "*="
;  "+"
;  "+="
;  "-"
;  "-="
;  ".."
;  "..="
;  "..."
;  "/"
;  "/="
;  "<"
;  "<<"
;  "<<="
;  "<="
  "="
;  "=="
;  ">"
;  ">="
;  ">>"
;  ">>="
;  "?"
;  "@"
;  "^"
;  "^="
;  "|"
;  "|="
;  "||"
] @operator

[
  ","
;  "."
  ":"
  "::"
  ";"
  "->"
;  "=>"
] @punctuation.delimiter

[
    "self"
] @variable.builtin

(int_literal) @number
(float_literal) @number.float
(string_literal) @string
(char_literal) @character
(bool_literal) @boolean

(type) @type
(primitive_type) @type.builtin
(identifier) @variable
(mod_identifier) @module
(type_identifier) @type

(parameter_list_inner (identifier) @variable.parameter)
(artifact_member_list_inner (identifier) @variable.member)

(function_definition name: (identifier) @function)

