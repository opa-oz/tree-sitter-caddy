/**
 * @file Caddyfile support
 * @author Vladimir <opa-oz> Levin <opaozhub@gmail.com>
 * @license GPL-3.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const unicodeLetter = /\p{L}/u,
  unicodeDigit = /[0-9]/;

module.exports = grammar({
  name: "caddy",
  extras: ($) => [/\s/, $.comment],
  externals: ($) => [$._newline, $._indent, $._dedent],
  rules: {
    source_file: ($) => repeat(choice($.server, $.global_options)),
    comment: (_) => prec.left(token(seq("#", /.*/))),

    _body: ($) => repeat1(choice($.block, $.directive)),
    block: ($) => seq("{", optional($._newline), optional($._body), "}"),
    global_options: ($) =>
      seq("{", optional($._newline), optional($.option), "}"),

    option: ($) =>
      seq(
        alias(choice($._word, "''"), $.name),
        choice(seq($._attribute_value, repeat(seq(/\s/, $._attribute_value)))),
        $._newline,
      ),

    server: ($) =>
      seq(
        repeat1(
          seq(
            choice(
              $.address,
              alias($._port, $.address),
              alias($._protocol, $.address),
            ),
            // choice(
            //   $.domain,
            //   seq($.domain, optional($.port)),
            //   seq(optional($.domain), $.port),
            // ),
            optional(","),
            optional($._newline),
          ),
        ),
        $.block,
        optional($._newline),
      ),

    _word: (_) =>
      token(
        seq(
          unicodeLetter,
          repeat(choice(unicodeLetter, unicodeDigit, "-", "_")),
        ),
      ),

    _attribute_value: ($) =>
      choice(
        $.string_literal,
        $.numeric_literal,
        alias($.random_value, $.value),
      ),
    _attribute: ($) =>
      seq(
        alias(choice($._word, "''"), $.keyword),
        choice(
          $.block,
          seq($._attribute_value, repeat(seq(/\s/, $._attribute_value))),
        ),
        $._newline,
      ),
    _function: ($) => seq($._word, $._newline),
    directive: ($) => choice($._attribute, $._function),

    string_literal: (_) => token(seq('"', repeat(/[^"]|(\\\")/), '"')),
    numeric_literal: (_) =>
      token(
        seq(
          repeat1(/[0-9]/),
          optional(seq(".", repeat1(/[0-9]/))),
          optional(
            seq(choice("e", "E"), optional(choice("+", "-")), repeat1(/[0-9]/)),
          ),
        ),
      ),
    address: (_) => seq(/(https?:\/\/)?\*?[0-9a-zA-Z.-]+(:[0-9]+)?/),
    _protocol: (_) => token(seq(choice("http:", "https:"), "//")),
    _port: (_) => token(seq(":", repeat1(unicodeDigit))),

    // _protocol: (_) => token(seq(choice("http:", "https:"), "//")),
    // _port: (_) => token(seq(":", repeat1(unicodeDigit))),
    // _domain: (_) =>
    //   token(
    //     seq(
    //       choice(unicodeLetter, unicodeDigit, "*"),
    //       repeat(choice(unicodeLetter, unicodeDigit, "-", ".")),
    //     ),
    //   ),

    random_value: (_) => token(prec(-1, /[^;\s]*/)), // https://github.com/tree-sitter/tree-sitter/issues/1655
  },
});
