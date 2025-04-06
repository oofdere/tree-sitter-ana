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
    program: ($) => repeat1(choice($.namespace, $._harness)),

    _harness: ($) =>
      prec(
        1,
        seq(
          "@@[",
          choice(
            $.object,
            $.record,
            $.function,
            $.get,
            $.post,
            $.properties,
            $.property,
            $.optional,
            $.type,
            $.array,
            $.union,
            $.param,
            $.ref,
            $.string,
          ),
          "]@@",
        ),
      ),

    namespace: ($) =>
      seq(
        "@",
        field("name", $.nsid),
        "{",
        field("body", repeat(choice($.record, $.object, $.get, $.post))),
        "}",
      ),

    object: ($) =>
      seq(field("name", $.id), "{", field("body", optional($.properties)), "}"),
    record: ($) => seq("record", $.object),

    function: ($) =>
      seq(
        field("name", $.id),
        "(",
        field("parameters", optional($.properties)),
        ")",
        "->",
        "{",
        optional(field("body", $.properties)),
        "}",
      ),
    get: ($) => seq("get", $.function),
    post: ($) => seq("post", $.function),

    properties: ($) =>
      repeat1(
        seq(choice($.property, $.optional, $.ref), optional(choice(";", ","))),
      ),
    property: ($) => seq(field("name", $.id), ":", field("type", $._type)),
    optional: ($) => seq(field("name", $.id), "?:", field("type", $._type)),

    _type: ($) => seq(choice($.ref, $.type, $.array, $.union)),
    type: ($) =>
      seq(field("name", $.id), optional(seq("(", repeat($.param), ")"))),
    param: ($) =>
      seq(
        field("name", $.id),
        "=",
        choice(
          field("slice", $._slice),
          field("integer", $.integer),
          field("string", $.string),
        ),
        optional(","),
      ),
    array: ($) =>
      seq(field("type", choice($.ref, $.type)), "[", optional($._slice), "]"),
    union: ($) => prec.left(seq($._type, "|", $._type)),

    _slice: ($) =>
      seq(
        optional(field("min", $.integer)),
        "..",
        optional(field("max", $.integer)),
      ),
    integer: ($) => /\d+/,

    id: () => /[a-zA-Z_$][a-zA-Z0-9_$]*/,
    nsid: ($) => seq($.id, repeat1(seq(".", $.id))),

    ref: ($) => seq("#", field("id", choice($.id, $.nsid))),

    string: () => seq('"', field("contents", /(?:[^"\\]|\\.)*/), '"'),
  },
});
