const COMMANDS = {
  Output: 'Output',
  Set: 'Set',
  Type: 'Type',
  Sleep: 'Sleep',
  Hidden: 'Hidden',
  Ctrl: 'Ctrl',
};

const KEYS = [
  'Backspace',
  'Down',
  'Enter',
  'Escape',
  'Left', 
  'Right', 
  'Space',
  'Tab',
  'Up',
]

const SETTINGS = [
  'FontFamily',
  'FontSize',
  'Framerate',
  'Height',
  'LetterSpacing',
  'LineHeight',
  'Padding',
  'Theme',
  'Width',
]

module.exports = grammar({
  name: 'cassette',

  rules: {
    program: $ => repeat(choice($.command, $.comment)),

    command: $ => choice(
      $.output,
      $.set,
      $.type,
      $.sleep,
      $.hidden,
      $.press,
      $.ctrl,
    ),

    output: $ => seq(COMMANDS.Output, $.path),
    set: $ => seq(COMMANDS.Set, $.setting, choice($.string, $.number)),
    type: $ => seq(COMMANDS.Type, optional($.speed), $.string),
    sleep: $ => seq(COMMANDS.Sleep, $.time),
    hidden: $ => seq(COMMANDS.Hidden, choice('Begin', 'End')),
    press: $ => seq($.key, optional($.speed), optional($.number)),
    ctrl: $ => /Ctrl\+[A-Z]/,

    setting: $ => choice(...SETTINGS),
    key: $ => choice(...KEYS),

    comment: $ => /#.*/,

    number: $ => /\d+/,
    string: $ => choice(/"[^"]*"/, /[^\s"]+/),
    path: $ => /[\.\-\/A-Za-z0-9%]+/,

    speed: $ => seq('@', $.time),
    time: $ => /\d+(ms|s)?/,
  }
});
