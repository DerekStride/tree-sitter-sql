import keyword_rules from "./grammar/keywords.js";
import type_rules from "./grammar/types.js";
import column_list_rules from "./grammar/column-lists.js";
import expression_rules from "./grammar/expressions.js";
import transaction_rules from "./grammar/transactions.js";
import statement_rules from "./grammar/statements/index.js";

export default grammar({
  name: 'sql',

  extras: $ => [
    /\s\n/,
    /\s/,
    $.comment,
    $.marginalia,
    $.jinja_statement,
    $.jinja_comment,
  ],


  externals: $ => [
    $._dollar_quoted_string_start_tag,
    $._dollar_quoted_string_end_tag,
    $._dollar_quoted_string,
  ],

  conflicts: $ => [
    [$.object_reference, $._qualified_field],
    [$.field, $._qualified_field],
    [$._column, $._qualified_field],
    [$.object_reference],
    [$.object_reference, $.relation],
    [$.between_expression, $.binary_expression],
    [$.time],
    [$.timestamp],
  ],

  precedences: $ => [
    [
      'binary_is',
      'unary_not',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'unary_other',
      'binary_other',
      'binary_in',
      'binary_compare',
      'binary_relation',
      'pattern_matching',
      'between',
      'clause_connective',
      'clause_disjunctive',
    ],
  ],

  word: $ => $._identifier,

  rules: {
    program: $ => seq(
      // any number of transactions, statements, blocks, or jinja expressions with a terminating ;
      repeat(
        choice(
          seq(
            choice(
              $.transaction,
              $.statement,
              $.block,
            ),
            ';',
          ),
          $.jinja_expression,
        ),
      ),
      // optionally, a single statement without a terminating ;
      optional(
        $.statement,
      ),
    ),

    comment: _ => /--.*/,
    // https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment
    marginalia: _ => /\/\*[^*]*\*+(?:[^/*][^*]*\*+)*\//,

    ...keyword_rules,
    ...type_rules,
    ...column_list_rules,
    ...expression_rules,
    ...transaction_rules,
    ...statement_rules,

    _function_return: $ => seq(
      $.keyword_return,
      $._expression,
    ),

    function_declaration: $ => seq(
      $.identifier,
      $._type,
      optional(
        seq(
          ':=',
          choice(
            wrapped_in_parenthesis($.statement),
            // TODO are there more possibilities here? We can't use `_expression` since
            // that includes subqueries
            $.literal,
          ),
        ),
      ),
      ';',
    ),

    _function_body_statement: $ => choice(
      $.statement,
      $._function_return,
    ),

    _tsql_function_body_statement: $ => seq(
      optional($.keyword_as),
      $.keyword_begin,
      optional($.var_declarations),
      choice(
        repeat($.statement),
        repeat1(seq(
          $.keyword_begin,
          repeat($.statement),
          $.keyword_end,
        )),
      ),
      $._function_return,
      $.keyword_end,
    ),

    function_body: $ => choice(
      seq(
        $._function_return,
        ';'
      ),
      seq(
        $.keyword_begin,
        $.keyword_atomic,
        repeat1(
          seq(
            $._function_body_statement,
            ';',
          ),
        ),
        $.keyword_end,
      ),
      seq(
        $.keyword_as,
        alias($._dollar_quoted_string_start_tag, $.dollar_quote),
        optional(
          seq(
            $.keyword_declare,
            repeat1(
              $.function_declaration,
            ),
          ),
        ),
        $.keyword_begin,
        repeat1(
          seq(
            $._function_body_statement,
            ';',
          ),
        ),
        $.keyword_end,
        optional(';'),
        alias($._dollar_quoted_string_end_tag, $.dollar_quote),
      ),
      seq(
        $.keyword_as,
        alias(
          choice(
            $._single_quote_string,
            $._double_quote_string,
          ),
          $.literal
        ),
      ),
      seq(
        $.keyword_as,
        alias($._dollar_quoted_string_start_tag, $.dollar_quote),
        $._function_body_statement,
        optional(';'),
        alias($._dollar_quoted_string_end_tag, $.dollar_quote),
      ),
      $._tsql_function_body_statement,
    ),

    function_language: $ => seq(
      $.keyword_language,
      // TODO Maybe we should do different version of function_body_statement in
      // regard to the defined language to match either sql, plsql or
      // plpgsql. Currently the function_body_statement support only sql.  And
      // maybe for other language the function_body should be a string.
      $.identifier
    ),

    function_volatility: $ => choice(
      $.keyword_immutable,
      $.keyword_stable,
      $.keyword_volatile,
    ),

    function_leakproof: $ => seq(
      optional($.keyword_not),
      $.keyword_leakproof,
    ),

    function_security: $ => seq(
      optional($.keyword_external),
      $.keyword_security,
      choice($.keyword_invoker, $.keyword_definer),
    ),

    function_safety: $ => seq(
      $.keyword_parallel,
      choice(
        $.keyword_safe,
        $.keyword_unsafe,
        $.keyword_restricted,
      ),
    ),

    function_strictness: $ => choice(
      seq(
        choice(
          $.keyword_called,
          seq(
            $.keyword_returns,
            $.keyword_null,
          ),
        ),
        $.keyword_on,
        $.keyword_null,
        $.keyword_input,
      ),
      $.keyword_strict,
    ),

    function_cost: $ => seq(
      $.keyword_cost,
      $._natural_number,
    ),

    function_rows: $ => seq(
      $.keyword_rows,
      $._natural_number,
    ),

    function_support: $ => seq(
      $.keyword_support,
      alias($._literal_string, $.literal),
    ),

    _operator_class: $ => seq(
      field("opclass", $.identifier),
      optional(
        field("opclass_parameters", wrapped_in_parenthesis(comma_list($.term)))
      )
    ),

    composite_field: $ => seq(
      wrapped_in_parenthesis(
        comma_list(
          alias($._index_field, $.field),
          true,
        ),
      ),
      optional($.keyword_hash),
    ),

    _index_field: $ => seq(
      choice(
        field("expression", wrapped_in_parenthesis($._expression)),
        field("function", $.invocation),
        field("column", $._column),
      ),
      optional(seq($.keyword_collate, $.identifier)),
      optional($._operator_class),
      optional(choice($.keyword_hash, $.direction)),
      optional(
        seq(
          $.keyword_nulls,
          choice(
            $.keyword_first,
            $.keyword_last
          )
        )
      ),
    ),

    index_fields: $ => wrapped_in_parenthesis(
      comma_list(
        choice(
          $.composite_field,
          alias($._index_field, $.field),
        ),
        true,
      ),
    ),
    tablespace: $ => seq($.keyword_tablespace, $.identifier),
    tablet_split: $ => seq($.keyword_split, $.keyword_into, $._natural_number, $.keyword_tablets),

    covering_columns: $ => seq(
      $.keyword_include,
      $.index_fields,
    ),

    create_index: $ => seq(
      $.keyword_create,
      optional($.keyword_unique),
      $.keyword_index,
      optional($.keyword_concurrently),
      optional(
        seq(
          optional($._if_not_exists),
          field("column", $._column),
        ),
      ),
      $.keyword_on,
      optional($.keyword_only),
      seq(
        $.object_reference,
        optional(
          seq(
            $.keyword_using,
            choice(
              $.keyword_btree,
              $.keyword_hash,
              $.keyword_gist,
              $.keyword_spgist,
              $.keyword_gin,
              $.keyword_brin
            ),
          ),
        ),
        $.index_fields
      ),
      optional($.covering_columns),
      optional($.tablespace),
      optional($.tablet_split),
      optional(
        $.where,
      ),
    ),

    create_schema: $ => prec.left(seq(
      $.keyword_create,
      $.keyword_schema,
      choice(
        seq(
          optional($._if_not_exists),
          $.identifier,
          optional(seq($.keyword_authorization, $.identifier)),
        ),
        seq(
          $.keyword_authorization,
          $.identifier,
        ),
      ),
    )),

    _with_settings: $ => seq(
          field('name', $.identifier),
          optional('='),
          field('value', choice($.identifier, alias($._single_quote_string, $.literal))),
    ),

    create_database: $ => prec.left(seq(
      $.keyword_create,
      $.keyword_database,
      optional($._if_not_exists),
      $.identifier,
      optional($.keyword_with),
      repeat(
        $._with_settings
      ),
    )),

    create_role: $ => prec.left(seq(
      $.keyword_create,
      choice(
        $.keyword_user,
        $.keyword_role,
        $.keyword_group,
      ),
      $.identifier,
      optional($.keyword_with),
      repeat(
        choice(
          $._user_access_role_config,
          $._role_options,
        ),
      ),
    )),

    _role_options: $ => choice(
      field("option", $.identifier),
      seq(
        $.keyword_valid,
        $.keyword_until,
        field("valid_until", alias($._literal_string, $.literal))
      ),
      seq(
        $.keyword_connection,
        $.keyword_limit,
        field("connection_limit", alias($._integer, $.literal))
      ),
      seq(
        optional($.keyword_encrypted),
        $.keyword_password,
        choice(
          field("password", alias($._literal_string, $.literal)),
          $.keyword_null,
        ),
      ),
    ),

    _user_access_role_config: $ => seq(
      choice(
        seq(optional($.keyword_in), $.keyword_role),
        seq($.keyword_in, $.keyword_group),
        $.keyword_admin,
        $.keyword_user,
      ),
      comma_list($.identifier, true),
    ),

    create_sequence: $ => seq(
      $.keyword_create,
      optional(
        choice(
          choice($.keyword_temporary, $.keyword_temp),
          $.keyword_unlogged,
        )
      ),
      $.keyword_sequence,
      optional($._if_not_exists),
      $.object_reference,
      repeat(
        choice(
          seq($.keyword_as, $._type),
          seq($.keyword_increment, optional($.keyword_by), field("increment", alias($._integer, $.literal))),
          seq($.keyword_minvalue, choice($.literal, seq($.keyword_no, $.keyword_minvalue))),
          seq($.keyword_no, $.keyword_minvalue),
          seq($.keyword_maxvalue, choice($.literal, seq($.keyword_no, $.keyword_maxvalue))),
          seq($.keyword_no, $.keyword_maxvalue),
          seq($.keyword_start, optional($.keyword_with), field("start", alias($._integer, $.literal))),
          seq($.keyword_cache, field("cache", alias($._integer, $.literal))),
          seq(optional($.keyword_no), $.keyword_cycle),
          seq($.keyword_owned, $.keyword_by, choice($.keyword_none, $.object_reference)),
        )
      ),
    ),

    create_extension: $ => prec.left(seq(
      $.keyword_create,
      $.keyword_extension,
      optional($._if_not_exists),
      $.identifier,
      optional($.keyword_with),
      optional(seq($.keyword_schema, $.identifier)),
      optional(seq($.keyword_version, choice($.identifier, alias($._literal_string, $.literal)))),
      optional($.keyword_cascade),
    )),

    create_trigger: $ => seq(
      $.keyword_create,
      optional($._or_replace),
      // mariadb
      optional(seq($.keyword_definer, '=', $.identifier)),
      optional($.keyword_constraint),
      // sqlite
      optional($._temporary),
      $.keyword_trigger,
      // sqlite/mariadb
      optional($._if_not_exists),
      $.object_reference,
      choice(
        $.keyword_before,
        $.keyword_after,
        seq($.keyword_instead, $.keyword_of),
      ),
      $._create_trigger_event,
      repeat(seq($.keyword_or, $._create_trigger_event)),
      $.keyword_on,
      $.object_reference,
      repeat(
        choice(
          seq($.keyword_from, $.object_reference),
          choice(
            seq($.keyword_not, $.keyword_deferrable),
            $.keyword_deferrable,
            seq($.keyword_initially, $.keyword_immediate),
            seq($.keyword_initially, $.keyword_deferred),
          ),
          seq($.keyword_referencing, choice($.keyword_old, $.keyword_new), $.keyword_table, optional($.keyword_as), $.identifier),
          seq(
            $.keyword_for,
            optional($.keyword_each),
            choice($.keyword_row, $.keyword_statement),
            // mariadb
            optional(seq(choice($.keyword_follows, $.keyword_precedes), $.identifier)),
          ),
          seq($.keyword_when, wrapped_in_parenthesis($._expression)),
        ),
      ),
      $.keyword_execute,
      choice($.keyword_function, $.keyword_procedure),
      $.object_reference,
      paren_list(field('parameter', $.term)),
    ),

    _create_trigger_event: $ => choice(
      $.keyword_insert,
      seq(
        $.keyword_update,
        optional(
          seq(
            $.keyword_of,
            comma_list($.identifier, true),
          ),
        ),
      ),
      $.keyword_delete,
      $.keyword_truncate,
    ),

    create_type: $ => prec.left(seq(
      $.keyword_create,
      $.keyword_type,
      $.object_reference,
      optional(
        seq(
          choice(
            seq(
              $.keyword_as,
              $.column_definitions,
              optional(seq($.keyword_collate, $.identifier))
            ),
            seq(
              $.keyword_as,
              $.keyword_enum,
              $.enum_elements,
            ),
            seq(
              optional(
                seq(
                  $.keyword_as,
                  $.keyword_range,
                )
              ),
              paren_list(
                $._with_settings
              ),
            ),
          ),
        ),
      ),
    )),

    enum_elements: $ => seq(
      paren_list(field("enum_element", alias($._literal_string, $.literal))),
    ),

    _alter_statement: $ => seq(
      choice(
        $.alter_table,
        $.alter_view,
        $.alter_schema,
        $.alter_type,
        $.alter_index,
        $.alter_database,
        $.alter_role,
        $.alter_sequence,
        $.alter_policy,
      ),
    ),

    _rename_statement: $ => seq(
      $.keyword_rename,
      choice(
        $.keyword_table,
        $.keyword_tables,
      ),
      optional($._if_exists),
      $.object_reference,
      optional(
        choice(
          $.keyword_nowait,
          seq(
            $.keyword_wait,
            field('timeout', alias($._natural_number, $.literal))
          )
        )
      ),
      $.keyword_to,
      $.object_reference,
      repeat(
        seq(
          ',',
          $._rename_table_names,
        )
      ),
    ),

    _rename_table_names: $ => seq(
      $.object_reference,
      $.keyword_to,
      $.object_reference,
    ),

    alter_table: $ => seq(
      $.keyword_alter,
      $.keyword_table,
      optional($._if_exists),
      optional($.keyword_only),
      $.object_reference,
      choice(
        seq(
          $._alter_specifications,
          repeat(
            seq(
              ",",
              $._alter_specifications
            )
          )
        ),
        seq(
          choice(
            $.keyword_enable,
            $.keyword_disable,
            seq(optional($.keyword_no), $.keyword_force),
          ),
          $.keyword_row,
          $.keyword_level,
          $.keyword_security,
        ),
      ),
    ),

    _alter_specifications: $ => choice(
      $.add_column,
      $.add_constraint,
      $.drop_constraint,
      $.alter_column,
      $.modify_column,
      $.change_column,
      $.drop_column,
      $.rename_object,
      $.rename_column,
      $.set_schema,
      $.change_ownership,
    ),

    // TODO: optional `keyword_add` is necessary to allow for chained alter statements in t-sql
    // maybe needs refactoring
    add_column: $ => seq(
      optional($.keyword_add),
      optional(
        $.keyword_column,
      ),
      optional($._if_not_exists),
      $.column_definition,
      optional($.column_position),
    ),

    add_constraint: $ => seq(
      $.keyword_add,
      optional($.keyword_constraint),
      $.identifier,
      $.constraint,
    ),

    drop_constraint: $ => seq(
      $.keyword_drop,
      $.keyword_constraint,
      optional($._if_exists),
      $.identifier,
      optional($._drop_behavior),
    ),

    alter_column: $ => seq(
      // TODO constraint management
      $.keyword_alter,
      optional(
        $.keyword_column,
      ),
      field('name', $.identifier),
      choice(
        seq(
          choice(
            $.keyword_set,
            $.keyword_drop,
          ),
          $.keyword_not,
          $.keyword_null,
        ),
        seq(
          optional(
            seq(
              $.keyword_set,
              $.keyword_data,
            ),
          ),
          $.keyword_type,
          field('type', $._type),
        ),
        seq(
          $.keyword_set,
          choice(
            seq(
              $.keyword_statistics,
              field('statistics', $._integer)
            ),
            seq(
              $.keyword_storage,
              choice(
                $.keyword_plain,
                $.keyword_external,
                $.keyword_extended,
                $.keyword_main,
                $.keyword_default,
              ),
            ),
            seq(
              $.keyword_compression,
              field('compression_method', $._identifier)
            ),
            seq(
              paren_list($._key_value_pair, true),
            ),
            seq(
              $.keyword_default,
              $._expression,
            ),
          )
        ),
        seq(
          $.keyword_drop,
          $.keyword_default,
        ),
      ),
    ),

    modify_column: $ => seq(
      $.keyword_modify,
      optional(
        $.keyword_column,
      ),
      optional($._if_exists),
      $.column_definition,
      optional($.column_position),
    ),

    change_column: $ => seq(
      $.keyword_change,
      optional(
        $.keyword_column,
      ),
      optional($._if_exists),
      field('old_name', $.identifier),
      $.column_definition,
      optional($.column_position),
    ),

    column_position: $ => choice(
      $.keyword_first,
      seq(
        $.keyword_after,
        field('col_name', $.identifier),
      ),
    ),

    drop_column: $ => seq(
      $.keyword_drop,
      optional(
        $.keyword_column,
      ),
      optional($._if_exists),
      field('name', $.identifier),
    ),

    rename_column: $ => seq(
      $.keyword_rename,
      optional(
        $.keyword_column,
      ),
      field('old_name', $.identifier),
      $.keyword_to,
      field('new_name', $.identifier),
    ),

    alter_view: $ => seq(
      $.keyword_alter,
      $.keyword_view,
      optional($._if_exists),
      $.object_reference,
      choice(
        // TODO Postgres allows a single "alter column" to set or drop default
        $.rename_object,
        $.rename_column,
        $.set_schema,
        $.change_ownership,
      ),
    ),

    alter_schema: $ => seq(
      $.keyword_alter,
      $.keyword_schema,
      $.identifier,
      choice(
        $.keyword_rename,
        $.keyword_owner,
      ),
      $.keyword_to,
      $.identifier,
    ),

    alter_database: $ => seq(
      $.keyword_alter,
      $.keyword_database,
      $.identifier,
      optional($.keyword_with),
      choice(
        seq($.rename_object),
        seq($.change_ownership),
        seq(
          $.keyword_reset,
          choice(
            $.keyword_all,
            field("configuration_parameter", $.identifier)
          ),
        ),
        seq(
          $.keyword_set,
          choice(
            seq($.keyword_tablespace, $.identifier),
              $.set_configuration,
            ),
          ),
        ),
      ),

    alter_role: $ => prec.left(seq(
      $.keyword_alter,
      choice(
        $.keyword_role,
        $.keyword_group,
        $.keyword_user,
      ),
      choice($.identifier, $.keyword_all),
      choice(
        $.rename_object,
        seq(optional($.keyword_with),repeat($._role_options)),
        seq(
          optional(seq($.keyword_in, $.keyword_database, $.identifier)),
          choice(
            seq(
              $.keyword_set,
              $.set_configuration,
            ),
            seq(
              $.keyword_reset,
              choice(
                $.keyword_all,
                field("option", $.identifier),
              )),
          ),
        )
      ),
    )),

    set_configuration: $ => seq(
      field("option", $.identifier),
      choice(
        seq($.keyword_from, $.keyword_current),
        seq(
          choice($.keyword_to, "="),
          choice(
            field("parameter", $.identifier),
            $.literal,
            $.keyword_default
          )
        )
      ),
    ),

    alter_index: $ => seq(
      $.keyword_alter,
      $.keyword_index,
      optional($._if_exists),
      $.identifier,
      choice(
        $.rename_object,
        seq(
          $.keyword_alter,
          optional($.keyword_column),
          alias($._natural_number, $.literal),
          $.keyword_set,
          $.keyword_statistics,
          alias($._natural_number, $.literal),
        ),
        seq($.keyword_reset, paren_list($.identifier)),
        seq(
          $.keyword_set,
          choice(
            seq($.keyword_tablespace, $.identifier),
            paren_list(seq($.identifier, '=', field("value", $.literal)))
          ),
        ),
      ),
    ),

    alter_sequence: $ => seq(
      $.keyword_alter,
      $.keyword_sequence,
      optional($._if_exists),
      $.object_reference,
      choice(
        repeat1(
          choice(
            seq($.keyword_as, $._type),
            seq($.keyword_increment, optional($.keyword_by), $.literal),
            seq($.keyword_minvalue, choice($.literal, seq($.keyword_no, $.keyword_minvalue))),
            seq($.keyword_maxvalue, choice($.literal, seq($.keyword_no, $.keyword_maxvalue))),
            seq($.keyword_start, optional($.keyword_with), field("start", alias($._integer, $.literal))),
            seq($.keyword_restart, optional($.keyword_with), field("restart", alias($._integer, $.literal))),
            seq($.keyword_cache, field("cache", alias($._integer, $.literal))),
            seq(optional($.keyword_no), $.keyword_cycle),
            seq($.keyword_owned, $.keyword_by, choice($.keyword_none, $.object_reference)),
          ),
        ),
        $.rename_object,
        $.change_ownership,
        seq(
          $.keyword_set,
          choice(
            choice($.keyword_logged, $.keyword_unlogged),
            seq($.keyword_schema, $.identifier)
          ),
        ),
      ),
    ),

    // Postgres row level security
    alter_policy: $ => prec.right(
      seq(
        $.keyword_alter,
        $.keyword_policy,
        $.object_reference,
        $.keyword_on,
        $.object_reference,
        choice(
          $.rename_object,
          seq(
            optional(
              seq(
                $.keyword_to,
                choice(
                  $.object_reference,
                  $.keyword_public,
                  $.keyword_current_role,
                  $.keyword_current_user,
                  $.keyword_session_user,
                ),
                repeat(
                  seq(
                    ',',
                    choice(
                      $.object_reference,
                      $.keyword_public,
                      $.keyword_current_role,
                      $.keyword_current_user,
                      $.keyword_session_user,
                    ),
                  ),
                ),
              ),
            ),
            optional(
              seq(
                $.keyword_using,
                $.parenthesized_expression,
              ),
            ),
            optional(
              seq(
                $.keyword_with,
                $.keyword_check,
                $.parenthesized_expression,
              ),
            ),
          ),
        ),
      ),
    ),

    alter_type: $ => seq(
      $.keyword_alter,
      $.keyword_type,
      $.identifier,
      choice(
        $.change_ownership,
        $.set_schema,
        $.rename_object,
        seq(
          $.keyword_rename,
          $.keyword_attribute,
          $.identifier,
          $.keyword_to,
          $.identifier,
          optional($._drop_behavior)
        ),
        seq(
          $.keyword_add,
          $.keyword_value,
          optional($._if_not_exists),
            alias($._single_quote_string,$.literal),
          optional(
            seq(
              choice($.keyword_before, $.keyword_after),
              alias($._single_quote_string,$.literal),
            )
          ),
        ),
        seq(
          $.keyword_rename,
          $.keyword_value,
          alias($._single_quote_string,$.literal),
          $.keyword_to,
          alias($._single_quote_string,$.literal),
        ),
        seq(
          choice(
            seq(
              $.keyword_add,
              $.keyword_attribute,
              $.identifier,
              $._type
            ),
            seq($.keyword_drop,
              $.keyword_attribute,
              optional($._if_exists),
              $.identifier),
            seq(
              $.keyword_alter,
              $.keyword_attribute,
              $.identifier,
              optional(seq($.keyword_set, $.keyword_data)),
              $.keyword_type,
              $._type
            ),
          ),
          optional(seq($.keyword_collate, $.identifier)),
          optional($._drop_behavior)
        )
      ),
    ),

    _drop_behavior: $ => choice(
      $.keyword_cascade,
      $.keyword_restrict,
    ),

    _drop_statement: $ => seq(
      choice(
        $.drop_table,
        $.drop_view,
        $.drop_index,
        $.drop_type,
        $.drop_schema,
        $.drop_database,
        $.drop_role,
        $.drop_sequence,
        $.drop_extension,
        $.drop_function,
      ),
    ),

    drop_table: $ => seq(
      $.keyword_drop,
      $.keyword_table,
      optional($._if_exists),
      $.object_reference,
      optional($._drop_behavior),
    ),

    drop_view: $ => seq(
      $.keyword_drop,
      $.keyword_view,
      optional($._if_exists),
      $.object_reference,
      optional($._drop_behavior),
    ),

    drop_schema: $ => seq(
      $.keyword_drop,
      $.keyword_schema,
      optional($._if_exists),
      $.identifier,
      optional($._drop_behavior)
    ),

    drop_database: $ => prec.left(seq(
      $.keyword_drop,
      $.keyword_database,
      optional($._if_exists),
      $.identifier,
      optional($.keyword_with),
      optional($.keyword_force),
    )),

    drop_role: $ => seq(
      $.keyword_drop,
      choice(
        $.keyword_group,
        $.keyword_role,
        $.keyword_user,
      ),
      optional($._if_exists),
      $.identifier,
    ),

    drop_type: $ => seq(
      $.keyword_drop,
      $.keyword_type,
      optional($._if_exists),
      $.object_reference,
      optional($._drop_behavior),
    ),

    drop_sequence: $ => seq(
      $.keyword_drop,
      $.keyword_sequence,
      optional($._if_exists),
      $.object_reference,
      optional($._drop_behavior),
    ),

    drop_index: $ => seq(
      $.keyword_drop,
      $.keyword_index,
      optional($.keyword_concurrently),
      optional($._if_exists),
      field("name", $.identifier),
      optional($._drop_behavior),
      optional(
        seq(
            $.keyword_on,
            $.object_reference,
        ),
      ),
    ),

    drop_extension: $ => seq(
      $.keyword_drop,
      $.keyword_extension,
      optional($._if_exists),
      comma_list($.identifier, true),
      optional(choice($.keyword_cascade, $.keyword_restrict)),
    ),

    drop_function: $ => seq(
      $.keyword_drop,
      $.keyword_function,
      optional($._if_exists),
      $.object_reference,
      optional($._drop_behavior),
    ),

    rename_object: $ => seq(
      $.keyword_rename,
      $.keyword_to,
      $.object_reference,
    ),

    set_schema: $ => seq(
      $.keyword_set,
      $.keyword_schema,
      field('schema', $.identifier),
    ),

    change_ownership: $ => seq(
      $.keyword_owner,
      $.keyword_to,
      $.identifier,
    ),

    object_id: $ => seq(
      $.keyword_object_id,
      wrapped_in_parenthesis(
        seq(
          alias($._literal_string, $.literal),
          optional(
            seq(
              ',',
              alias($._literal_string, $.literal),
            ),
          ),
        ),
      ),
    ),

    object_reference: $ => choice(
      seq(
        field('database', $.identifier),
        '.',
        field('schema', $.identifier),
        '.',
        field('name', $.identifier),
      ),
      seq(
        field('schema', $.identifier),
        '.',
        field('name', $.identifier),
      ),
      field('name', $.identifier),
      $.jinja_expression,
    ),

    _copy_statement: $ => seq(
      $.keyword_copy,
      $.object_reference,
      $._column_list,
      $.keyword_from,
      choice(
        $.keyword_stdin,
        alias($._literal_string, "filename"),
        seq($.keyword_program, alias($._literal_string, "command")),
      ),
      optional($.keyword_with),
      wrapped_in_parenthesis(
        repeat1(
          choice(
            seq(
              $.keyword_format,
              choice(
                $.keyword_csv,
                $.keyword_binary,
                $.keyword_text,
              ),
            ),
            seq(
              $.keyword_freeze,
              choice(
                $.keyword_true,
                $.keyword_false
              )
            ),
            seq(
              $.keyword_header,
              choice(
                $.keyword_true,
                $.keyword_false,
                $.keyword_match
              ),
            ),
            seq(
              choice(
                $.keyword_delimiter,
                $.keyword_null,
                $.keyword_default,
                $.keyword_escape,
                $.keyword_quote,
                $.keyword_encoding,
              ),
              alias($._literal_string, $.identifier)
            ),
            seq(
              choice(
                $.keyword_force_null,
                $.keyword_force_not_null,
                $.keyword_force_quote,
              ),
              $._column_list
            ),
          ),
        ),
      ),
      optional($.where),
    ),

    _insert_statement: $ => seq(
      $.insert,
      optional($.returning),
    ),

    insert: $ => seq(
      choice(
        $.keyword_insert,
        $.keyword_replace
      ),
      optional(
        choice(
          $.keyword_low_priority,
          $.keyword_delayed,
          $.keyword_high_priority,
        ),
      ),
      optional($.keyword_ignore),
      optional(
        choice(
          $.keyword_into,
          $.keyword_overwrite, // Spark SQL
        ),
      ),
      $.object_reference,
      optional($.table_partition), // Spark SQL
      optional(
        seq(
          $.keyword_as,
          field('alias', $.identifier)
        ),
      ),
      // TODO we need a test for `insert...set`
      choice(
        $._insert_values,
        $._set_values,
      ),
      optional(
        choice(
          $._on_conflict,
          $._on_duplicate_key_update,
        ),
      ),
    ),

    _on_conflict: $ => seq(
      $.keyword_on,
      $.keyword_conflict,
      seq(
        $.keyword_do,
        choice(
          $.keyword_nothing,
          seq(
            $.keyword_update,
            $._set_values,
            optional($.where),
          ),
        ),
      ),
    ),

    _on_duplicate_key_update: $ => seq(
      $.keyword_on,
      $.keyword_duplicate,
      $.keyword_key,
      $.keyword_update,
      $.assignment_list,
    ),

    assignment_list: $ => seq(
      $.assignment,
      repeat(seq(',', $.assignment)),
    ),

    _insert_values: $ => seq(
      optional(alias($._column_list, $.list)),
      choice(
        seq(
          $.keyword_values,
          comma_list($.list, true),
        ),
        $._dml_read,
      ),
    ),

    _set_values: $ => seq(
      $.keyword_set,
      comma_list($.assignment, true),
    ),

    _column_list: $ => paren_list(alias($._column, $.column), true),
    _column: $ => choice(
      $.identifier,
      alias($._literal_string, $.literal),
    ),

    _update_statement: $ => seq(
      $.update,
      optional($.returning),
    ),

    _merge_statement: $=> seq(
      $.keyword_merge,
      $.keyword_into,
      $.object_reference,
      optional($._alias),
      $.keyword_using,
      choice(
        $.subquery,
        $.object_reference
      ),
      optional($._alias),
      $.keyword_on,
      optional_parenthesis(field("predicate", $._expression)),
      repeat1($.when_clause)
    ),

    when_clause: $ => prec.left(seq(
      $.keyword_when,
      optional($.keyword_not),
      $.keyword_matched,
      optional(
        seq(
          $.keyword_and,
          optional_parenthesis(field("predicate", $._expression))
        )
      ),
      $.keyword_then,
      choice(
        $.keyword_delete,
        seq(
          $.keyword_update,
          $._set_values,
        ),
        seq(
          $.keyword_insert,
          $._insert_values
        ),
        optional($.where)
      )
    )),

    _optimize_statement: $ => choice(
      $._compute_stats,
      $._vacuum_table,
      $._optimize_table,
    ),

    // Compute stats for Impala and Hive
    _compute_stats: $ => prec.left(choice(
      // Hive
      seq(
        $.keyword_analyze,
        $.keyword_table,
        $.object_reference,
        optional($._partition_spec),
        $.keyword_compute,
        $.keyword_statistics,
        optional(
          seq(
            $.keyword_for,
            $.keyword_columns
          )
        ),
        optional(
          seq(
            $.keyword_cache,
            $.keyword_metadata
          )
        ),
        optional($.keyword_noscan),
      ),
      // Impala
      seq(
        $.keyword_compute,
        optional(
          $.keyword_incremental,
        ),
        $.keyword_stats,
        $.object_reference,
        optional(
          choice(
            paren_list(repeat1($.field)),
            $._partition_spec,
          )
        )
      ),
    )),

    _optimize_table: $ => choice(
      // Athena/Iceberg
      seq(
        $.keyword_optimize,
        $.object_reference,
        $.keyword_rewrite,
        $.keyword_data,
        $.keyword_using,
        $.keyword_bin_pack,
        optional(
          $.where,
        )
      ),
      // MariaDB Optimize
      seq(
        $.keyword_optimize,
        optional(
          choice(
            $.keyword_local,
            //$.keyword_no_write_to_binlog,
          )
        ),
        $.keyword_table,
        $.object_reference,
        repeat(seq(',', $.object_reference)),
      ),
    ),

    _vacuum_table: $ => prec.left(seq(
      $.keyword_vacuum,
      optional($._vacuum_option),
      $.object_reference,
      optional(
        paren_list($.field)
      ),
    )),

    _vacuum_option: $ => choice(
      seq($.keyword_full, optional(choice($.keyword_true, $.keyword_false))),
      seq($.keyword_parallel, optional(choice($.keyword_true, $.keyword_false))),
      seq($.keyword_analyze, optional(choice($.keyword_true, $.keyword_false))),
      // seq($.keyword_freeze, choice($.keyword_true, $.keyword_false)),
      // seq($.keyword_skip_locked, choice($.keyword_true, $.keyword_false)),
      // seq($.keyword_truncate, choice($.keyword_true, $.keyword_false)),
      // seq($.keyword_disable_page_skipping, choice($.keyword_true, $.keyword_false)),
      // seq($.keyword_process_toast, choice($.keyword_true, $.keyword_false)),
      // seq($.keyword_index_cleanup, choice($.keyword_auto, $.keyword_on, $.keyword_off)),
    ),

    // TODO: this does not account for partitions specs like
    // (partcol1='2022-01-01', hr=11)
    // the second argument is not a $.table_option
    _partition_spec: $ => seq(
      $.keyword_partition,
      paren_list($.table_option, true),
    ),

    update: $ => seq(
      $.keyword_update,
      optional($.keyword_only),
      choice(
        $._mysql_update_statement,
        $._postgres_update_statement,
      ),
    ),

    _mysql_update_statement: $ => prec(0,
      seq(
        comma_list($.relation, true),
        repeat($.join),
        $._set_values,
        optional($.where),
      ),
    ),

    _postgres_update_statement: $ => prec(1,
      seq(
        $.relation,
        $._set_values,
        optional($.from),
      ),
    ),

    storage_location: $ => prec.right(
        seq(
            $.keyword_location,
            field('path', alias($._literal_string, $.literal)),
            optional(
                seq(
                    $.keyword_cached,
                    $.keyword_in,
                    field('pool', alias($._literal_string, $.literal)),
                    optional(
                        choice(
                            $.keyword_uncached,
                            seq(
                                $.keyword_with,
                                $.keyword_replication,
                                '=',
                                field('value', alias($._natural_number, $.literal)),
                            ),
                        ),
                    ),
                )
            )
        ),
    ),

    row_format: $ => seq(
        $.keyword_row,
        $.keyword_format,
        $.keyword_delimited,
        optional(
            seq(
                $.keyword_fields,
                $.keyword_terminated,
                $.keyword_by,
                field('fields_terminated_char', alias($._literal_string, $.literal)),
                optional(
                    seq(
                        $.keyword_escaped,
                        $.keyword_by,
                        field('escaped_char', alias($._literal_string, $.literal)),
                    )
                )
            )
        ),
        optional(
            seq(
                $.keyword_lines,
                $.keyword_terminated,
                $.keyword_by,
                field('row_terminated_char', alias($._literal_string, $.literal)),
            )
        )
    ),

    table_sort: $ => seq(
        $.keyword_sort,
        $.keyword_by,
        paren_list($.identifier, true),
    ),

    table_partition: $ => seq(
      choice(
        // Postgres/MySQL style
        seq(
          $.keyword_partition,
          $.keyword_by,
          choice(
            $.keyword_range,
            $.keyword_hash,
          )
        ),
        // Hive style
        seq(
          $.keyword_partitioned,
          $.keyword_by,
        ),
        // Spark SQL
        $.keyword_partition,
      ),
      choice(
        paren_list($.identifier),// postgres & Impala (CTAS)
        $.column_definitions, // impala/hive external tables
        paren_list($._key_value_pair, true), // Spark SQL
      )
    ),

    _key_value_pair: $ => seq(
      field('key',$.identifier),
      '=',
      field('value', alias($._literal_string, $.literal)),
    ),

    stored_as: $ => seq(
        $.keyword_stored,
        $.keyword_as,
        choice(
            $.keyword_parquet,
            $.keyword_csv,
            $.keyword_sequencefile,
            $.keyword_textfile,
            $.keyword_rcfile,
            $.keyword_orc,
            $.keyword_avro,
            $.keyword_jsonfile,
        ),
    ),

    assignment: $ => seq(
      field('left',
        alias(
          $._qualified_field,
          $.field,
        ),
      ),
      '=',
      field('right', $._expression),
    ),

    table_option: $ => choice(
      seq($.keyword_default, $.keyword_character, $.keyword_set, $.identifier),
      seq($.keyword_collate, $.identifier),
      field('name', $.keyword_default),
      seq(
        field('name', choice($.keyword_engine, $.identifier, $._literal_string)),
        '=',
        field('value', choice($.identifier, $._literal_string)),
      ),
    ),

    column_definitions: $ => seq(
      '(',
      comma_list($.column_definition, true),
      optional($.constraints),
      ')',
    ),

    column_definition: $ => prec.left(seq(
      field('name', $._column),
      field('type', $._type),
      repeat($._column_constraint),
    )),

    _column_comment: $ => seq(
      $.keyword_comment,
      alias($._literal_string, $.literal)
    ),

    _column_constraint: $ => prec.left(choice(
      choice(
        $.keyword_null,
        $._not_null,
      ),
      seq(
        $.keyword_references,
        $.object_reference,
        paren_list($.identifier, true),
        repeat(
          seq(
            $.keyword_on,
            choice($.keyword_delete, $.keyword_update),
            choice(
              seq($.keyword_no, $.keyword_action),
              $.keyword_restrict,
              $.keyword_cascade,
              seq(
                $.keyword_set,
                choice($.keyword_null, $.keyword_default),
                  optional(paren_list($.identifier, true))
              ),
            ),
          ),
        ),
      ),
      $._default_expression,
      $._primary_key,
      $.keyword_auto_increment,
      $.direction,
      $._column_comment,
      $._check_constraint,
      seq(
        optional(seq($.keyword_generated, $.keyword_always)),
        $.keyword_as,
        $._expression,
      ),
      choice(
        $.keyword_stored,
        $.keyword_virtual,
      ),
      $.keyword_unique
    )),

    _check_constraint: $ => seq(
      optional(
        seq(
          $.keyword_constraint,
          $.literal
        )
      ),
      $.keyword_check,
      wrapped_in_parenthesis($.binary_expression)
    ),

    _default_expression: $ => seq(
      $.keyword_default,
      optional_parenthesis($._inner_default_expression),
    ),
    _inner_default_expression: $ => choice(
        $.literal,
        $.list,
        $.cast,
        $.binary_expression,
        $.unary_expression,
        $.array,
        $.invocation,
        $.keyword_current_timestamp,
        alias($.implicit_cast, $.cast),
    ),

    constraints: $ => seq(
      ',',
      $.constraint,
      repeat(
        seq(',', $.constraint),
      ),
    ),

    constraint: $ => choice(
      $._constraint_literal,
      $._key_constraint,
      $._primary_key_constraint,
      $._check_constraint
    ),

    _constraint_literal: $ => seq(
      $.keyword_constraint,
      field('name', $.identifier),
      choice(
        seq(
          $._primary_key,
          $.ordered_columns,
        ),
        seq(
          $._check_constraint
        )
      )
    ),

    _primary_key_constraint: $ => seq(
      $._primary_key,
      $.ordered_columns,
    ),

    _key_constraint: $ => seq(
      choice(
        seq(
          $.keyword_unique,
          optional(
            choice(
              $.keyword_index,
              $.keyword_key,
              seq($.keyword_nulls, optional($.keyword_not), $.keyword_distinct),
            ),
          ),
        ),
        seq(optional($.keyword_foreign), $.keyword_key, optional($._if_not_exists)),
        $.keyword_index,
      ),
      optional(field('name', $.identifier)),
      $.ordered_columns,
      optional(
        seq(
          $.keyword_references,
          $.object_reference,
          paren_list($.identifier, true),
          repeat(
            seq(
              $.keyword_on,
              choice($.keyword_delete, $.keyword_update),
              choice(
                seq($.keyword_no, $.keyword_action),
                $.keyword_restrict,
                $.keyword_cascade,
                seq(
                  $.keyword_set,
                  choice($.keyword_null, $.keyword_default),
                    optional(paren_list($.identifier, true))
                ),
              ),
            ),
          ),
        ),
      ),
    ),

    ordered_columns: $ => paren_list(alias($.ordered_column, $.column), true),

    ordered_column: $ => seq(
      field('name', $._column),
      optional($.direction),
    ),

    all_fields: $ => seq(
      optional(
        seq(
          $.object_reference,
          '.',
        ),
      ),
      '*',
    ),


    parameter: $ => /\?|(\$[0-9]+)/,

    case: $ => seq(
      $.keyword_case,
      choice(
        // simplified CASE x WHEN
        seq(
          $._expression,
          $.keyword_when,
          $._expression,
          $.keyword_then,
          $._expression,
          repeat(
            seq(
              $.keyword_when,
              $._expression,
              $.keyword_then,
              $._expression,
            )
          ),
        ),
        // standard CASE WHEN x, where x must be a predicate
        seq(
          $.keyword_when,
          $._expression,
          $.keyword_then,
          $._expression,
          repeat(
            seq(
              $.keyword_when,
              $._expression,
              $.keyword_then,
              $._expression,
            )
          ),
        ),
      ),
      optional(
        seq(
          $.keyword_else,
          $._expression,
        )
      ),
      $.keyword_end,
    ),

    field: $ => field('name', $.identifier),

    _qualified_field: $ => seq(
      optional(
        seq(
          optional_parenthesis($.object_reference),
          '.',
        ),
      ),
      field('name', $.identifier),
    ),

    implicit_cast: $ => seq(
      $._expression,
      '::',
      $._type,
    ),

    // Postgres syntax for intervals
    interval: $ => seq(
        $.keyword_interval,
        $._literal_string,
    ),

    cast: $ => seq(
      field('name', $.keyword_cast),
      wrapped_in_parenthesis(
        seq(
          field('parameter', $._expression),
          $.keyword_as,
          $._type,
        ),
      ),
    ),

    filter_expression : $ => seq(
      $.keyword_filter,
      wrapped_in_parenthesis($.where),
    ),

    invocation: $ => prec(1,
      seq(
        $.object_reference,
        choice(
          // default invocation
          paren_list(
            seq(
              optional($.keyword_distinct),
              field(
                'parameter',
                $.term,
              ),
              optional($.order_by)
            )
          ),
          // https://dev.mysql.com/doc/refman/8.4/en/date-and-time-functions.html#function_extract
          paren_list(
            seq(
              field(
                'unit',
                $.object_reference,
              ),
              $.keyword_from,
              $.term
            )
          ),
          // _aggregate_function, e.g. group_concat
          wrapped_in_parenthesis(
            seq(
              optional($.keyword_distinct),
              field('parameter', $.term),
              optional($.order_by),
              optional(seq(
                choice($.keyword_separator, ','),
                alias($._literal_string, $.literal)
              )),
              optional($.limit),
            ),
          ),
        ),
        optional(
          $.filter_expression
        )
      ),
    ),

    exists: $ => seq(
      $.keyword_exists,
      $.subquery,
    ),

    partition_by: $ => seq(
        $.keyword_partition,
        $.keyword_by,
        comma_list($._expression, true),
    ),

    frame_definition: $ => seq(
        choice(
          seq(
            $.keyword_unbounded,
            $.keyword_preceding,
          ),
          seq(
              field("start",
                choice(
                  $.identifier,
                  $.binary_expression,
                  alias($._literal_string, $.literal),
                  alias($._integer, $.literal)
                )
              ),
              $.keyword_preceding,
          ),
          $._current_row,
          seq(
              field("end",
                choice(
                  $.identifier,
                  $.binary_expression,
                  alias($._literal_string, $.literal),
                  alias($._integer, $.literal)
                )
              ),
              $.keyword_following,
          ),
          seq(
            $.keyword_unbounded,
            $.keyword_following,
          ),
        ),
    ),

    window_frame: $ => seq(
        choice(
            $.keyword_range,
            $.keyword_rows,
            $.keyword_groups,
        ),

        choice(
            seq(
                $.keyword_between,
                $.frame_definition,
                optional(
                  seq(
                    $.keyword_and,
                    $.frame_definition,
                  )
                )
            ),
            seq(
                $.frame_definition,
            )
        ),
        optional(
            choice(
                $._exclude_current_row,
                $._exclude_group,
                $._exclude_ties,
                $._exclude_no_others,
            ),
        ),
    ),

    window_clause: $ => seq(
        $.keyword_window,
        $.identifier,
        $.keyword_as,
        $.window_specification,
    ),

    window_specification: $ => wrapped_in_parenthesis(
      seq(
        optional($.partition_by),
        optional($.order_by),
        optional($.window_frame),
      ),
    ),

    window_function: $ => seq(
        $.invocation,
        $.keyword_over,
        choice(
            $.identifier,
            $.window_specification,
        ),
    ),

    _alias: $ => seq(
      optional($.keyword_as),
      field('alias', $.identifier),
    ),

    from: $ => seq(
      $.keyword_from,
      optional(
        $.keyword_only,
      ),
      comma_list($.relation, true),
      optional($.index_hint),
      repeat(
        choice(
          $.join,
          $.cross_join,
          $.lateral_join,
          $.lateral_cross_join,
        ),
      ),
      optional($.where),
      optional($.group_by),
      optional($.having),
      optional($.window_clause),
      optional($.order_by),
      optional($.limit),
    ),

    relation: $ => prec.right(
      seq(
        choice(
          $.subquery,
          $.invocation,
          $.object_reference,
          $.jinja_expression,
          wrapped_in_parenthesis($.values),
        ),
        optional(
          seq(
            $._alias,
            optional(alias($._column_list, $.list)),
          ),
        ),
      ),
    ),

    values: $ => seq(
      $.keyword_values,
      $.list,
      optional(
          repeat(
          seq(
            ',',
            $.list,
          ),
        ),
      ),
    ),

    index_hint: $ => seq(
      choice(
        $.keyword_force,
        $.keyword_use,
        $.keyword_ignore,
      ),
      $.keyword_index,
      optional(
        seq(
          $.keyword_for,
          $.keyword_join,
        ),
      ),
      wrapped_in_parenthesis(
        field('index_name', $.identifier),
      ),
    ),

    join: $ => seq(
      optional($.keyword_natural),
      optional(
        choice(
          $.keyword_left,
          seq($.keyword_full, $.keyword_outer),
          seq($.keyword_left, $.keyword_outer),
          $.keyword_right,
          seq($.keyword_right, $.keyword_outer),
          $.keyword_inner,
          $.keyword_full,
        ),
      ),
      $.keyword_join,
      $.relation,
      optional($.index_hint),
      optional($.join),
      choice(
        seq(
          $.keyword_on,
          field("predicate", $._expression),
        ),
        seq(
          $.keyword_using,
          alias($._column_list, $.list),
        )
      )
    ),

    cross_join: $ => prec.right(
      seq(
        $.keyword_cross,
        $.keyword_join,
        $.relation,
        optional(
          seq(
            $.keyword_with,
            $.keyword_ordinality,
            optional(
              seq(
                $.keyword_as,
                field("alias", $.identifier),
                paren_list($.identifier),
              )
            )
          )
        )
      )
    ),

    lateral_join: $ => seq(
      optional(
        choice(
          // lateral joins cannot be right!
          $.keyword_left,
          seq($.keyword_left, $.keyword_outer),
          $.keyword_inner,
        ),
      ),
      $.keyword_join,
      $.keyword_lateral,
      choice(
        $.invocation,
        $.subquery,
      ),
      optional(
        choice(
          seq(
            $.keyword_as,
            field('alias', $.identifier),
          ),
          field('alias', $.identifier),
        ),
      ),
      $.keyword_on,
      choice(
        $._expression,
        $.keyword_true,
        $.keyword_false,
      ),
    ),

    lateral_cross_join: $ => seq(
      $.keyword_cross,
      $.keyword_join,
      $.keyword_lateral,
      choice(
        $.invocation,
        $.subquery,
      ),
      optional(
        choice(
          seq(
            $.keyword_as,
            field('alias', $.identifier),
          ),
          field('alias', $.identifier),
        ),
      ),
    ),

    where: $ => seq(
      $.keyword_where,
      field("predicate", $._expression),
    ),

    group_by: $ => seq(
      $.keyword_group,
      $.keyword_by,
      comma_list($._expression, true),
    ),

    having: $ => seq(
      $.keyword_having,
      $._expression,
    ),

    order_by: $ => prec.right(seq(
      $.keyword_order,
      $.keyword_by,
      comma_list($.order_target, true),
    )),

    order_target: $ => seq(
      $._expression,
      optional(
        seq(
          choice(
            $.direction,
            seq(
              $.keyword_using,
              choice('<', '>', '<=', '>='),
            ),
          ),
          optional(
            seq(
              $.keyword_nulls,
              choice(
                $.keyword_first,
                $.keyword_last,
              ),
            ),
          ),
        ),
      ),
    ),

    limit: $ => seq(
      $.keyword_limit,
      $.literal,
      optional($.offset),
    ),

    offset: $ => seq(
      $.keyword_offset,
      $.literal,
    ),

    returning: $ => seq(
      $.keyword_returning,
      $.select_expression,
    ),

    _expression: $ => prec(1,
      choice(
        $.literal,
        alias(
          $._qualified_field,
          $.field,
        ),
        $.parameter,
        $.list,
        $.case,
        $.window_function,
        $.subquery,
        $.cast,
        alias($.implicit_cast, $.cast),
        $.exists,
        $.invocation,
        $.binary_expression,
        $.subscript,
        $.unary_expression,
        $.array,
        $.interval,
        $.between_expression,
        $.parenthesized_expression,
        $.object_id,
        $.jinja_expression,
      )
    ),

    parenthesized_expression: $ => prec(2,
      wrapped_in_parenthesis($._expression)
    ),

    subscript: $ => prec.left('binary_is',
      seq(
        field('expression', $._expression),
        "[",
        choice(
          field('subscript', $._expression),
          seq(
            field('lower', $._expression),
            ':',
            field('upper', $._expression),
          ),
        ),
        "]",
      ),
    ),

    op_other: $ => token(
      choice(
        '->',
        '->>',
        '#>',
        '#>>',
        '~',
        '!~',
        '~*',
        '!~*',
        '|',
        '&',
        '#',
        '<<',
        '>>',
        '<<=',
        '>>=',
        '##',
        '<->',
        '@>',
        '<@',
        '&<',
        '&>',
        '|>>',
        '<<|',
        '&<|',
        '|&>',
        '<^',
        '^>',
        '?#',
        '?-',
        '?|',
        '?-|',
        '?||',
        '@@',
        '@@@',
        '@?',
        '#-',
        '?&',
        '?',
        '-|-',
        '||',
        '^@',
      ),
    ),

    binary_expression: $ => choice(
      ...[
        ['+', 'binary_plus'],
        ['-', 'binary_plus'],
        ['*', 'binary_times'],
        ['/', 'binary_times'],
        ['%', 'binary_times'],
        ['^', 'binary_exp'],
        ['=', 'binary_relation'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['!=', 'binary_relation'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
        ['<>', 'binary_relation'],
        [$.op_other, 'binary_other'],
        [$.keyword_is, 'binary_is'],
        [$.is_not, 'binary_is'],
        [$.keyword_like, 'pattern_matching'],
        [$.not_like, 'pattern_matching'],
        [$.similar_to, 'pattern_matching'],
        [$.not_similar_to, 'pattern_matching'],
        // binary_is precedence disambiguates `(is not distinct from)` from an
        // `is (not distinct from)` with a unary `not`
        [$.distinct_from, 'binary_is'],
        [$.not_distinct_from, 'binary_is'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ),
      ...[
        [$.keyword_and, 'clause_connective'],
        [$.keyword_or, 'clause_disjunctive'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ),
      ...[
        [$.keyword_in, 'binary_in'],
        [$.not_in, 'binary_in'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', choice($.list, $.subquery))
        ))
      ),
    ),

    op_unary_other: $ => token(
      choice(
        '|/',
        '||/',
        '@',
        '~',
        '@-@',
        '@@',
        '#',
        '?-',
        '?|',
        '!!',
      ),
    ),

    unary_expression: $ => choice(
      ...[
        [$.keyword_not, 'unary_not'],
        [$.bang, 'unary_not'],
        [$.keyword_any, 'unary_not'],
        [$.keyword_some, 'unary_not'],
        [$.keyword_all, 'unary_not'],
        [$.op_unary_other, 'unary_other'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('operator', operator),
          field('operand', $._expression)
        ))
      ),
    ),

    between_expression: $ => choice(
      ...[
            [$.keyword_between, 'between'],
            [seq($.keyword_not, $.keyword_between), 'between'],
        ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                field('left', $._expression),
                field('operator', operator),
                field('low', $._expression),
                $.keyword_and,
                field('high', $._expression)
            ))
        ),
    ),

    not_in: $ => seq(
      $.keyword_not,
      $.keyword_in,
    ),

    subquery: $ => wrapped_in_parenthesis(
      $._dml_read
    ),

    list: $ => paren_list($._expression),

    literal: $ => prec(2,
      choice(
        $._integer,
        $._decimal_number,
        $._literal_string,
        $._bit_string,
        $._string_casting,
        $.keyword_true,
        $.keyword_false,
        $.keyword_null,
      ),
    ),
    _double_quote_string: _ => /"[^"]*"/,
    _backtick_quoted_string: _ => /`[^`]*`/,
    // The norm specify that between two consecutive string must be a return,
    // but this is good enough.
    _single_quote_string: _ => seq(/([uU]&|[nN])?'([^']|'')*'/, repeat(/'([^']|'')*'/)),

    _postgres_escape_string: _ => /(e|E)'([^']|\\')*'/,

    _literal_string: $ => prec(
      1,
      choice(
        $._single_quote_string,
        $._double_quote_string,
        $._dollar_quoted_string,
        $._postgres_escape_string,
      ),
    ),
    _natural_number: _ => /\d+/,
    _integer: $ => seq(
      optional(choice("-", "+")),
      /(0[xX][0-9A-Fa-f]+(_[0-9A-Fa-f]+)*)|(0[oO][0-7]+(_[0-7]+)*)|(0[bB][01]+(_[01]+)*)|(\d+(_\d+)*(e[+-]?\d+(_\d+)*)?)/
    ),
    _decimal_number: $ => seq(
      optional(
        choice("-", "+")),
      /((\d+(_\d+)*)?[.]\d+(_\d+)*(e[+-]?\d+(_\d+)*)?)|(\d+(_\d+)*[.](e[+-]?\d+(_\d+)*)?)/
    ),
    _bit_string: $ => seq(/[bBxX]'([^']|'')*'/, repeat(/'([^']|'')*'/)),
    // The identifier should be followed by a string (no parenthesis allowed)
    _string_casting: $ => seq($.identifier, $._single_quote_string),

    bang: _ => '!',

    // Jinja template support for dbt
    jinja_expression: _ => /\{\{[^}]*\}\}/,
    jinja_statement: _ => /\{%[^%]*%\}/,
    jinja_comment: _ => /\{#[^#]*#\}/,

    identifier: $ => choice(
      $._identifier,
      $._double_quote_string,
      $._backtick_quoted_string,
      $._tsql_parameter,
      seq("`", $._identifier, "`"),
    ),
    _tsql_parameter: $ => seq('@', $._identifier),
    // support nordic chars and umlaue
    _identifier: _ => /[A-Za-z_\u00C0-\u017F][0-9A-Za-z_\u00C0-\u017F]*/,
  }

});
