#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  sym_id = 1,
  anon_sym_AT = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_record = 5,
  anon_sym_SEMI = 6,
  anon_sym_COMMA = 7,
  anon_sym_COLON = 8,
  anon_sym_QMARK_COLON = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_DOT_DOT = 12,
  sym_integer = 13,
  anon_sym_DOT = 14,
  anon_sym_POUND = 15,
  sym_program = 16,
  sym_namespace = 17,
  sym_object = 18,
  sym_record = 19,
  sym_params = 20,
  sym_param = 21,
  sym_optional = 22,
  sym__type = 23,
  sym_type = 24,
  sym_array = 25,
  sym__slice = 26,
  sym_nsid = 27,
  sym_ref = 28,
  aux_sym_program_repeat1 = 29,
  aux_sym_namespace_repeat1 = 30,
  aux_sym_params_repeat1 = 31,
  aux_sym_nsid_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_record] = "record",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK_COLON] = "\?:",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT_DOT] = "..",
  [sym_integer] = "integer",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [sym_program] = "program",
  [sym_namespace] = "namespace",
  [sym_object] = "object",
  [sym_record] = "record",
  [sym_params] = "params",
  [sym_param] = "param",
  [sym_optional] = "optional",
  [sym__type] = "_type",
  [sym_type] = "type",
  [sym_array] = "array",
  [sym__slice] = "_slice",
  [sym_nsid] = "nsid",
  [sym_ref] = "ref",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_namespace_repeat1] = "namespace_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_nsid_repeat1] = "nsid_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK_COLON] = anon_sym_QMARK_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_integer] = sym_integer,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_program] = sym_program,
  [sym_namespace] = sym_namespace,
  [sym_object] = sym_object,
  [sym_record] = sym_record,
  [sym_params] = sym_params,
  [sym_param] = sym_param,
  [sym_optional] = sym_optional,
  [sym__type] = sym__type,
  [sym_type] = sym_type,
  [sym_array] = sym_array,
  [sym__slice] = sym__slice,
  [sym_nsid] = sym_nsid,
  [sym_ref] = sym_ref,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_namespace_repeat1] = aux_sym_namespace_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_nsid_repeat1] = aux_sym_nsid_repeat1,
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
  [anon_sym_AT] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
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
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__slice] = {
    .visible = false,
    .named = true,
  },
  [sym_nsid] = {
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
  [aux_sym_namespace_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nsid_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_id = 2,
  field_max = 3,
  field_min = 4,
  field_name = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_id] = "id",
  [field_max] = "max",
  [field_min] = "min",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 3},
    {field_name, 1},
  [3] =
    {field_name, 0},
  [4] =
    {field_id, 1},
  [5] =
    {field_body, 2},
    {field_name, 0},
  [7] =
    {field_name, 0},
    {field_type, 2},
  [9] =
    {field_max, 1},
  [10] =
    {field_min, 0},
  [11] =
    {field_max, 2, .inherited = true},
    {field_min, 2, .inherited = true},
  [13] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '#', 20,
        ',', 10,
        '.', 19,
        ':', 11,
        ';', 9,
        '?', 4,
        '@', 6,
        '[', 13,
        ']', 14,
        '{', 7,
        '}', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == ']') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
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
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(41),
    [sym_namespace] = STATE(24),
    [aux_sym_program_repeat1] = STATE(24),
    [anon_sym_AT] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_nsid_repeat1,
    ACTIONS(5), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_POUND,
  [15] = 3,
    ACTIONS(11), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_nsid_repeat1,
    ACTIONS(9), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_POUND,
  [30] = 6,
    ACTIONS(14), 1,
      sym_id,
    ACTIONS(16), 1,
      anon_sym_RBRACE,
    ACTIONS(18), 1,
      anon_sym_POUND,
    STATE(6), 1,
      aux_sym_params_repeat1,
    STATE(40), 1,
      sym_params,
    STATE(16), 3,
      sym_param,
      sym_optional,
      sym_ref,
  [51] = 1,
    ACTIONS(9), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_DOT,
      anon_sym_POUND,
  [61] = 5,
    ACTIONS(14), 1,
      sym_id,
    ACTIONS(18), 1,
      anon_sym_POUND,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_params_repeat1,
    STATE(16), 3,
      sym_param,
      sym_optional,
      sym_ref,
  [79] = 3,
    ACTIONS(7), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_nsid_repeat1,
    ACTIONS(22), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_POUND,
  [93] = 5,
    ACTIONS(24), 1,
      sym_id,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_POUND,
    STATE(8), 1,
      aux_sym_params_repeat1,
    STATE(16), 3,
      sym_param,
      sym_optional,
      sym_ref,
  [111] = 4,
    ACTIONS(32), 1,
      sym_id,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_record,
    STATE(9), 3,
      sym_object,
      sym_record,
      aux_sym_namespace_repeat1,
  [126] = 4,
    ACTIONS(18), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      sym_id,
    STATE(13), 1,
      sym_type,
    STATE(18), 3,
      sym__type,
      sym_array,
      sym_ref,
  [141] = 4,
    ACTIONS(42), 1,
      sym_id,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_record,
    STATE(9), 3,
      sym_object,
      sym_record,
      aux_sym_namespace_repeat1,
  [156] = 4,
    ACTIONS(18), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      sym_id,
    STATE(13), 1,
      sym_type,
    STATE(20), 3,
      sym__type,
      sym_array,
      sym_ref,
  [171] = 2,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_POUND,
  [182] = 1,
    ACTIONS(52), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_id,
      anon_sym_POUND,
  [191] = 4,
    ACTIONS(42), 1,
      sym_id,
    ACTIONS(46), 1,
      anon_sym_record,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(11), 3,
      sym_object,
      sym_record,
      aux_sym_namespace_repeat1,
  [206] = 2,
    ACTIONS(58), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(56), 3,
      anon_sym_RBRACE,
      sym_id,
      anon_sym_POUND,
  [216] = 1,
    ACTIONS(22), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_POUND,
  [224] = 1,
    ACTIONS(60), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_POUND,
  [232] = 1,
    ACTIONS(62), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_POUND,
  [240] = 1,
    ACTIONS(64), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_POUND,
  [248] = 1,
    ACTIONS(66), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      sym_id,
      anon_sym_POUND,
  [256] = 4,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    ACTIONS(70), 1,
      anon_sym_DOT_DOT,
    ACTIONS(72), 1,
      sym_integer,
    STATE(44), 1,
      sym__slice,
  [269] = 3,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_AT,
    STATE(23), 2,
      sym_namespace,
      aux_sym_program_repeat1,
  [280] = 3,
    ACTIONS(3), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_namespace,
      aux_sym_program_repeat1,
  [291] = 2,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 2,
      anon_sym_record,
      sym_id,
  [299] = 1,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      sym_id,
      anon_sym_POUND,
  [305] = 2,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 2,
      anon_sym_record,
      sym_id,
  [313] = 2,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 2,
      anon_sym_record,
      sym_id,
  [321] = 2,
    ACTIONS(93), 1,
      sym_id,
    STATE(27), 1,
      sym_object,
  [328] = 1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [333] = 2,
    ACTIONS(97), 1,
      sym_id,
    STATE(42), 1,
      sym_nsid,
  [340] = 1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [345] = 2,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(103), 1,
      sym_integer,
  [352] = 2,
    ACTIONS(7), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_nsid_repeat1,
  [359] = 2,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      anon_sym_QMARK_COLON,
  [366] = 2,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(111), 1,
      sym_integer,
  [373] = 2,
    ACTIONS(113), 1,
      sym_id,
    STATE(17), 1,
      sym_nsid,
  [380] = 1,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
  [384] = 1,
    ACTIONS(117), 1,
      sym_id,
  [388] = 1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
  [392] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [396] = 1,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
  [400] = 1,
    ACTIONS(125), 1,
      anon_sym_DOT_DOT,
  [404] = 1,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
  [408] = 1,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
  [412] = 1,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 141,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 182,
  [SMALL_STATE(15)] = 191,
  [SMALL_STATE(16)] = 206,
  [SMALL_STATE(17)] = 216,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 240,
  [SMALL_STATE(21)] = 248,
  [SMALL_STATE(22)] = 256,
  [SMALL_STATE(23)] = 269,
  [SMALL_STATE(24)] = 280,
  [SMALL_STATE(25)] = 291,
  [SMALL_STATE(26)] = 299,
  [SMALL_STATE(27)] = 305,
  [SMALL_STATE(28)] = 313,
  [SMALL_STATE(29)] = 321,
  [SMALL_STATE(30)] = 328,
  [SMALL_STATE(31)] = 333,
  [SMALL_STATE(32)] = 340,
  [SMALL_STATE(33)] = 345,
  [SMALL_STATE(34)] = 352,
  [SMALL_STATE(35)] = 359,
  [SMALL_STATE(36)] = 366,
  [SMALL_STATE(37)] = 373,
  [SMALL_STATE(38)] = 380,
  [SMALL_STATE(39)] = 384,
  [SMALL_STATE(40)] = 388,
  [SMALL_STATE(41)] = 392,
  [SMALL_STATE(42)] = 396,
  [SMALL_STATE(43)] = 400,
  [SMALL_STATE(44)] = 404,
  [SMALL_STATE(45)] = 408,
  [SMALL_STATE(46)] = 412,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nsid, 2, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nsid_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nsid_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, 0, 4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespace_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespace_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 9),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3, 0, 6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 5, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slice, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slice, 2, 0, 8),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slice, 2, 0, 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slice, 3, 0, 10),
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
