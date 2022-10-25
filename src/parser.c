#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_FontFamily = 17,
  anon_sym_FontSize = 18,
  anon_sym_Framerate = 19,
  anon_sym_PlaybackSpeed = 20,
  anon_sym_Height = 21,
  anon_sym_LetterSpacing = 22,
  anon_sym_TypingSpeed = 23,
  anon_sym_LineHeight = 24,
  anon_sym_Padding = 25,
  anon_sym_Theme = 26,
  anon_sym_Width = 27,
  sym_comment = 28,
  sym_float = 29,
  sym_integer = 30,
  sym_json = 31,
  sym_path = 32,
  anon_sym_AT = 33,
  aux_sym_string_token1 = 34,
  aux_sym_string_token2 = 35,
  sym_time = 36,
  sym_program = 37,
  sym_command = 38,
  sym_hide = 39,
  sym_show = 40,
  sym_output = 41,
  sym_set = 42,
  sym_sleep = 43,
  sym_type = 44,
  sym_backspace = 45,
  sym_down = 46,
  sym_enter = 47,
  sym_escape = 48,
  sym_left = 49,
  sym_right = 50,
  sym_space = 51,
  sym_tab = 52,
  sym_up = 53,
  sym_setting = 54,
  sym_speed = 55,
  sym_string = 56,
  aux_sym_program_repeat1 = 57,
  aux_sym_type_repeat1 = 58,
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
  [anon_sym_Width] = "Width",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_json] = "json",
  [sym_path] = "path",
  [anon_sym_AT] = "@",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
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
  [anon_sym_Width] = anon_sym_Width,
  [sym_comment] = sym_comment,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_json] = sym_json,
  [sym_path] = sym_path,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '@') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(99);
      if (lookahead == 'H') ADVANCE(61);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'P') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == '{') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(180);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(170);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 131:
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 132:
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 135:
      if (lookahead == 'z') ADVANCE(46);
      END_STATE();
    case 136:
      if (lookahead == '}') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 141:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '@') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PlaybackSpeed);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_TypingSpeed);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_json);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(182);
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
  [7] = {.lex_state = 142},
  [8] = {.lex_state = 142},
  [9] = {.lex_state = 142},
  [10] = {.lex_state = 142},
  [11] = {.lex_state = 142},
  [12] = {.lex_state = 142},
  [13] = {.lex_state = 142},
  [14] = {.lex_state = 142},
  [15] = {.lex_state = 142},
  [16] = {.lex_state = 142},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 142},
  [19] = {.lex_state = 142},
  [20] = {.lex_state = 142},
  [21] = {.lex_state = 142},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 142},
  [24] = {.lex_state = 142},
  [25] = {.lex_state = 142},
  [26] = {.lex_state = 142},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 137},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 142},
  [63] = {.lex_state = 5},
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
    [anon_sym_Width] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_json] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(58),
    [sym_command] = STATE(2),
    [sym_hide] = STATE(29),
    [sym_show] = STATE(29),
    [sym_output] = STATE(29),
    [sym_set] = STATE(29),
    [sym_sleep] = STATE(29),
    [sym_type] = STATE(29),
    [sym_backspace] = STATE(29),
    [sym_down] = STATE(29),
    [sym_enter] = STATE(29),
    [sym_escape] = STATE(29),
    [sym_left] = STATE(29),
    [sym_right] = STATE(29),
    [sym_space] = STATE(29),
    [sym_tab] = STATE(29),
    [sym_up] = STATE(29),
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
    [sym_hide] = STATE(29),
    [sym_show] = STATE(29),
    [sym_output] = STATE(29),
    [sym_set] = STATE(29),
    [sym_sleep] = STATE(29),
    [sym_type] = STATE(29),
    [sym_backspace] = STATE(29),
    [sym_down] = STATE(29),
    [sym_enter] = STATE(29),
    [sym_escape] = STATE(29),
    [sym_left] = STATE(29),
    [sym_right] = STATE(29),
    [sym_space] = STATE(29),
    [sym_tab] = STATE(29),
    [sym_up] = STATE(29),
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
    [sym_hide] = STATE(29),
    [sym_show] = STATE(29),
    [sym_output] = STATE(29),
    [sym_set] = STATE(29),
    [sym_sleep] = STATE(29),
    [sym_type] = STATE(29),
    [sym_backspace] = STATE(29),
    [sym_down] = STATE(29),
    [sym_enter] = STATE(29),
    [sym_escape] = STATE(29),
    [sym_left] = STATE(29),
    [sym_right] = STATE(29),
    [sym_space] = STATE(29),
    [sym_tab] = STATE(29),
    [sym_up] = STATE(29),
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
    ACTIONS(98), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
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
  [29] = 3,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
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
  [58] = 3,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
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
  [87] = 1,
    ACTIONS(107), 21,
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
  [111] = 4,
    ACTIONS(111), 1,
      sym_integer,
    ACTIONS(113), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym_speed,
    ACTIONS(109), 18,
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
  [141] = 4,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(117), 1,
      sym_integer,
    STATE(26), 1,
      sym_speed,
    ACTIONS(115), 18,
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
  [171] = 4,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(121), 1,
      sym_integer,
    STATE(25), 1,
      sym_speed,
    ACTIONS(119), 18,
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
  [201] = 4,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(125), 1,
      sym_integer,
    STATE(24), 1,
      sym_speed,
    ACTIONS(123), 18,
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
  [231] = 4,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(129), 1,
      sym_integer,
    STATE(23), 1,
      sym_speed,
    ACTIONS(127), 18,
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
  [261] = 4,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(133), 1,
      sym_integer,
    STATE(19), 1,
      sym_speed,
    ACTIONS(131), 18,
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
  [291] = 4,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(137), 1,
      sym_integer,
    STATE(22), 1,
      sym_speed,
    ACTIONS(135), 18,
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
  [321] = 4,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(141), 1,
      sym_integer,
    STATE(21), 1,
      sym_speed,
    ACTIONS(139), 18,
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
  [351] = 4,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      sym_integer,
    STATE(20), 1,
      sym_speed,
    ACTIONS(143), 18,
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
  [381] = 1,
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
      sym_comment,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [404] = 2,
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
  [428] = 2,
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
  [452] = 2,
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
  [476] = 2,
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
  [500] = 2,
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
  [524] = 2,
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
  [548] = 2,
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
  [572] = 2,
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
  [596] = 2,
    ACTIONS(183), 1,
      sym_integer,
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
  [620] = 1,
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
  [641] = 1,
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
  [662] = 1,
    ACTIONS(187), 18,
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
  [683] = 1,
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
  [704] = 1,
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
  [725] = 1,
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
  [746] = 1,
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
  [767] = 1,
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
  [788] = 1,
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
  [809] = 1,
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
  [830] = 1,
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
  [851] = 1,
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
  [872] = 1,
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
  [893] = 1,
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
  [914] = 1,
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
  [935] = 1,
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
  [956] = 1,
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
  [977] = 1,
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
  [998] = 1,
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
  [1019] = 1,
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
  [1040] = 1,
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
  [1061] = 1,
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
  [1082] = 1,
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
  [1103] = 1,
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
  [1124] = 1,
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
  [1145] = 6,
    ACTIONS(217), 1,
      anon_sym_FontFamily,
    ACTIONS(223), 1,
      anon_sym_TypingSpeed,
    ACTIONS(225), 1,
      anon_sym_Theme,
    STATE(35), 1,
      sym_setting,
    ACTIONS(221), 3,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_Width,
    ACTIONS(219), 5,
      anon_sym_FontSize,
      anon_sym_PlaybackSpeed,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
      anon_sym_Padding,
  [1170] = 4,
    ACTIONS(113), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym_speed,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
  [1185] = 2,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
  [1194] = 2,
    STATE(51), 1,
      sym_string,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1202] = 1,
    ACTIONS(227), 1,
      sym_path,
  [1206] = 1,
    ACTIONS(229), 1,
      sym_time,
  [1210] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [1214] = 1,
    ACTIONS(233), 1,
      sym_time,
  [1218] = 1,
    ACTIONS(235), 1,
      sym_json,
  [1222] = 1,
    ACTIONS(235), 1,
      sym_time,
  [1226] = 1,
    ACTIONS(235), 1,
      sym_integer,
  [1230] = 1,
    ACTIONS(235), 1,
      sym_float,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 29,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 201,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 261,
  [SMALL_STATE(14)] = 291,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 351,
  [SMALL_STATE(17)] = 381,
  [SMALL_STATE(18)] = 404,
  [SMALL_STATE(19)] = 428,
  [SMALL_STATE(20)] = 452,
  [SMALL_STATE(21)] = 476,
  [SMALL_STATE(22)] = 500,
  [SMALL_STATE(23)] = 524,
  [SMALL_STATE(24)] = 548,
  [SMALL_STATE(25)] = 572,
  [SMALL_STATE(26)] = 596,
  [SMALL_STATE(27)] = 620,
  [SMALL_STATE(28)] = 641,
  [SMALL_STATE(29)] = 662,
  [SMALL_STATE(30)] = 683,
  [SMALL_STATE(31)] = 704,
  [SMALL_STATE(32)] = 725,
  [SMALL_STATE(33)] = 746,
  [SMALL_STATE(34)] = 767,
  [SMALL_STATE(35)] = 788,
  [SMALL_STATE(36)] = 809,
  [SMALL_STATE(37)] = 830,
  [SMALL_STATE(38)] = 851,
  [SMALL_STATE(39)] = 872,
  [SMALL_STATE(40)] = 893,
  [SMALL_STATE(41)] = 914,
  [SMALL_STATE(42)] = 935,
  [SMALL_STATE(43)] = 956,
  [SMALL_STATE(44)] = 977,
  [SMALL_STATE(45)] = 998,
  [SMALL_STATE(46)] = 1019,
  [SMALL_STATE(47)] = 1040,
  [SMALL_STATE(48)] = 1061,
  [SMALL_STATE(49)] = 1082,
  [SMALL_STATE(50)] = 1103,
  [SMALL_STATE(51)] = 1124,
  [SMALL_STATE(52)] = 1145,
  [SMALL_STATE(53)] = 1170,
  [SMALL_STATE(54)] = 1185,
  [SMALL_STATE(55)] = 1194,
  [SMALL_STATE(56)] = 1202,
  [SMALL_STATE(57)] = 1206,
  [SMALL_STATE(58)] = 1210,
  [SMALL_STATE(59)] = 1214,
  [SMALL_STATE(60)] = 1218,
  [SMALL_STATE(61)] = 1222,
  [SMALL_STATE(62)] = 1226,
  [SMALL_STATE(63)] = 1230,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speed, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
