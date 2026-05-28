import base from '../grammar.js';
import { paren_list, optional_parenthesis, comma_list, wrapped_in_parenthesis, make_keyword } from '../grammar/helpers.js';

import sf_qualify_rules     from './grammar/qualify.js';
import sf_pivot_rules       from './grammar/pivot.js';
import sf_match_rec_rules   from './grammar/match_recognize.js';
import sf_time_travel_rules from './grammar/time_travel.js';
import sf_variant_rules     from './grammar/variant.js';
import sf_scripting_rules   from './grammar/scripting.js';
import sf_execute_rules     from './grammar/execute.js';
import sf_copy_rules        from './grammar/copy.js';
import sf_create_rules      from './grammar/create.js';
import sf_alter_rules       from './grammar/alter.js';
import sf_use_rules         from './grammar/use.js';

export default grammar(base, {
  name: 'snowflake_sql',

  conflicts: $ => [
    // Inherited base conflicts
    [$.object_reference, $._qualified_field],
    [$.field, $._qualified_field],
    [$._column, $._qualified_field],
    [$.object_reference],
    [$.between_expression, $.binary_expression],
    [$.create_function],
    [$.list, $.grouping_set],
    [$.list, $.rollup_element],
    [$.list, $.cube_element],
    [$.interval],
    // Snowflake-specific conflicts
    [$._function_return, $.sf_return_statement],
    [$.time],
    [$.timestamp],
  ],

  rules: {

    // ── Program: add scripting top-level blocks ─────────────────────────────
    program: $ => seq(
      repeat(seq(
        choice(
          $.transaction,
          $.statement,
          $.sf_declare_block,
          $.sf_begin_block,
        ),
        ';',
      )),
      optional($.statement),
    ),

    // ── Statement: add scripting statements ────────────────────────────────
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
        $.sf_let_statement,
        $.sf_return_statement,
        $.sf_raise_statement,
        $.sf_for_statement,
      ),
    ),

    // ── DDL: add Snowflake-specific statements ──────────────────────────────
    _ddl_statement: $ => choice(
      // base ANSI DDL
      $._create_statement,
      $._alter_statement,
      $._drop_statement,
      $._rename_statement,
      $._merge_statement,
      $._refresh_statement,
      $.set_statement,
      $.grant_statement,
      $.revoke_statement,
      // Snowflake additions
      $.sf_execute_immediate,
      $.sf_execute_task,
      $.sf_copy_into,
      $.sf_use_secondary_roles,
    ),

    // ── CREATE: add Snowflake CREATE types ─────────────────────────────────
    _create_statement: $ => seq(
      choice(
        // base (re-enumerated from grammar/statements/create.js)
        $.create_table,
        $.create_view,
        $.create_materialized_view,
        $.create_index,
        $.create_function,
        $.create_procedure,
        $.create_type,
        $.create_database,
        $.create_role,
        $.create_sequence,
        $.create_trigger,
        prec.left(seq(
          $.create_schema,
          repeat($._create_statement),
        )),
        // Snowflake-specific
        $.sf_create_stream,
        $.sf_create_task,
        $.sf_create_dynamic_table,
        $.sf_create_secure_view,
        $.sf_create_masking_policy,
        $.sf_create_row_access_policy,
      ),
    ),

    // ── ALTER: add ALTER SESSION + masking policy alter ─────────────────────
    _alter_statement: $ => seq(
      choice(
        // base (re-enumerated from grammar/statements/alter.js)
        $.alter_table,
        $.alter_view,
        $.alter_materialized_view,
        $.alter_schema,
        $.alter_type,
        $.alter_index,
        $.alter_database,
        $.alter_role,
        $.alter_sequence,
        // Snowflake-specific
        $.sf_alter_session,
        $.sf_alter_table_masking,
      ),
    ),

    // ── SELECT / FROM: add QUALIFY after HAVING ─────────────────────────────
    from: $ => seq(
      $.keyword_from,
      optional($.keyword_only),
      comma_list($.relation, true),
      optional($.index_hint),
      repeat(choice(
        $.join,
        $.cross_join,
        $.lateral_join,
        $.lateral_cross_join,
      )),
      optional($.where),
      optional($.group_by),
      optional($.having),
      optional($.sf_qualify_clause),
      optional($.window_clause),
      optional($.order_by),
      optional($.limit),
      optional($.offset_fetch_clause),
    ),

    // ── relation: add time travel, PIVOT, UNPIVOT, MATCH_RECOGNIZE ──────────
    relation: $ => prec.right(
      seq(
        choice(
          $.subquery,
          $.invocation,
          $.object_reference,
          wrapped_in_parenthesis($.values),
          // Snowflake: @stage as a FROM source
          $.sf_stage_ref,
        ),
        optional($.sf_time_travel_clause),
        optional($.tablesample),
        optional(choice(
          $.sf_pivot_clause,
          $.sf_unpivot_clause,
        )),
        optional($.sf_match_recognize_clause),
        optional(seq(
          $._alias,
          optional(alias($._column_list, $.list)),
        )),
      ),
    ),

    // ── _expression: add variant colon-path access and :: cast ──────────────
    _expression: $ => prec(1, choice(
      $.literal,
      alias($._qualified_field, $.field),
      $.parameter,
      $.list,
      $.case,
      $.window_function,
      $.subquery,
      $.cast,
      alias($.sf_cast, $.cast),
      $.exists,
      $.invocation,
      $.binary_expression,
      $.subscript,
      $.unary_expression,
      $.array,
      $.interval,
      $.between_expression,
      $.parenthesized_expression,
      // Snowflake-specific
      $.sf_variant_access,
    )),

    // ── :: type cast (Snowflake-specific; Postgres has same pattern) ─────────
    sf_cast: $ => seq(
      $._expression,
      '::',
      $._type,
    ),

    // Snowflake-specific keywords (not ANSI)
    keyword_at:             _ => make_keyword("at"),
    keyword_one:            _ => make_keyword("one"),
    keyword_per:            _ => make_keyword("per"),
    keyword_past:           _ => make_keyword("past"),
    keyword_next:           _ => make_keyword("next"),
    keyword_match_recognize:_ => make_keyword("match_recognize"),
    keyword_measures:       _ => make_keyword("measures"),
    keyword_pattern:        _ => make_keyword("pattern"),
    keyword_define:         _ => make_keyword("define"),
    keyword_skip:           _ => make_keyword("skip"),
    keyword_flatten:        _ => token(prec(1, make_keyword("flatten"))),
    keyword_let:            _ => make_keyword("let"),
    keyword_raise:          _ => make_keyword("raise"),
    keyword_exception:      _ => make_keyword("exception"),
    keyword_task:           _ => make_keyword("task"),
    keyword_stream:         _ => make_keyword("stream"),
    keyword_dynamic:        _ => make_keyword("dynamic"),
    keyword_warehouse:      _ => make_keyword("warehouse"),
    keyword_schedule:       _ => make_keyword("schedule"),
    keyword_secure:         _ => make_keyword("secure"),
    keyword_masking:        _ => make_keyword("masking"),
    keyword_target_lag:     _ => make_keyword("target_lag"),
    keyword_access:         _ => make_keyword("access"),
    keyword_secondary:      _ => make_keyword("secondary"),
    keyword_roles:          _ => make_keyword("roles"),
    keyword_source:         _ => make_keyword("source"),
    keyword_qualify:        _ => make_keyword("qualify"),
    keyword_pivot:          _ => make_keyword("pivot"),
    keyword_unpivot:        _ => make_keyword("unpivot"),
    keyword_string:         _ => make_keyword("string"),
    keyword_rlike:          _ => choice(make_keyword("rlike"), make_keyword("regexp")),
    keyword_copy:           _ => make_keyword("copy"),
    keyword_policy:         _ => make_keyword("policy"),

    // ── Spread all Snowflake rule modules ───────────────────────────────────
    ...sf_qualify_rules,
    ...sf_pivot_rules,
    ...sf_match_rec_rules,
    ...sf_time_travel_rules,
    ...sf_variant_rules,
    ...sf_scripting_rules,
    ...sf_execute_rules,
    ...sf_copy_rules,
    ...sf_create_rules,
    ...sf_alter_rules,
    ...sf_use_rules,

  },
});
