/**
 * @file atproto lexicon dsl
 * @author Tibet Tornaci <oofdere@hey.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "ana",

  rules: {
    program: $ => repeat(choice($.array, $.integer, $.slice)),

    array: $ => seq("[", optional($.slice), "]"),
    slice: $ => choice(
      seq(field("min", $.integer), "..", field("max", $.integer)),
      seq(field("min", $.integer), ".."),
      seq("..", field("max", $.integer))
    ),

    integer: $ => token(/\d+/),
  }
});
