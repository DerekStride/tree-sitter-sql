import { comma_list } from '../helpers.js';

export default {

  // GRANT privilege [, ...] ON object TO grantee [, ...] [WITH GRANT OPTION]
  grant_statement: $ => seq(
    $.keyword_grant,
    $._privilege_list,
    $.keyword_on,
    $._grant_object,
    $.keyword_to,
    $._grantee_list,
    optional(seq($.keyword_with, $.keyword_grant, $.keyword_option)),
  ),

  // REVOKE [GRANT OPTION FOR] privilege [, ...] ON object FROM grantee [, ...] [CASCADE|RESTRICT]
  revoke_statement: $ => seq(
    $.keyword_revoke,
    optional(seq($.keyword_grant, $.keyword_option, $.keyword_for)),
    $._privilege_list,
    $.keyword_on,
    $._grant_object,
    $.keyword_from,
    $._grantee_list,
    optional(choice($.keyword_cascade, $.keyword_restrict)),
  ),

  _privilege_list: $ => comma_list($._privilege_type, true),

  _privilege_type: $ => choice(
    $.keyword_select,
    $.keyword_insert,
    $.keyword_update,
    $.keyword_delete,
    $.keyword_execute,
    $.keyword_usage,
    $.keyword_references,
    $.keyword_trigger,
    seq($.keyword_all, optional($.keyword_privileges)),
  ),

  _grant_object: $ => choice(
    seq($.keyword_table, $.object_reference),
    seq($.keyword_view, $.object_reference),
    seq($.keyword_schema, $.object_reference),
    seq($.keyword_database, $.object_reference),
    seq($.keyword_function, $.object_reference),
    seq($.keyword_procedure, $.object_reference),
    seq($.keyword_sequence, $.object_reference),
    $.object_reference,
  ),

  _grantee_list: $ => comma_list($._grantee, true),

  _grantee: $ => choice(
    seq(optional(choice($.keyword_user, $.keyword_group, $.keyword_role)), $.identifier),
    $.keyword_public,
  ),

};
