===
type
===
@@[ Type ]@@
---
(program (type (id)))

===
type with parantheses but no params
===
@@[ Type() ]@@
---
(program (type (id)))

===
type with params
===
@@[ Type(foo="bar") ]@@
---
(program (type (id) (param (id) (string))))
