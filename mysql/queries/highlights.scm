; inherits: sql

; MySQL-specific type qualifiers
[
  (keyword_delayed)
  (keyword_high_priority)
  (keyword_low_priority)
] @type.qualifier

; MySQL SHOW / DESCRIBE
[
  (keyword_databases)
  (keyword_processlist)
  (keyword_status)
  (keyword_warnings)
  (keyword_errors)
  (keyword_variables)
  (keyword_indexes)
] @keyword

; MySQL Sprint 8 keywords
[
  (keyword_rollup)
  (keyword_event)
  (keyword_every)
  (keyword_starts)
  (keyword_ends)
  (keyword_invisible)
  (keyword_visible)
  (keyword_enclosed)
  (keyword_respect)
  (keyword_completion)
  (keyword_preserve)
  (keyword_slave)
  (keyword_json_table)
  (keyword_path)
  (keyword_infile)
] @keyword
