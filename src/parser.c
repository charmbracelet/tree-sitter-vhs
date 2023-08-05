#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_control = 1,
  sym_alt = 2,
  anon_sym_Hide = 3,
  anon_sym_Show = 4,
  anon_sym_Output = 5,
  anon_sym_Set = 6,
  anon_sym_Sleep = 7,
  anon_sym_Type = 8,
  anon_sym_Backspace = 9,
  anon_sym_Down = 10,
  anon_sym_Enter = 11,
  anon_sym_Escape = 12,
  anon_sym_Left = 13,
  anon_sym_Right = 14,
  anon_sym_Space = 15,
  anon_sym_Tab = 16,
  anon_sym_Up = 17,
  anon_sym_PageUp = 18,
  anon_sym_PageDown = 19,
  anon_sym_Shell = 20,
  anon_sym_FontFamily = 21,
  anon_sym_FontSize = 22,
  anon_sym_Framerate = 23,
  anon_sym_PlaybackSpeed = 24,
  anon_sym_Height = 25,
  anon_sym_LetterSpacing = 26,
  anon_sym_TypingSpeed = 27,
  anon_sym_LineHeight = 28,
  anon_sym_Padding = 29,
  anon_sym_Theme = 30,
  anon_sym_LoopOffset = 31,
  anon_sym_PERCENT = 32,
  anon_sym_Width = 33,
  anon_sym_BorderRadius = 34,
  anon_sym_Margin = 35,
  anon_sym_MarginFill = 36,
  anon_sym_WindowBar = 37,
  anon_sym_WindowBarSize = 38,
  anon_sym_CursorBlink = 39,
  aux_sym_string_token1 = 40,
  aux_sym_string_token2 = 41,
  aux_sym_string_token3 = 42,
  sym_comment = 43,
  sym_float = 44,
  sym_integer = 45,
  sym_json = 46,
  sym_path = 47,
  anon_sym_AT = 48,
  sym_time = 49,
  sym_boolean = 50,
  sym_program = 51,
  sym_command = 52,
  sym_hide = 53,
  sym_show = 54,
  sym_output = 55,
  sym_set = 56,
  sym_sleep = 57,
  sym_type = 58,
  sym_backspace = 59,
  sym_down = 60,
  sym_enter = 61,
  sym_escape = 62,
  sym_left = 63,
  sym_right = 64,
  sym_space = 65,
  sym_tab = 66,
  sym_up = 67,
  sym_pageup = 68,
  sym_pagedown = 69,
  sym_setting = 70,
  sym_string = 71,
  sym_speed = 72,
  aux_sym_program_repeat1 = 73,
  aux_sym_type_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_control] = "control",
  [sym_alt] = "alt",
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
  [anon_sym_BorderRadius] = "BorderRadius",
  [anon_sym_Margin] = "Margin",
  [anon_sym_MarginFill] = "MarginFill",
  [anon_sym_WindowBar] = "WindowBar",
  [anon_sym_WindowBarSize] = "WindowBarSize",
  [anon_sym_CursorBlink] = "CursorBlink",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_json] = "json",
  [sym_path] = "path",
  [anon_sym_AT] = "@",
  [sym_time] = "time",
  [sym_boolean] = "boolean",
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
  [sym_string] = "string",
  [sym_speed] = "speed",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_control] = sym_control,
  [sym_alt] = sym_alt,
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
  [anon_sym_BorderRadius] = anon_sym_BorderRadius,
  [anon_sym_Margin] = anon_sym_Margin,
  [anon_sym_MarginFill] = anon_sym_MarginFill,
  [anon_sym_WindowBar] = anon_sym_WindowBar,
  [anon_sym_WindowBarSize] = anon_sym_WindowBarSize,
  [anon_sym_CursorBlink] = anon_sym_CursorBlink,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_comment] = sym_comment,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_json] = sym_json,
  [sym_path] = sym_path,
  [anon_sym_AT] = anon_sym_AT,
  [sym_time] = sym_time,
  [sym_boolean] = sym_boolean,
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
  [sym_control] = {
    .visible = true,
    .named = true,
  },
  [sym_alt] = {
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
  [anon_sym_BorderRadius] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Margin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MarginFill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WindowBar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WindowBarSize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CursorBlink] = {
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
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(212);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '%') ADVANCE(244);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '@') ADVANCE(263);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'B') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(187);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(142);
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(209);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(210);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 7:
      if (lookahead == 'B') ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == 'B') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(147);
      if (lookahead == 'U') ADVANCE(151);
      END_STATE();
    case 10:
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == 'H') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'S') ADVANCE(153);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(157);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(159);
      END_STATE();
    case 17:
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(228);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(251);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 118:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 196:
      if (lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 197:
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 198:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 199:
      if (lookahead == 'w') ADVANCE(133);
      END_STATE();
    case 200:
      if (lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 201:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 202:
      if (lookahead == 'z') ADVANCE(64);
      END_STATE();
    case 203:
      if (lookahead == 'z') ADVANCE(67);
      END_STATE();
    case 204:
      if (lookahead == '}') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(205)
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 209:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 210:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 211:
      if (eof) ADVANCE(212);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '@') ADVANCE(263);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'B') ADVANCE(18);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'H') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'P') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(71);
      if (lookahead == 'T') ADVANCE(22);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(211)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_alt);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PageUp);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_PageDown);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_Shell);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PlaybackSpeed);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_TypingSpeed);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LoopOffset);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BorderRadius);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Margin);
      if (lookahead == 'F') ADVANCE(113);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_MarginFill);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_WindowBar);
      if (lookahead == 'S') ADVANCE(112);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_WindowBarSize);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_CursorBlink);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_json);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_boolean);
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
  [7] = {.lex_state = 211},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 211},
  [10] = {.lex_state = 211},
  [11] = {.lex_state = 211},
  [12] = {.lex_state = 211},
  [13] = {.lex_state = 211},
  [14] = {.lex_state = 211},
  [15] = {.lex_state = 211},
  [16] = {.lex_state = 211},
  [17] = {.lex_state = 211},
  [18] = {.lex_state = 211},
  [19] = {.lex_state = 211},
  [20] = {.lex_state = 211},
  [21] = {.lex_state = 211},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 211},
  [24] = {.lex_state = 211},
  [25] = {.lex_state = 211},
  [26] = {.lex_state = 211},
  [27] = {.lex_state = 211},
  [28] = {.lex_state = 211},
  [29] = {.lex_state = 211},
  [30] = {.lex_state = 211},
  [31] = {.lex_state = 211},
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
  [67] = {.lex_state = 205},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 211},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_control] = ACTIONS(1),
    [sym_alt] = ACTIONS(1),
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
    [anon_sym_BorderRadius] = ACTIONS(1),
    [anon_sym_Margin] = ACTIONS(1),
    [anon_sym_MarginFill] = ACTIONS(1),
    [anon_sym_WindowBar] = ACTIONS(1),
    [anon_sym_WindowBarSize] = ACTIONS(1),
    [anon_sym_CursorBlink] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_json] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(73),
    [sym_command] = STATE(3),
    [sym_hide] = STATE(36),
    [sym_show] = STATE(36),
    [sym_output] = STATE(36),
    [sym_set] = STATE(36),
    [sym_sleep] = STATE(36),
    [sym_type] = STATE(36),
    [sym_backspace] = STATE(36),
    [sym_down] = STATE(36),
    [sym_enter] = STATE(36),
    [sym_escape] = STATE(36),
    [sym_left] = STATE(36),
    [sym_right] = STATE(36),
    [sym_space] = STATE(36),
    [sym_tab] = STATE(36),
    [sym_up] = STATE(36),
    [sym_pageup] = STATE(36),
    [sym_pagedown] = STATE(36),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_control] = ACTIONS(5),
    [sym_alt] = ACTIONS(5),
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
    [sym_command] = STATE(2),
    [sym_hide] = STATE(36),
    [sym_show] = STATE(36),
    [sym_output] = STATE(36),
    [sym_set] = STATE(36),
    [sym_sleep] = STATE(36),
    [sym_type] = STATE(36),
    [sym_backspace] = STATE(36),
    [sym_down] = STATE(36),
    [sym_enter] = STATE(36),
    [sym_escape] = STATE(36),
    [sym_left] = STATE(36),
    [sym_right] = STATE(36),
    [sym_space] = STATE(36),
    [sym_tab] = STATE(36),
    [sym_up] = STATE(36),
    [sym_pageup] = STATE(36),
    [sym_pagedown] = STATE(36),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_control] = ACTIONS(45),
    [sym_alt] = ACTIONS(45),
    [anon_sym_Hide] = ACTIONS(48),
    [anon_sym_Show] = ACTIONS(51),
    [anon_sym_Output] = ACTIONS(54),
    [anon_sym_Set] = ACTIONS(57),
    [anon_sym_Sleep] = ACTIONS(60),
    [anon_sym_Type] = ACTIONS(63),
    [anon_sym_Backspace] = ACTIONS(66),
    [anon_sym_Down] = ACTIONS(69),
    [anon_sym_Enter] = ACTIONS(72),
    [anon_sym_Escape] = ACTIONS(75),
    [anon_sym_Left] = ACTIONS(78),
    [anon_sym_Right] = ACTIONS(81),
    [anon_sym_Space] = ACTIONS(84),
    [anon_sym_Tab] = ACTIONS(87),
    [anon_sym_Up] = ACTIONS(90),
    [anon_sym_PageUp] = ACTIONS(93),
    [anon_sym_PageDown] = ACTIONS(96),
    [sym_comment] = ACTIONS(99),
  },
  [3] = {
    [sym_command] = STATE(2),
    [sym_hide] = STATE(36),
    [sym_show] = STATE(36),
    [sym_output] = STATE(36),
    [sym_set] = STATE(36),
    [sym_sleep] = STATE(36),
    [sym_type] = STATE(36),
    [sym_backspace] = STATE(36),
    [sym_down] = STATE(36),
    [sym_enter] = STATE(36),
    [sym_escape] = STATE(36),
    [sym_left] = STATE(36),
    [sym_right] = STATE(36),
    [sym_space] = STATE(36),
    [sym_tab] = STATE(36),
    [sym_up] = STATE(36),
    [sym_pageup] = STATE(36),
    [sym_pagedown] = STATE(36),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_control] = ACTIONS(5),
    [sym_alt] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(104),
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
    ACTIONS(106), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [33] = 3,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(111), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [66] = 3,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(115), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [99] = 1,
    ACTIONS(117), 25,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      sym_comment,
      sym_integer,
  [127] = 1,
    ACTIONS(119), 24,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      sym_comment,
  [154] = 4,
    ACTIONS(123), 1,
      sym_integer,
    ACTIONS(125), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym_speed,
    ACTIONS(121), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [187] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(129), 1,
      sym_integer,
    STATE(20), 1,
      sym_speed,
    ACTIONS(127), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [220] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(133), 1,
      sym_integer,
    STATE(31), 1,
      sym_speed,
    ACTIONS(131), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [253] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(137), 1,
      sym_integer,
    STATE(30), 1,
      sym_speed,
    ACTIONS(135), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [286] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(141), 1,
      sym_integer,
    STATE(29), 1,
      sym_speed,
    ACTIONS(139), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [319] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      sym_integer,
    STATE(28), 1,
      sym_speed,
    ACTIONS(143), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [352] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym_integer,
    STATE(27), 1,
      sym_speed,
    ACTIONS(147), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [385] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(153), 1,
      sym_integer,
    STATE(26), 1,
      sym_speed,
    ACTIONS(151), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [418] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      sym_integer,
    STATE(25), 1,
      sym_speed,
    ACTIONS(155), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [451] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(161), 1,
      sym_integer,
    STATE(24), 1,
      sym_speed,
    ACTIONS(159), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [484] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      sym_integer,
    STATE(23), 1,
      sym_speed,
    ACTIONS(163), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [517] = 2,
    ACTIONS(169), 1,
      sym_integer,
    ACTIONS(167), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [544] = 2,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(171), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [571] = 2,
    ACTIONS(177), 1,
      anon_sym_PERCENT,
    ACTIONS(175), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [598] = 2,
    ACTIONS(181), 1,
      sym_integer,
    ACTIONS(179), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [625] = 2,
    ACTIONS(185), 1,
      sym_integer,
    ACTIONS(183), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [652] = 2,
    ACTIONS(189), 1,
      sym_integer,
    ACTIONS(187), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [679] = 2,
    ACTIONS(193), 1,
      sym_integer,
    ACTIONS(191), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [706] = 2,
    ACTIONS(197), 1,
      sym_integer,
    ACTIONS(195), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [733] = 2,
    ACTIONS(201), 1,
      sym_integer,
    ACTIONS(199), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [760] = 2,
    ACTIONS(205), 1,
      sym_integer,
    ACTIONS(203), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
    ACTIONS(209), 1,
      sym_integer,
    ACTIONS(207), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [814] = 2,
    ACTIONS(213), 1,
      sym_integer,
    ACTIONS(211), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [841] = 1,
    ACTIONS(175), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [865] = 1,
    ACTIONS(215), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [889] = 1,
    ACTIONS(217), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [913] = 1,
    ACTIONS(219), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [937] = 1,
    ACTIONS(221), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [961] = 1,
    ACTIONS(171), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [985] = 1,
    ACTIONS(167), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1009] = 1,
    ACTIONS(223), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1033] = 1,
    ACTIONS(211), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1057] = 1,
    ACTIONS(225), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1081] = 1,
    ACTIONS(207), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1105] = 1,
    ACTIONS(227), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1129] = 1,
    ACTIONS(203), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1153] = 1,
    ACTIONS(229), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1177] = 1,
    ACTIONS(199), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1201] = 1,
    ACTIONS(231), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1225] = 1,
    ACTIONS(195), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1249] = 1,
    ACTIONS(233), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
    ACTIONS(191), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1297] = 1,
    ACTIONS(235), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1321] = 1,
    ACTIONS(187), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1345] = 1,
    ACTIONS(237), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1369] = 1,
    ACTIONS(183), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1393] = 1,
    ACTIONS(239), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1417] = 1,
    ACTIONS(179), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1441] = 1,
    ACTIONS(241), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1465] = 1,
    ACTIONS(243), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1489] = 1,
    ACTIONS(245), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1513] = 1,
    ACTIONS(247), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1537] = 1,
    ACTIONS(249), 21,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
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
  [1561] = 10,
    ACTIONS(257), 1,
      anon_sym_TypingSpeed,
    ACTIONS(259), 1,
      anon_sym_Theme,
    ACTIONS(261), 1,
      anon_sym_LoopOffset,
    ACTIONS(263), 1,
      anon_sym_Margin,
    ACTIONS(265), 1,
      anon_sym_WindowBar,
    ACTIONS(267), 1,
      anon_sym_CursorBlink,
    STATE(43), 1,
      sym_setting,
    ACTIONS(251), 3,
      anon_sym_Shell,
      anon_sym_FontFamily,
      anon_sym_MarginFill,
    ACTIONS(253), 5,
      anon_sym_FontSize,
      anon_sym_PlaybackSpeed,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
      anon_sym_Padding,
    ACTIONS(255), 5,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_Width,
      anon_sym_BorderRadius,
      anon_sym_WindowBarSize,
  [1602] = 4,
    ACTIONS(125), 1,
      anon_sym_AT,
    STATE(65), 1,
      sym_speed,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1618] = 3,
    ACTIONS(269), 1,
      sym_json,
    STATE(32), 1,
      sym_string,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1630] = 2,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1640] = 2,
    STATE(32), 1,
      sym_string,
    ACTIONS(113), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1649] = 1,
    ACTIONS(271), 1,
      sym_path,
  [1653] = 1,
    ACTIONS(269), 1,
      sym_float,
  [1657] = 1,
    ACTIONS(269), 1,
      sym_integer,
  [1661] = 1,
    ACTIONS(269), 1,
      sym_time,
  [1665] = 1,
    ACTIONS(273), 1,
      sym_float,
  [1669] = 1,
    ACTIONS(269), 1,
      sym_boolean,
  [1673] = 1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
  [1677] = 1,
    ACTIONS(277), 1,
      sym_time,
  [1681] = 1,
    ACTIONS(279), 1,
      sym_time,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 319,
  [SMALL_STATE(15)] = 352,
  [SMALL_STATE(16)] = 385,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 451,
  [SMALL_STATE(19)] = 484,
  [SMALL_STATE(20)] = 517,
  [SMALL_STATE(21)] = 544,
  [SMALL_STATE(22)] = 571,
  [SMALL_STATE(23)] = 598,
  [SMALL_STATE(24)] = 625,
  [SMALL_STATE(25)] = 652,
  [SMALL_STATE(26)] = 679,
  [SMALL_STATE(27)] = 706,
  [SMALL_STATE(28)] = 733,
  [SMALL_STATE(29)] = 760,
  [SMALL_STATE(30)] = 787,
  [SMALL_STATE(31)] = 814,
  [SMALL_STATE(32)] = 841,
  [SMALL_STATE(33)] = 865,
  [SMALL_STATE(34)] = 889,
  [SMALL_STATE(35)] = 913,
  [SMALL_STATE(36)] = 937,
  [SMALL_STATE(37)] = 961,
  [SMALL_STATE(38)] = 985,
  [SMALL_STATE(39)] = 1009,
  [SMALL_STATE(40)] = 1033,
  [SMALL_STATE(41)] = 1057,
  [SMALL_STATE(42)] = 1081,
  [SMALL_STATE(43)] = 1105,
  [SMALL_STATE(44)] = 1129,
  [SMALL_STATE(45)] = 1153,
  [SMALL_STATE(46)] = 1177,
  [SMALL_STATE(47)] = 1201,
  [SMALL_STATE(48)] = 1225,
  [SMALL_STATE(49)] = 1249,
  [SMALL_STATE(50)] = 1273,
  [SMALL_STATE(51)] = 1297,
  [SMALL_STATE(52)] = 1321,
  [SMALL_STATE(53)] = 1345,
  [SMALL_STATE(54)] = 1369,
  [SMALL_STATE(55)] = 1393,
  [SMALL_STATE(56)] = 1417,
  [SMALL_STATE(57)] = 1441,
  [SMALL_STATE(58)] = 1465,
  [SMALL_STATE(59)] = 1489,
  [SMALL_STATE(60)] = 1513,
  [SMALL_STATE(61)] = 1537,
  [SMALL_STATE(62)] = 1561,
  [SMALL_STATE(63)] = 1602,
  [SMALL_STATE(64)] = 1618,
  [SMALL_STATE(65)] = 1630,
  [SMALL_STATE(66)] = 1640,
  [SMALL_STATE(67)] = 1649,
  [SMALL_STATE(68)] = 1653,
  [SMALL_STATE(69)] = 1657,
  [SMALL_STATE(70)] = 1661,
  [SMALL_STATE(71)] = 1665,
  [SMALL_STATE(72)] = 1669,
  [SMALL_STATE(73)] = 1673,
  [SMALL_STATE(74)] = 1677,
  [SMALL_STATE(75)] = 1681,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(67),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speed, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [275] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
