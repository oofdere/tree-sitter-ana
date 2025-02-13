/**
 * @file atproto lexicon dsl
 * @author Tibet Tornaci <oofdere@hey.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "ana",

  word: ($) => $.id,

  rules: {
    program: ($) => repeat1($.namespace),

    namespace: ($) =>
      seq(
        "@",
        field("name", $.nsid),
        "{",
        field("body", repeat(choice($.record, $.object))),
        "}"
      ),

    object: ($) =>
      seq(
        field("name", $.id),
        "{",
        field(
          "body",
          optional($.params)
        ),
        "}"
      ),
    record: $ => seq("record", $.object),

    params: ($) =>
      repeat1(seq(choice($.param, $.optional, $.ref), optional(choice(";", ",")))),
    param: ($) => seq(field("name", $.id), ":", field("type", $._type)),
    optional: ($) => seq(field("name", $.id), "?:", field("type", $._type)),
    
    _type: $ => choice($.ref, $.type, $.array),
    type: $ => seq($.id),

    array: $ => seq($.type, "[", optional($._slice), "]"),

    _slice: $ => seq(
      optional(field("min", $.integer)),
      "..",
      optional(field("max", $.integer))
    ),
    integer: $ => /\d+/,

    id: () => /[a-zA-Z_$][a-zA-Z0-9_$]*/,
    nsid: ($) => seq($.id, repeat1(seq(".", $.id))),

    ref: ($) => seq("#", field("id", choice($.id, $.nsid))),

    string: () => seq('"', field("contents", /(?:[^"\\]|\\.)*/), '"'),
  },
});
