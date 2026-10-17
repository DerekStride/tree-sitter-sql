import { comma_list, paren_list } from "../helpers.js";

export default {

  grant_statement: $ => prec.right(seq(
    $.keyword_grant,
    $._table_privileges,
    $.keyword_on,
    $._privilege_tables,
    $.keyword_to,
    comma_list($._privilege_role, true),
    optional(seq($.keyword_with, $.keyword_grant, $.keyword_option)),
    optional($._granted_by),
  )),

  revoke_statement: $ => seq(
    $.keyword_revoke,
    optional(seq($.keyword_grant, $.keyword_option, $.keyword_for)),
    $._table_privileges,
    $.keyword_on,
    $._privilege_tables,
    $.keyword_from,
    comma_list($._privilege_role, true),
    optional($._granted_by),
    optional($._drop_behavior),
  ),

  _table_privileges: $ => choice(
    seq(
      $.keyword_all,
      optional($.keyword_privileges),
      optional(paren_list($.identifier, true)),
    ),
    comma_list($.table_privilege, true),
  ),

  table_privilege: $ => choice(
    seq(
      choice(
        $.keyword_select,
        $.keyword_insert,
        $.keyword_update,
        $.keyword_references,
      ),
      optional(paren_list($.identifier, true)),
    ),
    $.keyword_delete,
    $.keyword_truncate,
    $.keyword_trigger,
    $.keyword_maintain,
  ),

  _privilege_tables: $ => choice(
    seq(optional($.keyword_table), comma_list($.object_reference, true)),
    seq(
      $.keyword_all,
      $.keyword_tables,
      $.keyword_in,
      $.keyword_schema,
      comma_list($.identifier, true),
    ),
  ),

  _privilege_role: $ => choice(
    seq(optional($.keyword_group), $.identifier),
    $.keyword_public,
    $.keyword_current_role,
    $.keyword_current_user,
    $.keyword_session_user,
  ),

  _granted_by: $ => seq(
    $.keyword_granted,
    $.keyword_by,
    $._privilege_role,
  ),

};
