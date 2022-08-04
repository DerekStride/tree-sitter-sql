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
      'binary_concat',
      'clause_connective',
    ],
  ],

  word: $ => $._identifier,

  rules: {
    program: $ => repeat(
      // TODO: other kinds of definitions
      choice(
        $.transaction,
        $.statement,
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
    keyword_true: _ => make_keyword("true"),
    keyword_false: _ => make_keyword("false"),

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
        $._ddl_statement,
        $._dml_statement,
      ),
      ';',
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
    ),

    cte: $ => seq(
      $.identifier,
      $.keyword_as,
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
      seq(
        $._expression,
        optional($._alias),
      ),
    ),

    _delete_statement: $ => seq(
      $.delete,
      alias($._delete_from, $.from),
      optional($.returning),
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

    _column_list_without_order: $ => param_list(alias($._column_without_order, $.column)),
    _column_without_order: $ => field('name', $.identifier),

    _update_statement: $ => seq(
      $.update,
      optional($.returning),
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
      $.assignment,
      repeat(
        seq(',', $.assignment),
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

    all_fields: $ => seq(
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
          $.predicate,
          $.keyword_then,
          $._expression,
          repeat(
            seq(
              $.keyword_when,
              $.predicate,
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
        field('parameter', $._expression),
      ),
      ')',
    ),

    invocation: $ => seq(
      field('name', $.identifier),
      '(',
      optional(
        $._function_params,
      ),
      ')',
    ),

    _function_params: $ => seq(
      field('parameter', $._expression),
      optional(
        repeat1(
          seq(
            ',',
            field('parameter', $._expression),
          ),
        ),
      ),
    ),

    _alias: $ => choice(
      field('alias', $.identifier),
      seq(
        $.keyword_as,
        field('alias', $.identifier),
      ),
    ),

    from: $ => seq(
      $.keyword_from,
      $._table_expression,
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

    _table_expression: $ => seq(
      $.table_expression,
      repeat(
        seq(
          ',',
          $.table_expression,
        ),
      ),
    ),

    table_expression: $ => seq(
      optional(
        seq(
          field('schema', $.identifier),
          '.',
        ),
      ),
      field('name', $.identifier),
      optional(
        seq(
          optional($.keyword_as),
          field('table_alias', $.identifier),
        ),
      ),
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
          $.keyword_cross,
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
      choice(
        seq(
          $.keyword_on,
          choice(
            $.predicate,
            $.keyword_true,
            $.keyword_false,
          ),
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
        $.predicate,
        $.keyword_true,
        $.keyword_false,
      ),
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
      $._expression,
      optional($.direction),
      repeat(
        seq(
          ',',
          $._expression,
          optional($.direction),
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

    where_expression: $ => seq(
      $._expression,
    ),

    predicate: $ => choice(
      ...[
        ['=', 'binary_relation'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['!=', 'binary_relation'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
        [seq($.keyword_is, $.keyword_distinct, $.keyword_from), 'binary_relation'],
        [seq($.keyword_is, $.keyword_not, $.keyword_distinct, $.keyword_from), 'binary_relation'],
        [$.keyword_and, 'clause_connective'],
        [$.keyword_or, 'clause_connective'],
        [$.keyword_in, 'binary_in'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ),
      seq(
        $._expression,
        $.keyword_is,
        choice(
          $.keyword_null,
          $._not_null,
          $.keyword_true,
          $.keyword_false,
        ),
      ),
      // TODO exists/not exists (subquery)
    ),

    _expression: $ => choice(
      $.literal,
      $.field,
      $.parameter,
      $.list,
      $.case,
      $.predicate,
      $.subquery,
      $.cast,
      alias($.implicit_cast, $.cast),
      $.count,
      $.invocation,
      $.binary_expression,
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
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ),
    ),

    subquery: $ => seq(
      '(',
      $.select,
      optional($.from),
      ')',
    ),

    list: $ => param_list($._expression),

    literal: $ => prec(2,
      choice(
        $._number,
        $._literal_string,
        $.keyword_true,
        $.keyword_false,
        $.keyword_null,
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
    _identifier: _ => /([a-zA-Z_][0-9a-zA-Z_]*)/,
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
