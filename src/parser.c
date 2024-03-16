#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_DASH = 1,
  anon_sym_LBRACK = 2,
  aux_sym_thread_name_token1 = 3,
  anon_sym_RBRACK = 4,
  anon_sym_COLON = 5,
  anon_sym_DOT = 6,
  anon_sym_COMMA = 7,
  anon_sym_E = 8,
  anon_sym_ERROR = 9,
  anon_sym_W = 10,
  anon_sym_WARN = 11,
  anon_sym_I = 12,
  anon_sym_INFO = 13,
  anon_sym_D = 14,
  anon_sym_DEBUG = 15,
  anon_sym_V = 16,
  anon_sym_VERBOSE = 17,
  anon_sym_T = 18,
  anon_sym_TRACE = 19,
  anon_sym_F = 20,
  anon_sym_FINE = 21,
  anon_sym_S = 22,
  anon_sym_SILENT = 23,
  sym_tag = 24,
  sym__any = 25,
  sym__num = 26,
  sym_logs = 27,
  sym_begin_header = 28,
  sym_ide_log_line = 29,
  sym_thread_name = 30,
  sym_log_line = 31,
  sym_pid = 32,
  sym_tid = 33,
  sym_date = 34,
  sym_time = 35,
  sym_priority = 36,
  sym_message = 37,
  aux_sym_logs_repeat1 = 38,
  aux_sym_begin_header_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [aux_sym_thread_name_token1] = "thread_name_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_E] = "E",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_W] = "W",
  [anon_sym_WARN] = "WARN",
  [anon_sym_I] = "I",
  [anon_sym_INFO] = "INFO",
  [anon_sym_D] = "D",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_V] = "V",
  [anon_sym_VERBOSE] = "VERBOSE",
  [anon_sym_T] = "T",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_F] = "F",
  [anon_sym_FINE] = "FINE",
  [anon_sym_S] = "S",
  [anon_sym_SILENT] = "SILENT",
  [sym_tag] = "tag",
  [sym__any] = "_any",
  [sym__num] = "_num",
  [sym_logs] = "logs",
  [sym_begin_header] = "begin_header",
  [sym_ide_log_line] = "ide_log_line",
  [sym_thread_name] = "thread_name",
  [sym_log_line] = "log_line",
  [sym_pid] = "pid",
  [sym_tid] = "tid",
  [sym_date] = "date",
  [sym_time] = "time",
  [sym_priority] = "priority",
  [sym_message] = "message",
  [aux_sym_logs_repeat1] = "logs_repeat1",
  [aux_sym_begin_header_repeat1] = "begin_header_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_thread_name_token1] = aux_sym_thread_name_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_W] = anon_sym_W,
  [anon_sym_WARN] = anon_sym_WARN,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_VERBOSE] = anon_sym_VERBOSE,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_FINE] = anon_sym_FINE,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_SILENT] = anon_sym_SILENT,
  [sym_tag] = sym_tag,
  [sym__any] = sym__any,
  [sym__num] = sym__num,
  [sym_logs] = sym_logs,
  [sym_begin_header] = sym_begin_header,
  [sym_ide_log_line] = sym_ide_log_line,
  [sym_thread_name] = sym_thread_name,
  [sym_log_line] = sym_log_line,
  [sym_pid] = sym_pid,
  [sym_tid] = sym_tid,
  [sym_date] = sym_date,
  [sym_time] = sym_time,
  [sym_priority] = sym_priority,
  [sym_message] = sym_message,
  [aux_sym_logs_repeat1] = aux_sym_logs_repeat1,
  [aux_sym_begin_header_repeat1] = aux_sym_begin_header_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_thread_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_W] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEBUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERBOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SILENT] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__any] = {
    .visible = false,
    .named = true,
  },
  [sym__num] = {
    .visible = false,
    .named = true,
  },
  [sym_logs] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_header] = {
    .visible = true,
    .named = true,
  },
  [sym_ide_log_line] = {
    .visible = true,
    .named = true,
  },
  [sym_thread_name] = {
    .visible = true,
    .named = true,
  },
  [sym_log_line] = {
    .visible = true,
    .named = true,
  },
  [sym_pid] = {
    .visible = true,
    .named = true,
  },
  [sym_tid] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_logs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_begin_header_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_day = 1,
  field_hour = 2,
  field_min = 3,
  field_month = 4,
  field_ms = 5,
  field_sec = 6,
  field_thread_name = 7,
  field_year = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_day] = "day",
  [field_hour] = "hour",
  [field_min] = "min",
  [field_month] = "month",
  [field_ms] = "ms",
  [field_sec] = "sec",
  [field_thread_name] = "thread_name",
  [field_year] = "year",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_day, 2},
    {field_month, 0},
  [2] =
    {field_day, 4},
    {field_month, 2},
    {field_year, 0},
  [5] =
    {field_thread_name, 1},
  [6] =
    {field_hour, 0},
    {field_min, 2},
    {field_ms, 6},
    {field_sec, 4},
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
  [38] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead == 'W') ADVANCE(42);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'B') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'B') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'F') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'G') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_thread_name_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_thread_name_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'R') ADVANCE(20);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_W);
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_V);
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_VERBOSE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'R') ADVANCE(3);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_FINE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SILENT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 28},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_W] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_VERBOSE] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_FINE] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_SILENT] = ACTIONS(1),
    [sym__num] = ACTIONS(1),
  },
  [1] = {
    [sym_logs] = STATE(37),
    [sym_begin_header] = STATE(6),
    [sym_ide_log_line] = STATE(6),
    [sym_log_line] = STATE(6),
    [sym_date] = STATE(16),
    [aux_sym_logs_repeat1] = STATE(6),
    [aux_sym_begin_header_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [sym__num] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      sym__num,
    STATE(14), 1,
      sym_priority,
    STATE(18), 1,
      sym_pid,
    ACTIONS(9), 8,
      anon_sym_E,
      anon_sym_W,
      anon_sym_I,
      anon_sym_D,
      anon_sym_V,
      anon_sym_T,
      anon_sym_F,
      anon_sym_S,
    ACTIONS(11), 8,
      anon_sym_ERROR,
      anon_sym_WARN,
      anon_sym_INFO,
      anon_sym_DEBUG,
      anon_sym_VERBOSE,
      anon_sym_TRACE,
      anon_sym_FINE,
      anon_sym_SILENT,
  [30] = 2,
    ACTIONS(15), 8,
      anon_sym_E,
      anon_sym_W,
      anon_sym_I,
      anon_sym_D,
      anon_sym_V,
      anon_sym_T,
      anon_sym_F,
      anon_sym_S,
    ACTIONS(17), 9,
      anon_sym_ERROR,
      anon_sym_WARN,
      anon_sym_INFO,
      anon_sym_DEBUG,
      anon_sym_VERBOSE,
      anon_sym_TRACE,
      anon_sym_FINE,
      anon_sym_SILENT,
      sym__num,
  [52] = 3,
    STATE(21), 1,
      sym_priority,
    ACTIONS(19), 8,
      anon_sym_E,
      anon_sym_W,
      anon_sym_I,
      anon_sym_D,
      anon_sym_V,
      anon_sym_T,
      anon_sym_F,
      anon_sym_S,
    ACTIONS(21), 8,
      anon_sym_ERROR,
      anon_sym_WARN,
      anon_sym_INFO,
      anon_sym_DEBUG,
      anon_sym_VERBOSE,
      anon_sym_TRACE,
      anon_sym_FINE,
      anon_sym_SILENT,
  [76] = 2,
    ACTIONS(23), 8,
      anon_sym_E,
      anon_sym_W,
      anon_sym_I,
      anon_sym_D,
      anon_sym_V,
      anon_sym_T,
      anon_sym_F,
      anon_sym_S,
    ACTIONS(25), 8,
      anon_sym_ERROR,
      anon_sym_WARN,
      anon_sym_INFO,
      anon_sym_DEBUG,
      anon_sym_VERBOSE,
      anon_sym_TRACE,
      anon_sym_FINE,
      anon_sym_SILENT,
  [97] = 6,
    ACTIONS(5), 1,
      anon_sym_DASH,
    ACTIONS(7), 1,
      sym__num,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_begin_header_repeat1,
    STATE(16), 1,
      sym_date,
    STATE(7), 4,
      sym_begin_header,
      sym_ide_log_line,
      sym_log_line,
      aux_sym_logs_repeat1,
  [119] = 6,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      sym__num,
    STATE(10), 1,
      aux_sym_begin_header_repeat1,
    STATE(16), 1,
      sym_date,
    STATE(7), 4,
      sym_begin_header,
      sym_ide_log_line,
      sym_log_line,
      aux_sym_logs_repeat1,
  [141] = 1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym__num,
  [147] = 1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym__num,
  [153] = 3,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      sym__any,
    STATE(13), 1,
      aux_sym_begin_header_repeat1,
  [163] = 1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym__num,
  [169] = 1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym__num,
  [175] = 3,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(52), 1,
      sym__any,
    STATE(13), 1,
      aux_sym_begin_header_repeat1,
  [185] = 2,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_thread_name,
  [192] = 2,
    ACTIONS(56), 1,
      anon_sym_DASH,
    ACTIONS(58), 1,
      sym__num,
  [199] = 2,
    ACTIONS(60), 1,
      sym__num,
    STATE(2), 1,
      sym_time,
  [206] = 2,
    ACTIONS(62), 1,
      sym__any,
    STATE(8), 1,
      sym_message,
  [213] = 2,
    ACTIONS(64), 1,
      sym__num,
    STATE(4), 1,
      sym_tid,
  [220] = 1,
    ACTIONS(66), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [225] = 2,
    ACTIONS(62), 1,
      sym__any,
    STATE(9), 1,
      sym_message,
  [232] = 1,
    ACTIONS(68), 1,
      sym_tag,
  [236] = 1,
    ACTIONS(70), 1,
      anon_sym_DASH,
  [240] = 1,
    ACTIONS(72), 1,
      aux_sym_thread_name_token1,
  [244] = 1,
    ACTIONS(74), 1,
      sym_tag,
  [248] = 1,
    ACTIONS(76), 1,
      sym__num,
  [252] = 1,
    ACTIONS(78), 1,
      sym__num,
  [256] = 1,
    ACTIONS(80), 1,
      sym__num,
  [260] = 1,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
  [264] = 1,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
  [268] = 1,
    ACTIONS(86), 1,
      anon_sym_COLON,
  [272] = 1,
    ACTIONS(88), 1,
      sym__num,
  [276] = 1,
    ACTIONS(90), 1,
      sym_tag,
  [280] = 1,
    ACTIONS(92), 1,
      anon_sym_COLON,
  [284] = 1,
    ACTIONS(94), 1,
      sym__num,
  [288] = 1,
    ACTIONS(96), 1,
      sym__num,
  [292] = 1,
    ACTIONS(98), 1,
      sym__num,
  [296] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [300] = 1,
    ACTIONS(84), 1,
      sym_tag,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 169,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 192,
  [SMALL_STATE(16)] = 199,
  [SMALL_STATE(17)] = 206,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 220,
  [SMALL_STATE(20)] = 225,
  [SMALL_STATE(21)] = 232,
  [SMALL_STATE(22)] = 236,
  [SMALL_STATE(23)] = 240,
  [SMALL_STATE(24)] = 244,
  [SMALL_STATE(25)] = 248,
  [SMALL_STATE(26)] = 252,
  [SMALL_STATE(27)] = 256,
  [SMALL_STATE(28)] = 260,
  [SMALL_STATE(29)] = 264,
  [SMALL_STATE(30)] = 268,
  [SMALL_STATE(31)] = 272,
  [SMALL_STATE(32)] = 276,
  [SMALL_STATE(33)] = 280,
  [SMALL_STATE(34)] = 284,
  [SMALL_STATE(35)] = 288,
  [SMALL_STATE(36)] = 292,
  [SMALL_STATE(37)] = 296,
  [SMALL_STATE(38)] = 300,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7, .production_id = 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7, .production_id = 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tid, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tid, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(10),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_line, 7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ide_log_line, 6),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_header, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_begin_header_repeat1, 2), SHIFT_REPEAT(13),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_begin_header_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thread_name, 3, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_log(void) {
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
