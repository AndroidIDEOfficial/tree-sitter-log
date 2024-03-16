module.exports = grammar({
  name: 'log',

  extras: $ => [
    /\s/
  ],

  rules: {
    logs: $ => repeat(choice($.begin_header, $.log_line, $.ide_log_line)),

    begin_header: $ => seq(repeat1('-'), $._any),

    ide_log_line: $ => seq(
        $.date,
        $.time,
        $.priority,
        $.thread_name,
        $.tag,
        $.message
    ),

    thread_name: $ => seq(
        '[',
        field('thread_name', /[^\]]+/),
        ']'
    ),

    log_line: $ => seq(
      $.date,
      $.time,
      $.pid,
      $.tid,
      $.priority,
      $.tag,
      $.message
    ),

    pid: $ => $._num,
    tid: $ => $._num,

    date: $ => seq(
      optional(seq(
          field("year", $._num),
          '-'
      )),
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
      choice('.', ','),
      field("ms", $._num)
    ),

    priority: $ => choice(
      'E', 'ERROR',
      'W', 'WARN',
      'I', 'INFO',
      'D', 'DEBUG',
      'V', 'VERBOSE',
      'T', 'TRACE',
      'F', 'FINE',
      'S', 'SILENT',
    ),

    tag: $ => /\S+:/,

    message: $ =>  $._any,

    _any: $ => /\S.*\S/,

    _num: $ => /[0-9]+/
  }
});
