; Structure queries for T-SQL code navigation
; Captures procedures, functions, and tables for code-navigator

; CREATE PROCEDURE definitions
(create_procedure
  (object_reference) @name) @definition.procedure

; CREATE FUNCTION definitions  
(create_function
  (object_reference) @name) @definition.function

; CREATE TABLE statements
(create_table
  (object_reference) @name) @definition.table

; DECLARE @variable TABLE definitions
(var_declaration
  (parameter) @name
  (keyword_table)) @definition.table_variable
