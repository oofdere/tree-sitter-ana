/**
 * @file atproto lexicon dsl
 * @author Tibet Tornaci <oofdere@hey.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "ana",

  word: $ => $.id,

  rules: {
    program: $ => repeat($.scope),

    array: $ => seq("[", optional($.slice), "]"),
    
    nsid: $ => seq($.id, repeat1(seq(".", $.id))),

    integer: $ => /\d+/,

    slice: $ => seq(
      optional(field("min", $.integer)),
      "..",
      optional(field("max", $.integer))
    ),

    block: $ => seq("{", choice(repeat($.param), repeat(choice($.scope, $.record))), "}"),
    scope: $ => seq(field("id", choice($.id, $.nsid)), $.block),
    record: $ => seq("record", $.scope),
    
    params: $ => seq("(", repeat($.param), ")"),

    param: $ => seq(
      choice(
        $.ref,
        seq(
          choice($.id, $.optional), 
          choice(":", "="), 
          choice($.ref, $.type, $.slice, $.string), 
        )
      ),
      optional(field("array", $.array)),
      optional(choice(",", ";")),
    ),

    type: $ => seq(
      $.id, 
      optional($.params)
    ),

    optional: $ => seq($.id, "?"),

    ref: $ => seq("#", $.id),

    string: $ => /"(?:[^"\\]|\\.)*"/,

    id: $ => /[a-zA-Z_$][a-zA-Z0-9_$]*/
  }
});
