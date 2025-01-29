#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_id = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_DOT = 4,
  sym_integer = 5,
  anon_sym_DOT_DOT = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COLON = 11,
  anon_sym_EQ = 12,
  anon_sym_COMMA = 13,
  anon_sym_SEMI = 14,
  anon_sym_QMARK = 15,
  anon_sym_POUND = 16,
  sym_string = 17,
  sym_program = 18,
  sym_array = 19,
  sym_nsid = 20,
  sym_slice = 21,
  sym_block = 22,
  sym_scope = 23,
  sym_params = 24,
  sym_param = 25,
  sym_type = 26,
  sym_optional = 27,
  sym_ref = 28,
  aux_sym_program_repeat1 = 29,
  aux_sym_nsid_repeat1 = 30,
  aux_sym_block_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [sym_integer] = "integer",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_QMARK] = "\?",
  [anon_sym_POUND] = "#",
  [sym_string] = "string",
  [sym_program] = "program",
  [sym_array] = "array",
  [sym_nsid] = "nsid",
  [sym_slice] = "slice",
  [sym_block] = "block",
  [sym_scope] = "scope",
  [sym_params] = "params",
  [sym_param] = "param",
  [sym_type] = "type",
  [sym_optional] = "optional",
  [sym_ref] = "ref",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_nsid_repeat1] = "nsid_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_integer] = sym_integer,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_string] = sym_string,
  [sym_program] = sym_program,
  [sym_array] = sym_array,
  [sym_nsid] = sym_nsid,
  [sym_slice] = sym_slice,
  [sym_block] = sym_block,
  [sym_scope] = sym_scope,
  [sym_params] = sym_params,
  [sym_param] = sym_param,
  [sym_type] = sym_type,
  [sym_optional] = sym_optional,
  [sym_ref] = sym_ref,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_nsid_repeat1] = aux_sym_nsid_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_nsid] = {
    .visible = true,
    .named = true,
  },
  [sym_slice] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nsid_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_array = 1,
  field_max = 2,
  field_min = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_max] = "max",
  [field_min] = "min",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_array, 1},
  [1] =
    {field_min, 0},
  [2] =
    {field_max, 1},
  [3] =
    {field_array, 3},
  [4] =
    {field_max, 2},
    {field_min, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
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
  [36] = 36,
  [37] = 37,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 2,
        '#', 22,
        '(', 15,
        ')', 16,
        ',', 19,
        '.', 10,
        ':', 17,
        ';', 20,
        '=', 18,
        '?', 21,
        '[', 7,
        ']', 8,
        '{', 13,
        '}', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ']') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '{') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(45),
    [sym_nsid] = STATE(42),
    [sym_scope] = STATE(26),
    [aux_sym_program_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      sym_id,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_ref,
    STATE(41), 1,
      sym_optional,
    STATE(42), 1,
      sym_nsid,
    STATE(14), 2,
      sym_param,
      aux_sym_block_repeat1,
    STATE(25), 2,
      sym_scope,
      aux_sym_program_repeat1,
  [27] = 2,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(13), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [41] = 2,
    ACTIONS(19), 1,
      sym_integer,
    ACTIONS(17), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [55] = 3,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_params,
    ACTIONS(21), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [71] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_array,
    ACTIONS(29), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(25), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [88] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      sym_id,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      anon_sym_DOT_DOT,
    ACTIONS(37), 1,
      sym_string,
    STATE(9), 3,
      sym_slice,
      sym_type,
      sym_ref,
  [109] = 6,
    ACTIONS(39), 1,
      sym_id,
    ACTIONS(44), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_ref,
    STATE(41), 1,
      sym_optional,
    ACTIONS(42), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(8), 2,
      sym_param,
      aux_sym_block_repeat1,
  [130] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_array,
    ACTIONS(49), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(47), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [147] = 1,
    ACTIONS(51), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [158] = 1,
    ACTIONS(53), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [169] = 1,
    ACTIONS(55), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [179] = 6,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    STATE(35), 1,
      sym_block,
    STATE(36), 1,
      aux_sym_nsid_repeat1,
    ACTIONS(61), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [199] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      sym_id,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_ref,
    STATE(41), 1,
      sym_optional,
    STATE(8), 2,
      sym_param,
      aux_sym_block_repeat1,
  [219] = 1,
    ACTIONS(69), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [229] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      sym_id,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_ref,
    STATE(41), 1,
      sym_optional,
    STATE(18), 2,
      sym_param,
      aux_sym_block_repeat1,
  [249] = 1,
    ACTIONS(73), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [259] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      sym_id,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_ref,
    STATE(41), 1,
      sym_optional,
    STATE(8), 2,
      sym_param,
      aux_sym_block_repeat1,
  [279] = 1,
    ACTIONS(77), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [289] = 1,
    ACTIONS(79), 6,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [298] = 1,
    ACTIONS(81), 6,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [307] = 4,
    ACTIONS(85), 1,
      sym_id,
    STATE(42), 1,
      sym_nsid,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_scope,
      aux_sym_program_repeat1,
  [322] = 2,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(88), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [333] = 2,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(92), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [344] = 4,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_nsid,
    STATE(22), 2,
      sym_scope,
      aux_sym_program_repeat1,
  [358] = 4,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_nsid,
    STATE(22), 2,
      sym_scope,
      aux_sym_program_repeat1,
  [372] = 1,
    ACTIONS(98), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [379] = 4,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      anon_sym_DOT_DOT,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym_slice,
  [392] = 4,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
    STATE(36), 1,
      aux_sym_nsid_repeat1,
  [405] = 1,
    ACTIONS(102), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [412] = 1,
    ACTIONS(104), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [419] = 1,
    ACTIONS(106), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [426] = 2,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(61), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [434] = 1,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_id,
  [440] = 1,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_id,
  [446] = 3,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      aux_sym_nsid_repeat1,
  [456] = 1,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_id,
  [462] = 3,
    ACTIONS(116), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      aux_sym_nsid_repeat1,
  [472] = 1,
    ACTIONS(119), 2,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [477] = 1,
    ACTIONS(121), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [482] = 1,
    ACTIONS(61), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [487] = 2,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
  [494] = 1,
    ACTIONS(123), 1,
      anon_sym_DOT_DOT,
  [498] = 1,
    ACTIONS(125), 1,
      sym_id,
  [502] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [506] = 1,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
  [510] = 1,
    ACTIONS(131), 1,
      sym_id,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 169,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 219,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 259,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 298,
  [SMALL_STATE(22)] = 307,
  [SMALL_STATE(23)] = 322,
  [SMALL_STATE(24)] = 333,
  [SMALL_STATE(25)] = 344,
  [SMALL_STATE(26)] = 358,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 379,
  [SMALL_STATE(29)] = 392,
  [SMALL_STATE(30)] = 405,
  [SMALL_STATE(31)] = 412,
  [SMALL_STATE(32)] = 419,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 434,
  [SMALL_STATE(35)] = 440,
  [SMALL_STATE(36)] = 446,
  [SMALL_STATE(37)] = 456,
  [SMALL_STATE(38)] = 462,
  [SMALL_STATE(39)] = 472,
  [SMALL_STATE(40)] = 477,
  [SMALL_STATE(41)] = 482,
  [SMALL_STATE(42)] = 487,
  [SMALL_STATE(43)] = 494,
  [SMALL_STATE(44)] = 498,
  [SMALL_STATE(45)] = 502,
  [SMALL_STATE(46)] = 506,
  [SMALL_STATE(47)] = 510,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice, 2, 0, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice, 3, 0, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice, 2, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 5, 0, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nsid, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nsid_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nsid_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ana(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_id,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
