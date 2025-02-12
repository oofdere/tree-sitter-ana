;; Define captures for syntax highlighting

;; Program and scope
(program) @scope
(scope) @scope

;; Namespace identifiers
(nsid) @namespace
(id) @variable

;; Blocks and records
(block) @block
(record) @block

;; Parameters
(param) @parameter
(param name: (id) @property)
(type) @type

;; References
(ref) @function
(id) @variable

;; Data types
(string) @string
(integer) @number
(array) @type
(slice) @operator

;; Nested structures
(params) @punctuation.bracket