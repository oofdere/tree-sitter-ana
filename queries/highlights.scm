; Namespaces
(namespace) @namespace

; Types
(type
  name: (id) @type)

; References
(ref) @type

; Properties
(property
  name: (id) @property)
(optional
  name: (id) @property)
(object name: (id) @variable)

; Functions
(function
  name :(id) @function)

; Keywords
"record" @keyword.type
"get" @keyword.function
"post" @keyword.function

; Operators
"->" @operator
"|" @operator

; Punctuation
":" @punctuation.delimiter
"?:" @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter
"{" @punctuation.bracket
"}" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

; Literals
(integer) @number
(string) @string

; Parameters
(param
  name: (id) @parameter)

; Comments (if you decide to add them to your grammar)
; (comment) @comment
