#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_id = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_DOT = 4,
  sym_integer = 5,
  anon_sym_DOT_DOT = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_record = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_COLON = 12,
  anon_sym_EQ = 13,
  anon_sym_COMMA = 14,
  anon_sym_SEMI = 15,
  anon_sym_QMARK = 16,
  anon_sym_POUND = 17,
  sym_string = 18,
  sym_program = 19,
  sym_array = 20,
  sym_nsid = 21,
  sym_slice = 22,
  sym_block = 23,
  sym_scope = 24,
  sym_record = 25,
  sym_params = 26,
  sym_param = 27,
  sym_type = 28,
  sym_optional = 29,
  sym_ref = 30,
  aux_sym_program_repeat1 = 31,
  aux_sym_nsid_repeat1 = 32,
  aux_sym_block_repeat1 = 33,
  aux_sym_block_repeat2 = 34,
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
  [anon_sym_record] = "record",
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
  [sym_record] = "record",
  [sym_params] = "params",
  [sym_param] = "param",
  [sym_type] = "type",
  [sym_optional] = "optional",
  [sym_ref] = "ref",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_nsid_repeat1] = "nsid_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
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
  [anon_sym_record] = anon_sym_record,
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
  [sym_record] = sym_record,
  [sym_params] = sym_params,
  [sym_param] = sym_param,
  [sym_type] = sym_type,
  [sym_optional] = sym_optional,
  [sym_ref] = sym_ref,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_nsid_repeat1] = aux_sym_nsid_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
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
  [anon_sym_record] = {
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
  [sym_record] = {
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
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_array = 1,
  field_id = 2,
  field_max = 3,
  field_min = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_id] = "id",
  [field_max] = "max",
  [field_min] = "min",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_id, 0},
  [1] =
    {field_array, 1},
  [2] =
    {field_min, 0},
  [3] =
    {field_max, 1},
  [4] =
    {field_array, 3},
  [5] =
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
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
      if (lookahead == 'r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_record);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
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
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
    [anon_sym_record] = ACTIONS(1),
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
    [sym_program] = STATE(49),
    [sym_nsid] = STATE(44),
    [sym_scope] = STATE(27),
    [aux_sym_program_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      sym_id,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_ref,
    STATE(44), 1,
      sym_nsid,
    STATE(45), 1,
      sym_optional,
    STATE(15), 2,
      sym_param,
      aux_sym_block_repeat1,
    STATE(14), 3,
      sym_scope,
      sym_record,
      aux_sym_block_repeat2,
  [31] = 2,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(15), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [45] = 3,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_params,
    ACTIONS(19), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [61] = 2,
    ACTIONS(25), 1,
      sym_integer,
    ACTIONS(23), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [75] = 6,
    ACTIONS(27), 1,
      sym_id,
    ACTIONS(32), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_ref,
    STATE(45), 1,
      sym_optional,
    ACTIONS(30), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym_param,
      aux_sym_block_repeat1,
  [96] = 4,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_array,
    ACTIONS(39), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(35), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [113] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym_id,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(47), 1,
      sym_string,
    STATE(10), 3,
      sym_slice,
      sym_type,
      sym_ref,
  [134] = 1,
    ACTIONS(49), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [145] = 4,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_array,
    ACTIONS(53), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(51), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [162] = 1,
    ACTIONS(55), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [173] = 6,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      sym_block,
    STATE(38), 1,
      aux_sym_nsid_repeat1,
    ACTIONS(61), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [193] = 1,
    ACTIONS(65), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [203] = 5,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(67), 1,
      sym_id,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_nsid,
    STATE(16), 3,
      sym_scope,
      sym_record,
      aux_sym_block_repeat2,
  [221] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym_id,
    STATE(7), 1,
      sym_ref,
    STATE(45), 1,
      sym_optional,
    STATE(6), 2,
      sym_param,
      aux_sym_block_repeat1,
  [241] = 5,
    ACTIONS(73), 1,
      sym_id,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_record,
    STATE(44), 1,
      sym_nsid,
    STATE(16), 3,
      sym_scope,
      sym_record,
      aux_sym_block_repeat2,
  [259] = 1,
    ACTIONS(81), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [269] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      sym_id,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_ref,
    STATE(45), 1,
      sym_optional,
    STATE(20), 2,
      sym_param,
      aux_sym_block_repeat1,
  [289] = 1,
    ACTIONS(85), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [299] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_ref,
    STATE(45), 1,
      sym_optional,
    STATE(6), 2,
      sym_param,
      aux_sym_block_repeat1,
  [319] = 1,
    ACTIONS(89), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [329] = 2,
    ACTIONS(93), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(91), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [340] = 2,
    ACTIONS(97), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(95), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [351] = 1,
    ACTIONS(99), 6,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [360] = 1,
    ACTIONS(101), 6,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_id,
  [369] = 4,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym_id,
    STATE(44), 1,
      sym_nsid,
    STATE(26), 2,
      sym_scope,
      aux_sym_program_repeat1,
  [383] = 4,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_nsid,
    STATE(26), 2,
      sym_scope,
      aux_sym_program_repeat1,
  [397] = 4,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      sym_slice,
  [410] = 1,
    ACTIONS(112), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [417] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(116), 2,
      anon_sym_record,
      sym_id,
  [426] = 2,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(120), 2,
      anon_sym_record,
      sym_id,
  [435] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(124), 2,
      anon_sym_record,
      sym_id,
  [444] = 1,
    ACTIONS(126), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [451] = 1,
    ACTIONS(128), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [458] = 1,
    ACTIONS(130), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_id,
  [465] = 4,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
    STATE(38), 1,
      aux_sym_nsid_repeat1,
  [478] = 2,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(61), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [486] = 3,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      aux_sym_nsid_repeat1,
  [496] = 3,
    ACTIONS(5), 1,
      sym_id,
    STATE(41), 1,
      sym_scope,
    STATE(44), 1,
      sym_nsid,
  [506] = 3,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      aux_sym_nsid_repeat1,
  [516] = 2,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 2,
      anon_sym_record,
      sym_id,
  [524] = 1,
    ACTIONS(137), 2,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [529] = 1,
    ACTIONS(143), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [534] = 2,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
  [541] = 1,
    ACTIONS(61), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [546] = 1,
    ACTIONS(145), 1,
      anon_sym_DOT_DOT,
  [550] = 1,
    ACTIONS(147), 1,
      sym_id,
  [554] = 1,
    ACTIONS(149), 1,
      sym_id,
  [558] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [562] = 1,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 75,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 173,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 259,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 289,
  [SMALL_STATE(20)] = 299,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 360,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 383,
  [SMALL_STATE(28)] = 397,
  [SMALL_STATE(29)] = 410,
  [SMALL_STATE(30)] = 417,
  [SMALL_STATE(31)] = 426,
  [SMALL_STATE(32)] = 435,
  [SMALL_STATE(33)] = 444,
  [SMALL_STATE(34)] = 451,
  [SMALL_STATE(35)] = 458,
  [SMALL_STATE(36)] = 465,
  [SMALL_STATE(37)] = 478,
  [SMALL_STATE(38)] = 486,
  [SMALL_STATE(39)] = 496,
  [SMALL_STATE(40)] = 506,
  [SMALL_STATE(41)] = 516,
  [SMALL_STATE(42)] = 524,
  [SMALL_STATE(43)] = 529,
  [SMALL_STATE(44)] = 534,
  [SMALL_STATE(45)] = 541,
  [SMALL_STATE(46)] = 546,
  [SMALL_STATE(47)] = 550,
  [SMALL_STATE(48)] = 554,
  [SMALL_STATE(49)] = 558,
  [SMALL_STATE(50)] = 562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice, 2, 0, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice, 2, 0, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice, 3, 0, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(36),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(39),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 2, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 5, 0, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nsid, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nsid_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nsid_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
