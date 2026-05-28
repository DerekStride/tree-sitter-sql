import { optional_parenthesis, wrapped_in_parenthesis } from "../helpers.js";

import create_rules from "./create.js";
import alter_rules from "./alter.js";
import drop_rules from "./drop.js";
import rename_rules from "./rename.js";
import merge_rules from "./merge.js";
import comment_rules from "./comment.js";
import delete_rules from "./delete.js";
import insert_rules from "./insert.js";
import update_rules from "./update.js";
import truncate_rules from "./truncate.js";
import select_rules from "./select.js";
import set_rules from "./set.js";
import refresh_rules from "./refresh.js";
import show_rules from "./show.js";
import grant_rules from "./grant.js";

export default {

  statement: $ => seq(
    optional(seq(
      $.keyword_explain,
      optional($.keyword_analyze),
      optional($.keyword_verbose),
    )),
    choice(
      $._ddl_statement,
      $._dml_write,
      optional_parenthesis($._dml_read),
    ),
  ),

  ...create_rules,
  ...alter_rules,
  ...drop_rules,
  ...rename_rules,
  ...merge_rules,
  ...comment_rules,
  ...refresh_rules,
  ...delete_rules,
  ...insert_rules,
  ...update_rules,
  ...truncate_rules,
  ...select_rules,
  ...set_rules,
  ...show_rules,
  ...grant_rules,

  _ddl_statement: $ => choice(
    $._create_statement,
    $._alter_statement,
    $._drop_statement,
    $._rename_statement,
    $._merge_statement,
    $._refresh_statement,
    $.set_statement,
    $.grant_statement,
    $.revoke_statement,
  ),

  _dml_write: $ => seq(
    optional($._cte),
    choice(
      $._delete_statement,
      $._insert_statement,
      $._update_statement,
      $._truncate_statement,
    ),
  ),

  _dml_read: $ => seq(
    optional(optional_parenthesis($._cte)),
    optional_parenthesis(
      choice(
        $._select_statement,
        $.set_operation,
      ),
    ),
  ),

  _refresh_statement: $ => $.refresh_materialized_view,

};
