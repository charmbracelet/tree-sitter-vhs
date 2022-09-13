#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_Output = 1,
  anon_sym_Set = 2,
  anon_sym_Type = 3,
  anon_sym_Sleep = 4,
  anon_sym_Hidden = 5,
  anon_sym_Begin = 6,
  anon_sym_End = 7,
  sym_ctrl = 8,
  anon_sym_FontFamily = 9,
  anon_sym_FontSize = 10,
  anon_sym_Framerate = 11,
  anon_sym_Height = 12,
  anon_sym_LetterSpacing = 13,
  anon_sym_LineHeight = 14,
  anon_sym_Padding = 15,
  anon_sym_Theme = 16,
  anon_sym_Width = 17,
  anon_sym_Backspace = 18,
  anon_sym_Down = 19,
  anon_sym_Enter = 20,
  anon_sym_Escape = 21,
  anon_sym_Left = 22,
  anon_sym_Right = 23,
  anon_sym_Space = 24,
  anon_sym_Tab = 25,
  anon_sym_Up = 26,
  sym_comment = 27,
  sym_number = 28,
  aux_sym_string_token1 = 29,
  aux_sym_string_token2 = 30,
  sym_path = 31,
  anon_sym_AT = 32,
  sym_time = 33,
  sym_program = 34,
  sym_command = 35,
  sym_output = 36,
  sym_set = 37,
  sym_type = 38,
  sym_sleep = 39,
  sym_hidden = 40,
  sym_press = 41,
  sym_setting = 42,
  sym_key = 43,
  sym_string = 44,
  sym_speed = 45,
  aux_sym_program_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Output] = "Output",
  [anon_sym_Set] = "Set",
  [anon_sym_Type] = "Type",
  [anon_sym_Sleep] = "Sleep",
  [anon_sym_Hidden] = "Hidden",
  [anon_sym_Begin] = "Begin",
  [anon_sym_End] = "End",
  [sym_ctrl] = "ctrl",
  [anon_sym_FontFamily] = "FontFamily",
  [anon_sym_FontSize] = "FontSize",
  [anon_sym_Framerate] = "Framerate",
  [anon_sym_Height] = "Height",
  [anon_sym_LetterSpacing] = "LetterSpacing",
  [anon_sym_LineHeight] = "LineHeight",
  [anon_sym_Padding] = "Padding",
  [anon_sym_Theme] = "Theme",
  [anon_sym_Width] = "Width",
  [anon_sym_Backspace] = "Backspace",
  [anon_sym_Down] = "Down",
  [anon_sym_Enter] = "Enter",
  [anon_sym_Escape] = "Escape",
  [anon_sym_Left] = "Left",
  [anon_sym_Right] = "Right",
  [anon_sym_Space] = "Space",
  [anon_sym_Tab] = "Tab",
  [anon_sym_Up] = "Up",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_path] = "path",
  [anon_sym_AT] = "@",
  [sym_time] = "time",
  [sym_program] = "program",
  [sym_command] = "command",
  [sym_output] = "output",
  [sym_set] = "set",
  [sym_type] = "type",
  [sym_sleep] = "sleep",
  [sym_hidden] = "hidden",
  [sym_press] = "press",
  [sym_setting] = "setting",
  [sym_key] = "key",
  [sym_string] = "string",
  [sym_speed] = "speed",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Output] = anon_sym_Output,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_Sleep] = anon_sym_Sleep,
  [anon_sym_Hidden] = anon_sym_Hidden,
  [anon_sym_Begin] = anon_sym_Begin,
  [anon_sym_End] = anon_sym_End,
  [sym_ctrl] = sym_ctrl,
  [anon_sym_FontFamily] = anon_sym_FontFamily,
  [anon_sym_FontSize] = anon_sym_FontSize,
  [anon_sym_Framerate] = anon_sym_Framerate,
  [anon_sym_Height] = anon_sym_Height,
  [anon_sym_LetterSpacing] = anon_sym_LetterSpacing,
  [anon_sym_LineHeight] = anon_sym_LineHeight,
  [anon_sym_Padding] = anon_sym_Padding,
  [anon_sym_Theme] = anon_sym_Theme,
  [anon_sym_Width] = anon_sym_Width,
  [anon_sym_Backspace] = anon_sym_Backspace,
  [anon_sym_Down] = anon_sym_Down,
  [anon_sym_Enter] = anon_sym_Enter,
  [anon_sym_Escape] = anon_sym_Escape,
  [anon_sym_Left] = anon_sym_Left,
  [anon_sym_Right] = anon_sym_Right,
  [anon_sym_Space] = anon_sym_Space,
  [anon_sym_Tab] = anon_sym_Tab,
  [anon_sym_Up] = anon_sym_Up,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_path] = sym_path,
  [anon_sym_AT] = anon_sym_AT,
  [sym_time] = sym_time,
  [sym_program] = sym_program,
  [sym_command] = sym_command,
  [sym_output] = sym_output,
  [sym_set] = sym_set,
  [sym_type] = sym_type,
  [sym_sleep] = sym_sleep,
  [sym_hidden] = sym_hidden,
  [sym_press] = sym_press,
  [sym_setting] = sym_setting,
  [sym_key] = sym_key,
  [sym_string] = sym_string,
  [sym_speed] = sym_speed,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
  [anon_sym_Type] = {
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
  [anon_sym_Begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_End] = {
    .visible = true,
    .named = false,
  },
  [sym_ctrl] = {
    .visible = true,
    .named = true,
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
  [anon_sym_Theme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Width] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym_type] = {
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
  [sym_press] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
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
  [24] = 6,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(127);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(51);
      if (lookahead == 'L') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(44);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(125);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(14);
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 120:
      if (lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == 'z') ADVANCE(39);
      END_STATE();
    case 123:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 125:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(9);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(65);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(44);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(126)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Hidden);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Begin);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_End);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ctrl);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 's') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(159);
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
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(159);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 's') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
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
  [4] = {.lex_state = 126},
  [5] = {.lex_state = 126},
  [6] = {.lex_state = 126},
  [7] = {.lex_state = 126},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 123},
  [26] = {.lex_state = 124},
  [27] = {.lex_state = 123},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 123},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_Sleep] = ACTIONS(1),
    [anon_sym_Hidden] = ACTIONS(1),
    [anon_sym_Begin] = ACTIONS(1),
    [anon_sym_End] = ACTIONS(1),
    [sym_ctrl] = ACTIONS(1),
    [anon_sym_FontFamily] = ACTIONS(1),
    [anon_sym_FontSize] = ACTIONS(1),
    [anon_sym_Framerate] = ACTIONS(1),
    [anon_sym_Height] = ACTIONS(1),
    [anon_sym_LetterSpacing] = ACTIONS(1),
    [anon_sym_LineHeight] = ACTIONS(1),
    [anon_sym_Padding] = ACTIONS(1),
    [anon_sym_Theme] = ACTIONS(1),
    [anon_sym_Width] = ACTIONS(1),
    [anon_sym_Backspace] = ACTIONS(1),
    [anon_sym_Down] = ACTIONS(1),
    [anon_sym_Enter] = ACTIONS(1),
    [anon_sym_Escape] = ACTIONS(1),
    [anon_sym_Left] = ACTIONS(1),
    [anon_sym_Right] = ACTIONS(1),
    [anon_sym_Space] = ACTIONS(1),
    [anon_sym_Tab] = ACTIONS(1),
    [anon_sym_Up] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(28),
    [sym_command] = STATE(3),
    [sym_output] = STATE(10),
    [sym_set] = STATE(10),
    [sym_type] = STATE(10),
    [sym_sleep] = STATE(10),
    [sym_hidden] = STATE(10),
    [sym_press] = STATE(10),
    [sym_key] = STATE(4),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Output] = ACTIONS(5),
    [anon_sym_Set] = ACTIONS(7),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Sleep] = ACTIONS(11),
    [anon_sym_Hidden] = ACTIONS(13),
    [sym_ctrl] = ACTIONS(15),
    [anon_sym_Backspace] = ACTIONS(17),
    [anon_sym_Down] = ACTIONS(17),
    [anon_sym_Enter] = ACTIONS(17),
    [anon_sym_Escape] = ACTIONS(17),
    [anon_sym_Left] = ACTIONS(17),
    [anon_sym_Right] = ACTIONS(17),
    [anon_sym_Space] = ACTIONS(17),
    [anon_sym_Tab] = ACTIONS(17),
    [anon_sym_Up] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym_command] = STATE(2),
    [sym_output] = STATE(10),
    [sym_set] = STATE(10),
    [sym_type] = STATE(10),
    [sym_sleep] = STATE(10),
    [sym_hidden] = STATE(10),
    [sym_press] = STATE(10),
    [sym_key] = STATE(4),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_Output] = ACTIONS(23),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_Sleep] = ACTIONS(32),
    [anon_sym_Hidden] = ACTIONS(35),
    [sym_ctrl] = ACTIONS(38),
    [anon_sym_Backspace] = ACTIONS(41),
    [anon_sym_Down] = ACTIONS(41),
    [anon_sym_Enter] = ACTIONS(41),
    [anon_sym_Escape] = ACTIONS(41),
    [anon_sym_Left] = ACTIONS(41),
    [anon_sym_Right] = ACTIONS(41),
    [anon_sym_Space] = ACTIONS(41),
    [anon_sym_Tab] = ACTIONS(41),
    [anon_sym_Up] = ACTIONS(41),
    [sym_comment] = ACTIONS(44),
  },
  [3] = {
    [sym_command] = STATE(2),
    [sym_output] = STATE(10),
    [sym_set] = STATE(10),
    [sym_type] = STATE(10),
    [sym_sleep] = STATE(10),
    [sym_hidden] = STATE(10),
    [sym_press] = STATE(10),
    [sym_key] = STATE(4),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_Output] = ACTIONS(5),
    [anon_sym_Set] = ACTIONS(7),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Sleep] = ACTIONS(11),
    [anon_sym_Hidden] = ACTIONS(13),
    [sym_ctrl] = ACTIONS(15),
    [anon_sym_Backspace] = ACTIONS(17),
    [anon_sym_Down] = ACTIONS(17),
    [anon_sym_Enter] = ACTIONS(17),
    [anon_sym_Escape] = ACTIONS(17),
    [anon_sym_Left] = ACTIONS(17),
    [anon_sym_Right] = ACTIONS(17),
    [anon_sym_Space] = ACTIONS(17),
    [anon_sym_Tab] = ACTIONS(17),
    [anon_sym_Up] = ACTIONS(17),
    [sym_comment] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(7), 1,
      sym_speed,
    ACTIONS(51), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [29] = 1,
    ACTIONS(57), 19,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
      sym_number,
      anon_sym_AT,
  [51] = 1,
    ACTIONS(59), 18,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
      sym_number,
  [72] = 2,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(61), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [95] = 1,
    ACTIONS(61), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [115] = 1,
    ACTIONS(65), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [135] = 1,
    ACTIONS(67), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [155] = 1,
    ACTIONS(69), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [175] = 1,
    ACTIONS(71), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [195] = 1,
    ACTIONS(73), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [215] = 1,
    ACTIONS(75), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [235] = 1,
    ACTIONS(77), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [255] = 1,
    ACTIONS(79), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [275] = 1,
    ACTIONS(81), 17,
      ts_builtin_sym_end,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Type,
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
      sym_comment,
  [295] = 2,
    STATE(20), 1,
      sym_setting,
    ACTIONS(83), 9,
      anon_sym_FontFamily,
      anon_sym_FontSize,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
      anon_sym_Padding,
      anon_sym_Theme,
      anon_sym_Width,
  [310] = 5,
    ACTIONS(85), 1,
      aux_sym_string_token1,
    ACTIONS(87), 1,
      aux_sym_string_token2,
    ACTIONS(89), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_string,
    STATE(21), 1,
      sym_speed,
  [326] = 4,
    ACTIONS(85), 1,
      aux_sym_string_token1,
    ACTIONS(87), 1,
      aux_sym_string_token2,
    ACTIONS(91), 1,
      sym_number,
    STATE(9), 1,
      sym_string,
  [339] = 2,
    STATE(13), 1,
      sym_string,
    ACTIONS(85), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [347] = 2,
    ACTIONS(95), 1,
      aux_sym_string_token1,
    ACTIONS(93), 2,
      sym_number,
      aux_sym_string_token2,
  [355] = 1,
    ACTIONS(97), 2,
      anon_sym_Begin,
      anon_sym_End,
  [360] = 1,
    ACTIONS(59), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [365] = 1,
    ACTIONS(99), 1,
      sym_time,
  [369] = 1,
    ACTIONS(101), 1,
      sym_path,
  [373] = 1,
    ACTIONS(103), 1,
      sym_time,
  [377] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [381] = 1,
    ACTIONS(107), 1,
      sym_time,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 29,
  [SMALL_STATE(6)] = 51,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 175,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 255,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 310,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 339,
  [SMALL_STATE(22)] = 347,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 360,
  [SMALL_STATE(25)] = 365,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 373,
  [SMALL_STATE(28)] = 377,
  [SMALL_STATE(29)] = 381,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_press, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speed, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_press, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_press, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
