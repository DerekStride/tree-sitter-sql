; ============================================================
; Identifiers, fields & aliases
; ============================================================

(object_reference
  name: (identifier) @type)

(invocation
  (object_reference
    name: (identifier) @function.call))

[
  (keyword_hash)
  (keyword_array)
] @function.call

(relation
  alias: (identifier) @variable)

(field
  name: (identifier) @field)

(term
  alias: (identifier) @variable)

((term
   value: (cast
    name: (keyword_cast) @function.call
    parameter: [(literal)]?)))

; ============================================================
; Literals
; ============================================================

(literal) @string
(comment) @comment @spell
(marginalia) @comment

((literal) @number
   (#match? @number "^[-+]?%d+$"))

((literal) @float
  (#match? @float "^[-+]?%d*\.%d*$"))

(parameter) @parameter

; ============================================================
; Boolean
; ============================================================

[
 (keyword_true)
 (keyword_false)
] @boolean

; ============================================================
; Attributes
; ============================================================

[
 (keyword_asc)
 (keyword_desc)
 (keyword_nulls)
 (keyword_last)
 (keyword_default)
 (keyword_collate)
 (keyword_concurrently)
 (keyword_always)
 (keyword_generated)
 (keyword_preceding)
 (keyword_following)
 (keyword_first)
 (keyword_current_timestamp)
 (keyword_immutable)
 (keyword_atomic)
 (keyword_parallel)
 (keyword_leakproof)
 (keyword_safe)
 (keyword_cost)
 (keyword_strict)
] @attribute

; ============================================================
; Storage class
; ============================================================

[
 (keyword_materialized)
 (keyword_recursive)
 (keyword_temp)
 (keyword_temporary)
 (keyword_unlogged)
 (keyword_external)
 (keyword_volatile)
] @storageclass

; ============================================================
; Conditional
; ============================================================

[
 (keyword_case)
 (keyword_when)
 (keyword_then)
 (keyword_else)
] @conditional

; ============================================================
; Keywords
; ============================================================

; --- DML & query ---
[
  (keyword_select)
  (keyword_from)
  (keyword_where)
  (keyword_index)
  (keyword_join)
  (keyword_primary)
  (keyword_delete)
  (keyword_create)
  (keyword_insert)
  (keyword_merge)
  (keyword_distinct)
  (keyword_replace)
  (keyword_update)
  (keyword_into)
  (keyword_matched)
  (keyword_values)
  (keyword_value)
  (keyword_attribute)
  (keyword_set)
] @keyword

; --- Join type ---
[
  (keyword_left)
  (keyword_right)
  (keyword_outer)
  (keyword_inner)
  (keyword_full)
] @keyword

; --- Query clause ---
[
  (keyword_order)
  (keyword_partition)
  (keyword_group)
  (keyword_with)
  (keyword_without)
  (keyword_as)
  (keyword_having)
  (keyword_limit)
  (keyword_offset)
] @keyword

; --- DDL object ---
[
  (keyword_table)
  (keyword_tables)
  (keyword_key)
  (keyword_references)
  (keyword_foreign)
  (keyword_constraint)
  (keyword_force)
  (keyword_include)
  (keyword_for)
  (keyword_if)
  (keyword_exists)
  (keyword_column)
  (keyword_cross)
  (keyword_lateral)
  (keyword_natural)
  (keyword_alter)
  (keyword_drop)
  (keyword_add)
  (keyword_view)
  (keyword_end)
  (keyword_is)
  (keyword_using)
  (keyword_between)
  (keyword_window)
  (keyword_no)
  (keyword_data)
  (keyword_type)
  (keyword_rename)
  (keyword_refresh)
  (keyword_to)
  (keyword_schema)
  (keyword_owner)
  (keyword_authorization)
] @keyword

; --- Query modifiers ---
[
  (keyword_all)
  (keyword_any)
  (keyword_some)
  (keyword_only)
  (keyword_like)
  (keyword_rlike)
  (keyword_similar)
  (keyword_over)
  (keyword_change)
  (keyword_modify)
  (keyword_after)
  (keyword_before)
] @keyword

; --- Window frame ---
[
  (keyword_range)
  (keyword_rows)
  (keyword_groups)
  (keyword_exclude)
  (keyword_current)
  (keyword_ties)
  (keyword_others)
] @keyword

; --- Table & column properties ---
[
  (keyword_row)
  (keyword_comment)
  (keyword_analyze)
  (keyword_explain)
  (keyword_verbose)
  (keyword_truncate)
  (keyword_cache)
] @keyword

; --- Function / procedure ---
[
  (keyword_language)
  (keyword_called)
  (keyword_filter)
  (keyword_function)
  (keyword_input)
  (keyword_precision)
  (keyword_restricted)
  (keyword_return)
  (keyword_returns)
  (keyword_separator)
  (keyword_setof)
  (keyword_stable)
  (keyword_support)
  (keyword_trigger)
  (keyword_unsafe)
] @keyword

; --- Role / sequence / database ---
[
  (keyword_admin)
  (keyword_connection)
  (keyword_cycle)
  (keyword_database)
  (keyword_encrypted)
  (keyword_increment)
  (keyword_logged)
  (keyword_none)
  (keyword_owned)
  (keyword_password)
  (keyword_reset)
  (keyword_role)
  (keyword_sequence)
  (keyword_start)
  (keyword_restart)
  (keyword_tablespace)
  (keyword_until)
  (keyword_user)
  (keyword_valid)
  (keyword_action)
  (keyword_definer)
  (keyword_invoker)
  (keyword_enable)
  (keyword_disable)
  (keyword_security)
] @keyword

; --- Parameter modes ---
[
  (keyword_out)
  (keyword_inout)
  (keyword_variadic)
  (keyword_ordinality)
] @keyword

; --- Transaction & session ---
[
  (keyword_begin)
  (keyword_commit)
  (keyword_rollback)
  (keyword_transaction)
  (keyword_session)
  (keyword_isolation)
  (keyword_level)
  (keyword_serializable)
  (keyword_repeatable)
  (keyword_read)
  (keyword_write)
  (keyword_committed)
  (keyword_uncommitted)
  (keyword_deferrable)
  (keyword_zone)
  (keyword_immediate)
  (keyword_deferred)
  (keyword_constraints)
  (keyword_snapshot)
  (keyword_characteristics)
] @keyword

; --- Trigger ---
[
  (keyword_each)
  (keyword_instead)
  (keyword_of)
  (keyword_initially)
  (keyword_old)
  (keyword_new)
  (keyword_referencing)
  (keyword_statement)
  (keyword_execute)
] @keyword

; --- Column storage ---
[
  (keyword_procedure)
  (keyword_extended)
  (keyword_main)
  (keyword_plain)
  (keyword_storage)
  (keyword_compression)
] @keyword

; --- Dialect-compat (reachable in base grammar) ---
[
  (keyword_jar)
  (keyword_environment)
  (keyword_handler)
  (keyword_parameter)
  (keyword_percent)
  (keyword_style)
  (keyword_tablesample)
] @keyword


; ============================================================
; Type qualifiers
; ============================================================

[
 (keyword_restrict)
 (keyword_unbounded)
 (keyword_unique)
 (keyword_cascade)
 (keyword_check)
 (keyword_option)
 (keyword_local)
 (keyword_cascaded)
 (keyword_wait)
 (keyword_nowait)
 (keyword_statistics)
 (keyword_maxvalue)
 (keyword_minvalue)
] @type.qualifier

; ============================================================
; Built-in types
; ============================================================

[
  (keyword_int)
  (keyword_null)
  (keyword_boolean)
  (keyword_binary)
  (keyword_varbinary)
  (keyword_bit)
  (keyword_smallint)
  (keyword_bigint)
  (keyword_decimal)
  (keyword_float)
  (keyword_double)
  (keyword_numeric)
  (keyword_real)
  (double)
  (keyword_char)
  (keyword_nchar)
  (keyword_varchar)
  (keyword_nvarchar)
  (keyword_varying)
  (keyword_string)
  (keyword_json)
  (keyword_xml)
  (keyword_enum)
  (keyword_date)
  (keyword_time)
  (keyword_timestamp)
  (keyword_interval)
] @type.builtin

; ============================================================
; Keyword operators
; ============================================================

[
  (keyword_in)
  (keyword_and)
  (keyword_or)
  (keyword_not)
  (keyword_by)
  (keyword_on)
  (keyword_union)
  (keyword_except)
  (keyword_intersect)
] @keyword.operator

; ============================================================
; Operators
; ============================================================

[
  "+"
  "-"
  "*"
  "/"
  "%"
  "^"
  "="
  "<"
  "<="
  "!="
  ">="
  ">"
  "<>"
  (op_other)
  (op_unary_other)
] @operator

; ============================================================
; Punctuation
; ============================================================

[
  "("
  ")"
] @punctuation.bracket

[
  ";"
  ","
  "."
] @punctuation.delimiter
