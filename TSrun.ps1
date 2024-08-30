tree-sitter generate

tree-sitter build
tree-sitter build -o orb.dll
tree-sitter build -o orb.so

$query_path = 'C:\Users\atles\AppData\Local\nvim-data\lazy\nvim-treesitter\queries\orb'

cp ./queries/* $query_path

