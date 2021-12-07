module.exports = grammar({
  name: "plantuml",

  rules: {
    source_file: $ => $.document,
    document: $ => seq(
      "@startuml",
      repeat($._declaration),
      "@enduml"
    ),

    _declaration: $ => choice(
      $.comment,
      $.participant,
      $.skinparam,
    ),

    _unquoted_string: $ => /\w+/,
    _quoted_string: $ => /"\w+"/,

    identifier: $ => $._unquoted_string,
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

    participant: $ => seq(
      "participant",
      field("name", $.identifier),
      optional(seq(
        $.keyword,
        $.string
      )),
    ),
  }
});
