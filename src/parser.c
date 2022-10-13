#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_Output = 1,
  anon_sym_Set = 2,
  anon_sym_Sleep = 3,
  anon_sym_Hide = 4,
  anon_sym_Show = 5,
  sym_ctrl = 6,
  anon_sym_Backspace = 7,
  anon_sym_Down = 8,
  anon_sym_Enter = 9,
  anon_sym_Escape = 10,
  anon_sym_Left = 11,
  anon_sym_Right = 12,
  anon_sym_Space = 13,
  anon_sym_Tab = 14,
  anon_sym_Up = 15,
  anon_sym_Type = 16,
  anon_sym_FontFamily = 17,
  anon_sym_FontSize = 18,
  anon_sym_Framerate = 19,
  anon_sym_Height = 20,
  anon_sym_LetterSpacing = 21,
  anon_sym_LineHeight = 22,
  anon_sym_Padding = 23,
  aux_sym_setting_token1 = 24,
  anon_sym_Theme = 25,
  anon_sym_Width = 26,
  sym_comment = 27,
  sym_float = 28,
  sym_integer = 29,
  aux_sym_string_token1 = 30,
  aux_sym_string_token2 = 31,
  sym_path = 32,
  anon_sym_AT = 33,
  aux_sym_speed_token1 = 34,
  sym_time = 35,
  sym_program = 36,
  sym_command = 37,
  sym_output = 38,
  sym_set = 39,
  sym_sleep = 40,
  sym_hide = 41,
  sym_show = 42,
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
  [anon_sym_Hide] = "Hide",
  [anon_sym_Show] = "Show",
  [sym_ctrl] = "ctrl",
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
  [sym_hide] = "hide",
  [sym_show] = "show",
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
  [anon_sym_Hide] = anon_sym_Hide,
  [anon_sym_Show] = anon_sym_Show,
  [sym_ctrl] = sym_ctrl,
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
  [sym_hide] = sym_hide,
  [sym_show] = sym_show,
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
  [anon_sym_Hide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Show] = {
    .visible = true,
    .named = false,
  },
  [sym_ctrl] = {
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
  [sym_hide] = {
    .visible = true,
    .named = true,
  },
  [sym_show] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(122);
      END_STATE();
    case 4:
      if (lookahead == 'F') ADVANCE(12);
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == 'H') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == 'S') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(152);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 113:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 114:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 115:
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 116:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 117:
      if (lookahead == 'z') ADVANCE(35);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 119:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 120:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 122:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      END_STATE();
    case 123:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == 'B') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == 'B') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ctrl);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_setting_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_speed_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_speed_token1);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_speed_token1);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
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
  [7] = {.lex_state = 123},
  [8] = {.lex_state = 123},
  [9] = {.lex_state = 123},
  [10] = {.lex_state = 123},
  [11] = {.lex_state = 123},
  [12] = {.lex_state = 123},
  [13] = {.lex_state = 123},
  [14] = {.lex_state = 123},
  [15] = {.lex_state = 123},
  [16] = {.lex_state = 123},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 123},
  [19] = {.lex_state = 123},
  [20] = {.lex_state = 123},
  [21] = {.lex_state = 123},
  [22] = {.lex_state = 123},
  [23] = {.lex_state = 123},
  [24] = {.lex_state = 123},
  [25] = {.lex_state = 123},
  [26] = {.lex_state = 123},
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
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 118},
  [60] = {.lex_state = 119},
  [61] = {.lex_state = 123},
  [62] = {.lex_state = 119},
  [63] = {.lex_state = 120},
  [64] = {.lex_state = 121},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_Sleep] = ACTIONS(1),
    [anon_sym_Hide] = ACTIONS(1),
    [anon_sym_Show] = ACTIONS(1),
    [sym_ctrl] = ACTIONS(1),
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
    [sym_float] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_speed_token1] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(57),
    [sym_command] = STATE(2),
    [sym_output] = STATE(37),
    [sym_set] = STATE(37),
    [sym_sleep] = STATE(37),
    [sym_hide] = STATE(37),
    [sym_show] = STATE(37),
    [sym_backspace] = STATE(37),
    [sym_down] = STATE(37),
    [sym_enter] = STATE(37),
    [sym_escape] = STATE(37),
    [sym_left] = STATE(37),
    [sym_right] = STATE(37),
    [sym_space] = STATE(37),
    [sym_tab] = STATE(37),
    [sym_up] = STATE(37),
    [sym_type] = STATE(37),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Output] = ACTIONS(5),
    [anon_sym_Set] = ACTIONS(7),
    [anon_sym_Sleep] = ACTIONS(9),
    [anon_sym_Hide] = ACTIONS(11),
    [anon_sym_Show] = ACTIONS(13),
    [sym_ctrl] = ACTIONS(15),
    [anon_sym_Backspace] = ACTIONS(17),
    [anon_sym_Down] = ACTIONS(19),
    [anon_sym_Enter] = ACTIONS(21),
    [anon_sym_Escape] = ACTIONS(23),
    [anon_sym_Left] = ACTIONS(25),
    [anon_sym_Right] = ACTIONS(27),
    [anon_sym_Space] = ACTIONS(29),
    [anon_sym_Tab] = ACTIONS(31),
    [anon_sym_Up] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [2] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(37),
    [sym_set] = STATE(37),
    [sym_sleep] = STATE(37),
    [sym_hide] = STATE(37),
    [sym_show] = STATE(37),
    [sym_backspace] = STATE(37),
    [sym_down] = STATE(37),
    [sym_enter] = STATE(37),
    [sym_escape] = STATE(37),
    [sym_left] = STATE(37),
    [sym_right] = STATE(37),
    [sym_space] = STATE(37),
    [sym_tab] = STATE(37),
    [sym_up] = STATE(37),
    [sym_type] = STATE(37),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_Output] = ACTIONS(5),
    [anon_sym_Set] = ACTIONS(7),
    [anon_sym_Sleep] = ACTIONS(9),
    [anon_sym_Hide] = ACTIONS(11),
    [anon_sym_Show] = ACTIONS(13),
    [sym_ctrl] = ACTIONS(15),
    [anon_sym_Backspace] = ACTIONS(17),
    [anon_sym_Down] = ACTIONS(19),
    [anon_sym_Enter] = ACTIONS(21),
    [anon_sym_Escape] = ACTIONS(23),
    [anon_sym_Left] = ACTIONS(25),
    [anon_sym_Right] = ACTIONS(27),
    [anon_sym_Space] = ACTIONS(29),
    [anon_sym_Tab] = ACTIONS(31),
    [anon_sym_Up] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(35),
    [sym_comment] = ACTIONS(41),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(37),
    [sym_set] = STATE(37),
    [sym_sleep] = STATE(37),
    [sym_hide] = STATE(37),
    [sym_show] = STATE(37),
    [sym_backspace] = STATE(37),
    [sym_down] = STATE(37),
    [sym_enter] = STATE(37),
    [sym_escape] = STATE(37),
    [sym_left] = STATE(37),
    [sym_right] = STATE(37),
    [sym_space] = STATE(37),
    [sym_tab] = STATE(37),
    [sym_up] = STATE(37),
    [sym_type] = STATE(37),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_Output] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(48),
    [anon_sym_Sleep] = ACTIONS(51),
    [anon_sym_Hide] = ACTIONS(54),
    [anon_sym_Show] = ACTIONS(57),
    [sym_ctrl] = ACTIONS(60),
    [anon_sym_Backspace] = ACTIONS(63),
    [anon_sym_Down] = ACTIONS(66),
    [anon_sym_Enter] = ACTIONS(69),
    [anon_sym_Escape] = ACTIONS(72),
    [anon_sym_Left] = ACTIONS(75),
    [anon_sym_Right] = ACTIONS(78),
    [anon_sym_Space] = ACTIONS(81),
    [anon_sym_Tab] = ACTIONS(84),
    [anon_sym_Up] = ACTIONS(87),
    [anon_sym_Type] = ACTIONS(90),
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
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [29] = 3,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(101), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [58] = 3,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(105), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [87] = 4,
    ACTIONS(109), 1,
      sym_integer,
    ACTIONS(111), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym_speed,
    ACTIONS(107), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [117] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      sym_integer,
    STATE(26), 1,
      sym_speed,
    ACTIONS(113), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [147] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(119), 1,
      sym_integer,
    STATE(18), 1,
      sym_speed,
    ACTIONS(117), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [177] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(123), 1,
      sym_integer,
    STATE(20), 1,
      sym_speed,
    ACTIONS(121), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [207] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(127), 1,
      sym_integer,
    STATE(19), 1,
      sym_speed,
    ACTIONS(125), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [237] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(131), 1,
      sym_integer,
    STATE(24), 1,
      sym_speed,
    ACTIONS(129), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [267] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(135), 1,
      sym_integer,
    STATE(23), 1,
      sym_speed,
    ACTIONS(133), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [297] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(139), 1,
      sym_integer,
    STATE(22), 1,
      sym_speed,
    ACTIONS(137), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [327] = 1,
    ACTIONS(141), 21,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
      aux_sym_string_token1,
      aux_sym_string_token2,
  [351] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      sym_integer,
    STATE(25), 1,
      sym_speed,
    ACTIONS(143), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [381] = 1,
    ACTIONS(147), 20,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
      aux_sym_string_token1,
      aux_sym_string_token2,
  [404] = 2,
    ACTIONS(151), 1,
      sym_integer,
    ACTIONS(149), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [428] = 2,
    ACTIONS(155), 1,
      sym_integer,
    ACTIONS(153), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [452] = 2,
    ACTIONS(159), 1,
      sym_integer,
    ACTIONS(157), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [476] = 2,
    ACTIONS(163), 1,
      sym_integer,
    ACTIONS(161), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [500] = 2,
    ACTIONS(167), 1,
      sym_integer,
    ACTIONS(165), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [524] = 2,
    ACTIONS(171), 1,
      sym_integer,
    ACTIONS(169), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [548] = 2,
    ACTIONS(175), 1,
      sym_integer,
    ACTIONS(173), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [572] = 2,
    ACTIONS(179), 1,
      sym_integer,
    ACTIONS(177), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [596] = 2,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(181), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [620] = 1,
    ACTIONS(185), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [641] = 1,
    ACTIONS(187), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [662] = 1,
    ACTIONS(189), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [683] = 1,
    ACTIONS(153), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [704] = 1,
    ACTIONS(191), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [725] = 1,
    ACTIONS(177), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [746] = 1,
    ACTIONS(149), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [767] = 1,
    ACTIONS(157), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [788] = 1,
    ACTIONS(193), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
    ACTIONS(181), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [830] = 1,
    ACTIONS(195), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [851] = 1,
    ACTIONS(173), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [872] = 1,
    ACTIONS(197), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [893] = 1,
    ACTIONS(169), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [914] = 1,
    ACTIONS(199), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [935] = 1,
    ACTIONS(165), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [956] = 1,
    ACTIONS(201), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [977] = 1,
    ACTIONS(161), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [998] = 1,
    ACTIONS(203), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [1019] = 1,
    ACTIONS(205), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [1040] = 1,
    ACTIONS(207), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [1061] = 1,
    ACTIONS(209), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [1082] = 1,
    ACTIONS(211), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [1103] = 1,
    ACTIONS(213), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [1124] = 1,
    ACTIONS(215), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [1145] = 1,
    ACTIONS(217), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Sleep,
      anon_sym_Hide,
      anon_sym_Show,
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
  [1166] = 5,
    ACTIONS(225), 1,
      anon_sym_Padding,
    STATE(46), 1,
      sym_setting,
    ACTIONS(219), 2,
      anon_sym_FontFamily,
      anon_sym_Theme,
    ACTIONS(221), 3,
      anon_sym_FontSize,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
    ACTIONS(223), 3,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_Width,
  [1187] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    STATE(55), 1,
      sym_speed,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
  [1202] = 2,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
  [1211] = 2,
    STATE(27), 1,
      sym_string,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1219] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [1223] = 1,
    ACTIONS(229), 1,
      aux_sym_setting_token1,
  [1227] = 1,
    ACTIONS(231), 1,
      sym_path,
  [1231] = 1,
    ACTIONS(233), 1,
      sym_float,
  [1235] = 1,
    ACTIONS(233), 1,
      sym_integer,
  [1239] = 1,
    ACTIONS(235), 1,
      sym_float,
  [1243] = 1,
    ACTIONS(237), 1,
      sym_time,
  [1247] = 1,
    ACTIONS(239), 1,
      aux_sym_speed_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 29,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 237,
  [SMALL_STATE(13)] = 267,
  [SMALL_STATE(14)] = 297,
  [SMALL_STATE(15)] = 327,
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
  [SMALL_STATE(53)] = 1166,
  [SMALL_STATE(54)] = 1187,
  [SMALL_STATE(55)] = 1202,
  [SMALL_STATE(56)] = 1211,
  [SMALL_STATE(57)] = 1219,
  [SMALL_STATE(58)] = 1223,
  [SMALL_STATE(59)] = 1227,
  [SMALL_STATE(60)] = 1231,
  [SMALL_STATE(61)] = 1235,
  [SMALL_STATE(62)] = 1239,
  [SMALL_STATE(63)] = 1243,
  [SMALL_STATE(64)] = 1247,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speed, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [227] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
