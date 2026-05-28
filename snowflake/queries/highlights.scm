; inherits: sql

; ── Snowflake-specific keywords ─────────────────────────────────────────────

[
  (keyword_at)
  (keyword_before)
  (keyword_qualify)
  (keyword_pivot)
  (keyword_unpivot)
  (keyword_include)
  (keyword_exclude)
  (keyword_match_recognize)
  (keyword_measures)
  (keyword_pattern)
  (keyword_define)
  (keyword_skip)
  (keyword_one)
  (keyword_per)
  (keyword_past)
  (keyword_next)
  (keyword_let)
  (keyword_raise)
  (keyword_exception)
  (keyword_declare)
  (keyword_execute)
  (keyword_immediate)
  (keyword_task)
  (keyword_copy)
  (keyword_stream)
  (keyword_dynamic)
  (keyword_warehouse)
  (keyword_schedule)
  (keyword_secure)
  (keyword_masking)
  (keyword_target_lag)
  (keyword_access)
  (keyword_secondary)
  (keyword_roles)
  (keyword_returns)
  (keyword_session)
  (keyword_modify)
] @keyword

(keyword_flatten) @function.call

; ── Stage references (@stage_name) ─────────────────────────────────────────

(sf_stage_ref) @string.special
