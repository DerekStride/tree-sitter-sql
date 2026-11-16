import { comma_list } from "../helpers.js";

export default {

  _truncate_statement: $ => seq(
    $.keyword_truncate,
    optional($.keyword_table),
    optional($.keyword_only),
    comma_list($.object_reference),
    optional(seq(choice($.keyword_restart, $.keyword_continue), $.keyword_identity)),
    optional($._drop_behavior),
  ),

};
