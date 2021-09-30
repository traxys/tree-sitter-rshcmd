[
"let"
"in"
] @keyword

"[" @punctuation.bracket
"]" @punctuation.bracket

[
  "=>"
  "&&"
  ">"
  ">>"
  "<"
  "|"
] @operator

(istr) @string
(str) @string
(int) @constant.builtin
