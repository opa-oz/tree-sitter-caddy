(comment) @comment @spell

[ 
  (value) 
  (env)
  (placeholder)
  (argv)
  (block_variable)
] @variable

(directive (keyword) @attribute)

(keyword) @keyword

(global_options (keyword) @constant)

(boolean) @boolean

[
  (auto)
] @variable.builtin

[
  (string_literal)
  (quoted_string_literal)
  (address)
] @string

[ 
  (matcher) 
  (route)
  (snippet_name)
] @string.special

[
  (numeric_literal)
  (time)
  (size)
  (ip_literal)
] @number

[
  "{"
  "}"
] @punctuation.bracket

