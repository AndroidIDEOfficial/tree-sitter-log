module.exports = grammar({
  name: 'log',

  extras: $ => [
    /\s/
  ],

  rules: {
    logs: $ => repeat(choice($.begin_header, $.log_line, $.ide_log_line)),

    begin_header: $ => seq(repeat1('-'), $._any),

    ide_log_line: $ => seq($.ide_tag, $.priority, $.message),

    log_line: $ => seq(
      $.date,
      $.time,
      $.pid,
      $.tid,
      $.tag,
      $.priority,
      $.message
    ),

    pid: $ => $._num,
    tid: $ => $._num,

    date: $ => seq(
      field("month", $._num),
      '-',
      field("day", $._num)
    ),

    time: $ => seq(
      field("hour", $._num),
      ':',
      field("min", $._num),
      ':',
      field("sec", $._num),
      '.',
      field("ms", $._num)
    ),

    priority: $ => choice(
      'E',
      'W',
      'D',
      'I',
      'V'
    ),

    tag: $ => /[^\s]+/,

    ide_tag: $ => /[^\-\d\s]+/,

    message: $ =>  $._any,

    _any: $ => /[^\s].*[^\s]/,

    _num: $ => /[0-9]+/
  }
});
