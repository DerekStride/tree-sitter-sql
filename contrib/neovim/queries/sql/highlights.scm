; extends

(interbase_procedure
  name: (object_reference name: (identifier) @function))
(interbase_trigger
  name: (object_reference name: (identifier) @function))
(interbase_procedure
  (function_arguments (function_argument (identifier) @variable.parameter)))
(interbase_declaration name: (identifier) @variable)
(interbase_assignment left: (field name: (identifier) @variable))
(interbase_into (identifier) @variable)
(interbase_execute_procedure
  name: (object_reference name: (identifier) @function.call))

(interbase_if (keyword_if) @keyword.conditional)
(interbase_for (keyword_for) @keyword.repeat)
(interbase_while (keyword_while) @keyword.repeat)

[
  (keyword_variable)
  (keyword_suspend)
  (keyword_exit)
  (keyword_returning_values)
  (keyword_exception)
  (keyword_sqlcode)
  (keyword_gdscode)
  (keyword_sub_type)
  (keyword_segment)
  (keyword_size)
  (keyword_active)
  (keyword_inactive)
  (keyword_position)
  (keyword_generator)
  (keyword_term)
] @keyword

(keyword_blob) @type.builtin

(program "^" @punctuation.delimiter)
(interbase_set_term ["^" ";"] @punctuation.delimiter)
(interbase_generator (literal) @number)
(interbase_trigger (literal) @number)
(interbase_handler (literal) @number)
(interbase_blob (literal) @number)
