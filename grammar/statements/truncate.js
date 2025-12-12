const { comma_list } = require("../helpers");

module.exports = {

  _truncate_statement: $ => seq(
    $.keyword_truncate,
    optional($.keyword_table),
    optional($.keyword_only),
    comma_list($.object_reference),
    optional($._drop_behavior),
  ),

};
