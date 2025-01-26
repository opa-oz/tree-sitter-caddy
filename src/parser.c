#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 1
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_AMP_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_argv = 6,
  sym_sblock = 7,
  anon_sym_LPAREN = 8,
  anon_sym_import = 9,
  aux_sym_import_token1 = 10,
  anon_sym_COMMA = 11,
  anon_sym_SQUOTE_SQUOTE = 12,
  sym_random_value = 13,
  sym_time = 14,
  sym_size = 15,
  sym_on = 16,
  sym_off = 17,
  sym_auto = 18,
  aux_sym_quoted_string_literal_token1 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_literal_token1 = 21,
  sym_placeholder = 22,
  sym_ip_literal = 23,
  sym_numeric_literal = 24,
  sym__word = 25,
  sym_env = 26,
  sym_address = 27,
  sym__protocol = 28,
  sym__port = 29,
  sym__newline = 30,
  sym__indent = 31,
  sym__dedent = 32,
  sym_source_file = 33,
  sym_comment = 34,
  aux_sym__body = 35,
  sym_block = 36,
  sym_named_route = 37,
  sym_route = 38,
  sym_global_options = 39,
  sym_snippet = 40,
  sym_snippet_name = 41,
  sym_import = 42,
  sym_server = 43,
  sym__attribute_value = 44,
  sym__attribute = 45,
  sym__function = 46,
  sym_directive = 47,
  sym_boolean = 48,
  sym_quoted_string_literal = 49,
  sym_string_literal = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_global_options_repeat1 = 52,
  aux_sym_import_repeat1 = 53,
  aux_sym_server_repeat1 = 54,
  aux_sym_string_literal_repeat1 = 55,
  alias_sym_option = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AMP_LPAREN] = "&(",
  [anon_sym_RPAREN] = ")",
  [sym_argv] = "argv",
  [sym_sblock] = "block_variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_import] = "keyword",
  [aux_sym_import_token1] = "import_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_SQUOTE_SQUOTE] = "keyword",
  [sym_random_value] = "value",
  [sym_time] = "time",
  [sym_size] = "size",
  [sym_on] = "on",
  [sym_off] = "off",
  [sym_auto] = "auto",
  [aux_sym_quoted_string_literal_token1] = "quoted_string_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_placeholder] = "placeholder",
  [sym_ip_literal] = "ip_literal",
  [sym_numeric_literal] = "numeric_literal",
  [sym__word] = "_word",
  [sym_env] = "env",
  [sym_address] = "address",
  [sym__protocol] = "address",
  [sym__port] = "address",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [aux_sym__body] = "_body",
  [sym_block] = "block",
  [sym_named_route] = "named_route",
  [sym_route] = "route",
  [sym_global_options] = "global_options",
  [sym_snippet] = "snippet",
  [sym_snippet_name] = "snippet_name",
  [sym_import] = "directive",
  [sym_server] = "server",
  [sym__attribute_value] = "_attribute_value",
  [sym__attribute] = "_attribute",
  [sym__function] = "_function",
  [sym_directive] = "directive",
  [sym_boolean] = "boolean",
  [sym_quoted_string_literal] = "quoted_string_literal",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_global_options_repeat1] = "global_options_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_server_repeat1] = "server_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [alias_sym_option] = "option",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AMP_LPAREN] = anon_sym_AMP_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_argv] = sym_argv,
  [sym_sblock] = sym_sblock,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_import,
  [sym_random_value] = sym_random_value,
  [sym_time] = sym_time,
  [sym_size] = sym_size,
  [sym_on] = sym_on,
  [sym_off] = sym_off,
  [sym_auto] = sym_auto,
  [aux_sym_quoted_string_literal_token1] = aux_sym_quoted_string_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_placeholder] = sym_placeholder,
  [sym_ip_literal] = sym_ip_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym__word] = sym__word,
  [sym_env] = sym_env,
  [sym_address] = sym_address,
  [sym__protocol] = sym_address,
  [sym__port] = sym_address,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [aux_sym__body] = aux_sym__body,
  [sym_block] = sym_block,
  [sym_named_route] = sym_named_route,
  [sym_route] = sym_route,
  [sym_global_options] = sym_global_options,
  [sym_snippet] = sym_snippet,
  [sym_snippet_name] = sym_snippet_name,
  [sym_import] = sym_directive,
  [sym_server] = sym_server,
  [sym__attribute_value] = sym__attribute_value,
  [sym__attribute] = sym__attribute,
  [sym__function] = sym__function,
  [sym_directive] = sym_directive,
  [sym_boolean] = sym_boolean,
  [sym_quoted_string_literal] = sym_quoted_string_literal,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_global_options_repeat1] = aux_sym_global_options_repeat1,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_server_repeat1] = aux_sym_server_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [alias_sym_option] = alias_sym_option,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_argv] = {
    .visible = true,
    .named = true,
  },
  [sym_sblock] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_import_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = true,
  },
  [sym_random_value] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [sym_on] = {
    .visible = true,
    .named = true,
  },
  [sym_off] = {
    .visible = true,
    .named = true,
  },
  [sym_auto] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_env] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym__protocol] = {
    .visible = true,
    .named = true,
  },
  [sym__port] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__body] = {
    .visible = false,
    .named = false,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_named_route] = {
    .visible = true,
    .named = true,
  },
  [sym_route] = {
    .visible = true,
    .named = true,
  },
  [sym_global_options] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet_name] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_server] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__function] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_server_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_option] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_option,
  },
  [2] = {
    [0] = anon_sym_import,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_directive, 2,
    sym_directive,
    alias_sym_option,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 4,
  [11] = 9,
  [12] = 6,
  [13] = 5,
  [14] = 7,
  [15] = 8,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 20,
  [24] = 19,
  [25] = 19,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 27,
  [36] = 26,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 34,
  [45] = 45,
  [46] = 46,
  [47] = 31,
  [48] = 48,
  [49] = 49,
  [50] = 32,
  [51] = 51,
  [52] = 37,
  [53] = 53,
  [54] = 54,
  [55] = 26,
  [56] = 56,
  [57] = 57,
  [58] = 27,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 66,
  [70] = 70,
  [71] = 64,
  [72] = 63,
  [73] = 49,
  [74] = 51,
  [75] = 53,
  [76] = 54,
  [77] = 48,
  [78] = 46,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 100,
  [101] = 101,
  [102] = 92,
  [103] = 103,
  [104] = 103,
  [105] = 105,
  [106] = 106,
  [107] = 91,
  [108] = 108,
  [109] = 109,
  [110] = 90,
  [111] = 95,
  [112] = 112,
  [113] = 105,
  [114] = 93,
  [115] = 106,
  [116] = 95,
  [117] = 117,
};

static TSCharacterRange sym_placeholder_character_set_1[] = {
  {'*', '*'}, {'.', '.'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5},
  {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee},
  {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1},
  {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2},
  {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff},
  {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815},
  {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9},
  {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1},
  {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39},
  {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3},
  {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28},
  {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83},
  {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa},
  {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a},
  {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9},
  {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd},
  {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3},
  {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00},
  {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061},
  {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa},
  {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0},
  {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a},
  {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8},
  {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc},
  {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974},
  {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0},
  {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf},
  {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45},
  {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc},
  {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc},
  {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d},
  {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e},
  {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67},
  {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce},
  {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f},
  {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf},
  {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe},
  {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe},
  {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6},
  {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e},
  {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3},
  {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28},
  {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f},
  {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7},
  {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d},
  {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375},
  {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563},
  {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc},
  {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808},
  {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5},
  {0x10900, 0x10915},
};

static TSCharacterRange sym_placeholder_character_set_2[] = {
  {'*', '*'}, {'.', '.'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {'}', '}'}, {0xaa, 0xaa},
  {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec},
  {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c},
  {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea},
  {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc},
  {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa},
  {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e},
  {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990},
  {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1},
  {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36},
  {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0},
  {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10},
  {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71},
  {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4},
  {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d},
  {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3},
  {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a},
  {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb},
  {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a},
  {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf},
  {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d},
  {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd},
  {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d},
  {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315},
  {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea},
  {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7},
  {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d},
  {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c},
  {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba},
  {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d},
  {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4},
  {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4},
  {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115},
  {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149},
  {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d},
  {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6},
  {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096},
  {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400},
  {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e},
  {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9},
  {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb},
  {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef},
  {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1},
  {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06},
  {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00},
  {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d},
  {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d},
  {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe},
  {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d},
  {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349},
  {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527},
  {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9},
  {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805},
  {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2},
  {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange sym__word_character_set_1[] = {
  {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1},
  {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f},
  {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556},
  {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5},
  {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1},
  {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858},
  {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961},
  {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd},
  {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28},
  {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1},
  {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d},
  {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10},
  {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c},
  {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2},
  {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f},
  {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46},
  {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd},
  {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a},
  {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c},
  {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c},
  {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54},
  {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f},
  {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa},
  {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102},
  {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d},
  {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3},
  {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae},
  {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006},
  {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c},
  {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca},
  {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873},
  {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2},
  {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76},
  {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9},
  {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0},
  {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange sym__word_character_set_2[] = {
  {'-', '-'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0},
  {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc},
  {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9},
  {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a},
  {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9},
  {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e},
  {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6},
  {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5},
  {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248},
  {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5},
  {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878},
  {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab},
  {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf},
  {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124},
  {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184},
  {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa},
  {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00},
  {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5},
  {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805},
  {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925},
  {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28},
  {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd},
  {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16},
  {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36},
  {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7},
  {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_random_value);
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '"', 103,
        '#', 37,
        '(', 47,
        ')', 44,
        ',', 51,
        '`', 61,
        'a', 81,
        'o', 66,
        '{', 39,
        '}', 42,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == '{') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (set_contains(sym__word_character_set_1, 429, lookahead)) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '}') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (set_contains(sym__word_character_set_1, 429, lookahead)) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == '{') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '}') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '`') ADVANCE(100);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '`') ADVANCE(102);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'v') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(107);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(46);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 33:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(10);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '#', 38,
        '&', 6,
        '(', 47,
        ')', 44,
        '*', 34,
        ':', 31,
        'h', 129,
        'i', 123,
        '{', 40,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(72);
      if (set_contains(sym_placeholder_character_set_1, 433, lookahead)) ADVANCE(84);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_argv);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_sblock);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_import);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(119);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '`') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '{') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '`') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '{') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(72);
      if (set_contains(sym_placeholder_character_set_1, 433, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '}') ADVANCE(107);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '}') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '}') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '}') ADVANCE(107);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == ']') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(77);
      if (lookahead == '}') ADVANCE(107);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '}') ADVANCE(107);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '}') ADVANCE(107);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == '}') ADVANCE(107);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'v') ADVANCE(56);
      if (lookahead == '}') ADVANCE(107);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '}') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '}') ADVANCE(107);
      if (set_contains(sym_placeholder_character_set_2, 434, lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_random_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'B' ||
          lookahead == 'b' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'B' ||
          lookahead == 'b' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_size);
      if (lookahead == 'B' ||
          lookahead == 'b' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_on);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_off);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '`') ADVANCE(100);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (set_contains(sym_placeholder_character_set_1, 433, lookahead)) ADVANCE(28);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_placeholder);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ip_literal);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ip_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_numeric_literal);
      ADVANCE_MAP(
        '.', 87,
        'M', 95,
        'm', 94,
        'E', 86,
        'e', 86,
        'G', 96,
        'K', 96,
        'g', 96,
        'k', 96,
        'd', 93,
        'h', 93,
        's', 93,
        'w', 93,
        'y', 93,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(116);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(117);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(115);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(118);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(49);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_env);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__protocol);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 53, .external_lex_state = 2},
  [3] = {.lex_state = 53, .external_lex_state = 2},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 35, .external_lex_state = 2},
  [27] = {.lex_state = 35, .external_lex_state = 2},
  [28] = {.lex_state = 35, .external_lex_state = 2},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 4, .external_lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 4, .external_lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 35},
  [109] = {.lex_state = 35},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_argv] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_random_value] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [sym_size] = ACTIONS(1),
    [sym_on] = ACTIONS(1),
    [sym_off] = ACTIONS(1),
    [sym_auto] = ACTIONS(1),
    [aux_sym_quoted_string_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_placeholder] = ACTIONS(1),
    [sym_ip_literal] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
    [sym_env] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(112),
    [sym_comment] = STATE(1),
    [sym_named_route] = STATE(29),
    [sym_route] = STATE(86),
    [sym_global_options] = STATE(29),
    [sym_snippet] = STATE(29),
    [sym_snippet_name] = STATE(87),
    [sym_import] = STATE(29),
    [sym_server] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym_server_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AMP_LPAREN] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_import] = ACTIONS(15),
    [aux_sym_import_token1] = ACTIONS(5),
    [sym_env] = ACTIONS(17),
    [sym_address] = ACTIONS(19),
    [sym__protocol] = ACTIONS(19),
    [sym__port] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym__newline,
    STATE(2), 1,
      sym_comment,
    STATE(64), 1,
      sym__attribute_value,
    STATE(90), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [50] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym__newline,
    STATE(3), 1,
      sym_comment,
    STATE(71), 1,
      sym__attribute_value,
    STATE(110), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [100] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(68), 1,
      sym__attribute_value,
    STATE(114), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [147] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_comment,
    STATE(82), 1,
      sym__attribute_value,
    STATE(113), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [194] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_comment,
    STATE(82), 1,
      sym__attribute_value,
    STATE(92), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [241] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_comment,
    STATE(82), 1,
      sym__attribute_value,
    STATE(115), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [288] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(82), 1,
      sym__attribute_value,
    STATE(91), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [335] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_comment,
    STATE(71), 1,
      sym__attribute_value,
    STATE(110), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [382] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_comment,
    STATE(65), 1,
      sym__attribute_value,
    STATE(93), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [429] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_comment,
    STATE(64), 1,
      sym__attribute_value,
    STATE(90), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [476] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(82), 1,
      sym__attribute_value,
    STATE(102), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [523] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_comment,
    STATE(82), 1,
      sym__attribute_value,
    STATE(105), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [570] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_comment,
    STATE(82), 1,
      sym__attribute_value,
    STATE(106), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [617] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_comment,
    STATE(82), 1,
      sym__attribute_value,
    STATE(107), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [664] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_AMP_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      aux_sym_server_repeat1,
    STATE(86), 1,
      sym_route,
    STATE(87), 1,
      sym_snippet_name,
    ACTIONS(17), 2,
      sym_env,
      sym__port,
    ACTIONS(19), 2,
      sym_address,
      sym__protocol,
    STATE(29), 5,
      sym_named_route,
      sym_global_options,
      sym_snippet,
      sym_import,
      sym_server,
  [716] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_AMP_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_import,
    STATE(42), 1,
      aux_sym_server_repeat1,
    STATE(86), 1,
      sym_route,
    STATE(87), 1,
      sym_snippet_name,
    ACTIONS(53), 2,
      sym_env,
      sym__port,
    ACTIONS(56), 2,
      sym_address,
      sym__protocol,
    STATE(17), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(29), 5,
      sym_named_route,
      sym_global_options,
      sym_snippet,
      sym_import,
      sym_server,
  [766] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(29), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_comment,
    STATE(82), 1,
      sym__attribute_value,
    ACTIONS(27), 2,
      sym_on,
      sym_off,
    ACTIONS(23), 3,
      sym_argv,
      sym_auto,
      sym_env,
    STATE(84), 3,
      sym_boolean,
      sym_quoted_string_literal,
      sym_string_literal,
    ACTIONS(25), 6,
      sym_random_value,
      sym_time,
      sym_size,
      sym_placeholder,
      sym_ip_literal,
      sym_numeric_literal,
  [807] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      sym_sblock,
    ACTIONS(65), 1,
      anon_sym_import,
    ACTIONS(67), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(69), 1,
      sym__word,
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym__body,
    STATE(46), 2,
      sym__attribute,
      sym__function,
    STATE(45), 3,
      sym_block,
      sym_import,
      sym_directive,
  [847] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_sblock,
    ACTIONS(65), 1,
      anon_sym_import,
    ACTIONS(67), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(69), 1,
      sym__word,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym__body,
    STATE(46), 2,
      sym__attribute,
      sym__function,
    STATE(45), 3,
      sym_block,
      sym_import,
      sym_directive,
  [887] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      sym_sblock,
    ACTIONS(81), 1,
      anon_sym_import,
    ACTIONS(84), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(87), 1,
      sym__word,
    STATE(21), 2,
      sym_comment,
      aux_sym__body,
    STATE(46), 2,
      sym__attribute,
      sym__function,
    STATE(45), 3,
      sym_block,
      sym_import,
      sym_directive,
  [925] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_sblock,
    ACTIONS(65), 1,
      anon_sym_import,
    ACTIONS(67), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(69), 1,
      sym__word,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym__body,
    STATE(22), 1,
      sym_comment,
    STATE(46), 2,
      sym__attribute,
      sym__function,
    STATE(45), 3,
      sym_block,
      sym_import,
      sym_directive,
  [965] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_sblock,
    ACTIONS(65), 1,
      anon_sym_import,
    ACTIONS(67), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(69), 1,
      sym__word,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym__body,
    STATE(23), 1,
      sym_comment,
    STATE(46), 2,
      sym__attribute,
      sym__function,
    STATE(45), 3,
      sym_block,
      sym_import,
      sym_directive,
  [1005] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_sblock,
    ACTIONS(65), 1,
      anon_sym_import,
    ACTIONS(67), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(69), 1,
      sym__word,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__body,
    STATE(24), 1,
      sym_comment,
    STATE(46), 2,
      sym__attribute,
      sym__function,
    STATE(45), 3,
      sym_block,
      sym_import,
      sym_directive,
  [1045] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_sblock,
    ACTIONS(65), 1,
      anon_sym_import,
    ACTIONS(67), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(69), 1,
      sym__word,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym__body,
    STATE(25), 1,
      sym_comment,
    STATE(46), 2,
      sym__attribute,
      sym__function,
    STATE(45), 3,
      sym_block,
      sym_import,
      sym_directive,
  [1085] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(100), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(98), 6,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1109] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(102), 6,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1133] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(110), 1,
      sym__newline,
    STATE(28), 1,
      sym_comment,
    ACTIONS(108), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1159] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(114), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1182] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(118), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1205] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(122), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1228] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(126), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1251] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1274] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1297] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1320] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(100), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1343] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(138), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1366] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(142), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1389] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(146), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1412] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      sym__newline,
    STATE(40), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(152), 3,
      sym_env,
      sym_address,
      sym__port,
  [1437] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(160), 1,
      sym__word,
    STATE(41), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_global_options_repeat1,
    STATE(79), 1,
      sym_directive,
    STATE(78), 2,
      sym__attribute,
      sym__function,
  [1466] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(19), 1,
      sym__protocol,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
    STATE(42), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_server_repeat1,
    ACTIONS(17), 3,
      sym_env,
      sym_address,
      sym__port,
  [1493] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(167), 1,
      sym__word,
    STATE(79), 1,
      sym_directive,
    STATE(43), 2,
      sym_comment,
      aux_sym_global_options_repeat1,
    STATE(78), 2,
      sym__attribute,
      sym__function,
  [1520] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(134), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1540] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(172), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
  [1560] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(176), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
  [1580] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(120), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(122), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1600] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(180), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
  [1620] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(184), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
  [1640] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(124), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(126), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1660] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(188), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
  [1680] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(138), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1700] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(192), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
  [1720] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(196), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
  [1740] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(98), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(100), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1760] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(158), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(160), 1,
      sym__word,
    STATE(41), 1,
      aux_sym_global_options_repeat1,
    STATE(56), 1,
      sym_comment,
    STATE(79), 1,
      sym_directive,
    STATE(78), 2,
      sym__attribute,
      sym__function,
  [1786] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(202), 1,
      sym__newline,
    STATE(57), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(200), 3,
      sym_env,
      sym_address,
      sym__port,
  [1808] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(102), 3,
      anon_sym_RBRACE,
      sym_sblock,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(104), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1828] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      sym__protocol,
    STATE(59), 2,
      sym_comment,
      aux_sym_server_repeat1,
    ACTIONS(204), 3,
      sym_env,
      sym_address,
      sym__port,
  [1850] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(200), 3,
      sym_env,
      sym_address,
      sym__port,
  [1869] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(210), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(212), 3,
      sym_env,
      sym_address,
      sym__port,
  [1888] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(219), 1,
      sym_placeholder,
    STATE(62), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [1908] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      aux_sym_import_token1,
    ACTIONS(226), 1,
      sym__newline,
    STATE(63), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_import_repeat1,
    STATE(102), 1,
      sym_block,
  [1930] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      aux_sym_import_token1,
    ACTIONS(230), 1,
      sym__newline,
    STATE(64), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_import_repeat1,
    STATE(103), 1,
      sym_block,
  [1952] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      aux_sym_import_token1,
    ACTIONS(234), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym_import_repeat1,
    STATE(65), 1,
      sym_comment,
    STATE(97), 1,
      sym_block,
  [1974] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      aux_sym_import_token1,
    ACTIONS(238), 1,
      sym__newline,
    STATE(66), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_import_repeat1,
    STATE(106), 1,
      sym_block,
  [1996] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym_string_literal_token1,
    ACTIONS(244), 1,
      sym_placeholder,
    STATE(62), 1,
      aux_sym_string_literal_repeat1,
    STATE(67), 1,
      sym_comment,
  [2018] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      aux_sym_import_token1,
    ACTIONS(248), 1,
      sym__newline,
    STATE(68), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_import_repeat1,
    STATE(99), 1,
      sym_block,
  [2040] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      aux_sym_import_token1,
    ACTIONS(252), 1,
      sym__newline,
    STATE(69), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_import_repeat1,
    STATE(115), 1,
      sym_block,
  [2062] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(242), 1,
      aux_sym_string_literal_token1,
    ACTIONS(244), 1,
      sym_placeholder,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_string_literal_repeat1,
    STATE(70), 1,
      sym_comment,
  [2084] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      aux_sym_import_token1,
    ACTIONS(258), 1,
      sym__newline,
    STATE(69), 1,
      aux_sym_import_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(104), 1,
      sym_block,
  [2106] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      aux_sym_import_token1,
    ACTIONS(262), 1,
      sym__newline,
    STATE(72), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_import_repeat1,
    STATE(92), 1,
      sym_block,
  [2128] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [2143] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [2158] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [2173] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [2188] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [2203] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [2218] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(264), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [2233] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(268), 1,
      aux_sym_import_token1,
    ACTIONS(266), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(80), 2,
      sym_comment,
      aux_sym_import_repeat1,
  [2248] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(273), 1,
      aux_sym_string_literal_token1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_DQUOTE,
      sym_placeholder,
  [2265] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(266), 3,
      sym__newline,
      anon_sym_LBRACE,
      aux_sym_import_token1,
  [2277] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(275), 3,
      sym__newline,
      anon_sym_LBRACE,
      aux_sym_import_token1,
  [2289] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(84), 1,
      sym_comment,
    ACTIONS(277), 3,
      sym__newline,
      anon_sym_LBRACE,
      aux_sym_import_token1,
  [2301] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(85), 1,
      sym_comment,
    ACTIONS(279), 3,
      sym__newline,
      anon_sym_LBRACE,
      aux_sym_import_token1,
  [2313] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
    STATE(86), 1,
      sym_comment,
  [2329] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
    STATE(87), 1,
      sym_comment,
  [2345] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(283), 3,
      sym__newline,
      anon_sym_LBRACE,
      aux_sym_import_token1,
  [2357] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(285), 3,
      sym__newline,
      anon_sym_LBRACE,
      aux_sym_import_token1,
  [2369] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(230), 1,
      sym__newline,
    STATE(90), 1,
      sym_comment,
  [2382] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(287), 1,
      sym__newline,
    STATE(91), 1,
      sym_comment,
  [2395] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(289), 1,
      sym__newline,
    STATE(92), 1,
      sym_comment,
  [2408] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(234), 1,
      sym__newline,
    STATE(93), 1,
      sym_comment,
  [2421] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(291), 1,
      sym__word,
    STATE(94), 1,
      sym_comment,
  [2434] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(293), 1,
      sym__newline,
    STATE(95), 1,
      sym_comment,
  [2447] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(295), 1,
      sym__newline,
    STATE(96), 1,
      sym_comment,
  [2460] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(226), 1,
      sym__newline,
    STATE(97), 1,
      sym_comment,
  [2473] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(297), 1,
      sym__word,
    STATE(98), 1,
      sym_comment,
  [2486] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(262), 1,
      sym__newline,
    STATE(99), 1,
      sym_comment,
  [2499] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_comment,
  [2512] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_comment,
  [2525] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(303), 1,
      sym__newline,
    STATE(102), 1,
      sym_comment,
  [2538] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(238), 1,
      sym__newline,
    STATE(103), 1,
      sym_comment,
  [2551] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(252), 1,
      sym__newline,
    STATE(104), 1,
      sym_comment,
  [2564] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(305), 1,
      sym__newline,
    STATE(105), 1,
      sym_comment,
  [2577] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(307), 1,
      sym__newline,
    STATE(106), 1,
      sym_comment,
  [2590] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(309), 1,
      sym__newline,
    STATE(107), 1,
      sym_comment,
  [2603] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_comment,
  [2616] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [2629] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(258), 1,
      sym__newline,
    STATE(110), 1,
      sym_comment,
  [2642] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(315), 1,
      sym__newline,
    STATE(111), 1,
      sym_comment,
  [2655] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_comment,
  [2668] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(319), 1,
      sym__newline,
    STATE(113), 1,
      sym_comment,
  [2681] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(248), 1,
      sym__newline,
    STATE(114), 1,
      sym_comment,
  [2694] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(321), 1,
      sym__newline,
    STATE(115), 1,
      sym_comment,
  [2707] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_import_token1,
    ACTIONS(323), 1,
      sym__newline,
    STATE(116), 1,
      sym_comment,
  [2720] = 1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 241,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 335,
  [SMALL_STATE(10)] = 382,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 476,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 570,
  [SMALL_STATE(15)] = 617,
  [SMALL_STATE(16)] = 664,
  [SMALL_STATE(17)] = 716,
  [SMALL_STATE(18)] = 766,
  [SMALL_STATE(19)] = 807,
  [SMALL_STATE(20)] = 847,
  [SMALL_STATE(21)] = 887,
  [SMALL_STATE(22)] = 925,
  [SMALL_STATE(23)] = 965,
  [SMALL_STATE(24)] = 1005,
  [SMALL_STATE(25)] = 1045,
  [SMALL_STATE(26)] = 1085,
  [SMALL_STATE(27)] = 1109,
  [SMALL_STATE(28)] = 1133,
  [SMALL_STATE(29)] = 1159,
  [SMALL_STATE(30)] = 1182,
  [SMALL_STATE(31)] = 1205,
  [SMALL_STATE(32)] = 1228,
  [SMALL_STATE(33)] = 1251,
  [SMALL_STATE(34)] = 1274,
  [SMALL_STATE(35)] = 1297,
  [SMALL_STATE(36)] = 1320,
  [SMALL_STATE(37)] = 1343,
  [SMALL_STATE(38)] = 1366,
  [SMALL_STATE(39)] = 1389,
  [SMALL_STATE(40)] = 1412,
  [SMALL_STATE(41)] = 1437,
  [SMALL_STATE(42)] = 1466,
  [SMALL_STATE(43)] = 1493,
  [SMALL_STATE(44)] = 1520,
  [SMALL_STATE(45)] = 1540,
  [SMALL_STATE(46)] = 1560,
  [SMALL_STATE(47)] = 1580,
  [SMALL_STATE(48)] = 1600,
  [SMALL_STATE(49)] = 1620,
  [SMALL_STATE(50)] = 1640,
  [SMALL_STATE(51)] = 1660,
  [SMALL_STATE(52)] = 1680,
  [SMALL_STATE(53)] = 1700,
  [SMALL_STATE(54)] = 1720,
  [SMALL_STATE(55)] = 1740,
  [SMALL_STATE(56)] = 1760,
  [SMALL_STATE(57)] = 1786,
  [SMALL_STATE(58)] = 1808,
  [SMALL_STATE(59)] = 1828,
  [SMALL_STATE(60)] = 1850,
  [SMALL_STATE(61)] = 1869,
  [SMALL_STATE(62)] = 1888,
  [SMALL_STATE(63)] = 1908,
  [SMALL_STATE(64)] = 1930,
  [SMALL_STATE(65)] = 1952,
  [SMALL_STATE(66)] = 1974,
  [SMALL_STATE(67)] = 1996,
  [SMALL_STATE(68)] = 2018,
  [SMALL_STATE(69)] = 2040,
  [SMALL_STATE(70)] = 2062,
  [SMALL_STATE(71)] = 2084,
  [SMALL_STATE(72)] = 2106,
  [SMALL_STATE(73)] = 2128,
  [SMALL_STATE(74)] = 2143,
  [SMALL_STATE(75)] = 2158,
  [SMALL_STATE(76)] = 2173,
  [SMALL_STATE(77)] = 2188,
  [SMALL_STATE(78)] = 2203,
  [SMALL_STATE(79)] = 2218,
  [SMALL_STATE(80)] = 2233,
  [SMALL_STATE(81)] = 2248,
  [SMALL_STATE(82)] = 2265,
  [SMALL_STATE(83)] = 2277,
  [SMALL_STATE(84)] = 2289,
  [SMALL_STATE(85)] = 2301,
  [SMALL_STATE(86)] = 2313,
  [SMALL_STATE(87)] = 2329,
  [SMALL_STATE(88)] = 2345,
  [SMALL_STATE(89)] = 2357,
  [SMALL_STATE(90)] = 2369,
  [SMALL_STATE(91)] = 2382,
  [SMALL_STATE(92)] = 2395,
  [SMALL_STATE(93)] = 2408,
  [SMALL_STATE(94)] = 2421,
  [SMALL_STATE(95)] = 2434,
  [SMALL_STATE(96)] = 2447,
  [SMALL_STATE(97)] = 2460,
  [SMALL_STATE(98)] = 2473,
  [SMALL_STATE(99)] = 2486,
  [SMALL_STATE(100)] = 2499,
  [SMALL_STATE(101)] = 2512,
  [SMALL_STATE(102)] = 2525,
  [SMALL_STATE(103)] = 2538,
  [SMALL_STATE(104)] = 2551,
  [SMALL_STATE(105)] = 2564,
  [SMALL_STATE(106)] = 2577,
  [SMALL_STATE(107)] = 2590,
  [SMALL_STATE(108)] = 2603,
  [SMALL_STATE(109)] = 2616,
  [SMALL_STATE(110)] = 2629,
  [SMALL_STATE(111)] = 2642,
  [SMALL_STATE(112)] = 2655,
  [SMALL_STATE(113)] = 2668,
  [SMALL_STATE(114)] = 2681,
  [SMALL_STATE(115)] = 2694,
  [SMALL_STATE(116)] = 2707,
  [SMALL_STATE(117)] = 2720,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(116),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(45),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(11),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 6, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_route, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_route, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_options_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3, 0, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3, 0, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4, 0, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4, 0, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 5, 0, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 5, 0, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 6, 0, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 6, 0, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_options_repeat1, 1, 0, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_value, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet_name, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [317] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_caddy_external_scanner_create(void);
void tree_sitter_caddy_external_scanner_destroy(void *);
bool tree_sitter_caddy_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_caddy_external_scanner_serialize(void *, char *);
void tree_sitter_caddy_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_caddy(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_caddy_external_scanner_create,
      tree_sitter_caddy_external_scanner_destroy,
      tree_sitter_caddy_external_scanner_scan,
      tree_sitter_caddy_external_scanner_serialize,
      tree_sitter_caddy_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
