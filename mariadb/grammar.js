import mysql from '../mysql/grammar.js';
import { make_keyword } from '../grammar/helpers.js';
import mariadb_temporal_rules from './grammar/temporal.js';
import mariadb_versioning_rules from './grammar/versioning.js';
import mariadb_returning_rules from './grammar/returning.js';
import mariadb_package_rules from './grammar/package.js';
import mariadb_invisible_rules from './grammar/invisible.js';

export default grammar(mysql, {
  name: 'mariadb_sql',

  conflicts: $ => [
    [$.object_reference, $._qualified_field],
    [$.field, $._qualified_field],
    [$._column, $._qualified_field],
    [$.object_reference],
    [$.between_expression, $.binary_expression],
    [$.create_function],
    [$.list, $.grouping_set],
    [$.list, $.rollup_element],
    [$.list, $.cube_element],
  ],

  rules: {

    _create_statement: $ => seq(
      choice(
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
        $.create_event,
        $.create_package,
        $.create_package_body,
        prec.left(seq(
          $.create_schema,
          repeat($._create_statement),
        )),
      ),
    ),

    // MariaDB-specific keywords (dialect-local redefinitions for correct scoping)
    keyword_system:      _ => token(prec(1, make_keyword("system"))),
    keyword_system_time: _ => token(prec(1, make_keyword("system_time"))),
    keyword_versioning:  _ => token(prec(1, make_keyword("versioning"))),
    keyword_period:      _ => token(prec(1, make_keyword("period"))),
    keyword_package:     _ => token(prec(1, make_keyword("package"))),
    keyword_body:        _ => token(prec(1, make_keyword("body"))),
    keyword_invisible:   _ => token(prec(1, make_keyword("invisible"))),
    keyword_visible:     _ => token(prec(1, make_keyword("visible"))),

    ...mariadb_temporal_rules,
    ...mariadb_versioning_rules,
    ...mariadb_returning_rules,
    ...mariadb_package_rules,
    ...mariadb_invisible_rules,

  },
});
