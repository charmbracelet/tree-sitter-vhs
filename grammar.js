module.exports = grammar({
  name: 'vhs',
  rules: {
    program: $ => repeat(choice($.command, $.comment)),
    command: $ => choice(
      $.control,
      $.shift,
      $.alt,
      'Hide',
      'Show',
      $.output,
      $.sleep,
      $.type,
      $.backspace,
      $.down,
      $.enter,
      $.escape,
      $.left,
      $.right,
      $.set,
      $.env,
      'Copy',
      'Paste',
      $.space,
      $.tab,
      $.up,
      $.pageup,
      $.pagedown,
      $.wait,
      $.require,
    ),

    control: $ =>   /Ctrl\+(Alt\+)?(Shift\+)?([^/\d/\s:]|Enter)/,
    alt: $ =>       /Alt\+(Shift\+)?([^/\d/\s:]|Enter|Tab)/,
    shift: $ =>     /Shift\+([^/\d/\s:]|Enter|Tab)/,
    output: $ =>    seq('Output',    $.path),
    set: $ =>       seq('Set',       $.setting),
    env: $ =>       seq('Env',       $.string, $.string),
    sleep: $ =>     seq('Sleep',     $.time),
    type: $ =>      seq('Type',      optional($.duration), repeat1($.string)),
    backspace: $ => seq('Backspace', optional($.duration), optional($.integer)),
    down: $ =>      seq('Down',      optional($.duration), optional($.integer)),
    enter: $ =>     seq('Enter',     optional($.duration), optional($.integer)),
    escape: $ =>    seq('Escape',    optional($.duration), optional($.integer)),
    left: $ =>      seq('Left',      optional($.duration), optional($.integer)),
    right: $ =>     seq('Right',     optional($.duration), optional($.integer)),
    space: $ =>     seq('Space',     optional($.duration), optional($.integer)),
    tab: $ =>       seq('Tab',       optional($.duration), optional($.integer)),
    up: $ =>        seq('Up',        optional($.duration), optional($.integer)),
    pageup: $ =>    seq('PageUp',    optional($.duration), optional($.integer)),
    pagedown: $ =>  seq('PageDown',  optional($.duration), optional($.integer)),
    wait: $ =>      seq('Wait', optional($.waitOn), optional($.duration), $.regex),
    require: $ =>   seq('Require', $.string),

    setting: $ => choice(
      seq('Shell',         $.string),
      seq('FontFamily',    $.string),
      seq('FontSize',      $.float),
      seq('Framerate',     $.integer),
      seq('PlaybackSpeed', $.float),
      seq('Height',        $.integer),
      seq('LetterSpacing', $.float),
      seq('TypingSpeed',   $.time),
      seq('LineHeight',    $.float),
      seq('Padding',       $.float),
      seq('Theme',         choice($.json, $.string)),
      seq('LoopOffset',    seq($.float, optional('%'))),
      seq('Width',         $.integer),
      seq('BorderRadius',  $.integer),
      seq('Margin',        $.integer),
      seq('MarginFill',    $.string),
      seq('WindowBar',     $.string),
      seq('WindowBarSize', $.integer),
      seq('CursorBlink',   $.boolean),
    ),

    string: $ =>    choice(/"[^"]*"/, /'[^']*'/, /`[^`]*`/, /[A-Za-z][A-Za-z0-9_]*/),
    regex: $ =>     /\/.*\//,
    comment: $ =>   /#.*/,
    float: $ =>     /\d*\.?\d+/,
    integer: $ =>   /\d+/,
    json: $ =>      /\{.*\}/,
    path: $ =>      /[\.\-\/A-Za-z0-9%]+/,
    duration: $ =>  seq('@', $.time),
    waitOn: $ =>    seq('+', choice("Screen", "Line")),
    time: $ =>      /\d*\.?\d+(ms|s)?/,
    boolean: $ =>   /true|false/,
  }
});
