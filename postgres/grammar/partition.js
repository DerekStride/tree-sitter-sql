import { comma_list, paren_list } from '../../grammar/helpers.js';

export default {

  // PARTITION BY {RANGE|LIST|HASH} (col [, ...])
  pg_partition_by: $ => seq(
    $.keyword_partition,
    $.keyword_by,
    choice($.keyword_range, $.keyword_list, $.keyword_hash),
    paren_list($._expression, true),
  ),

  // FOR VALUES partition_bound | DEFAULT
  // Simplified: just capture the FOR VALUES clause for PARTITION OF
  pg_partition_bound: $ => seq(
    $.keyword_for,
    $.keyword_values,
    choice(
      // RANGE: FROM (val) TO (val)
      seq(
        $.keyword_from,
        '(', comma_list($._expression, true), ')',
        $.keyword_to,
        '(', comma_list($._expression, true), ')',
      ),
      // LIST: IN (val [, ...])
      seq($.keyword_in, paren_list($._expression, true)),
      // HASH: WITH (MODULUS n, REMAINDER n)
      seq(
        $.keyword_with,
        '(',
        $.keyword_modulus, $._expression, ',',
        $.keyword_remainder, $._expression,
        ')',
      ),
    ),
  ),

  // INHERITS (parent [, ...])
  pg_inherits: $ => seq(
    $.keyword_inherits,
    paren_list($.object_reference, true),
  ),

  // LIKE parent [INCLUDING|EXCLUDING {ALL|CONSTRAINTS|INDEXES|DEFAULTS|GENERATED|IDENTITY|STATISTICS|STORAGE|COMMENTS}]
  pg_like_clause: $ => seq(
    $.keyword_like,
    $.object_reference,
    repeat(seq(
      choice($.keyword_including, $.keyword_excluding),
      choice(
        $.keyword_all,
        $.keyword_constraints,
        $.keyword_indexes,
        $.keyword_defaults,
        $.keyword_generated,
        $.keyword_identity,
        $.keyword_storage,
        $.keyword_comments,
      ),
    )),
  ),

  keyword_modulus:   _ => /[Mm][Oo][Dd][Uu][Ll][Uu][Ss]/,
  keyword_remainder: _ => /[Rr][Ee][Mm][Aa][Ii][Nn][Dd][Ee][Rr]/,
  keyword_defaults:  _ => /[Dd][Ee][Ff][Aa][Uu][Ll][Tt][Ss]/,
  keyword_identity:  _ => /[Ii][Dd][Ee][Nn][Tt][Ii][Tt][Yy]/,
  keyword_comments:  _ => /[Cc][Oo][Mm][Mm][Ee][Nn][Tt][Ss]/,

};
