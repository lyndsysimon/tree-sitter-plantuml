module.exports = grammar({
  name: "plantuml",
  rules: {
    source_file: $ => $.document,
    document: $ => seq(
      "@startuml",
      repeat($._command),
      "@enduml"
    ),
    _command: $ => choice(
      $.comment,
      $.participant
    ),

    comment: $ => seq("'", /.*/),

    participant: $ => seq("participant", $.name),
    name: $ => /.*/
  }
});
