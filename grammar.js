module.exports = grammar({
  name: 'sql',

  extras: $ => [
    /\s\n/,
    /\s/,
    $.comment,
    $.marginalia,
  ],

  precedences: $ => [
    [
      'binary_is',
      'unary_not',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'binary_in',
      'binary_compare',
      'binary_relation',
      'binary_concat',
      'pattern_matching',
      'clause_connective',
      'clause_disjunctive',
    ],
  ],

  word: $ => $._identifier,

  rules: {
    program: $ => repeat(
      // TODO: other kinds of definitions
      choice(
        $.transaction,
        $.statement,
        $.compound_statement,
      ),
    ),

    keyword_select: _ => make_keyword("select"),
    keyword_delete: _ => make_keyword("delete"),
    keyword_insert: _ => make_keyword("insert"),
    keyword_replace: _ => make_keyword("replace"),
    keyword_update: _ => make_keyword("update"),
    keyword_into: _ => make_keyword("into"),
    keyword_values: _ => make_keyword("values"),
    keyword_set: _ => make_keyword("set"),
    keyword_from: _ => make_keyword("from"),
    keyword_left: _ => make_keyword("left"),
    keyword_right: _ => make_keyword("right"),
    keyword_inner: _ => make_keyword("inner"),
    keyword_outer: _ => make_keyword("outer"),
    keyword_cross: _ => make_keyword("cross"),
    keyword_join: _ => make_keyword("join"),
    keyword_lateral: _ => make_keyword("lateral"),
    keyword_on: _ => make_keyword("on"),
    keyword_where: _ => make_keyword("where"),
    keyword_order: _ => make_keyword("order"),
    keyword_group: _ => make_keyword("group"),
    keyword_partition: _ => make_keyword("partition"),
    keyword_by: _ => make_keyword("by"),
    keyword_having: _ => make_keyword("having"),
    keyword_desc: _ => make_keyword("desc"),
    keyword_asc: _ => make_keyword("asc"),
    keyword_limit: _ => make_keyword("limit"),
    keyword_offset: _ => make_keyword("offset"),
    keyword_primary: _ => make_keyword("primary"),
    keyword_create: _ => make_keyword("create"),
    keyword_alter: _ => make_keyword("alter"),
    keyword_drop: _ => make_keyword("drop"),
    keyword_add: _ => make_keyword("add"),
    keyword_table: _ => make_keyword("table"),
    keyword_view: _ => make_keyword("view"),
    keyword_materialized: _ => make_keyword("materialized"),
    keyword_column: _ => make_keyword("column"),
    keyword_key: _ => make_keyword("key"),
    keyword_as: _ => make_keyword("as"),
    keyword_distinct: _ => make_keyword("distinct"),
    keyword_constraint: _ => make_keyword("constraint"),
    keyword_cast: _ => make_keyword("cast"),
    keyword_count: _ => make_keyword("count"),
    keyword_max: _ => make_keyword("max"),
    keyword_min: _ => make_keyword("min"),
    keyword_avg: _ => make_keyword("avg"),
    keyword_case: _ => make_keyword("case"),
    keyword_when: _ => make_keyword("when"),
    keyword_then: _ => make_keyword("then"),
    keyword_else: _ => make_keyword("else"),
    keyword_end: _ => make_keyword("end"),
    keyword_in: _ => make_keyword("in"),
    keyword_and: _ => make_keyword("and"),
    keyword_or: _ => make_keyword("or"),
    keyword_is: _ => make_keyword("is"),
    keyword_not: _ => make_keyword("not"),
    keyword_force: _ => make_keyword("force"),
    keyword_ignore: _ => make_keyword("ignore"),
    keyword_using: _ => make_keyword("using"),
    keyword_use: _ => make_keyword("use"),
    keyword_index: _ => make_keyword("index"),
    keyword_for: _ => make_keyword("for"),
    keyword_if: _ => make_keyword("if"),
    keyword_exists: _ => make_keyword("exists"),
    keyword_auto_increment: _ => make_keyword("auto_increment"),
    keyword_default: _ => make_keyword("default"),
    keyword_cascade: _ => make_keyword("cascade"),
    keyword_with: _ => make_keyword("with"),
    keyword_no: _ => make_keyword("no"),
    keyword_data: _ => make_keyword("data"),
    keyword_type: _ => make_keyword("type"),
    keyword_rename: _ => make_keyword("rename"),
    keyword_to: _ => make_keyword("to"),
    keyword_schema: _ => make_keyword("schema"),
    keyword_owner: _ => make_keyword("owner"),
    keyword_temp: _ => make_keyword("temp"),
    keyword_temporary: _ => make_keyword("temporary"),
    keyword_union: _ => make_keyword("union"),
    keyword_all: _ => make_keyword("all"),
    keyword_except: _ => make_keyword("except"),
    keyword_intersect: _ => make_keyword("intersect"),
    keyword_returning: _ => make_keyword("returning"),
    keyword_begin: _ => make_keyword("begin"),
    keyword_commit: _ => make_keyword("commit"),
    keyword_rollback: _ => make_keyword("rollback"),
    keyword_transaction: _ => make_keyword("transaction"),
    keyword_over: _ => make_keyword("over"),
    keyword_nulls: _ => make_keyword("nulls"),
    keyword_first: _ => make_keyword("first"),
    keyword_last: _ => make_keyword("last"),
    keyword_window: _ => make_keyword("window"),
    keyword_range: _ => make_keyword("range"),
    keyword_rows: _ => make_keyword("rows"),
    keyword_groups: _ => make_keyword("groups"),
    keyword_between: _ => make_keyword("between"),
    keyword_unbounded: _ => make_keyword("unbounded"),
    keyword_preceding: _ => make_keyword("preceding"),
    keyword_following: _ => make_keyword("following"),
    keyword_exclude: _ => make_keyword("exclude"),
    keyword_current: _ => make_keyword("current"),
    keyword_row: _ => make_keyword("row"),
    keyword_ties: _ => make_keyword("ties"),
    keyword_others: _ => make_keyword("others"),
    keyword_only: _ => make_keyword("only"),
    keyword_unique: _ => make_keyword("unique"),
    keyword_concurrently: _ => make_keyword("concurrently"),
    keyword_btree: _ => make_keyword("btree"),
    keyword_hash: _ => make_keyword("hash"),
    keyword_gist: _ => make_keyword("gist"),
    keyword_spgist: _ => make_keyword("spgist"),
    keyword_gin:  _ => make_keyword("gin"),
    keyword_brin: _ => make_keyword("brin"),
    keyword_like: _ => choice(make_keyword("like"),make_keyword("ilike")),
    keyword_similar: _ => make_keyword("similar"),

    _similar_to: $ => seq($.keyword_similar, $.keyword_to),
    _not_similar_to: $ => seq($.keyword_not, $.keyword_similar, $.keyword_to),
    is_not: $ => prec("binary_is", seq($.keyword_is, $.keyword_not)),
    _not_like: $ => seq($.keyword_not, $.keyword_like),
    _temporary: $ => choice($.keyword_temp, $.keyword_temporary),
    _not_null: $ => seq($.keyword_not, $.keyword_null),
    _primary_key: $ => seq($.keyword_primary, $.keyword_key),
    _if_exists: $ => seq($.keyword_if, $.keyword_exists),
    _if_not_exists: $ => seq($.keyword_if, $.keyword_not, $.keyword_exists),
    _or_replace: $ => seq($.keyword_or, $.keyword_replace),
    _default_null: $ => seq($.keyword_default, $.keyword_null),
    _current_row: $ => seq($.keyword_current, $.keyword_row),
    _exclude_current_row: $ => seq($.keyword_exclude, $.keyword_current, $.keyword_row),
    _exclude_group: $ => seq($.keyword_exclude, $.keyword_group),
    _exclude_no_others: $ => seq($.keyword_exclude, $.keyword_no, $.keyword_others),
    _exclude_ties: $ => seq($.keyword_exclude, $.keyword_ties),
    direction: $ => choice($.keyword_desc, $.keyword_asc),

    // Types
    keyword_null: _ => make_keyword("null"),
    keyword_true: _ => make_keyword("true"),
    keyword_false: _ => make_keyword("false"),

    keyword_boolean: _ => make_keyword("boolean"),

    keyword_smallserial: _ => choice(make_keyword("smallserial"),make_keyword("serial2")),
    keyword_serial: _ => choice(make_keyword("serial"),make_keyword("serial4")),
    keyword_bigserial: _ => choice(make_keyword("bigserial"),make_keyword("serial8")),
    keyword_smallint: _ => choice(make_keyword("smallint"),make_keyword("int2")),
    keyword_int: _ => choice(make_keyword("int"), make_keyword("integer"), make_keyword("int4")),
    keyword_bigint: _ => choice(make_keyword("bigint"),make_keyword("int8")),
    keyword_decimal: _ => make_keyword("decimal"),
    keyword_numeric: _ => make_keyword("numeric"),
    keyword_real: _ => choice(make_keyword("real"),make_keyword("float4")),
    keyword_float: _ => make_keyword("float"),
    double: _ => choice(
        seq(make_keyword("double"), make_keyword("precision")),
        make_keyword("float8")
    ),

    keyword_money: _ => make_keyword("money"),

    keyword_char: _ => choice(make_keyword("char"), make_keyword("character")),
    keyword_varchar: _ => choice(
      make_keyword("varchar"),
      seq(
        make_keyword("character"),
        make_keyword("varying"),
      )
    ),
    keyword_text: _ => make_keyword("text"),
    keyword_uuid: _ => make_keyword("uuid"),

    keyword_json: _ => make_keyword("json"),
    keyword_jsonb: _ => make_keyword("jsonb"),
    keyword_xml: _ => make_keyword("xml"),

    keyword_bytea: _ => make_keyword("bytea"),

    keyword_date: _ => make_keyword("date"),
    keyword_datetime: _ => make_keyword("datetime"),
    keyword_timestamp: _ => prec.right(
      seq(
        make_keyword("timestamp"),
        optional(
          seq(
            make_keyword('without'),
            make_keyword('time'),
            make_keyword('zone')
          ),
        ),
      ),
    ),
    keyword_timestamptz: _ => choice(
      make_keyword('timestamptz'),
      seq(
        make_keyword("timestamp"),
        make_keyword('with'),
        make_keyword('time'),
        make_keyword('zone')
      ),
    ),

    keyword_geometry: _ => make_keyword("geometry"),
    keyword_geography: _ => make_keyword("geography"),
    keyword_box2d: _ => make_keyword("box2d"),
    keyword_box3d: _ => make_keyword("box3d"),

    keyword_oid: _ => make_keyword("oid"),
    keyword_name: _ => make_keyword("name"),
    keyword_regclass: _ => make_keyword("regclass"),
    keyword_regnamespace: _ => make_keyword("regnamespace"),
    keyword_regproc: _ => make_keyword("regproc"),
    keyword_regtype: _ => make_keyword("regtype"),

    keyword_array: _ => make_keyword("array"), // not included in _type since it's a constructor literal

    _type: $ => choice(
      $.keyword_boolean,

      $.keyword_smallserial,
      $.keyword_serial,
      $.keyword_bigserial,
      $.keyword_smallint,
      $.keyword_int,

      $.bigint,
      $.decimal,
      $.numeric,
      $.keyword_real,
      $.double,
      $.float,

      $.keyword_money,

      $.char,
      $.varchar,
      $.keyword_text,

      $.keyword_uuid,

      $.keyword_json,
      $.keyword_jsonb,
      $.keyword_xml,

      $.keyword_bytea,

      $.keyword_date,
      $.keyword_datetime,
      $.keyword_timestamp,
      $.keyword_timestamptz,

      $.keyword_geometry,
      $.keyword_geography,
      $.keyword_box2d,
      $.keyword_box3d,

      $.char,
      $.varchar,
      $.numeric,

      $.keyword_oid,
      $.keyword_name,
      $.keyword_regclass,
      $.keyword_regnamespace,
      $.keyword_regproc,
      $.keyword_regtype,
    ),

    bigint: $ => parametric_type($, $.keyword_bigint),

    // TODO: should qualify against /\\b(0?[1-9]|[1-4][0-9]|5[0-4])\\b/g
    float: $  => parametric_type($, $.keyword_float, ['precision']),
    decimal: $ => choice(
      parametric_type($, $.keyword_decimal, ['precision']),
      parametric_type($, $.keyword_decimal, ['precision', 'scale']),
    ),
    numeric: $ => choice(
      parametric_type($, $.keyword_numeric, ['precision']),
      parametric_type($, $.keyword_numeric, ['precision', 'scale']),
    ),
    char: $ => parametric_type($, $.keyword_char),
    varchar: $ => parametric_type($, $.keyword_varchar),

    array: $ => seq(
      $.keyword_array,
      "[",
      comma_list($._expression),
      "]"
    ),

    comment: _ => seq('--', /.*\n/),
    // https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment
    marginalia: _ => seq('/*', /[^*]*\*+(?:[^/*][^*]*\*+)*/, '/' ),

    compound_statement: $ => seq(
      $.keyword_begin,
      repeat1(
        $.statement,
      ),
      $.keyword_end,
      optional(';'),
    ),

    statement: $ => seq(
      choice(
        $._ddl_statement,
        $._dml_statement,
      ),
      optional(';'),
    ),

    _ddl_statement: $ => choice(
      $._create_statement,
      $._alter_statement,
      $._drop_statement,
    ),

    _dml_statement: $ => seq(
      optional(
        seq(
          $.keyword_with,
          $.cte,
          repeat(
            seq(
              ',',
              $.cte,
            ),
          ),
        ),
      ),
      choice(
        $._select_statement,
        $._delete_statement,
        $._insert_statement,
        $._update_statement,
      ),
      optional($.window_clause),
    ),

    cte: $ => seq(
      $.identifier,
      $.keyword_as,
      optional(
        seq(
          optional($.keyword_not),
          $.keyword_materialized),
      ),
      '(',
      alias(
        choice(
          $._select_statement,
          $._delete_statement,
          $._insert_statement,
          $._update_statement,
        ),
        $.statement,
      ),
      ')',
    ),

    transaction: $ => seq(
      $._begin,
      repeat(
        $.statement,
      ),
      choice(
        $._commit,
        $._rollback,
      ),
    ),

    _begin: $ => seq(
      $.keyword_begin,
      optional(
        $.keyword_transaction,
      ),
      ';',
    ),

    _commit: $ => seq(
      $.keyword_commit,
      optional(
        $.keyword_transaction,
      ),
      ';',
    ),

    _rollback: $ => seq(
      $.keyword_rollback,
      optional(
        $.keyword_transaction,
      ),
      ';',
    ),

    _select_statement: $ => seq(
      $.select,
      optional($.from),
      repeat(
        seq(
          choice(
            seq(
              $.keyword_union,
              optional($.keyword_all),
            ),
            $.keyword_except,
            $.keyword_intersect,
          ),
          $.select,
          optional($.from),
        ),
      ),
    ),

    select: $ => seq(
      $.keyword_select,
      seq(
        optional($.keyword_distinct),
        $.select_expression,
      ),
    ),

    select_expression: $ => seq(
      $._select_expression,
      repeat(
        seq(
          ',',
          $._select_expression,
        ),
      ),
    ),

    _select_expression: $ => choice(
      $.all_fields,
      $.term,
    ),

    term: $ => seq(
      field("value", $._expression),
      optional($._alias),
    ),

    _delete_statement: $ => seq(
      $.delete,
      alias($._delete_from, $.from),
      optional($.returning),
    ),

    _delete_from: $ => seq(
      $.keyword_from,
      optional(
        $.keyword_only,
      ),
      $.table_reference,
      optional($.where),
      optional($.order_by),
      optional($.limit),
    ),

    delete: $ => seq(
      $.keyword_delete,
      optional($.index_hint),
    ),

    _create_statement: $ => seq(
      choice(
        $.create_table,
        $.create_view,
        $.create_materialized_view,
        $.create_index,
        // TODO function, sequence
      ),
    ),

    create_table: $ => seq(
      $.keyword_create,
      optional($._temporary),
      $.keyword_table,
      optional($._if_not_exists),
      $.table_reference,
      $.column_definitions,
      optional($.table_options),
    ),

    create_view: $ => seq(
      $.keyword_create,
      optional($._or_replace),
      $.keyword_view,
      optional($._if_not_exists),
      $.table_reference,
      $.keyword_as,
      $._select_statement,
    ),

    create_materialized_view: $ => prec.right(
      seq(
        $.keyword_create,
        optional($._or_replace),
        $.keyword_materialized,
        $.keyword_view,
        optional($._if_not_exists),
        $.table_reference,
        $.keyword_as,
        $._select_statement,
        optional(
          choice(
            seq(
              $.keyword_with,
              $.keyword_data,
            ),
            seq(
              $.keyword_with,
              $.keyword_no,
              $.keyword_data,
            )
          )
        )
      ),
    ),

    create_index: $ => seq(
      $.keyword_create,
      optional($.keyword_unique),
      $.keyword_index,
      optional($.keyword_concurrently),
      optional(
        seq(
          optional($._if_not_exists),
          $.identifier,
        ),
      ),
      $.keyword_on,
      optional($.keyword_only),
      seq(
        $.table_reference,
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
        $.column_list,
      ),
      optional(
        $.where,
      ),
    ),

    _alter_statement: $ => seq(
      choice(
        $.alter_table,
        $.alter_view,
      ),
    ),

    alter_table: $ => seq(
      $.keyword_alter,
      $.keyword_table,
      optional($._if_exists),
      $.table_reference,
      choice(
        seq(
          choice(
            $.add_column,
            $.alter_column,
            $.drop_column,
          ),
          repeat(
            seq(
              ",",
              choice(
                $.add_column,
                $.alter_column,
                $.drop_column,
              )
            )
          )
        ),
        // some operations may not be chained to others
        $.rename_object,
        $.rename_column,
        $.set_schema,
        $.change_ownership,
      ),
    ),

    add_column: $ => seq(
      $.keyword_add,
      $.keyword_column,
      optional($._if_not_exists),
      $.column_definition,
    ),

    alter_column: $ => seq(
      // TODO constraint management
      $.keyword_alter,
      $.keyword_column,
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
          $.keyword_default,
          $._expression,
        ),
        seq(
          $.keyword_drop,
          $.keyword_default,
        ),
      ),
    ),

    drop_column: $ => seq(
      $.keyword_drop,
      $.keyword_column,
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
      $.table_reference,
      choice(
        // TODO Postgres allows a single "alter column" to set or drop default
        $.rename_object,
        $.rename_column,
        $.set_schema,
        $.change_ownership,
      ),
    ),

    _drop_statement: $ => seq(
      choice(
        $.drop_table,
        $.drop_view,
      ),
    ),

    drop_table: $ => seq(
      $.keyword_drop,
      $.keyword_table,
      optional($._if_exists),
      $.table_reference,
      optional(
        $.keyword_cascade,
      ),
    ),

    drop_view: $ => seq(
      $.keyword_drop,
      $.keyword_view,
      optional($._if_exists),
      $.table_reference,
      optional(
        $.keyword_cascade,
      ),
    ),

    rename_object: $ => seq(
      $.keyword_rename,
      $.keyword_to,
      $.table_reference,
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

    table_reference: $ => seq(
      optional(
        seq(
          field('schema', $.identifier),
          '.',
        ),
      ),
      field('name', $.identifier),
    ),

    _insert_statement: $ => seq(
      $.insert,
      optional($.returning),
    ),

    insert: $ => seq(
      choice($.keyword_insert, $.keyword_replace),
      $.keyword_into,
      $.insert_expression,
    ),

    insert_expression: $ => seq(
      $.table_reference,
      optional(alias($._column_list_without_order, $.column_list)),
      choice(
        seq(
          $.keyword_values,
          $.list,
        ),
        $._select_statement,
      ),
    ),

    _column_list_without_order: $ => paren_list(alias($._column_without_order, $.column)),
    _column_without_order: $ => field('name', $.identifier),

    _update_statement: $ => seq(
      $.update,
      optional($.returning),
    ),

    update: $ => seq(
      $.keyword_update,
      choice(
        $._single_table_update,
        $._multi_table_update,
      ),
    ),

    _single_table_update: $ => seq(
      optional(
        $.keyword_only,
      ),
      $.table_reference,
      $.keyword_set,
      comma_list($.assignment, true),
      optional($.where),
      optional($.order_by),
      optional($.limit),
    ),

    _multi_table_update: $ => seq(
      $._table_references,
      $.keyword_set,
      comma_list($.assignment, true),
      optional($.where),
    ),

    _table_references: $ => seq(
      $.table_reference,
      repeat1(
        seq(',', $.table_reference),
      ),
    ),

    assignment: $ => seq(
      field('left', $.field),
      '=',
      field('right', $._expression),
    ),

    table_options: $ => repeat1($.table_option),
    table_option: $ => choice(
      field('name', alias($.keyword_default, $.identifier)),
      seq(
        field('name', $.identifier),
        '=',
        field('value', $.identifier),
      ),
    ),

    column_definitions: $ => seq(
      '(',
      $.column_definition,
      repeat(
        seq(',', $.column_definition),
      ),
      optional($.constraints),
      ')',
    ),

    column_definition: $ => seq(
      field('name', $.identifier),
      field('type', $._type),
      choice(
        optional($.keyword_null),
        optional($._not_null),
        optional($._default_null),
      ),
      optional($.keyword_auto_increment),
      optional($._primary_key),
      optional($.direction),
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
    ),

    _constraint_literal: $ => seq(
      $.keyword_constraint,
      field('name', $.identifier),
      $._primary_key,
      $.column_list,
    ),

    _primary_key_constraint: $ => seq(
      $._primary_key,
      $.column_list,
    ),

    _key_constraint: $ => seq(
      $.keyword_key,
      field('name', $.identifier),
      $.column_list,
    ),

    column_list: $ => paren_list($.column),

    column: $ => seq(
      field('name', $.identifier),
      optional($.direction),
    ),

    all_fields: $ => seq(
      optional(
        seq(
          optional(
            seq(
              field('schema', $._alias_identifier),
              '.',
            ),
          ),
          field('table_alias', $._alias_identifier),
          '.',
        ),
      ),
      '*',
    ),

    parameter: $ => choice(
      "?",
      seq("$", RegExp("[0-9]+")),
    ),

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
          choice(
            $.binary_expression,
            $.identifier,
          ),
          $.keyword_then,
          $._expression,
          repeat(
            seq(
              $.keyword_when,
              $.binary_expression,
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

    field: $ => prec.left(
      seq(
        optional(
          seq(
            optional(
              seq(
                field('schema', $._alias_identifier),
                '.',
              ),
            ),
            field('table_alias', $._alias_identifier),
            '.',
          ),
        ),
        field('name', $.identifier),
      ),
    ),

    implicit_cast: $ => seq(
      $._expression,
      '::',
      $._type,
    ),

    cast: $ => seq(
      field('name', alias($.keyword_cast, $.identifier)),
      '(',
      seq(
        field('parameter', $._expression),
        $.keyword_as,
        $._type,
      ),
      ')',
    ),

    count: $ => seq(
      field('name', alias($.keyword_count, $.identifier)),
      '(',
      seq(
        optional($.keyword_distinct),
        field('parameter', choice($._expression, $.all_fields)),
      ),
      ')',
    ),

    invocation: $ => seq(
      field('name', $.identifier),
      paren_list(field('parameter', $._expression)),
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
              alias($._number, $.literal),
              $.keyword_preceding,
          ),
          $._current_row,
          seq(
              alias($._number, $.literal),
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

        optional(
            choice(
                seq(
                    $.keyword_between,
                    $.frame_definition,
                    $.keyword_and,
                    $.frame_definition,
                ),
                seq(
                    $.frame_definition,
                    $.frame_definition,
                )
            ),
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

    window_specification: $ => seq(
        '(',
        seq(
            optional(
                $.partition_by,
            ),
            optional(
                $.order_by
            ),
            optional(
                $.window_frame,
            ),
        ),
        ')',
    ),

    window_function: $ => seq(
        $.invocation,
        $.keyword_over,
        choice(
            $.identifier,
            $.window_specification,
        ),
    ),

    _alias_identifier : $ => choice(
      $.identifier,
      alias($._double_quote_string, $.identifier),
    ),

    _alias: $ => choice(
      field('alias', $._alias_identifier),
      seq(
        $.keyword_as,
        field('alias', $._alias_identifier),
      ),
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
          $.lateral_join,
        ),
      ),
      optional($.where),
      optional($.group_by),
      optional($.order_by),
      optional($.limit),
    ),

    relation: $ => seq(
      choice(
        $.subquery,
        $.invocation,
        $.table_reference,
        seq(
          '(',
          $.values,
          ')',
        ),
      ),
      optional(
        seq(
          optional($.keyword_as),
          field('table_alias', $._alias_identifier),
          optional(alias($._column_list_without_order, $.column_list)),
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
      '(',
      field('index_name', $.identifier),
      ')',
    ),

    join: $ => seq(
      optional(
        choice(
          $.keyword_cross,
          $.keyword_left,
          seq($.keyword_left, $.keyword_outer),
          $.keyword_right,
          seq($.keyword_right, $.keyword_outer),
          $.keyword_inner,
        ),
      ),
      $.keyword_join,
      $.relation,
      optional($.index_hint),
      choice(
        seq(
          $.keyword_on,
          $._expression,
        ),
        seq(
          $.keyword_using,
          alias($._column_list_without_order, $.column_list),
        )
      )
    ),

    lateral_join: $ => seq(
      optional(
        choice(
          // lateral joins cannot be right!
          $.keyword_cross,
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

    where: $ => seq(
      $.keyword_where,
      $._expression,
    ),

    group_by: $ => seq(
      $.keyword_group,
      $.keyword_by,
      comma_list($._expression, true),
      optional($._having),
    ),

    _having: $ => seq(
      $.keyword_having,
      $._expression,
    ),

    order_by: $ => seq(
      $.keyword_order,
      $.keyword_by,
      seq(
        $.order_target,
        repeat(
          seq(
            ',',
            $.order_target,
          ),
        ),
      ),
    ),

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
        $.field,
        $.parameter,
        $.list,
        $.case,
        $.window_function,
        $.subquery,
        $.cast,
        alias($.implicit_cast, $.cast),
        $.count,
        $.invocation,
        $.binary_expression,
        $.unary_expression,
        $.array,
      )
    ),

    binary_expression: $ => choice(
      ...[
        ['+', 'binary_plus'],
        ['-', 'binary_plus'],
        ['*', 'binary_times'],
        ['/', 'binary_times'],
        ['%', 'binary_times'],
        ['^', 'binary_exp'],
        ['||', 'binary_concat'],
        ['=', 'binary_relation'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['!=', 'binary_relation'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
        [$.keyword_like, 'pattern_matching'],
        [$._not_like, 'pattern_matching'],
        [$._similar_to, 'pattern_matching'],
        [$._not_similar_to, 'pattern_matching'],
        [seq($.keyword_is, $.keyword_distinct, $.keyword_from), 'binary_relation'],
        [seq($.keyword_is, $.keyword_not, $.keyword_distinct, $.keyword_from), 'binary_relation'],
        [$.keyword_is, 'binary_in'],
        [$.is_not, 'binary_in'],
        [$.keyword_in, 'binary_in'],
        [$.keyword_and, 'clause_connective'],
        [$.keyword_or, 'clause_disjunctive'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ),
    ),

    unary_expression: $ => prec("unary_not", choice(
      ...[
        [$.keyword_not, 'unary_not'],
        [$.bang, 'unary_not'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('operator', operator),
          field('operand', $._expression)
        ))
      )),
    ),

    subquery: $ => seq(
      '(',
      $.select,
      optional($.from),
      ')',
    ),

    list: $ => paren_list($._expression),

    literal: $ => prec(2,
      choice(
        $._number,
        $._literal_string,
        $.keyword_true,
        $.keyword_false,
        $.keyword_null,
      ),
    ),
    _double_quote_string: _ => seq('"', /[^"]*/, '"'),
    _literal_string: $ => choice(
      seq("'", /[^']*/, "'"),
      $._double_quote_string,
    ),
    _number: _ => /\d+/,
    bang: _ => '!',

    identifier: $ => choice(
      $._identifier,
      seq('`', $._identifier, '`'),
    ),
    _identifier: _ => /([a-zA-Z_][0-9a-zA-Z_]*)/,
  }

});

function parametric_type($, type, params = ['size']) {
  return prec.right(
    choice(
      type,
      seq(
        type,
        '(',
        // first parameter is guaranteed, shift it out of the array
        field(params.shift(), alias($._number, $.literal)),
        // then, fill in the ", next" until done
        ...params.map(p => seq(',', field(p, alias($._number, $.literal)))),
        ')',
      ),
    ),
  )
}

function comma_list(field, requireFirst) {
  if (requireFirst) {
    return seq(
      field,
      repeat(
        seq(',', field)
      )
    );
  }

  return optional(
    seq(
      field,
      repeat(
        seq(',', field)
      ),
    ),
  );
}

function paren_list(field) {
  return seq(
    '(',
    comma_list(field),
    ')',
  )
}

function make_keyword(word) {
  return new RegExp(word + "|" + word.toUpperCase());
}
