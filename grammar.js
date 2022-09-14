const COMMANDS = {
  Output: 'Output',
  Set: 'Set',
  Type: 'Type',
  Sleep: 'Sleep',
  Hidden: 'Hidden',
  Ctrl: 'Ctrl',
  Backspace: 'Backspace',
  Down: 'Down',
  Enter: 'Enter',
  Escape: 'Escape',
  Left: 'Left',
  Right: 'Right',
  Space: 'Space',
  Tab: 'Tab',
  Up: 'Up',
};

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
      $.ctrl,
      $.backspace,
      $.down,
      $.enter,
      $.escape,
      $.left,
      $.right,
      $.space,
      $.tab,
      $.up,
    ),

    output: $ => seq(COMMANDS.Output, $.path),
    set: $ => seq(COMMANDS.Set, $.setting),
    type: $ => seq(COMMANDS.Type, optional($.speed), repeat1($.string)),
    sleep: $ => seq(COMMANDS.Sleep, $.time),
    hidden: $ => seq(COMMANDS.Hidden, choice($.begin, $.end)),
    ctrl: $ => /Ctrl\+[A-Z]/,
    begin: $ => 'Begin',
    end: $ => 'End',

    backspace: $ => seq(COMMANDS.Backspace, optional($.speed), optional($.integer)),
    down: $ => seq(COMMANDS.Down, optional($.speed), optional($.integer)),
    enter: $ => seq(COMMANDS.Enter, optional($.speed), optional($.integer)),
    escape: $ => seq(COMMANDS.Escape, optional($.speed), optional($.integer)),
    left: $ => seq(COMMANDS.Left, optional($.speed), optional($.integer)),
    right: $ => seq(COMMANDS.Right, optional($.speed), optional($.integer)),
    space: $ => seq(COMMANDS.Space, optional($.speed), optional($.integer)),
    tab: $ => seq(COMMANDS.Tab, optional($.speed), optional($.integer)),
    up: $ => seq(COMMANDS.Up, optional($.speed), optional($.integer)),

    setting: $ => choice(
      seq('FontFamily', $.string),
      seq('FontSize', $.float),
      seq('Framerate', $.integer),
      seq('Height', $.integer),
      seq('LetterSpacing', $.float),
      seq('LineHeight', $.float),
      seq('Padding', $.float, token.immediate(/(em|px|%)/)),
      seq('Theme', $.string),
      seq('Width', $.integer),
    ),

    comment: $ => /#.*/,

    float: $ => /\d+\.?\d*/,
    integer: $ => /\d+/,
    string: $ => choice(/"[^"]*"/, /[A-Za-z0-9_\.-]+/),
    path: $ => /[\.\-\/A-Za-z0-9%]+/,

    speed: $ => seq(token.immediate('@'), alias(token.immediate(/\d+(ms|s)?/), $.time)),
    time: $ => /\d+(ms|s)?/,
  }
});
