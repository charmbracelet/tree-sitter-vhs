#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_Hide = 1,
  anon_sym_Show = 2,
  anon_sym_Copy = 3,
  anon_sym_Paste = 4,
  sym_control = 5,
  sym_alt = 6,
  sym_shift = 7,
  anon_sym_Output = 8,
  anon_sym_Set = 9,
  anon_sym_Env = 10,
  anon_sym_Sleep = 11,
  anon_sym_Type = 12,
  anon_sym_Backspace = 13,
  anon_sym_Down = 14,
  anon_sym_Enter = 15,
  anon_sym_Escape = 16,
  anon_sym_Left = 17,
  anon_sym_Right = 18,
  anon_sym_Space = 19,
  anon_sym_Tab = 20,
  anon_sym_Up = 21,
  anon_sym_PageUp = 22,
  anon_sym_PageDown = 23,
  anon_sym_Wait = 24,
  anon_sym_Shell = 25,
  anon_sym_FontFamily = 26,
  anon_sym_FontSize = 27,
  anon_sym_Framerate = 28,
  anon_sym_PlaybackSpeed = 29,
  anon_sym_Height = 30,
  anon_sym_LetterSpacing = 31,
  anon_sym_TypingSpeed = 32,
  anon_sym_LineHeight = 33,
  anon_sym_Padding = 34,
  anon_sym_Theme = 35,
  anon_sym_LoopOffset = 36,
  anon_sym_PERCENT = 37,
  anon_sym_Width = 38,
  anon_sym_BorderRadius = 39,
  anon_sym_Margin = 40,
  anon_sym_MarginFill = 41,
  anon_sym_WindowBar = 42,
  anon_sym_WindowBarSize = 43,
  anon_sym_CursorBlink = 44,
  aux_sym_string_token1 = 45,
  aux_sym_string_token2 = 46,
  aux_sym_string_token3 = 47,
  aux_sym_string_token4 = 48,
  sym_regex = 49,
  sym_comment = 50,
  sym_float = 51,
  sym_integer = 52,
  sym_json = 53,
  sym_path = 54,
  anon_sym_AT = 55,
  anon_sym_PLUS = 56,
  anon_sym_Screen = 57,
  anon_sym_Line = 58,
  sym_time = 59,
  sym_boolean = 60,
  sym_program = 61,
  sym_command = 62,
  sym_output = 63,
  sym_set = 64,
  sym_env = 65,
  sym_sleep = 66,
  sym_type = 67,
  sym_backspace = 68,
  sym_down = 69,
  sym_enter = 70,
  sym_escape = 71,
  sym_left = 72,
  sym_right = 73,
  sym_space = 74,
  sym_tab = 75,
  sym_up = 76,
  sym_pageup = 77,
  sym_pagedown = 78,
  sym_wait = 79,
  sym_setting = 80,
  sym_string = 81,
  sym_speed = 82,
  sym_waitOn = 83,
  aux_sym_program_repeat1 = 84,
  aux_sym_type_repeat1 = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Hide] = "Hide",
  [anon_sym_Show] = "Show",
  [anon_sym_Copy] = "Copy",
  [anon_sym_Paste] = "Paste",
  [sym_control] = "control",
  [sym_alt] = "alt",
  [sym_shift] = "shift",
  [anon_sym_Output] = "Output",
  [anon_sym_Set] = "Set",
  [anon_sym_Env] = "Env",
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
  [anon_sym_Wait] = "Wait",
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
  [aux_sym_string_token4] = "string_token4",
  [sym_regex] = "regex",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_json] = "json",
  [sym_path] = "path",
  [anon_sym_AT] = "@",
  [anon_sym_PLUS] = "+",
  [anon_sym_Screen] = "Screen",
  [anon_sym_Line] = "Line",
  [sym_time] = "time",
  [sym_boolean] = "boolean",
  [sym_program] = "program",
  [sym_command] = "command",
  [sym_output] = "output",
  [sym_set] = "set",
  [sym_env] = "env",
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
  [sym_wait] = "wait",
  [sym_setting] = "setting",
  [sym_string] = "string",
  [sym_speed] = "speed",
  [sym_waitOn] = "waitOn",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Hide] = anon_sym_Hide,
  [anon_sym_Show] = anon_sym_Show,
  [anon_sym_Copy] = anon_sym_Copy,
  [anon_sym_Paste] = anon_sym_Paste,
  [sym_control] = sym_control,
  [sym_alt] = sym_alt,
  [sym_shift] = sym_shift,
  [anon_sym_Output] = anon_sym_Output,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_Env] = anon_sym_Env,
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
  [anon_sym_Wait] = anon_sym_Wait,
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
  [aux_sym_string_token4] = aux_sym_string_token4,
  [sym_regex] = sym_regex,
  [sym_comment] = sym_comment,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_json] = sym_json,
  [sym_path] = sym_path,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_Screen] = anon_sym_Screen,
  [anon_sym_Line] = anon_sym_Line,
  [sym_time] = sym_time,
  [sym_boolean] = sym_boolean,
  [sym_program] = sym_program,
  [sym_command] = sym_command,
  [sym_output] = sym_output,
  [sym_set] = sym_set,
  [sym_env] = sym_env,
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
  [sym_wait] = sym_wait,
  [sym_setting] = sym_setting,
  [sym_string] = sym_string,
  [sym_speed] = sym_speed,
  [sym_waitOn] = sym_waitOn,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_Copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Paste] = {
    .visible = true,
    .named = false,
  },
  [sym_control] = {
    .visible = true,
    .named = true,
  },
  [sym_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_shift] = {
    .visible = true,
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
  [anon_sym_Env] = {
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
  [anon_sym_Wait] = {
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
  [aux_sym_string_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Screen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Line] = {
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
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_env] = {
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
  [sym_wait] = {
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
  [sym_waitOn] = {
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
  [34] = 7,
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
  [70] = 21,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 7,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(249);
      ADVANCE_MAP(
        '"', 2,
        '#', 402,
        '%', 315,
        '\'', 3,
        '+', 411,
        '.', 244,
        '/', 11,
        '@', 410,
        'A', 141,
        'B', 29,
        'C', 168,
        'D', 166,
        'E', 153,
        'F', 167,
        'H', 103,
        'L', 67,
        'M', 39,
        'O', 229,
        'P', 30,
        'R', 122,
        'S', 54,
        'T', 31,
        'U', 173,
        'W', 34,
        '`', 28,
        'f', 33,
        't', 193,
        '{', 242,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '`') ADVANCE(28);
      if (lookahead == '{') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(323);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == 'S') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(260);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead == 'S') ADVANCE(259);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(149);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(172);
      if (lookahead == 'U') ADVANCE(177);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead == 'T') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead == 'T') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead == 'S') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead == 'T') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(266);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(123);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(179);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(183);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(184);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(325);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(293);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(307);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(221);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(222);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(309);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(322);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(203);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(273);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 233:
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 234:
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 235:
      if (lookahead == 'w') ADVANCE(154);
      END_STATE();
    case 236:
      if (lookahead == 'w') ADVANCE(157);
      END_STATE();
    case 237:
      if (lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 238:
      if (lookahead == 'y') ADVANCE(304);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 240:
      if (lookahead == 'z') ADVANCE(78);
      END_STATE();
    case 241:
      if (lookahead == 'z') ADVANCE(81);
      END_STATE();
    case 242:
      if (lookahead == '}') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 243:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(243);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 247:
      if (eof) ADVANCE(249);
      ADVANCE_MAP(
        '"', 2,
        '#', 402,
        '\'', 3,
        'A', 365,
        'B', 330,
        'C', 371,
        'D', 370,
        'E', 367,
        'H', 360,
        'L', 343,
        'O', 394,
        'P', 331,
        'R', 361,
        'S', 352,
        'T', 332,
        'U', 373,
        'W', 333,
        '`', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 248:
      if (eof) ADVANCE(249);
      ADVANCE_MAP(
        '#', 402,
        '@', 410,
        'A', 141,
        'B', 29,
        'C', 168,
        'D', 166,
        'E', 153,
        'F', 167,
        'H', 103,
        'L', 68,
        'M', 39,
        'O', 229,
        'P', 30,
        'R', 122,
        'S', 84,
        'T', 31,
        'U', 173,
        'W', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Hide);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Show);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Copy);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Copy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Paste);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Paste);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_control);
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_control);
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_control);
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_alt);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_alt);
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_alt);
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_alt);
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_shift);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_shift);
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_shift);
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_Output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_Set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Env);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Env);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Sleep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Backspace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Enter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_Left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_Space);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Tab);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PageUp);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_PageUp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_PageDown);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PageDown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_Wait);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_Wait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_Shell);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PlaybackSpeed);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_TypingSpeed);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LoopOffset);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_BorderRadius);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_Margin);
      if (lookahead == 'F') ADVANCE(132);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_MarginFill);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_WindowBar);
      if (lookahead == 'S') ADVANCE(131);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_WindowBarSize);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_CursorBlink);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '+') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '+') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '+') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'D') ADVANCE(372);
      if (lookahead == 'U') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'y') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'b') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'd') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'h') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'f') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'f') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'g') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'g') ADVANCE(345);
      if (lookahead == 's') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'h') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'k') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'l') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'l') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'n') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'o') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'o') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'r') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 's') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == 'v') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'u') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'u') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'w') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'w') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'w') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'y') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 's') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 's') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_json);
      if (lookahead == '}') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Screen);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_Line);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 'H') ADVANCE(104);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 's') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 's') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 418:
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
  [4] = {.lex_state = 247},
  [5] = {.lex_state = 247},
  [6] = {.lex_state = 247},
  [7] = {.lex_state = 247},
  [8] = {.lex_state = 248},
  [9] = {.lex_state = 248},
  [10] = {.lex_state = 248},
  [11] = {.lex_state = 248},
  [12] = {.lex_state = 248},
  [13] = {.lex_state = 248},
  [14] = {.lex_state = 248},
  [15] = {.lex_state = 248},
  [16] = {.lex_state = 248},
  [17] = {.lex_state = 248},
  [18] = {.lex_state = 248},
  [19] = {.lex_state = 248},
  [20] = {.lex_state = 248},
  [21] = {.lex_state = 248},
  [22] = {.lex_state = 248},
  [23] = {.lex_state = 248},
  [24] = {.lex_state = 248},
  [25] = {.lex_state = 248},
  [26] = {.lex_state = 248},
  [27] = {.lex_state = 248},
  [28] = {.lex_state = 248},
  [29] = {.lex_state = 248},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 248},
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
  [65] = {.lex_state = 248},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 247},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 243},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Hide] = ACTIONS(1),
    [anon_sym_Show] = ACTIONS(1),
    [anon_sym_Copy] = ACTIONS(1),
    [anon_sym_Paste] = ACTIONS(1),
    [sym_control] = ACTIONS(1),
    [sym_alt] = ACTIONS(1),
    [sym_shift] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_Env] = ACTIONS(1),
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
    [anon_sym_Wait] = ACTIONS(1),
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
    [sym_regex] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_json] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_Screen] = ACTIONS(1),
    [anon_sym_Line] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(84),
    [sym_command] = STATE(2),
    [sym_output] = STATE(46),
    [sym_set] = STATE(46),
    [sym_env] = STATE(46),
    [sym_sleep] = STATE(46),
    [sym_type] = STATE(46),
    [sym_backspace] = STATE(46),
    [sym_down] = STATE(46),
    [sym_enter] = STATE(46),
    [sym_escape] = STATE(46),
    [sym_left] = STATE(46),
    [sym_right] = STATE(46),
    [sym_space] = STATE(46),
    [sym_tab] = STATE(46),
    [sym_up] = STATE(46),
    [sym_pageup] = STATE(46),
    [sym_pagedown] = STATE(46),
    [sym_wait] = STATE(46),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Hide] = ACTIONS(5),
    [anon_sym_Show] = ACTIONS(5),
    [anon_sym_Copy] = ACTIONS(5),
    [anon_sym_Paste] = ACTIONS(5),
    [sym_control] = ACTIONS(5),
    [sym_alt] = ACTIONS(5),
    [sym_shift] = ACTIONS(5),
    [anon_sym_Output] = ACTIONS(7),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_Env] = ACTIONS(11),
    [anon_sym_Sleep] = ACTIONS(13),
    [anon_sym_Type] = ACTIONS(15),
    [anon_sym_Backspace] = ACTIONS(17),
    [anon_sym_Down] = ACTIONS(19),
    [anon_sym_Enter] = ACTIONS(21),
    [anon_sym_Escape] = ACTIONS(23),
    [anon_sym_Left] = ACTIONS(25),
    [anon_sym_Right] = ACTIONS(27),
    [anon_sym_Space] = ACTIONS(29),
    [anon_sym_Tab] = ACTIONS(31),
    [anon_sym_Up] = ACTIONS(33),
    [anon_sym_PageUp] = ACTIONS(35),
    [anon_sym_PageDown] = ACTIONS(37),
    [anon_sym_Wait] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [2] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(46),
    [sym_set] = STATE(46),
    [sym_env] = STATE(46),
    [sym_sleep] = STATE(46),
    [sym_type] = STATE(46),
    [sym_backspace] = STATE(46),
    [sym_down] = STATE(46),
    [sym_enter] = STATE(46),
    [sym_escape] = STATE(46),
    [sym_left] = STATE(46),
    [sym_right] = STATE(46),
    [sym_space] = STATE(46),
    [sym_tab] = STATE(46),
    [sym_up] = STATE(46),
    [sym_pageup] = STATE(46),
    [sym_pagedown] = STATE(46),
    [sym_wait] = STATE(46),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_Hide] = ACTIONS(5),
    [anon_sym_Show] = ACTIONS(5),
    [anon_sym_Copy] = ACTIONS(5),
    [anon_sym_Paste] = ACTIONS(5),
    [sym_control] = ACTIONS(5),
    [sym_alt] = ACTIONS(5),
    [sym_shift] = ACTIONS(5),
    [anon_sym_Output] = ACTIONS(7),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_Env] = ACTIONS(11),
    [anon_sym_Sleep] = ACTIONS(13),
    [anon_sym_Type] = ACTIONS(15),
    [anon_sym_Backspace] = ACTIONS(17),
    [anon_sym_Down] = ACTIONS(19),
    [anon_sym_Enter] = ACTIONS(21),
    [anon_sym_Escape] = ACTIONS(23),
    [anon_sym_Left] = ACTIONS(25),
    [anon_sym_Right] = ACTIONS(27),
    [anon_sym_Space] = ACTIONS(29),
    [anon_sym_Tab] = ACTIONS(31),
    [anon_sym_Up] = ACTIONS(33),
    [anon_sym_PageUp] = ACTIONS(35),
    [anon_sym_PageDown] = ACTIONS(37),
    [anon_sym_Wait] = ACTIONS(39),
    [sym_comment] = ACTIONS(45),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(46),
    [sym_set] = STATE(46),
    [sym_env] = STATE(46),
    [sym_sleep] = STATE(46),
    [sym_type] = STATE(46),
    [sym_backspace] = STATE(46),
    [sym_down] = STATE(46),
    [sym_enter] = STATE(46),
    [sym_escape] = STATE(46),
    [sym_left] = STATE(46),
    [sym_right] = STATE(46),
    [sym_space] = STATE(46),
    [sym_tab] = STATE(46),
    [sym_up] = STATE(46),
    [sym_pageup] = STATE(46),
    [sym_pagedown] = STATE(46),
    [sym_wait] = STATE(46),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_Hide] = ACTIONS(49),
    [anon_sym_Show] = ACTIONS(49),
    [anon_sym_Copy] = ACTIONS(49),
    [anon_sym_Paste] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_alt] = ACTIONS(49),
    [sym_shift] = ACTIONS(49),
    [anon_sym_Output] = ACTIONS(52),
    [anon_sym_Set] = ACTIONS(55),
    [anon_sym_Env] = ACTIONS(58),
    [anon_sym_Sleep] = ACTIONS(61),
    [anon_sym_Type] = ACTIONS(64),
    [anon_sym_Backspace] = ACTIONS(67),
    [anon_sym_Down] = ACTIONS(70),
    [anon_sym_Enter] = ACTIONS(73),
    [anon_sym_Escape] = ACTIONS(76),
    [anon_sym_Left] = ACTIONS(79),
    [anon_sym_Right] = ACTIONS(82),
    [anon_sym_Space] = ACTIONS(85),
    [anon_sym_Tab] = ACTIONS(88),
    [anon_sym_Up] = ACTIONS(91),
    [anon_sym_PageUp] = ACTIONS(94),
    [anon_sym_PageDown] = ACTIONS(97),
    [anon_sym_Wait] = ACTIONS(100),
    [sym_comment] = ACTIONS(103),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(112), 1,
      aux_sym_string_token4,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(110), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      sym_comment,
    ACTIONS(108), 21,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
  [43] = 5,
    ACTIONS(121), 1,
      aux_sym_string_token4,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(118), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      sym_comment,
    ACTIONS(116), 21,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
  [86] = 5,
    ACTIONS(112), 1,
      aux_sym_string_token4,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(110), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      sym_comment,
    ACTIONS(126), 21,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
  [129] = 2,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      sym_comment,
    ACTIONS(130), 22,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      aux_sym_string_token4,
  [164] = 4,
    ACTIONS(134), 1,
      sym_integer,
    ACTIONS(136), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym_speed,
    ACTIONS(132), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [202] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(140), 1,
      sym_integer,
    STATE(28), 1,
      sym_speed,
    ACTIONS(138), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [240] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(144), 1,
      sym_integer,
    STATE(31), 1,
      sym_speed,
    ACTIONS(142), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [278] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(148), 1,
      sym_integer,
    STATE(29), 1,
      sym_speed,
    ACTIONS(146), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [316] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(152), 1,
      sym_integer,
    STATE(26), 1,
      sym_speed,
    ACTIONS(150), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [354] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(156), 1,
      sym_integer,
    STATE(25), 1,
      sym_speed,
    ACTIONS(154), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [392] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(160), 1,
      sym_integer,
    STATE(24), 1,
      sym_speed,
    ACTIONS(158), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [430] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(164), 1,
      sym_integer,
    STATE(23), 1,
      sym_speed,
    ACTIONS(162), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [468] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(168), 1,
      sym_integer,
    STATE(27), 1,
      sym_speed,
    ACTIONS(166), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [506] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(172), 1,
      sym_integer,
    STATE(20), 1,
      sym_speed,
    ACTIONS(170), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [544] = 4,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(176), 1,
      sym_integer,
    STATE(19), 1,
      sym_speed,
    ACTIONS(174), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [582] = 2,
    ACTIONS(180), 1,
      sym_integer,
    ACTIONS(178), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [614] = 2,
    ACTIONS(184), 1,
      sym_integer,
    ACTIONS(182), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [646] = 1,
    ACTIONS(186), 27,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
      sym_integer,
  [676] = 2,
    ACTIONS(190), 1,
      sym_integer,
    ACTIONS(188), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [708] = 2,
    ACTIONS(194), 1,
      sym_integer,
    ACTIONS(192), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [740] = 2,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(196), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [772] = 2,
    ACTIONS(202), 1,
      sym_integer,
    ACTIONS(200), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [804] = 2,
    ACTIONS(206), 1,
      sym_integer,
    ACTIONS(204), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [836] = 2,
    ACTIONS(210), 1,
      sym_integer,
    ACTIONS(208), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [868] = 2,
    ACTIONS(214), 1,
      sym_integer,
    ACTIONS(212), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [900] = 2,
    ACTIONS(218), 1,
      sym_integer,
    ACTIONS(216), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [932] = 2,
    ACTIONS(222), 1,
      anon_sym_PERCENT,
    ACTIONS(220), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [964] = 2,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(224), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [996] = 1,
    ACTIONS(216), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1025] = 1,
    ACTIONS(228), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1054] = 1,
    ACTIONS(128), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1083] = 1,
    ACTIONS(230), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1112] = 1,
    ACTIONS(232), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1141] = 1,
    ACTIONS(234), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1170] = 1,
    ACTIONS(236), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1199] = 1,
    ACTIONS(238), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1228] = 1,
    ACTIONS(240), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1257] = 1,
    ACTIONS(242), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1286] = 1,
    ACTIONS(208), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1315] = 1,
    ACTIONS(212), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1344] = 1,
    ACTIONS(224), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1373] = 1,
    ACTIONS(204), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1402] = 1,
    ACTIONS(244), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1431] = 1,
    ACTIONS(200), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1460] = 1,
    ACTIONS(246), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1489] = 1,
    ACTIONS(196), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1518] = 1,
    ACTIONS(248), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1547] = 1,
    ACTIONS(192), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1576] = 1,
    ACTIONS(250), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1605] = 1,
    ACTIONS(188), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1634] = 1,
    ACTIONS(252), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1663] = 1,
    ACTIONS(182), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1692] = 1,
    ACTIONS(254), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1721] = 1,
    ACTIONS(178), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1750] = 1,
    ACTIONS(256), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1779] = 1,
    ACTIONS(258), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1808] = 1,
    ACTIONS(260), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1837] = 1,
    ACTIONS(262), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1866] = 1,
    ACTIONS(264), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1895] = 1,
    ACTIONS(266), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1924] = 1,
    ACTIONS(220), 26,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
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
      anon_sym_Wait,
      sym_comment,
  [1953] = 10,
    ACTIONS(274), 1,
      anon_sym_TypingSpeed,
    ACTIONS(276), 1,
      anon_sym_Theme,
    ACTIONS(278), 1,
      anon_sym_LoopOffset,
    ACTIONS(280), 1,
      anon_sym_Margin,
    ACTIONS(282), 1,
      anon_sym_WindowBar,
    ACTIONS(284), 1,
      anon_sym_CursorBlink,
    STATE(36), 1,
      sym_setting,
    ACTIONS(268), 3,
      anon_sym_Shell,
      anon_sym_FontFamily,
      anon_sym_MarginFill,
    ACTIONS(270), 5,
      anon_sym_FontSize,
      anon_sym_PlaybackSpeed,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
      anon_sym_Padding,
    ACTIONS(272), 5,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_Width,
      anon_sym_BorderRadius,
      anon_sym_WindowBarSize,
  [1994] = 4,
    ACTIONS(286), 1,
      anon_sym_AT,
    STATE(67), 1,
      sym_speed,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(110), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2011] = 2,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(110), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2022] = 3,
    ACTIONS(290), 1,
      sym_json,
    STATE(64), 1,
      sym_string,
    ACTIONS(288), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2035] = 5,
    ACTIONS(286), 1,
      anon_sym_AT,
    ACTIONS(292), 1,
      sym_regex,
    ACTIONS(294), 1,
      anon_sym_PLUS,
    STATE(75), 1,
      sym_waitOn,
    STATE(86), 1,
      sym_speed,
  [2051] = 1,
    ACTIONS(186), 5,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
      sym_regex,
  [2059] = 2,
    STATE(72), 1,
      sym_string,
    ACTIONS(296), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2069] = 2,
    STATE(63), 1,
      sym_string,
    ACTIONS(288), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2079] = 2,
    STATE(64), 1,
      sym_string,
    ACTIONS(288), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2089] = 1,
    ACTIONS(128), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2096] = 3,
    ACTIONS(286), 1,
      anon_sym_AT,
    ACTIONS(298), 1,
      sym_regex,
    STATE(83), 1,
      sym_speed,
  [2106] = 1,
    ACTIONS(300), 2,
      anon_sym_Screen,
      anon_sym_Line,
  [2111] = 1,
    ACTIONS(302), 2,
      sym_regex,
      anon_sym_AT,
  [2116] = 1,
    ACTIONS(290), 1,
      sym_integer,
  [2120] = 1,
    ACTIONS(290), 1,
      sym_time,
  [2124] = 1,
    ACTIONS(304), 1,
      sym_time,
  [2128] = 1,
    ACTIONS(306), 1,
      sym_time,
  [2132] = 1,
    ACTIONS(290), 1,
      sym_float,
  [2136] = 1,
    ACTIONS(308), 1,
      sym_regex,
  [2140] = 1,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
  [2144] = 1,
    ACTIONS(290), 1,
      sym_boolean,
  [2148] = 1,
    ACTIONS(298), 1,
      sym_regex,
  [2152] = 1,
    ACTIONS(312), 1,
      sym_path,
  [2156] = 1,
    ACTIONS(314), 1,
      sym_float,
  [2160] = 1,
    ACTIONS(316), 1,
      sym_time,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 278,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 354,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 430,
  [SMALL_STATE(16)] = 468,
  [SMALL_STATE(17)] = 506,
  [SMALL_STATE(18)] = 544,
  [SMALL_STATE(19)] = 582,
  [SMALL_STATE(20)] = 614,
  [SMALL_STATE(21)] = 646,
  [SMALL_STATE(22)] = 676,
  [SMALL_STATE(23)] = 708,
  [SMALL_STATE(24)] = 740,
  [SMALL_STATE(25)] = 772,
  [SMALL_STATE(26)] = 804,
  [SMALL_STATE(27)] = 836,
  [SMALL_STATE(28)] = 868,
  [SMALL_STATE(29)] = 900,
  [SMALL_STATE(30)] = 932,
  [SMALL_STATE(31)] = 964,
  [SMALL_STATE(32)] = 996,
  [SMALL_STATE(33)] = 1025,
  [SMALL_STATE(34)] = 1054,
  [SMALL_STATE(35)] = 1083,
  [SMALL_STATE(36)] = 1112,
  [SMALL_STATE(37)] = 1141,
  [SMALL_STATE(38)] = 1170,
  [SMALL_STATE(39)] = 1199,
  [SMALL_STATE(40)] = 1228,
  [SMALL_STATE(41)] = 1257,
  [SMALL_STATE(42)] = 1286,
  [SMALL_STATE(43)] = 1315,
  [SMALL_STATE(44)] = 1344,
  [SMALL_STATE(45)] = 1373,
  [SMALL_STATE(46)] = 1402,
  [SMALL_STATE(47)] = 1431,
  [SMALL_STATE(48)] = 1460,
  [SMALL_STATE(49)] = 1489,
  [SMALL_STATE(50)] = 1518,
  [SMALL_STATE(51)] = 1547,
  [SMALL_STATE(52)] = 1576,
  [SMALL_STATE(53)] = 1605,
  [SMALL_STATE(54)] = 1634,
  [SMALL_STATE(55)] = 1663,
  [SMALL_STATE(56)] = 1692,
  [SMALL_STATE(57)] = 1721,
  [SMALL_STATE(58)] = 1750,
  [SMALL_STATE(59)] = 1779,
  [SMALL_STATE(60)] = 1808,
  [SMALL_STATE(61)] = 1837,
  [SMALL_STATE(62)] = 1866,
  [SMALL_STATE(63)] = 1895,
  [SMALL_STATE(64)] = 1924,
  [SMALL_STATE(65)] = 1953,
  [SMALL_STATE(66)] = 1994,
  [SMALL_STATE(67)] = 2011,
  [SMALL_STATE(68)] = 2022,
  [SMALL_STATE(69)] = 2035,
  [SMALL_STATE(70)] = 2051,
  [SMALL_STATE(71)] = 2059,
  [SMALL_STATE(72)] = 2069,
  [SMALL_STATE(73)] = 2079,
  [SMALL_STATE(74)] = 2089,
  [SMALL_STATE(75)] = 2096,
  [SMALL_STATE(76)] = 2106,
  [SMALL_STATE(77)] = 2111,
  [SMALL_STATE(78)] = 2116,
  [SMALL_STATE(79)] = 2120,
  [SMALL_STATE(80)] = 2124,
  [SMALL_STATE(81)] = 2128,
  [SMALL_STATE(82)] = 2132,
  [SMALL_STATE(83)] = 2136,
  [SMALL_STATE(84)] = 2140,
  [SMALL_STATE(85)] = 2144,
  [SMALL_STATE(86)] = 2148,
  [SMALL_STATE(87)] = 2152,
  [SMALL_STATE(88)] = 2156,
  [SMALL_STATE(89)] = 2160,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speed, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waitOn, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [310] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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

TS_PUBLIC const TSLanguage *tree_sitter_vhs(void) {
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
