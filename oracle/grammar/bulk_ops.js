import { comma_list } from '../../grammar/helpers.js';

export default {

  // FORALL i IN lower..upper | INDICES OF coll [SAVE EXCEPTIONS] dml;
  forall_statement: $ => seq(
    $.keyword_forall,
    field('index', $.identifier),
    $.keyword_in,
    choice(
      seq(
        field('lower', $._expression),
        '..',
        field('upper', $._expression),
      ),
      seq(
        $.keyword_indices,
        $.keyword_of,
        field('collection', $.identifier),
      ),
    ),
    optional(seq($.keyword_save, $.keyword_exceptions)),
    choice(
      $.insert,
      $._update_statement,
      $._delete_statement,
      $._merge_statement,
    ),
  ),

  // EXECUTE IMMEDIATE sql_str [[BULK COLLECT] INTO var1 [, var2]] [USING bind1 [, bind2]]
  execute_immediate_statement: $ => seq(
    $.keyword_execute,
    $.keyword_immediate,
    field('sql', $._expression),
    optional(seq(
      optional(seq($.keyword_bulk, $.keyword_collect)),
      $.keyword_into,
      comma_list($.identifier, true),
    )),
    optional(seq(
      $.keyword_using,
      comma_list($._expression, true),
    )),
  ),

};
