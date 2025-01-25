#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 1
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_AMP_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_SQUOTE_SQUOTE = 6,
  aux_sym_option_token1 = 7,
  anon_sym_COMMA = 8,
  sym_random_value = 9,
  aux_sym_quoted_string_literal_token1 = 10,
  sym_string_literal = 11,
  sym_numeric_literal = 12,
  sym__word = 13,
  sym_env = 14,
  sym_address = 15,
  sym__protocol = 16,
  sym__port = 17,
  sym__newline = 18,
  sym__indent = 19,
  sym__dedent = 20,
  sym_source_file = 21,
  sym_comment = 22,
  aux_sym__body = 23,
  sym_block = 24,
  sym_named_route = 25,
  sym_route = 26,
  sym_global_options = 27,
  sym_option = 28,
  sym_server = 29,
  sym__attribute_value = 30,
  sym__attribute = 31,
  sym__function = 32,
  sym_directive = 33,
  sym_quoted_string_literal = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_option_repeat1 = 36,
  aux_sym_server_repeat1 = 37,
  alias_sym_name = 38,
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
  [anon_sym_COMMA] = ",",
  [sym_random_value] = "value",
  [aux_sym_quoted_string_literal_token1] = "quoted_string_literal_token1",
  [sym_string_literal] = "string_literal",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_random_value] = sym_random_value,
  [aux_sym_quoted_string_literal_token1] = aux_sym_quoted_string_literal_token1,
  [sym_string_literal] = sym_string_literal,
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
  [8] = 6,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 15,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 14,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 15,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 14,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 55,
  [61] = 55,
  [62] = 62,
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
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '"', 43,
        '#', 30,
        '&', 47,
        '\'', 46,
        ')', 37,
        ',', 40,
        ':', 65,
        '`', 50,
        '{', 33,
        '}', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (set_contains(sym__word_character_set_1, 429, lookahead)) ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (set_contains(sym__word_character_set_1, 429, lookahead)) ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(88);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '}') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(80);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 26:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '#', 31,
        '&', 5,
        ')', 37,
        '*', 27,
        ',', 40,
        ':', 24,
        'h', 85,
        '{', 34,
        '}', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AMP_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_option_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '{') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '{') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '}') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '`') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '`') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_random_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '`') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__word);
      if (set_contains(sym__word_character_set_2, 432, lookahead)) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_env);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__protocol);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 41, .external_lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 28, .external_lex_state = 2},
  [14] = {.lex_state = 28, .external_lex_state = 2},
  [15] = {.lex_state = 28, .external_lex_state = 2},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28, .external_lex_state = 2},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28, .external_lex_state = 2},
  [30] = {.lex_state = 3, .external_lex_state = 2},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {(TSStateId)(-1)},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_random_value] = ACTIONS(1),
    [aux_sym_quoted_string_literal_token1] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_env] = ACTIONS(1),
    [sym__port] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym_comment] = STATE(1),
    [sym_named_route] = STATE(20),
    [sym_route] = STATE(46),
    [sym_global_options] = STATE(20),
    [sym_server] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_server_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AMP_LPAREN] = ACTIONS(11),
    [aux_sym_option_token1] = ACTIONS(5),
    [sym_env] = ACTIONS(13),
    [sym_address] = ACTIONS(13),
    [sym__protocol] = ACTIONS(15),
    [sym__port] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_AMP_LPAREN,
    ACTIONS(15), 1,
      sym__protocol,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(18), 1,
      aux_sym_server_repeat1,
    STATE(46), 1,
      sym_route,
    ACTIONS(13), 3,
      sym_env,
      sym_address,
      sym__port,
    STATE(20), 3,
      sym_named_route,
      sym_global_options,
      sym_server,
  [41] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_AMP_LPAREN,
    ACTIONS(30), 1,
      sym__protocol,
    STATE(18), 1,
      aux_sym_server_repeat1,
    STATE(46), 1,
      sym_route,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(27), 3,
      sym_env,
      sym_address,
      sym__port,
    STATE(20), 3,
      sym_named_route,
      sym_global_options,
      sym_server,
  [80] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_random_value,
    ACTIONS(37), 1,
      aux_sym_quoted_string_literal_token1,
    ACTIONS(41), 1,
      sym__newline,
    STATE(4), 1,
      sym_comment,
    STATE(43), 1,
      sym__attribute_value,
    STATE(48), 1,
      sym_quoted_string_literal,
    STATE(51), 1,
      sym_block,
    ACTIONS(39), 3,
      sym_string_literal,
      sym_numeric_literal,
      sym_env,
  [116] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(51), 1,
      sym__word,
    STATE(5), 2,
      sym_comment,
      aux_sym__body,
    STATE(35), 2,
      sym_block,
      sym_directive,
    STATE(36), 2,
      sym__attribute,
      sym__function,
  [147] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(60), 1,
      sym__word,
    STATE(6), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym__body,
    STATE(35), 2,
      sym_block,
      sym_directive,
    STATE(36), 2,
      sym__attribute,
      sym__function,
  [180] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(60), 1,
      sym__word,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__body,
    STATE(35), 2,
      sym_block,
      sym_directive,
    STATE(36), 2,
      sym__attribute,
      sym__function,
  [213] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(60), 1,
      sym__word,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__body,
    STATE(35), 2,
      sym_block,
      sym_directive,
    STATE(36), 2,
      sym__attribute,
      sym__function,
  [246] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(60), 1,
      sym__word,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym__body,
    STATE(9), 1,
      sym_comment,
    STATE(35), 2,
      sym_block,
      sym_directive,
    STATE(36), 2,
      sym__attribute,
      sym__function,
  [279] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(60), 1,
      sym__word,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym__body,
    STATE(10), 1,
      sym_comment,
    STATE(35), 2,
      sym_block,
      sym_directive,
    STATE(36), 2,
      sym__attribute,
      sym__function,
  [312] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_random_value,
    ACTIONS(37), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(11), 1,
      sym_comment,
    STATE(43), 1,
      sym__attribute_value,
    STATE(48), 1,
      sym_quoted_string_literal,
    STATE(51), 1,
      sym_block,
    ACTIONS(39), 3,
      sym_string_literal,
      sym_numeric_literal,
      sym_env,
  [345] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(60), 1,
      sym__word,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym__body,
    STATE(12), 1,
      sym_comment,
    STATE(35), 2,
      sym_block,
      sym_directive,
    STATE(36), 2,
      sym__attribute,
      sym__function,
  [378] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(76), 1,
      sym__newline,
    STATE(13), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [402] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(78), 6,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [424] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(82), 6,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [446] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [467] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(35), 1,
      sym_random_value,
    ACTIONS(37), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(17), 1,
      sym_comment,
    STATE(45), 1,
      sym__attribute_value,
    STATE(48), 1,
      sym_quoted_string_literal,
    ACTIONS(39), 3,
      sym_string_literal,
      sym_numeric_literal,
      sym_env,
  [494] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(15), 1,
      sym__protocol,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
    STATE(18), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_server_repeat1,
    ACTIONS(13), 3,
      sym_env,
      sym_address,
      sym__port,
  [521] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [542] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [563] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [584] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [605] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      sym__newline,
    STATE(23), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(106), 3,
      sym_env,
      sym_address,
      sym__port,
  [630] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(35), 1,
      sym_random_value,
    ACTIONS(37), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(24), 1,
      sym_comment,
    STATE(48), 1,
      sym_quoted_string_literal,
    STATE(50), 1,
      sym__attribute_value,
    ACTIONS(39), 3,
      sym_string_literal,
      sym_numeric_literal,
      sym_env,
  [657] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [678] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [699] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_AMP_LPAREN,
      sym_env,
      sym_address,
      sym__port,
  [720] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      sym__protocol,
    STATE(28), 2,
      sym_comment,
      aux_sym_server_repeat1,
    ACTIONS(120), 3,
      sym_env,
      sym_address,
      sym__port,
  [742] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(128), 1,
      sym__newline,
    STATE(29), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(126), 3,
      sym_env,
      sym_address,
      sym__port,
  [764] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      sym__newline,
    STATE(30), 1,
      sym_comment,
    STATE(57), 1,
      sym_option,
    ACTIONS(132), 2,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [787] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(126), 3,
      sym_env,
      sym_address,
      sym__port,
  [806] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_LBRACE,
      sym__protocol,
    ACTIONS(138), 3,
      sym_env,
      sym_address,
      sym__port,
  [825] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(82), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [841] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_comment,
    STATE(52), 1,
      sym_option,
    ACTIONS(132), 2,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [861] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(142), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [877] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(144), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [893] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(146), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [909] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [925] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(78), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [941] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(150), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE_SQUOTE,
      sym__word,
  [957] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      aux_sym_option_token1,
    ACTIONS(154), 1,
      sym__newline,
    STATE(41), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_option_repeat1,
  [973] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(156), 1,
      aux_sym_option_token1,
    ACTIONS(159), 1,
      sym__newline,
    STATE(42), 2,
      sym_comment,
      aux_sym_option_repeat1,
  [987] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      aux_sym_option_token1,
    ACTIONS(161), 1,
      sym__newline,
    STATE(43), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_option_repeat1,
  [1003] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      aux_sym_option_token1,
    ACTIONS(163), 1,
      sym__newline,
    STATE(42), 1,
      aux_sym_option_repeat1,
    STATE(44), 1,
      sym_comment,
  [1019] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      aux_sym_option_token1,
    ACTIONS(165), 1,
      sym__newline,
    STATE(41), 1,
      aux_sym_option_repeat1,
    STATE(45), 1,
      sym_comment,
  [1035] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
    STATE(46), 1,
      sym_comment,
  [1051] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
  [1064] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(171), 2,
      sym__newline,
      aux_sym_option_token1,
  [1075] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(173), 1,
      sym__word,
    STATE(49), 1,
      sym_comment,
  [1088] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(159), 2,
      sym__newline,
      aux_sym_option_token1,
  [1099] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(161), 1,
      sym__newline,
    STATE(51), 1,
      sym_comment,
  [1112] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
  [1125] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym__newline,
      aux_sym_option_token1,
  [1136] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_comment,
  [1149] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(181), 1,
      sym__newline,
    STATE(55), 1,
      sym_comment,
  [1162] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_comment,
  [1175] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_comment,
  [1188] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_comment,
  [1201] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_comment,
  [1214] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(189), 1,
      sym__newline,
    STATE(60), 1,
      sym_comment,
  [1227] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_option_token1,
    ACTIONS(191), 1,
      sym__newline,
    STATE(61), 1,
      sym_comment,
  [1240] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 147,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 279,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 402,
  [SMALL_STATE(15)] = 424,
  [SMALL_STATE(16)] = 446,
  [SMALL_STATE(17)] = 467,
  [SMALL_STATE(18)] = 494,
  [SMALL_STATE(19)] = 521,
  [SMALL_STATE(20)] = 542,
  [SMALL_STATE(21)] = 563,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 605,
  [SMALL_STATE(24)] = 630,
  [SMALL_STATE(25)] = 657,
  [SMALL_STATE(26)] = 678,
  [SMALL_STATE(27)] = 699,
  [SMALL_STATE(28)] = 720,
  [SMALL_STATE(29)] = 742,
  [SMALL_STATE(30)] = 764,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 806,
  [SMALL_STATE(33)] = 825,
  [SMALL_STATE(34)] = 841,
  [SMALL_STATE(35)] = 861,
  [SMALL_STATE(36)] = 877,
  [SMALL_STATE(37)] = 893,
  [SMALL_STATE(38)] = 909,
  [SMALL_STATE(39)] = 925,
  [SMALL_STATE(40)] = 941,
  [SMALL_STATE(41)] = 957,
  [SMALL_STATE(42)] = 973,
  [SMALL_STATE(43)] = 987,
  [SMALL_STATE(44)] = 1003,
  [SMALL_STATE(45)] = 1019,
  [SMALL_STATE(46)] = 1035,
  [SMALL_STATE(47)] = 1051,
  [SMALL_STATE(48)] = 1064,
  [SMALL_STATE(49)] = 1075,
  [SMALL_STATE(50)] = 1088,
  [SMALL_STATE(51)] = 1099,
  [SMALL_STATE(52)] = 1112,
  [SMALL_STATE(53)] = 1125,
  [SMALL_STATE(54)] = 1136,
  [SMALL_STATE(55)] = 1149,
  [SMALL_STATE(56)] = 1162,
  [SMALL_STATE(57)] = 1175,
  [SMALL_STATE(58)] = 1188,
  [SMALL_STATE(59)] = 1201,
  [SMALL_STATE(60)] = 1214,
  [SMALL_STATE(61)] = 1227,
  [SMALL_STATE(62)] = 1240,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(61),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(11),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_route, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_route, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_server, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_server, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_server_repeat1, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_server_repeat1, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4, 0, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3, 0, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, 0, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_value, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, 0, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
