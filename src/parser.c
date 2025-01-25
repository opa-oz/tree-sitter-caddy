#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
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
  anon_sym_SQUOTE_SQUOTE = 6,
  aux_sym_option_token1 = 7,
  sym_argv = 8,
  sym_sblock = 9,
  anon_sym_LPAREN = 10,
  anon_sym_import = 11,
  anon_sym_COMMA = 12,
  sym_random_value = 13,
  aux_sym_quoted_string_literal_token1 = 14,
  sym_string_literal = 15,
  sym_ip_literal = 16,
  sym_numeric_literal = 17,
  sym__word = 18,
  sym_env = 19,
  sym_address = 20,
  sym__protocol = 21,
  sym__port = 22,
  sym__newline = 23,
  sym__indent = 24,
  sym__dedent = 25,
  sym_source_file = 26,
  sym_comment = 27,
  aux_sym__body = 28,
  sym_block = 29,
  sym_named_route = 30,
  sym_route = 31,
  sym_global_options = 32,
  sym_option = 33,
  sym_snippet = 34,
  sym_snippet_name = 35,
  sym_import = 36,
  sym_server = 37,
  sym__attribute_value = 38,
  sym__attribute = 39,
  sym__function = 40,
  sym_directive = 41,
  sym_quoted_string_literal = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_option_repeat1 = 44,
  aux_sym_server_repeat1 = 45,
  alias_sym_name = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AMP_LPAREN] = "&(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE_SQUOTE] = "keyword",
  [aux_sym_option_token1] = "option_token1",
  [sym_argv] = "argv",
  [sym_sblock] = "block_variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_import] = "keyword",
  [anon_sym_COMMA] = ",",
  [sym_random_value] = "value",
  [aux_sym_quoted_string_literal_token1] = "quoted_string_literal_token1",
  [sym_string_literal] = "string_literal",
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
  [sym_option] = "option",
  [sym_snippet] = "snippet",
  [sym_snippet_name] = "snippet_name",
  [sym_import] = "directive",
  [sym_server] = "server",
  [sym__attribute_value] = "_attribute_value",
  [sym__attribute] = "_attribute",
  [sym__function] = "_function",
  [sym_directive] = "directive",
  [sym_quoted_string_literal] = "quoted_string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_option_repeat1] = "option_repeat1",
  [aux_sym_server_repeat1] = "server_repeat1",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AMP_LPAREN] = anon_sym_AMP_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym_option_token1] = aux_sym_option_token1,
  [sym_argv] = sym_argv,
  [sym_sblock] = sym_sblock,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_import] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_random_value] = sym_random_value,
  [aux_sym_quoted_string_literal_token1] = aux_sym_quoted_string_literal_token1,
  [sym_string_literal] = sym_string_literal,
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
  [sym_option] = sym_option,
  [sym_snippet] = sym_snippet,
  [sym_snippet_name] = sym_snippet_name,
  [sym_import] = sym_directive,
  [sym_server] = sym_server,
  [sym__attribute_value] = sym__attribute_value,
  [sym__attribute] = sym__attribute,
  [sym__function] = sym__function,
  [sym_directive] = sym_directive,
  [sym_quoted_string_literal] = sym_quoted_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_option_repeat1] = aux_sym_option_repeat1,
  [aux_sym_server_repeat1] = aux_sym_server_repeat1,
  [alias_sym_name] = alias_sym_name,
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
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_option_token1] = {
    .visible = false,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_random_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
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
  [sym_option] = {
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
  [sym_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_server_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_name,
  },
  [2] = {
    [0] = anon_sym_SQUOTE_SQUOTE,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 6,
  [10] = 4,
  [11] = 4,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 12,
  [19] = 13,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 21,
  [37] = 22,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 28,
  [49] = 35,
  [50] = 32,
  [51] = 51,
  [52] = 34,
  [53] = 22,
  [54] = 21,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 59,
  [65] = 61,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 84,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 85,
  [93] = 88,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 95,
  [98] = 95,
  [99] = 89,
  [100] = 100,
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
        '"', 57,
        '#', 37,
        '&', 61,
        '\'', 60,
        '(', 51,
        ')', 46,
        ',', 54,
        ':', 90,
        '`', 66,
        'i', 109,
        '{', 40,
        '}', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (set_contains(sym__word_character_set_1, 429, lookahead)) ADVANCE(114);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (set_contains(sym__word_character_set_1, 429, lookahead)) ADVANCE(114);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (set_contains(sym__word_character_set_1, 429, lookahead)) ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == '{') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '}') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(97);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(115);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(50);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 33:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(11);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '#', 38,
        '&', 7,
        '(', 51,
        ')', 46,
        '*', 34,
        ':', 31,
        'h', 124,
        'i', 118,
        '{', 42,
        '}', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AMP_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_option_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_argv);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_sblock);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_import);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(114);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '{') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '{') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '}') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == ']') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'v') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_random_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(97);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ip_literal);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ip_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(111);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(112);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(110);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(113);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(53);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_env);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__protocol);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 55, .external_lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 35, .external_lex_state = 2},
  [22] = {.lex_state = 35, .external_lex_state = 2},
  [23] = {.lex_state = 35, .external_lex_state = 2},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 56},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 5, .external_lex_state = 2},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5, .external_lex_state = 2},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 4, .external_lex_state = 2},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 4, .external_lex_state = 2},
  [60] = {.lex_state = 4, .external_lex_state = 2},
  [61] = {.lex_state = 4, .external_lex_state = 2},
  [62] = {.lex_state = 4, .external_lex_state = 2},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4, .external_lex_state = 2},
  [65] = {.lex_state = 4, .external_lex_state = 2},
  [66] = {.lex_state = 4, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 2},
  [68] = {.lex_state = 4, .external_lex_state = 2},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AMP_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_option_token1] = ACTIONS(5),
    [sym_argv] = ACTIONS(1),
    [sym_sblock] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_random_value] = ACTIONS(1),
    [aux_sym_quoted_string_literal_token1] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_ip_literal] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_env] = ACTIONS(1),
    [sym__port] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym_comment] = STATE(1),
    [sym_named_route] = STATE(33),
    [sym_route] = STATE(69),
    [sym_global_options] = STATE(33),
    [sym_snippet] = STATE(33),
    [sym_snippet_name] = STATE(72),
    [sym_import] = STATE(33),
    [sym_server] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_server_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AMP_LPAREN] = ACTIONS(11),
    [aux_sym_option_token1] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_import] = ACTIONS(15),
    [sym_env] = ACTIONS(17),
    [sym_address] = ACTIONS(19),
    [sym__protocol] = ACTIONS(19),
    [sym__port] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_AMP_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(40), 1,
      aux_sym_server_repeat1,
    STATE(69), 1,
      sym_route,
    STATE(72), 1,
      sym_snippet_name,
    ACTIONS(17), 2,
      sym_env,
      sym__port,
    ACTIONS(19), 2,
      sym_address,
      sym__protocol,
    STATE(33), 5,
      sym_named_route,
      sym_global_options,
      sym_snippet,
      sym_import,
      sym_server,
  [52] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      anon_sym_AMP_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_import,
    STATE(40), 1,
      aux_sym_server_repeat1,
    STATE(69), 1,
      sym_route,
    STATE(72), 1,
      sym_snippet_name,
    ACTIONS(37), 2,
      sym_env,
      sym__port,
    ACTIONS(40), 2,
      sym_address,
      sym__protocol,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(33), 5,
      sym_named_route,
      sym_global_options,
      sym_snippet,
      sym_import,
      sym_server,
  [102] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      sym_sblock,
    ACTIONS(51), 1,
      anon_sym_import,
    ACTIONS(53), 1,
      sym__word,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym__body,
    STATE(51), 2,
      sym__attribute,
      sym__function,
    STATE(44), 3,
      sym_block,
      sym_import,
      sym_directive,
  [142] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(63), 1,
      sym__newline,
    STATE(5), 1,
      sym_comment,
    STATE(62), 1,
      sym__attribute_value,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(81), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [180] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      sym_sblock,
    ACTIONS(51), 1,
      anon_sym_import,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym__body,
    STATE(51), 2,
      sym__attribute,
      sym__function,
    STATE(44), 3,
      sym_block,
      sym_import,
      sym_directive,
  [220] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      sym_sblock,
    ACTIONS(51), 1,
      anon_sym_import,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym__body,
    STATE(51), 2,
      sym__attribute,
      sym__function,
    STATE(44), 3,
      sym_block,
      sym_import,
      sym_directive,
  [260] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(77), 1,
      sym_sblock,
    ACTIONS(80), 1,
      anon_sym_import,
    ACTIONS(83), 1,
      sym__word,
    STATE(8), 2,
      sym_comment,
      aux_sym__body,
    STATE(51), 2,
      sym__attribute,
      sym__function,
    STATE(44), 3,
      sym_block,
      sym_import,
      sym_directive,
  [298] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      sym_sblock,
    ACTIONS(51), 1,
      anon_sym_import,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__body,
    STATE(9), 1,
      sym_comment,
    STATE(51), 2,
      sym__attribute,
      sym__function,
    STATE(44), 3,
      sym_block,
      sym_import,
      sym_directive,
  [338] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      sym_sblock,
    ACTIONS(51), 1,
      anon_sym_import,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__body,
    STATE(10), 1,
      sym_comment,
    STATE(51), 2,
      sym__attribute,
      sym__function,
    STATE(44), 3,
      sym_block,
      sym_import,
      sym_directive,
  [378] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      sym_sblock,
    ACTIONS(51), 1,
      anon_sym_import,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym__body,
    STATE(11), 1,
      sym_comment,
    STATE(51), 2,
      sym__attribute,
      sym__function,
    STATE(44), 3,
      sym_block,
      sym_import,
      sym_directive,
  [418] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(12), 1,
      sym_comment,
    STATE(59), 1,
      sym__attribute_value,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(84), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [453] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(13), 1,
      sym_comment,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(70), 1,
      sym__attribute_value,
    STATE(85), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [488] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(14), 1,
      sym_comment,
    STATE(62), 1,
      sym__attribute_value,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(81), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [523] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(15), 1,
      sym_comment,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(70), 1,
      sym__attribute_value,
    STATE(76), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [558] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(16), 1,
      sym_comment,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(70), 1,
      sym__attribute_value,
    STATE(77), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [593] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(17), 1,
      sym_comment,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(70), 1,
      sym__attribute_value,
    STATE(88), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [628] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(18), 1,
      sym_comment,
    STATE(64), 1,
      sym__attribute_value,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(86), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [663] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(19), 1,
      sym_comment,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(70), 1,
      sym__attribute_value,
    STATE(92), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [698] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(20), 1,
      sym_comment,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(70), 1,
      sym__attribute_value,
    STATE(93), 1,
      sym_block,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [733] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(92), 6,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [757] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(98), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(96), 6,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [781] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(104), 1,
      sym__newline,
    STATE(23), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [807] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(24), 1,
      sym_comment,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(71), 1,
      sym__attribute_value,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [836] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(25), 1,
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
  [859] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [882] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(116), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [905] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(120), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [928] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(124), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [951] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(128), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [974] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(61), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(31), 1,
      sym_comment,
    STATE(68), 1,
      sym_quoted_string_literal,
    STATE(70), 1,
      sym__attribute_value,
    ACTIONS(57), 3,
      sym_argv,
      sym_string_literal,
      sym_env,
    ACTIONS(59), 3,
      sym_random_value,
      sym_ip_literal,
      sym_numeric_literal,
  [1003] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(132), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1026] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(136), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1049] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1072] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(144), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1095] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1118] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(98), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1141] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_LBRACE,
      anon_sym_import,
      sym_address,
      sym__protocol,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      anon_sym_LPAREN,
      sym_env,
      sym__port,
  [1164] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      sym__newline,
    STATE(39), 1,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(154), 3,
      sym_env,
      sym_address,
      sym__port,
  [1189] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(19), 1,
      sym__protocol,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    STATE(40), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_server_repeat1,
    ACTIONS(17), 3,
      sym_env,
      sym_address,
      sym__port,
  [1216] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(162), 1,
      sym__newline,
    STATE(41), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(160), 3,
      sym_env,
      sym_address,
      sym__port,
  [1238] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(166), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
  [1258] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(170), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
  [1278] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(174), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
  [1298] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(178), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
  [1318] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(182), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
  [1338] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(186), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
  [1358] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(118), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
    ACTIONS(120), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1378] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
    ACTIONS(144), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1398] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(130), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
    ACTIONS(132), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1418] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
    ACTIONS(190), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
  [1438] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
    ACTIONS(140), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1458] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(96), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
    ACTIONS(98), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1478] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym_sblock,
    ACTIONS(94), 3,
      anon_sym_LBRACE,
      anon_sym_import,
      sym__word,
  [1498] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      sym__protocol,
    STATE(55), 2,
      sym_comment,
      aux_sym_server_repeat1,
    ACTIONS(192), 3,
      sym_env,
      sym_address,
      sym__port,
  [1520] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(200), 3,
      sym_env,
      sym_address,
      sym__port,
  [1539] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      sym__newline,
    STATE(57), 1,
      sym_comment,
    STATE(94), 1,
      sym_option,
    ACTIONS(204), 2,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [1562] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(160), 3,
      sym_env,
      sym_address,
      sym__port,
  [1581] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      aux_sym_option_token1,
    ACTIONS(212), 1,
      sym__newline,
    STATE(59), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_option_repeat1,
    STATE(99), 1,
      sym_block,
  [1603] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      aux_sym_option_token1,
    ACTIONS(216), 1,
      sym__newline,
    STATE(60), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_option_repeat1,
    STATE(77), 1,
      sym_block,
  [1625] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      aux_sym_option_token1,
    ACTIONS(220), 1,
      sym__newline,
    STATE(61), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_option_repeat1,
    STATE(85), 1,
      sym_block,
  [1647] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      aux_sym_option_token1,
    ACTIONS(224), 1,
      sym__newline,
    STATE(60), 1,
      aux_sym_option_repeat1,
    STATE(62), 1,
      sym_comment,
    STATE(75), 1,
      sym_block,
  [1669] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_comment,
    STATE(78), 1,
      sym_option,
    ACTIONS(204), 2,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [1689] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      aux_sym_option_token1,
    ACTIONS(230), 1,
      sym__newline,
    STATE(64), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_option_repeat1,
    STATE(89), 1,
      sym_block,
  [1711] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      aux_sym_option_token1,
    ACTIONS(234), 1,
      sym__newline,
    STATE(65), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_option_repeat1,
    STATE(92), 1,
      sym_block,
  [1733] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(238), 1,
      aux_sym_option_token1,
    ACTIONS(236), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(66), 2,
      sym_comment,
      aux_sym_option_repeat1,
  [1748] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(241), 3,
      sym__newline,
      anon_sym_LBRACE,
      aux_sym_option_token1,
  [1760] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(243), 3,
      sym__newline,
      anon_sym_LBRACE,
      aux_sym_option_token1,
  [1772] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
    STATE(69), 1,
      sym_comment,
  [1788] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(236), 3,
      sym__newline,
      anon_sym_LBRACE,
      aux_sym_option_token1,
  [1800] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      aux_sym_option_token1,
    ACTIONS(249), 1,
      sym__newline,
    STATE(71), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_option_repeat1,
  [1816] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    STATE(72), 1,
      sym_comment,
  [1832] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      aux_sym_option_token1,
    ACTIONS(251), 1,
      sym__newline,
    STATE(66), 1,
      aux_sym_option_repeat1,
    STATE(73), 1,
      sym_comment,
  [1848] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(253), 1,
      sym__word,
    STATE(74), 1,
      sym_comment,
  [1861] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(216), 1,
      sym__newline,
    STATE(75), 1,
      sym_comment,
  [1874] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(255), 1,
      sym__newline,
    STATE(76), 1,
      sym_comment,
  [1887] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(257), 1,
      sym__newline,
    STATE(77), 1,
      sym_comment,
  [1900] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_comment,
  [1913] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_comment,
  [1926] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_comment,
  [1939] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(224), 1,
      sym__newline,
    STATE(81), 1,
      sym_comment,
  [1952] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_comment,
  [1965] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_comment,
  [1978] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(212), 1,
      sym__newline,
    STATE(84), 1,
      sym_comment,
  [1991] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(269), 1,
      sym__newline,
    STATE(85), 1,
      sym_comment,
  [2004] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(230), 1,
      sym__newline,
    STATE(86), 1,
      sym_comment,
  [2017] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(271), 1,
      sym__word,
    STATE(87), 1,
      sym_comment,
  [2030] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(273), 1,
      sym__newline,
    STATE(88), 1,
      sym_comment,
  [2043] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(234), 1,
      sym__newline,
    STATE(89), 1,
      sym_comment,
  [2056] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym_comment,
  [2069] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_comment,
  [2082] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(279), 1,
      sym__newline,
    STATE(92), 1,
      sym_comment,
  [2095] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(281), 1,
      sym__newline,
    STATE(93), 1,
      sym_comment,
  [2108] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_comment,
  [2121] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(283), 1,
      sym__newline,
    STATE(95), 1,
      sym_comment,
  [2134] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_comment,
  [2147] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(287), 1,
      sym__newline,
    STATE(97), 1,
      sym_comment,
  [2160] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(289), 1,
      sym__newline,
    STATE(98), 1,
      sym_comment,
  [2173] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(220), 1,
      sym__newline,
    STATE(99), 1,
      sym_comment,
  [2186] = 1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 220,
  [SMALL_STATE(8)] = 260,
  [SMALL_STATE(9)] = 298,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 418,
  [SMALL_STATE(13)] = 453,
  [SMALL_STATE(14)] = 488,
  [SMALL_STATE(15)] = 523,
  [SMALL_STATE(16)] = 558,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 628,
  [SMALL_STATE(19)] = 663,
  [SMALL_STATE(20)] = 698,
  [SMALL_STATE(21)] = 733,
  [SMALL_STATE(22)] = 757,
  [SMALL_STATE(23)] = 781,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 836,
  [SMALL_STATE(26)] = 859,
  [SMALL_STATE(27)] = 882,
  [SMALL_STATE(28)] = 905,
  [SMALL_STATE(29)] = 928,
  [SMALL_STATE(30)] = 951,
  [SMALL_STATE(31)] = 974,
  [SMALL_STATE(32)] = 1003,
  [SMALL_STATE(33)] = 1026,
  [SMALL_STATE(34)] = 1049,
  [SMALL_STATE(35)] = 1072,
  [SMALL_STATE(36)] = 1095,
  [SMALL_STATE(37)] = 1118,
  [SMALL_STATE(38)] = 1141,
  [SMALL_STATE(39)] = 1164,
  [SMALL_STATE(40)] = 1189,
  [SMALL_STATE(41)] = 1216,
  [SMALL_STATE(42)] = 1238,
  [SMALL_STATE(43)] = 1258,
  [SMALL_STATE(44)] = 1278,
  [SMALL_STATE(45)] = 1298,
  [SMALL_STATE(46)] = 1318,
  [SMALL_STATE(47)] = 1338,
  [SMALL_STATE(48)] = 1358,
  [SMALL_STATE(49)] = 1378,
  [SMALL_STATE(50)] = 1398,
  [SMALL_STATE(51)] = 1418,
  [SMALL_STATE(52)] = 1438,
  [SMALL_STATE(53)] = 1458,
  [SMALL_STATE(54)] = 1478,
  [SMALL_STATE(55)] = 1498,
  [SMALL_STATE(56)] = 1520,
  [SMALL_STATE(57)] = 1539,
  [SMALL_STATE(58)] = 1562,
  [SMALL_STATE(59)] = 1581,
  [SMALL_STATE(60)] = 1603,
  [SMALL_STATE(61)] = 1625,
  [SMALL_STATE(62)] = 1647,
  [SMALL_STATE(63)] = 1669,
  [SMALL_STATE(64)] = 1689,
  [SMALL_STATE(65)] = 1711,
  [SMALL_STATE(66)] = 1733,
  [SMALL_STATE(67)] = 1748,
  [SMALL_STATE(68)] = 1760,
  [SMALL_STATE(69)] = 1772,
  [SMALL_STATE(70)] = 1788,
  [SMALL_STATE(71)] = 1800,
  [SMALL_STATE(72)] = 1816,
  [SMALL_STATE(73)] = 1832,
  [SMALL_STATE(74)] = 1848,
  [SMALL_STATE(75)] = 1861,
  [SMALL_STATE(76)] = 1874,
  [SMALL_STATE(77)] = 1887,
  [SMALL_STATE(78)] = 1900,
  [SMALL_STATE(79)] = 1913,
  [SMALL_STATE(80)] = 1926,
  [SMALL_STATE(81)] = 1939,
  [SMALL_STATE(82)] = 1952,
  [SMALL_STATE(83)] = 1965,
  [SMALL_STATE(84)] = 1978,
  [SMALL_STATE(85)] = 1991,
  [SMALL_STATE(86)] = 2004,
  [SMALL_STATE(87)] = 2017,
  [SMALL_STATE(88)] = 2030,
  [SMALL_STATE(89)] = 2043,
  [SMALL_STATE(90)] = 2056,
  [SMALL_STATE(91)] = 2069,
  [SMALL_STATE(92)] = 2082,
  [SMALL_STATE(93)] = 2095,
  [SMALL_STATE(94)] = 2108,
  [SMALL_STATE(95)] = 2121,
  [SMALL_STATE(96)] = 2134,
  [SMALL_STATE(97)] = 2147,
  [SMALL_STATE(98)] = 2160,
  [SMALL_STATE(99)] = 2173,
  [SMALL_STATE(100)] = 2186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(98),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(14),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(44),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(18),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_route, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_route, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 6, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3, 0, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3, 0, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 5, 0, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 5, 0, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 6, 0, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 6, 0, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_value, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, 0, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet_name, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, 0, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [275] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
