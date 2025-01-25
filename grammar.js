/**
 * @file Caddyfile support
 * @author Vladimir <opa-oz> Levin <opaozhub@gmail.com>
 * @license GPL-3.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const unicodeLetter = /\p{L}/u,
  unicodeDigit = /[0-9]/,
  uppercaseLetter = /[A-Z]/;

module.exports = grammar({
  name: "caddy",
  extras: ($) => [/\s/, $.comment],
  externals: ($) => [$._newline, $._indent, $._dedent],
  rules: {
    source_file: ($) => repeat(choice($.server, $.global_options)),
    comment: (_) => prec.left(token(seq("#", /.*/))),

    // NOTE: Block
    // Opening and closing a block is done with curly braces:
    //  - The open curly brace { must be at the end of its line and preceded by a space.
    //  - The close curly brace } must be on its own line.
    //
    //  @link https://caddyserver.com/docs/caddyfile/concepts#blocks
    _body: ($) => repeat1(choice($.block, $.directive)),
    block: ($) => seq("{", $._newline, optional($._body), "}"),

    // NOTE: Global options
    global_options: ($) =>
      seq("{", optional($._newline), optional($.option), "}"),

    option: ($) =>
      seq(
        alias(choice($._word, "''"), $.name),
        choice(seq($._attribute_value, repeat(seq(/\s/, $._attribute_value)))),
        $._newline,
      ),

    // NOTE: Server
    server: ($) =>
      seq(
        repeat1(
          seq(
            choice(
              $.address,
              alias($._port, $.address),
              alias($._protocol, $.address),
              $.env,
            ),
            optional(","),
            optional($._newline),
          ),
        ),
        $.block,
        optional($._newline),
      ),

    // NOTE: Directive
    // Directives are functional keywords which customize how the site is served.
    // They must appear within site blocks. For example, a complete file server config might look like this:
    // ```caddy
    //  localhost {
    //    file_server
    //  }
    // ```
    _attribute_value: ($) =>
      choice(
        $.string_literal,
        $.numeric_literal,
        $.quoted_string_literal,
        $.env,
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

    // NOTE: Simple values
    random_value: (_) => token(prec(-1, /[^;\s]*/)), // https://github.com/tree-sitter/tree-sitter/issues/1655
    quoted_string_literal: (_) =>
      prec.right(token(seq("`", repeat(/[^`]|(\\\`)/), "`"))),
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
    _word: (_) =>
      token(
        seq(
          unicodeLetter,
          repeat(choice(unicodeLetter, unicodeDigit, "-", "_")),
        ),
      ),

    env: (_) =>
      token(
        seq(
          "{",
          choice("$", "env."),
          choice(uppercaseLetter, "_"),
          repeat(choice(uppercaseLetter, unicodeDigit, "_")),
          optional(seq(":", "localhost")),
          "}",
        ),
      ),

    // NOTE: Address related
    address: (_) => token(/(https?:\/\/)?\*?[0-9a-zA-Z.-]+(:[0-9]+)?/),
    _protocol: (_) => token(seq(choice("http:", "https:"), "//")),
    _port: (_) => token(seq(":", repeat1(unicodeDigit))),
  },
});
