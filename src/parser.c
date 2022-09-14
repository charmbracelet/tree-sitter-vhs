#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_Output = 1,
  anon_sym_Set = 2,
  anon_sym_Sleep = 3,
  anon_sym_Hidden = 4,
  sym_ctrl = 5,
  sym_begin = 6,
  sym_end = 7,
  anon_sym_Backspace = 8,
  anon_sym_Down = 9,
  anon_sym_Enter = 10,
  anon_sym_Escape = 11,
  anon_sym_Left = 12,
  anon_sym_Right = 13,
  anon_sym_Space = 14,
  anon_sym_Tab = 15,
  anon_sym_Up = 16,
  anon_sym_Type = 17,
  anon_sym_FontFamily = 18,
  anon_sym_FontSize = 19,
  anon_sym_Framerate = 20,
  anon_sym_Height = 21,
  anon_sym_LetterSpacing = 22,
  anon_sym_LineHeight = 23,
  anon_sym_Padding = 24,
  aux_sym_setting_token1 = 25,
  anon_sym_Theme = 26,
  anon_sym_Width = 27,
  sym_comment = 28,
  sym_float = 29,
  sym_integer = 30,
  aux_sym_string_token1 = 31,
  aux_sym_string_token2 = 32,
  sym_path = 33,
  anon_sym_AT = 34,
  aux_sym_speed_token1 = 35,
  sym_time = 36,
  sym_program = 37,
  sym_command = 38,
  sym_output = 39,
  sym_set = 40,
  sym_sleep = 41,
  sym_hidden = 42,
  sym_backspace = 43,
  sym_down = 44,
  sym_enter = 45,
  sym_escape = 46,
  sym_left = 47,
  sym_right = 48,
  sym_space = 49,
  sym_tab = 50,
  sym_up = 51,
  sym_type = 52,
  sym_setting = 53,
  sym_string = 54,
  sym_speed = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_type_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Output] = "Output",
  [anon_sym_Set] = "Set",
  [anon_sym_Sleep] = "Sleep",
  [anon_sym_Hidden] = "Hidden",
  [sym_ctrl] = "ctrl",
  [sym_begin] = "begin",
  [sym_end] = "end",
  [anon_sym_Backspace] = "Backspace",
  [anon_sym_Down] = "Down",
  [anon_sym_Enter] = "Enter",
  [anon_sym_Escape] = "Escape",
  [anon_sym_Left] = "Left",
  [anon_sym_Right] = "Right",
  [anon_sym_Space] = "Space",
  [anon_sym_Tab] = "Tab",
  [anon_sym_Up] = "Up",
  [anon_sym_Type] = "Type",
  [anon_sym_FontFamily] = "FontFamily",
  [anon_sym_FontSize] = "FontSize",
  [anon_sym_Framerate] = "Framerate",
  [anon_sym_Height] = "Height",
  [anon_sym_LetterSpacing] = "LetterSpacing",
  [anon_sym_LineHeight] = "LineHeight",
  [anon_sym_Padding] = "Padding",
  [aux_sym_setting_token1] = "setting_token1",
  [anon_sym_Theme] = "Theme",
  [anon_sym_Width] = "Width",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_path] = "path",
  [anon_sym_AT] = "@",
  [aux_sym_speed_token1] = "time",
  [sym_time] = "time",
  [sym_program] = "program",
  [sym_command] = "command",
  [sym_output] = "output",
  [sym_set] = "set",
  [sym_sleep] = "sleep",
  [sym_hidden] = "hidden",
  [sym_backspace] = "backspace",
  [sym_down] = "down",
  [sym_enter] = "enter",
  [sym_escape] = "escape",
  [sym_left] = "left",
  [sym_right] = "right",
  [sym_space] = "space",
  [sym_tab] = "tab",
  [sym_up] = "up",
  [sym_type] = "type",
  [sym_setting] = "setting",
  [sym_string] = "string",
  [sym_speed] = "speed",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Output] = anon_sym_Output,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_Sleep] = anon_sym_Sleep,
  [anon_sym_Hidden] = anon_sym_Hidden,
  [sym_ctrl] = sym_ctrl,
  [sym_begin] = sym_begin,
  [sym_end] = sym_end,
  [anon_sym_Backspace] = anon_sym_Backspace,
  [anon_sym_Down] = anon_sym_Down,
  [anon_sym_Enter] = anon_sym_Enter,
  [anon_sym_Escape] = anon_sym_Escape,
  [anon_sym_Left] = anon_sym_Left,
  [anon_sym_Right] = anon_sym_Right,
  [anon_sym_Space] = anon_sym_Space,
  [anon_sym_Tab] = anon_sym_Tab,
  [anon_sym_Up] = anon_sym_Up,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_FontFamily] = anon_sym_FontFamily,
  [anon_sym_FontSize] = anon_sym_FontSize,
  [anon_sym_Framerate] = anon_sym_Framerate,
  [anon_sym_Height] = anon_sym_Height,
  [anon_sym_LetterSpacing] = anon_sym_LetterSpacing,
  [anon_sym_LineHeight] = anon_sym_LineHeight,
  [anon_sym_Padding] = anon_sym_Padding,
  [aux_sym_setting_token1] = aux_sym_setting_token1,
  [anon_sym_Theme] = anon_sym_Theme,
  [anon_sym_Width] = anon_sym_Width,
  [sym_comment] = sym_comment,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_path] = sym_path,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_speed_token1] = sym_time,
  [sym_time] = sym_time,
  [sym_program] = sym_program,
  [sym_command] = sym_command,
  [sym_output] = sym_output,
  [sym_set] = sym_set,
  [sym_sleep] = sym_sleep,
  [sym_hidden] = sym_hidden,
  [sym_backspace] = sym_backspace,
  [sym_down] = sym_down,
  [sym_enter] = sym_enter,
  [sym_escape] = sym_escape,
  [sym_left] = sym_left,
  [sym_right] = sym_right,
  [sym_space] = sym_space,
  [sym_tab] = sym_tab,
  [sym_up] = sym_up,
  [sym_type] = sym_type,
  [sym_setting] = sym_setting,
  [sym_string] = sym_string,
  [sym_speed] = sym_speed,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sleep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Hidden] = {
    .visible = true,
    .named = false,
  },
  [sym_ctrl] = {
    .visible = true,
    .named = true,
  },
  [sym_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Backspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Enter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Escape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Space] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FontFamily] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FontSize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Framerate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LetterSpacing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LineHeight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Padding] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Theme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Width] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_speed_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_sleep] = {
    .visible = true,
    .named = true,
  },
  [sym_hidden] = {
    .visible = true,
    .named = true,
  },
  [sym_backspace] = {
    .visible = true,
    .named = true,
  },
  [sym_down] = {
    .visible = true,
    .named = true,
  },
  [sym_enter] = {
    .visible = true,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_left] = {
    .visible = true,
    .named = true,
  },
  [sym_right] = {
    .visible = true,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_tab] = {
    .visible = true,
    .named = true,
  },
  [sym_up] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_speed] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [30] = 16,
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
  [58] = 17,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(134);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '%') ADVANCE(173);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == 'B') ADVANCE(9);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(50);
      if (lookahead == 'L') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'P') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'W') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(181);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == 'S') ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == 'H') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 121:
      if (lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 122:
      if (lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 124:
      if (lookahead == 'z') ADVANCE(38);
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(126)
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 127:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 129:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 130:
      if (eof) ADVANCE(134);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == 'B') ADVANCE(9);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(50);
      if (lookahead == 'L') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'P') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'W') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 131:
      if (eof) ADVANCE(134);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == 'B') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(225);
      if (lookahead == 'D') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(214);
      if (lookahead == 'H') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(195);
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(184);
      if (lookahead == 'U') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 132:
      if (eof) ADVANCE(134);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == 'B') ADVANCE(8);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(64);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(133)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 133:
      if (eof) ADVANCE(134);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == 'B') ADVANCE(8);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(64);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(133)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Output);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Sleep);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_Hidden);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Hidden);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ctrl);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_begin);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_Backspace);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Down);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Enter);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Escape);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Left);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Right);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Space);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Tab);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_Up);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_Type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_setting_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'b') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'w') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_speed_token1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_speed_token1);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 's') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
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
  [4] = {.lex_state = 131},
  [5] = {.lex_state = 131},
  [6] = {.lex_state = 131},
  [7] = {.lex_state = 132},
  [8] = {.lex_state = 132},
  [9] = {.lex_state = 132},
  [10] = {.lex_state = 132},
  [11] = {.lex_state = 132},
  [12] = {.lex_state = 132},
  [13] = {.lex_state = 132},
  [14] = {.lex_state = 132},
  [15] = {.lex_state = 132},
  [16] = {.lex_state = 131},
  [17] = {.lex_state = 132},
  [18] = {.lex_state = 132},
  [19] = {.lex_state = 132},
  [20] = {.lex_state = 132},
  [21] = {.lex_state = 132},
  [22] = {.lex_state = 132},
  [23] = {.lex_state = 132},
  [24] = {.lex_state = 132},
  [25] = {.lex_state = 132},
  [26] = {.lex_state = 132},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 125},
  [62] = {.lex_state = 132},
  [63] = {.lex_state = 125},
  [64] = {.lex_state = 127},
  [65] = {.lex_state = 126},
  [66] = {.lex_state = 128},
  [67] = {.lex_state = 128},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_Sleep] = ACTIONS(1),
    [anon_sym_Hidden] = ACTIONS(1),
    [sym_ctrl] = ACTIONS(1),
    [sym_begin] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [anon_sym_Backspace] = ACTIONS(1),
    [anon_sym_Down] = ACTIONS(1),
    [anon_sym_Enter] = ACTIONS(1),
    [anon_sym_Escape] = ACTIONS(1),
    [anon_sym_Left] = ACTIONS(1),
    [anon_sym_Right] = ACTIONS(1),
    [anon_sym_Space] = ACTIONS(1),
    [anon_sym_Tab] = ACTIONS(1),
    [anon_sym_Up] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_FontFamily] = ACTIONS(1),
    [anon_sym_FontSize] = ACTIONS(1),
    [anon_sym_Framerate] = ACTIONS(1),
    [anon_sym_Height] = ACTIONS(1),
    [anon_sym_LetterSpacing] = ACTIONS(1),
    [anon_sym_LineHeight] = ACTIONS(1),
    [anon_sym_Padding] = ACTIONS(1),
    [aux_sym_setting_token1] = ACTIONS(1),
    [anon_sym_Theme] = ACTIONS(1),
    [anon_sym_Width] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_speed_token1] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(60),
    [sym_command] = STATE(2),
    [sym_output] = STATE(50),
    [sym_set] = STATE(50),
    [sym_sleep] = STATE(50),
    [sym_hidden] = STATE(50),
    [sym_backspace] = STATE(50),
    [sym_down] = STATE(50),
    [sym_enter] = STATE(50),
    [sym_escape] = STATE(50),
    [sym_left] = STATE(50),
    [sym_right] = STATE(50),
    [sym_space] = STATE(50),
    [sym_tab] = STATE(50),
    [sym_up] = STATE(50),
    [sym_type] = STATE(50),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Output] = ACTIONS(5),
    [anon_sym_Set] = ACTIONS(7),
    [anon_sym_Sleep] = ACTIONS(9),
    [anon_sym_Hidden] = ACTIONS(11),
    [sym_ctrl] = ACTIONS(13),
    [anon_sym_Backspace] = ACTIONS(15),
    [anon_sym_Down] = ACTIONS(17),
    [anon_sym_Enter] = ACTIONS(19),
    [anon_sym_Escape] = ACTIONS(21),
    [anon_sym_Left] = ACTIONS(23),
    [anon_sym_Right] = ACTIONS(25),
    [anon_sym_Space] = ACTIONS(27),
    [anon_sym_Tab] = ACTIONS(29),
    [anon_sym_Up] = ACTIONS(31),
    [anon_sym_Type] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [2] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(50),
    [sym_set] = STATE(50),
    [sym_sleep] = STATE(50),
    [sym_hidden] = STATE(50),
    [sym_backspace] = STATE(50),
    [sym_down] = STATE(50),
    [sym_enter] = STATE(50),
    [sym_escape] = STATE(50),
    [sym_left] = STATE(50),
    [sym_right] = STATE(50),
    [sym_space] = STATE(50),
    [sym_tab] = STATE(50),
    [sym_up] = STATE(50),
    [sym_type] = STATE(50),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_Output] = ACTIONS(5),
    [anon_sym_Set] = ACTIONS(7),
    [anon_sym_Sleep] = ACTIONS(9),
    [anon_sym_Hidden] = ACTIONS(11),
    [sym_ctrl] = ACTIONS(13),
    [anon_sym_Backspace] = ACTIONS(15),
    [anon_sym_Down] = ACTIONS(17),
    [anon_sym_Enter] = ACTIONS(19),
    [anon_sym_Escape] = ACTIONS(21),
    [anon_sym_Left] = ACTIONS(23),
    [anon_sym_Right] = ACTIONS(25),
    [anon_sym_Space] = ACTIONS(27),
    [anon_sym_Tab] = ACTIONS(29),
    [anon_sym_Up] = ACTIONS(31),
    [anon_sym_Type] = ACTIONS(33),
    [sym_comment] = ACTIONS(39),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(50),
    [sym_set] = STATE(50),
    [sym_sleep] = STATE(50),
    [sym_hidden] = STATE(50),
    [sym_backspace] = STATE(50),
    [sym_down] = STATE(50),
    [sym_enter] = STATE(50),
    [sym_escape] = STATE(50),
    [sym_left] = STATE(50),
    [sym_right] = STATE(50),
    [sym_space] = STATE(50),
    [sym_tab] = STATE(50),
    [sym_up] = STATE(50),
    [sym_type] = STATE(50),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_Output] = ACTIONS(43),
    [anon_sym_Set] = ACTIONS(46),
    [anon_sym_Sleep] = ACTIONS(49),
    [anon_sym_Hidden] = ACTIONS(52),
    [sym_ctrl] = ACTIONS(55),
    [anon_sym_Backspace] = ACTIONS(58),
    [anon_sym_Down] = ACTIONS(61),
    [anon_sym_Enter] = ACTIONS(64),
    [anon_sym_Escape] = ACTIONS(67),
    [anon_sym_Left] = ACTIONS(70),
    [anon_sym_Right] = ACTIONS(73),
    [anon_sym_Space] = ACTIONS(76),
    [anon_sym_Tab] = ACTIONS(79),
    [anon_sym_Up] = ACTIONS(82),
    [anon_sym_Type] = ACTIONS(85),
    [sym_comment] = ACTIONS(88),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(95), 1,
      aux_sym_string_token1,
    ACTIONS(97), 1,
      aux_sym_string_token2,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      sym_ctrl,
      sym_comment,
    ACTIONS(93), 14,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
  [32] = 5,
    ACTIONS(95), 1,
      aux_sym_string_token1,
    ACTIONS(97), 1,
      aux_sym_string_token2,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      sym_ctrl,
      sym_comment,
    ACTIONS(101), 14,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
  [64] = 5,
    ACTIONS(107), 1,
      aux_sym_string_token1,
    ACTIONS(110), 1,
      aux_sym_string_token2,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      sym_ctrl,
      sym_comment,
    ACTIONS(105), 14,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
  [96] = 4,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym_speed,
    ACTIONS(113), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [125] = 4,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(121), 1,
      sym_integer,
    STATE(26), 1,
      sym_speed,
    ACTIONS(119), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [154] = 4,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(125), 1,
      sym_integer,
    STATE(19), 1,
      sym_speed,
    ACTIONS(123), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [183] = 4,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(129), 1,
      sym_integer,
    STATE(24), 1,
      sym_speed,
    ACTIONS(127), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [212] = 4,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(133), 1,
      sym_integer,
    STATE(22), 1,
      sym_speed,
    ACTIONS(131), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [241] = 4,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(137), 1,
      sym_integer,
    STATE(21), 1,
      sym_speed,
    ACTIONS(135), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [270] = 4,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(141), 1,
      sym_integer,
    STATE(18), 1,
      sym_speed,
    ACTIONS(139), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [299] = 4,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      sym_integer,
    STATE(20), 1,
      sym_speed,
    ACTIONS(143), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [328] = 4,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym_integer,
    STATE(23), 1,
      sym_speed,
    ACTIONS(147), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [357] = 2,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      sym_ctrl,
      sym_comment,
      aux_sym_string_token1,
    ACTIONS(153), 15,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      aux_sym_string_token2,
  [381] = 1,
    ACTIONS(155), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
      sym_integer,
  [402] = 2,
    ACTIONS(159), 1,
      sym_integer,
    ACTIONS(157), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [425] = 2,
    ACTIONS(163), 1,
      sym_integer,
    ACTIONS(161), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [448] = 2,
    ACTIONS(167), 1,
      sym_integer,
    ACTIONS(165), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [471] = 2,
    ACTIONS(171), 1,
      sym_integer,
    ACTIONS(169), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [494] = 2,
    ACTIONS(175), 1,
      sym_integer,
    ACTIONS(173), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [517] = 2,
    ACTIONS(179), 1,
      sym_integer,
    ACTIONS(177), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [540] = 2,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(181), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [563] = 2,
    ACTIONS(187), 1,
      sym_integer,
    ACTIONS(185), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [586] = 2,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(189), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [609] = 1,
    ACTIONS(193), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [629] = 1,
    ACTIONS(195), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [649] = 1,
    ACTIONS(157), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [669] = 1,
    ACTIONS(151), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [689] = 1,
    ACTIONS(189), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [709] = 1,
    ACTIONS(185), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [729] = 1,
    ACTIONS(197), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [749] = 1,
    ACTIONS(181), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [769] = 1,
    ACTIONS(199), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [789] = 1,
    ACTIONS(177), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [809] = 1,
    ACTIONS(201), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [829] = 1,
    ACTIONS(173), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [849] = 1,
    ACTIONS(203), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [869] = 1,
    ACTIONS(169), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [889] = 1,
    ACTIONS(205), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [909] = 1,
    ACTIONS(165), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [929] = 1,
    ACTIONS(207), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [949] = 1,
    ACTIONS(161), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [969] = 1,
    ACTIONS(209), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [989] = 1,
    ACTIONS(211), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [1009] = 1,
    ACTIONS(213), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [1029] = 1,
    ACTIONS(215), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [1049] = 1,
    ACTIONS(217), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [1069] = 1,
    ACTIONS(219), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [1089] = 1,
    ACTIONS(221), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [1109] = 1,
    ACTIONS(223), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hidden,
      sym_ctrl,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_Type,
      sym_comment,
  [1129] = 5,
    ACTIONS(231), 1,
      anon_sym_Padding,
    STATE(37), 1,
      sym_setting,
    ACTIONS(225), 2,
      anon_sym_FontFamily,
      anon_sym_Theme,
    ACTIONS(227), 3,
      anon_sym_FontSize,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
    ACTIONS(229), 3,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_Width,
  [1150] = 4,
    ACTIONS(233), 1,
      anon_sym_AT,
    STATE(55), 1,
      sym_speed,
    ACTIONS(95), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
  [1165] = 2,
    ACTIONS(95), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
  [1174] = 2,
    STATE(27), 1,
      sym_string,
    ACTIONS(235), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1182] = 1,
    ACTIONS(237), 2,
      sym_begin,
      sym_end,
  [1187] = 1,
    ACTIONS(155), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1192] = 1,
    ACTIONS(239), 1,
      aux_sym_setting_token1,
  [1196] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [1200] = 1,
    ACTIONS(243), 1,
      sym_float,
  [1204] = 1,
    ACTIONS(243), 1,
      sym_integer,
  [1208] = 1,
    ACTIONS(245), 1,
      sym_float,
  [1212] = 1,
    ACTIONS(247), 1,
      sym_time,
  [1216] = 1,
    ACTIONS(249), 1,
      sym_path,
  [1220] = 1,
    ACTIONS(251), 1,
      aux_sym_speed_token1,
  [1224] = 1,
    ACTIONS(253), 1,
      aux_sym_speed_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 183,
  [SMALL_STATE(11)] = 212,
  [SMALL_STATE(12)] = 241,
  [SMALL_STATE(13)] = 270,
  [SMALL_STATE(14)] = 299,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 357,
  [SMALL_STATE(17)] = 381,
  [SMALL_STATE(18)] = 402,
  [SMALL_STATE(19)] = 425,
  [SMALL_STATE(20)] = 448,
  [SMALL_STATE(21)] = 471,
  [SMALL_STATE(22)] = 494,
  [SMALL_STATE(23)] = 517,
  [SMALL_STATE(24)] = 540,
  [SMALL_STATE(25)] = 563,
  [SMALL_STATE(26)] = 586,
  [SMALL_STATE(27)] = 609,
  [SMALL_STATE(28)] = 629,
  [SMALL_STATE(29)] = 649,
  [SMALL_STATE(30)] = 669,
  [SMALL_STATE(31)] = 689,
  [SMALL_STATE(32)] = 709,
  [SMALL_STATE(33)] = 729,
  [SMALL_STATE(34)] = 749,
  [SMALL_STATE(35)] = 769,
  [SMALL_STATE(36)] = 789,
  [SMALL_STATE(37)] = 809,
  [SMALL_STATE(38)] = 829,
  [SMALL_STATE(39)] = 849,
  [SMALL_STATE(40)] = 869,
  [SMALL_STATE(41)] = 889,
  [SMALL_STATE(42)] = 909,
  [SMALL_STATE(43)] = 929,
  [SMALL_STATE(44)] = 949,
  [SMALL_STATE(45)] = 969,
  [SMALL_STATE(46)] = 989,
  [SMALL_STATE(47)] = 1009,
  [SMALL_STATE(48)] = 1029,
  [SMALL_STATE(49)] = 1049,
  [SMALL_STATE(50)] = 1069,
  [SMALL_STATE(51)] = 1089,
  [SMALL_STATE(52)] = 1109,
  [SMALL_STATE(53)] = 1129,
  [SMALL_STATE(54)] = 1150,
  [SMALL_STATE(55)] = 1165,
  [SMALL_STATE(56)] = 1174,
  [SMALL_STATE(57)] = 1182,
  [SMALL_STATE(58)] = 1187,
  [SMALL_STATE(59)] = 1192,
  [SMALL_STATE(60)] = 1196,
  [SMALL_STATE(61)] = 1200,
  [SMALL_STATE(62)] = 1204,
  [SMALL_STATE(63)] = 1208,
  [SMALL_STATE(64)] = 1212,
  [SMALL_STATE(65)] = 1216,
  [SMALL_STATE(66)] = 1220,
  [SMALL_STATE(67)] = 1224,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(16),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speed, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cassette(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
