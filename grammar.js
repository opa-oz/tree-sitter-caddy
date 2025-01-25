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
    source_file: ($) =>
      repeat(
        choice(
          $.server,
          $.global_options,
          $.named_route,
          $.snippet,
          alias($.import, $.directive),
        ),
      ),
    comment: (_) => prec.left(token(seq("#", /.*/))),

    // NOTE: Block
    // Opening and closing a block is done with curly braces:
    //  - The open curly brace { must be at the end of its line and preceded by a space.
    //  - The close curly brace } must be on its own line.
    //  @link https://caddyserver.com/docs/caddyfile/concepts#blocks
    _body: ($) =>
      repeat1(
        choice(
          $.block,
          $.directive,
          alias($.sblock, $.block_variable),
          alias($.import, $.directive),
        ),
      ),
    block: ($) => seq("{", $._newline, optional($._body), "}"),

    // NOTE: Named routes
    named_route: ($) => seq($.route, $.block),
    route: ($) => seq("&(", $._word, ")"),

    // NOTE: Global options
    global_options: ($) =>
      seq("{", optional($._newline), optional($.option), "}"),

    option: ($) =>
      seq(
        alias(choice($._word, "''"), $.name),
        choice(seq($._attribute_value, repeat(seq(/\s/, $._attribute_value)))),
        $._newline,
      ),

    // NOTE: Snippets
    // You can pass arguments to an imported configuration (snippets or files) and use them
    argv: (_) => token(seq("{args[", repeat1(unicodeDigit), "]")),
    // You can also pass an optional block to an imported snippet, and use them
    sblock: (_) => token("{block}"),
    snippet: ($) => seq($.snippet_name, $.block),
    snippet_name: ($) => seq("(", $._word, ")"),
    // NOTE:
    // The import directive can also be used to include other files in its place.
    // If the argument does not match a defined snippet, it will be tried as a file.
    // It also supports globs to import multiple files.
    // As a special case, it can appear anywhere within the Caddyfile (except as an argument to another directive),
    //    including outside of site blocks
    import: ($) =>
      prec(
        2,
        seq(
          alias("import", $.keyword),
          choice(
            $.block,
            seq(
              $._attribute_value,
              repeat(seq(/\s/, $._attribute_value)),
              optional(seq(optional(/\s/), $.block)),
            ),
          ),
          $._newline,
        ),
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
        $.ip_literal,
        $.quoted_string_literal,
        $.env,
        $.argv,
        alias($.random_value, $.value),
      ),
    _attribute: ($) =>
      seq(
        alias(choice($._word, "''"), $.keyword),
        choice(
          $.block,
          seq(
            $._attribute_value,
            repeat(seq(/\s/, $._attribute_value)),
            optional(seq(optional(/\s/), $.block)),
          ),
        ),
        $._newline,
      ),
    _function: ($) => seq($._word, $._newline),
    directive: ($) => choice($._attribute, $._function),

    // NOTE: Simple values
    random_value: (_) => token(prec(-1, /[^\s]*/)), // https://github.com/tree-sitter/tree-sitter/issues/1655
    quoted_string_literal: (_) =>
      prec.right(token(seq("`", repeat(/[^`]|(\\\`)/), "`"))),
    string_literal: (_) => token(seq('"', repeat(/[^"]|(\\\")/), '"')),
    ip_literal: (_) =>
      token(seq(repeat1(/[0-9]/), repeat1(seq(".", /[0-9]/)), /[0-9]/)),
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
