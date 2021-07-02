#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 966
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 236
#define ALIAS_COUNT 1
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 51

enum {
  sym_keyword_select = 1,
  sym_keyword_delete = 2,
  sym_keyword_insert = 3,
  sym_keyword_replace = 4,
  sym_keyword_update = 5,
  sym_keyword_into = 6,
  sym_keyword_values = 7,
  sym_keyword_set = 8,
  sym_keyword_from = 9,
  sym_keyword_left = 10,
  sym_keyword_right = 11,
  sym_keyword_inner = 12,
  sym_keyword_outer = 13,
  sym_keyword_join = 14,
  sym_keyword_on = 15,
  sym_keyword_where = 16,
  sym_keyword_order_by = 17,
  sym_keyword_group_by = 18,
  sym_keyword_having = 19,
  sym_keyword_desc = 20,
  sym_keyword_asc = 21,
  sym_keyword_limit = 22,
  sym_keyword_offset = 23,
  sym_keyword_primary = 24,
  sym_keyword_create = 25,
  sym_keyword_alter = 26,
  sym_keyword_drop = 27,
  sym_keyword_add = 28,
  sym_keyword_table = 29,
  sym_keyword_view = 30,
  sym_keyword_materialized = 31,
  sym_keyword_column = 32,
  sym_keyword_key = 33,
  sym_keyword_as = 34,
  sym_keyword_distinct = 35,
  sym_keyword_constraint = 36,
  sym_keyword_count = 37,
  sym_keyword_max = 38,
  sym_keyword_min = 39,
  sym_keyword_avg = 40,
  sym_keyword_in = 41,
  sym_keyword_and = 42,
  sym_keyword_or = 43,
  sym_keyword_not = 44,
  sym_keyword_force = 45,
  sym_keyword_use = 46,
  sym_keyword_index = 47,
  sym_keyword_for = 48,
  sym_keyword_if = 49,
  sym_keyword_exists = 50,
  sym_keyword_auto_increment = 51,
  sym_keyword_default = 52,
  sym_keyword_cascade = 53,
  aux_sym_keyword_with_token1 = 54,
  sym_keyword_no = 55,
  sym_keyword_data = 56,
  sym_keyword_type = 57,
  sym_keyword_rename = 58,
  sym_keyword_to = 59,
  sym_keyword_schema = 60,
  sym_keyword_owner = 61,
  sym_keyword_temp = 62,
  sym_keyword_temporary = 63,
  sym_keyword_null = 64,
  sym_keyword_boolean = 65,
  sym_keyword_smallserial = 66,
  sym_keyword_serial = 67,
  sym_keyword_bigserial = 68,
  sym_keyword_smallint = 69,
  aux_sym_keyword_int_token1 = 70,
  aux_sym_keyword_int_token2 = 71,
  sym_keyword_bigint = 72,
  sym_keyword_decimal = 73,
  sym_keyword_numeric = 74,
  sym_keyword_real = 75,
  aux_sym_double_token1 = 76,
  aux_sym_double_token2 = 77,
  sym_keyword_money = 78,
  aux_sym_keyword_char_token1 = 79,
  aux_sym_keyword_char_token2 = 80,
  aux_sym_keyword_varchar_token1 = 81,
  aux_sym_keyword_varchar_token2 = 82,
  sym_keyword_text = 83,
  sym_keyword_json = 84,
  sym_keyword_jsonb = 85,
  sym_keyword_xml = 86,
  sym_keyword_bytea = 87,
  sym_keyword_date = 88,
  sym_keyword_datetime = 89,
  aux_sym_keyword_timestamp_token1 = 90,
  aux_sym_keyword_timestamp_token2 = 91,
  aux_sym_keyword_timestamp_token3 = 92,
  aux_sym_keyword_timestamp_token4 = 93,
  aux_sym_keyword_timestamptz_token1 = 94,
  sym_keyword_geometry = 95,
  sym_keyword_geography = 96,
  sym_keyword_box2d = 97,
  sym_keyword_box3d = 98,
  anon_sym_LPAREN = 99,
  anon_sym_RPAREN = 100,
  anon_sym_COMMA = 101,
  sym_comment = 102,
  sym_marginalia = 103,
  anon_sym_SEMI = 104,
  anon_sym_DOT = 105,
  anon_sym_EQ = 106,
  anon_sym_STAR = 107,
  anon_sym_PLUS = 108,
  anon_sym_DASH = 109,
  anon_sym_SLASH = 110,
  anon_sym_PERCENT = 111,
  anon_sym_CARET = 112,
  anon_sym_LT = 113,
  anon_sym_LT_EQ = 114,
  anon_sym_BANG_EQ = 115,
  anon_sym_GT_EQ = 116,
  anon_sym_GT = 117,
  anon_sym_SQUOTE = 118,
  aux_sym__literal_string_token1 = 119,
  anon_sym_DQUOTE = 120,
  aux_sym__literal_string_token2 = 121,
  sym__number = 122,
  anon_sym_BQUOTE = 123,
  sym__identifier = 124,
  sym_program = 125,
  sym_keyword_with = 126,
  sym__temporary = 127,
  sym__not_null = 128,
  sym__primary_key = 129,
  sym__if_exists = 130,
  sym__if_not_exists = 131,
  sym__or_replace = 132,
  sym__default_null = 133,
  sym_direction = 134,
  sym_keyword_int = 135,
  sym_double = 136,
  sym_keyword_char = 137,
  sym_keyword_varchar = 138,
  sym_keyword_timestamp = 139,
  sym_keyword_timestamptz = 140,
  sym__type = 141,
  sym_bigint = 142,
  sym_decimal = 143,
  sym_numeric = 144,
  sym_char = 145,
  sym_varchar = 146,
  sym_statement = 147,
  sym__select_statement = 148,
  sym_select = 149,
  sym_select_expression = 150,
  sym__delete_statement = 151,
  sym__delete_from = 152,
  sym_delete = 153,
  sym__create_statement = 154,
  sym_create_table = 155,
  sym_create_view = 156,
  sym_create_materialized_view = 157,
  sym__alter_statement = 158,
  sym_alter_table = 159,
  sym_add_column = 160,
  sym_alter_column = 161,
  sym_drop_column = 162,
  sym_rename_column = 163,
  sym_alter_view = 164,
  sym__drop_statement = 165,
  sym_drop_table = 166,
  sym_drop_view = 167,
  sym_rename_object = 168,
  sym_set_schema = 169,
  sym_change_ownership = 170,
  sym_table_reference = 171,
  sym__insert_statement = 172,
  sym_insert = 173,
  sym_insert_expression = 174,
  sym__column_list_without_order = 175,
  sym__column_without_order = 176,
  sym__update_statement = 177,
  sym_update = 178,
  sym_update_expression = 179,
  sym__single_table_update = 180,
  sym__multi_table_update = 181,
  sym__table_references = 182,
  sym_assignment_list = 183,
  sym_table_options = 184,
  sym_table_option = 185,
  sym_column_definitions = 186,
  sym_column_definition = 187,
  sym_constraints = 188,
  sym_constraint = 189,
  sym__constraint_literal = 190,
  sym__primary_key_constraint = 191,
  sym__key_constraint = 192,
  sym_column_list = 193,
  sym_column = 194,
  sym__field_list = 195,
  sym_field = 196,
  sym_function_call = 197,
  sym__unary_function = 198,
  sym__count_function = 199,
  sym__multi_param_function = 200,
  sym__function_param = 201,
  sym__function_params = 202,
  sym__unary_function_name = 203,
  sym__function_name = 204,
  sym_from = 205,
  sym_table_expression = 206,
  sym_index_hint = 207,
  sym_join = 208,
  sym_where = 209,
  sym_group_by = 210,
  sym__having = 211,
  sym_order_by = 212,
  sym_order_expression = 213,
  sym_limit = 214,
  sym_offset = 215,
  sym_where_expression = 216,
  sym_predicate = 217,
  sym__expression = 218,
  sym_subquery = 219,
  sym_list = 220,
  sym_literal = 221,
  sym__literal_string = 222,
  sym_identifier = 223,
  aux_sym_alter_table_repeat1 = 224,
  aux_sym__column_list_without_order_repeat1 = 225,
  aux_sym__table_references_repeat1 = 226,
  aux_sym_assignment_list_repeat1 = 227,
  aux_sym_table_options_repeat1 = 228,
  aux_sym_column_definitions_repeat1 = 229,
  aux_sym_constraints_repeat1 = 230,
  aux_sym_column_list_repeat1 = 231,
  aux_sym__field_list_repeat1 = 232,
  aux_sym__function_params_repeat1 = 233,
  aux_sym_from_repeat1 = 234,
  aux_sym_list_repeat1 = 235,
  anon_alias_sym_if = 236,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_delete] = "keyword_delete",
  [sym_keyword_insert] = "keyword_insert",
  [sym_keyword_replace] = "keyword_replace",
  [sym_keyword_update] = "keyword_update",
  [sym_keyword_into] = "keyword_into",
  [sym_keyword_values] = "keyword_values",
  [sym_keyword_set] = "keyword_set",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_left] = "keyword_left",
  [sym_keyword_right] = "keyword_right",
  [sym_keyword_inner] = "keyword_inner",
  [sym_keyword_outer] = "keyword_outer",
  [sym_keyword_join] = "keyword_join",
  [sym_keyword_on] = "keyword_on",
  [sym_keyword_where] = "keyword_where",
  [sym_keyword_order_by] = "keyword_order_by",
  [sym_keyword_group_by] = "keyword_group_by",
  [sym_keyword_having] = "keyword_having",
  [sym_keyword_desc] = "keyword_desc",
  [sym_keyword_asc] = "keyword_asc",
  [sym_keyword_limit] = "keyword_limit",
  [sym_keyword_offset] = "keyword_offset",
  [sym_keyword_primary] = "keyword_primary",
  [sym_keyword_create] = "keyword_create",
  [sym_keyword_alter] = "keyword_alter",
  [sym_keyword_drop] = "keyword_drop",
  [sym_keyword_add] = "keyword_add",
  [sym_keyword_table] = "keyword_table",
  [sym_keyword_view] = "keyword_view",
  [sym_keyword_materialized] = "keyword_materialized",
  [sym_keyword_column] = "keyword_column",
  [sym_keyword_key] = "keyword_key",
  [sym_keyword_as] = "keyword_as",
  [sym_keyword_distinct] = "keyword_distinct",
  [sym_keyword_constraint] = "keyword_constraint",
  [sym_keyword_count] = "identifier",
  [sym_keyword_max] = "max",
  [sym_keyword_min] = "min",
  [sym_keyword_avg] = "avg",
  [sym_keyword_in] = "keyword_in",
  [sym_keyword_and] = "keyword_and",
  [sym_keyword_or] = "keyword_or",
  [sym_keyword_not] = "keyword_not",
  [sym_keyword_force] = "keyword_force",
  [sym_keyword_use] = "keyword_use",
  [sym_keyword_index] = "keyword_index",
  [sym_keyword_for] = "keyword_for",
  [sym_keyword_if] = "keyword_if",
  [sym_keyword_exists] = "keyword_exists",
  [sym_keyword_auto_increment] = "keyword_auto_increment",
  [sym_keyword_default] = "keyword_default",
  [sym_keyword_cascade] = "keyword_cascade",
  [aux_sym_keyword_with_token1] = "keyword_with_token1",
  [sym_keyword_no] = "keyword_no",
  [sym_keyword_data] = "keyword_data",
  [sym_keyword_type] = "keyword_type",
  [sym_keyword_rename] = "keyword_rename",
  [sym_keyword_to] = "keyword_to",
  [sym_keyword_schema] = "keyword_schema",
  [sym_keyword_owner] = "keyword_owner",
  [sym_keyword_temp] = "keyword_temp",
  [sym_keyword_temporary] = "keyword_temporary",
  [sym_keyword_null] = "keyword_null",
  [sym_keyword_boolean] = "keyword_boolean",
  [sym_keyword_smallserial] = "keyword_smallserial",
  [sym_keyword_serial] = "keyword_serial",
  [sym_keyword_bigserial] = "keyword_bigserial",
  [sym_keyword_smallint] = "keyword_smallint",
  [aux_sym_keyword_int_token1] = "keyword_int_token1",
  [aux_sym_keyword_int_token2] = "keyword_int_token2",
  [sym_keyword_bigint] = "keyword_bigint",
  [sym_keyword_decimal] = "keyword_decimal",
  [sym_keyword_numeric] = "keyword_numeric",
  [sym_keyword_real] = "keyword_real",
  [aux_sym_double_token1] = "double_token1",
  [aux_sym_double_token2] = "double_token2",
  [sym_keyword_money] = "keyword_money",
  [aux_sym_keyword_char_token1] = "keyword_char_token1",
  [aux_sym_keyword_char_token2] = "keyword_char_token2",
  [aux_sym_keyword_varchar_token1] = "keyword_varchar_token1",
  [aux_sym_keyword_varchar_token2] = "keyword_varchar_token2",
  [sym_keyword_text] = "keyword_text",
  [sym_keyword_json] = "keyword_json",
  [sym_keyword_jsonb] = "keyword_jsonb",
  [sym_keyword_xml] = "keyword_xml",
  [sym_keyword_bytea] = "keyword_bytea",
  [sym_keyword_date] = "keyword_date",
  [sym_keyword_datetime] = "keyword_datetime",
  [aux_sym_keyword_timestamp_token1] = "keyword_timestamp_token1",
  [aux_sym_keyword_timestamp_token2] = "keyword_timestamp_token2",
  [aux_sym_keyword_timestamp_token3] = "keyword_timestamp_token3",
  [aux_sym_keyword_timestamp_token4] = "keyword_timestamp_token4",
  [aux_sym_keyword_timestamptz_token1] = "keyword_timestamptz_token1",
  [sym_keyword_geometry] = "keyword_geometry",
  [sym_keyword_geography] = "keyword_geography",
  [sym_keyword_box2d] = "keyword_box2d",
  [sym_keyword_box3d] = "keyword_box3d",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_comment] = "comment",
  [sym_marginalia] = "marginalia",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__literal_string_token2] = "_literal_string_token2",
  [sym__number] = "_number",
  [anon_sym_BQUOTE] = "`",
  [sym__identifier] = "_identifier",
  [sym_program] = "program",
  [sym_keyword_with] = "keyword_with",
  [sym__temporary] = "_temporary",
  [sym__not_null] = "_not_null",
  [sym__primary_key] = "_primary_key",
  [sym__if_exists] = "_if_exists",
  [sym__if_not_exists] = "_if_not_exists",
  [sym__or_replace] = "_or_replace",
  [sym__default_null] = "_default_null",
  [sym_direction] = "direction",
  [sym_keyword_int] = "keyword_int",
  [sym_double] = "double",
  [sym_keyword_char] = "keyword_char",
  [sym_keyword_varchar] = "keyword_varchar",
  [sym_keyword_timestamp] = "keyword_timestamp",
  [sym_keyword_timestamptz] = "keyword_timestamptz",
  [sym__type] = "_type",
  [sym_bigint] = "bigint",
  [sym_decimal] = "decimal",
  [sym_numeric] = "numeric",
  [sym_char] = "char",
  [sym_varchar] = "varchar",
  [sym_statement] = "statement",
  [sym__select_statement] = "_select_statement",
  [sym_select] = "select",
  [sym_select_expression] = "select_expression",
  [sym__delete_statement] = "_delete_statement",
  [sym__delete_from] = "from",
  [sym_delete] = "delete",
  [sym__create_statement] = "_create_statement",
  [sym_create_table] = "create_table",
  [sym_create_view] = "create_view",
  [sym_create_materialized_view] = "create_materialized_view",
  [sym__alter_statement] = "_alter_statement",
  [sym_alter_table] = "alter_table",
  [sym_add_column] = "add_column",
  [sym_alter_column] = "alter_column",
  [sym_drop_column] = "drop_column",
  [sym_rename_column] = "rename_column",
  [sym_alter_view] = "alter_view",
  [sym__drop_statement] = "_drop_statement",
  [sym_drop_table] = "drop_table",
  [sym_drop_view] = "drop_view",
  [sym_rename_object] = "rename_object",
  [sym_set_schema] = "set_schema",
  [sym_change_ownership] = "change_ownership",
  [sym_table_reference] = "table_reference",
  [sym__insert_statement] = "_insert_statement",
  [sym_insert] = "insert",
  [sym_insert_expression] = "insert_expression",
  [sym__column_list_without_order] = "column_list",
  [sym__column_without_order] = "column",
  [sym__update_statement] = "_update_statement",
  [sym_update] = "update",
  [sym_update_expression] = "update_expression",
  [sym__single_table_update] = "_single_table_update",
  [sym__multi_table_update] = "_multi_table_update",
  [sym__table_references] = "_table_references",
  [sym_assignment_list] = "assignment_list",
  [sym_table_options] = "table_options",
  [sym_table_option] = "table_option",
  [sym_column_definitions] = "column_definitions",
  [sym_column_definition] = "column_definition",
  [sym_constraints] = "constraints",
  [sym_constraint] = "constraint",
  [sym__constraint_literal] = "_constraint_literal",
  [sym__primary_key_constraint] = "_primary_key_constraint",
  [sym__key_constraint] = "_key_constraint",
  [sym_column_list] = "column_list",
  [sym_column] = "column",
  [sym__field_list] = "_field_list",
  [sym_field] = "field",
  [sym_function_call] = "function_call",
  [sym__unary_function] = "_unary_function",
  [sym__count_function] = "_count_function",
  [sym__multi_param_function] = "_multi_param_function",
  [sym__function_param] = "_function_param",
  [sym__function_params] = "_function_params",
  [sym__unary_function_name] = "identifier",
  [sym__function_name] = "identifier",
  [sym_from] = "from",
  [sym_table_expression] = "table_expression",
  [sym_index_hint] = "index_hint",
  [sym_join] = "join",
  [sym_where] = "where",
  [sym_group_by] = "group_by",
  [sym__having] = "_having",
  [sym_order_by] = "order_by",
  [sym_order_expression] = "order_expression",
  [sym_limit] = "limit",
  [sym_offset] = "offset",
  [sym_where_expression] = "where_expression",
  [sym_predicate] = "predicate",
  [sym__expression] = "_expression",
  [sym_subquery] = "subquery",
  [sym_list] = "list",
  [sym_literal] = "literal",
  [sym__literal_string] = "_literal_string",
  [sym_identifier] = "identifier",
  [aux_sym_alter_table_repeat1] = "alter_table_repeat1",
  [aux_sym__column_list_without_order_repeat1] = "_column_list_without_order_repeat1",
  [aux_sym__table_references_repeat1] = "_table_references_repeat1",
  [aux_sym_assignment_list_repeat1] = "assignment_list_repeat1",
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
  [aux_sym_column_definitions_repeat1] = "column_definitions_repeat1",
  [aux_sym_constraints_repeat1] = "constraints_repeat1",
  [aux_sym_column_list_repeat1] = "column_list_repeat1",
  [aux_sym__field_list_repeat1] = "_field_list_repeat1",
  [aux_sym__function_params_repeat1] = "_function_params_repeat1",
  [aux_sym_from_repeat1] = "from_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [anon_alias_sym_if] = "if",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_delete] = sym_keyword_delete,
  [sym_keyword_insert] = sym_keyword_insert,
  [sym_keyword_replace] = sym_keyword_replace,
  [sym_keyword_update] = sym_keyword_update,
  [sym_keyword_into] = sym_keyword_into,
  [sym_keyword_values] = sym_keyword_values,
  [sym_keyword_set] = sym_keyword_set,
  [sym_keyword_from] = sym_keyword_from,
  [sym_keyword_left] = sym_keyword_left,
  [sym_keyword_right] = sym_keyword_right,
  [sym_keyword_inner] = sym_keyword_inner,
  [sym_keyword_outer] = sym_keyword_outer,
  [sym_keyword_join] = sym_keyword_join,
  [sym_keyword_on] = sym_keyword_on,
  [sym_keyword_where] = sym_keyword_where,
  [sym_keyword_order_by] = sym_keyword_order_by,
  [sym_keyword_group_by] = sym_keyword_group_by,
  [sym_keyword_having] = sym_keyword_having,
  [sym_keyword_desc] = sym_keyword_desc,
  [sym_keyword_asc] = sym_keyword_asc,
  [sym_keyword_limit] = sym_keyword_limit,
  [sym_keyword_offset] = sym_keyword_offset,
  [sym_keyword_primary] = sym_keyword_primary,
  [sym_keyword_create] = sym_keyword_create,
  [sym_keyword_alter] = sym_keyword_alter,
  [sym_keyword_drop] = sym_keyword_drop,
  [sym_keyword_add] = sym_keyword_add,
  [sym_keyword_table] = sym_keyword_table,
  [sym_keyword_view] = sym_keyword_view,
  [sym_keyword_materialized] = sym_keyword_materialized,
  [sym_keyword_column] = sym_keyword_column,
  [sym_keyword_key] = sym_keyword_key,
  [sym_keyword_as] = sym_keyword_as,
  [sym_keyword_distinct] = sym_keyword_distinct,
  [sym_keyword_constraint] = sym_keyword_constraint,
  [sym_keyword_count] = sym_identifier,
  [sym_keyword_max] = sym_keyword_max,
  [sym_keyword_min] = sym_keyword_min,
  [sym_keyword_avg] = sym_keyword_avg,
  [sym_keyword_in] = sym_keyword_in,
  [sym_keyword_and] = sym_keyword_and,
  [sym_keyword_or] = sym_keyword_or,
  [sym_keyword_not] = sym_keyword_not,
  [sym_keyword_force] = sym_keyword_force,
  [sym_keyword_use] = sym_keyword_use,
  [sym_keyword_index] = sym_keyword_index,
  [sym_keyword_for] = sym_keyword_for,
  [sym_keyword_if] = sym_keyword_if,
  [sym_keyword_exists] = sym_keyword_exists,
  [sym_keyword_auto_increment] = sym_keyword_auto_increment,
  [sym_keyword_default] = sym_keyword_default,
  [sym_keyword_cascade] = sym_keyword_cascade,
  [aux_sym_keyword_with_token1] = aux_sym_keyword_with_token1,
  [sym_keyword_no] = sym_keyword_no,
  [sym_keyword_data] = sym_keyword_data,
  [sym_keyword_type] = sym_keyword_type,
  [sym_keyword_rename] = sym_keyword_rename,
  [sym_keyword_to] = sym_keyword_to,
  [sym_keyword_schema] = sym_keyword_schema,
  [sym_keyword_owner] = sym_keyword_owner,
  [sym_keyword_temp] = sym_keyword_temp,
  [sym_keyword_temporary] = sym_keyword_temporary,
  [sym_keyword_null] = sym_keyword_null,
  [sym_keyword_boolean] = sym_keyword_boolean,
  [sym_keyword_smallserial] = sym_keyword_smallserial,
  [sym_keyword_serial] = sym_keyword_serial,
  [sym_keyword_bigserial] = sym_keyword_bigserial,
  [sym_keyword_smallint] = sym_keyword_smallint,
  [aux_sym_keyword_int_token1] = aux_sym_keyword_int_token1,
  [aux_sym_keyword_int_token2] = aux_sym_keyword_int_token2,
  [sym_keyword_bigint] = sym_keyword_bigint,
  [sym_keyword_decimal] = sym_keyword_decimal,
  [sym_keyword_numeric] = sym_keyword_numeric,
  [sym_keyword_real] = sym_keyword_real,
  [aux_sym_double_token1] = aux_sym_double_token1,
  [aux_sym_double_token2] = aux_sym_double_token2,
  [sym_keyword_money] = sym_keyword_money,
  [aux_sym_keyword_char_token1] = aux_sym_keyword_char_token1,
  [aux_sym_keyword_char_token2] = aux_sym_keyword_char_token2,
  [aux_sym_keyword_varchar_token1] = aux_sym_keyword_varchar_token1,
  [aux_sym_keyword_varchar_token2] = aux_sym_keyword_varchar_token2,
  [sym_keyword_text] = sym_keyword_text,
  [sym_keyword_json] = sym_keyword_json,
  [sym_keyword_jsonb] = sym_keyword_jsonb,
  [sym_keyword_xml] = sym_keyword_xml,
  [sym_keyword_bytea] = sym_keyword_bytea,
  [sym_keyword_date] = sym_keyword_date,
  [sym_keyword_datetime] = sym_keyword_datetime,
  [aux_sym_keyword_timestamp_token1] = aux_sym_keyword_timestamp_token1,
  [aux_sym_keyword_timestamp_token2] = aux_sym_keyword_timestamp_token2,
  [aux_sym_keyword_timestamp_token3] = aux_sym_keyword_timestamp_token3,
  [aux_sym_keyword_timestamp_token4] = aux_sym_keyword_timestamp_token4,
  [aux_sym_keyword_timestamptz_token1] = aux_sym_keyword_timestamptz_token1,
  [sym_keyword_geometry] = sym_keyword_geometry,
  [sym_keyword_geography] = sym_keyword_geography,
  [sym_keyword_box2d] = sym_keyword_box2d,
  [sym_keyword_box3d] = sym_keyword_box3d,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_comment] = sym_comment,
  [sym_marginalia] = sym_marginalia,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__literal_string_token2] = aux_sym__literal_string_token2,
  [sym__number] = sym__number,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym__identifier] = sym__identifier,
  [sym_program] = sym_program,
  [sym_keyword_with] = sym_keyword_with,
  [sym__temporary] = sym__temporary,
  [sym__not_null] = sym__not_null,
  [sym__primary_key] = sym__primary_key,
  [sym__if_exists] = sym__if_exists,
  [sym__if_not_exists] = sym__if_not_exists,
  [sym__or_replace] = sym__or_replace,
  [sym__default_null] = sym__default_null,
  [sym_direction] = sym_direction,
  [sym_keyword_int] = sym_keyword_int,
  [sym_double] = sym_double,
  [sym_keyword_char] = sym_keyword_char,
  [sym_keyword_varchar] = sym_keyword_varchar,
  [sym_keyword_timestamp] = sym_keyword_timestamp,
  [sym_keyword_timestamptz] = sym_keyword_timestamptz,
  [sym__type] = sym__type,
  [sym_bigint] = sym_bigint,
  [sym_decimal] = sym_decimal,
  [sym_numeric] = sym_numeric,
  [sym_char] = sym_char,
  [sym_varchar] = sym_varchar,
  [sym_statement] = sym_statement,
  [sym__select_statement] = sym__select_statement,
  [sym_select] = sym_select,
  [sym_select_expression] = sym_select_expression,
  [sym__delete_statement] = sym__delete_statement,
  [sym__delete_from] = sym_from,
  [sym_delete] = sym_delete,
  [sym__create_statement] = sym__create_statement,
  [sym_create_table] = sym_create_table,
  [sym_create_view] = sym_create_view,
  [sym_create_materialized_view] = sym_create_materialized_view,
  [sym__alter_statement] = sym__alter_statement,
  [sym_alter_table] = sym_alter_table,
  [sym_add_column] = sym_add_column,
  [sym_alter_column] = sym_alter_column,
  [sym_drop_column] = sym_drop_column,
  [sym_rename_column] = sym_rename_column,
  [sym_alter_view] = sym_alter_view,
  [sym__drop_statement] = sym__drop_statement,
  [sym_drop_table] = sym_drop_table,
  [sym_drop_view] = sym_drop_view,
  [sym_rename_object] = sym_rename_object,
  [sym_set_schema] = sym_set_schema,
  [sym_change_ownership] = sym_change_ownership,
  [sym_table_reference] = sym_table_reference,
  [sym__insert_statement] = sym__insert_statement,
  [sym_insert] = sym_insert,
  [sym_insert_expression] = sym_insert_expression,
  [sym__column_list_without_order] = sym_column_list,
  [sym__column_without_order] = sym_column,
  [sym__update_statement] = sym__update_statement,
  [sym_update] = sym_update,
  [sym_update_expression] = sym_update_expression,
  [sym__single_table_update] = sym__single_table_update,
  [sym__multi_table_update] = sym__multi_table_update,
  [sym__table_references] = sym__table_references,
  [sym_assignment_list] = sym_assignment_list,
  [sym_table_options] = sym_table_options,
  [sym_table_option] = sym_table_option,
  [sym_column_definitions] = sym_column_definitions,
  [sym_column_definition] = sym_column_definition,
  [sym_constraints] = sym_constraints,
  [sym_constraint] = sym_constraint,
  [sym__constraint_literal] = sym__constraint_literal,
  [sym__primary_key_constraint] = sym__primary_key_constraint,
  [sym__key_constraint] = sym__key_constraint,
  [sym_column_list] = sym_column_list,
  [sym_column] = sym_column,
  [sym__field_list] = sym__field_list,
  [sym_field] = sym_field,
  [sym_function_call] = sym_function_call,
  [sym__unary_function] = sym__unary_function,
  [sym__count_function] = sym__count_function,
  [sym__multi_param_function] = sym__multi_param_function,
  [sym__function_param] = sym__function_param,
  [sym__function_params] = sym__function_params,
  [sym__unary_function_name] = sym_identifier,
  [sym__function_name] = sym_identifier,
  [sym_from] = sym_from,
  [sym_table_expression] = sym_table_expression,
  [sym_index_hint] = sym_index_hint,
  [sym_join] = sym_join,
  [sym_where] = sym_where,
  [sym_group_by] = sym_group_by,
  [sym__having] = sym__having,
  [sym_order_by] = sym_order_by,
  [sym_order_expression] = sym_order_expression,
  [sym_limit] = sym_limit,
  [sym_offset] = sym_offset,
  [sym_where_expression] = sym_where_expression,
  [sym_predicate] = sym_predicate,
  [sym__expression] = sym__expression,
  [sym_subquery] = sym_subquery,
  [sym_list] = sym_list,
  [sym_literal] = sym_literal,
  [sym__literal_string] = sym__literal_string,
  [sym_identifier] = sym_identifier,
  [aux_sym_alter_table_repeat1] = aux_sym_alter_table_repeat1,
  [aux_sym__column_list_without_order_repeat1] = aux_sym__column_list_without_order_repeat1,
  [aux_sym__table_references_repeat1] = aux_sym__table_references_repeat1,
  [aux_sym_assignment_list_repeat1] = aux_sym_assignment_list_repeat1,
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
  [aux_sym_column_definitions_repeat1] = aux_sym_column_definitions_repeat1,
  [aux_sym_constraints_repeat1] = aux_sym_constraints_repeat1,
  [aux_sym_column_list_repeat1] = aux_sym_column_list_repeat1,
  [aux_sym__field_list_repeat1] = aux_sym__field_list_repeat1,
  [aux_sym__function_params_repeat1] = aux_sym__function_params_repeat1,
  [aux_sym_from_repeat1] = aux_sym_from_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [anon_alias_sym_if] = anon_alias_sym_if,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_select] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_delete] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_insert] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_replace] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_update] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_into] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_values] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_set] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_from] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_left] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_right] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_outer] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_join] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_on] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_where] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_order_by] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_having] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_asc] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_create] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_alter] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_drop] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_add] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_table] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_view] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_materialized] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_column] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_key] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_as] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_distinct] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_count] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_max] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword_min] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword_avg] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword_in] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_and] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_or] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_not] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_force] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_use] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_index] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_for] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_if] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_auto_increment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_default] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_cascade] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keyword_with_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_no] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_data] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_type] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_rename] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_to] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_owner] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_temp] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_temporary] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_null] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_smallserial] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_serial] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_bigserial] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_smallint] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keyword_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_int_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_bigint] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_real] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_money] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keyword_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_varchar_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_varchar_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_text] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_json] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_jsonb] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_xml] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_bytea] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_date] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_datetime] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keyword_timestamp_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_timestamp_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_timestamp_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_timestamp_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_timestamptz_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_geometry] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_geography] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_box2d] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_box3d] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_marginalia] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_with] = {
    .visible = true,
    .named = true,
  },
  [sym__temporary] = {
    .visible = false,
    .named = true,
  },
  [sym__not_null] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_key] = {
    .visible = false,
    .named = true,
  },
  [sym__if_exists] = {
    .visible = false,
    .named = true,
  },
  [sym__if_not_exists] = {
    .visible = false,
    .named = true,
  },
  [sym__or_replace] = {
    .visible = false,
    .named = true,
  },
  [sym__default_null] = {
    .visible = false,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_int] = {
    .visible = true,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_char] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_varchar] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_timestamptz] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_bigint] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_varchar] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__select_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__delete_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__delete_from] = {
    .visible = true,
    .named = true,
  },
  [sym_delete] = {
    .visible = true,
    .named = true,
  },
  [sym__create_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_create_table] = {
    .visible = true,
    .named = true,
  },
  [sym_create_view] = {
    .visible = true,
    .named = true,
  },
  [sym_create_materialized_view] = {
    .visible = true,
    .named = true,
  },
  [sym__alter_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_alter_table] = {
    .visible = true,
    .named = true,
  },
  [sym_add_column] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_column] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_column] = {
    .visible = true,
    .named = true,
  },
  [sym_rename_column] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_view] = {
    .visible = true,
    .named = true,
  },
  [sym__drop_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_drop_table] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_view] = {
    .visible = true,
    .named = true,
  },
  [sym_rename_object] = {
    .visible = true,
    .named = true,
  },
  [sym_set_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_change_ownership] = {
    .visible = true,
    .named = true,
  },
  [sym_table_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__insert_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_insert] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__column_list_without_order] = {
    .visible = true,
    .named = true,
  },
  [sym__column_without_order] = {
    .visible = true,
    .named = true,
  },
  [sym__update_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_update] = {
    .visible = true,
    .named = true,
  },
  [sym_update_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__single_table_update] = {
    .visible = false,
    .named = true,
  },
  [sym__multi_table_update] = {
    .visible = false,
    .named = true,
  },
  [sym__table_references] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_list] = {
    .visible = true,
    .named = true,
  },
  [sym_table_options] = {
    .visible = true,
    .named = true,
  },
  [sym_table_option] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__constraint_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_key_constraint] = {
    .visible = false,
    .named = true,
  },
  [sym__key_constraint] = {
    .visible = false,
    .named = true,
  },
  [sym_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym_column] = {
    .visible = true,
    .named = true,
  },
  [sym__field_list] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_function] = {
    .visible = false,
    .named = true,
  },
  [sym__count_function] = {
    .visible = false,
    .named = true,
  },
  [sym__multi_param_function] = {
    .visible = false,
    .named = true,
  },
  [sym__function_param] = {
    .visible = false,
    .named = true,
  },
  [sym__function_params] = {
    .visible = false,
    .named = true,
  },
  [sym__unary_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym__function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_table_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_index_hint] = {
    .visible = true,
    .named = true,
  },
  [sym_join] = {
    .visible = true,
    .named = true,
  },
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym__having] = {
    .visible = false,
    .named = true,
  },
  [sym_order_by] = {
    .visible = true,
    .named = true,
  },
  [sym_order_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_where_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_subquery] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_alter_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__column_list_without_order_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__table_references_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_if] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_index_name = 2,
  field_left = 3,
  field_name = 4,
  field_new_name = 5,
  field_old_name = 6,
  field_operator = 7,
  field_parameter = 8,
  field_precision = 9,
  field_right = 10,
  field_scale = 11,
  field_schema = 12,
  field_size = 13,
  field_table_alias = 14,
  field_type = 15,
  field_value = 16,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_index_name] = "index_name",
  [field_left] = "left",
  [field_name] = "name",
  [field_new_name] = "new_name",
  [field_old_name] = "old_name",
  [field_operator] = "operator",
  [field_parameter] = "parameter",
  [field_precision] = "precision",
  [field_right] = "right",
  [field_scale] = "scale",
  [field_schema] = "schema",
  [field_size] = "size",
  [field_table_alias] = "table_alias",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 3},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 3, .length = 1},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 1},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 36, .length = 3},
  [21] = {.index = 39, .length = 3},
  [22] = {.index = 42, .length = 3},
  [23] = {.index = 45, .length = 1},
  [24] = {.index = 46, .length = 1},
  [25] = {.index = 47, .length = 2},
  [26] = {.index = 49, .length = 1},
  [27] = {.index = 50, .length = 1},
  [28] = {.index = 51, .length = 3},
  [29] = {.index = 54, .length = 3},
  [30] = {.index = 57, .length = 3},
  [31] = {.index = 60, .length = 3},
  [32] = {.index = 63, .length = 4},
  [33] = {.index = 67, .length = 1},
  [34] = {.index = 68, .length = 2},
  [35] = {.index = 70, .length = 1},
  [36] = {.index = 71, .length = 2},
  [37] = {.index = 73, .length = 3},
  [38] = {.index = 76, .length = 2},
  [39] = {.index = 78, .length = 3},
  [40] = {.index = 81, .length = 4},
  [41] = {.index = 85, .length = 1},
  [42] = {.index = 86, .length = 2},
  [43] = {.index = 88, .length = 2},
  [44] = {.index = 90, .length = 3},
  [45] = {.index = 93, .length = 1},
  [46] = {.index = 94, .length = 1},
  [47] = {.index = 95, .length = 1},
  [48] = {.index = 96, .length = 3},
  [49] = {.index = 99, .length = 2},
  [50] = {.index = 101, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alias, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [3] =
    {field_name, 0},
  [4] =
    {field_alias, 1},
    {field_name, 0},
  [6] =
    {field_alias, 2},
    {field_name, 0},
  [8] =
    {field_name, 2},
    {field_table_alias, 0},
  [10] =
    {field_name, 2},
    {field_schema, 0},
  [12] =
    {field_name, 0},
    {field_table_alias, 1},
  [14] =
    {field_name, 0},
    {field_parameter, 2},
  [16] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [18] =
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [20] =
    {field_alias, 3},
    {field_name, 2},
    {field_table_alias, 0},
  [23] =
    {field_name, 0},
    {field_table_alias, 2},
  [25] =
    {field_name, 0},
    {field_parameter, 3},
  [27] =
    {field_alias, 4},
    {field_name, 0},
    {field_parameter, 2},
  [30] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [33] =
    {field_parameter, 1},
  [34] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [36] =
    {field_alias, 4},
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [39] =
    {field_alias, 4},
    {field_name, 2},
    {field_table_alias, 0},
  [42] =
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [45] =
    {field_index_name, 3},
  [46] =
    {field_name, 1, .inherited = true},
  [47] =
    {field_name, 0},
    {field_type, 1},
  [49] =
    {field_schema, 2},
  [50] =
    {field_name, 2},
  [51] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 3},
  [54] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 3},
  [57] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2},
  [60] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [63] =
    {field_alias, 5},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [67] =
    {field_name, 0, .inherited = true},
  [68] =
    {field_name, 0},
    {field_value, 2},
  [70] =
    {field_name, 3},
  [71] =
    {field_new_name, 3},
    {field_old_name, 1},
  [73] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 4},
  [76] =
    {field_name, 0},
    {field_parameter, 4},
  [78] =
    {field_alias, 6},
    {field_name, 0},
    {field_parameter, 3},
  [81] =
    {field_alias, 6},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [85] =
    {field_index_name, 5},
  [86] =
    {field_name, 2},
    {field_type, 4},
  [88] =
    {field_new_name, 4},
    {field_old_name, 2},
  [90] =
    {field_alias, 7},
    {field_name, 0},
    {field_parameter, 4},
  [93] =
    {field_name, 1},
  [94] =
    {field_size, 2},
  [95] =
    {field_precision, 2},
  [96] =
    {field_alias, 8},
    {field_name, 0},
    {field_parameter, 4},
  [99] =
    {field_name, 2},
    {field_type, 6},
  [101] =
    {field_precision, 2},
    {field_scale, 4},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_if,
  },
  [13] = {
    [0] = sym_identifier,
  },
  [46] = {
    [2] = sym_literal,
  },
  [47] = {
    [2] = sym_literal,
  },
  [50] = {
    [2] = sym_literal,
    [4] = sym_literal,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(784);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(383);
      if (lookahead == 'F') ADVANCE(279);
      if (lookahead == 'G') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == 'J') ADVANCE(280);
      if (lookahead == 'K') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(274);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'P') ADVANCE(311);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(297);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(184);
      if (lookahead == 'X') ADVANCE(233);
      if (lookahead == 'Z') ADVANCE(292);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'b') ADVANCE(544);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'g') ADVANCE(496);
      if (lookahead == 'h') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(521);
      if (lookahead == 'j') ADVANCE(631);
      if (lookahead == 'k') ADVANCE(468);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(626);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead == 'p') ADVANCE(663);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead == 'v') ADVANCE(405);
      if (lookahead == 'w') ADVANCE(536);
      if (lookahead == 'x') ADVANCE(585);
      if (lookahead == 'z') ADVANCE(644);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(437);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(438);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(260);
      if (lookahead == 'D') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(289);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead == 'M') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(323);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == 'V') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(184);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead == 'd') ADVANCE(488);
      if (lookahead == 'f') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == 'm') ADVANCE(436);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == 'v') ADVANCE(430);
      if (lookahead == 'w') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(756)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'O') ADVANCE(1057);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(762)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'G') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(431);
      if (lookahead == 'g') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(652);
      if (lookahead == 'w') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(761)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1034);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1140);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(751)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(757)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(760)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(758)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'O') ADVANCE(1057);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(763)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1034);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'W') ADVANCE(1013);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1140);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(750)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'W') ADVANCE(1019);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(755)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'W') ADVANCE(1019);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(759)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1088);
      if (lookahead == 'C') ADVANCE(1049);
      if (lookahead == 'D') ADVANCE(1020);
      if (lookahead == 'I') ADVANCE(1008);
      if (lookahead == 'M') ADVANCE(986);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'c') ADVANCE(1155);
      if (lookahead == 'd') ADVANCE(1126);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1092);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(754)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1088);
      if (lookahead == 'C') ADVANCE(1049);
      if (lookahead == 'I') ADVANCE(1008);
      if (lookahead == 'M') ADVANCE(986);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'c') ADVANCE(1155);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1092);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(753)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1088);
      if (lookahead == 'C') ADVANCE(1049);
      if (lookahead == 'I') ADVANCE(1008);
      if (lookahead == 'M') ADVANCE(986);
      if (lookahead == 'S') ADVANCE(998);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'c') ADVANCE(1155);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1092);
      if (lookahead == 's') ADVANCE(1104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(752)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(766)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(772)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(288);
      if (lookahead == 'G') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'J') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(281);
      if (lookahead == 'N') ADVANCE(291);
      if (lookahead == 'O') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(323);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(297);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == 'X') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'b') ADVANCE(544);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead == 'd') ADVANCE(413);
      if (lookahead == 'f') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(496);
      if (lookahead == 'h') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'j') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(632);
      if (lookahead == 'n') ADVANCE(643);
      if (lookahead == 'o') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead == 'v') ADVANCE(410);
      if (lookahead == 'w') ADVANCE(537);
      if (lookahead == 'x') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(749)
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1068);
      if (lookahead == 'D') ADVANCE(1007);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1174);
      if (lookahead == 'd') ADVANCE(1113);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(771)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(778)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1041);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(765)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1041);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(768)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1019);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1170);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(773)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 31:
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1068);
      if (lookahead == 'D') ADVANCE(1007);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'W') ADVANCE(1019);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1174);
      if (lookahead == 'd') ADVANCE(1113);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(770)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1041);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == 'W') ADVANCE(1013);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(764)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(774)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'O') ADVANCE(1038);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'o') ADVANCE(1144);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(775)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'D') ADVANCE(1004);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'd') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(776)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1041);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == 'W') ADVANCE(1013);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(767)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(777)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1053);
      if (lookahead == 'K') ADVANCE(1002);
      if (lookahead == 'P') ADVANCE(1065);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'c') ADVANCE(1159);
      if (lookahead == 'k') ADVANCE(1108);
      if (lookahead == 'p') ADVANCE(1171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(769)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1051);
      if (lookahead == 'T') ADVANCE(1047);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead == 't') ADVANCE(1153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(781)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'O') ADVANCE(1038);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'o') ADVANCE(1144);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(779)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(1008);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(780)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(109);
      if (lookahead == '3') ADVANCE(110);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(461);
      if (lookahead == '3') ADVANCE(462);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(959);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'O') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(381);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(362);
      if (lookahead == 'I') ADVANCE(251);
      if (lookahead == 'O') ADVANCE(271);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'E') ADVANCE(236);
      if (lookahead == 'I') ADVANCE(242);
      if (lookahead == 'O') ADVANCE(890);
      if (lookahead == 'Y') ADVANCE(299);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'E') ADVANCE(235);
      if (lookahead == 'I') ADVANCE(247);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(887);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(887);
      if (lookahead == 'E') ADVANCE(924);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(923);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(892);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(223);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(302);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'O') ADVANCE(380);
      if (lookahead == 'R') ADVANCE(282);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(380);
      if (lookahead == 'R') ADVANCE(282);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(225);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(377);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(298);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(224);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(238);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(216);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(217);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(255);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(226);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(312);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(218);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(219);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(307);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(316);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(367);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(243);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(368);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(370);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(210);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(361);
      END_STATE();
    case 85:
      if (lookahead == 'B') ADVANCE(390);
      END_STATE();
    case 86:
      if (lookahead == 'B') ADVANCE(391);
      END_STATE();
    case 87:
      if (lookahead == 'B') ADVANCE(229);
      END_STATE();
    case 88:
      if (lookahead == 'B') ADVANCE(230);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(188);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == 'M') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(814);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(812);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(908);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(196);
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'L') ADVANCE(165);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(196);
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(189);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'Y') ADVANCE(200);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(348);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(351);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(134);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(194);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(322);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(371);
      END_STATE();
    case 105:
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(833);
      if (lookahead == 'U') ADVANCE(359);
      if (lookahead == 'V') ADVANCE(175);
      END_STATE();
    case 106:
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'S') ADVANCE(832);
      END_STATE();
    case 107:
      if (lookahead == 'D') ADVANCE(824);
      END_STATE();
    case 108:
      if (lookahead == 'D') ADVANCE(856);
      END_STATE();
    case 109:
      if (lookahead == 'D') ADVANCE(937);
      END_STATE();
    case 110:
      if (lookahead == 'D') ADVANCE(938);
      END_STATE();
    case 111:
      if (lookahead == 'D') ADVANCE(827);
      END_STATE();
    case 112:
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 113:
      if (lookahead == 'D') ADVANCE(133);
      END_STATE();
    case 114:
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == 'S') ADVANCE(161);
      if (lookahead == 'T') ADVANCE(903);
      END_STATE();
    case 115:
      if (lookahead == 'D') ADVANCE(82);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(386);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'I') ADVANCE(237);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(179);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == 'M') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(867);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(382);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(931);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(888);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(933);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(865);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(825);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(807);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(821);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(787);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(910);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(889);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(790);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(879);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(789);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(926);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(930);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(385);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(890);
      if (lookahead == 'Y') ADVANCE(299);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(387);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(384);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead == 'R') ADVANCE(284);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(303);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(304);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(327);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(241);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(326);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(305);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(306);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(366);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(347);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(309);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(245);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(369);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(270);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(329);
      END_STATE();
    case 169:
      if (lookahead == 'F') ADVANCE(873);
      if (lookahead == 'N') ADVANCE(851);
      END_STATE();
    case 170:
      if (lookahead == 'F') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(805);
      if (lookahead == 'R') ADVANCE(859);
      if (lookahead == 'U') ADVANCE(364);
      if (lookahead == 'W') ADVANCE(265);
      END_STATE();
    case 171:
      if (lookahead == 'F') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(858);
      END_STATE();
    case 172:
      if (lookahead == 'F') ADVANCE(338);
      END_STATE();
    case 173:
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 174:
      if (lookahead == 'F') ADVANCE(341);
      END_STATE();
    case 175:
      if (lookahead == 'G') ADVANCE(848);
      END_STATE();
    case 176:
      if (lookahead == 'G') ADVANCE(204);
      END_STATE();
    case 177:
      if (lookahead == 'G') ADVANCE(811);
      END_STATE();
    case 178:
      if (lookahead == 'G') ADVANCE(917);
      END_STATE();
    case 179:
      if (lookahead == 'G') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == 'G') ADVANCE(318);
      if (lookahead == 'M') ADVANCE(158);
      END_STATE();
    case 181:
      if (lookahead == 'G') ADVANCE(162);
      END_STATE();
    case 182:
      if (lookahead == 'H') ADVANCE(881);
      END_STATE();
    case 183:
      if (lookahead == 'H') ADVANCE(880);
      END_STATE();
    case 184:
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(356);
      END_STATE();
    case 185:
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(360);
      END_STATE();
    case 186:
      if (lookahead == 'H') ADVANCE(392);
      END_STATE();
    case 187:
      if (lookahead == 'H') ADVANCE(345);
      END_STATE();
    case 188:
      if (lookahead == 'H') ADVANCE(152);
      END_STATE();
    case 189:
      if (lookahead == 'H') ADVANCE(76);
      END_STATE();
    case 190:
      if (lookahead == 'I') ADVANCE(396);
      END_STATE();
    case 191:
      if (lookahead == 'I') ADVANCE(237);
      END_STATE();
    case 192:
      if (lookahead == 'I') ADVANCE(176);
      if (lookahead == 'O') ADVANCE(283);
      if (lookahead == 'Y') ADVANCE(372);
      END_STATE();
    case 193:
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 194:
      if (lookahead == 'I') ADVANCE(335);
      END_STATE();
    case 195:
      if (lookahead == 'I') ADVANCE(252);
      END_STATE();
    case 196:
      if (lookahead == 'I') ADVANCE(249);
      END_STATE();
    case 197:
      if (lookahead == 'I') ADVANCE(261);
      END_STATE();
    case 198:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 199:
      if (lookahead == 'I') ADVANCE(273);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(262);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(344);
      END_STATE();
    case 202:
      if (lookahead == 'I') ADVANCE(263);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 204:
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(167);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(287);
      END_STATE();
    case 206:
      if (lookahead == 'I') ADVANCE(336);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(244);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(168);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(269);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 213:
      if (lookahead == 'L') ADVANCE(922);
      END_STATE();
    case 214:
      if (lookahead == 'L') ADVANCE(897);
      END_STATE();
    case 215:
      if (lookahead == 'L') ADVANCE(909);
      END_STATE();
    case 216:
      if (lookahead == 'L') ADVANCE(900);
      END_STATE();
    case 217:
      if (lookahead == 'L') ADVANCE(907);
      END_STATE();
    case 218:
      if (lookahead == 'L') ADVANCE(901);
      END_STATE();
    case 219:
      if (lookahead == 'L') ADVANCE(899);
      END_STATE();
    case 220:
      if (lookahead == 'L') ADVANCE(376);
      if (lookahead == 'N') ADVANCE(334);
      if (lookahead == 'U') ADVANCE(264);
      END_STATE();
    case 221:
      if (lookahead == 'L') ADVANCE(214);
      if (lookahead == 'M') ADVANCE(153);
      END_STATE();
    case 222:
      if (lookahead == 'L') ADVANCE(379);
      if (lookahead == 'R') ADVANCE(96);
      END_STATE();
    case 223:
      if (lookahead == 'L') ADVANCE(379);
      if (lookahead == 'R') ADVANCE(95);
      END_STATE();
    case 224:
      if (lookahead == 'L') ADVANCE(232);
      END_STATE();
    case 225:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(190);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == 'T') ADVANCE(793);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(349);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(126);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(154);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(208);
      END_STATE();
    case 233:
      if (lookahead == 'M') ADVANCE(213);
      END_STATE();
    case 234:
      if (lookahead == 'M') ADVANCE(794);
      END_STATE();
    case 235:
      if (lookahead == 'M') ADVANCE(294);
      END_STATE();
    case 236:
      if (lookahead == 'M') ADVANCE(294);
      if (lookahead == 'X') ADVANCE(342);
      END_STATE();
    case 237:
      if (lookahead == 'M') ADVANCE(201);
      END_STATE();
    case 238:
      if (lookahead == 'M') ADVANCE(296);
      END_STATE();
    case 239:
      if (lookahead == 'M') ADVANCE(254);
      END_STATE();
    case 240:
      if (lookahead == 'M') ADVANCE(153);
      END_STATE();
    case 241:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 242:
      if (lookahead == 'M') ADVANCE(122);
      END_STATE();
    case 243:
      if (lookahead == 'M') ADVANCE(131);
      END_STATE();
    case 244:
      if (lookahead == 'M') ADVANCE(135);
      END_STATE();
    case 245:
      if (lookahead == 'M') ADVANCE(166);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(137);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(70);
      END_STATE();
    case 250:
      if (lookahead == 'N') ADVANCE(805);
      if (lookahead == 'R') ADVANCE(112);
      if (lookahead == 'W') ADVANCE(265);
      END_STATE();
    case 251:
      if (lookahead == 'N') ADVANCE(846);
      END_STATE();
    case 252:
      if (lookahead == 'N') ADVANCE(803);
      END_STATE();
    case 253:
      if (lookahead == 'N') ADVANCE(919);
      END_STATE();
    case 254:
      if (lookahead == 'N') ADVANCE(828);
      END_STATE();
    case 255:
      if (lookahead == 'N') ADVANCE(898);
      END_STATE();
    case 256:
      if (lookahead == 'N') ADVANCE(911);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(850);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(108);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'U') ADVANCE(359);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(177);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(178);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(343);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(157);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(346);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(124);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(352);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(353);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(354);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(139);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(363);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 274:
      if (lookahead == 'O') ADVANCE(885);
      if (lookahead == 'U') ADVANCE(221);
      END_STATE();
    case 275:
      if (lookahead == 'O') ADVANCE(180);
      END_STATE();
    case 276:
      if (lookahead == 'O') ADVANCE(397);
      END_STATE();
    case 277:
      if (lookahead == 'O') ADVANCE(884);
      END_STATE();
    case 278:
      if (lookahead == 'O') ADVANCE(791);
      END_STATE();
    case 279:
      if (lookahead == 'O') ADVANCE(301);
      if (lookahead == 'R') ADVANCE(285);
      END_STATE();
    case 280:
      if (lookahead == 'O') ADVANCE(195);
      if (lookahead == 'S') ADVANCE(286);
      END_STATE();
    case 281:
      if (lookahead == 'O') ADVANCE(271);
      END_STATE();
    case 282:
      if (lookahead == 'O') ADVANCE(293);
      END_STATE();
    case 283:
      if (lookahead == 'O') ADVANCE(231);
      if (lookahead == 'X') ADVANCE(44);
      END_STATE();
    case 284:
      if (lookahead == 'O') ADVANCE(375);
      END_STATE();
    case 285:
      if (lookahead == 'O') ADVANCE(234);
      END_STATE();
    case 286:
      if (lookahead == 'O') ADVANCE(253);
      END_STATE();
    case 287:
      if (lookahead == 'O') ADVANCE(256);
      END_STATE();
    case 288:
      if (lookahead == 'O') ADVANCE(324);
      if (lookahead == 'R') ADVANCE(285);
      END_STATE();
    case 289:
      if (lookahead == 'O') ADVANCE(310);
      if (lookahead == 'R') ADVANCE(285);
      END_STATE();
    case 290:
      if (lookahead == 'O') ADVANCE(340);
      END_STATE();
    case 291:
      if (lookahead == 'O') ADVANCE(340);
      if (lookahead == 'U') ADVANCE(240);
      END_STATE();
    case 292:
      if (lookahead == 'O') ADVANCE(267);
      END_STATE();
    case 293:
      if (lookahead == 'P') ADVANCE(823);
      END_STATE();
    case 294:
      if (lookahead == 'P') ADVANCE(894);
      END_STATE();
    case 295:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 296:
      if (lookahead == 'P') ADVANCE(927);
      END_STATE();
    case 297:
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(120);
      END_STATE();
    case 298:
      if (lookahead == 'P') ADVANCE(186);
      END_STATE();
    case 299:
      if (lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 300:
      if (lookahead == 'R') ADVANCE(859);
      END_STATE();
    case 301:
      if (lookahead == 'R') ADVANCE(871);
      END_STATE();
    case 302:
      if (lookahead == 'R') ADVANCE(913);
      END_STATE();
    case 303:
      if (lookahead == 'R') ADVANCE(822);
      END_STATE();
    case 304:
      if (lookahead == 'R') ADVANCE(800);
      END_STATE();
    case 305:
      if (lookahead == 'R') ADVANCE(802);
      END_STATE();
    case 306:
      if (lookahead == 'R') ADVANCE(893);
      END_STATE();
    case 307:
      if (lookahead == 'R') ADVANCE(916);
      END_STATE();
    case 308:
      if (lookahead == 'R') ADVANCE(915);
      END_STATE();
    case 309:
      if (lookahead == 'R') ADVANCE(905);
      END_STATE();
    case 310:
      if (lookahead == 'R') ADVANCE(870);
      END_STATE();
    case 311:
      if (lookahead == 'R') ADVANCE(141);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(388);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(389);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(284);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(198);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(393);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(394);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(127);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(355);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(164);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(193);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(209);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(211);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 330:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 331:
      if (lookahead == 'S') ADVANCE(875);
      END_STATE();
    case 332:
      if (lookahead == 'S') ADVANCE(792);
      END_STATE();
    case 333:
      if (lookahead == 'S') ADVANCE(374);
      END_STATE();
    case 334:
      if (lookahead == 'S') ADVANCE(373);
      END_STATE();
    case 335:
      if (lookahead == 'S') ADVANCE(205);
      END_STATE();
    case 336:
      if (lookahead == 'S') ADVANCE(357);
      END_STATE();
    case 337:
      if (lookahead == 'S') ADVANCE(365);
      END_STATE();
    case 338:
      if (lookahead == 'S') ADVANCE(159);
      END_STATE();
    case 339:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 340:
      if (lookahead == 'T') ADVANCE(864);
      END_STATE();
    case 341:
      if (lookahead == 'T') ADVANCE(796);
      END_STATE();
    case 342:
      if (lookahead == 'T') ADVANCE(918);
      END_STATE();
    case 343:
      if (lookahead == 'T') ADVANCE(842);
      END_STATE();
    case 344:
      if (lookahead == 'T') ADVANCE(816);
      END_STATE();
    case 345:
      if (lookahead == 'T') ADVANCE(798);
      END_STATE();
    case 346:
      if (lookahead == 'T') ADVANCE(906);
      END_STATE();
    case 347:
      if (lookahead == 'T') ADVANCE(818);
      END_STATE();
    case 348:
      if (lookahead == 'T') ADVANCE(785);
      END_STATE();
    case 349:
      if (lookahead == 'T') ADVANCE(877);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(929);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(838);
      END_STATE();
    case 352:
      if (lookahead == 'T') ADVANCE(902);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(840);
      END_STATE();
    case 354:
      if (lookahead == 'T') ADVANCE(876);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(788);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(182);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(331);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(276);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'X') ADVANCE(844);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(278);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(313);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(319);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(199);
      END_STATE();
    case 375:
      if (lookahead == 'U') ADVANCE(295);
      END_STATE();
    case 376:
      if (lookahead == 'U') ADVANCE(239);
      END_STATE();
    case 377:
      if (lookahead == 'U') ADVANCE(228);
      END_STATE();
    case 378:
      if (lookahead == 'U') ADVANCE(350);
      END_STATE();
    case 379:
      if (lookahead == 'U') ADVANCE(147);
      END_STATE();
    case 380:
      if (lookahead == 'U') ADVANCE(88);
      END_STATE();
    case 381:
      if (lookahead == 'V') ADVANCE(197);
      END_STATE();
    case 382:
      if (lookahead == 'W') ADVANCE(826);
      END_STATE();
    case 383:
      if (lookahead == 'X') ADVANCE(206);
      END_STATE();
    case 384:
      if (lookahead == 'X') ADVANCE(869);
      END_STATE();
    case 385:
      if (lookahead == 'X') ADVANCE(342);
      END_STATE();
    case 386:
      if (lookahead == 'Y') ADVANCE(830);
      END_STATE();
    case 387:
      if (lookahead == 'Y') ADVANCE(912);
      END_STATE();
    case 388:
      if (lookahead == 'Y') ADVANCE(819);
      END_STATE();
    case 389:
      if (lookahead == 'Y') ADVANCE(935);
      END_STATE();
    case 390:
      if (lookahead == 'Y') ADVANCE(810);
      END_STATE();
    case 391:
      if (lookahead == 'Y') ADVANCE(809);
      END_STATE();
    case 392:
      if (lookahead == 'Y') ADVANCE(936);
      END_STATE();
    case 393:
      if (lookahead == 'Y') ADVANCE(896);
      END_STATE();
    case 394:
      if (lookahead == 'Y') ADVANCE(200);
      END_STATE();
    case 395:
      if (lookahead == 'Z') ADVANCE(934);
      END_STATE();
    case 396:
      if (lookahead == 'Z') ADVANCE(150);
      END_STATE();
    case 397:
      if (lookahead == '_') ADVANCE(202);
      END_STATE();
    case 398:
      if (lookahead == '_') ADVANCE(554);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(682);
      if (lookahead == 'h') ADVANCE(411);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(682);
      if (lookahead == 'h') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == 'o') ADVANCE(890);
      if (lookahead == 'y') ADVANCE(651);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(887);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(887);
      if (lookahead == 'e') ADVANCE(925);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(923);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(892);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(685);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead == 'p') ADVANCE(577);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(571);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(720);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(722);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(562);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(713);
      END_STATE();
    case 437:
      if (lookahead == 'b') ADVANCE(742);
      END_STATE();
    case 438:
      if (lookahead == 'b') ADVANCE(743);
      END_STATE();
    case 439:
      if (lookahead == 'b') ADVANCE(581);
      END_STATE();
    case 440:
      if (lookahead == 'b') ADVANCE(582);
      END_STATE();
    case 441:
      if (lookahead == 'c') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 442:
      if (lookahead == 'c') ADVANCE(814);
      END_STATE();
    case 443:
      if (lookahead == 'c') ADVANCE(812);
      END_STATE();
    case 444:
      if (lookahead == 'c') ADVANCE(908);
      END_STATE();
    case 445:
      if (lookahead == 'c') ADVANCE(548);
      if (lookahead == 'f') ADVANCE(415);
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 446:
      if (lookahead == 'c') ADVANCE(548);
      if (lookahead == 'f') ADVANCE(415);
      if (lookahead == 'l') ADVANCE(517);
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 447:
      if (lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 448:
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == 'y') ADVANCE(552);
      END_STATE();
    case 449:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 450:
      if (lookahead == 'c') ADVANCE(700);
      END_STATE();
    case 451:
      if (lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 452:
      if (lookahead == 'c') ADVANCE(703);
      END_STATE();
    case 453:
      if (lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 454:
      if (lookahead == 'c') ADVANCE(546);
      END_STATE();
    case 455:
      if (lookahead == 'c') ADVANCE(674);
      END_STATE();
    case 456:
      if (lookahead == 'c') ADVANCE(723);
      END_STATE();
    case 457:
      if (lookahead == 'd') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(710);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead == 's') ADVANCE(835);
      if (lookahead == 'u') ADVANCE(711);
      if (lookahead == 'v') ADVANCE(527);
      END_STATE();
    case 458:
      if (lookahead == 'd') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(710);
      if (lookahead == 's') ADVANCE(832);
      END_STATE();
    case 459:
      if (lookahead == 'd') ADVANCE(824);
      END_STATE();
    case 460:
      if (lookahead == 'd') ADVANCE(856);
      END_STATE();
    case 461:
      if (lookahead == 'd') ADVANCE(937);
      END_STATE();
    case 462:
      if (lookahead == 'd') ADVANCE(938);
      END_STATE();
    case 463:
      if (lookahead == 'd') ADVANCE(827);
      END_STATE();
    case 464:
      if (lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 465:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 466:
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead == 't') ADVANCE(904);
      END_STATE();
    case 467:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == 'o') ADVANCE(890);
      if (lookahead == 'y') ADVANCE(651);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 521:
      if (lookahead == 'f') ADVANCE(873);
      if (lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 522:
      if (lookahead == 'f') ADVANCE(524);
      if (lookahead == 'n') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead == 'u') ADVANCE(716);
      if (lookahead == 'w') ADVANCE(617);
      END_STATE();
    case 523:
      if (lookahead == 'f') ADVANCE(524);
      if (lookahead == 'r') ADVANCE(858);
      END_STATE();
    case 524:
      if (lookahead == 'f') ADVANCE(690);
      END_STATE();
    case 525:
      if (lookahead == 'f') ADVANCE(415);
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 526:
      if (lookahead == 'f') ADVANCE(693);
      END_STATE();
    case 527:
      if (lookahead == 'g') ADVANCE(848);
      END_STATE();
    case 528:
      if (lookahead == 'g') ADVANCE(556);
      END_STATE();
    case 529:
      if (lookahead == 'g') ADVANCE(811);
      END_STATE();
    case 530:
      if (lookahead == 'g') ADVANCE(917);
      END_STATE();
    case 531:
      if (lookahead == 'g') ADVANCE(539);
      END_STATE();
    case 532:
      if (lookahead == 'g') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(510);
      END_STATE();
    case 533:
      if (lookahead == 'g') ADVANCE(514);
      END_STATE();
    case 534:
      if (lookahead == 'h') ADVANCE(882);
      END_STATE();
    case 535:
      if (lookahead == 'h') ADVANCE(880);
      END_STATE();
    case 536:
      if (lookahead == 'h') ADVANCE(495);
      if (lookahead == 'i') ADVANCE(708);
      END_STATE();
    case 537:
      if (lookahead == 'h') ADVANCE(495);
      if (lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 538:
      if (lookahead == 'h') ADVANCE(744);
      END_STATE();
    case 539:
      if (lookahead == 'h') ADVANCE(697);
      END_STATE();
    case 540:
      if (lookahead == 'h') ADVANCE(504);
      END_STATE();
    case 541:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 542:
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 543:
      if (lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 544:
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == 'y') ADVANCE(724);
      END_STATE();
    case 545:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 547:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 548:
      if (lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 549:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 550:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 551:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 552:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 553:
      if (lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 554:
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 555:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 556:
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 557:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 558:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 560:
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 's') ADVANCE(520);
      END_STATE();
    case 561:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 562:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 563:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 565:
      if (lookahead == 'l') ADVANCE(922);
      END_STATE();
    case 566:
      if (lookahead == 'l') ADVANCE(897);
      END_STATE();
    case 567:
      if (lookahead == 'l') ADVANCE(909);
      END_STATE();
    case 568:
      if (lookahead == 'l') ADVANCE(900);
      END_STATE();
    case 569:
      if (lookahead == 'l') ADVANCE(907);
      END_STATE();
    case 570:
      if (lookahead == 'l') ADVANCE(901);
      END_STATE();
    case 571:
      if (lookahead == 'l') ADVANCE(899);
      END_STATE();
    case 572:
      if (lookahead == 'l') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 573:
      if (lookahead == 'l') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(505);
      END_STATE();
    case 574:
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 575:
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 576:
      if (lookahead == 'l') ADVANCE(584);
      END_STATE();
    case 577:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 578:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 579:
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 't') ADVANCE(793);
      END_STATE();
    case 580:
      if (lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 581:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 582:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 583:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 584:
      if (lookahead == 'l') ADVANCE(560);
      END_STATE();
    case 585:
      if (lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 586:
      if (lookahead == 'm') ADVANCE(794);
      END_STATE();
    case 587:
      if (lookahead == 'm') ADVANCE(646);
      END_STATE();
    case 588:
      if (lookahead == 'm') ADVANCE(646);
      if (lookahead == 'x') ADVANCE(694);
      END_STATE();
    case 589:
      if (lookahead == 'm') ADVANCE(553);
      END_STATE();
    case 590:
      if (lookahead == 'm') ADVANCE(647);
      END_STATE();
    case 591:
      if (lookahead == 'm') ADVANCE(606);
      END_STATE();
    case 592:
      if (lookahead == 'm') ADVANCE(505);
      END_STATE();
    case 593:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 594:
      if (lookahead == 'm') ADVANCE(476);
      END_STATE();
    case 595:
      if (lookahead == 'm') ADVANCE(483);
      END_STATE();
    case 596:
      if (lookahead == 'm') ADVANCE(487);
      END_STATE();
    case 597:
      if (lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 598:
      if (lookahead == 'm') ADVANCE(515);
      END_STATE();
    case 599:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 600:
      if (lookahead == 'm') ADVANCE(425);
      END_STATE();
    case 601:
      if (lookahead == 'm') ADVANCE(422);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == 'w') ADVANCE(617);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(846);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(920);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(828);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(898);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == 'u') ADVANCE(711);
      END_STATE();
    case 613:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 614:
      if (lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 615:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 616:
      if (lookahead == 'n') ADVANCE(695);
      END_STATE();
    case 617:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 618:
      if (lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 619:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 621:
      if (lookahead == 'n') ADVANCE(705);
      END_STATE();
    case 622:
      if (lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 624:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 625:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(886);
      if (lookahead == 'u') ADVANCE(573);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(884);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(791);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == 's') ADVANCE(638);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(677);
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(662);
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead == 'u') ADVANCE(592);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 645:
      if (lookahead == 'p') ADVANCE(823);
      END_STATE();
    case 646:
      if (lookahead == 'p') ADVANCE(895);
      END_STATE();
    case 647:
      if (lookahead == 'p') ADVANCE(928);
      END_STATE();
    case 648:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(538);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(474);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(861);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(872);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(914);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(822);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(800);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(893);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(916);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(905);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(741);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(746);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(875);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(792);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(725);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(709);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(511);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(864);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(918);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(842);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(816);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(906);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(877);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(929);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(838);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(902);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(635);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(503);
      if (lookahead == 'x') ADVANCE(844);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(551);
      END_STATE();
    case 727:
      if (lookahead == 'u') ADVANCE(648);
      END_STATE();
    case 728:
      if (lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 729:
      if (lookahead == 'u') ADVANCE(580);
      END_STATE();
    case 730:
      if (lookahead == 'u') ADVANCE(702);
      END_STATE();
    case 731:
      if (lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 732:
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 733:
      if (lookahead == 'v') ADVANCE(549);
      END_STATE();
    case 734:
      if (lookahead == 'w') ADVANCE(826);
      END_STATE();
    case 735:
      if (lookahead == 'x') ADVANCE(558);
      END_STATE();
    case 736:
      if (lookahead == 'x') ADVANCE(869);
      END_STATE();
    case 737:
      if (lookahead == 'x') ADVANCE(694);
      END_STATE();
    case 738:
      if (lookahead == 'y') ADVANCE(830);
      END_STATE();
    case 739:
      if (lookahead == 'y') ADVANCE(912);
      END_STATE();
    case 740:
      if (lookahead == 'y') ADVANCE(819);
      END_STATE();
    case 741:
      if (lookahead == 'y') ADVANCE(935);
      END_STATE();
    case 742:
      if (lookahead == 'y') ADVANCE(810);
      END_STATE();
    case 743:
      if (lookahead == 'y') ADVANCE(809);
      END_STATE();
    case 744:
      if (lookahead == 'y') ADVANCE(936);
      END_STATE();
    case 745:
      if (lookahead == 'y') ADVANCE(896);
      END_STATE();
    case 746:
      if (lookahead == 'y') ADVANCE(552);
      END_STATE();
    case 747:
      if (lookahead == 'z') ADVANCE(934);
      END_STATE();
    case 748:
      if (lookahead == 'z') ADVANCE(502);
      END_STATE();
    case 749:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(749)
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(288);
      if (lookahead == 'G') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'J') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(281);
      if (lookahead == 'N') ADVANCE(291);
      if (lookahead == 'O') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(323);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(297);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == 'X') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'b') ADVANCE(544);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead == 'd') ADVANCE(413);
      if (lookahead == 'f') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(496);
      if (lookahead == 'h') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'j') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(632);
      if (lookahead == 'n') ADVANCE(643);
      if (lookahead == 'o') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead == 'v') ADVANCE(410);
      if (lookahead == 'w') ADVANCE(537);
      if (lookahead == 'x') ADVANCE(585);
      END_STATE();
    case 750:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(750)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1034);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'W') ADVANCE(1013);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1140);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 751:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(751)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1034);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1140);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 752:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(752)
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1088);
      if (lookahead == 'C') ADVANCE(1049);
      if (lookahead == 'I') ADVANCE(1008);
      if (lookahead == 'M') ADVANCE(986);
      if (lookahead == 'S') ADVANCE(998);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'c') ADVANCE(1155);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1092);
      if (lookahead == 's') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 753:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(753)
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1088);
      if (lookahead == 'C') ADVANCE(1049);
      if (lookahead == 'I') ADVANCE(1008);
      if (lookahead == 'M') ADVANCE(986);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'c') ADVANCE(1155);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 754:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(754)
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1088);
      if (lookahead == 'C') ADVANCE(1049);
      if (lookahead == 'D') ADVANCE(1020);
      if (lookahead == 'I') ADVANCE(1008);
      if (lookahead == 'M') ADVANCE(986);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'c') ADVANCE(1155);
      if (lookahead == 'd') ADVANCE(1126);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 755:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(755)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'W') ADVANCE(1019);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 756:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(756)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(260);
      if (lookahead == 'D') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(289);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead == 'M') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(323);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == 'V') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(184);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead == 'd') ADVANCE(488);
      if (lookahead == 'f') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == 'm') ADVANCE(436);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == 'v') ADVANCE(430);
      if (lookahead == 'w') ADVANCE(536);
      END_STATE();
    case 757:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(757)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 758:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(758)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 759:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(759)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == 'W') ADVANCE(1019);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 760:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(760)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 761:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(761)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'G') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(431);
      if (lookahead == 'g') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(652);
      if (lookahead == 'w') ADVANCE(537);
      END_STATE();
    case 762:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(762)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'O') ADVANCE(1057);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 763:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(763)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'O') ADVANCE(1057);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 764:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(764)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1041);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == 'W') ADVANCE(1013);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 765:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(765)
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1041);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 766:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(766)
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 767:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(767)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1041);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == 'W') ADVANCE(1013);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 768:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(768)
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'G') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1041);
      if (lookahead == 'J') ADVANCE(1048);
      if (lookahead == 'L') ADVANCE(996);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'R') ADVANCE(1018);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'g') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'j') ADVANCE(1154);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 769:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(769)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1053);
      if (lookahead == 'K') ADVANCE(1002);
      if (lookahead == 'P') ADVANCE(1065);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'c') ADVANCE(1159);
      if (lookahead == 'k') ADVANCE(1108);
      if (lookahead == 'p') ADVANCE(1171);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 770:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(770)
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1068);
      if (lookahead == 'D') ADVANCE(1007);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'W') ADVANCE(1019);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1174);
      if (lookahead == 'd') ADVANCE(1113);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 771:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(771)
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1068);
      if (lookahead == 'D') ADVANCE(1007);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1174);
      if (lookahead == 'd') ADVANCE(1113);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 772:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(772)
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1170);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 773:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(773)
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1019);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1170);
      if (lookahead == 'w') ADVANCE(1125);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 774:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(774)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 775:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(775)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'O') ADVANCE(1038);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'o') ADVANCE(1144);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 776:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(776)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'D') ADVANCE(1004);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'd') ADVANCE(1110);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 777:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(777)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == 'L') ADVANCE(1017);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'W') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'l') ADVANCE(1123);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1120);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 778:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(778)
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1067);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 779:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(779)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'F') ADVANCE(1052);
      if (lookahead == 'O') ADVANCE(1038);
      if (lookahead == 'U') ADVANCE(1070);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(1158);
      if (lookahead == 'o') ADVANCE(1144);
      if (lookahead == 'u') ADVANCE(1176);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 780:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(780)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(1008);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 781:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(781)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1051);
      if (lookahead == 'T') ADVANCE(1047);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead == 't') ADVANCE(1153);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 782:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 783:
      if (eof) ADVANCE(784);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead == '(') ADVANCE(939);
      if (lookahead == ')') ADVANCE(940);
      if (lookahead == '*') ADVANCE(951);
      if (lookahead == '+') ADVANCE(952);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead == '.') ADVANCE(949);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead == '<') ADVANCE(957);
      if (lookahead == '=') ADVANCE(950);
      if (lookahead == '>') ADVANCE(961);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(383);
      if (lookahead == 'F') ADVANCE(279);
      if (lookahead == 'G') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == 'J') ADVANCE(280);
      if (lookahead == 'K') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(274);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'P') ADVANCE(311);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(297);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(184);
      if (lookahead == 'X') ADVANCE(233);
      if (lookahead == 'Z') ADVANCE(292);
      if (lookahead == '^') ADVANCE(956);
      if (lookahead == '`') ADVANCE(981);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'b') ADVANCE(544);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'g') ADVANCE(496);
      if (lookahead == 'h') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(521);
      if (lookahead == 'j') ADVANCE(631);
      if (lookahead == 'k') ADVANCE(468);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(626);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead == 'p') ADVANCE(663);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead == 'v') ADVANCE(405);
      if (lookahead == 'w') ADVANCE(536);
      if (lookahead == 'x') ADVANCE(585);
      if (lookahead == 'z') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_keyword_outer);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_keyword_alter);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_keyword_drop);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_keyword_add);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_keyword_view);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_keyword_materialized);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_keyword_column);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_keyword_column);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(814);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(814);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_keyword_cascade);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'O') ADVANCE(378);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_keyword_no);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 'T') ADVANCE(864);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 't') ADVANCE(864);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_keyword_data);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_keyword_type);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_keyword_rename);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_keyword_to);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_keyword_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_keyword_schema);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_keyword_owner);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'O') ADVANCE(325);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_keyword_temporary);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_keyword_int_token2);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token2);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(921);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(921);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(207);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(395);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token2);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 'S') ADVANCE(365);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token4);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_keyword_timestamptz_token1);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_keyword_geometry);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_keyword_geography);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_keyword_box2d);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_keyword_box3d);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(979);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(970);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(964);
      if (lookahead != 0) ADVANCE(965);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead != 0) ADVANCE(974);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(958);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(960);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(964);
      if (lookahead != 0) ADVANCE(965);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(964);
      if (lookahead == '/') ADVANCE(945);
      if (lookahead != 0) ADVANCE(965);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(964);
      if (lookahead != 0) ADVANCE(965);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(944);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(966);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(968);
      if (lookahead == '/') ADVANCE(963);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(970);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(970);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(969);
      if (lookahead == '-') ADVANCE(968);
      if (lookahead == '/') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(970);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(970);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(972);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead != 0) ADVANCE(974);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '/') ADVANCE(946);
      if (lookahead != 0) ADVANCE(974);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead != 0) ADVANCE(974);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(943);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(975);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(977);
      if (lookahead == '/') ADVANCE(972);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(979);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(979);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(978);
      if (lookahead == '-') ADVANCE(977);
      if (lookahead == '/') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(979);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(979);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1089);
      if (lookahead == 'I') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1009);
      if (lookahead == 'I') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1003);
      if (lookahead == 'I') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(994);
      if (lookahead == 'S') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1115);
      if (lookahead == 'i') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1109);
      if (lookahead == 'i') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1100);
      if (lookahead == 's') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1198);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 15},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 18},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 23},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 23},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 33},
  [193] = {.lex_state = 26},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 33},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 26},
  [201] = {.lex_state = 33},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 26},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 33},
  [206] = {.lex_state = 26},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 37},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 18},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 18},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 27},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 27},
  [226] = {.lex_state = 37},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 20},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 20},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 20},
  [236] = {.lex_state = 20},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 23},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 20},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 20},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 23},
  [249] = {.lex_state = 20},
  [250] = {.lex_state = 20},
  [251] = {.lex_state = 20},
  [252] = {.lex_state = 20},
  [253] = {.lex_state = 20},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 23},
  [256] = {.lex_state = 20},
  [257] = {.lex_state = 20},
  [258] = {.lex_state = 20},
  [259] = {.lex_state = 20},
  [260] = {.lex_state = 20},
  [261] = {.lex_state = 20},
  [262] = {.lex_state = 20},
  [263] = {.lex_state = 20},
  [264] = {.lex_state = 20},
  [265] = {.lex_state = 20},
  [266] = {.lex_state = 20},
  [267] = {.lex_state = 20},
  [268] = {.lex_state = 20},
  [269] = {.lex_state = 20},
  [270] = {.lex_state = 20},
  [271] = {.lex_state = 20},
  [272] = {.lex_state = 20},
  [273] = {.lex_state = 20},
  [274] = {.lex_state = 20},
  [275] = {.lex_state = 20},
  [276] = {.lex_state = 20},
  [277] = {.lex_state = 20},
  [278] = {.lex_state = 20},
  [279] = {.lex_state = 20},
  [280] = {.lex_state = 20},
  [281] = {.lex_state = 20},
  [282] = {.lex_state = 20},
  [283] = {.lex_state = 20},
  [284] = {.lex_state = 20},
  [285] = {.lex_state = 20},
  [286] = {.lex_state = 20},
  [287] = {.lex_state = 20},
  [288] = {.lex_state = 20},
  [289] = {.lex_state = 23},
  [290] = {.lex_state = 20},
  [291] = {.lex_state = 20},
  [292] = {.lex_state = 20},
  [293] = {.lex_state = 20},
  [294] = {.lex_state = 20},
  [295] = {.lex_state = 20},
  [296] = {.lex_state = 20},
  [297] = {.lex_state = 20},
  [298] = {.lex_state = 20},
  [299] = {.lex_state = 20},
  [300] = {.lex_state = 20},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 23},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 23},
  [308] = {.lex_state = 39},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 31},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 24},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 31},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 31},
  [318] = {.lex_state = 24},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 31},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 24},
  [323] = {.lex_state = 24},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 24},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 24},
  [330] = {.lex_state = 24},
  [331] = {.lex_state = 22},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 24},
  [334] = {.lex_state = 31},
  [335] = {.lex_state = 31},
  [336] = {.lex_state = 31},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 31},
  [340] = {.lex_state = 31},
  [341] = {.lex_state = 24},
  [342] = {.lex_state = 31},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 6},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 6},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 30},
  [353] = {.lex_state = 30},
  [354] = {.lex_state = 22},
  [355] = {.lex_state = 6},
  [356] = {.lex_state = 6},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 22},
  [359] = {.lex_state = 6},
  [360] = {.lex_state = 34},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 30},
  [364] = {.lex_state = 30},
  [365] = {.lex_state = 30},
  [366] = {.lex_state = 30},
  [367] = {.lex_state = 34},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 34},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 20},
  [373] = {.lex_state = 30},
  [374] = {.lex_state = 6},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 22},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 22},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 22},
  [384] = {.lex_state = 35},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 30},
  [388] = {.lex_state = 22},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 22},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 34},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 30},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 36},
  [402] = {.lex_state = 22},
  [403] = {.lex_state = 36},
  [404] = {.lex_state = 30},
  [405] = {.lex_state = 36},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 38},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 36},
  [411] = {.lex_state = 36},
  [412] = {.lex_state = 35},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 25},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 35},
  [419] = {.lex_state = 35},
  [420] = {.lex_state = 25},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 38},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 25},
  [433] = {.lex_state = 41},
  [434] = {.lex_state = 25},
  [435] = {.lex_state = 42},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 42},
  [438] = {.lex_state = 25},
  [439] = {.lex_state = 42},
  [440] = {.lex_state = 25},
  [441] = {.lex_state = 25},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 42},
  [444] = {.lex_state = 42},
  [445] = {.lex_state = 41},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 42},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 25},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 42},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 42},
  [458] = {.lex_state = 42},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 25},
  [461] = {.lex_state = 42},
  [462] = {.lex_state = 25},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 42},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 42},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 40},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 36},
  [497] = {.lex_state = 20},
  [498] = {.lex_state = 20},
  [499] = {.lex_state = 20},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 23},
  [502] = {.lex_state = 23},
  [503] = {.lex_state = 23},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 20},
  [507] = {.lex_state = 20},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 23},
  [511] = {.lex_state = 20},
  [512] = {.lex_state = 20},
  [513] = {.lex_state = 20},
  [514] = {.lex_state = 20},
  [515] = {.lex_state = 20},
  [516] = {.lex_state = 20},
  [517] = {.lex_state = 20},
  [518] = {.lex_state = 20},
  [519] = {.lex_state = 20},
  [520] = {.lex_state = 20},
  [521] = {.lex_state = 20},
  [522] = {.lex_state = 20},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 20},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 36},
  [528] = {.lex_state = 20},
  [529] = {.lex_state = 20},
  [530] = {.lex_state = 20},
  [531] = {.lex_state = 20},
  [532] = {.lex_state = 23},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 36},
  [535] = {.lex_state = 36},
  [536] = {.lex_state = 20},
  [537] = {.lex_state = 36},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 20},
  [540] = {.lex_state = 20},
  [541] = {.lex_state = 36},
  [542] = {.lex_state = 23},
  [543] = {.lex_state = 23},
  [544] = {.lex_state = 20},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 20},
  [547] = {.lex_state = 36},
  [548] = {.lex_state = 20},
  [549] = {.lex_state = 20},
  [550] = {.lex_state = 20},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 20},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 20},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 20},
  [560] = {.lex_state = 20},
  [561] = {.lex_state = 20},
  [562] = {.lex_state = 20},
  [563] = {.lex_state = 20},
  [564] = {.lex_state = 20},
  [565] = {.lex_state = 20},
  [566] = {.lex_state = 20},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 20},
  [569] = {.lex_state = 20},
  [570] = {.lex_state = 20},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 20},
  [574] = {.lex_state = 20},
  [575] = {.lex_state = 20},
  [576] = {.lex_state = 20},
  [577] = {.lex_state = 20},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 23},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 20},
  [582] = {.lex_state = 20},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 20},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 20},
  [588] = {.lex_state = 20},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 20},
  [591] = {.lex_state = 20},
  [592] = {.lex_state = 20},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 20},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 20},
  [598] = {.lex_state = 20},
  [599] = {.lex_state = 20},
  [600] = {.lex_state = 20},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 20},
  [603] = {.lex_state = 20},
  [604] = {.lex_state = 20},
  [605] = {.lex_state = 20},
  [606] = {.lex_state = 20},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 20},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 20},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 20},
  [616] = {.lex_state = 20},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 20},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 20},
  [625] = {.lex_state = 20},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 20},
  [628] = {.lex_state = 20},
  [629] = {.lex_state = 20},
  [630] = {.lex_state = 20},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 20},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 20},
  [639] = {.lex_state = 20},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 20},
  [642] = {.lex_state = 20},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 20},
  [645] = {.lex_state = 20},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 20},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 20},
  [652] = {.lex_state = 20},
  [653] = {.lex_state = 20},
  [654] = {.lex_state = 20},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 20},
  [658] = {.lex_state = 20},
  [659] = {.lex_state = 20},
  [660] = {.lex_state = 20},
  [661] = {.lex_state = 20},
  [662] = {.lex_state = 20},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 20},
  [667] = {.lex_state = 20},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 20},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 20},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 20},
  [676] = {.lex_state = 20},
  [677] = {.lex_state = 20},
  [678] = {.lex_state = 20},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 20},
  [686] = {.lex_state = 20},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 8},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 20},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 23},
  [718] = {.lex_state = 8},
  [719] = {.lex_state = 6},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 8},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 20},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 8},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 23},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 23},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 23},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 23},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 6},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 23},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 967},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 967},
  [879] = {.lex_state = 976},
  [880] = {.lex_state = 20},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 967},
  [896] = {.lex_state = 976},
  [897] = {.lex_state = 20},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 23},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 20},
  [906] = {.lex_state = 20},
  [907] = {.lex_state = 976},
  [908] = {.lex_state = 6},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 20},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 20},
  [918] = {.lex_state = 20},
  [919] = {.lex_state = 20},
  [920] = {.lex_state = 20},
  [921] = {.lex_state = 20},
  [922] = {.lex_state = 20},
  [923] = {.lex_state = 20},
  [924] = {.lex_state = 20},
  [925] = {.lex_state = 20},
  [926] = {.lex_state = 20},
  [927] = {.lex_state = 20},
  [928] = {.lex_state = 20},
  [929] = {.lex_state = 20},
  [930] = {.lex_state = 20},
  [931] = {.lex_state = 20},
  [932] = {.lex_state = 20},
  [933] = {.lex_state = 20},
  [934] = {.lex_state = 20},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 23},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 43},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 23},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_delete] = ACTIONS(1),
    [sym_keyword_replace] = ACTIONS(1),
    [sym_keyword_update] = ACTIONS(1),
    [sym_keyword_values] = ACTIONS(1),
    [sym_keyword_set] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_left] = ACTIONS(1),
    [sym_keyword_right] = ACTIONS(1),
    [sym_keyword_inner] = ACTIONS(1),
    [sym_keyword_outer] = ACTIONS(1),
    [sym_keyword_join] = ACTIONS(1),
    [sym_keyword_on] = ACTIONS(1),
    [sym_keyword_where] = ACTIONS(1),
    [sym_keyword_order_by] = ACTIONS(1),
    [sym_keyword_group_by] = ACTIONS(1),
    [sym_keyword_having] = ACTIONS(1),
    [sym_keyword_desc] = ACTIONS(1),
    [sym_keyword_asc] = ACTIONS(1),
    [sym_keyword_limit] = ACTIONS(1),
    [sym_keyword_offset] = ACTIONS(1),
    [sym_keyword_primary] = ACTIONS(1),
    [sym_keyword_create] = ACTIONS(1),
    [sym_keyword_alter] = ACTIONS(1),
    [sym_keyword_drop] = ACTIONS(1),
    [sym_keyword_add] = ACTIONS(1),
    [sym_keyword_table] = ACTIONS(1),
    [sym_keyword_view] = ACTIONS(1),
    [sym_keyword_materialized] = ACTIONS(1),
    [sym_keyword_column] = ACTIONS(1),
    [sym_keyword_key] = ACTIONS(1),
    [sym_keyword_as] = ACTIONS(1),
    [sym_keyword_distinct] = ACTIONS(1),
    [sym_keyword_constraint] = ACTIONS(1),
    [sym_keyword_count] = ACTIONS(1),
    [sym_keyword_max] = ACTIONS(1),
    [sym_keyword_min] = ACTIONS(1),
    [sym_keyword_avg] = ACTIONS(1),
    [sym_keyword_in] = ACTIONS(1),
    [sym_keyword_and] = ACTIONS(1),
    [sym_keyword_or] = ACTIONS(1),
    [sym_keyword_not] = ACTIONS(1),
    [sym_keyword_force] = ACTIONS(1),
    [sym_keyword_use] = ACTIONS(1),
    [sym_keyword_for] = ACTIONS(1),
    [sym_keyword_if] = ACTIONS(1),
    [sym_keyword_exists] = ACTIONS(1),
    [sym_keyword_auto_increment] = ACTIONS(1),
    [sym_keyword_default] = ACTIONS(1),
    [sym_keyword_cascade] = ACTIONS(1),
    [aux_sym_keyword_with_token1] = ACTIONS(1),
    [sym_keyword_no] = ACTIONS(1),
    [sym_keyword_data] = ACTIONS(1),
    [sym_keyword_type] = ACTIONS(1),
    [sym_keyword_rename] = ACTIONS(1),
    [sym_keyword_to] = ACTIONS(1),
    [sym_keyword_schema] = ACTIONS(1),
    [sym_keyword_owner] = ACTIONS(1),
    [sym_keyword_temp] = ACTIONS(1),
    [sym_keyword_temporary] = ACTIONS(1),
    [sym_keyword_null] = ACTIONS(1),
    [sym_keyword_boolean] = ACTIONS(1),
    [sym_keyword_smallserial] = ACTIONS(1),
    [sym_keyword_serial] = ACTIONS(1),
    [sym_keyword_bigserial] = ACTIONS(1),
    [sym_keyword_smallint] = ACTIONS(1),
    [sym_keyword_bigint] = ACTIONS(1),
    [sym_keyword_decimal] = ACTIONS(1),
    [sym_keyword_numeric] = ACTIONS(1),
    [sym_keyword_real] = ACTIONS(1),
    [aux_sym_double_token1] = ACTIONS(1),
    [aux_sym_double_token2] = ACTIONS(1),
    [sym_keyword_money] = ACTIONS(1),
    [aux_sym_keyword_char_token1] = ACTIONS(1),
    [aux_sym_keyword_char_token2] = ACTIONS(1),
    [aux_sym_keyword_varchar_token1] = ACTIONS(1),
    [aux_sym_keyword_varchar_token2] = ACTIONS(1),
    [sym_keyword_text] = ACTIONS(1),
    [sym_keyword_json] = ACTIONS(1),
    [sym_keyword_jsonb] = ACTIONS(1),
    [sym_keyword_xml] = ACTIONS(1),
    [sym_keyword_bytea] = ACTIONS(1),
    [sym_keyword_date] = ACTIONS(1),
    [sym_keyword_datetime] = ACTIONS(1),
    [aux_sym_keyword_timestamp_token1] = ACTIONS(1),
    [aux_sym_keyword_timestamp_token2] = ACTIONS(1),
    [aux_sym_keyword_timestamp_token3] = ACTIONS(1),
    [aux_sym_keyword_timestamp_token4] = ACTIONS(1),
    [aux_sym_keyword_timestamptz_token1] = ACTIONS(1),
    [sym_keyword_geometry] = ACTIONS(1),
    [sym_keyword_geography] = ACTIONS(1),
    [sym_keyword_box2d] = ACTIONS(1),
    [sym_keyword_box3d] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(949),
    [sym_statement] = STATE(940),
    [sym__select_statement] = STATE(938),
    [sym_select] = STATE(553),
    [sym__delete_statement] = STATE(938),
    [sym_delete] = STATE(696),
    [sym__create_statement] = STATE(938),
    [sym_create_table] = STATE(938),
    [sym_create_view] = STATE(938),
    [sym_create_materialized_view] = STATE(938),
    [sym__alter_statement] = STATE(938),
    [sym_alter_table] = STATE(938),
    [sym_alter_view] = STATE(938),
    [sym__drop_statement] = STATE(938),
    [sym_drop_table] = STATE(938),
    [sym_drop_view] = STATE(938),
    [sym__insert_statement] = STATE(938),
    [sym_insert] = STATE(938),
    [sym__update_statement] = STATE(938),
    [sym_update] = STATE(938),
    [sym_keyword_select] = ACTIONS(5),
    [sym_keyword_delete] = ACTIONS(7),
    [sym_keyword_insert] = ACTIONS(9),
    [sym_keyword_replace] = ACTIONS(9),
    [sym_keyword_update] = ACTIONS(11),
    [sym_keyword_create] = ACTIONS(13),
    [sym_keyword_alter] = ACTIONS(15),
    [sym_keyword_drop] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      aux_sym_keyword_int_token1,
      aux_sym_keyword_char_token1,
      sym_keyword_json,
      sym_keyword_date,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(19), 55,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_limit,
      sym_keyword_primary,
      sym_keyword_alter,
      sym_keyword_drop,
      sym_keyword_add,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_cascade,
      aux_sym_keyword_with_token1,
      sym_keyword_type,
      sym_keyword_rename,
      sym_keyword_to,
      sym_keyword_owner,
      sym_keyword_boolean,
      sym_keyword_smallserial,
      sym_keyword_serial,
      sym_keyword_bigserial,
      sym_keyword_smallint,
      aux_sym_keyword_int_token2,
      sym_keyword_bigint,
      sym_keyword_decimal,
      sym_keyword_numeric,
      sym_keyword_real,
      aux_sym_double_token1,
      sym_keyword_money,
      aux_sym_keyword_char_token2,
      aux_sym_keyword_varchar_token1,
      sym_keyword_text,
      sym_keyword_jsonb,
      sym_keyword_xml,
      sym_keyword_bytea,
      sym_keyword_datetime,
      aux_sym_keyword_timestamptz_token1,
      sym_keyword_geometry,
      sym_keyword_geography,
      sym_keyword_box2d,
      sym_keyword_box3d,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
  [69] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      aux_sym_keyword_int_token1,
      aux_sym_keyword_char_token1,
      sym_keyword_json,
      sym_keyword_date,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(23), 55,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_limit,
      sym_keyword_primary,
      sym_keyword_alter,
      sym_keyword_drop,
      sym_keyword_add,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_cascade,
      aux_sym_keyword_with_token1,
      sym_keyword_type,
      sym_keyword_rename,
      sym_keyword_to,
      sym_keyword_owner,
      sym_keyword_boolean,
      sym_keyword_smallserial,
      sym_keyword_serial,
      sym_keyword_bigserial,
      sym_keyword_smallint,
      aux_sym_keyword_int_token2,
      sym_keyword_bigint,
      sym_keyword_decimal,
      sym_keyword_numeric,
      sym_keyword_real,
      aux_sym_double_token1,
      sym_keyword_money,
      aux_sym_keyword_char_token2,
      aux_sym_keyword_varchar_token1,
      sym_keyword_text,
      sym_keyword_jsonb,
      sym_keyword_xml,
      sym_keyword_bytea,
      sym_keyword_datetime,
      aux_sym_keyword_timestamptz_token1,
      sym_keyword_geometry,
      sym_keyword_geography,
      sym_keyword_box2d,
      sym_keyword_box3d,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
  [138] = 17,
    ACTIONS(29), 1,
      aux_sym_keyword_int_token1,
    ACTIONS(31), 1,
      aux_sym_keyword_int_token2,
    ACTIONS(33), 1,
      sym_keyword_bigint,
    ACTIONS(35), 1,
      sym_keyword_decimal,
    ACTIONS(37), 1,
      sym_keyword_numeric,
    ACTIONS(39), 1,
      aux_sym_double_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_char_token1,
    ACTIONS(43), 1,
      aux_sym_keyword_char_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_varchar_token1,
    ACTIONS(49), 1,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_timestamptz_token1,
    STATE(321), 1,
      sym_keyword_varchar,
    STATE(337), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(730), 10,
      sym_keyword_int,
      sym_double,
      sym_keyword_timestamp,
      sym_keyword_timestamptz,
      sym__type,
      sym_bigint,
      sym_decimal,
      sym_numeric,
      sym_char,
      sym_varchar,
    ACTIONS(27), 16,
      sym_keyword_boolean,
      sym_keyword_smallserial,
      sym_keyword_serial,
      sym_keyword_bigserial,
      sym_keyword_smallint,
      sym_keyword_real,
      sym_keyword_money,
      sym_keyword_text,
      sym_keyword_jsonb,
      sym_keyword_xml,
      sym_keyword_bytea,
      sym_keyword_datetime,
      sym_keyword_geometry,
      sym_keyword_geography,
      sym_keyword_box2d,
      sym_keyword_box3d,
  [216] = 17,
    ACTIONS(29), 1,
      aux_sym_keyword_int_token1,
    ACTIONS(31), 1,
      aux_sym_keyword_int_token2,
    ACTIONS(33), 1,
      sym_keyword_bigint,
    ACTIONS(35), 1,
      sym_keyword_decimal,
    ACTIONS(37), 1,
      sym_keyword_numeric,
    ACTIONS(39), 1,
      aux_sym_double_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_char_token1,
    ACTIONS(43), 1,
      aux_sym_keyword_char_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_varchar_token1,
    ACTIONS(49), 1,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_timestamptz_token1,
    STATE(321), 1,
      sym_keyword_varchar,
    STATE(337), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(697), 10,
      sym_keyword_int,
      sym_double,
      sym_keyword_timestamp,
      sym_keyword_timestamptz,
      sym__type,
      sym_bigint,
      sym_decimal,
      sym_numeric,
      sym_char,
      sym_varchar,
    ACTIONS(53), 16,
      sym_keyword_boolean,
      sym_keyword_smallserial,
      sym_keyword_serial,
      sym_keyword_bigserial,
      sym_keyword_smallint,
      sym_keyword_real,
      sym_keyword_money,
      sym_keyword_text,
      sym_keyword_jsonb,
      sym_keyword_xml,
      sym_keyword_bytea,
      sym_keyword_datetime,
      sym_keyword_geometry,
      sym_keyword_geography,
      sym_keyword_box2d,
      sym_keyword_box3d,
  [294] = 17,
    ACTIONS(29), 1,
      aux_sym_keyword_int_token1,
    ACTIONS(31), 1,
      aux_sym_keyword_int_token2,
    ACTIONS(33), 1,
      sym_keyword_bigint,
    ACTIONS(35), 1,
      sym_keyword_decimal,
    ACTIONS(37), 1,
      sym_keyword_numeric,
    ACTIONS(39), 1,
      aux_sym_double_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_char_token1,
    ACTIONS(43), 1,
      aux_sym_keyword_char_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_varchar_token1,
    ACTIONS(49), 1,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_timestamptz_token1,
    STATE(321), 1,
      sym_keyword_varchar,
    STATE(337), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(301), 10,
      sym_keyword_int,
      sym_double,
      sym_keyword_timestamp,
      sym_keyword_timestamptz,
      sym__type,
      sym_bigint,
      sym_decimal,
      sym_numeric,
      sym_char,
      sym_varchar,
    ACTIONS(57), 16,
      sym_keyword_boolean,
      sym_keyword_smallserial,
      sym_keyword_serial,
      sym_keyword_bigserial,
      sym_keyword_smallint,
      sym_keyword_real,
      sym_keyword_money,
      sym_keyword_text,
      sym_keyword_jsonb,
      sym_keyword_xml,
      sym_keyword_bytea,
      sym_keyword_datetime,
      sym_keyword_geometry,
      sym_keyword_geography,
      sym_keyword_box2d,
      sym_keyword_box3d,
  [372] = 8,
    ACTIONS(65), 1,
      sym_keyword_as,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 11,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(61), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
  [421] = 8,
    ACTIONS(65), 1,
      sym_keyword_as,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 12,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(61), 13,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
  [470] = 8,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(79), 1,
      sym_keyword_as,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 12,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 13,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
  [519] = 8,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(79), 1,
      sym_keyword_as,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 11,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
  [568] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 11,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(85), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
  [614] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 14,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
    ACTIONS(25), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
  [652] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 14,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
    ACTIONS(21), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
  [690] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 12,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(85), 13,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
  [736] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 13,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
    ACTIONS(21), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
  [774] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 13,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
    ACTIONS(25), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
  [812] = 23,
    ACTIONS(91), 1,
      sym_keyword_select,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(647), 1,
      sym_select,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(904), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [889] = 23,
    ACTIONS(91), 1,
      sym_keyword_select,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(647), 1,
      sym_select,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(916), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [966] = 23,
    ACTIONS(91), 1,
      sym_keyword_select,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(647), 1,
      sym_select,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(889), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1043] = 23,
    ACTIONS(91), 1,
      sym_keyword_select,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(647), 1,
      sym_select,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(750), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1120] = 23,
    ACTIONS(91), 1,
      sym_keyword_select,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(647), 1,
      sym_select,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(910), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1197] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(828), 1,
      sym__function_params,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(729), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1271] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      sym_keyword_distinct,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(805), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1345] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(808), 1,
      sym__function_params,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(729), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1419] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(113), 1,
      sym_keyword_distinct,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(962), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1493] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(115), 1,
      sym_keyword_distinct,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(823), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1567] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(117), 1,
      sym_keyword_distinct,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(811), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1641] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(826), 1,
      sym__function_params,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(729), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1715] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(803), 1,
      sym__function_params,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(729), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1789] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(784), 1,
      sym__function_params,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(729), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1863] = 22,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(119), 1,
      sym_keyword_distinct,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(781), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1937] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1972] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2007] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(129), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2044] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(783), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2115] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(137), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2150] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(139), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2187] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2224] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(725), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2295] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2330] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2365] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2400] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(151), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2437] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(764), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2508] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(903), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2579] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2614] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2649] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(757), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2720] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(165), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2755] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(787), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2826] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(825), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2897] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(836), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2968] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(807), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3039] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3074] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3109] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3144] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(809), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3215] = 21,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(190), 1,
      sym_literal,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 2,
      sym_field,
      sym_predicate,
    STATE(806), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(224), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3286] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3321] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3356] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3391] = 4,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 18,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3427] = 8,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 11,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3471] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 21,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_offset,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3505] = 6,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3545] = 8,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 12,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3589] = 9,
    ACTIONS(211), 1,
      sym_keyword_in,
    ACTIONS(215), 1,
      anon_sym_PLUS,
    ACTIONS(217), 1,
      anon_sym_DASH,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3635] = 8,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(223), 1,
      sym_keyword_as,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 12,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3679] = 4,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 18,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3715] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(165), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 21,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_offset,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3749] = 11,
    ACTIONS(189), 1,
      sym_keyword_or,
    ACTIONS(211), 1,
      sym_keyword_in,
    ACTIONS(215), 1,
      anon_sym_PLUS,
    ACTIONS(217), 1,
      anon_sym_DASH,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [3799] = 6,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3839] = 8,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(223), 1,
      sym_keyword_as,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3883] = 8,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(233), 1,
      anon_sym_DOT,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 11,
      sym_keyword_order_by,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3927] = 8,
    ACTIONS(215), 1,
      anon_sym_PLUS,
    ACTIONS(217), 1,
      anon_sym_DASH,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3971] = 8,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(223), 1,
      sym_keyword_as,
    ACTIONS(235), 1,
      anon_sym_DOT,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
      sym_keyword_order_by,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4015] = 8,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(237), 1,
      anon_sym_PLUS,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4059] = 11,
    ACTIONS(189), 1,
      sym_keyword_or,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(237), 1,
      anon_sym_PLUS,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(245), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4109] = 9,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(237), 1,
      anon_sym_PLUS,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4155] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4188] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4221] = 7,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(247), 1,
      sym_keyword_as,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 11,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4262] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 11,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(19), 13,
      sym_keyword_order_by,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [4295] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 11,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(23), 13,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [4328] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4361] = 21,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(249), 1,
      sym_keyword_count,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_STAR,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(358), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(509), 1,
      sym_select_expression,
    STATE(900), 1,
      sym__function_name,
    STATE(901), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(485), 2,
      sym_field,
      sym_function_call,
    STATE(505), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4430] = 21,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(249), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_STAR,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(259), 1,
      sym_keyword_distinct,
    STATE(64), 1,
      sym__literal_string,
    STATE(358), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(504), 1,
      sym_select_expression,
    STATE(900), 1,
      sym__function_name,
    STATE(901), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(485), 2,
      sym_field,
      sym_function_call,
    STATE(505), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4499] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4532] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 11,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(23), 13,
      sym_keyword_order_by,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [4565] = 8,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(223), 1,
      sym_keyword_as,
    ACTIONS(261), 1,
      anon_sym_DOT,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 10,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4608] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 10,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(19), 14,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [4641] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 10,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(23), 14,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [4674] = 21,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_STAR,
    ACTIONS(263), 1,
      sym_keyword_count,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(352), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(509), 1,
      sym_select_expression,
    STATE(951), 1,
      sym__unary_function_name,
    STATE(952), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(481), 2,
      sym_field,
      sym_function_call,
    STATE(505), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4743] = 7,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(247), 1,
      sym_keyword_as,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 11,
      sym_keyword_order_by,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4784] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 11,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(19), 13,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [4817] = 8,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 10,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4860] = 8,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(223), 1,
      sym_keyword_as,
    ACTIONS(271), 1,
      anon_sym_DOT,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
      sym_keyword_order_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4903] = 21,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_STAR,
    ACTIONS(263), 1,
      sym_keyword_count,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      sym__identifier,
    ACTIONS(273), 1,
      sym_keyword_distinct,
    STATE(64), 1,
      sym__literal_string,
    STATE(352), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(504), 1,
      sym_select_expression,
    STATE(951), 1,
      sym__unary_function_name,
    STATE(952), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(481), 2,
      sym_field,
      sym_function_call,
    STATE(505), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4972] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5005] = 8,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(275), 1,
      anon_sym_DOT,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 11,
      sym_keyword_order_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5048] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5081] = 7,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(247), 1,
      sym_keyword_as,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 12,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5122] = 20,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      anon_sym_BQUOTE,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(420), 1,
      sym_identifier,
    STATE(812), 1,
      sym_select_expression,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(505), 2,
      sym__field_list,
      sym_literal,
    STATE(680), 2,
      sym_field,
      sym_function_call,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [5188] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 10,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(23), 13,
      sym_keyword_order_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [5220] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5252] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5284] = 7,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(247), 1,
      sym_keyword_as,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 10,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5324] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5356] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5388] = 7,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(247), 1,
      sym_keyword_as,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 11,
      sym_keyword_order_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5428] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5460] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5492] = 20,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(281), 1,
      sym_keyword_count,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
    ACTIONS(287), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(313), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(533), 1,
      sym_order_expression,
    STATE(947), 1,
      sym__unary_function_name,
    STATE(948), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(408), 2,
      sym__field_list,
      sym_literal,
    STATE(409), 2,
      sym_field,
      sym_function_call,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [5558] = 8,
    ACTIONS(289), 1,
      sym_keyword_as,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5600] = 8,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(297), 1,
      sym_keyword_as,
    ACTIONS(299), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5642] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 11,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(23), 12,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [5674] = 8,
    ACTIONS(289), 1,
      sym_keyword_as,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(301), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5716] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5748] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(137), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5780] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 10,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(19), 13,
      sym_keyword_order_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [5812] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5844] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5876] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5908] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5940] = 20,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(303), 1,
      sym_keyword_count,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(307), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(315), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(533), 1,
      sym_order_expression,
    STATE(955), 1,
      sym__unary_function_name,
    STATE(956), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(408), 2,
      sym__field_list,
      sym_literal,
    STATE(415), 2,
      sym_field,
      sym_function_call,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [6006] = 8,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(297), 1,
      sym_keyword_as,
    ACTIONS(309), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6048] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6080] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 11,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(19), 12,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [6112] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6144] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 19,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6176] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(165), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6208] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 19,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 10,
      sym_keyword_where,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(23), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [6271] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(311), 1,
      sym_keyword_as,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6310] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 10,
      sym_keyword_where,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(19), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [6341] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(311), 1,
      sym_keyword_as,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6380] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 9,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(19), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [6411] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 9,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(23), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [6442] = 6,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(131), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 10,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6478] = 12,
    ACTIONS(319), 1,
      sym_keyword_in,
    ACTIONS(321), 1,
      sym_keyword_and,
    ACTIONS(323), 1,
      sym_keyword_or,
    ACTIONS(329), 1,
      anon_sym_PLUS,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(337), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [6525] = 8,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(343), 1,
      anon_sym_DASH,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    ACTIONS(347), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 11,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6564] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(133), 10,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6595] = 4,
    ACTIONS(347), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 14,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6626] = 6,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    ACTIONS(347), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 12,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6661] = 9,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(343), 1,
      anon_sym_DASH,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    ACTIONS(347), 1,
      anon_sym_CARET,
    ACTIONS(351), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 10,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6702] = 11,
    ACTIONS(189), 1,
      sym_keyword_or,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(343), 1,
      anon_sym_DASH,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    ACTIONS(347), 1,
      anon_sym_CARET,
    ACTIONS(351), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(353), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6747] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(133), 10,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6778] = 6,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 12,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6813] = 4,
    ACTIONS(363), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 14,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6844] = 9,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      sym_keyword_in,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 10,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6885] = 11,
    ACTIONS(189), 1,
      sym_keyword_or,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      sym_keyword_in,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(373), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(371), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6930] = 8,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_CARET,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 11,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6969] = 12,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      sym_keyword_in,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    ACTIONS(375), 1,
      sym_keyword_and,
    ACTIONS(377), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(373), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(371), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7016] = 6,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 12,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7051] = 4,
    ACTIONS(335), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 14,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7082] = 9,
    ACTIONS(319), 1,
      sym_keyword_in,
    ACTIONS(329), 1,
      anon_sym_PLUS,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 10,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7123] = 11,
    ACTIONS(189), 1,
      sym_keyword_or,
    ACTIONS(319), 1,
      sym_keyword_in,
    ACTIONS(329), 1,
      anon_sym_PLUS,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(337), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [7168] = 8,
    ACTIONS(329), 1,
      anon_sym_PLUS,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 11,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7207] = 16,
    ACTIONS(381), 1,
      sym_keyword_inner,
    ACTIONS(383), 1,
      sym_keyword_join,
    ACTIONS(385), 1,
      sym_keyword_where,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(389), 1,
      sym_keyword_group_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(204), 1,
      sym_index_hint,
    STATE(376), 1,
      sym_where,
    STATE(442), 1,
      sym_group_by,
    STATE(494), 1,
      sym_order_by,
    STATE(640), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(393), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(395), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(202), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7261] = 9,
    ACTIONS(397), 1,
      sym_keyword_in,
    ACTIONS(401), 1,
      anon_sym_PLUS,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7301] = 6,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(131), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7335] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 15,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7363] = 11,
    ACTIONS(189), 1,
      sym_keyword_or,
    ACTIONS(397), 1,
      sym_keyword_in,
    ACTIONS(401), 1,
      anon_sym_PLUS,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(411), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7407] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(137), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 15,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7435] = 8,
    ACTIONS(401), 1,
      anon_sym_PLUS,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 10,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7473] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 15,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7501] = 6,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 11,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7535] = 4,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 13,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7565] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 15,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7593] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 15,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7621] = 16,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(417), 1,
      sym_keyword_inner,
    ACTIONS(419), 1,
      sym_keyword_join,
    ACTIONS(421), 1,
      sym_keyword_where,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    ACTIONS(425), 1,
      sym_keyword_group_by,
    STATE(197), 1,
      sym_index_hint,
    STATE(406), 1,
      sym_where,
    STATE(468), 1,
      sym_group_by,
    STATE(494), 1,
      sym_order_by,
    STATE(640), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(395), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    ACTIONS(415), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(198), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7675] = 6,
    ACTIONS(429), 1,
      anon_sym_SLASH,
    ACTIONS(431), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(427), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 11,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7709] = 4,
    ACTIONS(431), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 13,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7739] = 9,
    ACTIONS(429), 1,
      anon_sym_SLASH,
    ACTIONS(431), 1,
      anon_sym_CARET,
    ACTIONS(433), 1,
      sym_keyword_in,
    ACTIONS(435), 1,
      anon_sym_PLUS,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(427), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7779] = 8,
    ACTIONS(429), 1,
      anon_sym_SLASH,
    ACTIONS(431), 1,
      anon_sym_CARET,
    ACTIONS(435), 1,
      anon_sym_PLUS,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(427), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 10,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7817] = 11,
    ACTIONS(189), 1,
      sym_keyword_or,
    ACTIONS(429), 1,
      anon_sym_SLASH,
    ACTIONS(431), 1,
      anon_sym_CARET,
    ACTIONS(433), 1,
      sym_keyword_in,
    ACTIONS(435), 1,
      anon_sym_PLUS,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(427), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(441), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(439), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [7861] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 3,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(131), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7890] = 12,
    ACTIONS(397), 1,
      sym_keyword_in,
    ACTIONS(401), 1,
      anon_sym_PLUS,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_keyword_and,
    ACTIONS(445), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(411), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7935] = 6,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7968] = 9,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(453), 1,
      sym_keyword_in,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(187), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8007] = 4,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 13,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8036] = 6,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(585), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8069] = 8,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(187), 10,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8106] = 6,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 11,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8139] = 4,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 13,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8168] = 9,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(469), 1,
      sym_keyword_in,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(473), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(187), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8207] = 10,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(453), 1,
      sym_keyword_in,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(477), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(475), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8248] = 10,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(469), 1,
      sym_keyword_in,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(473), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(481), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8289] = 8,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(473), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(187), 10,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8326] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(131), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8354] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(131), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8382] = 8,
    ACTIONS(487), 1,
      sym_keyword_as,
    ACTIONS(489), 1,
      anon_sym_DOT,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(255), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(485), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(483), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [8418] = 8,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(495), 1,
      sym_keyword_as,
    ACTIONS(497), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(485), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(483), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8454] = 11,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(453), 1,
      sym_keyword_in,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(477), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(499), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(475), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8496] = 14,
    ACTIONS(381), 1,
      sym_keyword_inner,
    ACTIONS(383), 1,
      sym_keyword_join,
    ACTIONS(385), 1,
      sym_keyword_where,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(389), 1,
      sym_keyword_group_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(386), 1,
      sym_where,
    STATE(450), 1,
      sym_group_by,
    STATE(487), 1,
      sym_order_by,
    STATE(618), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(503), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(310), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8543] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [8568] = 14,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(417), 1,
      sym_keyword_inner,
    ACTIONS(419), 1,
      sym_keyword_join,
    ACTIONS(421), 1,
      sym_keyword_where,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    ACTIONS(425), 1,
      sym_keyword_group_by,
    STATE(397), 1,
      sym_where,
    STATE(451), 1,
      sym_group_by,
    STATE(488), 1,
      sym_order_by,
    STATE(664), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(505), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(207), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8615] = 14,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(417), 1,
      sym_keyword_inner,
    ACTIONS(419), 1,
      sym_keyword_join,
    ACTIONS(421), 1,
      sym_keyword_where,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    ACTIONS(425), 1,
      sym_keyword_group_by,
    STATE(397), 1,
      sym_where,
    STATE(451), 1,
      sym_group_by,
    STATE(488), 1,
      sym_order_by,
    STATE(664), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(505), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(309), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8662] = 11,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(453), 1,
      sym_keyword_in,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(477), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(499), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(475), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8703] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(511), 1,
      sym_keyword_as,
    STATE(238), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(509), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(507), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8736] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [8761] = 14,
    ACTIONS(381), 1,
      sym_keyword_inner,
    ACTIONS(383), 1,
      sym_keyword_join,
    ACTIONS(385), 1,
      sym_keyword_where,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(389), 1,
      sym_keyword_group_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(398), 1,
      sym_where,
    STATE(452), 1,
      sym_group_by,
    STATE(488), 1,
      sym_order_by,
    STATE(664), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(505), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(310), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8808] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 10,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [8833] = 14,
    ACTIONS(381), 1,
      sym_keyword_inner,
    ACTIONS(383), 1,
      sym_keyword_join,
    ACTIONS(385), 1,
      sym_keyword_where,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(389), 1,
      sym_keyword_group_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(398), 1,
      sym_where,
    STATE(452), 1,
      sym_group_by,
    STATE(488), 1,
      sym_order_by,
    STATE(664), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(505), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(195), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8880] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(513), 1,
      sym_keyword_as,
    STATE(238), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(509), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(507), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [8913] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 10,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [8938] = 14,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(417), 1,
      sym_keyword_inner,
    ACTIONS(419), 1,
      sym_keyword_join,
    ACTIONS(421), 1,
      sym_keyword_where,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    ACTIONS(425), 1,
      sym_keyword_group_by,
    STATE(369), 1,
      sym_where,
    STATE(449), 1,
      sym_group_by,
    STATE(487), 1,
      sym_order_by,
    STATE(618), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(503), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(309), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8985] = 13,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(277), 1,
      anon_sym_BQUOTE,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(420), 1,
      sym_identifier,
    STATE(936), 1,
      sym__unary_function_name,
    STATE(937), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(382), 2,
      sym_field,
      sym_function_call,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [9029] = 12,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(139), 1,
      sym_predicate,
    STATE(413), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(223), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9071] = 11,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    STATE(463), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(153), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9111] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(289), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(531), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(529), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [9141] = 10,
    ACTIONS(215), 1,
      anon_sym_PLUS,
    ACTIONS(217), 1,
      anon_sym_DASH,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(533), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(535), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(227), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9179] = 10,
    ACTIONS(397), 1,
      sym_keyword_in,
    ACTIONS(401), 1,
      anon_sym_PLUS,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(443), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(411), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9217] = 11,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    STATE(463), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9257] = 13,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(249), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(358), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(900), 1,
      sym__function_name,
    STATE(901), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(382), 2,
      sym_field,
      sym_function_call,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [9301] = 10,
    ACTIONS(429), 1,
      anon_sym_SLASH,
    ACTIONS(431), 1,
      anon_sym_CARET,
    ACTIONS(433), 1,
      sym_keyword_in,
    ACTIONS(435), 1,
      anon_sym_PLUS,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(427), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(441), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(541), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(439), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9339] = 13,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(263), 1,
      sym_keyword_count,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(951), 1,
      sym__unary_function_name,
    STATE(952), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(382), 2,
      sym_field,
      sym_function_call,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [9383] = 10,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(469), 1,
      sym_keyword_in,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(473), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(481), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(543), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(479), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9421] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(248), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(545), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [9451] = 11,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    STATE(463), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(178), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9491] = 12,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(161), 1,
      sym_predicate,
    STATE(609), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(218), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9533] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(463), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(199), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9573] = 10,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(343), 1,
      anon_sym_DASH,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    ACTIONS(347), 1,
      anon_sym_CARET,
    ACTIONS(351), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(553), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(353), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9611] = 10,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(453), 1,
      sym_keyword_in,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(477), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(499), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(475), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9649] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(289), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(531), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(529), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [9679] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(248), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(545), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [9709] = 10,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(237), 1,
      anon_sym_PLUS,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(555), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(245), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(557), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(243), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9747] = 13,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(303), 1,
      sym_keyword_count,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(307), 1,
      sym__identifier,
    STATE(315), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(955), 1,
      sym__unary_function_name,
    STATE(956), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(382), 2,
      sym_field,
      sym_function_call,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [9791] = 13,
    ACTIONS(97), 1,
      sym_keyword_if,
    ACTIONS(281), 1,
      sym_keyword_count,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
    ACTIONS(287), 1,
      sym__identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(362), 1,
      sym__multi_param_function,
    STATE(390), 1,
      sym__unary_function,
    STATE(391), 1,
      sym__count_function,
    STATE(947), 1,
      sym__unary_function_name,
    STATE(948), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(382), 2,
      sym_field,
      sym_function_call,
    ACTIONS(95), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [9835] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9872] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(148), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9909] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(147), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(213), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9948] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(144), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9985] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(106), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10022] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(158), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10059] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(157), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10096] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(156), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10133] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(567), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10154] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(106), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10191] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(155), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10228] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(154), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10265] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(34), 1,
      sym_predicate,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(212), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10304] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(38), 1,
      sym_predicate,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(212), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10343] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(147), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(216), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10382] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(43), 1,
      sym_predicate,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(212), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10421] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(106), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10458] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(43), 1,
      sym_predicate,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(227), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10497] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(569), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10518] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(183), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10555] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(152), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10592] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(186), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10629] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(185), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10666] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(167), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10703] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(34), 1,
      sym_predicate,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(227), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10742] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(571), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10763] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(151), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10800] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(143), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10837] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(184), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10874] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(170), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10911] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(194), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10948] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(145), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10985] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(150), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11022] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(142), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(223), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11061] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    STATE(177), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(218), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11100] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(573), 1,
      anon_sym_BQUOTE,
    ACTIONS(575), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(106), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11137] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(146), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11174] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(573), 1,
      anon_sym_BQUOTE,
    ACTIONS(575), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(172), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11211] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(149), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11248] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(573), 1,
      anon_sym_BQUOTE,
    ACTIONS(575), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(173), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11285] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(37), 1,
      sym_predicate,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(212), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11324] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(60), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11361] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(188), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11398] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(573), 1,
      anon_sym_BQUOTE,
    ACTIONS(575), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(174), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11435] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(106), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11472] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(37), 1,
      sym_predicate,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(227), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11511] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(75), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11548] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(168), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11585] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(141), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11622] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(170), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11659] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(71), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11696] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(67), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11733] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(69), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11770] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11807] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(573), 1,
      anon_sym_BQUOTE,
    ACTIONS(575), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(176), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11844] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(72), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11881] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(160), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11918] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(60), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11955] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(163), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11992] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12013] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(165), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12050] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(77), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12087] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(78), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12124] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12161] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(181), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12198] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(180), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12235] = 10,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(573), 1,
      anon_sym_BQUOTE,
    ACTIONS(575), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
    STATE(123), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(175), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12272] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(187), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12309] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(79), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12346] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(38), 1,
      sym_predicate,
    STATE(64), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(227), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12385] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(61), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(62), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12422] = 10,
    ACTIONS(597), 1,
      sym_keyword_primary,
    ACTIONS(599), 1,
      sym_keyword_not,
    ACTIONS(601), 1,
      sym_keyword_auto_increment,
    ACTIONS(603), 1,
      sym_keyword_default,
    STATE(447), 1,
      sym__primary_key,
    STATE(586), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(344), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(605), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12458] = 9,
    ACTIONS(607), 1,
      sym_keyword_set,
    ACTIONS(609), 1,
      sym_keyword_alter,
    ACTIONS(611), 1,
      sym_keyword_drop,
    ACTIONS(613), 1,
      sym_keyword_add,
    ACTIONS(615), 1,
      sym_keyword_rename,
    ACTIONS(617), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(688), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(882), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12492] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(619), 13,
      sym_keyword_from,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12512] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(621), 13,
      sym_keyword_from,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12532] = 3,
    ACTIONS(625), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 12,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_alter,
      sym_keyword_drop,
      sym_keyword_add,
      sym_keyword_as,
      sym_keyword_cascade,
      sym_keyword_rename,
      sym_keyword_owner,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12554] = 9,
    ACTIONS(607), 1,
      sym_keyword_set,
    ACTIONS(609), 1,
      sym_keyword_alter,
    ACTIONS(611), 1,
      sym_keyword_drop,
    ACTIONS(613), 1,
      sym_keyword_add,
    ACTIONS(615), 1,
      sym_keyword_rename,
    ACTIONS(617), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(632), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(770), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12588] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(627), 12,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_alter,
      sym_keyword_drop,
      sym_keyword_add,
      sym_keyword_as,
      sym_keyword_cascade,
      sym_keyword_rename,
      sym_keyword_owner,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12607] = 13,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(629), 1,
      sym_keyword_primary,
    ACTIONS(631), 1,
      sym_keyword_key,
    ACTIONS(633), 1,
      sym_keyword_constraint,
    STATE(6), 1,
      sym_identifier,
    STATE(601), 1,
      sym_constraint,
    STATE(726), 1,
      sym__primary_key,
    STATE(727), 1,
      sym__primary_key_constraint,
    STATE(731), 1,
      sym__key_constraint,
    STATE(734), 1,
      sym_column_definition,
    STATE(746), 1,
      sym__constraint_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12648] = 6,
    ACTIONS(638), 1,
      sym_keyword_inner,
    ACTIONS(641), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(635), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(309), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(644), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12675] = 6,
    ACTIONS(649), 1,
      sym_keyword_inner,
    ACTIONS(652), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(646), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(310), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(644), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12702] = 8,
    ACTIONS(289), 1,
      sym_keyword_as,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(655), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(75), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [12732] = 3,
    ACTIONS(659), 1,
      aux_sym_keyword_varchar_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(657), 10,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12752] = 8,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(297), 1,
      sym_keyword_as,
    ACTIONS(661), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(63), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12782] = 8,
    ACTIONS(289), 1,
      sym_keyword_as,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(663), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(77), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12812] = 8,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(297), 1,
      sym_keyword_as,
    ACTIONS(665), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(61), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [12842] = 4,
    ACTIONS(669), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(671), 1,
      aux_sym_keyword_timestamp_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(667), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12864] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(675), 1,
      sym_keyword_as,
    STATE(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(673), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [12891] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(681), 1,
      sym_keyword_as,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(679), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(683), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12918] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(23), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_BQUOTE,
  [12937] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(687), 1,
      sym_keyword_as,
    STATE(394), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(685), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [12964] = 3,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(691), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12983] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(675), 1,
      sym_keyword_as,
    STATE(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(673), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(677), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13010] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13029] = 3,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(695), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13048] = 3,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(699), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13067] = 3,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(703), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13086] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(709), 1,
      sym_keyword_as,
    STATE(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(707), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(711), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13113] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(657), 10,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13130] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(715), 1,
      sym_keyword_as,
    STATE(389), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(713), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(717), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13157] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(687), 1,
      sym_keyword_as,
    STATE(394), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(685), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(689), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13184] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(19), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_BQUOTE,
  [13203] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(719), 10,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13220] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13239] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(311), 1,
      sym_keyword_as,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(85), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13266] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(709), 1,
      sym_keyword_as,
    STATE(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(711), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(707), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13293] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13312] = 3,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(721), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13331] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(725), 10,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13348] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(715), 1,
      sym_keyword_as,
    STATE(389), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(713), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13375] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13394] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(311), 1,
      sym_keyword_as,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13421] = 7,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    ACTIONS(681), 1,
      sym_keyword_as,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(679), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13448] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13464] = 7,
    ACTIONS(597), 1,
      sym_keyword_primary,
    ACTIONS(729), 1,
      sym_keyword_auto_increment,
    STATE(436), 1,
      sym__primary_key,
    STATE(558), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(731), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13490] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(733), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13506] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(735), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13522] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(737), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13538] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(739), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13554] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(741), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13570] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13586] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(745), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13602] = 8,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(747), 1,
      sym_keyword_as,
    ACTIONS(749), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(63), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13630] = 8,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(751), 1,
      sym_keyword_as,
    ACTIONS(753), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(77), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13658] = 8,
    ACTIONS(75), 1,
      sym_keyword_from,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(751), 1,
      sym_keyword_as,
    ACTIONS(755), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13686] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13702] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(759), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13718] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(761), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13734] = 8,
    ACTIONS(61), 1,
      sym_keyword_from,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(747), 1,
      sym_keyword_as,
    ACTIONS(763), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13762] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(765), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13778] = 8,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(767), 1,
      sym_keyword_as,
    ACTIONS(769), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(483), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(485), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [13806] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13821] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(773), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13836] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(775), 1,
      sym_keyword_as,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(679), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13861] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(777), 1,
      sym_keyword_as,
    STATE(389), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(713), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(717), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13886] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(779), 1,
      sym_keyword_as,
    STATE(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(707), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(711), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13911] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(781), 1,
      sym_keyword_as,
    STATE(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(673), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13936] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 4,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 4,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13953] = 6,
    ACTIONS(597), 1,
      sym_keyword_primary,
    STATE(467), 1,
      sym__primary_key,
    STATE(614), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(783), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13976] = 8,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    ACTIONS(425), 1,
      sym_keyword_group_by,
    STATE(470), 1,
      sym_group_by,
    STATE(475), 1,
      sym_order_by,
    STATE(571), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14003] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 4,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 4,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [14020] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(787), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14035] = 8,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(555), 1,
      sym_table_reference,
    STATE(891), 1,
      sym__table_references,
    STATE(893), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(892), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [14062] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14079] = 9,
    ACTIONS(791), 1,
      sym_keyword_table,
    ACTIONS(793), 1,
      sym_keyword_view,
    ACTIONS(795), 1,
      sym_keyword_materialized,
    ACTIONS(797), 1,
      sym_keyword_or,
    ACTIONS(799), 1,
      sym_keyword_temp,
    ACTIONS(801), 1,
      sym_keyword_temporary,
    STATE(699), 1,
      sym__or_replace,
    STATE(887), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14108] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14123] = 8,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(389), 1,
      sym_keyword_group_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(452), 1,
      sym_group_by,
    STATE(488), 1,
      sym_order_by,
    STATE(664), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(505), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14150] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(805), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14165] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(673), 1,
      sym_keyword_from,
    ACTIONS(781), 1,
      sym_keyword_as,
    STATE(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(677), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14190] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(807), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14205] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(679), 1,
      sym_keyword_from,
    ACTIONS(775), 1,
      sym_keyword_as,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14230] = 6,
    ACTIONS(597), 1,
      sym_keyword_primary,
    STATE(436), 1,
      sym__primary_key,
    STATE(558), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(731), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14253] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(809), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14268] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(707), 1,
      sym_keyword_from,
    ACTIONS(779), 1,
      sym_keyword_as,
    STATE(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(711), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14293] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(811), 1,
      sym_keyword_as,
    ACTIONS(813), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(483), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [14318] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(815), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14333] = 8,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(389), 1,
      sym_keyword_group_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(466), 1,
      sym_group_by,
    STATE(475), 1,
      sym_order_by,
    STATE(571), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14360] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14377] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(713), 1,
      sym_keyword_from,
    ACTIONS(777), 1,
      sym_keyword_as,
    STATE(389), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14402] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(817), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14417] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(773), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14432] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(773), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14447] = 9,
    ACTIONS(597), 1,
      sym_keyword_primary,
    ACTIONS(819), 1,
      sym_keyword_key,
    ACTIONS(821), 1,
      sym_keyword_constraint,
    STATE(704), 1,
      sym_constraint,
    STATE(726), 1,
      sym__primary_key,
    STATE(727), 1,
      sym__primary_key_constraint,
    STATE(731), 1,
      sym__key_constraint,
    STATE(746), 1,
      sym__constraint_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14476] = 7,
    ACTIONS(85), 1,
      sym_keyword_from,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(823), 1,
      sym_keyword_as,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14501] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(825), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14516] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(827), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14531] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(829), 1,
      sym_keyword_as,
    STATE(238), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(507), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(509), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [14556] = 8,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    ACTIONS(425), 1,
      sym_keyword_group_by,
    STATE(449), 1,
      sym_group_by,
    STATE(487), 1,
      sym_order_by,
    STATE(618), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(503), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14583] = 8,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(389), 1,
      sym_keyword_group_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(450), 1,
      sym_group_by,
    STATE(487), 1,
      sym_order_by,
    STATE(618), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(503), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14610] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(831), 1,
      sym_keyword_as,
    STATE(394), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(685), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(689), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14635] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(833), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14650] = 8,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(835), 1,
      sym_keyword_default,
    ACTIONS(837), 1,
      anon_sym_SEMI,
    STATE(759), 1,
      sym_table_options,
    STATE(884), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(410), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14677] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(685), 1,
      sym_keyword_from,
    ACTIONS(831), 1,
      sym_keyword_as,
    STATE(394), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14702] = 8,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(835), 1,
      sym_keyword_default,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    STATE(883), 1,
      sym_table_options,
    STATE(884), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(410), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14729] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(823), 1,
      sym_keyword_as,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14754] = 8,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(835), 1,
      sym_keyword_default,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    STATE(837), 1,
      sym_table_options,
    STATE(884), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(410), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14781] = 8,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    ACTIONS(425), 1,
      sym_keyword_group_by,
    STATE(451), 1,
      sym_group_by,
    STATE(488), 1,
      sym_order_by,
    STATE(664), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(505), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14808] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(248), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(547), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [14830] = 4,
    STATE(545), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(843), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14848] = 4,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    STATE(423), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(845), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14866] = 7,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(835), 1,
      sym_keyword_default,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    STATE(884), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(411), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14890] = 7,
    ACTIONS(851), 1,
      sym_keyword_default,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    ACTIONS(856), 1,
      anon_sym_BQUOTE,
    ACTIONS(859), 1,
      sym__identifier,
    STATE(884), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(411), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14914] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 5,
      sym_keyword_on,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [14930] = 8,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(862), 1,
      sym_keyword_where,
    ACTIONS(864), 1,
      anon_sym_SEMI,
    STATE(474), 1,
      sym_where,
    STATE(671), 1,
      sym_order_by,
    STATE(854), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14956] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(866), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14970] = 4,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    STATE(426), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(845), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14988] = 7,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(870), 1,
      sym_keyword_as,
    ACTIONS(872), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15012] = 5,
    ACTIONS(607), 1,
      sym_keyword_set,
    ACTIONS(615), 1,
      sym_keyword_rename,
    ACTIONS(617), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(853), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [15032] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(874), 1,
      sym_keyword_as,
    STATE(238), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(507), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [15054] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 5,
      sym_keyword_on,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [15070] = 7,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(876), 1,
      sym_keyword_as,
    ACTIONS(878), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15094] = 4,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(809), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15112] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    STATE(64), 1,
      sym__literal_string,
    STATE(622), 1,
      sym_literal,
    STATE(623), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15138] = 4,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(883), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15156] = 5,
    ACTIONS(607), 1,
      sym_keyword_set,
    ACTIONS(615), 1,
      sym_keyword_rename,
    ACTIONS(617), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(769), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [15176] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(809), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15194] = 4,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(883), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15212] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    STATE(64), 1,
      sym__literal_string,
    STATE(683), 1,
      sym_literal,
    STATE(684), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15238] = 8,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(862), 1,
      sym_keyword_where,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      sym_where,
    STATE(643), 1,
      sym_order_by,
    STATE(760), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15264] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(289), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(529), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(531), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [15286] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(890), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15300] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    STATE(64), 1,
      sym__literal_string,
    STATE(647), 1,
      sym_select,
    STATE(650), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15326] = 6,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(892), 1,
      sym_keyword_as,
    STATE(389), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15347] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(248), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [15366] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(23), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15381] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(894), 1,
      sym_keyword_if,
    STATE(305), 1,
      sym_identifier,
    STATE(516), 1,
      sym__if_exists,
    STATE(728), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15404] = 4,
    STATE(614), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(783), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15421] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(894), 1,
      sym_keyword_if,
    STATE(305), 1,
      sym_identifier,
    STATE(424), 1,
      sym_table_reference,
    STATE(515), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15444] = 6,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(896), 1,
      sym_keyword_as,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15465] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(894), 1,
      sym_keyword_if,
    STATE(305), 1,
      sym_identifier,
    STATE(306), 1,
      sym_table_reference,
    STATE(514), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15488] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(19), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15503] = 6,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(898), 1,
      sym_keyword_as,
    STATE(394), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15524] = 6,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(488), 1,
      sym_order_by,
    STATE(664), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(505), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15545] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(900), 1,
      sym_keyword_if,
    STATE(305), 1,
      sym_identifier,
    STATE(513), 1,
      sym__if_not_exists,
    STATE(818), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15568] = 7,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(900), 1,
      sym_keyword_if,
    STATE(512), 1,
      sym__if_not_exists,
    STATE(681), 1,
      sym_identifier,
    STATE(720), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15591] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(289), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(529), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [15610] = 4,
    ACTIONS(904), 1,
      sym_keyword_having,
    STATE(478), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(902), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15627] = 4,
    STATE(558), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(731), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15644] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(894), 1,
      sym_keyword_if,
    STATE(305), 1,
      sym_identifier,
    STATE(517), 1,
      sym__if_exists,
    STATE(742), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15667] = 6,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    STATE(475), 1,
      sym_order_by,
    STATE(571), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15688] = 6,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(475), 1,
      sym_order_by,
    STATE(571), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15709] = 6,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    STATE(487), 1,
      sym_order_by,
    STATE(618), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(503), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15730] = 6,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(487), 1,
      sym_order_by,
    STATE(618), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(503), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15751] = 6,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(906), 1,
      sym_keyword_as,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15772] = 4,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [15789] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(900), 1,
      sym_keyword_if,
    STATE(305), 1,
      sym_identifier,
    STATE(521), 1,
      sym__if_not_exists,
    STATE(795), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15812] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(911), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15825] = 7,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(900), 1,
      sym_keyword_if,
    STATE(520), 1,
      sym__if_not_exists,
    STATE(681), 1,
      sym_identifier,
    STATE(739), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15848] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(900), 1,
      sym_keyword_if,
    STATE(305), 1,
      sym_identifier,
    STATE(525), 1,
      sym__if_not_exists,
    STATE(782), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15871] = 4,
    ACTIONS(913), 1,
      sym_keyword_having,
    STATE(478), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(902), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15888] = 6,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(915), 1,
      sym_keyword_as,
    STATE(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(677), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15909] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(900), 1,
      sym_keyword_if,
    STATE(305), 1,
      sym_identifier,
    STATE(528), 1,
      sym__if_not_exists,
    STATE(957), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15932] = 6,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(917), 1,
      sym_keyword_as,
    STATE(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(711), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15953] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(919), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15966] = 5,
    ACTIONS(609), 1,
      sym_keyword_alter,
    ACTIONS(611), 1,
      sym_keyword_drop,
    ACTIONS(613), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(722), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [15985] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(900), 1,
      sym_keyword_if,
    STATE(6), 1,
      sym_identifier,
    STATE(539), 1,
      sym__if_not_exists,
    STATE(738), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16008] = 6,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(489), 1,
      sym_order_by,
    STATE(665), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(921), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16029] = 4,
    STATE(551), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(923), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16046] = 6,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    STATE(488), 1,
      sym_order_by,
    STATE(664), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(505), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16067] = 4,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(925), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [16084] = 6,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(423), 1,
      sym_keyword_order_by,
    STATE(489), 1,
      sym_order_by,
    STATE(665), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(921), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16105] = 6,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    STATE(64), 1,
      sym__literal_string,
    STATE(483), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16125] = 6,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(894), 1,
      sym_keyword_if,
    STATE(549), 1,
      sym__if_exists,
    STATE(733), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16145] = 4,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    STATE(473), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(809), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16161] = 6,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(930), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      sym_order_by,
    STATE(758), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16181] = 4,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(665), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(921), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16197] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(473), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(883), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16213] = 6,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    STATE(64), 1,
      sym__literal_string,
    STATE(650), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16233] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(934), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16245] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(936), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16257] = 6,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    STATE(64), 1,
      sym__literal_string,
    STATE(572), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16277] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(476), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(845), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16293] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(938), 1,
      sym_keyword_column,
    ACTIONS(940), 1,
      sym_keyword_to,
    STATE(856), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16313] = 4,
    ACTIONS(942), 1,
      sym_keyword_offset,
    STATE(619), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(944), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16329] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(626), 1,
      sym_table_reference,
    STATE(833), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16349] = 4,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(845), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16365] = 4,
    STATE(692), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(948), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16381] = 4,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(571), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16397] = 4,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(618), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(503), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16413] = 4,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(595), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(950), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16429] = 6,
    ACTIONS(387), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(952), 1,
      anon_sym_SEMI,
    STATE(663), 1,
      sym_order_by,
    STATE(857), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16449] = 4,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(491), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(809), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16465] = 4,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(491), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(883), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16481] = 6,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym__number,
    STATE(64), 1,
      sym__literal_string,
    STATE(732), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16501] = 4,
    ACTIONS(391), 1,
      sym_keyword_limit,
    STATE(664), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(505), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16517] = 4,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(495), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [16532] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(960), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(962), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16545] = 5,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(486), 1,
      sym_identifier,
    STATE(698), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16562] = 5,
    ACTIONS(966), 1,
      anon_sym_BQUOTE,
    ACTIONS(968), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(501), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16579] = 5,
    ACTIONS(966), 1,
      anon_sym_BQUOTE,
    ACTIONS(968), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(502), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16596] = 5,
    ACTIONS(966), 1,
      anon_sym_BQUOTE,
    ACTIONS(968), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(503), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16613] = 4,
    ACTIONS(970), 1,
      sym_keyword_on,
    STATE(945), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16628] = 4,
    ACTIONS(972), 1,
      sym_keyword_on,
    STATE(944), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16643] = 4,
    ACTIONS(974), 1,
      sym_keyword_on,
    STATE(942), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16658] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(976), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16669] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(978), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16680] = 5,
    ACTIONS(980), 1,
      anon_sym_BQUOTE,
    ACTIONS(982), 1,
      sym__identifier,
    STATE(159), 1,
      sym_table_expression,
    STATE(193), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16697] = 5,
    ACTIONS(984), 1,
      anon_sym_BQUOTE,
    ACTIONS(986), 1,
      sym__identifier,
    STATE(360), 1,
      sym_identifier,
    STATE(428), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16714] = 4,
    ACTIONS(988), 1,
      sym_keyword_from,
    STATE(702), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(990), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16729] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(992), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16740] = 4,
    ACTIONS(994), 1,
      sym_keyword_from,
    STATE(898), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16755] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(744), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16772] = 5,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(681), 1,
      sym_identifier,
    STATE(739), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16789] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(795), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16806] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(302), 1,
      sym_table_reference,
    STATE(305), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16823] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(417), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16840] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(747), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16857] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(745), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16874] = 5,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(668), 1,
      sym__column_without_order,
    STATE(716), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16891] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(526), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16908] = 5,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(681), 1,
      sym_identifier,
    STATE(693), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16925] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(963), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16942] = 5,
    ACTIONS(966), 1,
      anon_sym_BQUOTE,
    ACTIONS(968), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(532), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16959] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(998), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16970] = 4,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(495), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(925), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [16985] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(957), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17002] = 5,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(538), 1,
      aux_sym_column_definitions_repeat1,
    STATE(761), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1004), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1006), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17032] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(765), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17049] = 5,
    ACTIONS(1008), 1,
      anon_sym_BQUOTE,
    ACTIONS(1010), 1,
      sym__identifier,
    STATE(171), 1,
      sym_table_expression,
    STATE(192), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17066] = 5,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(681), 1,
      sym_identifier,
    STATE(786), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17083] = 5,
    ACTIONS(966), 1,
      anon_sym_BQUOTE,
    ACTIONS(968), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(542), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17100] = 4,
    ACTIONS(1012), 1,
      sym_keyword_on,
    STATE(789), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17115] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1014), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17126] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [17139] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [17152] = 5,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(716), 1,
      sym_identifier,
    STATE(735), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17169] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1016), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1018), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17182] = 5,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_column_definitions_repeat1,
    STATE(813), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17199] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(714), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17216] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(734), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17233] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1022), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1024), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17246] = 4,
    ACTIONS(1026), 1,
      sym_keyword_on,
    STATE(850), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17261] = 4,
    ACTIONS(1028), 1,
      sym_keyword_on,
    STATE(753), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17276] = 5,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(486), 1,
      sym_identifier,
    STATE(689), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17293] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1030), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17304] = 5,
    ACTIONS(966), 1,
      anon_sym_BQUOTE,
    ACTIONS(968), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(543), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17321] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1032), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1034), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17334] = 4,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(136), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17348] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(715), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17362] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(446), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17376] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1036), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17386] = 4,
    ACTIONS(1038), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
    STATE(721), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17400] = 4,
    ACTIONS(990), 1,
      anon_sym_SEMI,
    ACTIONS(1042), 1,
      sym_keyword_from,
    STATE(702), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17414] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(400), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17428] = 4,
    ACTIONS(1044), 1,
      sym_keyword_set,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    STATE(589), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17442] = 4,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    ACTIONS(1050), 1,
      anon_sym_COMMA,
    STATE(556), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17456] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17470] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(783), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17480] = 4,
    ACTIONS(573), 1,
      anon_sym_BQUOTE,
    ACTIONS(575), 1,
      sym__identifier,
    STATE(107), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17494] = 4,
    ACTIONS(573), 1,
      anon_sym_BQUOTE,
    ACTIONS(575), 1,
      sym__identifier,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17508] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17522] = 4,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17536] = 4,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17550] = 4,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(1053), 1,
      sym__identifier,
    STATE(334), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17564] = 4,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(1053), 1,
      sym__identifier,
    STATE(311), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17578] = 4,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17592] = 4,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    STATE(679), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17606] = 4,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17620] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17634] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17648] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(921), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17658] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1059), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17668] = 4,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(1061), 1,
      sym__identifier,
    STATE(353), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17682] = 4,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17696] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(755), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17710] = 4,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17724] = 4,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17738] = 4,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    STATE(556), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17752] = 4,
    ACTIONS(1067), 1,
      sym_keyword_not,
    ACTIONS(1069), 1,
      sym_keyword_default,
    ACTIONS(1071), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17766] = 4,
    ACTIONS(1073), 1,
      sym_keyword_select,
    STATE(508), 1,
      sym_select,
    STATE(552), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17780] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17794] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(354), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17808] = 4,
    ACTIONS(1038), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1075), 1,
      anon_sym_SEMI,
    STATE(703), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17822] = 4,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17836] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17850] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17860] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17874] = 4,
    ACTIONS(277), 1,
      anon_sym_BQUOTE,
    ACTIONS(1079), 1,
      sym__identifier,
    STATE(416), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17888] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      sym_keyword_set,
    STATE(607), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17902] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(307), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17916] = 4,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17930] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(307), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17944] = 4,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    STATE(593), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17958] = 4,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
    ACTIONS(1086), 1,
      sym__identifier,
    STATE(341), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17972] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1088), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17982] = 4,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    STATE(596), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17996] = 4,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
    ACTIONS(1086), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18010] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1095), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18024] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1095), 1,
      sym__identifier,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18038] = 4,
    ACTIONS(1008), 1,
      anon_sym_BQUOTE,
    ACTIONS(1010), 1,
      sym__identifier,
    STATE(205), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18052] = 4,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(567), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18066] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1095), 1,
      sym__identifier,
    STATE(47), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18080] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(820), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18094] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(709), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18108] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(710), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18122] = 4,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18136] = 4,
    ACTIONS(1099), 1,
      sym_keyword_set,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    STATE(607), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18150] = 4,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18164] = 4,
    ACTIONS(1109), 1,
      sym_keyword_where,
    ACTIONS(1111), 1,
      anon_sym_SEMI,
    STATE(859), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18178] = 4,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18192] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(553), 1,
      sym_select,
    STATE(953), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18206] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18220] = 4,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    STATE(613), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18234] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(923), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18244] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(400), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18258] = 4,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(1118), 1,
      sym__identifier,
    STATE(111), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18272] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18286] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18296] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1122), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18306] = 4,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(1118), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18320] = 4,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_SEMI,
    STATE(621), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18334] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18348] = 4,
    ACTIONS(1042), 1,
      sym_keyword_from,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    STATE(790), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18362] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(847), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18376] = 4,
    ACTIONS(966), 1,
      anon_sym_BQUOTE,
    ACTIONS(968), 1,
      sym__identifier,
    STATE(418), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18390] = 4,
    ACTIONS(1133), 1,
      sym_keyword_values,
    ACTIONS(1135), 1,
      anon_sym_LPAREN,
    STATE(800), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18404] = 4,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(1118), 1,
      sym__identifier,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18418] = 4,
    ACTIONS(277), 1,
      anon_sym_BQUOTE,
    ACTIONS(1079), 1,
      sym__identifier,
    STATE(438), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18432] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(375), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18446] = 4,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(1061), 1,
      sym__identifier,
    STATE(404), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18460] = 4,
    ACTIONS(1137), 1,
      sym_keyword_set,
    ACTIONS(1139), 1,
      sym_keyword_drop,
    ACTIONS(1141), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18474] = 4,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
    STATE(672), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18488] = 4,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_SEMI,
    STATE(621), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18502] = 4,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18516] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(553), 1,
      sym_select,
    STATE(838), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18530] = 4,
    ACTIONS(1038), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1149), 1,
      anon_sym_SEMI,
    STATE(741), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18544] = 4,
    ACTIONS(1073), 1,
      sym_keyword_select,
    STATE(508), 1,
      sym_select,
    STATE(583), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18558] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(459), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18572] = 4,
    ACTIONS(1151), 1,
      anon_sym_BQUOTE,
    ACTIONS(1153), 1,
      sym__identifier,
    STATE(547), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18586] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(505), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18596] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(377), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18610] = 4,
    ACTIONS(980), 1,
      anon_sym_BQUOTE,
    ACTIONS(982), 1,
      sym__identifier,
    STATE(200), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18624] = 4,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(952), 1,
      anon_sym_SEMI,
    STATE(857), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18638] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18652] = 4,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18666] = 4,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
    STATE(799), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18680] = 4,
    ACTIONS(1042), 1,
      sym_keyword_from,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    STATE(751), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18694] = 4,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18708] = 4,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18722] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    STATE(585), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18736] = 4,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18750] = 4,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(400), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18764] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(794), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18778] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(375), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18792] = 4,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    STATE(655), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18806] = 4,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(655), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18820] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(377), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18834] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18848] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18862] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(393), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18876] = 4,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(375), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18890] = 4,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(377), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18904] = 4,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(1174), 1,
      anon_sym_SEMI,
    STATE(791), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18918] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(503), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18928] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(950), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18938] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18952] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18966] = 4,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18980] = 4,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18994] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19008] = 4,
    ACTIONS(391), 1,
      sym_keyword_limit,
    ACTIONS(930), 1,
      anon_sym_SEMI,
    STATE(758), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19022] = 4,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_SEMI,
    STATE(621), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19036] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(788), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19050] = 4,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(593), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19064] = 4,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19078] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(785), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19092] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(631), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19106] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(996), 1,
      sym__identifier,
    STATE(771), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19120] = 4,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(679), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19134] = 4,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(674), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19148] = 3,
    ACTIONS(1189), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [19160] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(553), 1,
      sym_select,
    STATE(763), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19174] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(670), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19188] = 4,
    ACTIONS(1042), 1,
      sym_keyword_from,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(851), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19202] = 4,
    ACTIONS(984), 1,
      anon_sym_BQUOTE,
    ACTIONS(986), 1,
      sym__identifier,
    STATE(396), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19216] = 4,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(964), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19230] = 4,
    ACTIONS(1073), 1,
      sym_keyword_select,
    STATE(508), 1,
      sym_select,
    STATE(636), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19244] = 4,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_SEMI,
    STATE(633), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19258] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19272] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19281] = 3,
    ACTIONS(1197), 1,
      sym_keyword_outer,
    ACTIONS(1199), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19292] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1201), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19301] = 3,
    ACTIONS(1203), 1,
      anon_sym_LPAREN,
    STATE(405), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19312] = 3,
    ACTIONS(1205), 1,
      sym_keyword_table,
    ACTIONS(1207), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19323] = 3,
    ACTIONS(1209), 1,
      sym_keyword_table,
    ACTIONS(1211), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19334] = 3,
    ACTIONS(1213), 1,
      sym_keyword_from,
    STATE(881), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19345] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1215), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19354] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1048), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19363] = 3,
    ACTIONS(1217), 1,
      sym_keyword_view,
    ACTIONS(1219), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19374] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1221), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19383] = 3,
    ACTIONS(1223), 1,
      anon_sym_LPAREN,
    STATE(740), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19394] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1225), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [19403] = 3,
    ACTIONS(1227), 1,
      sym_keyword_no,
    ACTIONS(1229), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19414] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1184), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19423] = 3,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    ACTIONS(1233), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19434] = 3,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
    ACTIONS(1237), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19445] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1239), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19454] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1241), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19463] = 3,
    ACTIONS(597), 1,
      sym_keyword_primary,
    STATE(701), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19474] = 3,
    ACTIONS(1223), 1,
      anon_sym_LPAREN,
    STATE(707), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19485] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1243), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [19494] = 3,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
    STATE(756), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19505] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1247), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19514] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1249), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19523] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1251), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19532] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1253), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19541] = 3,
    ACTIONS(1067), 1,
      sym_keyword_not,
    ACTIONS(1255), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19552] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1257), 2,
      sym_keyword_no,
      sym_keyword_data,
  [19561] = 3,
    ACTIONS(1259), 1,
      sym_keyword_for,
    ACTIONS(1261), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19572] = 3,
    ACTIONS(1203), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19583] = 3,
    ACTIONS(1263), 1,
      sym_keyword_no,
    ACTIONS(1265), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19594] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1127), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19603] = 3,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
    STATE(843), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19614] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1267), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [19623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1269), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19632] = 3,
    ACTIONS(1223), 1,
      anon_sym_LPAREN,
    STATE(708), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19643] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1271), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19652] = 3,
    ACTIONS(1273), 1,
      sym_keyword_cascade,
    ACTIONS(1275), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19663] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(656), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19683] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1279), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19692] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1113), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19701] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1281), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19710] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1090), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19719] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1283), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19728] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1285), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19737] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1287), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [19746] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1289), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19755] = 3,
    ACTIONS(1203), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19766] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1291), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19775] = 3,
    ACTIONS(1293), 1,
      sym_keyword_no,
    ACTIONS(1295), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19786] = 3,
    ACTIONS(1297), 1,
      sym_keyword_cascade,
    ACTIONS(1299), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19797] = 3,
    ACTIONS(1301), 1,
      sym_keyword_outer,
    ACTIONS(1303), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19808] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1099), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [19817] = 3,
    ACTIONS(1305), 1,
      sym_keyword_cascade,
    ACTIONS(1307), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19828] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1279), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19837] = 3,
    ACTIONS(1309), 1,
      sym_keyword_cascade,
    ACTIONS(1311), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19848] = 2,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19856] = 2,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19864] = 2,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19872] = 2,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19880] = 2,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19888] = 2,
    ACTIONS(1323), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19896] = 2,
    ACTIONS(1325), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19904] = 2,
    ACTIONS(1327), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19912] = 2,
    ACTIONS(1329), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19920] = 2,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19928] = 2,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19936] = 2,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19944] = 2,
    ACTIONS(952), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19952] = 2,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19960] = 2,
    ACTIONS(1333), 1,
      aux_sym_double_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19968] = 2,
    ACTIONS(1335), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19976] = 2,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19984] = 2,
    ACTIONS(1339), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19992] = 2,
    ACTIONS(1303), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20000] = 2,
    ACTIONS(1307), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20008] = 2,
    ACTIONS(1311), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20016] = 2,
    ACTIONS(1341), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20024] = 2,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20032] = 2,
    ACTIONS(1343), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20040] = 2,
    ACTIONS(1345), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20048] = 2,
    ACTIONS(1347), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20056] = 2,
    ACTIONS(1349), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20064] = 2,
    ACTIONS(1351), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20072] = 2,
    ACTIONS(1353), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20080] = 2,
    ACTIONS(1265), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20088] = 2,
    ACTIONS(1355), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20096] = 2,
    ACTIONS(1355), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20104] = 2,
    ACTIONS(1357), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20112] = 2,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20120] = 2,
    ACTIONS(1361), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20128] = 2,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20136] = 2,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20144] = 2,
    ACTIONS(1367), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20152] = 2,
    ACTIONS(1369), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20160] = 2,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20168] = 2,
    ACTIONS(1373), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20176] = 2,
    ACTIONS(1026), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20184] = 2,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20192] = 2,
    ACTIONS(1377), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20200] = 2,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20208] = 2,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20216] = 2,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20224] = 2,
    ACTIONS(1385), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20232] = 2,
    ACTIONS(1387), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20240] = 2,
    ACTIONS(1389), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20248] = 2,
    ACTIONS(1391), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20256] = 2,
    ACTIONS(1393), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20264] = 2,
    ACTIONS(1395), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20272] = 2,
    ACTIONS(1397), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20280] = 2,
    ACTIONS(1399), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20288] = 2,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20296] = 2,
    ACTIONS(1403), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20304] = 2,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20312] = 2,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20320] = 2,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20328] = 2,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20336] = 2,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20344] = 2,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20352] = 2,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20360] = 2,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20368] = 2,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20376] = 2,
    ACTIONS(1423), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20384] = 2,
    ACTIONS(1425), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20392] = 2,
    ACTIONS(1427), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20400] = 2,
    ACTIONS(1429), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20408] = 2,
    ACTIONS(1431), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20416] = 2,
    ACTIONS(1433), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20424] = 2,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20432] = 2,
    ACTIONS(1437), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20440] = 2,
    ACTIONS(1439), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20448] = 2,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20456] = 2,
    ACTIONS(1443), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20464] = 2,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20472] = 2,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20480] = 2,
    ACTIONS(1449), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20488] = 2,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20496] = 2,
    ACTIONS(1455), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1453), 2,
      sym_comment,
      sym_marginalia,
  [20504] = 2,
    ACTIONS(1457), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20512] = 2,
    ACTIONS(1459), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20520] = 2,
    ACTIONS(1461), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20528] = 2,
    ACTIONS(1463), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20536] = 2,
    ACTIONS(1465), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20544] = 2,
    ACTIONS(1467), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20552] = 2,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20560] = 2,
    ACTIONS(1471), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20568] = 2,
    ACTIONS(1473), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20576] = 2,
    ACTIONS(1475), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20584] = 2,
    ACTIONS(1477), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20592] = 2,
    ACTIONS(1477), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20600] = 2,
    ACTIONS(1479), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20608] = 2,
    ACTIONS(1481), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20616] = 2,
    ACTIONS(1483), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20624] = 2,
    ACTIONS(1485), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20632] = 2,
    ACTIONS(1487), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20640] = 2,
    ACTIONS(1489), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20648] = 2,
    ACTIONS(1491), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20656] = 2,
    ACTIONS(1493), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20664] = 2,
    ACTIONS(1028), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20672] = 2,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20680] = 2,
    ACTIONS(1497), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20688] = 2,
    ACTIONS(1499), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20696] = 2,
    ACTIONS(930), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20704] = 2,
    ACTIONS(1501), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20712] = 2,
    ACTIONS(1503), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20720] = 2,
    ACTIONS(1174), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20728] = 2,
    ACTIONS(1505), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20736] = 2,
    ACTIONS(1507), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20744] = 2,
    ACTIONS(1509), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20752] = 2,
    ACTIONS(1511), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20760] = 2,
    ACTIONS(1513), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20768] = 2,
    ACTIONS(1515), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20776] = 2,
    ACTIONS(1517), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20784] = 2,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20792] = 2,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20800] = 2,
    ACTIONS(1523), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20808] = 2,
    ACTIONS(1525), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20816] = 2,
    ACTIONS(1527), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20824] = 2,
    ACTIONS(1529), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20832] = 2,
    ACTIONS(1531), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20840] = 2,
    ACTIONS(1533), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20848] = 2,
    ACTIONS(1535), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20856] = 2,
    ACTIONS(1537), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20864] = 2,
    ACTIONS(1539), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20872] = 2,
    ACTIONS(1541), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20880] = 2,
    ACTIONS(1543), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20888] = 2,
    ACTIONS(1545), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1453), 2,
      sym_comment,
      sym_marginalia,
  [20896] = 2,
    ACTIONS(1547), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1453), 2,
      sym_comment,
      sym_marginalia,
  [20904] = 2,
    ACTIONS(1549), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20912] = 2,
    ACTIONS(1551), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20920] = 2,
    ACTIONS(1180), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20928] = 2,
    ACTIONS(837), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20936] = 2,
    ACTIONS(1553), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20944] = 2,
    ACTIONS(1555), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20952] = 2,
    ACTIONS(1557), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20960] = 2,
    ACTIONS(1559), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20968] = 2,
    ACTIONS(1561), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20976] = 2,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20984] = 2,
    ACTIONS(1565), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20992] = 2,
    ACTIONS(1567), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21000] = 2,
    ACTIONS(1569), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21008] = 2,
    ACTIONS(1571), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21016] = 2,
    ACTIONS(1229), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21024] = 2,
    ACTIONS(1573), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1453), 2,
      sym_comment,
      sym_marginalia,
  [21032] = 2,
    ACTIONS(1575), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1453), 2,
      sym_comment,
      sym_marginalia,
  [21040] = 2,
    ACTIONS(1577), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21048] = 2,
    ACTIONS(1579), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21056] = 2,
    ACTIONS(1581), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21064] = 2,
    ACTIONS(1583), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21072] = 2,
    ACTIONS(1585), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21080] = 2,
    ACTIONS(1557), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21088] = 2,
    ACTIONS(1587), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21096] = 2,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21104] = 2,
    ACTIONS(1591), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21112] = 2,
    ACTIONS(1593), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21120] = 2,
    ACTIONS(1595), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1453), 2,
      sym_comment,
      sym_marginalia,
  [21128] = 2,
    ACTIONS(1597), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21136] = 2,
    ACTIONS(1599), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21144] = 2,
    ACTIONS(1601), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21152] = 2,
    ACTIONS(1603), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21160] = 2,
    ACTIONS(1605), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21168] = 2,
    ACTIONS(1607), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21176] = 2,
    ACTIONS(1609), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21184] = 2,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21192] = 2,
    ACTIONS(1611), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21200] = 2,
    ACTIONS(1613), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21208] = 2,
    ACTIONS(1615), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21216] = 2,
    ACTIONS(1617), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21224] = 2,
    ACTIONS(1619), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21232] = 2,
    ACTIONS(1621), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21240] = 2,
    ACTIONS(1623), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21248] = 2,
    ACTIONS(1625), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21256] = 2,
    ACTIONS(1627), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21264] = 2,
    ACTIONS(1629), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21272] = 2,
    ACTIONS(1631), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21280] = 2,
    ACTIONS(1633), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21288] = 2,
    ACTIONS(1635), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21296] = 2,
    ACTIONS(1637), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21304] = 2,
    ACTIONS(1639), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21312] = 2,
    ACTIONS(1641), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21320] = 2,
    ACTIONS(1643), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21328] = 2,
    ACTIONS(1645), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21336] = 2,
    ACTIONS(1647), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21344] = 2,
    ACTIONS(1649), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21352] = 2,
    ACTIONS(1651), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21360] = 2,
    ACTIONS(1653), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21368] = 2,
    ACTIONS(1655), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21376] = 2,
    ACTIONS(1657), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21384] = 2,
    ACTIONS(1659), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21392] = 2,
    ACTIONS(1661), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21400] = 2,
    ACTIONS(972), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21408] = 2,
    ACTIONS(1663), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21416] = 2,
    ACTIONS(970), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21424] = 2,
    ACTIONS(1665), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21432] = 2,
    ACTIONS(1667), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21440] = 2,
    ACTIONS(1669), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21448] = 2,
    ACTIONS(1671), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21456] = 2,
    ACTIONS(1673), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21464] = 2,
    ACTIONS(1675), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21472] = 2,
    ACTIONS(1677), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21480] = 2,
    ACTIONS(1679), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21488] = 2,
    ACTIONS(1681), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21496] = 2,
    ACTIONS(1683), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21504] = 2,
    ACTIONS(1685), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21512] = 2,
    ACTIONS(1687), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21520] = 2,
    ACTIONS(1689), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21528] = 2,
    ACTIONS(1691), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21536] = 2,
    ACTIONS(1693), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21544] = 2,
    ACTIONS(1695), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21552] = 2,
    ACTIONS(1697), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21560] = 2,
    ACTIONS(1699), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21568] = 2,
    ACTIONS(1701), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21576] = 2,
    ACTIONS(1199), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21584] = 2,
    ACTIONS(1703), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 372,
  [SMALL_STATE(8)] = 421,
  [SMALL_STATE(9)] = 470,
  [SMALL_STATE(10)] = 519,
  [SMALL_STATE(11)] = 568,
  [SMALL_STATE(12)] = 614,
  [SMALL_STATE(13)] = 652,
  [SMALL_STATE(14)] = 690,
  [SMALL_STATE(15)] = 736,
  [SMALL_STATE(16)] = 774,
  [SMALL_STATE(17)] = 812,
  [SMALL_STATE(18)] = 889,
  [SMALL_STATE(19)] = 966,
  [SMALL_STATE(20)] = 1043,
  [SMALL_STATE(21)] = 1120,
  [SMALL_STATE(22)] = 1197,
  [SMALL_STATE(23)] = 1271,
  [SMALL_STATE(24)] = 1345,
  [SMALL_STATE(25)] = 1419,
  [SMALL_STATE(26)] = 1493,
  [SMALL_STATE(27)] = 1567,
  [SMALL_STATE(28)] = 1641,
  [SMALL_STATE(29)] = 1715,
  [SMALL_STATE(30)] = 1789,
  [SMALL_STATE(31)] = 1863,
  [SMALL_STATE(32)] = 1937,
  [SMALL_STATE(33)] = 1972,
  [SMALL_STATE(34)] = 2007,
  [SMALL_STATE(35)] = 2044,
  [SMALL_STATE(36)] = 2115,
  [SMALL_STATE(37)] = 2150,
  [SMALL_STATE(38)] = 2187,
  [SMALL_STATE(39)] = 2224,
  [SMALL_STATE(40)] = 2295,
  [SMALL_STATE(41)] = 2330,
  [SMALL_STATE(42)] = 2365,
  [SMALL_STATE(43)] = 2400,
  [SMALL_STATE(44)] = 2437,
  [SMALL_STATE(45)] = 2508,
  [SMALL_STATE(46)] = 2579,
  [SMALL_STATE(47)] = 2614,
  [SMALL_STATE(48)] = 2649,
  [SMALL_STATE(49)] = 2720,
  [SMALL_STATE(50)] = 2755,
  [SMALL_STATE(51)] = 2826,
  [SMALL_STATE(52)] = 2897,
  [SMALL_STATE(53)] = 2968,
  [SMALL_STATE(54)] = 3039,
  [SMALL_STATE(55)] = 3074,
  [SMALL_STATE(56)] = 3109,
  [SMALL_STATE(57)] = 3144,
  [SMALL_STATE(58)] = 3215,
  [SMALL_STATE(59)] = 3286,
  [SMALL_STATE(60)] = 3321,
  [SMALL_STATE(61)] = 3356,
  [SMALL_STATE(62)] = 3391,
  [SMALL_STATE(63)] = 3427,
  [SMALL_STATE(64)] = 3471,
  [SMALL_STATE(65)] = 3505,
  [SMALL_STATE(66)] = 3545,
  [SMALL_STATE(67)] = 3589,
  [SMALL_STATE(68)] = 3635,
  [SMALL_STATE(69)] = 3679,
  [SMALL_STATE(70)] = 3715,
  [SMALL_STATE(71)] = 3749,
  [SMALL_STATE(72)] = 3799,
  [SMALL_STATE(73)] = 3839,
  [SMALL_STATE(74)] = 3883,
  [SMALL_STATE(75)] = 3927,
  [SMALL_STATE(76)] = 3971,
  [SMALL_STATE(77)] = 4015,
  [SMALL_STATE(78)] = 4059,
  [SMALL_STATE(79)] = 4109,
  [SMALL_STATE(80)] = 4155,
  [SMALL_STATE(81)] = 4188,
  [SMALL_STATE(82)] = 4221,
  [SMALL_STATE(83)] = 4262,
  [SMALL_STATE(84)] = 4295,
  [SMALL_STATE(85)] = 4328,
  [SMALL_STATE(86)] = 4361,
  [SMALL_STATE(87)] = 4430,
  [SMALL_STATE(88)] = 4499,
  [SMALL_STATE(89)] = 4532,
  [SMALL_STATE(90)] = 4565,
  [SMALL_STATE(91)] = 4608,
  [SMALL_STATE(92)] = 4641,
  [SMALL_STATE(93)] = 4674,
  [SMALL_STATE(94)] = 4743,
  [SMALL_STATE(95)] = 4784,
  [SMALL_STATE(96)] = 4817,
  [SMALL_STATE(97)] = 4860,
  [SMALL_STATE(98)] = 4903,
  [SMALL_STATE(99)] = 4972,
  [SMALL_STATE(100)] = 5005,
  [SMALL_STATE(101)] = 5048,
  [SMALL_STATE(102)] = 5081,
  [SMALL_STATE(103)] = 5122,
  [SMALL_STATE(104)] = 5188,
  [SMALL_STATE(105)] = 5220,
  [SMALL_STATE(106)] = 5252,
  [SMALL_STATE(107)] = 5284,
  [SMALL_STATE(108)] = 5324,
  [SMALL_STATE(109)] = 5356,
  [SMALL_STATE(110)] = 5388,
  [SMALL_STATE(111)] = 5428,
  [SMALL_STATE(112)] = 5460,
  [SMALL_STATE(113)] = 5492,
  [SMALL_STATE(114)] = 5558,
  [SMALL_STATE(115)] = 5600,
  [SMALL_STATE(116)] = 5642,
  [SMALL_STATE(117)] = 5674,
  [SMALL_STATE(118)] = 5716,
  [SMALL_STATE(119)] = 5748,
  [SMALL_STATE(120)] = 5780,
  [SMALL_STATE(121)] = 5812,
  [SMALL_STATE(122)] = 5844,
  [SMALL_STATE(123)] = 5876,
  [SMALL_STATE(124)] = 5908,
  [SMALL_STATE(125)] = 5940,
  [SMALL_STATE(126)] = 6006,
  [SMALL_STATE(127)] = 6048,
  [SMALL_STATE(128)] = 6080,
  [SMALL_STATE(129)] = 6112,
  [SMALL_STATE(130)] = 6144,
  [SMALL_STATE(131)] = 6176,
  [SMALL_STATE(132)] = 6208,
  [SMALL_STATE(133)] = 6240,
  [SMALL_STATE(134)] = 6271,
  [SMALL_STATE(135)] = 6310,
  [SMALL_STATE(136)] = 6341,
  [SMALL_STATE(137)] = 6380,
  [SMALL_STATE(138)] = 6411,
  [SMALL_STATE(139)] = 6442,
  [SMALL_STATE(140)] = 6478,
  [SMALL_STATE(141)] = 6525,
  [SMALL_STATE(142)] = 6564,
  [SMALL_STATE(143)] = 6595,
  [SMALL_STATE(144)] = 6626,
  [SMALL_STATE(145)] = 6661,
  [SMALL_STATE(146)] = 6702,
  [SMALL_STATE(147)] = 6747,
  [SMALL_STATE(148)] = 6778,
  [SMALL_STATE(149)] = 6813,
  [SMALL_STATE(150)] = 6844,
  [SMALL_STATE(151)] = 6885,
  [SMALL_STATE(152)] = 6930,
  [SMALL_STATE(153)] = 6969,
  [SMALL_STATE(154)] = 7016,
  [SMALL_STATE(155)] = 7051,
  [SMALL_STATE(156)] = 7082,
  [SMALL_STATE(157)] = 7123,
  [SMALL_STATE(158)] = 7168,
  [SMALL_STATE(159)] = 7207,
  [SMALL_STATE(160)] = 7261,
  [SMALL_STATE(161)] = 7301,
  [SMALL_STATE(162)] = 7335,
  [SMALL_STATE(163)] = 7363,
  [SMALL_STATE(164)] = 7407,
  [SMALL_STATE(165)] = 7435,
  [SMALL_STATE(166)] = 7473,
  [SMALL_STATE(167)] = 7501,
  [SMALL_STATE(168)] = 7535,
  [SMALL_STATE(169)] = 7565,
  [SMALL_STATE(170)] = 7593,
  [SMALL_STATE(171)] = 7621,
  [SMALL_STATE(172)] = 7675,
  [SMALL_STATE(173)] = 7709,
  [SMALL_STATE(174)] = 7739,
  [SMALL_STATE(175)] = 7779,
  [SMALL_STATE(176)] = 7817,
  [SMALL_STATE(177)] = 7861,
  [SMALL_STATE(178)] = 7890,
  [SMALL_STATE(179)] = 7935,
  [SMALL_STATE(180)] = 7968,
  [SMALL_STATE(181)] = 8007,
  [SMALL_STATE(182)] = 8036,
  [SMALL_STATE(183)] = 8069,
  [SMALL_STATE(184)] = 8106,
  [SMALL_STATE(185)] = 8139,
  [SMALL_STATE(186)] = 8168,
  [SMALL_STATE(187)] = 8207,
  [SMALL_STATE(188)] = 8248,
  [SMALL_STATE(189)] = 8289,
  [SMALL_STATE(190)] = 8326,
  [SMALL_STATE(191)] = 8354,
  [SMALL_STATE(192)] = 8382,
  [SMALL_STATE(193)] = 8418,
  [SMALL_STATE(194)] = 8454,
  [SMALL_STATE(195)] = 8496,
  [SMALL_STATE(196)] = 8543,
  [SMALL_STATE(197)] = 8568,
  [SMALL_STATE(198)] = 8615,
  [SMALL_STATE(199)] = 8662,
  [SMALL_STATE(200)] = 8703,
  [SMALL_STATE(201)] = 8736,
  [SMALL_STATE(202)] = 8761,
  [SMALL_STATE(203)] = 8808,
  [SMALL_STATE(204)] = 8833,
  [SMALL_STATE(205)] = 8880,
  [SMALL_STATE(206)] = 8913,
  [SMALL_STATE(207)] = 8938,
  [SMALL_STATE(208)] = 8985,
  [SMALL_STATE(209)] = 9029,
  [SMALL_STATE(210)] = 9071,
  [SMALL_STATE(211)] = 9111,
  [SMALL_STATE(212)] = 9141,
  [SMALL_STATE(213)] = 9179,
  [SMALL_STATE(214)] = 9217,
  [SMALL_STATE(215)] = 9257,
  [SMALL_STATE(216)] = 9301,
  [SMALL_STATE(217)] = 9339,
  [SMALL_STATE(218)] = 9383,
  [SMALL_STATE(219)] = 9421,
  [SMALL_STATE(220)] = 9451,
  [SMALL_STATE(221)] = 9491,
  [SMALL_STATE(222)] = 9533,
  [SMALL_STATE(223)] = 9573,
  [SMALL_STATE(224)] = 9611,
  [SMALL_STATE(225)] = 9649,
  [SMALL_STATE(226)] = 9679,
  [SMALL_STATE(227)] = 9709,
  [SMALL_STATE(228)] = 9747,
  [SMALL_STATE(229)] = 9791,
  [SMALL_STATE(230)] = 9835,
  [SMALL_STATE(231)] = 9872,
  [SMALL_STATE(232)] = 9909,
  [SMALL_STATE(233)] = 9948,
  [SMALL_STATE(234)] = 9985,
  [SMALL_STATE(235)] = 10022,
  [SMALL_STATE(236)] = 10059,
  [SMALL_STATE(237)] = 10096,
  [SMALL_STATE(238)] = 10133,
  [SMALL_STATE(239)] = 10154,
  [SMALL_STATE(240)] = 10191,
  [SMALL_STATE(241)] = 10228,
  [SMALL_STATE(242)] = 10265,
  [SMALL_STATE(243)] = 10304,
  [SMALL_STATE(244)] = 10343,
  [SMALL_STATE(245)] = 10382,
  [SMALL_STATE(246)] = 10421,
  [SMALL_STATE(247)] = 10458,
  [SMALL_STATE(248)] = 10497,
  [SMALL_STATE(249)] = 10518,
  [SMALL_STATE(250)] = 10555,
  [SMALL_STATE(251)] = 10592,
  [SMALL_STATE(252)] = 10629,
  [SMALL_STATE(253)] = 10666,
  [SMALL_STATE(254)] = 10703,
  [SMALL_STATE(255)] = 10742,
  [SMALL_STATE(256)] = 10763,
  [SMALL_STATE(257)] = 10800,
  [SMALL_STATE(258)] = 10837,
  [SMALL_STATE(259)] = 10874,
  [SMALL_STATE(260)] = 10911,
  [SMALL_STATE(261)] = 10948,
  [SMALL_STATE(262)] = 10985,
  [SMALL_STATE(263)] = 11022,
  [SMALL_STATE(264)] = 11061,
  [SMALL_STATE(265)] = 11100,
  [SMALL_STATE(266)] = 11137,
  [SMALL_STATE(267)] = 11174,
  [SMALL_STATE(268)] = 11211,
  [SMALL_STATE(269)] = 11248,
  [SMALL_STATE(270)] = 11285,
  [SMALL_STATE(271)] = 11324,
  [SMALL_STATE(272)] = 11361,
  [SMALL_STATE(273)] = 11398,
  [SMALL_STATE(274)] = 11435,
  [SMALL_STATE(275)] = 11472,
  [SMALL_STATE(276)] = 11511,
  [SMALL_STATE(277)] = 11548,
  [SMALL_STATE(278)] = 11585,
  [SMALL_STATE(279)] = 11622,
  [SMALL_STATE(280)] = 11659,
  [SMALL_STATE(281)] = 11696,
  [SMALL_STATE(282)] = 11733,
  [SMALL_STATE(283)] = 11770,
  [SMALL_STATE(284)] = 11807,
  [SMALL_STATE(285)] = 11844,
  [SMALL_STATE(286)] = 11881,
  [SMALL_STATE(287)] = 11918,
  [SMALL_STATE(288)] = 11955,
  [SMALL_STATE(289)] = 11992,
  [SMALL_STATE(290)] = 12013,
  [SMALL_STATE(291)] = 12050,
  [SMALL_STATE(292)] = 12087,
  [SMALL_STATE(293)] = 12124,
  [SMALL_STATE(294)] = 12161,
  [SMALL_STATE(295)] = 12198,
  [SMALL_STATE(296)] = 12235,
  [SMALL_STATE(297)] = 12272,
  [SMALL_STATE(298)] = 12309,
  [SMALL_STATE(299)] = 12346,
  [SMALL_STATE(300)] = 12385,
  [SMALL_STATE(301)] = 12422,
  [SMALL_STATE(302)] = 12458,
  [SMALL_STATE(303)] = 12492,
  [SMALL_STATE(304)] = 12512,
  [SMALL_STATE(305)] = 12532,
  [SMALL_STATE(306)] = 12554,
  [SMALL_STATE(307)] = 12588,
  [SMALL_STATE(308)] = 12607,
  [SMALL_STATE(309)] = 12648,
  [SMALL_STATE(310)] = 12675,
  [SMALL_STATE(311)] = 12702,
  [SMALL_STATE(312)] = 12732,
  [SMALL_STATE(313)] = 12752,
  [SMALL_STATE(314)] = 12782,
  [SMALL_STATE(315)] = 12812,
  [SMALL_STATE(316)] = 12842,
  [SMALL_STATE(317)] = 12864,
  [SMALL_STATE(318)] = 12891,
  [SMALL_STATE(319)] = 12918,
  [SMALL_STATE(320)] = 12937,
  [SMALL_STATE(321)] = 12964,
  [SMALL_STATE(322)] = 12983,
  [SMALL_STATE(323)] = 13010,
  [SMALL_STATE(324)] = 13029,
  [SMALL_STATE(325)] = 13048,
  [SMALL_STATE(326)] = 13067,
  [SMALL_STATE(327)] = 13086,
  [SMALL_STATE(328)] = 13113,
  [SMALL_STATE(329)] = 13130,
  [SMALL_STATE(330)] = 13157,
  [SMALL_STATE(331)] = 13184,
  [SMALL_STATE(332)] = 13203,
  [SMALL_STATE(333)] = 13220,
  [SMALL_STATE(334)] = 13239,
  [SMALL_STATE(335)] = 13266,
  [SMALL_STATE(336)] = 13293,
  [SMALL_STATE(337)] = 13312,
  [SMALL_STATE(338)] = 13331,
  [SMALL_STATE(339)] = 13348,
  [SMALL_STATE(340)] = 13375,
  [SMALL_STATE(341)] = 13394,
  [SMALL_STATE(342)] = 13421,
  [SMALL_STATE(343)] = 13448,
  [SMALL_STATE(344)] = 13464,
  [SMALL_STATE(345)] = 13490,
  [SMALL_STATE(346)] = 13506,
  [SMALL_STATE(347)] = 13522,
  [SMALL_STATE(348)] = 13538,
  [SMALL_STATE(349)] = 13554,
  [SMALL_STATE(350)] = 13570,
  [SMALL_STATE(351)] = 13586,
  [SMALL_STATE(352)] = 13602,
  [SMALL_STATE(353)] = 13630,
  [SMALL_STATE(354)] = 13658,
  [SMALL_STATE(355)] = 13686,
  [SMALL_STATE(356)] = 13702,
  [SMALL_STATE(357)] = 13718,
  [SMALL_STATE(358)] = 13734,
  [SMALL_STATE(359)] = 13762,
  [SMALL_STATE(360)] = 13778,
  [SMALL_STATE(361)] = 13806,
  [SMALL_STATE(362)] = 13821,
  [SMALL_STATE(363)] = 13836,
  [SMALL_STATE(364)] = 13861,
  [SMALL_STATE(365)] = 13886,
  [SMALL_STATE(366)] = 13911,
  [SMALL_STATE(367)] = 13936,
  [SMALL_STATE(368)] = 13953,
  [SMALL_STATE(369)] = 13976,
  [SMALL_STATE(370)] = 14003,
  [SMALL_STATE(371)] = 14020,
  [SMALL_STATE(372)] = 14035,
  [SMALL_STATE(373)] = 14062,
  [SMALL_STATE(374)] = 14079,
  [SMALL_STATE(375)] = 14108,
  [SMALL_STATE(376)] = 14123,
  [SMALL_STATE(377)] = 14150,
  [SMALL_STATE(378)] = 14165,
  [SMALL_STATE(379)] = 14190,
  [SMALL_STATE(380)] = 14205,
  [SMALL_STATE(381)] = 14230,
  [SMALL_STATE(382)] = 14253,
  [SMALL_STATE(383)] = 14268,
  [SMALL_STATE(384)] = 14293,
  [SMALL_STATE(385)] = 14318,
  [SMALL_STATE(386)] = 14333,
  [SMALL_STATE(387)] = 14360,
  [SMALL_STATE(388)] = 14377,
  [SMALL_STATE(389)] = 14402,
  [SMALL_STATE(390)] = 14417,
  [SMALL_STATE(391)] = 14432,
  [SMALL_STATE(392)] = 14447,
  [SMALL_STATE(393)] = 14476,
  [SMALL_STATE(394)] = 14501,
  [SMALL_STATE(395)] = 14516,
  [SMALL_STATE(396)] = 14531,
  [SMALL_STATE(397)] = 14556,
  [SMALL_STATE(398)] = 14583,
  [SMALL_STATE(399)] = 14610,
  [SMALL_STATE(400)] = 14635,
  [SMALL_STATE(401)] = 14650,
  [SMALL_STATE(402)] = 14677,
  [SMALL_STATE(403)] = 14702,
  [SMALL_STATE(404)] = 14729,
  [SMALL_STATE(405)] = 14754,
  [SMALL_STATE(406)] = 14781,
  [SMALL_STATE(407)] = 14808,
  [SMALL_STATE(408)] = 14830,
  [SMALL_STATE(409)] = 14848,
  [SMALL_STATE(410)] = 14866,
  [SMALL_STATE(411)] = 14890,
  [SMALL_STATE(412)] = 14914,
  [SMALL_STATE(413)] = 14930,
  [SMALL_STATE(414)] = 14956,
  [SMALL_STATE(415)] = 14970,
  [SMALL_STATE(416)] = 14988,
  [SMALL_STATE(417)] = 15012,
  [SMALL_STATE(418)] = 15032,
  [SMALL_STATE(419)] = 15054,
  [SMALL_STATE(420)] = 15070,
  [SMALL_STATE(421)] = 15094,
  [SMALL_STATE(422)] = 15112,
  [SMALL_STATE(423)] = 15138,
  [SMALL_STATE(424)] = 15156,
  [SMALL_STATE(425)] = 15176,
  [SMALL_STATE(426)] = 15194,
  [SMALL_STATE(427)] = 15212,
  [SMALL_STATE(428)] = 15238,
  [SMALL_STATE(429)] = 15264,
  [SMALL_STATE(430)] = 15286,
  [SMALL_STATE(431)] = 15300,
  [SMALL_STATE(432)] = 15326,
  [SMALL_STATE(433)] = 15347,
  [SMALL_STATE(434)] = 15366,
  [SMALL_STATE(435)] = 15381,
  [SMALL_STATE(436)] = 15404,
  [SMALL_STATE(437)] = 15421,
  [SMALL_STATE(438)] = 15444,
  [SMALL_STATE(439)] = 15465,
  [SMALL_STATE(440)] = 15488,
  [SMALL_STATE(441)] = 15503,
  [SMALL_STATE(442)] = 15524,
  [SMALL_STATE(443)] = 15545,
  [SMALL_STATE(444)] = 15568,
  [SMALL_STATE(445)] = 15591,
  [SMALL_STATE(446)] = 15610,
  [SMALL_STATE(447)] = 15627,
  [SMALL_STATE(448)] = 15644,
  [SMALL_STATE(449)] = 15667,
  [SMALL_STATE(450)] = 15688,
  [SMALL_STATE(451)] = 15709,
  [SMALL_STATE(452)] = 15730,
  [SMALL_STATE(453)] = 15751,
  [SMALL_STATE(454)] = 15772,
  [SMALL_STATE(455)] = 15789,
  [SMALL_STATE(456)] = 15812,
  [SMALL_STATE(457)] = 15825,
  [SMALL_STATE(458)] = 15848,
  [SMALL_STATE(459)] = 15871,
  [SMALL_STATE(460)] = 15888,
  [SMALL_STATE(461)] = 15909,
  [SMALL_STATE(462)] = 15932,
  [SMALL_STATE(463)] = 15953,
  [SMALL_STATE(464)] = 15966,
  [SMALL_STATE(465)] = 15985,
  [SMALL_STATE(466)] = 16008,
  [SMALL_STATE(467)] = 16029,
  [SMALL_STATE(468)] = 16046,
  [SMALL_STATE(469)] = 16067,
  [SMALL_STATE(470)] = 16084,
  [SMALL_STATE(471)] = 16105,
  [SMALL_STATE(472)] = 16125,
  [SMALL_STATE(473)] = 16145,
  [SMALL_STATE(474)] = 16161,
  [SMALL_STATE(475)] = 16181,
  [SMALL_STATE(476)] = 16197,
  [SMALL_STATE(477)] = 16213,
  [SMALL_STATE(478)] = 16233,
  [SMALL_STATE(479)] = 16245,
  [SMALL_STATE(480)] = 16257,
  [SMALL_STATE(481)] = 16277,
  [SMALL_STATE(482)] = 16293,
  [SMALL_STATE(483)] = 16313,
  [SMALL_STATE(484)] = 16329,
  [SMALL_STATE(485)] = 16349,
  [SMALL_STATE(486)] = 16365,
  [SMALL_STATE(487)] = 16381,
  [SMALL_STATE(488)] = 16397,
  [SMALL_STATE(489)] = 16413,
  [SMALL_STATE(490)] = 16429,
  [SMALL_STATE(491)] = 16449,
  [SMALL_STATE(492)] = 16465,
  [SMALL_STATE(493)] = 16481,
  [SMALL_STATE(494)] = 16501,
  [SMALL_STATE(495)] = 16517,
  [SMALL_STATE(496)] = 16532,
  [SMALL_STATE(497)] = 16545,
  [SMALL_STATE(498)] = 16562,
  [SMALL_STATE(499)] = 16579,
  [SMALL_STATE(500)] = 16596,
  [SMALL_STATE(501)] = 16613,
  [SMALL_STATE(502)] = 16628,
  [SMALL_STATE(503)] = 16643,
  [SMALL_STATE(504)] = 16658,
  [SMALL_STATE(505)] = 16669,
  [SMALL_STATE(506)] = 16680,
  [SMALL_STATE(507)] = 16697,
  [SMALL_STATE(508)] = 16714,
  [SMALL_STATE(509)] = 16729,
  [SMALL_STATE(510)] = 16740,
  [SMALL_STATE(511)] = 16755,
  [SMALL_STATE(512)] = 16772,
  [SMALL_STATE(513)] = 16789,
  [SMALL_STATE(514)] = 16806,
  [SMALL_STATE(515)] = 16823,
  [SMALL_STATE(516)] = 16840,
  [SMALL_STATE(517)] = 16857,
  [SMALL_STATE(518)] = 16874,
  [SMALL_STATE(519)] = 16891,
  [SMALL_STATE(520)] = 16908,
  [SMALL_STATE(521)] = 16925,
  [SMALL_STATE(522)] = 16942,
  [SMALL_STATE(523)] = 16959,
  [SMALL_STATE(524)] = 16970,
  [SMALL_STATE(525)] = 16985,
  [SMALL_STATE(526)] = 17002,
  [SMALL_STATE(527)] = 17019,
  [SMALL_STATE(528)] = 17032,
  [SMALL_STATE(529)] = 17049,
  [SMALL_STATE(530)] = 17066,
  [SMALL_STATE(531)] = 17083,
  [SMALL_STATE(532)] = 17100,
  [SMALL_STATE(533)] = 17115,
  [SMALL_STATE(534)] = 17126,
  [SMALL_STATE(535)] = 17139,
  [SMALL_STATE(536)] = 17152,
  [SMALL_STATE(537)] = 17169,
  [SMALL_STATE(538)] = 17182,
  [SMALL_STATE(539)] = 17199,
  [SMALL_STATE(540)] = 17216,
  [SMALL_STATE(541)] = 17233,
  [SMALL_STATE(542)] = 17246,
  [SMALL_STATE(543)] = 17261,
  [SMALL_STATE(544)] = 17276,
  [SMALL_STATE(545)] = 17293,
  [SMALL_STATE(546)] = 17304,
  [SMALL_STATE(547)] = 17321,
  [SMALL_STATE(548)] = 17334,
  [SMALL_STATE(549)] = 17348,
  [SMALL_STATE(550)] = 17362,
  [SMALL_STATE(551)] = 17376,
  [SMALL_STATE(552)] = 17386,
  [SMALL_STATE(553)] = 17400,
  [SMALL_STATE(554)] = 17414,
  [SMALL_STATE(555)] = 17428,
  [SMALL_STATE(556)] = 17442,
  [SMALL_STATE(557)] = 17456,
  [SMALL_STATE(558)] = 17470,
  [SMALL_STATE(559)] = 17480,
  [SMALL_STATE(560)] = 17494,
  [SMALL_STATE(561)] = 17508,
  [SMALL_STATE(562)] = 17522,
  [SMALL_STATE(563)] = 17536,
  [SMALL_STATE(564)] = 17550,
  [SMALL_STATE(565)] = 17564,
  [SMALL_STATE(566)] = 17578,
  [SMALL_STATE(567)] = 17592,
  [SMALL_STATE(568)] = 17606,
  [SMALL_STATE(569)] = 17620,
  [SMALL_STATE(570)] = 17634,
  [SMALL_STATE(571)] = 17648,
  [SMALL_STATE(572)] = 17658,
  [SMALL_STATE(573)] = 17668,
  [SMALL_STATE(574)] = 17682,
  [SMALL_STATE(575)] = 17696,
  [SMALL_STATE(576)] = 17710,
  [SMALL_STATE(577)] = 17724,
  [SMALL_STATE(578)] = 17738,
  [SMALL_STATE(579)] = 17752,
  [SMALL_STATE(580)] = 17766,
  [SMALL_STATE(581)] = 17780,
  [SMALL_STATE(582)] = 17794,
  [SMALL_STATE(583)] = 17808,
  [SMALL_STATE(584)] = 17822,
  [SMALL_STATE(585)] = 17836,
  [SMALL_STATE(586)] = 17850,
  [SMALL_STATE(587)] = 17860,
  [SMALL_STATE(588)] = 17874,
  [SMALL_STATE(589)] = 17888,
  [SMALL_STATE(590)] = 17902,
  [SMALL_STATE(591)] = 17916,
  [SMALL_STATE(592)] = 17930,
  [SMALL_STATE(593)] = 17944,
  [SMALL_STATE(594)] = 17958,
  [SMALL_STATE(595)] = 17972,
  [SMALL_STATE(596)] = 17982,
  [SMALL_STATE(597)] = 17996,
  [SMALL_STATE(598)] = 18010,
  [SMALL_STATE(599)] = 18024,
  [SMALL_STATE(600)] = 18038,
  [SMALL_STATE(601)] = 18052,
  [SMALL_STATE(602)] = 18066,
  [SMALL_STATE(603)] = 18080,
  [SMALL_STATE(604)] = 18094,
  [SMALL_STATE(605)] = 18108,
  [SMALL_STATE(606)] = 18122,
  [SMALL_STATE(607)] = 18136,
  [SMALL_STATE(608)] = 18150,
  [SMALL_STATE(609)] = 18164,
  [SMALL_STATE(610)] = 18178,
  [SMALL_STATE(611)] = 18192,
  [SMALL_STATE(612)] = 18206,
  [SMALL_STATE(613)] = 18220,
  [SMALL_STATE(614)] = 18234,
  [SMALL_STATE(615)] = 18244,
  [SMALL_STATE(616)] = 18258,
  [SMALL_STATE(617)] = 18272,
  [SMALL_STATE(618)] = 18286,
  [SMALL_STATE(619)] = 18296,
  [SMALL_STATE(620)] = 18306,
  [SMALL_STATE(621)] = 18320,
  [SMALL_STATE(622)] = 18334,
  [SMALL_STATE(623)] = 18348,
  [SMALL_STATE(624)] = 18362,
  [SMALL_STATE(625)] = 18376,
  [SMALL_STATE(626)] = 18390,
  [SMALL_STATE(627)] = 18404,
  [SMALL_STATE(628)] = 18418,
  [SMALL_STATE(629)] = 18432,
  [SMALL_STATE(630)] = 18446,
  [SMALL_STATE(631)] = 18460,
  [SMALL_STATE(632)] = 18474,
  [SMALL_STATE(633)] = 18488,
  [SMALL_STATE(634)] = 18502,
  [SMALL_STATE(635)] = 18516,
  [SMALL_STATE(636)] = 18530,
  [SMALL_STATE(637)] = 18544,
  [SMALL_STATE(638)] = 18558,
  [SMALL_STATE(639)] = 18572,
  [SMALL_STATE(640)] = 18586,
  [SMALL_STATE(641)] = 18596,
  [SMALL_STATE(642)] = 18610,
  [SMALL_STATE(643)] = 18624,
  [SMALL_STATE(644)] = 18638,
  [SMALL_STATE(645)] = 18652,
  [SMALL_STATE(646)] = 18666,
  [SMALL_STATE(647)] = 18680,
  [SMALL_STATE(648)] = 18694,
  [SMALL_STATE(649)] = 18708,
  [SMALL_STATE(650)] = 18722,
  [SMALL_STATE(651)] = 18736,
  [SMALL_STATE(652)] = 18750,
  [SMALL_STATE(653)] = 18764,
  [SMALL_STATE(654)] = 18778,
  [SMALL_STATE(655)] = 18792,
  [SMALL_STATE(656)] = 18806,
  [SMALL_STATE(657)] = 18820,
  [SMALL_STATE(658)] = 18834,
  [SMALL_STATE(659)] = 18848,
  [SMALL_STATE(660)] = 18862,
  [SMALL_STATE(661)] = 18876,
  [SMALL_STATE(662)] = 18890,
  [SMALL_STATE(663)] = 18904,
  [SMALL_STATE(664)] = 18918,
  [SMALL_STATE(665)] = 18928,
  [SMALL_STATE(666)] = 18938,
  [SMALL_STATE(667)] = 18952,
  [SMALL_STATE(668)] = 18966,
  [SMALL_STATE(669)] = 18980,
  [SMALL_STATE(670)] = 18994,
  [SMALL_STATE(671)] = 19008,
  [SMALL_STATE(672)] = 19022,
  [SMALL_STATE(673)] = 19036,
  [SMALL_STATE(674)] = 19050,
  [SMALL_STATE(675)] = 19064,
  [SMALL_STATE(676)] = 19078,
  [SMALL_STATE(677)] = 19092,
  [SMALL_STATE(678)] = 19106,
  [SMALL_STATE(679)] = 19120,
  [SMALL_STATE(680)] = 19134,
  [SMALL_STATE(681)] = 19148,
  [SMALL_STATE(682)] = 19160,
  [SMALL_STATE(683)] = 19174,
  [SMALL_STATE(684)] = 19188,
  [SMALL_STATE(685)] = 19202,
  [SMALL_STATE(686)] = 19216,
  [SMALL_STATE(687)] = 19230,
  [SMALL_STATE(688)] = 19244,
  [SMALL_STATE(689)] = 19258,
  [SMALL_STATE(690)] = 19272,
  [SMALL_STATE(691)] = 19281,
  [SMALL_STATE(692)] = 19292,
  [SMALL_STATE(693)] = 19301,
  [SMALL_STATE(694)] = 19312,
  [SMALL_STATE(695)] = 19323,
  [SMALL_STATE(696)] = 19334,
  [SMALL_STATE(697)] = 19345,
  [SMALL_STATE(698)] = 19354,
  [SMALL_STATE(699)] = 19363,
  [SMALL_STATE(700)] = 19374,
  [SMALL_STATE(701)] = 19383,
  [SMALL_STATE(702)] = 19394,
  [SMALL_STATE(703)] = 19403,
  [SMALL_STATE(704)] = 19414,
  [SMALL_STATE(705)] = 19423,
  [SMALL_STATE(706)] = 19434,
  [SMALL_STATE(707)] = 19445,
  [SMALL_STATE(708)] = 19454,
  [SMALL_STATE(709)] = 19463,
  [SMALL_STATE(710)] = 19474,
  [SMALL_STATE(711)] = 19485,
  [SMALL_STATE(712)] = 19494,
  [SMALL_STATE(713)] = 19505,
  [SMALL_STATE(714)] = 19514,
  [SMALL_STATE(715)] = 19523,
  [SMALL_STATE(716)] = 19532,
  [SMALL_STATE(717)] = 19541,
  [SMALL_STATE(718)] = 19552,
  [SMALL_STATE(719)] = 19561,
  [SMALL_STATE(720)] = 19572,
  [SMALL_STATE(721)] = 19583,
  [SMALL_STATE(722)] = 19594,
  [SMALL_STATE(723)] = 19603,
  [SMALL_STATE(724)] = 19614,
  [SMALL_STATE(725)] = 19623,
  [SMALL_STATE(726)] = 19632,
  [SMALL_STATE(727)] = 19643,
  [SMALL_STATE(728)] = 19652,
  [SMALL_STATE(729)] = 19663,
  [SMALL_STATE(730)] = 19674,
  [SMALL_STATE(731)] = 19683,
  [SMALL_STATE(732)] = 19692,
  [SMALL_STATE(733)] = 19701,
  [SMALL_STATE(734)] = 19710,
  [SMALL_STATE(735)] = 19719,
  [SMALL_STATE(736)] = 19728,
  [SMALL_STATE(737)] = 19737,
  [SMALL_STATE(738)] = 19746,
  [SMALL_STATE(739)] = 19755,
  [SMALL_STATE(740)] = 19766,
  [SMALL_STATE(741)] = 19775,
  [SMALL_STATE(742)] = 19786,
  [SMALL_STATE(743)] = 19797,
  [SMALL_STATE(744)] = 19808,
  [SMALL_STATE(745)] = 19817,
  [SMALL_STATE(746)] = 19828,
  [SMALL_STATE(747)] = 19837,
  [SMALL_STATE(748)] = 19848,
  [SMALL_STATE(749)] = 19856,
  [SMALL_STATE(750)] = 19864,
  [SMALL_STATE(751)] = 19872,
  [SMALL_STATE(752)] = 19880,
  [SMALL_STATE(753)] = 19888,
  [SMALL_STATE(754)] = 19896,
  [SMALL_STATE(755)] = 19904,
  [SMALL_STATE(756)] = 19912,
  [SMALL_STATE(757)] = 19920,
  [SMALL_STATE(758)] = 19928,
  [SMALL_STATE(759)] = 19936,
  [SMALL_STATE(760)] = 19944,
  [SMALL_STATE(761)] = 19952,
  [SMALL_STATE(762)] = 19960,
  [SMALL_STATE(763)] = 19968,
  [SMALL_STATE(764)] = 19976,
  [SMALL_STATE(765)] = 19984,
  [SMALL_STATE(766)] = 19992,
  [SMALL_STATE(767)] = 20000,
  [SMALL_STATE(768)] = 20008,
  [SMALL_STATE(769)] = 20016,
  [SMALL_STATE(770)] = 20024,
  [SMALL_STATE(771)] = 20032,
  [SMALL_STATE(772)] = 20040,
  [SMALL_STATE(773)] = 20048,
  [SMALL_STATE(774)] = 20056,
  [SMALL_STATE(775)] = 20064,
  [SMALL_STATE(776)] = 20072,
  [SMALL_STATE(777)] = 20080,
  [SMALL_STATE(778)] = 20088,
  [SMALL_STATE(779)] = 20096,
  [SMALL_STATE(780)] = 20104,
  [SMALL_STATE(781)] = 20112,
  [SMALL_STATE(782)] = 20120,
  [SMALL_STATE(783)] = 20128,
  [SMALL_STATE(784)] = 20136,
  [SMALL_STATE(785)] = 20144,
  [SMALL_STATE(786)] = 20152,
  [SMALL_STATE(787)] = 20160,
  [SMALL_STATE(788)] = 20168,
  [SMALL_STATE(789)] = 20176,
  [SMALL_STATE(790)] = 20184,
  [SMALL_STATE(791)] = 20192,
  [SMALL_STATE(792)] = 20200,
  [SMALL_STATE(793)] = 20208,
  [SMALL_STATE(794)] = 20216,
  [SMALL_STATE(795)] = 20224,
  [SMALL_STATE(796)] = 20232,
  [SMALL_STATE(797)] = 20240,
  [SMALL_STATE(798)] = 20248,
  [SMALL_STATE(799)] = 20256,
  [SMALL_STATE(800)] = 20264,
  [SMALL_STATE(801)] = 20272,
  [SMALL_STATE(802)] = 20280,
  [SMALL_STATE(803)] = 20288,
  [SMALL_STATE(804)] = 20296,
  [SMALL_STATE(805)] = 20304,
  [SMALL_STATE(806)] = 20312,
  [SMALL_STATE(807)] = 20320,
  [SMALL_STATE(808)] = 20328,
  [SMALL_STATE(809)] = 20336,
  [SMALL_STATE(810)] = 20344,
  [SMALL_STATE(811)] = 20352,
  [SMALL_STATE(812)] = 20360,
  [SMALL_STATE(813)] = 20368,
  [SMALL_STATE(814)] = 20376,
  [SMALL_STATE(815)] = 20384,
  [SMALL_STATE(816)] = 20392,
  [SMALL_STATE(817)] = 20400,
  [SMALL_STATE(818)] = 20408,
  [SMALL_STATE(819)] = 20416,
  [SMALL_STATE(820)] = 20424,
  [SMALL_STATE(821)] = 20432,
  [SMALL_STATE(822)] = 20440,
  [SMALL_STATE(823)] = 20448,
  [SMALL_STATE(824)] = 20456,
  [SMALL_STATE(825)] = 20464,
  [SMALL_STATE(826)] = 20472,
  [SMALL_STATE(827)] = 20480,
  [SMALL_STATE(828)] = 20488,
  [SMALL_STATE(829)] = 20496,
  [SMALL_STATE(830)] = 20504,
  [SMALL_STATE(831)] = 20512,
  [SMALL_STATE(832)] = 20520,
  [SMALL_STATE(833)] = 20528,
  [SMALL_STATE(834)] = 20536,
  [SMALL_STATE(835)] = 20544,
  [SMALL_STATE(836)] = 20552,
  [SMALL_STATE(837)] = 20560,
  [SMALL_STATE(838)] = 20568,
  [SMALL_STATE(839)] = 20576,
  [SMALL_STATE(840)] = 20584,
  [SMALL_STATE(841)] = 20592,
  [SMALL_STATE(842)] = 20600,
  [SMALL_STATE(843)] = 20608,
  [SMALL_STATE(844)] = 20616,
  [SMALL_STATE(845)] = 20624,
  [SMALL_STATE(846)] = 20632,
  [SMALL_STATE(847)] = 20640,
  [SMALL_STATE(848)] = 20648,
  [SMALL_STATE(849)] = 20656,
  [SMALL_STATE(850)] = 20664,
  [SMALL_STATE(851)] = 20672,
  [SMALL_STATE(852)] = 20680,
  [SMALL_STATE(853)] = 20688,
  [SMALL_STATE(854)] = 20696,
  [SMALL_STATE(855)] = 20704,
  [SMALL_STATE(856)] = 20712,
  [SMALL_STATE(857)] = 20720,
  [SMALL_STATE(858)] = 20728,
  [SMALL_STATE(859)] = 20736,
  [SMALL_STATE(860)] = 20744,
  [SMALL_STATE(861)] = 20752,
  [SMALL_STATE(862)] = 20760,
  [SMALL_STATE(863)] = 20768,
  [SMALL_STATE(864)] = 20776,
  [SMALL_STATE(865)] = 20784,
  [SMALL_STATE(866)] = 20792,
  [SMALL_STATE(867)] = 20800,
  [SMALL_STATE(868)] = 20808,
  [SMALL_STATE(869)] = 20816,
  [SMALL_STATE(870)] = 20824,
  [SMALL_STATE(871)] = 20832,
  [SMALL_STATE(872)] = 20840,
  [SMALL_STATE(873)] = 20848,
  [SMALL_STATE(874)] = 20856,
  [SMALL_STATE(875)] = 20864,
  [SMALL_STATE(876)] = 20872,
  [SMALL_STATE(877)] = 20880,
  [SMALL_STATE(878)] = 20888,
  [SMALL_STATE(879)] = 20896,
  [SMALL_STATE(880)] = 20904,
  [SMALL_STATE(881)] = 20912,
  [SMALL_STATE(882)] = 20920,
  [SMALL_STATE(883)] = 20928,
  [SMALL_STATE(884)] = 20936,
  [SMALL_STATE(885)] = 20944,
  [SMALL_STATE(886)] = 20952,
  [SMALL_STATE(887)] = 20960,
  [SMALL_STATE(888)] = 20968,
  [SMALL_STATE(889)] = 20976,
  [SMALL_STATE(890)] = 20984,
  [SMALL_STATE(891)] = 20992,
  [SMALL_STATE(892)] = 21000,
  [SMALL_STATE(893)] = 21008,
  [SMALL_STATE(894)] = 21016,
  [SMALL_STATE(895)] = 21024,
  [SMALL_STATE(896)] = 21032,
  [SMALL_STATE(897)] = 21040,
  [SMALL_STATE(898)] = 21048,
  [SMALL_STATE(899)] = 21056,
  [SMALL_STATE(900)] = 21064,
  [SMALL_STATE(901)] = 21072,
  [SMALL_STATE(902)] = 21080,
  [SMALL_STATE(903)] = 21088,
  [SMALL_STATE(904)] = 21096,
  [SMALL_STATE(905)] = 21104,
  [SMALL_STATE(906)] = 21112,
  [SMALL_STATE(907)] = 21120,
  [SMALL_STATE(908)] = 21128,
  [SMALL_STATE(909)] = 21136,
  [SMALL_STATE(910)] = 21144,
  [SMALL_STATE(911)] = 21152,
  [SMALL_STATE(912)] = 21160,
  [SMALL_STATE(913)] = 21168,
  [SMALL_STATE(914)] = 21176,
  [SMALL_STATE(915)] = 21184,
  [SMALL_STATE(916)] = 21192,
  [SMALL_STATE(917)] = 21200,
  [SMALL_STATE(918)] = 21208,
  [SMALL_STATE(919)] = 21216,
  [SMALL_STATE(920)] = 21224,
  [SMALL_STATE(921)] = 21232,
  [SMALL_STATE(922)] = 21240,
  [SMALL_STATE(923)] = 21248,
  [SMALL_STATE(924)] = 21256,
  [SMALL_STATE(925)] = 21264,
  [SMALL_STATE(926)] = 21272,
  [SMALL_STATE(927)] = 21280,
  [SMALL_STATE(928)] = 21288,
  [SMALL_STATE(929)] = 21296,
  [SMALL_STATE(930)] = 21304,
  [SMALL_STATE(931)] = 21312,
  [SMALL_STATE(932)] = 21320,
  [SMALL_STATE(933)] = 21328,
  [SMALL_STATE(934)] = 21336,
  [SMALL_STATE(935)] = 21344,
  [SMALL_STATE(936)] = 21352,
  [SMALL_STATE(937)] = 21360,
  [SMALL_STATE(938)] = 21368,
  [SMALL_STATE(939)] = 21376,
  [SMALL_STATE(940)] = 21384,
  [SMALL_STATE(941)] = 21392,
  [SMALL_STATE(942)] = 21400,
  [SMALL_STATE(943)] = 21408,
  [SMALL_STATE(944)] = 21416,
  [SMALL_STATE(945)] = 21424,
  [SMALL_STATE(946)] = 21432,
  [SMALL_STATE(947)] = 21440,
  [SMALL_STATE(948)] = 21448,
  [SMALL_STATE(949)] = 21456,
  [SMALL_STATE(950)] = 21464,
  [SMALL_STATE(951)] = 21472,
  [SMALL_STATE(952)] = 21480,
  [SMALL_STATE(953)] = 21488,
  [SMALL_STATE(954)] = 21496,
  [SMALL_STATE(955)] = 21504,
  [SMALL_STATE(956)] = 21512,
  [SMALL_STATE(957)] = 21520,
  [SMALL_STATE(958)] = 21528,
  [SMALL_STATE(959)] = 21536,
  [SMALL_STATE(960)] = 21544,
  [SMALL_STATE(961)] = 21552,
  [SMALL_STATE(962)] = 21560,
  [SMALL_STATE(963)] = 21568,
  [SMALL_STATE(964)] = 21576,
  [SMALL_STATE(965)] = 21584,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 22),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 22),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 21),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 21),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 12),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 12),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 40),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 40),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 32),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 32),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 17),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 17),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(950),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 27),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 7),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 7),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 7),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 7),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 28),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 14),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 8),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 37),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 25),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 41),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 23),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 7),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(691),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(964),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(500),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(743),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(766),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(522),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 9),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 9),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 15),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 15),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 38),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 38),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unary_function, 4, .production_id = 9),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 4, .production_id = 9),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_param_function, 4, .production_id = 11),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 4, .production_id = 11),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 46),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 25),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 46),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 50),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 47),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 50),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_int, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 47),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 46),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 5, .production_id = 16),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 25),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 16),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 6, .production_id = 31),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 6, .production_id = 30),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 30),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 29),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 5, .production_id = 20),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 8, .production_id = 44),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 9, .production_id = 48),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(527),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(906),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(319),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(229),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(228),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(263),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 25),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(217),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(215),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(264),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 13),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 13),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 34),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 34),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 25),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(497),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [1083] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(208),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(540),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(511),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [1106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(536),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(493),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [1124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(464),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 19),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 19), SHIFT_REPEAT(39),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 10),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(392),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 3),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 49),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 45),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 35),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 3),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_with, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 18),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 42),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 33),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 27),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 24),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 27),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 45),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 24),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 43),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 26),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 24),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 36),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(886),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, .production_id = 1),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function_name, 1),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1673] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
