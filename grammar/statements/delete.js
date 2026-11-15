export default {

  _delete_statement: $ => seq(
    $.delete,
    alias($._delete_from, $.from),
    optional($.returning),
  ),

  _delete_from: $ => seq(
    $.keyword_from,
    optional(
      $.keyword_only,
    ),
    $.object_reference,
    optional($._delete_using),
    optional($.where),
    optional($.order_by),
    optional($.limit),
  ),

  // PostgreSQL: USING lists tables as FROM does
  _delete_using: $ => seq(
    $.keyword_using,
    $.relation,
    repeat(
      seq(
        ',',
        choice(
          $.relation,
          alias($._lateral_relation, $.relation),
        ),
      ),
    ),
    repeat(
      choice(
        $.join,
        $.cross_join,
        $.lateral_join,
        $.lateral_cross_join,
      ),
    ),
  ),

  delete: $ => seq(
    $.keyword_delete,
    optional($.index_hint),
  ),

};
