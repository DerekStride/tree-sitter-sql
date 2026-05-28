import { paren_list, wrapped_in_parenthesis } from "../../grammar/helpers.js";

export default {

  // Override _column_constraint to add INVISIBLE / VISIBLE column option.
  // MariaDB allows marking a column invisible so it is excluded from SELECT *
  // but can still be referenced explicitly.
  //
  // NOTE: This must extend (not replace) the MySQL override, keeping all MySQL
  // choices: AUTO_INCREMENT, REFERENCES with ON DELETE/UPDATE actions, and
  // STORED/VIRTUAL generated columns.
  _column_constraint: $ => prec.left(choice(
    choice(
      $.keyword_null,
      $._not_null,
    ),
    seq(
      $.keyword_references,
      $.object_reference,
      paren_list($.identifier, true),
      repeat(
        seq(
          $.keyword_on,
          choice($.keyword_delete, $.keyword_update),
          choice(
            seq($.keyword_no, $.keyword_action),
            $.keyword_restrict,
            $.keyword_cascade,
            seq(
              $.keyword_set,
              choice($.keyword_null, $.keyword_default),
              optional(paren_list($.identifier, true))
            ),
          ),
        ),
      ),
    ),
    $._default_expression,
    $._primary_key,
    $.keyword_auto_increment,
    $.direction,
    $._column_comment,
    $._check_constraint,
    // Generated / computed column: GENERATED ALWAYS AS (expr) [STORED|VIRTUAL]
    seq(
      optional(seq($.keyword_generated, $.keyword_always)),
      $.keyword_as,
      wrapped_in_parenthesis($._expression),
      optional(choice($.keyword_stored, $.keyword_virtual)),
    ),
    $.keyword_invisible,
    $.keyword_visible,
    $.keyword_unique,
  )),

};
