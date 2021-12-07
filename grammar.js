module.exports = grammar({
  name: "plantuml",

  rules: {
    source_file: $ => $.document,
    document: $ => seq(
      "@startuml",
      repeat($._statement),
      "@enduml"
    ),

    _statement: $ => choice(
      $.comment,
      $.participant,
      $.skinparam,
    ),

    _unquoted_string: $ => /\w+/,
    _quoted_string: $ => /"[\w\!\?\s]+"/,

    identifier: $ => choice(
      $._unquoted_string,
      $._quoted_string,
    ),
    string: $ => choice(
      $._unquoted_string,
      $._quoted_string,
    ),
    comment: $ => /'.*\n/,

    keyword: $ => choice(
      "as",
    ),

    skinparam: $ => seq(
      "skinparam",
      $.identifier,
      $.string,
    ),

    _participant_keyword: $ => choice(
        "participant",
        "actor",
        "boundary",
        "control",
        "entity",
        "database",
        "collections",
        "queue",
    ),
    participant: $ => seq(
      alias($._participant_keyword, $.keyword),
      $.identifier,
      optional(seq(
        $.keyword,
        $.string
      )),
    ),
  }
});
