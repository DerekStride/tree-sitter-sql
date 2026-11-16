export default {

  transaction: $ => choice(
    prec.dynamic(1, seq(
      $.keyword_begin,
      optional($._transaction_or_work),
      optional(';'),
      repeat(
        seq(
          $.statement,
          ';'
        ),
      ),
      choice(
        $._commit,
        $._rollback,
      ),
    )),
    // one transaction statement on its own, the way a client sends it
    $._begin,
    $._commit,
    $._rollback,
    $._savepoint,
  ),

  _begin: $ => choice(
    seq(
      $.keyword_begin,
      optional(
        choice(
          $.keyword_deferred,
          $.keyword_immediate,
          $.keyword_exclusive,
        ),
      ),
      optional($._transaction_or_work),
      optional($._transaction_mode),
    ),
    seq(
      $.keyword_start,
      $.keyword_transaction,
      optional($._transaction_mode),
    ),
  ),

  _commit: $ => seq(
    $.keyword_commit,
    optional($._transaction_or_work),
    optional($._chain),
  ),

  _rollback: $ => seq(
    $.keyword_rollback,
    optional($._transaction_or_work),
    optional($._chain),
  ),

  _savepoint: $ => choice(
    seq($.keyword_savepoint, $.identifier),
    seq($.keyword_release, optional($.keyword_savepoint), $.identifier),
    seq(
      $.keyword_rollback,
      optional($._transaction_or_work),
      $.keyword_to,
      optional($.keyword_savepoint),
      $.identifier,
    ),
  ),

  _transaction_or_work: $ => choice(
    $.keyword_transaction,
    $.keyword_work,
  ),

  _chain: $ => seq(
    $.keyword_and,
    optional($.keyword_no),
    $.keyword_chain,
  ),

};
