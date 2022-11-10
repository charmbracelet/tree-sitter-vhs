#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_Shell = 17,
  anon_sym_FontFamily = 18,
  anon_sym_FontSize = 19,
  anon_sym_Framerate = 20,
  anon_sym_PlaybackSpeed = 21,
  anon_sym_Height = 22,
  anon_sym_LetterSpacing = 23,
  anon_sym_TypingSpeed = 24,
  anon_sym_LineHeight = 25,
  anon_sym_Padding = 26,
  anon_sym_Theme = 27,
  anon_sym_LoopOffset = 28,
  anon_sym_PERCENT = 29,
  anon_sym_Width = 30,
  sym_comment = 31,
  sym_float = 32,
  sym_integer = 33,
  sym_json = 34,
  sym_path = 35,
  anon_sym_AT = 36,
  aux_sym_string_token1 = 37,
  aux_sym_string_token2 = 38,
  aux_sym_string_token3 = 39,
  sym_time = 40,
  sym_program = 41,
  sym_command = 42,
  sym_hide = 43,
  sym_show = 44,
  sym_output = 45,
  sym_set = 46,
  sym_sleep = 47,
  sym_type = 48,
  sym_backspace = 49,
  sym_down = 50,
  sym_enter = 51,
  sym_escape = 52,
  sym_left = 53,
  sym_right = 54,
  sym_space = 55,
  sym_tab = 56,
  sym_up = 57,
  sym_setting = 58,
  sym_speed = 59,
  sym_string = 60,
  aux_sym_program_repeat1 = 61,
  aux_sym_type_repeat1 = 62,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(156);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == 'B') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'H') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == 'P') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(85);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(154);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == 'S') ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(121);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(198);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(126);
      END_STATE();
    case 92:
      if (lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 144:
      if (lookahead == 'w') ADVANCE(159);
      END_STATE();
    case 145:
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 146:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 148:
      if (lookahead == 'z') ADVANCE(48);
      END_STATE();
    case 149:
      if (lookahead == '}') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 154:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == 'B') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'H') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == 'R') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'U') ADVANCE(111);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Shell);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PlaybackSpeed);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_TypingSpeed);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LoopOffset);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_json);
      if (lookahead == '}') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(199);
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
  [7] = {.lex_state = 155},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 155},
  [10] = {.lex_state = 155},
  [11] = {.lex_state = 155},
  [12] = {.lex_state = 155},
  [13] = {.lex_state = 155},
  [14] = {.lex_state = 155},
  [15] = {.lex_state = 155},
  [16] = {.lex_state = 155},
  [17] = {.lex_state = 155},
  [18] = {.lex_state = 155},
  [19] = {.lex_state = 155},
  [20] = {.lex_state = 155},
  [21] = {.lex_state = 155},
  [22] = {.lex_state = 155},
  [23] = {.lex_state = 155},
  [24] = {.lex_state = 155},
  [25] = {.lex_state = 155},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 155},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 150},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 155},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 5},
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
    [sym_program] = STATE(62),
    [sym_command] = STATE(2),
    [sym_hide] = STATE(30),
    [sym_show] = STATE(30),
    [sym_output] = STATE(30),
    [sym_set] = STATE(30),
    [sym_sleep] = STATE(30),
    [sym_type] = STATE(30),
    [sym_backspace] = STATE(30),
    [sym_down] = STATE(30),
    [sym_enter] = STATE(30),
    [sym_escape] = STATE(30),
    [sym_left] = STATE(30),
    [sym_right] = STATE(30),
    [sym_space] = STATE(30),
    [sym_tab] = STATE(30),
    [sym_up] = STATE(30),
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
    [sym_comment] = ACTIONS(37),
  },
  [2] = {
    [sym_command] = STATE(3),
    [sym_hide] = STATE(30),
    [sym_show] = STATE(30),
    [sym_output] = STATE(30),
    [sym_set] = STATE(30),
    [sym_sleep] = STATE(30),
    [sym_type] = STATE(30),
    [sym_backspace] = STATE(30),
    [sym_down] = STATE(30),
    [sym_enter] = STATE(30),
    [sym_escape] = STATE(30),
    [sym_left] = STATE(30),
    [sym_right] = STATE(30),
    [sym_space] = STATE(30),
    [sym_tab] = STATE(30),
    [sym_up] = STATE(30),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
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
    [sym_comment] = ACTIONS(41),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym_hide] = STATE(30),
    [sym_show] = STATE(30),
    [sym_output] = STATE(30),
    [sym_set] = STATE(30),
    [sym_sleep] = STATE(30),
    [sym_type] = STATE(30),
    [sym_backspace] = STATE(30),
    [sym_down] = STATE(30),
    [sym_enter] = STATE(30),
    [sym_escape] = STATE(30),
    [sym_left] = STATE(30),
    [sym_right] = STATE(30),
    [sym_space] = STATE(30),
    [sym_tab] = STATE(30),
    [sym_up] = STATE(30),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_control] = ACTIONS(45),
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
    [sym_comment] = ACTIONS(93),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(98), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(96), 18,
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
      sym_comment,
  [30] = 3,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(103), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(101), 18,
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
      sym_comment,
  [60] = 3,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(103), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(105), 18,
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
      sym_comment,
  [90] = 1,
    ACTIONS(107), 22,
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
      sym_comment,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [115] = 1,
    ACTIONS(109), 21,
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
      sym_comment,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [139] = 4,
    ACTIONS(113), 1,
      sym_integer,
    ACTIONS(115), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym_speed,
    ACTIONS(111), 18,
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
      sym_comment,
  [169] = 4,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(119), 1,
      sym_integer,
    STATE(24), 1,
      sym_speed,
    ACTIONS(117), 18,
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
      sym_comment,
  [199] = 4,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(123), 1,
      sym_integer,
    STATE(23), 1,
      sym_speed,
    ACTIONS(121), 18,
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
      sym_comment,
  [229] = 4,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(127), 1,
      sym_integer,
    STATE(22), 1,
      sym_speed,
    ACTIONS(125), 18,
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
      sym_comment,
  [259] = 4,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(131), 1,
      sym_integer,
    STATE(21), 1,
      sym_speed,
    ACTIONS(129), 18,
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
      sym_comment,
  [289] = 4,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(135), 1,
      sym_integer,
    STATE(20), 1,
      sym_speed,
    ACTIONS(133), 18,
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
      sym_comment,
  [319] = 4,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(139), 1,
      sym_integer,
    STATE(19), 1,
      sym_speed,
    ACTIONS(137), 18,
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
      sym_comment,
  [349] = 4,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(143), 1,
      sym_integer,
    STATE(27), 1,
      sym_speed,
    ACTIONS(141), 18,
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
      sym_comment,
  [379] = 4,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(147), 1,
      sym_integer,
    STATE(18), 1,
      sym_speed,
    ACTIONS(145), 18,
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
      sym_comment,
  [409] = 2,
    ACTIONS(151), 1,
      sym_integer,
    ACTIONS(149), 18,
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
      sym_comment,
  [433] = 2,
    ACTIONS(155), 1,
      sym_integer,
    ACTIONS(153), 18,
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
      sym_comment,
  [457] = 2,
    ACTIONS(159), 1,
      sym_integer,
    ACTIONS(157), 18,
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
      sym_comment,
  [481] = 2,
    ACTIONS(163), 1,
      sym_integer,
    ACTIONS(161), 18,
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
      sym_comment,
  [505] = 2,
    ACTIONS(167), 1,
      sym_integer,
    ACTIONS(165), 18,
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
      sym_comment,
  [529] = 2,
    ACTIONS(171), 1,
      sym_integer,
    ACTIONS(169), 18,
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
      sym_comment,
  [553] = 2,
    ACTIONS(175), 1,
      sym_integer,
    ACTIONS(173), 18,
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
      sym_comment,
  [577] = 2,
    ACTIONS(179), 1,
      sym_integer,
    ACTIONS(177), 18,
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
      sym_comment,
  [601] = 2,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(181), 18,
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
      sym_comment,
  [625] = 2,
    ACTIONS(187), 1,
      sym_integer,
    ACTIONS(185), 18,
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
      sym_comment,
  [649] = 1,
    ACTIONS(177), 18,
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
      sym_comment,
  [670] = 1,
    ACTIONS(189), 18,
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
      sym_comment,
  [691] = 1,
    ACTIONS(191), 18,
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
      sym_comment,
  [712] = 1,
    ACTIONS(193), 18,
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
      sym_comment,
  [733] = 1,
    ACTIONS(195), 18,
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
      sym_comment,
  [754] = 1,
    ACTIONS(197), 18,
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
      sym_comment,
  [775] = 1,
    ACTIONS(199), 18,
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
      sym_comment,
  [796] = 1,
    ACTIONS(173), 18,
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
      sym_comment,
  [817] = 1,
    ACTIONS(201), 18,
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
      sym_comment,
  [838] = 1,
    ACTIONS(169), 18,
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
      sym_comment,
  [859] = 1,
    ACTIONS(203), 18,
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
      sym_comment,
  [880] = 1,
    ACTIONS(165), 18,
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
      sym_comment,
  [901] = 1,
    ACTIONS(205), 18,
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
      sym_comment,
  [922] = 1,
    ACTIONS(161), 18,
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
      sym_comment,
  [943] = 1,
    ACTIONS(207), 18,
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
      sym_comment,
  [964] = 1,
    ACTIONS(157), 18,
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
      sym_comment,
  [985] = 1,
    ACTIONS(209), 18,
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
      sym_comment,
  [1006] = 1,
    ACTIONS(153), 18,
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
      sym_comment,
  [1027] = 1,
    ACTIONS(211), 18,
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
      sym_comment,
  [1048] = 1,
    ACTIONS(185), 18,
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
      sym_comment,
  [1069] = 1,
    ACTIONS(213), 18,
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
      sym_comment,
  [1090] = 1,
    ACTIONS(149), 18,
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
      sym_comment,
  [1111] = 1,
    ACTIONS(215), 18,
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
      sym_comment,
  [1132] = 1,
    ACTIONS(217), 18,
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
      sym_comment,
  [1153] = 1,
    ACTIONS(181), 18,
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
      sym_comment,
  [1174] = 1,
    ACTIONS(219), 18,
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
      sym_comment,
  [1195] = 7,
    ACTIONS(227), 1,
      anon_sym_TypingSpeed,
    ACTIONS(229), 1,
      anon_sym_Theme,
    ACTIONS(231), 1,
      anon_sym_LoopOffset,
    STATE(33), 1,
      sym_setting,
    ACTIONS(221), 2,
      anon_sym_Shell,
      anon_sym_FontFamily,
    ACTIONS(225), 3,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_Width,
    ACTIONS(223), 5,
      anon_sym_FontSize,
      anon_sym_PlaybackSpeed,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
      anon_sym_Padding,
  [1224] = 4,
    ACTIONS(115), 1,
      anon_sym_AT,
    STATE(57), 1,
      sym_speed,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(103), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1240] = 3,
    ACTIONS(233), 1,
      sym_json,
    STATE(52), 1,
      sym_string,
    ACTIONS(103), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1252] = 2,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(103), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1262] = 2,
    STATE(52), 1,
      sym_string,
    ACTIONS(103), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1271] = 1,
    ACTIONS(235), 1,
      sym_path,
  [1275] = 1,
    ACTIONS(237), 1,
      sym_time,
  [1279] = 1,
    ACTIONS(239), 1,
      sym_time,
  [1283] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [1287] = 1,
    ACTIONS(233), 1,
      sym_float,
  [1291] = 1,
    ACTIONS(233), 1,
      sym_integer,
  [1295] = 1,
    ACTIONS(233), 1,
      sym_time,
  [1299] = 1,
    ACTIONS(243), 1,
      sym_float,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 115,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 259,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 319,
  [SMALL_STATE(16)] = 349,
  [SMALL_STATE(17)] = 379,
  [SMALL_STATE(18)] = 409,
  [SMALL_STATE(19)] = 433,
  [SMALL_STATE(20)] = 457,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 505,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 577,
  [SMALL_STATE(26)] = 601,
  [SMALL_STATE(27)] = 625,
  [SMALL_STATE(28)] = 649,
  [SMALL_STATE(29)] = 670,
  [SMALL_STATE(30)] = 691,
  [SMALL_STATE(31)] = 712,
  [SMALL_STATE(32)] = 733,
  [SMALL_STATE(33)] = 754,
  [SMALL_STATE(34)] = 775,
  [SMALL_STATE(35)] = 796,
  [SMALL_STATE(36)] = 817,
  [SMALL_STATE(37)] = 838,
  [SMALL_STATE(38)] = 859,
  [SMALL_STATE(39)] = 880,
  [SMALL_STATE(40)] = 901,
  [SMALL_STATE(41)] = 922,
  [SMALL_STATE(42)] = 943,
  [SMALL_STATE(43)] = 964,
  [SMALL_STATE(44)] = 985,
  [SMALL_STATE(45)] = 1006,
  [SMALL_STATE(46)] = 1027,
  [SMALL_STATE(47)] = 1048,
  [SMALL_STATE(48)] = 1069,
  [SMALL_STATE(49)] = 1090,
  [SMALL_STATE(50)] = 1111,
  [SMALL_STATE(51)] = 1132,
  [SMALL_STATE(52)] = 1153,
  [SMALL_STATE(53)] = 1174,
  [SMALL_STATE(54)] = 1195,
  [SMALL_STATE(55)] = 1224,
  [SMALL_STATE(56)] = 1240,
  [SMALL_STATE(57)] = 1252,
  [SMALL_STATE(58)] = 1262,
  [SMALL_STATE(59)] = 1271,
  [SMALL_STATE(60)] = 1275,
  [SMALL_STATE(61)] = 1279,
  [SMALL_STATE(62)] = 1283,
  [SMALL_STATE(63)] = 1287,
  [SMALL_STATE(64)] = 1291,
  [SMALL_STATE(65)] = 1295,
  [SMALL_STATE(66)] = 1299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speed, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
