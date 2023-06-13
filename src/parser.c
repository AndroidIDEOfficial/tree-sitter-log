#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_DASH = 1,
  anon_sym_COLON = 2,
  anon_sym_DOT = 3,
  anon_sym_E = 4,
  anon_sym_W = 5,
  anon_sym_D = 6,
  anon_sym_I = 7,
  anon_sym_V = 8,
  sym_tag = 9,
  sym_ide_tag = 10,
  sym__any = 11,
  sym__num = 12,
  sym_logs = 13,
  sym_begin_header = 14,
  sym_ide_log_line = 15,
  sym_log_line = 16,
  sym_pid = 17,
  sym_tid = 18,
  sym_date = 19,
  sym_time = 20,
  sym_priority = 21,
  sym_message = 22,
  aux_sym_logs_repeat1 = 23,
  aux_sym_begin_header_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_E] = "E",
  [anon_sym_W] = "W",
  [anon_sym_D] = "D",
  [anon_sym_I] = "I",
  [anon_sym_V] = "V",
  [sym_tag] = "tag",
  [sym_ide_tag] = "ide_tag",
  [sym__any] = "_any",
  [sym__num] = "_num",
  [sym_logs] = "logs",
  [sym_begin_header] = "begin_header",
  [sym_ide_log_line] = "ide_log_line",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_W] = anon_sym_W,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_V] = anon_sym_V,
  [sym_tag] = sym_tag,
  [sym_ide_tag] = sym_ide_tag,
  [sym__any] = sym__any,
  [sym__num] = sym__num,
  [sym_logs] = sym_logs,
  [sym_begin_header] = sym_begin_header,
  [sym_ide_log_line] = sym_ide_log_line,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_W] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_ide_tag] = {
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
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_day] = "day",
  [field_hour] = "hour",
  [field_min] = "min",
  [field_month] = "month",
  [field_ms] = "ms",
  [field_sec] = "sec",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_day, 2},
    {field_month, 0},
  [2] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(14);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_ide_tag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_W] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [sym__num] = ACTIONS(1),
  },
  [1] = {
    [sym_logs] = STATE(30),
    [sym_begin_header] = STATE(2),
    [sym_ide_log_line] = STATE(2),
    [sym_log_line] = STATE(2),
    [sym_date] = STATE(13),
    [aux_sym_logs_repeat1] = STATE(2),
    [aux_sym_begin_header_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [sym_ide_tag] = ACTIONS(7),
    [sym__num] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_DASH,
    ACTIONS(7), 1,
      sym_ide_tag,
    ACTIONS(9), 1,
      sym__num,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_begin_header_repeat1,
    STATE(13), 1,
      sym_date,
    STATE(3), 4,
      sym_begin_header,
      sym_ide_log_line,
      sym_log_line,
      aux_sym_logs_repeat1,
  [25] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(18), 1,
      sym_ide_tag,
    ACTIONS(21), 1,
      sym__num,
    STATE(10), 1,
      aux_sym_begin_header_repeat1,
    STATE(13), 1,
      sym_date,
    STATE(3), 4,
      sym_begin_header,
      sym_ide_log_line,
      sym_log_line,
      aux_sym_logs_repeat1,
  [50] = 2,
    STATE(14), 1,
      sym_priority,
    ACTIONS(24), 5,
      anon_sym_E,
      anon_sym_W,
      anon_sym_D,
      anon_sym_I,
      anon_sym_V,
  [61] = 2,
    STATE(12), 1,
      sym_priority,
    ACTIONS(24), 5,
      anon_sym_E,
      anon_sym_W,
      anon_sym_D,
      anon_sym_I,
      anon_sym_V,
  [72] = 1,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_ide_tag,
      sym__num,
  [79] = 1,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_ide_tag,
      sym__num,
  [86] = 1,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_ide_tag,
      sym__num,
  [93] = 1,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_ide_tag,
      sym__num,
  [100] = 3,
    ACTIONS(34), 1,
      anon_sym_DASH,
    ACTIONS(36), 1,
      sym__any,
    STATE(11), 1,
      aux_sym_begin_header_repeat1,
  [110] = 3,
    ACTIONS(38), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      sym__any,
    STATE(11), 1,
      aux_sym_begin_header_repeat1,
  [120] = 2,
    ACTIONS(43), 1,
      sym__any,
    STATE(7), 1,
      sym_message,
  [127] = 2,
    ACTIONS(45), 1,
      sym__num,
    STATE(16), 1,
      sym_time,
  [134] = 2,
    ACTIONS(43), 1,
      sym__any,
    STATE(6), 1,
      sym_message,
  [141] = 2,
    ACTIONS(47), 1,
      sym__num,
    STATE(24), 1,
      sym_tid,
  [148] = 2,
    ACTIONS(49), 1,
      sym__num,
    STATE(15), 1,
      sym_pid,
  [155] = 1,
    ACTIONS(51), 1,
      sym__any,
  [159] = 1,
    ACTIONS(53), 1,
      sym__num,
  [163] = 1,
    ACTIONS(55), 1,
      sym__num,
  [167] = 1,
    ACTIONS(57), 1,
      sym__num,
  [171] = 1,
    ACTIONS(59), 1,
      anon_sym_DASH,
  [175] = 1,
    ACTIONS(61), 1,
      anon_sym_COLON,
  [179] = 1,
    ACTIONS(63), 1,
      sym_tag,
  [183] = 1,
    ACTIONS(65), 1,
      sym_tag,
  [187] = 1,
    ACTIONS(67), 1,
      sym__num,
  [191] = 1,
    ACTIONS(69), 1,
      anon_sym_COLON,
  [195] = 1,
    ACTIONS(71), 1,
      anon_sym_DOT,
  [199] = 1,
    ACTIONS(73), 1,
      sym__num,
  [203] = 1,
    ACTIONS(75), 1,
      sym__num,
  [207] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [211] = 1,
    ACTIONS(79), 1,
      sym__num,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 110,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 134,
  [SMALL_STATE(15)] = 141,
  [SMALL_STATE(16)] = 148,
  [SMALL_STATE(17)] = 155,
  [SMALL_STATE(18)] = 159,
  [SMALL_STATE(19)] = 163,
  [SMALL_STATE(20)] = 167,
  [SMALL_STATE(21)] = 171,
  [SMALL_STATE(22)] = 175,
  [SMALL_STATE(23)] = 179,
  [SMALL_STATE(24)] = 183,
  [SMALL_STATE(25)] = 187,
  [SMALL_STATE(26)] = 191,
  [SMALL_STATE(27)] = 195,
  [SMALL_STATE(28)] = 199,
  [SMALL_STATE(29)] = 203,
  [SMALL_STATE(30)] = 207,
  [SMALL_STATE(31)] = 211,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(10),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(4),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(21),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ide_log_line, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_line, 7),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_header, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_begin_header_repeat1, 2), SHIFT_REPEAT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_begin_header_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tid, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7, .production_id = 2),
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
