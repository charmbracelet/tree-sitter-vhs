#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_control = 1,
  anon_sym_Hide = 2,
  anon_sym_Show = 3,
  anon_sym_Output = 4,
  anon_sym_Set = 5,
  anon_sym_Sleep = 6,
  anon_sym_Type = 7,
  anon_sym_Backspace = 8,
  anon_sym_Down = 9,
  anon_sym_Enter = 10,
  anon_sym_Escape = 11,
  anon_sym_Left = 12,
  anon_sym_Right = 13,
  anon_sym_Space = 14,
  anon_sym_Tab = 15,
  anon_sym_Up = 16,
  anon_sym_PageUp = 17,
  anon_sym_PageDown = 18,
  anon_sym_Shell = 19,
  anon_sym_FontFamily = 20,
  anon_sym_FontSize = 21,
  anon_sym_Framerate = 22,
  anon_sym_PlaybackSpeed = 23,
  anon_sym_Height = 24,
  anon_sym_LetterSpacing = 25,
  anon_sym_TypingSpeed = 26,
  anon_sym_LineHeight = 27,
  anon_sym_Padding = 28,
  anon_sym_Theme = 29,
  anon_sym_LoopOffset = 30,
  anon_sym_PERCENT = 31,
  anon_sym_Width = 32,
  sym_comment = 33,
  sym_float = 34,
  sym_integer = 35,
  sym_json = 36,
  sym_path = 37,
  anon_sym_AT = 38,
  aux_sym_string_token1 = 39,
  aux_sym_string_token2 = 40,
  aux_sym_string_token3 = 41,
  sym_time = 42,
  sym_program = 43,
  sym_command = 44,
  sym_hide = 45,
  sym_show = 46,
  sym_output = 47,
  sym_set = 48,
  sym_sleep = 49,
  sym_type = 50,
  sym_backspace = 51,
  sym_down = 52,
  sym_enter = 53,
  sym_escape = 54,
  sym_left = 55,
  sym_right = 56,
  sym_space = 57,
  sym_tab = 58,
  sym_up = 59,
  sym_pageup = 60,
  sym_pagedown = 61,
  sym_setting = 62,
  sym_speed = 63,
  sym_string = 64,
  aux_sym_program_repeat1 = 65,
  aux_sym_type_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_control] = "control",
  [anon_sym_Hide] = "Hide",
  [anon_sym_Show] = "Show",
  [anon_sym_Output] = "Output",
  [anon_sym_Set] = "Set",
  [anon_sym_Sleep] = "Sleep",
  [anon_sym_Type] = "Type",
  [anon_sym_Backspace] = "Backspace",
  [anon_sym_Down] = "Down",
  [anon_sym_Enter] = "Enter",
  [anon_sym_Escape] = "Escape",
  [anon_sym_Left] = "Left",
  [anon_sym_Right] = "Right",
  [anon_sym_Space] = "Space",
  [anon_sym_Tab] = "Tab",
  [anon_sym_Up] = "Up",
  [anon_sym_PageUp] = "PageUp",
  [anon_sym_PageDown] = "PageDown",
  [anon_sym_Shell] = "Shell",
  [anon_sym_FontFamily] = "FontFamily",
  [anon_sym_FontSize] = "FontSize",
  [anon_sym_Framerate] = "Framerate",
  [anon_sym_PlaybackSpeed] = "PlaybackSpeed",
  [anon_sym_Height] = "Height",
  [anon_sym_LetterSpacing] = "LetterSpacing",
  [anon_sym_TypingSpeed] = "TypingSpeed",
  [anon_sym_LineHeight] = "LineHeight",
  [anon_sym_Padding] = "Padding",
  [anon_sym_Theme] = "Theme",
  [anon_sym_LoopOffset] = "LoopOffset",
  [anon_sym_PERCENT] = "%",
  [anon_sym_Width] = "Width",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_json] = "json",
  [sym_path] = "path",
  [anon_sym_AT] = "@",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [sym_time] = "time",
  [sym_program] = "program",
  [sym_command] = "command",
  [sym_hide] = "hide",
  [sym_show] = "show",
  [sym_output] = "output",
  [sym_set] = "set",
  [sym_sleep] = "sleep",
  [sym_type] = "type",
  [sym_backspace] = "backspace",
  [sym_down] = "down",
  [sym_enter] = "enter",
  [sym_escape] = "escape",
  [sym_left] = "left",
  [sym_right] = "right",
  [sym_space] = "space",
  [sym_tab] = "tab",
  [sym_up] = "up",
  [sym_pageup] = "pageup",
  [sym_pagedown] = "pagedown",
  [sym_setting] = "setting",
  [sym_speed] = "speed",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_control] = sym_control,
  [anon_sym_Hide] = anon_sym_Hide,
  [anon_sym_Show] = anon_sym_Show,
  [anon_sym_Output] = anon_sym_Output,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_Sleep] = anon_sym_Sleep,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_Backspace] = anon_sym_Backspace,
  [anon_sym_Down] = anon_sym_Down,
  [anon_sym_Enter] = anon_sym_Enter,
  [anon_sym_Escape] = anon_sym_Escape,
  [anon_sym_Left] = anon_sym_Left,
  [anon_sym_Right] = anon_sym_Right,
  [anon_sym_Space] = anon_sym_Space,
  [anon_sym_Tab] = anon_sym_Tab,
  [anon_sym_Up] = anon_sym_Up,
  [anon_sym_PageUp] = anon_sym_PageUp,
  [anon_sym_PageDown] = anon_sym_PageDown,
  [anon_sym_Shell] = anon_sym_Shell,
  [anon_sym_FontFamily] = anon_sym_FontFamily,
  [anon_sym_FontSize] = anon_sym_FontSize,
  [anon_sym_Framerate] = anon_sym_Framerate,
  [anon_sym_PlaybackSpeed] = anon_sym_PlaybackSpeed,
  [anon_sym_Height] = anon_sym_Height,
  [anon_sym_LetterSpacing] = anon_sym_LetterSpacing,
  [anon_sym_TypingSpeed] = anon_sym_TypingSpeed,
  [anon_sym_LineHeight] = anon_sym_LineHeight,
  [anon_sym_Padding] = anon_sym_Padding,
  [anon_sym_Theme] = anon_sym_Theme,
  [anon_sym_LoopOffset] = anon_sym_LoopOffset,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_Width] = anon_sym_Width,
  [sym_comment] = sym_comment,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_json] = sym_json,
  [sym_path] = sym_path,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_time] = sym_time,
  [sym_program] = sym_program,
  [sym_command] = sym_command,
  [sym_hide] = sym_hide,
  [sym_show] = sym_show,
  [sym_output] = sym_output,
  [sym_set] = sym_set,
  [sym_sleep] = sym_sleep,
  [sym_type] = sym_type,
  [sym_backspace] = sym_backspace,
  [sym_down] = sym_down,
  [sym_enter] = sym_enter,
  [sym_escape] = sym_escape,
  [sym_left] = sym_left,
  [sym_right] = sym_right,
  [sym_space] = sym_space,
  [sym_tab] = sym_tab,
  [sym_up] = sym_up,
  [sym_pageup] = sym_pageup,
  [sym_pagedown] = sym_pagedown,
  [sym_setting] = sym_setting,
  [sym_speed] = sym_speed,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_control] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Hide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Show] = {
    .visible = true,
    .named = false,
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
  [anon_sym_Type] = {
    .visible = true,
    .named = false,
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
  [anon_sym_PageUp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PageDown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Shell] = {
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
  [anon_sym_PlaybackSpeed] = {
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
  [anon_sym_TypingSpeed] = {
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
  [anon_sym_Theme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LoopOffset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [sym_json] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
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
  [sym_hide] = {
    .visible = true,
    .named = true,
  },
  [sym_show] = {
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
  [sym_type] = {
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
  [sym_pageup] = {
    .visible = true,
    .named = true,
  },
  [sym_pagedown] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_speed] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '%') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '@') ADVANCE(205);
      if (lookahead == 'B') ADVANCE(14);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'D') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == 'U') ADVANCE(117);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(162);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(120);
      END_STATE();
    case 7:
      if (lookahead == 'F') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == 'H') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(125);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(127);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(208);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 'k') ADVANCE(133);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 151:
      if (lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 153:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 156:
      if (lookahead == 'z') ADVANCE(51);
      END_STATE();
    case 157:
      if (lookahead == '}') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 162:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 163:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '@') ADVANCE(205);
      if (lookahead == 'B') ADVANCE(14);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'D') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'H') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'U') ADVANCE(117);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PageUp);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_PageDown);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_Shell);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PlaybackSpeed);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_TypingSpeed);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LoopOffset);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(212);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'm') ADVANCE(212);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_json);
      if (lookahead == '}') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(212);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(212);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(209);
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
  [7] = {.lex_state = 163},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 163},
  [10] = {.lex_state = 163},
  [11] = {.lex_state = 163},
  [12] = {.lex_state = 163},
  [13] = {.lex_state = 163},
  [14] = {.lex_state = 163},
  [15] = {.lex_state = 163},
  [16] = {.lex_state = 163},
  [17] = {.lex_state = 163},
  [18] = {.lex_state = 163},
  [19] = {.lex_state = 163},
  [20] = {.lex_state = 163},
  [21] = {.lex_state = 163},
  [22] = {.lex_state = 163},
  [23] = {.lex_state = 163},
  [24] = {.lex_state = 163},
  [25] = {.lex_state = 163},
  [26] = {.lex_state = 163},
  [27] = {.lex_state = 163},
  [28] = {.lex_state = 163},
  [29] = {.lex_state = 163},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 163},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 158},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 163},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_control] = ACTIONS(1),
    [anon_sym_Hide] = ACTIONS(1),
    [anon_sym_Show] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_Sleep] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_Backspace] = ACTIONS(1),
    [anon_sym_Down] = ACTIONS(1),
    [anon_sym_Enter] = ACTIONS(1),
    [anon_sym_Escape] = ACTIONS(1),
    [anon_sym_Left] = ACTIONS(1),
    [anon_sym_Right] = ACTIONS(1),
    [anon_sym_Space] = ACTIONS(1),
    [anon_sym_Tab] = ACTIONS(1),
    [anon_sym_Up] = ACTIONS(1),
    [anon_sym_PageUp] = ACTIONS(1),
    [anon_sym_PageDown] = ACTIONS(1),
    [anon_sym_Shell] = ACTIONS(1),
    [anon_sym_FontFamily] = ACTIONS(1),
    [anon_sym_FontSize] = ACTIONS(1),
    [anon_sym_Framerate] = ACTIONS(1),
    [anon_sym_PlaybackSpeed] = ACTIONS(1),
    [anon_sym_Height] = ACTIONS(1),
    [anon_sym_LetterSpacing] = ACTIONS(1),
    [anon_sym_TypingSpeed] = ACTIONS(1),
    [anon_sym_LineHeight] = ACTIONS(1),
    [anon_sym_Padding] = ACTIONS(1),
    [anon_sym_Theme] = ACTIONS(1),
    [anon_sym_LoopOffset] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_Width] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_json] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(69),
    [sym_command] = STATE(2),
    [sym_hide] = STATE(34),
    [sym_show] = STATE(34),
    [sym_output] = STATE(34),
    [sym_set] = STATE(34),
    [sym_sleep] = STATE(34),
    [sym_type] = STATE(34),
    [sym_backspace] = STATE(34),
    [sym_down] = STATE(34),
    [sym_enter] = STATE(34),
    [sym_escape] = STATE(34),
    [sym_left] = STATE(34),
    [sym_right] = STATE(34),
    [sym_space] = STATE(34),
    [sym_tab] = STATE(34),
    [sym_up] = STATE(34),
    [sym_pageup] = STATE(34),
    [sym_pagedown] = STATE(34),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_control] = ACTIONS(5),
    [anon_sym_Hide] = ACTIONS(7),
    [anon_sym_Show] = ACTIONS(9),
    [anon_sym_Output] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(13),
    [anon_sym_Sleep] = ACTIONS(15),
    [anon_sym_Type] = ACTIONS(17),
    [anon_sym_Backspace] = ACTIONS(19),
    [anon_sym_Down] = ACTIONS(21),
    [anon_sym_Enter] = ACTIONS(23),
    [anon_sym_Escape] = ACTIONS(25),
    [anon_sym_Left] = ACTIONS(27),
    [anon_sym_Right] = ACTIONS(29),
    [anon_sym_Space] = ACTIONS(31),
    [anon_sym_Tab] = ACTIONS(33),
    [anon_sym_Up] = ACTIONS(35),
    [anon_sym_PageUp] = ACTIONS(37),
    [anon_sym_PageDown] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [2] = {
    [sym_command] = STATE(3),
    [sym_hide] = STATE(34),
    [sym_show] = STATE(34),
    [sym_output] = STATE(34),
    [sym_set] = STATE(34),
    [sym_sleep] = STATE(34),
    [sym_type] = STATE(34),
    [sym_backspace] = STATE(34),
    [sym_down] = STATE(34),
    [sym_enter] = STATE(34),
    [sym_escape] = STATE(34),
    [sym_left] = STATE(34),
    [sym_right] = STATE(34),
    [sym_space] = STATE(34),
    [sym_tab] = STATE(34),
    [sym_up] = STATE(34),
    [sym_pageup] = STATE(34),
    [sym_pagedown] = STATE(34),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_control] = ACTIONS(5),
    [anon_sym_Hide] = ACTIONS(7),
    [anon_sym_Show] = ACTIONS(9),
    [anon_sym_Output] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(13),
    [anon_sym_Sleep] = ACTIONS(15),
    [anon_sym_Type] = ACTIONS(17),
    [anon_sym_Backspace] = ACTIONS(19),
    [anon_sym_Down] = ACTIONS(21),
    [anon_sym_Enter] = ACTIONS(23),
    [anon_sym_Escape] = ACTIONS(25),
    [anon_sym_Left] = ACTIONS(27),
    [anon_sym_Right] = ACTIONS(29),
    [anon_sym_Space] = ACTIONS(31),
    [anon_sym_Tab] = ACTIONS(33),
    [anon_sym_Up] = ACTIONS(35),
    [anon_sym_PageUp] = ACTIONS(37),
    [anon_sym_PageDown] = ACTIONS(39),
    [sym_comment] = ACTIONS(45),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym_hide] = STATE(34),
    [sym_show] = STATE(34),
    [sym_output] = STATE(34),
    [sym_set] = STATE(34),
    [sym_sleep] = STATE(34),
    [sym_type] = STATE(34),
    [sym_backspace] = STATE(34),
    [sym_down] = STATE(34),
    [sym_enter] = STATE(34),
    [sym_escape] = STATE(34),
    [sym_left] = STATE(34),
    [sym_right] = STATE(34),
    [sym_space] = STATE(34),
    [sym_tab] = STATE(34),
    [sym_up] = STATE(34),
    [sym_pageup] = STATE(34),
    [sym_pagedown] = STATE(34),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_control] = ACTIONS(49),
    [anon_sym_Hide] = ACTIONS(52),
    [anon_sym_Show] = ACTIONS(55),
    [anon_sym_Output] = ACTIONS(58),
    [anon_sym_Set] = ACTIONS(61),
    [anon_sym_Sleep] = ACTIONS(64),
    [anon_sym_Type] = ACTIONS(67),
    [anon_sym_Backspace] = ACTIONS(70),
    [anon_sym_Down] = ACTIONS(73),
    [anon_sym_Enter] = ACTIONS(76),
    [anon_sym_Escape] = ACTIONS(79),
    [anon_sym_Left] = ACTIONS(82),
    [anon_sym_Right] = ACTIONS(85),
    [anon_sym_Space] = ACTIONS(88),
    [anon_sym_Tab] = ACTIONS(91),
    [anon_sym_Up] = ACTIONS(94),
    [anon_sym_PageUp] = ACTIONS(97),
    [anon_sym_PageDown] = ACTIONS(100),
    [sym_comment] = ACTIONS(103),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(108), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(106), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [32] = 3,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(111), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [64] = 3,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(115), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [96] = 1,
    ACTIONS(117), 24,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [123] = 1,
    ACTIONS(119), 23,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [149] = 4,
    ACTIONS(123), 1,
      sym_integer,
    ACTIONS(125), 1,
      anon_sym_AT,
    STATE(29), 1,
      sym_speed,
    ACTIONS(121), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [181] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(129), 1,
      sym_integer,
    STATE(28), 1,
      sym_speed,
    ACTIONS(127), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [213] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(133), 1,
      sym_integer,
    STATE(27), 1,
      sym_speed,
    ACTIONS(131), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [245] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(137), 1,
      sym_integer,
    STATE(26), 1,
      sym_speed,
    ACTIONS(135), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [277] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(141), 1,
      sym_integer,
    STATE(25), 1,
      sym_speed,
    ACTIONS(139), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [309] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      sym_integer,
    STATE(24), 1,
      sym_speed,
    ACTIONS(143), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [341] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym_integer,
    STATE(23), 1,
      sym_speed,
    ACTIONS(147), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [373] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(153), 1,
      sym_integer,
    STATE(22), 1,
      sym_speed,
    ACTIONS(151), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [405] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      sym_integer,
    STATE(21), 1,
      sym_speed,
    ACTIONS(155), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [437] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(161), 1,
      sym_integer,
    STATE(20), 1,
      sym_speed,
    ACTIONS(159), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [469] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      sym_integer,
    STATE(31), 1,
      sym_speed,
    ACTIONS(163), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [501] = 2,
    ACTIONS(169), 1,
      sym_integer,
    ACTIONS(167), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [527] = 2,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(171), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [553] = 2,
    ACTIONS(177), 1,
      sym_integer,
    ACTIONS(175), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [579] = 2,
    ACTIONS(181), 1,
      sym_integer,
    ACTIONS(179), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [605] = 2,
    ACTIONS(185), 1,
      sym_integer,
    ACTIONS(183), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [631] = 2,
    ACTIONS(189), 1,
      sym_integer,
    ACTIONS(187), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [657] = 2,
    ACTIONS(193), 1,
      sym_integer,
    ACTIONS(191), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [683] = 2,
    ACTIONS(197), 1,
      sym_integer,
    ACTIONS(195), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [709] = 2,
    ACTIONS(201), 1,
      sym_integer,
    ACTIONS(199), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [735] = 2,
    ACTIONS(205), 1,
      sym_integer,
    ACTIONS(203), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [761] = 2,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(207), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [787] = 2,
    ACTIONS(213), 1,
      sym_integer,
    ACTIONS(211), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [813] = 1,
    ACTIONS(203), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [836] = 1,
    ACTIONS(167), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [859] = 1,
    ACTIONS(215), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [882] = 1,
    ACTIONS(217), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [905] = 1,
    ACTIONS(219), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [928] = 1,
    ACTIONS(199), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [951] = 1,
    ACTIONS(221), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [974] = 1,
    ACTIONS(195), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [997] = 1,
    ACTIONS(223), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1020] = 1,
    ACTIONS(191), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1043] = 1,
    ACTIONS(225), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1066] = 1,
    ACTIONS(187), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1089] = 1,
    ACTIONS(227), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1112] = 1,
    ACTIONS(183), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1135] = 1,
    ACTIONS(229), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1158] = 1,
    ACTIONS(179), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1181] = 1,
    ACTIONS(231), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1204] = 1,
    ACTIONS(175), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1227] = 1,
    ACTIONS(233), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1250] = 1,
    ACTIONS(171), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1273] = 1,
    ACTIONS(235), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1296] = 1,
    ACTIONS(237), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1319] = 1,
    ACTIONS(239), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1342] = 1,
    ACTIONS(211), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1365] = 1,
    ACTIONS(241), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1388] = 1,
    ACTIONS(243), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1411] = 1,
    ACTIONS(207), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1434] = 1,
    ACTIONS(245), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1457] = 1,
    ACTIONS(247), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1480] = 1,
    ACTIONS(249), 20,
      ts_builtin_sym_end,
      sym_control,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      sym_comment,
  [1503] = 7,
    ACTIONS(257), 1,
      anon_sym_TypingSpeed,
    ACTIONS(259), 1,
      anon_sym_Theme,
    ACTIONS(261), 1,
      anon_sym_LoopOffset,
    STATE(38), 1,
      sym_setting,
    ACTIONS(251), 2,
      anon_sym_Shell,
      anon_sym_FontFamily,
    ACTIONS(255), 3,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_Width,
    ACTIONS(253), 5,
      anon_sym_FontSize,
      anon_sym_PlaybackSpeed,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
      anon_sym_Padding,
  [1532] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    STATE(64), 1,
      sym_speed,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1548] = 2,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1558] = 3,
    ACTIONS(263), 1,
      sym_json,
    STATE(58), 1,
      sym_string,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1570] = 2,
    STATE(58), 1,
      sym_string,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1579] = 1,
    ACTIONS(265), 1,
      sym_path,
  [1583] = 1,
    ACTIONS(267), 1,
      sym_time,
  [1587] = 1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
  [1591] = 1,
    ACTIONS(263), 1,
      sym_float,
  [1595] = 1,
    ACTIONS(263), 1,
      sym_integer,
  [1599] = 1,
    ACTIONS(263), 1,
      sym_time,
  [1603] = 1,
    ACTIONS(271), 1,
      sym_float,
  [1607] = 1,
    ACTIONS(273), 1,
      sym_time,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 277,
  [SMALL_STATE(14)] = 309,
  [SMALL_STATE(15)] = 341,
  [SMALL_STATE(16)] = 373,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 437,
  [SMALL_STATE(19)] = 469,
  [SMALL_STATE(20)] = 501,
  [SMALL_STATE(21)] = 527,
  [SMALL_STATE(22)] = 553,
  [SMALL_STATE(23)] = 579,
  [SMALL_STATE(24)] = 605,
  [SMALL_STATE(25)] = 631,
  [SMALL_STATE(26)] = 657,
  [SMALL_STATE(27)] = 683,
  [SMALL_STATE(28)] = 709,
  [SMALL_STATE(29)] = 735,
  [SMALL_STATE(30)] = 761,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 813,
  [SMALL_STATE(33)] = 836,
  [SMALL_STATE(34)] = 859,
  [SMALL_STATE(35)] = 882,
  [SMALL_STATE(36)] = 905,
  [SMALL_STATE(37)] = 928,
  [SMALL_STATE(38)] = 951,
  [SMALL_STATE(39)] = 974,
  [SMALL_STATE(40)] = 997,
  [SMALL_STATE(41)] = 1020,
  [SMALL_STATE(42)] = 1043,
  [SMALL_STATE(43)] = 1066,
  [SMALL_STATE(44)] = 1089,
  [SMALL_STATE(45)] = 1112,
  [SMALL_STATE(46)] = 1135,
  [SMALL_STATE(47)] = 1158,
  [SMALL_STATE(48)] = 1181,
  [SMALL_STATE(49)] = 1204,
  [SMALL_STATE(50)] = 1227,
  [SMALL_STATE(51)] = 1250,
  [SMALL_STATE(52)] = 1273,
  [SMALL_STATE(53)] = 1296,
  [SMALL_STATE(54)] = 1319,
  [SMALL_STATE(55)] = 1342,
  [SMALL_STATE(56)] = 1365,
  [SMALL_STATE(57)] = 1388,
  [SMALL_STATE(58)] = 1411,
  [SMALL_STATE(59)] = 1434,
  [SMALL_STATE(60)] = 1457,
  [SMALL_STATE(61)] = 1480,
  [SMALL_STATE(62)] = 1503,
  [SMALL_STATE(63)] = 1532,
  [SMALL_STATE(64)] = 1548,
  [SMALL_STATE(65)] = 1558,
  [SMALL_STATE(66)] = 1570,
  [SMALL_STATE(67)] = 1579,
  [SMALL_STATE(68)] = 1583,
  [SMALL_STATE(69)] = 1587,
  [SMALL_STATE(70)] = 1591,
  [SMALL_STATE(71)] = 1595,
  [SMALL_STATE(72)] = 1599,
  [SMALL_STATE(73)] = 1603,
  [SMALL_STATE(74)] = 1607,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(67),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speed, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vhs(void) {
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
