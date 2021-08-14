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
      'unary_not',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'binary_in',
      'binary_compare',
      'binary_relation',
      'clause_connective',
    ],
  ],

  rules: {
    program: $ => seq(
      $.statement,
      // TODO: other kinds of definitions
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
    keyword_join: _ => make_keyword("join"),
    keyword_on: _ => make_keyword("on"),
    keyword_where: _ => make_keyword("where"),
    keyword_order_by: _ => make_keyword("order by"),
    keyword_group_by: _ => make_keyword("group by"),
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
    keyword_count: _ => make_keyword("count"),
    keyword_max: _ => make_keyword("max"),
    keyword_min: _ => make_keyword("min"),
    keyword_avg: _ => make_keyword("avg"),
    keyword_in: _ => make_keyword("in"),
    keyword_and: _ => make_keyword("and"),
    keyword_or: _ => make_keyword("or"),
    keyword_not: _ => make_keyword("not"),
    keyword_force: _ => make_keyword("force"),
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

    _temporary: $ => choice($.keyword_temp, $.keyword_temporary),
    _not_null: $ => seq($.keyword_not, $.keyword_null),
    _primary_key: $ => seq($.keyword_primary, $.keyword_key),
    _if_exists: $ => seq($.keyword_if, $.keyword_exists),
    _if_not_exists: $ => seq($.keyword_if, $.keyword_not, $.keyword_exists),
    _or_replace: $ => seq($.keyword_or, $.keyword_replace),
    _default_null: $ => seq($.keyword_default, $.keyword_null),
    direction: $ => choice($.keyword_desc, $.keyword_asc),

    // Types
    keyword_null: _ => make_keyword("null"),

    keyword_boolean: _ => make_keyword("boolean"),

    keyword_smallserial: _ => make_keyword("smallserial"),
    keyword_serial: _ => make_keyword("serial"),
    keyword_bigserial: _ => make_keyword("bigserial"),
    keyword_smallint: _ => make_keyword("smallint"),
    keyword_int: _ => choice(make_keyword("int"), make_keyword("integer")),
    keyword_bigint: _ => make_keyword("bigint"),
    keyword_decimal: _ => make_keyword("decimal"),
    keyword_numeric: _ => make_keyword("numeric"),
    keyword_real: _ => make_keyword("real"),
    double: _ => seq(make_keyword("double"), make_keyword("precision")),

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

    keyword_json: _ => make_keyword("json"),
    keyword_jsonb: _ => make_keyword("jsonb"),
    keyword_xml: _ => make_keyword("xml"),

    keyword_bytea: _ => make_keyword("bytea"),

    keyword_date: _ => make_keyword("date"),
    keyword_datetime: _ => make_keyword("datetime"),
    keyword_timestamp: _ => seq(
      make_keyword("timestamp"),
      optional(
        seq(
          make_keyword('without'),
          make_keyword('time'),
          make_keyword('zone')
        )
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

      $.keyword_money,

      $.char,
      $.varchar,
      $.keyword_text,

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

      $.bigint,
      $.char,
      $.varchar,
      $.decimal,
      $.numeric,
    ),

    bigint: $ => parametric_type($, $.keyword_bigint),
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

    comment: _ => /--.*\n/,
    marginalia: _ => /\/'*.*\*\//,

    statement: $ => seq(
      choice(
        $._select_statement,
        $._delete_statement,
        $._create_statement,
        $._alter_statement,
        $._drop_statement,
        $._insert_statement,
        $._update_statement,
      ),
      ';',
    ),

    _select_statement: $ => seq(
      $.select,
      optional($.from),
    ),

    select: $ => seq(
      $.keyword_select,
      choice(
        seq(
          optional($.keyword_distinct),
          $.select_expression,
        ),
        seq(
          $.keyword_distinct,
          '(',
          $.select_expression,
          ')',
        ),
      ),
    ),

    select_expression: $ => choice(
      $._field_list,
    ),

    _delete_statement: $ => seq(
      $.delete,
      alias($._delete_from, $.from),
    ),

    _delete_from: $ => seq(
      $.keyword_from,
      $.table_expression,
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

    create_materialized_view: $ => seq(
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
    ),

    insert: $ => seq(
      choice($.keyword_insert, $.keyword_replace),
      $.keyword_into,
      $.insert_expression,
    ),

    insert_expression: $ => seq(
      $.table_reference,
      optional(alias($._column_list_without_order, $.column_list)),
      $.keyword_values,
      $.list,
    ),

    _column_list_without_order: $ => param_list(alias($._column_without_order, $.column)),
    _column_without_order: $ => field('name', $.identifier),

    _update_statement: $ => seq(
      $.update,
    ),

    update: $ => seq(
      $.keyword_update,
      $.update_expression,
    ),

    update_expression: $ => choice(
      $._single_table_update,
      $._multi_table_update,
    ),

    _single_table_update: $ => seq(
      $.table_reference,
      $.keyword_set,
      $.assignment_list,
      optional($.where),
      optional($.order_by),
      optional($.limit),
    ),

    _multi_table_update: $ => seq(
      $._table_references,
      $.keyword_set,
      $.assignment_list,
      optional($.where),
    ),

    _table_references: $ => seq(
      $.table_reference,
      repeat1(
        seq(',', $.table_reference),
      ),
    ),

    assignment_list: $ => seq(
      $.predicate,
      repeat(
        seq(',', $.predicate),
      ),
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

    column_list: $ => param_list($.column),

    column: $ => seq(
      field('name', $.identifier),
      optional($.direction),
    ),

    _field_list: $ => choice(
      '*',
      $.literal,
      seq(
        choice(
          $.function_call,
          $.field,
        ),
        repeat(
          seq(
            ',',
            choice(
              $.function_call,
              $.field,
            ),
          ),
        ),
      ),
    ),

    field: $ => seq(
      optional(
        seq(
          optional(
            seq(
              field('schema', $.identifier),
              '.',
            ),
          ),
          field('table_alias', $.identifier),
          '.',
        ),
      ),
      field('name', $.identifier),
      optional(
        choice(
          field('alias', $.identifier),
          seq(
            $.keyword_as,
            field('alias', $.identifier),
          ),
        ),
      ),
    ),

    function_call: $ => seq(
      choice(
        $._count_function,
        seq(
          field('name', $.identifier),
          '(',
          $._function_params,
          ')',
        ),
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

    _count_function: $ => seq(
      field('name', alias($.keyword_count, $.identifier)),
      '(',
      choice(
        seq(
          optional($.keyword_distinct),
          field('parameter', $._function_param),
        ),
        seq(
          $.keyword_distinct,
          '(',
          field('parameter', $._function_param),
          ')',
        ),
      ),
      ')',
    ),

    _function_param: $ => choice(
      $.predicate,
      $.function_call,
      $.field,
      prec(2, $.literal),
    ),

    _function_params: $ => seq(
      field('parameter', $._function_param),
      optional(
        repeat1(
          seq(
            ',',
            field('parameter', $._function_param),
          ),
        ),
      ),
    ),

    from: $ => seq(
      $.keyword_from,
      $.table_expression,
      optional($.index_hint),
      repeat($.join),
      optional($.where),
      optional($.group_by),
      optional($.order_by),
      optional($.limit),
    ),

    table_expression: $ => seq(
      optional(
        seq(
          field('schema', $.identifier),
          '.',
        ),
      ),
      field('name', $.identifier),
      optional($.keyword_as),
      optional(field('table_alias', $.identifier)),
    ),

    index_hint: $ => seq(
      choice(
        $.keyword_force,
        $.keyword_use,
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
          $.keyword_left,
          seq($.keyword_left, $.keyword_outer),
          $.keyword_right,
          seq($.keyword_right, $.keyword_outer),
          $.keyword_inner,
        ),
      ),
      $.keyword_join,
      $.table_expression,
      optional($.index_hint),
      $.keyword_on,
      $.predicate,
    ),

    where: $ => seq(
      $.keyword_where,
      $.where_expression,
    ),

    group_by: $ => seq(
      $.keyword_group_by,
      $.identifier,
      optional($._having),
    ),

    _having: $ => seq(
      $.keyword_having,
      $.predicate,
    ),

    order_by: $ => seq(
      $.keyword_order_by,
      $.order_expression,
    ),

    order_expression: $ => seq(
      $._field_list,
      optional($.direction),
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

    where_expression: $ => seq(
      $._expression,
    ),

    predicate: $ => choice(
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
        [$.keyword_and, 'clause_connective'],
        [$.keyword_or, 'clause_connective'],
        [$.keyword_in, 'binary_in'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      )
    ),

    _expression: $ => choice(
      $.literal,
      $.list,
      $.field,
      $.predicate,
      $.subquery,
    ),

    subquery: $ => seq(
      '(',
      $.select,
      optional($.from),
      ')',
    ),

    list: $ => param_list($.literal),

    literal: $ => prec(2,
      choice(
        $._number,
        $._literal_string,
      ),
    ),
    _literal_string: _ => choice(
      seq("'", /[^']*/, "'"),
      seq('"', /[^"]*/, '"'),
    ),
    _number: _ => /\d+/,

    identifier: $ => choice(
      $._identifier,
      seq('`', $._identifier, '`'),
    ),
    _identifier: _ => /([a-zA-Z_$][0-9a-zA-Z_]*)/,
  }

});

function parametric_type($, type, params = ['size']) {
  return choice(
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
  )
}

function param_list(field) {
  return seq(
    '(',
    field,
    repeat(
      seq(',', field)
    ),
    ')',
  )
}

function make_keyword(word) {
  return new RegExp(word + "|" + word.toUpperCase());
}
