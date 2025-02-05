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
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  anon_sym_Require = 25,
  anon_sym_Shell = 26,
  anon_sym_FontFamily = 27,
  anon_sym_FontSize = 28,
  anon_sym_Framerate = 29,
  anon_sym_PlaybackSpeed = 30,
  anon_sym_Height = 31,
  anon_sym_LetterSpacing = 32,
  anon_sym_TypingSpeed = 33,
  anon_sym_LineHeight = 34,
  anon_sym_Padding = 35,
  anon_sym_Theme = 36,
  anon_sym_LoopOffset = 37,
  anon_sym_PERCENT = 38,
  anon_sym_Width = 39,
  anon_sym_BorderRadius = 40,
  anon_sym_Margin = 41,
  anon_sym_MarginFill = 42,
  anon_sym_WindowBar = 43,
  anon_sym_WindowBarSize = 44,
  anon_sym_CursorBlink = 45,
  aux_sym_string_token1 = 46,
  aux_sym_string_token2 = 47,
  aux_sym_string_token3 = 48,
  aux_sym_string_token4 = 49,
  sym_regex = 50,
  sym_comment = 51,
  sym_float = 52,
  sym_integer = 53,
  sym_json = 54,
  sym_path = 55,
  anon_sym_AT = 56,
  anon_sym_PLUS = 57,
  anon_sym_Screen = 58,
  anon_sym_Line = 59,
  sym_time = 60,
  sym_boolean = 61,
  sym_program = 62,
  sym_command = 63,
  sym_output = 64,
  sym_set = 65,
  sym_env = 66,
  sym_sleep = 67,
  sym_type = 68,
  sym_backspace = 69,
  sym_down = 70,
  sym_enter = 71,
  sym_escape = 72,
  sym_left = 73,
  sym_right = 74,
  sym_space = 75,
  sym_tab = 76,
  sym_up = 77,
  sym_pageup = 78,
  sym_pagedown = 79,
  sym_wait = 80,
  sym_require = 81,
  sym_setting = 82,
  sym_string = 83,
  sym_duration = 84,
  sym_waitOn = 85,
  aux_sym_program_repeat1 = 86,
  aux_sym_type_repeat1 = 87,
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
  [anon_sym_Require] = "Require",
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
  [sym_require] = "require",
  [sym_setting] = "setting",
  [sym_string] = "string",
  [sym_duration] = "duration",
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
  [anon_sym_Require] = anon_sym_Require,
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
  [sym_require] = sym_require,
  [sym_setting] = sym_setting,
  [sym_string] = sym_string,
  [sym_duration] = sym_duration,
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
  [anon_sym_Require] = {
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
  [sym_require] = {
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
  [sym_duration] = {
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
  [33] = 7,
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
  [74] = 31,
  [75] = 75,
  [76] = 7,
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
  [89] = 89,
  [90] = 90,
  [91] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(254);
      ADVANCE_MAP(
        '"', 2,
        '#', 414,
        '%', 322,
        '\'', 3,
        '+', 423,
        '.', 249,
        '/', 10,
        '@', 422,
        'A', 143,
        'B', 29,
        'C', 170,
        'D', 168,
        'E', 155,
        'F', 169,
        'H', 67,
        'L', 68,
        'M', 39,
        'O', 233,
        'P', 30,
        'R', 70,
        'S', 54,
        'T', 31,
        'U', 175,
        'W', 34,
        '`', 28,
        'f', 33,
        't', 196,
        '{', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(422);
      if (lookahead == '`') ADVANCE(28);
      if (lookahead == '{') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(265);
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(263);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(151);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(174);
      if (lookahead == 'U') ADVANCE(179);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == 'S') ADVANCE(269);
      if (lookahead == 'T') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(267);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == 'T') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(267);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(263);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(263);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(271);
      END_STATE();
    case 20:
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 21:
      if (lookahead == 'H') ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(135);
      if (lookahead == 'S') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(181);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(185);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(186);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(332);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == 'y') ADVANCE(180);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(298);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(267);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'h') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'g') ADVANCE(73);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'h') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(222);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(225);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(329);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(207);
      END_STATE();
    case 142:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 187:
      if (lookahead == 'q') ADVANCE(234);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'v') ADVANCE(278);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 238:
      if (lookahead == 'w') ADVANCE(257);
      END_STATE();
    case 239:
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 240:
      if (lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 241:
      if (lookahead == 'w') ADVANCE(159);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(259);
      END_STATE();
    case 243:
      if (lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 244:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 245:
      if (lookahead == 'z') ADVANCE(81);
      END_STATE();
    case 246:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 247:
      if (lookahead == '}') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 248:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(248);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 252:
      if (eof) ADVANCE(254);
      ADVANCE_MAP(
        '"', 2,
        '#', 414,
        '\'', 3,
        '.', 250,
        'A', 374,
        'B', 337,
        'C', 380,
        'D', 379,
        'E', 376,
        'H', 369,
        'L', 350,
        'O', 405,
        'P', 338,
        'R', 351,
        'S', 361,
        'T', 339,
        'U', 382,
        'W', 340,
        '`', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 253:
      if (eof) ADVANCE(254);
      ADVANCE_MAP(
        '#', 414,
        '@', 422,
        'A', 143,
        'B', 29,
        'C', 170,
        'D', 168,
        'E', 155,
        'F', 169,
        'H', 67,
        'L', 69,
        'M', 39,
        'O', 233,
        'P', 30,
        'R', 70,
        'S', 87,
        'T', 31,
        'U', 175,
        'W', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Hide);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Show);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Copy);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Copy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Paste);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Paste);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_control);
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_control);
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_control);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_alt);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_alt);
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_alt);
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_alt);
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_shift);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_shift);
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_shift);
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Env);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Env);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Sleep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Backspace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_Down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_Enter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_Escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_Right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Space);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_Tab);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_Up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_PageUp);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_PageUp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PageDown);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PageDown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Wait);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_Wait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Require);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_Require);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_Shell);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PlaybackSpeed);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_TypingSpeed);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LoopOffset);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_BorderRadius);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_Margin);
      if (lookahead == 'F') ADVANCE(134);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_MarginFill);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_WindowBar);
      if (lookahead == 'S') ADVANCE(133);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_WindowBarSize);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_CursorBlink);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '+') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '+') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '+') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'D') ADVANCE(381);
      if (lookahead == 'U') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'y') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'b') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'd') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'h') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'p') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'f') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'f') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'g') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'g') ADVANCE(353);
      if (lookahead == 's') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'h') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'k') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'l') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'o') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'o') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'q') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 's') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'u') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'u') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'u') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'w') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'w') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'w') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'y') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == '/') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_json);
      if (lookahead == '}') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_Screen);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_Line);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 'H') ADVANCE(106);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 430:
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
  [4] = {.lex_state = 252},
  [5] = {.lex_state = 252},
  [6] = {.lex_state = 252},
  [7] = {.lex_state = 252},
  [8] = {.lex_state = 253},
  [9] = {.lex_state = 253},
  [10] = {.lex_state = 253},
  [11] = {.lex_state = 253},
  [12] = {.lex_state = 253},
  [13] = {.lex_state = 253},
  [14] = {.lex_state = 253},
  [15] = {.lex_state = 253},
  [16] = {.lex_state = 253},
  [17] = {.lex_state = 253},
  [18] = {.lex_state = 253},
  [19] = {.lex_state = 253},
  [20] = {.lex_state = 253},
  [21] = {.lex_state = 253},
  [22] = {.lex_state = 253},
  [23] = {.lex_state = 253},
  [24] = {.lex_state = 253},
  [25] = {.lex_state = 253},
  [26] = {.lex_state = 253},
  [27] = {.lex_state = 253},
  [28] = {.lex_state = 253},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 253},
  [31] = {.lex_state = 253},
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
  [66] = {.lex_state = 253},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 252},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 253},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 248},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 252},
  [91] = {.lex_state = 1},
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
    [anon_sym_Require] = ACTIONS(1),
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
    [sym_program] = STATE(81),
    [sym_command] = STATE(2),
    [sym_output] = STATE(34),
    [sym_set] = STATE(34),
    [sym_env] = STATE(34),
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
    [sym_wait] = STATE(34),
    [sym_require] = STATE(34),
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
    [anon_sym_Require] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [2] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(34),
    [sym_set] = STATE(34),
    [sym_env] = STATE(34),
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
    [sym_wait] = STATE(34),
    [sym_require] = STATE(34),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(45),
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
    [anon_sym_Require] = ACTIONS(41),
    [sym_comment] = ACTIONS(47),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(34),
    [sym_set] = STATE(34),
    [sym_env] = STATE(34),
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
    [sym_wait] = STATE(34),
    [sym_require] = STATE(34),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_Hide] = ACTIONS(51),
    [anon_sym_Show] = ACTIONS(51),
    [anon_sym_Copy] = ACTIONS(51),
    [anon_sym_Paste] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_alt] = ACTIONS(51),
    [sym_shift] = ACTIONS(51),
    [anon_sym_Output] = ACTIONS(54),
    [anon_sym_Set] = ACTIONS(57),
    [anon_sym_Env] = ACTIONS(60),
    [anon_sym_Sleep] = ACTIONS(63),
    [anon_sym_Type] = ACTIONS(66),
    [anon_sym_Backspace] = ACTIONS(69),
    [anon_sym_Down] = ACTIONS(72),
    [anon_sym_Enter] = ACTIONS(75),
    [anon_sym_Escape] = ACTIONS(78),
    [anon_sym_Left] = ACTIONS(81),
    [anon_sym_Right] = ACTIONS(84),
    [anon_sym_Space] = ACTIONS(87),
    [anon_sym_Tab] = ACTIONS(90),
    [anon_sym_Up] = ACTIONS(93),
    [anon_sym_PageUp] = ACTIONS(96),
    [anon_sym_PageDown] = ACTIONS(99),
    [anon_sym_Wait] = ACTIONS(102),
    [anon_sym_Require] = ACTIONS(105),
    [sym_comment] = ACTIONS(108),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(117), 1,
      aux_sym_string_token4,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(115), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      sym_comment,
    ACTIONS(113), 22,
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
      anon_sym_Require,
  [44] = 5,
    ACTIONS(117), 1,
      aux_sym_string_token4,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(115), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      sym_comment,
    ACTIONS(121), 22,
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
      anon_sym_Require,
  [88] = 5,
    ACTIONS(130), 1,
      aux_sym_string_token4,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(127), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      sym_comment,
    ACTIONS(125), 22,
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
      anon_sym_Require,
  [132] = 2,
    ACTIONS(133), 8,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      sym_comment,
    ACTIONS(135), 23,
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
      anon_sym_Require,
      aux_sym_string_token4,
  [168] = 4,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(141), 1,
      anon_sym_AT,
    STATE(20), 1,
      sym_duration,
    ACTIONS(137), 27,
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
      anon_sym_Require,
      sym_comment,
  [207] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      sym_integer,
    STATE(19), 1,
      sym_duration,
    ACTIONS(143), 27,
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
      anon_sym_Require,
      sym_comment,
  [246] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym_integer,
    STATE(28), 1,
      sym_duration,
    ACTIONS(147), 27,
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
      anon_sym_Require,
      sym_comment,
  [285] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(153), 1,
      sym_integer,
    STATE(21), 1,
      sym_duration,
    ACTIONS(151), 27,
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
      anon_sym_Require,
      sym_comment,
  [324] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      sym_integer,
    STATE(22), 1,
      sym_duration,
    ACTIONS(155), 27,
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
      anon_sym_Require,
      sym_comment,
  [363] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(161), 1,
      sym_integer,
    STATE(23), 1,
      sym_duration,
    ACTIONS(159), 27,
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
      anon_sym_Require,
      sym_comment,
  [402] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      sym_integer,
    STATE(30), 1,
      sym_duration,
    ACTIONS(163), 27,
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
      anon_sym_Require,
      sym_comment,
  [441] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      sym_integer,
    STATE(25), 1,
      sym_duration,
    ACTIONS(167), 27,
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
      anon_sym_Require,
      sym_comment,
  [480] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(173), 1,
      sym_integer,
    STATE(26), 1,
      sym_duration,
    ACTIONS(171), 27,
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
      anon_sym_Require,
      sym_comment,
  [519] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_integer,
    STATE(24), 1,
      sym_duration,
    ACTIONS(175), 27,
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
      anon_sym_Require,
      sym_comment,
  [558] = 4,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(181), 1,
      sym_integer,
    STATE(27), 1,
      sym_duration,
    ACTIONS(179), 27,
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
      anon_sym_Require,
      sym_comment,
  [597] = 2,
    ACTIONS(185), 1,
      sym_integer,
    ACTIONS(183), 27,
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
      anon_sym_Require,
      sym_comment,
  [630] = 2,
    ACTIONS(189), 1,
      sym_integer,
    ACTIONS(187), 27,
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
      anon_sym_Require,
      sym_comment,
  [663] = 2,
    ACTIONS(193), 1,
      sym_integer,
    ACTIONS(191), 27,
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
      anon_sym_Require,
      sym_comment,
  [696] = 2,
    ACTIONS(197), 1,
      sym_integer,
    ACTIONS(195), 27,
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
      anon_sym_Require,
      sym_comment,
  [729] = 2,
    ACTIONS(201), 1,
      sym_integer,
    ACTIONS(199), 27,
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
      anon_sym_Require,
      sym_comment,
  [762] = 2,
    ACTIONS(205), 1,
      sym_integer,
    ACTIONS(203), 27,
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
      anon_sym_Require,
      sym_comment,
  [795] = 2,
    ACTIONS(209), 1,
      sym_integer,
    ACTIONS(207), 27,
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
      anon_sym_Require,
      sym_comment,
  [828] = 2,
    ACTIONS(213), 1,
      sym_integer,
    ACTIONS(211), 27,
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
      anon_sym_Require,
      sym_comment,
  [861] = 2,
    ACTIONS(217), 1,
      sym_integer,
    ACTIONS(215), 27,
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
      anon_sym_Require,
      sym_comment,
  [894] = 2,
    ACTIONS(221), 1,
      sym_integer,
    ACTIONS(219), 27,
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
      anon_sym_Require,
      sym_comment,
  [927] = 2,
    ACTIONS(225), 1,
      anon_sym_PERCENT,
    ACTIONS(223), 27,
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
      anon_sym_Require,
      sym_comment,
  [960] = 2,
    ACTIONS(229), 1,
      sym_integer,
    ACTIONS(227), 27,
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
      anon_sym_Require,
      sym_comment,
  [993] = 1,
    ACTIONS(231), 28,
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
      anon_sym_Require,
      sym_comment,
      sym_integer,
  [1024] = 1,
    ACTIONS(195), 27,
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
      anon_sym_Require,
      sym_comment,
  [1054] = 1,
    ACTIONS(133), 27,
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
      anon_sym_Require,
      sym_comment,
  [1084] = 1,
    ACTIONS(233), 27,
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
      anon_sym_Require,
      sym_comment,
  [1114] = 1,
    ACTIONS(183), 27,
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
      anon_sym_Require,
      sym_comment,
  [1144] = 1,
    ACTIONS(187), 27,
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
      anon_sym_Require,
      sym_comment,
  [1174] = 1,
    ACTIONS(227), 27,
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
      anon_sym_Require,
      sym_comment,
  [1204] = 1,
    ACTIONS(219), 27,
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
      anon_sym_Require,
      sym_comment,
  [1234] = 1,
    ACTIONS(191), 27,
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
      anon_sym_Require,
      sym_comment,
  [1264] = 1,
    ACTIONS(199), 27,
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
      anon_sym_Require,
      sym_comment,
  [1294] = 1,
    ACTIONS(203), 27,
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
      anon_sym_Require,
      sym_comment,
  [1324] = 1,
    ACTIONS(235), 27,
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
      anon_sym_Require,
      sym_comment,
  [1354] = 1,
    ACTIONS(207), 27,
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
      anon_sym_Require,
      sym_comment,
  [1384] = 1,
    ACTIONS(211), 27,
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
      anon_sym_Require,
      sym_comment,
  [1414] = 1,
    ACTIONS(215), 27,
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
      anon_sym_Require,
      sym_comment,
  [1444] = 1,
    ACTIONS(237), 27,
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
      anon_sym_Require,
      sym_comment,
  [1474] = 1,
    ACTIONS(239), 27,
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
      anon_sym_Require,
      sym_comment,
  [1504] = 1,
    ACTIONS(223), 27,
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
      anon_sym_Require,
      sym_comment,
  [1534] = 1,
    ACTIONS(241), 27,
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
      anon_sym_Require,
      sym_comment,
  [1564] = 1,
    ACTIONS(243), 27,
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
      anon_sym_Require,
      sym_comment,
  [1594] = 1,
    ACTIONS(245), 27,
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
      anon_sym_Require,
      sym_comment,
  [1624] = 1,
    ACTIONS(247), 27,
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
      anon_sym_Require,
      sym_comment,
  [1654] = 1,
    ACTIONS(249), 27,
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
      anon_sym_Require,
      sym_comment,
  [1684] = 1,
    ACTIONS(251), 27,
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
      anon_sym_Require,
      sym_comment,
  [1714] = 1,
    ACTIONS(253), 27,
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
      anon_sym_Require,
      sym_comment,
  [1744] = 1,
    ACTIONS(255), 27,
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
      anon_sym_Require,
      sym_comment,
  [1774] = 1,
    ACTIONS(257), 27,
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
      anon_sym_Require,
      sym_comment,
  [1804] = 1,
    ACTIONS(259), 27,
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
      anon_sym_Require,
      sym_comment,
  [1834] = 1,
    ACTIONS(261), 27,
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
      anon_sym_Require,
      sym_comment,
  [1864] = 1,
    ACTIONS(263), 27,
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
      anon_sym_Require,
      sym_comment,
  [1894] = 1,
    ACTIONS(265), 27,
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
      anon_sym_Require,
      sym_comment,
  [1924] = 1,
    ACTIONS(267), 27,
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
      anon_sym_Require,
      sym_comment,
  [1954] = 1,
    ACTIONS(269), 27,
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
      anon_sym_Require,
      sym_comment,
  [1984] = 1,
    ACTIONS(271), 27,
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
      anon_sym_Require,
      sym_comment,
  [2014] = 1,
    ACTIONS(273), 27,
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
      anon_sym_Require,
      sym_comment,
  [2044] = 10,
    ACTIONS(281), 1,
      anon_sym_TypingSpeed,
    ACTIONS(283), 1,
      anon_sym_Theme,
    ACTIONS(285), 1,
      anon_sym_LoopOffset,
    ACTIONS(287), 1,
      anon_sym_Margin,
    ACTIONS(289), 1,
      anon_sym_WindowBar,
    ACTIONS(291), 1,
      anon_sym_CursorBlink,
    STATE(64), 1,
      sym_setting,
    ACTIONS(275), 3,
      anon_sym_Shell,
      anon_sym_FontFamily,
      anon_sym_MarginFill,
    ACTIONS(277), 5,
      anon_sym_FontSize,
      anon_sym_PlaybackSpeed,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
      anon_sym_Padding,
    ACTIONS(279), 5,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_Width,
      anon_sym_BorderRadius,
      anon_sym_WindowBarSize,
  [2085] = 4,
    ACTIONS(293), 1,
      anon_sym_AT,
    STATE(68), 1,
      sym_duration,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(115), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2102] = 2,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(115), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2113] = 3,
    ACTIONS(297), 1,
      sym_json,
    STATE(48), 1,
      sym_string,
    ACTIONS(295), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2126] = 2,
    STATE(49), 1,
      sym_string,
    ACTIONS(295), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2136] = 2,
    STATE(47), 1,
      sym_string,
    ACTIONS(295), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2146] = 2,
    STATE(48), 1,
      sym_string,
    ACTIONS(295), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2156] = 2,
    STATE(70), 1,
      sym_string,
    ACTIONS(299), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2166] = 1,
    ACTIONS(231), 5,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
      sym_regex,
  [2174] = 5,
    ACTIONS(293), 1,
      anon_sym_AT,
    ACTIONS(301), 1,
      sym_regex,
    ACTIONS(303), 1,
      anon_sym_PLUS,
    STATE(77), 1,
      sym_waitOn,
    STATE(84), 1,
      sym_duration,
  [2190] = 1,
    ACTIONS(133), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2197] = 3,
    ACTIONS(293), 1,
      anon_sym_AT,
    ACTIONS(305), 1,
      sym_regex,
    STATE(89), 1,
      sym_duration,
  [2207] = 1,
    ACTIONS(307), 2,
      anon_sym_Screen,
      anon_sym_Line,
  [2212] = 1,
    ACTIONS(309), 2,
      sym_regex,
      anon_sym_AT,
  [2217] = 1,
    ACTIONS(297), 1,
      sym_float,
  [2221] = 1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
  [2225] = 1,
    ACTIONS(297), 1,
      sym_integer,
  [2229] = 1,
    ACTIONS(297), 1,
      sym_boolean,
  [2233] = 1,
    ACTIONS(305), 1,
      sym_regex,
  [2237] = 1,
    ACTIONS(313), 1,
      sym_path,
  [2241] = 1,
    ACTIONS(315), 1,
      sym_time,
  [2245] = 1,
    ACTIONS(317), 1,
      sym_time,
  [2249] = 1,
    ACTIONS(297), 1,
      sym_time,
  [2253] = 1,
    ACTIONS(319), 1,
      sym_regex,
  [2257] = 1,
    ACTIONS(321), 1,
      sym_float,
  [2261] = 1,
    ACTIONS(323), 1,
      sym_time,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 285,
  [SMALL_STATE(12)] = 324,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 402,
  [SMALL_STATE(15)] = 441,
  [SMALL_STATE(16)] = 480,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 558,
  [SMALL_STATE(19)] = 597,
  [SMALL_STATE(20)] = 630,
  [SMALL_STATE(21)] = 663,
  [SMALL_STATE(22)] = 696,
  [SMALL_STATE(23)] = 729,
  [SMALL_STATE(24)] = 762,
  [SMALL_STATE(25)] = 795,
  [SMALL_STATE(26)] = 828,
  [SMALL_STATE(27)] = 861,
  [SMALL_STATE(28)] = 894,
  [SMALL_STATE(29)] = 927,
  [SMALL_STATE(30)] = 960,
  [SMALL_STATE(31)] = 993,
  [SMALL_STATE(32)] = 1024,
  [SMALL_STATE(33)] = 1054,
  [SMALL_STATE(34)] = 1084,
  [SMALL_STATE(35)] = 1114,
  [SMALL_STATE(36)] = 1144,
  [SMALL_STATE(37)] = 1174,
  [SMALL_STATE(38)] = 1204,
  [SMALL_STATE(39)] = 1234,
  [SMALL_STATE(40)] = 1264,
  [SMALL_STATE(41)] = 1294,
  [SMALL_STATE(42)] = 1324,
  [SMALL_STATE(43)] = 1354,
  [SMALL_STATE(44)] = 1384,
  [SMALL_STATE(45)] = 1414,
  [SMALL_STATE(46)] = 1444,
  [SMALL_STATE(47)] = 1474,
  [SMALL_STATE(48)] = 1504,
  [SMALL_STATE(49)] = 1534,
  [SMALL_STATE(50)] = 1564,
  [SMALL_STATE(51)] = 1594,
  [SMALL_STATE(52)] = 1624,
  [SMALL_STATE(53)] = 1654,
  [SMALL_STATE(54)] = 1684,
  [SMALL_STATE(55)] = 1714,
  [SMALL_STATE(56)] = 1744,
  [SMALL_STATE(57)] = 1774,
  [SMALL_STATE(58)] = 1804,
  [SMALL_STATE(59)] = 1834,
  [SMALL_STATE(60)] = 1864,
  [SMALL_STATE(61)] = 1894,
  [SMALL_STATE(62)] = 1924,
  [SMALL_STATE(63)] = 1954,
  [SMALL_STATE(64)] = 1984,
  [SMALL_STATE(65)] = 2014,
  [SMALL_STATE(66)] = 2044,
  [SMALL_STATE(67)] = 2085,
  [SMALL_STATE(68)] = 2102,
  [SMALL_STATE(69)] = 2113,
  [SMALL_STATE(70)] = 2126,
  [SMALL_STATE(71)] = 2136,
  [SMALL_STATE(72)] = 2146,
  [SMALL_STATE(73)] = 2156,
  [SMALL_STATE(74)] = 2166,
  [SMALL_STATE(75)] = 2174,
  [SMALL_STATE(76)] = 2190,
  [SMALL_STATE(77)] = 2197,
  [SMALL_STATE(78)] = 2207,
  [SMALL_STATE(79)] = 2212,
  [SMALL_STATE(80)] = 2217,
  [SMALL_STATE(81)] = 2221,
  [SMALL_STATE(82)] = 2225,
  [SMALL_STATE(83)] = 2229,
  [SMALL_STATE(84)] = 2233,
  [SMALL_STATE(85)] = 2237,
  [SMALL_STATE(86)] = 2241,
  [SMALL_STATE(87)] = 2245,
  [SMALL_STATE(88)] = 2249,
  [SMALL_STATE(89)] = 2253,
  [SMALL_STATE(90)] = 2257,
  [SMALL_STATE(91)] = 2261,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waitOn, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
