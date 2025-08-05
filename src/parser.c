#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_CHIP = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_IN = 4,
  anon_sym_COMMA = 5,
  anon_sym_SEMI = 6,
  anon_sym_OUT = 7,
  anon_sym_BUILTIN = 8,
  anon_sym_CLOCKED = 9,
  anon_sym_PARTS = 10,
  anon_sym_COLON = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_EQ = 14,
  sym_identifier = 15,
  sym_number = 16,
  sym_comment = 17,
  sym_source_file = 18,
  sym__definition = 19,
  sym_chip_definition = 20,
  sym_chip_header = 21,
  sym_in_section = 22,
  sym_out_section = 23,
  sym_chip_body = 24,
  sym_builtin_body = 25,
  sym_clocked_body = 26,
  sym_parts_body = 27,
  sym_part = 28,
  sym_connection = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_in_section_repeat1 = 31,
  aux_sym_out_section_repeat1 = 32,
  aux_sym_clocked_body_repeat1 = 33,
  aux_sym_parts_body_repeat1 = 34,
  aux_sym_part_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CHIP] = "CHIP",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_IN] = "IN",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_OUT] = "OUT",
  [anon_sym_BUILTIN] = "BUILTIN",
  [anon_sym_CLOCKED] = "CLOCKED",
  [anon_sym_PARTS] = "PARTS",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_chip_definition] = "chip_definition",
  [sym_chip_header] = "chip_header",
  [sym_in_section] = "in_section",
  [sym_out_section] = "out_section",
  [sym_chip_body] = "chip_body",
  [sym_builtin_body] = "builtin_body",
  [sym_clocked_body] = "clocked_body",
  [sym_parts_body] = "parts_body",
  [sym_part] = "part",
  [sym_connection] = "connection",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_in_section_repeat1] = "in_section_repeat1",
  [aux_sym_out_section_repeat1] = "out_section_repeat1",
  [aux_sym_clocked_body_repeat1] = "clocked_body_repeat1",
  [aux_sym_parts_body_repeat1] = "parts_body_repeat1",
  [aux_sym_part_repeat1] = "part_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CHIP] = anon_sym_CHIP,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_OUT] = anon_sym_OUT,
  [anon_sym_BUILTIN] = anon_sym_BUILTIN,
  [anon_sym_CLOCKED] = anon_sym_CLOCKED,
  [anon_sym_PARTS] = anon_sym_PARTS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_chip_definition] = sym_chip_definition,
  [sym_chip_header] = sym_chip_header,
  [sym_in_section] = sym_in_section,
  [sym_out_section] = sym_out_section,
  [sym_chip_body] = sym_chip_body,
  [sym_builtin_body] = sym_builtin_body,
  [sym_clocked_body] = sym_clocked_body,
  [sym_parts_body] = sym_parts_body,
  [sym_part] = sym_part,
  [sym_connection] = sym_connection,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_in_section_repeat1] = aux_sym_in_section_repeat1,
  [aux_sym_out_section_repeat1] = aux_sym_out_section_repeat1,
  [aux_sym_clocked_body_repeat1] = aux_sym_clocked_body_repeat1,
  [aux_sym_parts_body_repeat1] = aux_sym_parts_body_repeat1,
  [aux_sym_part_repeat1] = aux_sym_part_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CHIP] = {
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
  [anon_sym_IN] = {
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
  [anon_sym_OUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BUILTIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLOCKED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_chip_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_chip_header] = {
    .visible = true,
    .named = true,
  },
  [sym_in_section] = {
    .visible = true,
    .named = true,
  },
  [sym_out_section] = {
    .visible = true,
    .named = true,
  },
  [sym_chip_body] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_body] = {
    .visible = true,
    .named = true,
  },
  [sym_clocked_body] = {
    .visible = true,
    .named = true,
  },
  [sym_parts_body] = {
    .visible = true,
    .named = true,
  },
  [sym_part] = {
    .visible = true,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_in_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_out_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_clocked_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parts_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_part_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_chip_name = 2,
  field_chip_pin = 3,
  field_header = 4,
  field_input_pin_name = 5,
  field_name = 6,
  field_output_pin_name = 7,
  field_part_pin = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_chip_name] = "chip_name",
  [field_chip_pin] = "chip_pin",
  [field_header] = "header",
  [field_input_pin_name] = "input_pin_name",
  [field_name] = "name",
  [field_output_pin_name] = "output_pin_name",
  [field_part_pin] = "part_pin",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_input_pin_name, 1},
  [1] =
    {field_body, 4},
    {field_header, 3},
    {field_name, 1},
  [4] =
    {field_input_pin_name, 1},
    {field_input_pin_name, 2, .inherited = true},
  [6] =
    {field_input_pin_name, 0, .inherited = true},
    {field_input_pin_name, 1, .inherited = true},
  [8] =
    {field_chip_name, 1},
  [9] =
    {field_output_pin_name, 1},
  [10] =
    {field_output_pin_name, 1},
    {field_output_pin_name, 2, .inherited = true},
  [12] =
    {field_output_pin_name, 0, .inherited = true},
    {field_output_pin_name, 1, .inherited = true},
  [14] =
    {field_chip_name, 0},
  [15] =
    {field_chip_pin, 2},
    {field_part_pin, 0},
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
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == 'B') ADVANCE(25);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'H') ADVANCE(12);
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'K') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'U') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_CHIP);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BUILTIN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_CLOCKED);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PARTS);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CHIP] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
    [anon_sym_BUILTIN] = ACTIONS(1),
    [anon_sym_CLOCKED] = ACTIONS(1),
    [anon_sym_PARTS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym__definition] = STATE(3),
    [sym_chip_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_CHIP] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BUILTIN,
    ACTIONS(11), 1,
      anon_sym_CLOCKED,
    ACTIONS(13), 1,
      anon_sym_PARTS,
    STATE(36), 1,
      sym_chip_body,
    STATE(52), 3,
      sym_builtin_body,
      sym_clocked_body,
      sym_parts_body,
  [21] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_CHIP,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym__definition,
      sym_chip_definition,
      aux_sym_source_file_repeat1,
  [36] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_CHIP,
    STATE(4), 3,
      sym__definition,
      sym_chip_definition,
      aux_sym_source_file_repeat1,
  [51] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(6), 2,
      sym_part,
      aux_sym_parts_body_repeat1,
  [65] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(6), 2,
      sym_part,
      aux_sym_parts_body_repeat1,
  [79] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(5), 2,
      sym_part,
      aux_sym_parts_body_repeat1,
  [93] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_BUILTIN,
      anon_sym_CLOCKED,
      anon_sym_PARTS,
  [102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(17), 1,
      sym_connection,
  [115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      aux_sym_out_section_repeat1,
  [128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_BUILTIN,
      anon_sym_CLOCKED,
      anon_sym_PARTS,
  [137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      aux_sym_in_section_repeat1,
  [150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_part_repeat1,
  [163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_part_repeat1,
  [176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_IN,
    STATE(2), 1,
      sym_chip_header,
    STATE(34), 1,
      sym_in_section,
  [189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      aux_sym_clocked_body_repeat1,
  [202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_part_repeat1,
  [215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      aux_sym_clocked_body_repeat1,
  [228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      aux_sym_out_section_repeat1,
  [241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 3,
      anon_sym_BUILTIN,
      anon_sym_CLOCKED,
      anon_sym_PARTS,
  [250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      aux_sym_in_section_repeat1,
  [263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_clocked_body_repeat1,
  [276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_out_section_repeat1,
  [289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      aux_sym_in_section_repeat1,
  [302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(31), 1,
      sym_connection,
  [312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_CHIP,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_OUT,
    STATE(8), 1,
      sym_out_section,
  [386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
  [401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_identifier,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
  [422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
  [429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_identifier,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
  [443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_OUT,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SEMI,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_OUT,
  [471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SEMI,
  [478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_EQ,
  [485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_identifier,
  [492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_identifier,
  [499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_identifier,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
  [513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_SEMI,
  [520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COLON,
  [527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_identifier,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
  [541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_identifier,
  [548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SEMI,
  [555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
  [562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 115,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 163,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 189,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 215,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 241,
  [SMALL_STATE(21)] = 250,
  [SMALL_STATE(22)] = 263,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 289,
  [SMALL_STATE(25)] = 302,
  [SMALL_STATE(26)] = 312,
  [SMALL_STATE(27)] = 320,
  [SMALL_STATE(28)] = 328,
  [SMALL_STATE(29)] = 336,
  [SMALL_STATE(30)] = 344,
  [SMALL_STATE(31)] = 352,
  [SMALL_STATE(32)] = 360,
  [SMALL_STATE(33)] = 368,
  [SMALL_STATE(34)] = 376,
  [SMALL_STATE(35)] = 386,
  [SMALL_STATE(36)] = 394,
  [SMALL_STATE(37)] = 401,
  [SMALL_STATE(38)] = 408,
  [SMALL_STATE(39)] = 415,
  [SMALL_STATE(40)] = 422,
  [SMALL_STATE(41)] = 429,
  [SMALL_STATE(42)] = 436,
  [SMALL_STATE(43)] = 443,
  [SMALL_STATE(44)] = 450,
  [SMALL_STATE(45)] = 457,
  [SMALL_STATE(46)] = 464,
  [SMALL_STATE(47)] = 471,
  [SMALL_STATE(48)] = 478,
  [SMALL_STATE(49)] = 485,
  [SMALL_STATE(50)] = 492,
  [SMALL_STATE(51)] = 499,
  [SMALL_STATE(52)] = 506,
  [SMALL_STATE(53)] = 513,
  [SMALL_STATE(54)] = 520,
  [SMALL_STATE(55)] = 527,
  [SMALL_STATE(56)] = 534,
  [SMALL_STATE(57)] = 541,
  [SMALL_STATE(58)] = 548,
  [SMALL_STATE(59)] = 555,
  [SMALL_STATE(60)] = 562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parts_body, 3),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parts_body_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parts_body_repeat1, 2), SHIFT_REPEAT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parts_body, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chip_header, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_section, 3, .production_id = 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2), SHIFT_REPEAT(25),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clocked_body_repeat1, 2), SHIFT_REPEAT(37),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clocked_body_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_out_section_repeat1, 2, .production_id = 8), SHIFT_REPEAT(41),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_out_section_repeat1, 2, .production_id = 8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_section, 4, .production_id = 7),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_section_repeat1, 2, .production_id = 4), SHIFT_REPEAT(49),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_section_repeat1, 2, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_out_section_repeat1, 2, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_section_repeat1, 2, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 5, .production_id = 9),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 6, .production_id = 9),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chip_definition, 6, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 4, .production_id = 9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3, .production_id = 10),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clocked_body, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clocked_body, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_body, 3, .production_id = 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_section, 4, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_section, 3, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chip_body, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hdl(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
