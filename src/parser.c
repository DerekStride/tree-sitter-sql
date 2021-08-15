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
#define STATE_COUNT 937
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 232
#define ALIAS_COUNT 0
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 49

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
  sym__count_function = 198,
  sym__function_param = 199,
  sym__function_params = 200,
  sym_from = 201,
  sym_table_expression = 202,
  sym_index_hint = 203,
  sym_join = 204,
  sym_where = 205,
  sym_group_by = 206,
  sym__having = 207,
  sym_order_by = 208,
  sym_order_expression = 209,
  sym_limit = 210,
  sym_offset = 211,
  sym_where_expression = 212,
  sym_predicate = 213,
  sym__expression = 214,
  sym_subquery = 215,
  sym_list = 216,
  sym_literal = 217,
  sym__literal_string = 218,
  sym_identifier = 219,
  aux_sym_alter_table_repeat1 = 220,
  aux_sym__column_list_without_order_repeat1 = 221,
  aux_sym__table_references_repeat1 = 222,
  aux_sym_assignment_list_repeat1 = 223,
  aux_sym_table_options_repeat1 = 224,
  aux_sym_column_definitions_repeat1 = 225,
  aux_sym_constraints_repeat1 = 226,
  aux_sym_column_list_repeat1 = 227,
  aux_sym__field_list_repeat1 = 228,
  aux_sym__function_params_repeat1 = 229,
  aux_sym_from_repeat1 = 230,
  aux_sym_list_repeat1 = 231,
};

static const char * const ts_symbol_names[] = {
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
  [sym_keyword_max] = "keyword_max",
  [sym_keyword_min] = "keyword_min",
  [sym_keyword_avg] = "keyword_avg",
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
  [sym__count_function] = "_count_function",
  [sym__function_param] = "_function_param",
  [sym__function_params] = "_function_params",
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
};

static const TSSymbol ts_symbol_map[] = {
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
  [sym__count_function] = sym__count_function,
  [sym__function_param] = sym__function_param,
  [sym__function_params] = sym__function_params,
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
    .named = true,
  },
  [sym_keyword_min] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_avg] = {
    .visible = true,
    .named = true,
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
  [sym__count_function] = {
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

static const char * const ts_field_names[] = {
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 2, .length = 1},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 2},
  [21] = {.index = 40, .length = 1},
  [22] = {.index = 41, .length = 2},
  [23] = {.index = 43, .length = 3},
  [24] = {.index = 46, .length = 3},
  [25] = {.index = 49, .length = 3},
  [26] = {.index = 52, .length = 1},
  [27] = {.index = 53, .length = 1},
  [28] = {.index = 54, .length = 2},
  [29] = {.index = 56, .length = 1},
  [30] = {.index = 57, .length = 1},
  [31] = {.index = 58, .length = 3},
  [32] = {.index = 61, .length = 3},
  [33] = {.index = 64, .length = 4},
  [34] = {.index = 68, .length = 1},
  [35] = {.index = 69, .length = 2},
  [36] = {.index = 71, .length = 1},
  [37] = {.index = 72, .length = 2},
  [38] = {.index = 74, .length = 3},
  [39] = {.index = 77, .length = 2},
  [40] = {.index = 79, .length = 4},
  [41] = {.index = 83, .length = 1},
  [42] = {.index = 84, .length = 2},
  [43] = {.index = 86, .length = 2},
  [44] = {.index = 88, .length = 1},
  [45] = {.index = 89, .length = 1},
  [46] = {.index = 90, .length = 1},
  [47] = {.index = 91, .length = 2},
  [48] = {.index = 93, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [2] =
    {field_name, 0},
  [3] =
    {field_alias, 1},
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [6] =
    {field_alias, 1},
    {field_name, 0},
  [8] =
    {field_alias, 2},
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [11] =
    {field_alias, 2},
    {field_name, 0},
  [13] =
    {field_parameter, 0},
  [14] =
    {field_name, 2},
    {field_table_alias, 0},
  [16] =
    {field_name, 2},
    {field_schema, 0},
  [18] =
    {field_name, 0},
    {field_table_alias, 1},
  [20] =
    {field_name, 0},
    {field_parameter, 2},
  [22] =
    {field_alias, 3},
    {field_name, 0},
  [24] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [26] =
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [28] =
    {field_alias, 3},
    {field_name, 2},
    {field_table_alias, 0},
  [31] =
    {field_name, 0},
    {field_table_alias, 2},
  [33] =
    {field_name, 0},
    {field_parameter, 3},
  [35] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [38] =
    {field_alias, 4},
    {field_name, 0},
  [40] =
    {field_parameter, 1},
  [41] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [43] =
    {field_alias, 4},
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [46] =
    {field_alias, 4},
    {field_name, 2},
    {field_table_alias, 0},
  [49] =
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [52] =
    {field_index_name, 3},
  [53] =
    {field_name, 1, .inherited = true},
  [54] =
    {field_name, 0},
    {field_type, 1},
  [56] =
    {field_schema, 2},
  [57] =
    {field_name, 2},
  [58] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 3},
  [61] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [64] =
    {field_alias, 5},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [68] =
    {field_name, 0, .inherited = true},
  [69] =
    {field_name, 0},
    {field_value, 2},
  [71] =
    {field_name, 3},
  [72] =
    {field_new_name, 3},
    {field_old_name, 1},
  [74] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 4},
  [77] =
    {field_name, 0},
    {field_parameter, 4},
  [79] =
    {field_alias, 6},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [83] =
    {field_index_name, 5},
  [84] =
    {field_name, 2},
    {field_type, 4},
  [86] =
    {field_new_name, 4},
    {field_old_name, 2},
  [88] =
    {field_name, 1},
  [89] =
    {field_size, 2},
  [90] =
    {field_precision, 2},
  [91] =
    {field_name, 2},
    {field_type, 6},
  [93] =
    {field_precision, 2},
    {field_scale, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [16] = {
    [0] = sym_identifier,
  },
  [45] = {
    [2] = sym_literal,
  },
  [46] = {
    [2] = sym_literal,
  },
  [48] = {
    [2] = sym_literal,
    [4] = sym_literal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(784);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
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
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(939);
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
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'O') ADVANCE(1051);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'o') ADVANCE(1152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(760)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
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
      if (lookahead == '^') ADVANCE(953);
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
          lookahead == ' ') SKIP(752)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'G') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == '^') ADVANCE(953);
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
          lookahead == ' ') SKIP(758)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1029);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(750)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(755)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(757)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(754)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'O') ADVANCE(1051);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'o') ADVANCE(1152);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(759)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1029);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'W') ADVANCE(1008);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'w') ADVANCE(1109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(751)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'W') ADVANCE(1018);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(753)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'W') ADVANCE(1018);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(756)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1043);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(762)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1043);
      if (lookahead == 'D') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1144);
      if (lookahead == 'd') ADVANCE(1115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(763)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1043);
      if (lookahead == 'S') ADVANCE(994);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1144);
      if (lookahead == 's') ADVANCE(1095);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(761)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(768)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1058);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(772)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
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
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1062);
      if (lookahead == 'D') ADVANCE(1003);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead == 'd') ADVANCE(1104);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(769)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(777)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1018);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1159);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(773)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1062);
      if (lookahead == 'D') ADVANCE(1003);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'W') ADVANCE(1018);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead == 'd') ADVANCE(1104);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(771)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1035);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(764)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1035);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(766)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1035);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1008);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(765)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(774)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'o') ADVANCE(1133);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(775)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'D') ADVANCE(999);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'd') ADVANCE(1100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(776)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1035);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1008);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(767)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(778)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1047);
      if (lookahead == 'K') ADVANCE(998);
      if (lookahead == 'P') ADVANCE(1059);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1148);
      if (lookahead == 'k') ADVANCE(1099);
      if (lookahead == 'p') ADVANCE(1160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(770)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1045);
      if (lookahead == 'T') ADVANCE(1041);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1146);
      if (lookahead == 't') ADVANCE(1142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(781)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'o') ADVANCE(1133);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(780)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'i') ADVANCE(1106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(779)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
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
      if (lookahead == '=') ADVANCE(956);
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
      if (lookahead == 'O') ADVANCE(887);
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
      if (lookahead == 'A') ADVANCE(884);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(884);
      if (lookahead == 'E') ADVANCE(921);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(920);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(889);
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
      if (lookahead == 'C') ADVANCE(905);
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
      if (lookahead == 'D') ADVANCE(853);
      END_STATE();
    case 109:
      if (lookahead == 'D') ADVANCE(934);
      END_STATE();
    case 110:
      if (lookahead == 'D') ADVANCE(935);
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
      if (lookahead == 'T') ADVANCE(900);
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
      if (lookahead == 'E') ADVANCE(864);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(382);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(928);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(885);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(930);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(862);
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
      if (lookahead == 'E') ADVANCE(907);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(886);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(790);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(876);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(789);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(923);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(927);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(385);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(887);
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
      if (lookahead == 'F') ADVANCE(870);
      if (lookahead == 'N') ADVANCE(848);
      END_STATE();
    case 170:
      if (lookahead == 'F') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(805);
      if (lookahead == 'R') ADVANCE(856);
      if (lookahead == 'U') ADVANCE(364);
      if (lookahead == 'W') ADVANCE(265);
      END_STATE();
    case 171:
      if (lookahead == 'F') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(855);
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
      if (lookahead == 'G') ADVANCE(846);
      END_STATE();
    case 176:
      if (lookahead == 'G') ADVANCE(204);
      END_STATE();
    case 177:
      if (lookahead == 'G') ADVANCE(811);
      END_STATE();
    case 178:
      if (lookahead == 'G') ADVANCE(914);
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
      if (lookahead == 'H') ADVANCE(878);
      END_STATE();
    case 183:
      if (lookahead == 'H') ADVANCE(877);
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
      if (lookahead == 'L') ADVANCE(919);
      END_STATE();
    case 214:
      if (lookahead == 'L') ADVANCE(894);
      END_STATE();
    case 215:
      if (lookahead == 'L') ADVANCE(906);
      END_STATE();
    case 216:
      if (lookahead == 'L') ADVANCE(897);
      END_STATE();
    case 217:
      if (lookahead == 'L') ADVANCE(904);
      END_STATE();
    case 218:
      if (lookahead == 'L') ADVANCE(898);
      END_STATE();
    case 219:
      if (lookahead == 'L') ADVANCE(896);
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
      if (lookahead == 'N') ADVANCE(845);
      END_STATE();
    case 252:
      if (lookahead == 'N') ADVANCE(803);
      END_STATE();
    case 253:
      if (lookahead == 'N') ADVANCE(916);
      END_STATE();
    case 254:
      if (lookahead == 'N') ADVANCE(828);
      END_STATE();
    case 255:
      if (lookahead == 'N') ADVANCE(895);
      END_STATE();
    case 256:
      if (lookahead == 'N') ADVANCE(908);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(847);
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
      if (lookahead == 'O') ADVANCE(882);
      if (lookahead == 'U') ADVANCE(221);
      END_STATE();
    case 275:
      if (lookahead == 'O') ADVANCE(180);
      END_STATE();
    case 276:
      if (lookahead == 'O') ADVANCE(397);
      END_STATE();
    case 277:
      if (lookahead == 'O') ADVANCE(881);
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
      if (lookahead == 'P') ADVANCE(891);
      END_STATE();
    case 295:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 296:
      if (lookahead == 'P') ADVANCE(924);
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
      if (lookahead == 'R') ADVANCE(856);
      END_STATE();
    case 301:
      if (lookahead == 'R') ADVANCE(868);
      END_STATE();
    case 302:
      if (lookahead == 'R') ADVANCE(910);
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
      if (lookahead == 'R') ADVANCE(890);
      END_STATE();
    case 307:
      if (lookahead == 'R') ADVANCE(913);
      END_STATE();
    case 308:
      if (lookahead == 'R') ADVANCE(912);
      END_STATE();
    case 309:
      if (lookahead == 'R') ADVANCE(902);
      END_STATE();
    case 310:
      if (lookahead == 'R') ADVANCE(867);
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
      if (lookahead == 'S') ADVANCE(872);
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
      if (lookahead == 'T') ADVANCE(861);
      END_STATE();
    case 341:
      if (lookahead == 'T') ADVANCE(796);
      END_STATE();
    case 342:
      if (lookahead == 'T') ADVANCE(915);
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
      if (lookahead == 'T') ADVANCE(903);
      END_STATE();
    case 347:
      if (lookahead == 'T') ADVANCE(818);
      END_STATE();
    case 348:
      if (lookahead == 'T') ADVANCE(785);
      END_STATE();
    case 349:
      if (lookahead == 'T') ADVANCE(874);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(926);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(838);
      END_STATE();
    case 352:
      if (lookahead == 'T') ADVANCE(899);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(840);
      END_STATE();
    case 354:
      if (lookahead == 'T') ADVANCE(873);
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
      if (lookahead == 'X') ADVANCE(866);
      END_STATE();
    case 385:
      if (lookahead == 'X') ADVANCE(342);
      END_STATE();
    case 386:
      if (lookahead == 'Y') ADVANCE(830);
      END_STATE();
    case 387:
      if (lookahead == 'Y') ADVANCE(909);
      END_STATE();
    case 388:
      if (lookahead == 'Y') ADVANCE(819);
      END_STATE();
    case 389:
      if (lookahead == 'Y') ADVANCE(932);
      END_STATE();
    case 390:
      if (lookahead == 'Y') ADVANCE(810);
      END_STATE();
    case 391:
      if (lookahead == 'Y') ADVANCE(809);
      END_STATE();
    case 392:
      if (lookahead == 'Y') ADVANCE(933);
      END_STATE();
    case 393:
      if (lookahead == 'Y') ADVANCE(893);
      END_STATE();
    case 394:
      if (lookahead == 'Y') ADVANCE(200);
      END_STATE();
    case 395:
      if (lookahead == 'Z') ADVANCE(931);
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
      if (lookahead == 'o') ADVANCE(887);
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
      if (lookahead == 'a') ADVANCE(884);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(884);
      if (lookahead == 'e') ADVANCE(922);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(920);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(889);
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
      if (lookahead == 'c') ADVANCE(905);
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
      if (lookahead == 'd') ADVANCE(853);
      END_STATE();
    case 461:
      if (lookahead == 'd') ADVANCE(934);
      END_STATE();
    case 462:
      if (lookahead == 'd') ADVANCE(935);
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
      if (lookahead == 't') ADVANCE(901);
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
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(862);
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
      if (lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == 'o') ADVANCE(887);
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
      if (lookahead == 'f') ADVANCE(870);
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 522:
      if (lookahead == 'f') ADVANCE(524);
      if (lookahead == 'n') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(858);
      if (lookahead == 'u') ADVANCE(716);
      if (lookahead == 'w') ADVANCE(617);
      END_STATE();
    case 523:
      if (lookahead == 'f') ADVANCE(524);
      if (lookahead == 'r') ADVANCE(855);
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
      if (lookahead == 'g') ADVANCE(846);
      END_STATE();
    case 528:
      if (lookahead == 'g') ADVANCE(556);
      END_STATE();
    case 529:
      if (lookahead == 'g') ADVANCE(811);
      END_STATE();
    case 530:
      if (lookahead == 'g') ADVANCE(914);
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
      if (lookahead == 'h') ADVANCE(879);
      END_STATE();
    case 535:
      if (lookahead == 'h') ADVANCE(877);
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
      if (lookahead == 'l') ADVANCE(919);
      END_STATE();
    case 566:
      if (lookahead == 'l') ADVANCE(894);
      END_STATE();
    case 567:
      if (lookahead == 'l') ADVANCE(906);
      END_STATE();
    case 568:
      if (lookahead == 'l') ADVANCE(897);
      END_STATE();
    case 569:
      if (lookahead == 'l') ADVANCE(904);
      END_STATE();
    case 570:
      if (lookahead == 'l') ADVANCE(898);
      END_STATE();
    case 571:
      if (lookahead == 'l') ADVANCE(896);
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
      if (lookahead == 'n') ADVANCE(845);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(917);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(828);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(847);
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
      if (lookahead == 'o') ADVANCE(883);
      if (lookahead == 'u') ADVANCE(573);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(881);
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
      if (lookahead == 'p') ADVANCE(892);
      END_STATE();
    case 647:
      if (lookahead == 'p') ADVANCE(925);
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
      if (lookahead == 'r') ADVANCE(858);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(869);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(911);
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
      if (lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(902);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(867);
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
      if (lookahead == 's') ADVANCE(872);
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
      if (lookahead == 't') ADVANCE(861);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(915);
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
      if (lookahead == 't') ADVANCE(903);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(838);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(899);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(873);
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
      if (lookahead == 'x') ADVANCE(866);
      END_STATE();
    case 737:
      if (lookahead == 'x') ADVANCE(694);
      END_STATE();
    case 738:
      if (lookahead == 'y') ADVANCE(830);
      END_STATE();
    case 739:
      if (lookahead == 'y') ADVANCE(909);
      END_STATE();
    case 740:
      if (lookahead == 'y') ADVANCE(819);
      END_STATE();
    case 741:
      if (lookahead == 'y') ADVANCE(932);
      END_STATE();
    case 742:
      if (lookahead == 'y') ADVANCE(810);
      END_STATE();
    case 743:
      if (lookahead == 'y') ADVANCE(809);
      END_STATE();
    case 744:
      if (lookahead == 'y') ADVANCE(933);
      END_STATE();
    case 745:
      if (lookahead == 'y') ADVANCE(893);
      END_STATE();
    case 746:
      if (lookahead == 'y') ADVANCE(552);
      END_STATE();
    case 747:
      if (lookahead == 'z') ADVANCE(931);
      END_STATE();
    case 748:
      if (lookahead == 'z') ADVANCE(502);
      END_STATE();
    case 749:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(749)
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
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
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1029);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 751:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(751)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1029);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'W') ADVANCE(1008);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'w') ADVANCE(1109);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 752:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(752)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
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
      if (lookahead == '^') ADVANCE(953);
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
    case 753:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(753)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'W') ADVANCE(1018);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 754:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(754)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 755:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(755)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 756:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(756)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == 'W') ADVANCE(1018);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 757:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(757)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1049);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 758:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(758)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'G') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(431);
      if (lookahead == 'g') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(652);
      if (lookahead == 'w') ADVANCE(537);
      END_STATE();
    case 759:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(759)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'O') ADVANCE(1051);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'o') ADVANCE(1152);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 760:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(760)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == 'A') ADVANCE(1028);
      if (lookahead == 'I') ADVANCE(1031);
      if (lookahead == 'O') ADVANCE(1051);
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'o') ADVANCE(1152);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 761:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(761)
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1043);
      if (lookahead == 'S') ADVANCE(994);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1144);
      if (lookahead == 's') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 762:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(762)
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1043);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 763:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(763)
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1043);
      if (lookahead == 'D') ADVANCE(1014);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1144);
      if (lookahead == 'd') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 764:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(764)
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1035);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 765:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(765)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1035);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1008);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1109);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 766:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(766)
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1035);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 767:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(767)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'G') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1035);
      if (lookahead == 'J') ADVANCE(1042);
      if (lookahead == 'L') ADVANCE(992);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'R') ADVANCE(1013);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == 'W') ADVANCE(1008);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == 'j') ADVANCE(1143);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1109);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 768:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(768)
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 769:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(769)
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1062);
      if (lookahead == 'D') ADVANCE(1003);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead == 'd') ADVANCE(1104);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 770:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(770)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1047);
      if (lookahead == 'K') ADVANCE(998);
      if (lookahead == 'P') ADVANCE(1059);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1148);
      if (lookahead == 'k') ADVANCE(1099);
      if (lookahead == 'p') ADVANCE(1160);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 771:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(771)
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1062);
      if (lookahead == 'D') ADVANCE(1003);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'W') ADVANCE(1018);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead == 'd') ADVANCE(1104);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 772:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(772)
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1058);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1159);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 773:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(773)
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1018);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1159);
      if (lookahead == 'w') ADVANCE(1119);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 774:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(774)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 775:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(775)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'o') ADVANCE(1133);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 776:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(776)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'D') ADVANCE(999);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'd') ADVANCE(1100);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 777:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(777)
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1061);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 778:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(778)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'L') ADVANCE(1012);
      if (lookahead == 'O') ADVANCE(1053);
      if (lookahead == 'W') ADVANCE(1009);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'w') ADVANCE(1110);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 779:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(779)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'i') ADVANCE(1106);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 780:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(780)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'F') ADVANCE(1046);
      if (lookahead == 'O') ADVANCE(1032);
      if (lookahead == 'U') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'f') ADVANCE(1147);
      if (lookahead == 'o') ADVANCE(1133);
      if (lookahead == 'u') ADVANCE(1165);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 781:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(781)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1045);
      if (lookahead == 'T') ADVANCE(1041);
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1146);
      if (lookahead == 't') ADVANCE(1142);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
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
      if (lookahead == '"') ADVANCE(968);
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead == '(') ADVANCE(936);
      if (lookahead == ')') ADVANCE(937);
      if (lookahead == '*') ADVANCE(948);
      if (lookahead == '+') ADVANCE(949);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(946);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '=') ADVANCE(947);
      if (lookahead == '>') ADVANCE(958);
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
      if (lookahead == '^') ADVANCE(953);
      if (lookahead == '`') ADVANCE(978);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_keyword_cascade);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'O') ADVANCE(378);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_keyword_no);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 'T') ADVANCE(861);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 't') ADVANCE(861);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_keyword_data);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_keyword_type);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_keyword_rename);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_keyword_to);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_keyword_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_keyword_schema);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_keyword_owner);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'O') ADVANCE(325);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_keyword_temporary);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_keyword_int_token2);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token2);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(918);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(918);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(207);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(395);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token2);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 'S') ADVANCE(365);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token4);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_keyword_timestamptz_token1);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_keyword_geometry);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_keyword_geography);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_keyword_box2d);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_keyword_box3d);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(976);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(967);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(967);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(961);
      if (lookahead != 0) ADVANCE(962);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(976);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '*') ADVANCE(970);
      if (lookahead != 0) ADVANCE(971);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(955);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(957);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(967);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(961);
      if (lookahead != 0) ADVANCE(962);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(967);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(961);
      if (lookahead == '/') ADVANCE(942);
      if (lookahead != 0) ADVANCE(962);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(967);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(961);
      if (lookahead != 0) ADVANCE(962);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(941);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(963);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(965);
      if (lookahead == '/') ADVANCE(960);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(967);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(967);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(966);
      if (lookahead == '-') ADVANCE(965);
      if (lookahead == '/') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(967);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(967);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(976);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(969);
      if (lookahead == '*') ADVANCE(970);
      if (lookahead != 0) ADVANCE(971);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(976);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '*') ADVANCE(970);
      if (lookahead == '/') ADVANCE(943);
      if (lookahead != 0) ADVANCE(971);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(976);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '*') ADVANCE(970);
      if (lookahead != 0) ADVANCE(971);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(972);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead == '/') ADVANCE(969);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(976);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(976);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(975);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead == '/') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(976);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(976);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1004);
      if (lookahead == 'I') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1000);
      if (lookahead == 'I') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(990);
      if (lookahead == 'S') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1105);
      if (lookahead == 'i') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1101);
      if (lookahead == 'i') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1091);
      if (lookahead == 's') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 16},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 18},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 18},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 17},
  [163] = {.lex_state = 17},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 17},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 17},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 17},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 28},
  [181] = {.lex_state = 33},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 17},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 33},
  [193] = {.lex_state = 33},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 17},
  [198] = {.lex_state = 28},
  [199] = {.lex_state = 28},
  [200] = {.lex_state = 28},
  [201] = {.lex_state = 29},
  [202] = {.lex_state = 37},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 29},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 20},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 37},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 23},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 20},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 20},
  [230] = {.lex_state = 20},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 20},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 20},
  [236] = {.lex_state = 20},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 20},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 20},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 23},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 20},
  [250] = {.lex_state = 20},
  [251] = {.lex_state = 20},
  [252] = {.lex_state = 20},
  [253] = {.lex_state = 20},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 20},
  [256] = {.lex_state = 20},
  [257] = {.lex_state = 20},
  [258] = {.lex_state = 20},
  [259] = {.lex_state = 20},
  [260] = {.lex_state = 20},
  [261] = {.lex_state = 20},
  [262] = {.lex_state = 20},
  [263] = {.lex_state = 23},
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
  [276] = {.lex_state = 23},
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
  [289] = {.lex_state = 20},
  [290] = {.lex_state = 20},
  [291] = {.lex_state = 20},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 23},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 23},
  [299] = {.lex_state = 24},
  [300] = {.lex_state = 39},
  [301] = {.lex_state = 27},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 24},
  [307] = {.lex_state = 24},
  [308] = {.lex_state = 27},
  [309] = {.lex_state = 27},
  [310] = {.lex_state = 27},
  [311] = {.lex_state = 24},
  [312] = {.lex_state = 24},
  [313] = {.lex_state = 24},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 22},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 27},
  [323] = {.lex_state = 22},
  [324] = {.lex_state = 24},
  [325] = {.lex_state = 7},
  [326] = {.lex_state = 22},
  [327] = {.lex_state = 27},
  [328] = {.lex_state = 24},
  [329] = {.lex_state = 27},
  [330] = {.lex_state = 27},
  [331] = {.lex_state = 26},
  [332] = {.lex_state = 34},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 27},
  [335] = {.lex_state = 24},
  [336] = {.lex_state = 7},
  [337] = {.lex_state = 27},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 24},
  [340] = {.lex_state = 27},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 7},
  [343] = {.lex_state = 26},
  [344] = {.lex_state = 26},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 7},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 7},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 26},
  [352] = {.lex_state = 22},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 7},
  [355] = {.lex_state = 24},
  [356] = {.lex_state = 34},
  [357] = {.lex_state = 26},
  [358] = {.lex_state = 35},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 22},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 36},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 22},
  [368] = {.lex_state = 36},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 20},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 7},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 26},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 22},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 22},
  [383] = {.lex_state = 34},
  [384] = {.lex_state = 26},
  [385] = {.lex_state = 25},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 34},
  [388] = {.lex_state = 36},
  [389] = {.lex_state = 26},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 36},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 26},
  [397] = {.lex_state = 38},
  [398] = {.lex_state = 26},
  [399] = {.lex_state = 17},
  [400] = {.lex_state = 26},
  [401] = {.lex_state = 22},
  [402] = {.lex_state = 25},
  [403] = {.lex_state = 25},
  [404] = {.lex_state = 25},
  [405] = {.lex_state = 38},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 17},
  [409] = {.lex_state = 17},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 35},
  [412] = {.lex_state = 36},
  [413] = {.lex_state = 17},
  [414] = {.lex_state = 17},
  [415] = {.lex_state = 22},
  [416] = {.lex_state = 22},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 35},
  [425] = {.lex_state = 35},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 42},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 25},
  [434] = {.lex_state = 41},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 25},
  [438] = {.lex_state = 41},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 42},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 42},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 42},
  [447] = {.lex_state = 42},
  [448] = {.lex_state = 42},
  [449] = {.lex_state = 42},
  [450] = {.lex_state = 42},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 25},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 42},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 25},
  [460] = {.lex_state = 42},
  [461] = {.lex_state = 42},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 25},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 42},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 25},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 20},
  [479] = {.lex_state = 40},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 25},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 20},
  [490] = {.lex_state = 20},
  [491] = {.lex_state = 20},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 36},
  [497] = {.lex_state = 20},
  [498] = {.lex_state = 20},
  [499] = {.lex_state = 20},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 23},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 36},
  [504] = {.lex_state = 36},
  [505] = {.lex_state = 36},
  [506] = {.lex_state = 20},
  [507] = {.lex_state = 20},
  [508] = {.lex_state = 20},
  [509] = {.lex_state = 20},
  [510] = {.lex_state = 20},
  [511] = {.lex_state = 20},
  [512] = {.lex_state = 20},
  [513] = {.lex_state = 23},
  [514] = {.lex_state = 20},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 20},
  [517] = {.lex_state = 20},
  [518] = {.lex_state = 20},
  [519] = {.lex_state = 36},
  [520] = {.lex_state = 20},
  [521] = {.lex_state = 23},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 20},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 20},
  [526] = {.lex_state = 20},
  [527] = {.lex_state = 36},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 20},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 20},
  [533] = {.lex_state = 23},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 23},
  [537] = {.lex_state = 36},
  [538] = {.lex_state = 23},
  [539] = {.lex_state = 23},
  [540] = {.lex_state = 20},
  [541] = {.lex_state = 20},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 20},
  [544] = {.lex_state = 20},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 20},
  [547] = {.lex_state = 20},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 20},
  [554] = {.lex_state = 20},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 20},
  [557] = {.lex_state = 20},
  [558] = {.lex_state = 20},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 20},
  [561] = {.lex_state = 20},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 20},
  [564] = {.lex_state = 20},
  [565] = {.lex_state = 20},
  [566] = {.lex_state = 20},
  [567] = {.lex_state = 20},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 20},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 20},
  [572] = {.lex_state = 20},
  [573] = {.lex_state = 20},
  [574] = {.lex_state = 20},
  [575] = {.lex_state = 20},
  [576] = {.lex_state = 20},
  [577] = {.lex_state = 20},
  [578] = {.lex_state = 20},
  [579] = {.lex_state = 20},
  [580] = {.lex_state = 20},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 20},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 20},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 20},
  [589] = {.lex_state = 20},
  [590] = {.lex_state = 20},
  [591] = {.lex_state = 20},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 20},
  [596] = {.lex_state = 20},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 20},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 20},
  [601] = {.lex_state = 20},
  [602] = {.lex_state = 20},
  [603] = {.lex_state = 20},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 20},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 20},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 20},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 20},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 20},
  [618] = {.lex_state = 20},
  [619] = {.lex_state = 20},
  [620] = {.lex_state = 20},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 20},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 20},
  [626] = {.lex_state = 20},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 20},
  [629] = {.lex_state = 20},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 20},
  [633] = {.lex_state = 20},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 23},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 20},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 20},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 20},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 20},
  [649] = {.lex_state = 20},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 20},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 20},
  [655] = {.lex_state = 20},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 20},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 20},
  [663] = {.lex_state = 20},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 20},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 20},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 20},
  [673] = {.lex_state = 20},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 20},
  [676] = {.lex_state = 20},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 23},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 8},
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
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 20},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 8},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 7},
  [722] = {.lex_state = 8},
  [723] = {.lex_state = 20},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 8},
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
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 23},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 23},
  [750] = {.lex_state = 23},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 23},
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
  [765] = {.lex_state = 0},
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
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 23},
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
  [798] = {.lex_state = 7},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 7},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 23},
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
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
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
  [865] = {.lex_state = 964},
  [866] = {.lex_state = 973},
  [867] = {.lex_state = 20},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 23},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 964},
  [881] = {.lex_state = 973},
  [882] = {.lex_state = 20},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 20},
  [885] = {.lex_state = 973},
  [886] = {.lex_state = 964},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 20},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 20},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 20},
  [897] = {.lex_state = 20},
  [898] = {.lex_state = 20},
  [899] = {.lex_state = 20},
  [900] = {.lex_state = 20},
  [901] = {.lex_state = 20},
  [902] = {.lex_state = 20},
  [903] = {.lex_state = 20},
  [904] = {.lex_state = 20},
  [905] = {.lex_state = 20},
  [906] = {.lex_state = 20},
  [907] = {.lex_state = 20},
  [908] = {.lex_state = 20},
  [909] = {.lex_state = 20},
  [910] = {.lex_state = 20},
  [911] = {.lex_state = 20},
  [912] = {.lex_state = 20},
  [913] = {.lex_state = 20},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 43},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_program] = STATE(924),
    [sym_statement] = STATE(915),
    [sym__select_statement] = STATE(894),
    [sym_select] = STATE(548),
    [sym__delete_statement] = STATE(894),
    [sym_delete] = STATE(688),
    [sym__create_statement] = STATE(894),
    [sym_create_table] = STATE(894),
    [sym_create_view] = STATE(894),
    [sym_create_materialized_view] = STATE(894),
    [sym__alter_statement] = STATE(894),
    [sym_alter_table] = STATE(894),
    [sym_alter_view] = STATE(894),
    [sym__drop_statement] = STATE(894),
    [sym_drop_table] = STATE(894),
    [sym_drop_view] = STATE(894),
    [sym__insert_statement] = STATE(894),
    [sym_insert] = STATE(894),
    [sym__update_statement] = STATE(894),
    [sym_update] = STATE(894),
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

static const uint16_t ts_small_parse_table[] = {
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
    STATE(314), 1,
      sym_keyword_varchar,
    STATE(325), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(725), 10,
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
    STATE(314), 1,
      sym_keyword_varchar,
    STATE(325), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(292), 10,
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
    STATE(314), 1,
      sym_keyword_varchar,
    STATE(325), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(684), 10,
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
    STATE(31), 1,
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
  [421] = 8,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(77), 1,
      sym_keyword_as,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 11,
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
    ACTIONS(73), 14,
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
  [470] = 8,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(77), 1,
      sym_keyword_as,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 12,
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
    ACTIONS(73), 13,
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
    ACTIONS(65), 1,
      sym_keyword_as,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(31), 1,
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
  [568] = 3,
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
  [606] = 3,
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
  [644] = 3,
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
  [682] = 3,
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
  [720] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(28), 1,
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
  [766] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(28), 1,
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
  [812] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 20,
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
  [847] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 20,
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
  [882] = 3,
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
  [917] = 3,
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
  [952] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(99), 11,
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
  [989] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(105), 11,
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
  [1026] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(107), 11,
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
  [1063] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 20,
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
  [1098] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 20,
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
  [1133] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 20,
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
  [1168] = 3,
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
  [1203] = 3,
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
  [1238] = 3,
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
    ACTIONS(129), 20,
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
  [1273] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 20,
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
  [1308] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 20,
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
  [1343] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 9,
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
  [1380] = 3,
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
  [1415] = 3,
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
  [1450] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 20,
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
  [1485] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 21,
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
  [1519] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    STATE(81), 1,
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
  [1563] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(163), 1,
      sym_keyword_as,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 11,
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
  [1607] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(163), 1,
      sym_keyword_as,
    ACTIONS(167), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 11,
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
  [1651] = 4,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 18,
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
  [1687] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(81), 1,
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
  [1731] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(163), 1,
      sym_keyword_as,
    ACTIONS(173), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 12,
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
  [1775] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(81), 1,
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
  [1819] = 6,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 16,
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
  [1859] = 4,
    ACTIONS(181), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 18,
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
  [1895] = 9,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_CARET,
    ACTIONS(183), 1,
      sym_keyword_in,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 15,
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
  [1941] = 11,
    ACTIONS(111), 1,
      sym_keyword_or,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_CARET,
    ACTIONS(183), 1,
      sym_keyword_in,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 11,
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
  [1991] = 8,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 15,
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
  [2035] = 6,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 16,
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
  [2075] = 9,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_SLASH,
    ACTIONS(197), 1,
      sym_keyword_in,
    ACTIONS(199), 1,
      anon_sym_PLUS,
    ACTIONS(201), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 15,
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
  [2121] = 8,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_SLASH,
    ACTIONS(199), 1,
      anon_sym_PLUS,
    ACTIONS(201), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 15,
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
  [2165] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 21,
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
  [2199] = 11,
    ACTIONS(111), 1,
      sym_keyword_or,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_SLASH,
    ACTIONS(197), 1,
      sym_keyword_in,
    ACTIONS(199), 1,
      anon_sym_PLUS,
    ACTIONS(201), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 11,
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
  [2249] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 20,
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
  [2282] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(163), 1,
      sym_keyword_as,
    ACTIONS(207), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      aux_sym_keyword_with_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 10,
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
  [2325] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(163), 1,
      sym_keyword_as,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 11,
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
  [2368] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(211), 1,
      anon_sym_DOT,
    STATE(81), 1,
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
  [2411] = 3,
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
  [2444] = 3,
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
  [2477] = 3,
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
  [2510] = 3,
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
  [2543] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 20,
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
  [2576] = 3,
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
  [2609] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(213), 1,
      sym_keyword_as,
    STATE(96), 1,
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
  [2650] = 3,
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
  [2683] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(81), 1,
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
  [2726] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 20,
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
  [2759] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 20,
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
  [2792] = 3,
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
  [2825] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(213), 1,
      sym_keyword_as,
    STATE(96), 1,
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
  [2866] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(213), 1,
      sym_keyword_as,
    STATE(96), 1,
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
  [2907] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 20,
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
  [2940] = 3,
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
  [2972] = 8,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    STATE(68), 1,
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
  [3014] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(213), 1,
      sym_keyword_as,
    STATE(96), 1,
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
  [3054] = 3,
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
  [3086] = 3,
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
    ACTIONS(19), 14,
      anon_sym_LPAREN,
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
  [3118] = 3,
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
    ACTIONS(23), 14,
      anon_sym_LPAREN,
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
  [3150] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 18,
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
  [3182] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 18,
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
  [3214] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 18,
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
  [3246] = 3,
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
  [3278] = 8,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 11,
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
  [3320] = 3,
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
  [3352] = 8,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(68), 1,
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
  [3394] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 18,
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
  [3426] = 9,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(229), 1,
      anon_sym_DOT,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
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
    ACTIONS(63), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3470] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 18,
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
  [3502] = 3,
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
  [3534] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 18,
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
  [3566] = 3,
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
  [3598] = 3,
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
  [3630] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 18,
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
  [3662] = 3,
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
  [3694] = 8,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    ACTIONS(233), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 10,
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
  [3736] = 3,
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
  [3768] = 3,
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
  [3800] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 18,
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
  [3832] = 3,
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
  [3864] = 3,
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
  [3896] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 18,
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
  [3928] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(213), 1,
      sym_keyword_as,
    STATE(96), 1,
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
  [3968] = 3,
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
  [3999] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(69), 1,
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
  [4038] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(69), 1,
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
  [4077] = 3,
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
  [4108] = 6,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(237), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 10,
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
  [4144] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(241), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(103), 10,
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
  [4175] = 4,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 14,
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
  [4206] = 4,
    ACTIONS(245), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 14,
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
  [4237] = 9,
    ACTIONS(247), 1,
      sym_keyword_in,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(253), 1,
      anon_sym_DASH,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 10,
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
  [4278] = 9,
    ACTIONS(245), 1,
      anon_sym_CARET,
    ACTIONS(259), 1,
      sym_keyword_in,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    ACTIONS(265), 1,
      anon_sym_DASH,
    ACTIONS(267), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(261), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 10,
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
  [4319] = 17,
    ACTIONS(269), 1,
      sym_keyword_select,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(161), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(667), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(895), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4376] = 11,
    ACTIONS(111), 1,
      sym_keyword_or,
    ACTIONS(245), 1,
      anon_sym_CARET,
    ACTIONS(259), 1,
      sym_keyword_in,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    ACTIONS(265), 1,
      anon_sym_DASH,
    ACTIONS(267), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(261), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [4421] = 11,
    ACTIONS(111), 1,
      sym_keyword_or,
    ACTIONS(247), 1,
      sym_keyword_in,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(253), 1,
      anon_sym_DASH,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4466] = 8,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(253), 1,
      anon_sym_DASH,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [4505] = 8,
    ACTIONS(245), 1,
      anon_sym_CARET,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    ACTIONS(265), 1,
      anon_sym_DASH,
    ACTIONS(267), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(261), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [4544] = 17,
    ACTIONS(269), 1,
      sym_keyword_select,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(161), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(667), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(891), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4601] = 17,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(758), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(627), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4658] = 12,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(297), 1,
      sym_keyword_in,
    ACTIONS(299), 1,
      sym_keyword_and,
    ACTIONS(301), 1,
      sym_keyword_or,
    ACTIONS(307), 1,
      anon_sym_PLUS,
    ACTIONS(309), 1,
      anon_sym_DASH,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(295), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4705] = 12,
    ACTIONS(245), 1,
      anon_sym_CARET,
    ACTIONS(259), 1,
      sym_keyword_in,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    ACTIONS(265), 1,
      anon_sym_DASH,
    ACTIONS(267), 1,
      anon_sym_SLASH,
    ACTIONS(315), 1,
      sym_keyword_and,
    ACTIONS(317), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(261), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(295), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [4752] = 6,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 12,
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
  [4787] = 6,
    ACTIONS(245), 1,
      anon_sym_CARET,
    ACTIONS(267), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(261), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 12,
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
  [4822] = 9,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(297), 1,
      sym_keyword_in,
    ACTIONS(307), 1,
      anon_sym_PLUS,
    ACTIONS(309), 1,
      anon_sym_DASH,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 10,
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
  [4863] = 17,
    ACTIONS(269), 1,
      sym_keyword_select,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(161), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(667), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(887), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4920] = 11,
    ACTIONS(111), 1,
      sym_keyword_or,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(297), 1,
      sym_keyword_in,
    ACTIONS(307), 1,
      anon_sym_PLUS,
    ACTIONS(309), 1,
      anon_sym_DASH,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4965] = 8,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(307), 1,
      anon_sym_PLUS,
    ACTIONS(309), 1,
      anon_sym_DASH,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [5004] = 17,
    ACTIONS(269), 1,
      sym_keyword_select,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(161), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(667), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(874), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5061] = 17,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(813), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(627), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5118] = 17,
    ACTIONS(269), 1,
      sym_keyword_select,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(161), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(667), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(778), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5175] = 17,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(808), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(627), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5232] = 17,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(768), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(627), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5289] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(103), 10,
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
  [5320] = 4,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 14,
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
  [5351] = 6,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 12,
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
  [5386] = 17,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    STATE(788), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(627), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5443] = 4,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 13,
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
  [5473] = 16,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(331), 1,
      sym_keyword_distinct,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(766), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5527] = 9,
    ACTIONS(333), 1,
      sym_keyword_in,
    ACTIONS(337), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      anon_sym_DASH,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5567] = 6,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(237), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 11,
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
  [5601] = 16,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(347), 1,
      sym_keyword_distinct,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(818), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5655] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 15,
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
  [5683] = 6,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [5717] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 15,
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
  [5745] = 16,
    ACTIONS(355), 1,
      sym_keyword_inner,
    ACTIONS(357), 1,
      sym_keyword_join,
    ACTIONS(359), 1,
      sym_keyword_where,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_group_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(195), 1,
      sym_index_hint,
    STATE(377), 1,
      sym_where,
    STATE(436), 1,
      sym_group_by,
    STATE(488), 1,
      sym_order_by,
    STATE(674), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(353), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(367), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(369), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(191), 2,
      sym_join,
      aux_sym_from_repeat1,
  [5799] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 15,
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
  [5827] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 15,
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
  [5855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 15,
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
  [5883] = 9,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      sym_keyword_in,
    ACTIONS(373), 1,
      anon_sym_PLUS,
    ACTIONS(375), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5923] = 11,
    ACTIONS(111), 1,
      sym_keyword_or,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      sym_keyword_in,
    ACTIONS(373), 1,
      anon_sym_PLUS,
    ACTIONS(375), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(377), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5967] = 8,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_PLUS,
    ACTIONS(375), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 10,
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
  [6005] = 8,
    ACTIONS(337), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      anon_sym_DASH,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 10,
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
  [6043] = 6,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [6077] = 16,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(381), 1,
      sym_keyword_distinct,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(787), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6131] = 16,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(383), 1,
      sym_keyword_distinct,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(811), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6185] = 11,
    ACTIONS(111), 1,
      sym_keyword_or,
    ACTIONS(333), 1,
      sym_keyword_in,
    ACTIONS(337), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      anon_sym_DASH,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [6229] = 16,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(391), 1,
      sym_keyword_inner,
    ACTIONS(393), 1,
      sym_keyword_join,
    ACTIONS(395), 1,
      sym_keyword_where,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(399), 1,
      sym_keyword_group_by,
    STATE(189), 1,
      sym_index_hint,
    STATE(381), 1,
      sym_where,
    STATE(429), 1,
      sym_group_by,
    STATE(488), 1,
      sym_order_by,
    STATE(674), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(369), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(389), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(188), 2,
      sym_join,
      aux_sym_from_repeat1,
  [6283] = 4,
    ACTIONS(343), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 13,
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
  [6313] = 16,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(401), 1,
      sym_keyword_distinct,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(765), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6367] = 12,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      sym_keyword_in,
    ACTIONS(373), 1,
      anon_sym_PLUS,
    ACTIONS(375), 1,
      anon_sym_DASH,
    ACTIONS(403), 1,
      sym_keyword_and,
    ACTIONS(405), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(295), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(377), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6412] = 6,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(606), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 11,
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
  [6445] = 15,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(814), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6496] = 15,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(890), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6547] = 6,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [6580] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 3,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 11,
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
  [6609] = 15,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(790), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6660] = 15,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(769), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6711] = 10,
    ACTIONS(425), 1,
      sym_keyword_in,
    ACTIONS(431), 1,
      anon_sym_PLUS,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      anon_sym_SLASH,
    ACTIONS(437), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(429), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(427), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6752] = 8,
    ACTIONS(431), 1,
      anon_sym_PLUS,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      anon_sym_SLASH,
    ACTIONS(437), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(429), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(109), 10,
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
  [6789] = 9,
    ACTIONS(425), 1,
      sym_keyword_in,
    ACTIONS(431), 1,
      anon_sym_PLUS,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      anon_sym_SLASH,
    ACTIONS(437), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(429), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(109), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6828] = 4,
    ACTIONS(437), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 13,
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
  [6857] = 15,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(916), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6908] = 4,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 13,
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
  [6937] = 9,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_keyword_in,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(109), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6976] = 10,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_keyword_in,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(449), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7017] = 8,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(109), 10,
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
  [7054] = 6,
    ACTIONS(435), 1,
      anon_sym_SLASH,
    ACTIONS(437), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(429), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [7087] = 15,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(283), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(183), 1,
      sym_literal,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(689), 2,
      sym_function_call,
      sym__function_param,
    STATE(206), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [7138] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(407), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 11,
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
  [7166] = 8,
    ACTIONS(457), 1,
      sym_keyword_as,
    ACTIONS(459), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    STATE(263), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(455), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(453), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [7202] = 8,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(465), 1,
      sym_keyword_as,
    ACTIONS(467), 1,
      anon_sym_DOT,
    STATE(263), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(455), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(453), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [7238] = 11,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_keyword_in,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(469), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(449), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7280] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(407), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 11,
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
  [7308] = 14,
    ACTIONS(355), 1,
      sym_keyword_inner,
    ACTIONS(357), 1,
      sym_keyword_join,
    ACTIONS(359), 1,
      sym_keyword_where,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_group_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(380), 1,
      sym_where,
    STATE(440), 1,
      sym_group_by,
    STATE(476), 1,
      sym_order_by,
    STATE(559), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(353), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(473), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7355] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(479), 1,
      sym_keyword_as,
    STATE(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(477), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(475), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [7388] = 14,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(391), 1,
      sym_keyword_inner,
    ACTIONS(393), 1,
      sym_keyword_join,
    ACTIONS(395), 1,
      sym_keyword_where,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(399), 1,
      sym_keyword_group_by,
    STATE(362), 1,
      sym_where,
    STATE(431), 1,
      sym_group_by,
    STATE(476), 1,
      sym_order_by,
    STATE(559), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(302), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7435] = 11,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_keyword_in,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(469), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(449), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7476] = 14,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(391), 1,
      sym_keyword_inner,
    ACTIONS(393), 1,
      sym_keyword_join,
    ACTIONS(395), 1,
      sym_keyword_where,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(399), 1,
      sym_keyword_group_by,
    STATE(361), 1,
      sym_where,
    STATE(454), 1,
      sym_group_by,
    STATE(471), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(481), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(302), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7523] = 14,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(391), 1,
      sym_keyword_inner,
    ACTIONS(393), 1,
      sym_keyword_join,
    ACTIONS(395), 1,
      sym_keyword_where,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(399), 1,
      sym_keyword_group_by,
    STATE(361), 1,
      sym_where,
    STATE(454), 1,
      sym_group_by,
    STATE(471), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(481), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(186), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7570] = 15,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(483), 1,
      sym_keyword_count,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_STAR,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(317), 1,
      sym_identifier,
    STATE(378), 1,
      sym__count_function,
    STATE(522), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(480), 2,
      sym_field,
      sym_function_call,
    STATE(531), 2,
      sym__field_list,
      sym_literal,
  [7619] = 14,
    ACTIONS(355), 1,
      sym_keyword_inner,
    ACTIONS(357), 1,
      sym_keyword_join,
    ACTIONS(359), 1,
      sym_keyword_where,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_group_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(386), 1,
      sym_where,
    STATE(439), 1,
      sym_group_by,
    STATE(471), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(353), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(481), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7666] = 3,
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
  [7691] = 3,
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
  [7716] = 15,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(487), 1,
      anon_sym_STAR,
    ACTIONS(493), 1,
      sym_keyword_distinct,
    ACTIONS(495), 1,
      sym_keyword_count,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(331), 1,
      sym_identifier,
    STATE(384), 1,
      sym__count_function,
    STATE(534), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(475), 2,
      sym_field,
      sym_function_call,
    STATE(531), 2,
      sym__field_list,
      sym_literal,
  [7765] = 14,
    ACTIONS(355), 1,
      sym_keyword_inner,
    ACTIONS(357), 1,
      sym_keyword_join,
    ACTIONS(359), 1,
      sym_keyword_where,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_group_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(386), 1,
      sym_where,
    STATE(439), 1,
      sym_group_by,
    STATE(471), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(353), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(481), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(184), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7812] = 15,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(483), 1,
      sym_keyword_count,
    ACTIONS(487), 1,
      anon_sym_STAR,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(501), 1,
      sym_keyword_distinct,
    STATE(36), 1,
      sym__literal_string,
    STATE(317), 1,
      sym_identifier,
    STATE(378), 1,
      sym__count_function,
    STATE(534), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(480), 2,
      sym_field,
      sym_function_call,
    STATE(531), 2,
      sym__field_list,
      sym_literal,
  [7861] = 15,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_STAR,
    ACTIONS(495), 1,
      sym_keyword_count,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(331), 1,
      sym_identifier,
    STATE(384), 1,
      sym__count_function,
    STATE(522), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(475), 2,
      sym_field,
      sym_function_call,
    STATE(531), 2,
      sym__field_list,
      sym_literal,
  [7910] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(503), 1,
      sym_keyword_as,
    STATE(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(477), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(475), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [7943] = 3,
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
  [7968] = 3,
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
  [7993] = 6,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    STATE(246), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(507), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(505), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8023] = 6,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    STATE(246), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(507), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(505), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [8053] = 14,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(487), 1,
      anon_sym_STAR,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(385), 1,
      sym_identifier,
    STATE(433), 1,
      sym__count_function,
    STATE(767), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(531), 2,
      sym__field_list,
      sym_literal,
    STATE(669), 2,
      sym_field,
      sym_function_call,
  [8099] = 10,
    ACTIONS(247), 1,
      sym_keyword_in,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(253), 1,
      anon_sym_DASH,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(513), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(289), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8137] = 6,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(517), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(515), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8167] = 10,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_keyword_in,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(469), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(449), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8205] = 10,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_SLASH,
    ACTIONS(199), 1,
      anon_sym_PLUS,
    ACTIONS(201), 1,
      anon_sym_DASH,
    ACTIONS(519), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(203), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8243] = 11,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    ACTIONS(533), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    STATE(427), 1,
      sym_where_expression,
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
  [8283] = 14,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(535), 1,
      sym_keyword_count,
    ACTIONS(537), 1,
      anon_sym_STAR,
    ACTIONS(539), 1,
      anon_sym_BQUOTE,
    ACTIONS(541), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(299), 1,
      sym_identifier,
    STATE(324), 1,
      sym__count_function,
    STATE(515), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(419), 2,
      sym_field,
      sym_function_call,
    STATE(426), 2,
      sym__field_list,
      sym_literal,
  [8329] = 10,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(543), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(545), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8367] = 11,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    STATE(427), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(121), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8407] = 11,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    STATE(427), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(120), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8447] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    STATE(427), 1,
      sym_where_expression,
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
  [8487] = 10,
    ACTIONS(333), 1,
      sym_keyword_in,
    ACTIONS(337), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      anon_sym_DASH,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(557), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(385), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8525] = 14,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      sym_keyword_count,
    ACTIONS(561), 1,
      anon_sym_BQUOTE,
    ACTIONS(563), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(301), 1,
      sym_identifier,
    STATE(330), 1,
      sym__count_function,
    STATE(515), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(395), 2,
      sym_field,
      sym_function_call,
    STATE(426), 2,
      sym__field_list,
      sym_literal,
  [8571] = 10,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      sym_keyword_in,
    ACTIONS(373), 1,
      anon_sym_PLUS,
    ACTIONS(375), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(403), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(377), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8609] = 12,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    STATE(140), 1,
      sym_predicate,
    STATE(634), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(220), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8651] = 12,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    STATE(107), 1,
      sym_predicate,
    STATE(423), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(204), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8693] = 6,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(517), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(515), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [8723] = 10,
    ACTIONS(425), 1,
      sym_keyword_in,
    ACTIONS(431), 1,
      anon_sym_PLUS,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      anon_sym_SLASH,
    ACTIONS(437), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(429), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(565), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(427), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8761] = 2,
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
  [8782] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
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
  [8819] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_BQUOTE,
    ACTIONS(579), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(24), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8856] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_BQUOTE,
    ACTIONS(579), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(49), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8893] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(22), 1,
      sym_predicate,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(207), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8932] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(21), 1,
      sym_predicate,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(207), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8971] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
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
  [9008] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_BQUOTE,
    ACTIONS(579), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(40), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9045] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(101), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9082] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_BQUOTE,
    ACTIONS(579), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(50), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9119] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(32), 1,
      sym_predicate,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(207), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9158] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(86), 1,
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
  [9195] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(139), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9232] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    STATE(133), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(204), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9271] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    ACTIONS(533), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(86), 1,
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
  [9308] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    STATE(108), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(214), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9347] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(41), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(134), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9384] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(21), 1,
      sym_predicate,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(210), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9423] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9460] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_BQUOTE,
    ACTIONS(579), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(53), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9497] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_BQUOTE,
    ACTIONS(579), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(51), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9534] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(41), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(111), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9571] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(23), 1,
      sym_predicate,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(210), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9610] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(86), 1,
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
  [9647] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(23), 1,
      sym_predicate,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(207), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9686] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(589), 14,
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
  [9707] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(86), 1,
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
  [9744] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(101), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9781] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(41), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(101), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9818] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(591), 1,
      anon_sym_BQUOTE,
    ACTIONS(593), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(74), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(177), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9855] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(122), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9892] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(109), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9929] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(142), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9966] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10003] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(164), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10040] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(124), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10077] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(47), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10114] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
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
  [10151] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
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
  [10188] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(41), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(135), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10225] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
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
  [10262] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(22), 1,
      sym_predicate,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(210), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10301] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(599), 14,
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
  [10322] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(126), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10359] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(46), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10396] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(45), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10433] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(127), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10470] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(101), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10507] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(123), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10544] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(41), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(115), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10581] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(41), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(116), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10618] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    ACTIONS(533), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(86), 1,
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
  [10655] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(110), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10692] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(44), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10729] = 10,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__number,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(30), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(24), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10766] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(601), 14,
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
  [10787] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(112), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10824] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(591), 1,
      anon_sym_BQUOTE,
    ACTIONS(593), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(74), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(169), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10861] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(591), 1,
      anon_sym_BQUOTE,
    ACTIONS(593), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(74), 1,
      sym_identifier,
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
  [10898] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(591), 1,
      anon_sym_BQUOTE,
    ACTIONS(593), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(74), 1,
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
  [10935] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    STATE(108), 1,
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
  [10974] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(591), 1,
      anon_sym_BQUOTE,
    ACTIONS(593), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(74), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(171), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11011] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(114), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11048] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    ACTIONS(533), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(86), 1,
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
  [11085] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(117), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11122] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    ACTIONS(533), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11159] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(32), 1,
      sym_predicate,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(210), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11198] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    ACTIONS(533), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(86), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(101), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11235] = 10,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(591), 1,
      anon_sym_BQUOTE,
    ACTIONS(593), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(74), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(142), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11272] = 11,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(36), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    STATE(165), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(220), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11311] = 10,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym__number,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    ACTIONS(533), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(86), 1,
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
  [11348] = 10,
    ACTIONS(605), 1,
      sym_keyword_primary,
    ACTIONS(607), 1,
      sym_keyword_not,
    ACTIONS(609), 1,
      sym_keyword_auto_increment,
    ACTIONS(611), 1,
      sym_keyword_default,
    STATE(451), 1,
      sym__primary_key,
    STATE(614), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(348), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(613), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11384] = 9,
    ACTIONS(615), 1,
      sym_keyword_set,
    ACTIONS(617), 1,
      sym_keyword_alter,
    ACTIONS(619), 1,
      sym_keyword_drop,
    ACTIONS(621), 1,
      sym_keyword_add,
    ACTIONS(623), 1,
      sym_keyword_rename,
    ACTIONS(625), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(635), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(753), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [11418] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(627), 13,
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
  [11438] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(629), 13,
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
  [11458] = 3,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(631), 12,
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
  [11480] = 9,
    ACTIONS(615), 1,
      sym_keyword_set,
    ACTIONS(617), 1,
      sym_keyword_alter,
    ACTIONS(619), 1,
      sym_keyword_drop,
    ACTIONS(621), 1,
      sym_keyword_add,
    ACTIONS(623), 1,
      sym_keyword_rename,
    ACTIONS(625), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(650), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(826), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [11514] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(635), 12,
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
  [11533] = 9,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(639), 1,
      anon_sym_DOT,
    STATE(68), 1,
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
  [11566] = 13,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(641), 1,
      sym_keyword_primary,
    ACTIONS(643), 1,
      sym_keyword_key,
    ACTIONS(645), 1,
      sym_keyword_constraint,
    STATE(5), 1,
      sym_identifier,
    STATE(641), 1,
      sym_constraint,
    STATE(683), 1,
      sym__primary_key,
    STATE(699), 1,
      sym__constraint_literal,
    STATE(702), 1,
      sym__primary_key_constraint,
    STATE(703), 1,
      sym__key_constraint,
    STATE(726), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11607] = 9,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    ACTIONS(649), 1,
      anon_sym_DOT,
    STATE(68), 1,
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
  [11640] = 6,
    ACTIONS(654), 1,
      sym_keyword_inner,
    ACTIONS(657), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(651), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(302), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(660), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11667] = 6,
    ACTIONS(665), 1,
      sym_keyword_inner,
    ACTIONS(668), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(662), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(660), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11694] = 3,
    ACTIONS(673), 1,
      aux_sym_keyword_varchar_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(671), 10,
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
  [11714] = 4,
    ACTIONS(677), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(679), 1,
      aux_sym_keyword_timestamp_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11736] = 8,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    ACTIONS(681), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(75), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11766] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(23), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [11786] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 5,
      anon_sym_LPAREN,
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
  [11806] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 5,
      anon_sym_LPAREN,
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
  [11826] = 8,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    ACTIONS(683), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(73), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [11856] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(19), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [11876] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(69), 1,
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
  [11903] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(687), 1,
      sym_keyword_as,
    STATE(369), 1,
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
  [11930] = 3,
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
  [11949] = 3,
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
  [11968] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(671), 10,
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
  [11985] = 9,
    ACTIONS(61), 1,
      sym_keyword_from,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(699), 1,
      sym_keyword_as,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(703), 1,
      anon_sym_DOT,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12016] = 3,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(705), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12035] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(709), 10,
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
  [12052] = 3,
    ACTIONS(713), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(711), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12071] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(715), 10,
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
  [12088] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(69), 1,
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
  [12115] = 3,
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
  [12134] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(719), 1,
      sym_keyword_as,
    STATE(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(721), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12161] = 3,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(723), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12180] = 3,
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
  [12199] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(729), 1,
      sym_keyword_as,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(727), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [12226] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(729), 1,
      sym_keyword_as,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(731), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12253] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(687), 1,
      sym_keyword_as,
    STATE(369), 1,
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
  [12280] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(719), 1,
      sym_keyword_as,
    STATE(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(717), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [12307] = 9,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(699), 1,
      sym_keyword_as,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    ACTIONS(735), 1,
      anon_sym_DOT,
    STATE(68), 1,
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
  [12338] = 8,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(737), 1,
      sym_keyword_as,
    ACTIONS(739), 1,
      anon_sym_DOT,
    STATE(263), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(453), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(455), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [12366] = 2,
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
  [12382] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(745), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(743), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [12400] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(749), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(747), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12418] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(751), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12434] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(749), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(747), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [12452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(753), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12468] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(745), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(743), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12486] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(755), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [12504] = 2,
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
  [12520] = 2,
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
  [12536] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
    ACTIONS(19), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [12554] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
    ACTIONS(23), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [12572] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(763), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12588] = 2,
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
  [12604] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(767), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12620] = 7,
    ACTIONS(605), 1,
      sym_keyword_primary,
    ACTIONS(769), 1,
      sym_keyword_auto_increment,
    STATE(430), 1,
      sym__primary_key,
    STATE(545), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(771), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12646] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(773), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12662] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(775), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12678] = 8,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(777), 1,
      sym_keyword_as,
    ACTIONS(779), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12706] = 8,
    ACTIONS(73), 1,
      sym_keyword_from,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(777), 1,
      sym_keyword_as,
    ACTIONS(781), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12734] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(783), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12750] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12766] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(755), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12784] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(787), 1,
      sym_keyword_as,
    STATE(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(475), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(477), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [12809] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(789), 1,
      sym_keyword_as,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12834] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(791), 1,
      sym_keyword_as,
    ACTIONS(793), 1,
      anon_sym_DOT,
    STATE(263), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(453), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [12859] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(795), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12874] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(685), 1,
      sym_keyword_from,
    ACTIONS(797), 1,
      sym_keyword_as,
    STATE(369), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12899] = 8,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(399), 1,
      sym_keyword_group_by,
    STATE(431), 1,
      sym_group_by,
    STATE(476), 1,
      sym_order_by,
    STATE(559), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12926] = 8,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(399), 1,
      sym_keyword_group_by,
    STATE(443), 1,
      sym_group_by,
    STATE(462), 1,
      sym_order_by,
    STATE(677), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12953] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(801), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12968] = 2,
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
  [12983] = 8,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(805), 1,
      sym_keyword_default,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    STATE(739), 1,
      sym_table_options,
    STATE(742), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(412), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13010] = 6,
    ACTIONS(605), 1,
      sym_keyword_primary,
    STATE(456), 1,
      sym__primary_key,
    STATE(593), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(809), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13033] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(727), 1,
      sym_keyword_from,
    ACTIONS(789), 1,
      sym_keyword_as,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13058] = 8,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(805), 1,
      sym_keyword_default,
    ACTIONS(811), 1,
      anon_sym_SEMI,
    STATE(742), 1,
      sym_identifier,
    STATE(799), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(412), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13085] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(813), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13100] = 2,
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
  [13115] = 8,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(551), 1,
      sym_table_reference,
    STATE(870), 1,
      sym__table_references,
    STATE(872), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(871), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [13142] = 6,
    ACTIONS(605), 1,
      sym_keyword_primary,
    STATE(430), 1,
      sym__primary_key,
    STATE(545), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(771), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13165] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(819), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13180] = 9,
    ACTIONS(821), 1,
      sym_keyword_table,
    ACTIONS(823), 1,
      sym_keyword_view,
    ACTIONS(825), 1,
      sym_keyword_materialized,
    ACTIONS(827), 1,
      sym_keyword_or,
    ACTIONS(829), 1,
      sym_keyword_temp,
    ACTIONS(831), 1,
      sym_keyword_temporary,
    STATE(707), 1,
      sym__or_replace,
    STATE(827), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13209] = 9,
    ACTIONS(605), 1,
      sym_keyword_primary,
    ACTIONS(833), 1,
      sym_keyword_key,
    ACTIONS(835), 1,
      sym_keyword_constraint,
    STATE(683), 1,
      sym__primary_key,
    STATE(695), 1,
      sym_constraint,
    STATE(699), 1,
      sym__constraint_literal,
    STATE(702), 1,
      sym__primary_key_constraint,
    STATE(703), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13238] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(837), 1,
      sym_keyword_as,
    STATE(69), 1,
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
  [13263] = 8,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_group_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(439), 1,
      sym_group_by,
    STATE(471), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13290] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(717), 1,
      sym_keyword_from,
    ACTIONS(839), 1,
      sym_keyword_as,
    STATE(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(721), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13315] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(841), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13330] = 8,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_group_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(441), 1,
      sym_group_by,
    STATE(462), 1,
      sym_order_by,
    STATE(677), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13357] = 8,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(399), 1,
      sym_keyword_group_by,
    STATE(454), 1,
      sym_group_by,
    STATE(471), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13384] = 7,
    ACTIONS(85), 1,
      sym_keyword_from,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(837), 1,
      sym_keyword_as,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13409] = 3,
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
  [13426] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(839), 1,
      sym_keyword_as,
    STATE(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13451] = 8,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(843), 1,
      sym_keyword_as,
    ACTIONS(845), 1,
      anon_sym_DOT,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13478] = 8,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_group_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(440), 1,
      sym_group_by,
    STATE(476), 1,
      sym_order_by,
    STATE(559), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13505] = 3,
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
  [13522] = 8,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(805), 1,
      sym_keyword_default,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    STATE(742), 1,
      sym_identifier,
    STATE(759), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(412), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13549] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(797), 1,
      sym_keyword_as,
    STATE(369), 1,
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
  [13574] = 4,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13592] = 4,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(852), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13610] = 7,
    ACTIONS(856), 1,
      sym_keyword_default,
    ACTIONS(859), 1,
      anon_sym_SEMI,
    ACTIONS(861), 1,
      anon_sym_BQUOTE,
    ACTIONS(864), 1,
      sym__identifier,
    STATE(742), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(392), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13634] = 4,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(852), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13652] = 4,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13670] = 4,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(872), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13688] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(745), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(743), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13704] = 6,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(515), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(517), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [13726] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(749), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(747), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13742] = 7,
    ACTIONS(271), 1,
      sym_keyword_count,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(385), 1,
      sym_identifier,
    STATE(433), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(364), 2,
      sym_field,
      sym_function_call,
  [13766] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(755), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13782] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(755), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(757), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [13798] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(19), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [13814] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(23), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [13830] = 7,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(874), 1,
      sym_keyword_as,
    ACTIONS(876), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13854] = 6,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    STATE(246), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(505), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(507), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [13876] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    STATE(36), 1,
      sym__literal_string,
    STATE(660), 1,
      sym_literal,
    STATE(661), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13902] = 5,
    ACTIONS(615), 1,
      sym_keyword_set,
    ACTIONS(623), 1,
      sym_keyword_rename,
    ACTIONS(625), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(770), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [13922] = 7,
    ACTIONS(535), 1,
      sym_keyword_count,
    ACTIONS(539), 1,
      anon_sym_BQUOTE,
    ACTIONS(541), 1,
      sym__identifier,
    STATE(299), 1,
      sym_identifier,
    STATE(324), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(364), 2,
      sym_field,
      sym_function_call,
  [13946] = 7,
    ACTIONS(559), 1,
      sym_keyword_count,
    ACTIONS(561), 1,
      anon_sym_BQUOTE,
    ACTIONS(563), 1,
      sym__identifier,
    STATE(301), 1,
      sym_identifier,
    STATE(330), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(364), 2,
      sym_field,
      sym_function_call,
  [13970] = 5,
    ACTIONS(615), 1,
      sym_keyword_set,
    ACTIONS(623), 1,
      sym_keyword_rename,
    ACTIONS(625), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(832), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [13990] = 6,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(878), 1,
      sym_keyword_as,
    STATE(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(475), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [14012] = 7,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(805), 1,
      sym_keyword_default,
    ACTIONS(880), 1,
      anon_sym_SEMI,
    STATE(742), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(392), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14036] = 7,
    ACTIONS(495), 1,
      sym_keyword_count,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    STATE(331), 1,
      sym_identifier,
    STATE(384), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(364), 2,
      sym_field,
      sym_function_call,
  [14060] = 7,
    ACTIONS(483), 1,
      sym_keyword_count,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(317), 1,
      sym_identifier,
    STATE(378), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(364), 2,
      sym_field,
      sym_function_call,
  [14084] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(745), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [14100] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(747), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(749), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [14116] = 8,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(882), 1,
      sym_keyword_where,
    ACTIONS(884), 1,
      anon_sym_SEMI,
    STATE(481), 1,
      sym_where,
    STATE(542), 1,
      sym_order_by,
    STATE(931), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14142] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    STATE(36), 1,
      sym__literal_string,
    STATE(666), 1,
      sym_literal,
    STATE(667), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14168] = 4,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(872), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14186] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(886), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14200] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(888), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14214] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    STATE(36), 1,
      sym__literal_string,
    STATE(621), 1,
      sym_literal,
    STATE(622), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14240] = 8,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(882), 1,
      sym_keyword_where,
    ACTIONS(890), 1,
      anon_sym_SEMI,
    STATE(472), 1,
      sym_where,
    STATE(653), 1,
      sym_order_by,
    STATE(840), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14266] = 3,
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
  [14282] = 3,
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
  [14298] = 4,
    STATE(535), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(892), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14316] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(894), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14329] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(896), 1,
      sym_keyword_if,
    STATE(296), 1,
      sym_identifier,
    STATE(498), 1,
      sym__if_not_exists,
    STATE(746), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14352] = 6,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    STATE(471), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14373] = 4,
    STATE(593), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(809), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14390] = 6,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    STATE(462), 1,
      sym_order_by,
    STATE(677), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14411] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(898), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14424] = 6,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(900), 1,
      sym_keyword_as,
    STATE(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(721), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14445] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    STATE(246), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(505), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [14464] = 4,
    ACTIONS(904), 1,
      sym_keyword_having,
    STATE(484), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(902), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14481] = 6,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(471), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14502] = 6,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(906), 1,
      sym_keyword_as,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14523] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(515), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [14542] = 6,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(476), 1,
      sym_order_by,
    STATE(559), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14563] = 6,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(462), 1,
      sym_order_by,
    STATE(677), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14584] = 6,
    ACTIONS(361), 1,
      sym_keyword_order_by,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(482), 1,
      sym_order_by,
    STATE(549), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(908), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14605] = 7,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(896), 1,
      sym_keyword_if,
    STATE(518), 1,
      sym__if_not_exists,
    STATE(670), 1,
      sym_identifier,
    STATE(727), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14628] = 6,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    STATE(482), 1,
      sym_order_by,
    STATE(549), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(908), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14649] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(896), 1,
      sym_keyword_if,
    STATE(296), 1,
      sym_identifier,
    STATE(517), 1,
      sym__if_not_exists,
    STATE(783), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14672] = 4,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [14689] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(913), 1,
      sym_keyword_if,
    STATE(296), 1,
      sym_identifier,
    STATE(297), 1,
      sym_table_reference,
    STATE(516), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14712] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(913), 1,
      sym_keyword_if,
    STATE(296), 1,
      sym_identifier,
    STATE(410), 1,
      sym_table_reference,
    STATE(514), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14735] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(913), 1,
      sym_keyword_if,
    STATE(296), 1,
      sym_identifier,
    STATE(509), 1,
      sym__if_exists,
    STATE(680), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14758] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(913), 1,
      sym_keyword_if,
    STATE(296), 1,
      sym_identifier,
    STATE(506), 1,
      sym__if_exists,
    STATE(715), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14781] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(896), 1,
      sym_keyword_if,
    STATE(296), 1,
      sym_identifier,
    STATE(507), 1,
      sym__if_not_exists,
    STATE(749), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14804] = 4,
    STATE(545), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(771), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14821] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(915), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [14838] = 6,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(917), 1,
      sym_keyword_as,
    STATE(369), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14859] = 6,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    STATE(476), 1,
      sym_order_by,
    STATE(559), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14880] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(896), 1,
      sym_keyword_if,
    STATE(5), 1,
      sym_identifier,
    STATE(529), 1,
      sym__if_not_exists,
    STATE(705), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14903] = 4,
    STATE(637), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(919), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14920] = 4,
    ACTIONS(921), 1,
      sym_keyword_having,
    STATE(484), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(902), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14937] = 5,
    ACTIONS(617), 1,
      sym_keyword_alter,
    ACTIONS(619), 1,
      sym_keyword_drop,
    ACTIONS(621), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(704), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [14956] = 6,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(923), 1,
      sym_keyword_as,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14977] = 7,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(896), 1,
      sym_keyword_if,
    STATE(497), 1,
      sym__if_not_exists,
    STATE(670), 1,
      sym_identifier,
    STATE(733), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15000] = 7,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(896), 1,
      sym_keyword_if,
    STATE(296), 1,
      sym_identifier,
    STATE(494), 1,
      sym__if_not_exists,
    STATE(750), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15023] = 4,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(549), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(908), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15039] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(747), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(749), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [15053] = 4,
    ACTIONS(925), 1,
      sym_keyword_offset,
    STATE(562), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(927), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15069] = 6,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    ACTIONS(913), 1,
      sym_keyword_if,
    STATE(580), 1,
      sym__if_exists,
    STATE(708), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15089] = 4,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15105] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(852), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15121] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(745), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [15135] = 4,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(470), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(852), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15151] = 4,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(470), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15167] = 4,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(559), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15183] = 6,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    STATE(597), 1,
      sym_order_by,
    STATE(797), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15203] = 6,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    STATE(36), 1,
      sym__literal_string,
    STATE(666), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15223] = 6,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    STATE(36), 1,
      sym__literal_string,
    STATE(698), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15243] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(467), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(872), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15259] = 4,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(677), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15275] = 4,
    STATE(730), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(941), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15291] = 6,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(592), 1,
      sym_table_reference,
    STATE(800), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15311] = 6,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(943), 1,
      sym_keyword_column,
    ACTIONS(945), 1,
      sym_keyword_to,
    STATE(764), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15331] = 4,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(872), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15347] = 6,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_order_by,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    STATE(611), 1,
      sym_order_by,
    STATE(777), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15367] = 4,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(608), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(949), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15383] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(951), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15395] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(953), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15407] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(755), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(757), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [15421] = 6,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    STATE(36), 1,
      sym__literal_string,
    STATE(464), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15441] = 6,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym__number,
    STATE(36), 1,
      sym__literal_string,
    STATE(671), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15461] = 4,
    ACTIONS(365), 1,
      sym_keyword_limit,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15477] = 5,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__identifier,
    STATE(477), 1,
      sym_identifier,
    STATE(550), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15494] = 5,
    ACTIONS(957), 1,
      anon_sym_BQUOTE,
    ACTIONS(959), 1,
      sym__identifier,
    STATE(358), 1,
      sym_identifier,
    STATE(513), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15511] = 5,
    ACTIONS(957), 1,
      anon_sym_BQUOTE,
    ACTIONS(959), 1,
      sym__identifier,
    STATE(358), 1,
      sym_identifier,
    STATE(539), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15528] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(493), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(915), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [15543] = 4,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(493), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [15558] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(752), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15575] = 5,
    ACTIONS(964), 1,
      anon_sym_BQUOTE,
    ACTIONS(966), 1,
      sym__identifier,
    STATE(145), 1,
      sym_table_expression,
    STATE(181), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15592] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(968), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(970), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15605] = 5,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(670), 1,
      sym_identifier,
    STATE(732), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15622] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(749), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15639] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(502), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15656] = 5,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(657), 1,
      sym__column_without_order,
    STATE(693), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15673] = 4,
    ACTIONS(974), 1,
      sym_keyword_on,
    STATE(917), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15688] = 5,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    ACTIONS(978), 1,
      anon_sym_COMMA,
    STATE(528), 1,
      aux_sym_column_definitions_repeat1,
    STATE(802), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15705] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(980), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(982), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15718] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [15731] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [15744] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(701), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15761] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(804), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15778] = 5,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__identifier,
    STATE(477), 1,
      sym_identifier,
    STATE(724), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15795] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(706), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15812] = 5,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(670), 1,
      sym_identifier,
    STATE(835), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15829] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(726), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15846] = 5,
    ACTIONS(957), 1,
      anon_sym_BQUOTE,
    ACTIONS(959), 1,
      sym__identifier,
    STATE(358), 1,
      sym_identifier,
    STATE(533), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15863] = 4,
    ACTIONS(984), 1,
      sym_keyword_on,
    STATE(843), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15878] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(407), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15895] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(986), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15906] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(293), 1,
      sym_table_reference,
    STATE(296), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15923] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(750), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15940] = 5,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(670), 1,
      sym_identifier,
    STATE(733), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15957] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(988), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(990), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15970] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(296), 1,
      sym_identifier,
    STATE(711), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15987] = 4,
    ACTIONS(992), 1,
      sym_keyword_from,
    STATE(876), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16002] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(994), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16013] = 5,
    ACTIONS(996), 1,
      anon_sym_BQUOTE,
    ACTIONS(998), 1,
      sym__identifier,
    STATE(332), 1,
      sym_identifier,
    STATE(417), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16030] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1000), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16041] = 5,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(692), 1,
      sym__column_without_order,
    STATE(693), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16058] = 5,
    ACTIONS(1002), 1,
      anon_sym_BQUOTE,
    ACTIONS(1004), 1,
      sym__identifier,
    STATE(157), 1,
      sym_table_expression,
    STATE(180), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16075] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1006), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1008), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16088] = 5,
    ACTIONS(978), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(568), 1,
      aux_sym_column_definitions_repeat1,
    STATE(844), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16105] = 5,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(714), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16122] = 4,
    ACTIONS(1012), 1,
      sym_keyword_from,
    STATE(710), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1014), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16137] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1016), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16148] = 5,
    ACTIONS(957), 1,
      anon_sym_BQUOTE,
    ACTIONS(959), 1,
      sym__identifier,
    STATE(358), 1,
      sym_identifier,
    STATE(501), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16165] = 4,
    ACTIONS(1018), 1,
      sym_keyword_on,
    STATE(869), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16180] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1020), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16191] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1022), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16202] = 4,
    ACTIONS(1024), 1,
      sym_keyword_on,
    STATE(919), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16217] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1026), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1028), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16230] = 4,
    ACTIONS(1030), 1,
      sym_keyword_on,
    STATE(921), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16245] = 4,
    ACTIONS(1032), 1,
      sym_keyword_on,
    STATE(922), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16260] = 5,
    ACTIONS(957), 1,
      anon_sym_BQUOTE,
    ACTIONS(959), 1,
      sym__identifier,
    STATE(358), 1,
      sym_identifier,
    STATE(536), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16277] = 5,
    ACTIONS(957), 1,
      anon_sym_BQUOTE,
    ACTIONS(959), 1,
      sym__identifier,
    STATE(358), 1,
      sym_identifier,
    STATE(538), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16294] = 4,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    STATE(777), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16308] = 4,
    ACTIONS(1002), 1,
      anon_sym_BQUOTE,
    ACTIONS(1004), 1,
      sym__identifier,
    STATE(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16322] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(435), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16336] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(809), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16346] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(700), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16360] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(694), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16374] = 4,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
    ACTIONS(1034), 1,
      sym_keyword_from,
    STATE(710), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16388] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(949), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16398] = 4,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    STATE(610), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16412] = 4,
    ACTIONS(1040), 1,
      sym_keyword_set,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(594), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16426] = 4,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    STATE(552), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16440] = 4,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16454] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16468] = 4,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(555), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16482] = 4,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16496] = 4,
    ACTIONS(577), 1,
      anon_sym_BQUOTE,
    ACTIONS(579), 1,
      sym__identifier,
    STATE(15), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16510] = 4,
    ACTIONS(577), 1,
      anon_sym_BQUOTE,
    ACTIONS(579), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16524] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16534] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(298), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16548] = 4,
    ACTIONS(561), 1,
      anon_sym_BQUOTE,
    ACTIONS(1054), 1,
      sym__identifier,
    STATE(322), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16562] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1056), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16572] = 4,
    ACTIONS(561), 1,
      anon_sym_BQUOTE,
    ACTIONS(1054), 1,
      sym__identifier,
    STATE(310), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16586] = 4,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16600] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16614] = 4,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16628] = 4,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16642] = 4,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    STATE(568), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16656] = 4,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16670] = 4,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16684] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(1068), 1,
      sym__identifier,
    STATE(376), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16698] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(1068), 1,
      sym__identifier,
    STATE(351), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16712] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(823), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16726] = 4,
    ACTIONS(591), 1,
      anon_sym_BQUOTE,
    ACTIONS(593), 1,
      sym__identifier,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16740] = 4,
    ACTIONS(591), 1,
      anon_sym_BQUOTE,
    ACTIONS(593), 1,
      sym__identifier,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16754] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16768] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16782] = 4,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    ACTIONS(533), 1,
      sym__identifier,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16796] = 4,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    ACTIONS(533), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16810] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(709), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16824] = 4,
    ACTIONS(1070), 1,
      sym_keyword_set,
    ACTIONS(1072), 1,
      sym_keyword_drop,
    ACTIONS(1074), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16838] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(363), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16852] = 4,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16866] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16880] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(548), 1,
      sym_select,
    STATE(756), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16894] = 4,
    ACTIONS(1080), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1082), 1,
      anon_sym_SEMI,
    STATE(716), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16908] = 4,
    ACTIONS(1084), 1,
      sym_keyword_select,
    STATE(530), 1,
      sym_select,
    STATE(615), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16922] = 4,
    ACTIONS(539), 1,
      anon_sym_BQUOTE,
    ACTIONS(1086), 1,
      sym__identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16936] = 4,
    ACTIONS(1088), 1,
      anon_sym_BQUOTE,
    ACTIONS(1090), 1,
      sym__identifier,
    STATE(519), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16950] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16964] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(359), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16978] = 4,
    ACTIONS(1092), 1,
      sym_keyword_values,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
    STATE(754), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16992] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(919), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17002] = 4,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    ACTIONS(1096), 1,
      sym_keyword_set,
    STATE(630), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17016] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(298), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17030] = 4,
    ACTIONS(539), 1,
      anon_sym_BQUOTE,
    ACTIONS(1086), 1,
      sym__identifier,
    STATE(306), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17044] = 4,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(1098), 1,
      anon_sym_SEMI,
    STATE(893), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17058] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1100), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17072] = 4,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(642), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17086] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1100), 1,
      sym__identifier,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17100] = 4,
    ACTIONS(964), 1,
      anon_sym_BQUOTE,
    ACTIONS(966), 1,
      sym__identifier,
    STATE(185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17114] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(868), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17128] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(359), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17142] = 4,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    ACTIONS(1108), 1,
      anon_sym_COMMA,
    STATE(604), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17156] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1100), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17170] = 4,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17184] = 4,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17198] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1113), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17208] = 4,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17222] = 4,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17236] = 4,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(1117), 1,
      anon_sym_SEMI,
    STATE(850), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17250] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17260] = 4,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(1119), 1,
      sym__identifier,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17274] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17284] = 4,
    ACTIONS(1080), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1121), 1,
      anon_sym_SEMI,
    STATE(687), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17298] = 4,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17312] = 4,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(1125), 1,
      sym__identifier,
    STATE(437), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17326] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17340] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(373), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17354] = 4,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(1119), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17368] = 4,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17382] = 4,
    ACTIONS(1034), 1,
      sym_keyword_from,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(773), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17396] = 4,
    ACTIONS(957), 1,
      anon_sym_BQUOTE,
    ACTIONS(959), 1,
      sym__identifier,
    STATE(411), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17410] = 4,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17424] = 4,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(1119), 1,
      sym__identifier,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17438] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(838), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17452] = 4,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(664), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17466] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(879), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17480] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(834), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17494] = 4,
    ACTIONS(1137), 1,
      sym_keyword_set,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    STATE(630), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17508] = 4,
    ACTIONS(1084), 1,
      sym_keyword_select,
    STATE(530), 1,
      sym_select,
    STATE(678), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17522] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(581), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17536] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(816), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17550] = 4,
    ACTIONS(1142), 1,
      sym_keyword_where,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
    STATE(837), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17564] = 4,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    STATE(583), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17578] = 4,
    ACTIONS(1146), 1,
      sym_keyword_not,
    ACTIONS(1148), 1,
      sym_keyword_default,
    ACTIONS(1150), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17592] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1152), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17602] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(548), 1,
      sym_select,
    STATE(747), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17616] = 4,
    ACTIONS(1084), 1,
      sym_keyword_select,
    STATE(530), 1,
      sym_select,
    STATE(586), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17630] = 4,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17644] = 4,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    STATE(647), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17658] = 4,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    STATE(642), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17672] = 4,
    ACTIONS(281), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 1,
      sym__identifier,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17686] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(548), 1,
      sym_select,
    STATE(926), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17700] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17714] = 4,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(646), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17728] = 4,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17742] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(920), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17756] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__identifier,
    STATE(359), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17770] = 4,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
    STATE(624), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17784] = 4,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17798] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17812] = 4,
    ACTIONS(365), 1,
      sym_keyword_limit,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    STATE(797), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17826] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__identifier,
    STATE(373), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17840] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(457), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17854] = 4,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(659), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17868] = 4,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17882] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(363), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17896] = 4,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    STATE(659), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17910] = 4,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17924] = 4,
    ACTIONS(1034), 1,
      sym_keyword_from,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(846), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17938] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(382), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17952] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17966] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17980] = 4,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(373), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17994] = 4,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18008] = 4,
    ACTIONS(1034), 1,
      sym_keyword_from,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    STATE(782), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18022] = 4,
    ACTIONS(996), 1,
      anon_sym_BQUOTE,
    ACTIONS(998), 1,
      sym__identifier,
    STATE(356), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18036] = 4,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(656), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18050] = 3,
    ACTIONS(1191), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(631), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [18062] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1193), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18072] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(972), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18086] = 4,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(1125), 1,
      sym__identifier,
    STATE(404), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18100] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18110] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__identifier,
    STATE(363), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18124] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18138] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(908), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18148] = 4,
    ACTIONS(1080), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1195), 1,
      anon_sym_SEMI,
    STATE(722), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18162] = 3,
    ACTIONS(1146), 1,
      sym_keyword_not,
    ACTIONS(1197), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18173] = 3,
    ACTIONS(1199), 1,
      sym_keyword_cascade,
    ACTIONS(1201), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18184] = 3,
    ACTIONS(1203), 1,
      sym_keyword_outer,
    ACTIONS(1205), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18195] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1207), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18204] = 3,
    ACTIONS(1209), 1,
      anon_sym_LPAREN,
    STATE(712), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18215] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1211), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18224] = 3,
    ACTIONS(1213), 1,
      sym_keyword_table,
    ACTIONS(1215), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18235] = 3,
    ACTIONS(1217), 1,
      sym_keyword_table,
    ACTIONS(1219), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18246] = 3,
    ACTIONS(1221), 1,
      sym_keyword_no,
    ACTIONS(1223), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18257] = 3,
    ACTIONS(1225), 1,
      sym_keyword_from,
    STATE(812), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18268] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1227), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18277] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1229), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18286] = 3,
    ACTIONS(1209), 1,
      anon_sym_LPAREN,
    STATE(719), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18297] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1231), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18306] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18315] = 3,
    ACTIONS(1209), 1,
      anon_sym_LPAREN,
    STATE(690), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18326] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1044), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18335] = 3,
    ACTIONS(1235), 1,
      sym_keyword_outer,
    ACTIONS(1237), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18346] = 3,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
    STATE(796), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18357] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1049), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18366] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1241), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18375] = 3,
    ACTIONS(605), 1,
      sym_keyword_primary,
    STATE(691), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18386] = 3,
    ACTIONS(1243), 1,
      sym_keyword_cascade,
    ACTIONS(1245), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18397] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1247), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18406] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1241), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18415] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1066), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18424] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1249), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18433] = 3,
    ACTIONS(1251), 1,
      sym_keyword_cascade,
    ACTIONS(1253), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18444] = 3,
    ACTIONS(1255), 1,
      sym_keyword_view,
    ACTIONS(1257), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18455] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1259), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18464] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1261), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18473] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1263), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [18482] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1137), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [18491] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1265), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18500] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1267), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18509] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1269), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18518] = 3,
    ACTIONS(1271), 1,
      sym_keyword_cascade,
    ACTIONS(1273), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18529] = 3,
    ACTIONS(1275), 1,
      sym_keyword_no,
    ACTIONS(1277), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18540] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1279), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18549] = 3,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
    STATE(878), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18560] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1281), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18569] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18578] = 3,
    ACTIONS(1283), 1,
      sym_keyword_for,
    ACTIONS(1285), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18589] = 3,
    ACTIONS(1287), 1,
      sym_keyword_no,
    ACTIONS(1289), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18600] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1291), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18609] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1163), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18618] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18627] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1058), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18636] = 3,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18647] = 3,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18658] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1301), 2,
      sym_keyword_no,
      sym_keyword_data,
  [18667] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1303), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18676] = 3,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18687] = 3,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    STATE(388), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18698] = 3,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    STATE(368), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18709] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1309), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [18718] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1311), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18727] = 2,
    ACTIONS(1313), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18735] = 2,
    ACTIONS(1315), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18743] = 2,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18751] = 2,
    ACTIONS(811), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18759] = 2,
    ACTIONS(1319), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18767] = 2,
    ACTIONS(1321), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18775] = 2,
    ACTIONS(1323), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18783] = 2,
    ACTIONS(1325), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18791] = 2,
    ACTIONS(1327), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18799] = 2,
    ACTIONS(1329), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18807] = 2,
    ACTIONS(1331), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18815] = 2,
    ACTIONS(1333), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18823] = 2,
    ACTIONS(1335), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18831] = 2,
    ACTIONS(1337), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18839] = 2,
    ACTIONS(1339), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18847] = 2,
    ACTIONS(1341), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18855] = 2,
    ACTIONS(1343), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18863] = 2,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18871] = 2,
    ACTIONS(1345), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18879] = 2,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18887] = 2,
    ACTIONS(1349), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18895] = 2,
    ACTIONS(1351), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18903] = 2,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18911] = 2,
    ACTIONS(1355), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18919] = 2,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18927] = 2,
    ACTIONS(1359), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18935] = 2,
    ACTIONS(1359), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18943] = 2,
    ACTIONS(1361), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18951] = 2,
    ACTIONS(1363), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18959] = 2,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18967] = 2,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18975] = 2,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18983] = 2,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18991] = 2,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18999] = 2,
    ACTIONS(1375), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19007] = 2,
    ACTIONS(1377), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19015] = 2,
    ACTIONS(1379), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19023] = 2,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19031] = 2,
    ACTIONS(1383), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19039] = 2,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19047] = 2,
    ACTIONS(1387), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19055] = 2,
    ACTIONS(1117), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19063] = 2,
    ACTIONS(1389), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19071] = 2,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19079] = 2,
    ACTIONS(1393), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19087] = 2,
    ACTIONS(1395), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19095] = 2,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19103] = 2,
    ACTIONS(1399), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19111] = 2,
    ACTIONS(1401), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19119] = 2,
    ACTIONS(1403), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19127] = 2,
    ACTIONS(1405), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19135] = 2,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19143] = 2,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19151] = 2,
    ACTIONS(1411), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19159] = 2,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19167] = 2,
    ACTIONS(1415), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19175] = 2,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19183] = 2,
    ACTIONS(1419), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19191] = 2,
    ACTIONS(1289), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19199] = 2,
    ACTIONS(1421), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19207] = 2,
    ACTIONS(1423), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19215] = 2,
    ACTIONS(1098), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19223] = 2,
    ACTIONS(1425), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19231] = 2,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19239] = 2,
    ACTIONS(1427), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19247] = 2,
    ACTIONS(1429), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19255] = 2,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19263] = 2,
    ACTIONS(1431), 1,
      aux_sym_double_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19271] = 2,
    ACTIONS(1433), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19279] = 2,
    ACTIONS(1435), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19287] = 2,
    ACTIONS(1437), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19295] = 2,
    ACTIONS(1313), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19303] = 2,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19311] = 2,
    ACTIONS(1441), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19319] = 2,
    ACTIONS(1443), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19327] = 2,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19335] = 2,
    ACTIONS(1447), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19343] = 2,
    ACTIONS(1449), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19351] = 2,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19359] = 2,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19367] = 2,
    ACTIONS(1455), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19375] = 2,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19383] = 2,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19391] = 2,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19399] = 2,
    ACTIONS(1463), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19407] = 2,
    ACTIONS(1465), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19415] = 2,
    ACTIONS(1467), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19423] = 2,
    ACTIONS(1469), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19431] = 2,
    ACTIONS(1471), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19439] = 2,
    ACTIONS(1195), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19447] = 2,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19455] = 2,
    ACTIONS(1473), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19463] = 2,
    ACTIONS(1475), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19471] = 2,
    ACTIONS(1477), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19479] = 2,
    ACTIONS(1479), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19487] = 2,
    ACTIONS(1481), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19495] = 2,
    ACTIONS(1483), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19503] = 2,
    ACTIONS(1485), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19511] = 2,
    ACTIONS(1487), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19519] = 2,
    ACTIONS(1489), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19527] = 2,
    ACTIONS(1491), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19535] = 2,
    ACTIONS(1493), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19543] = 2,
    ACTIONS(1495), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19551] = 2,
    ACTIONS(1497), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19559] = 2,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19567] = 2,
    ACTIONS(1499), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19575] = 2,
    ACTIONS(1501), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19583] = 2,
    ACTIONS(1018), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19591] = 2,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19599] = 2,
    ACTIONS(1505), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19607] = 2,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19615] = 2,
    ACTIONS(1253), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19623] = 2,
    ACTIONS(1509), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19631] = 2,
    ACTIONS(1511), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19639] = 2,
    ACTIONS(1513), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19647] = 2,
    ACTIONS(1515), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19655] = 2,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19663] = 2,
    ACTIONS(1245), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19671] = 2,
    ACTIONS(1519), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19679] = 2,
    ACTIONS(1521), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19687] = 2,
    ACTIONS(1523), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19695] = 2,
    ACTIONS(1525), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19703] = 2,
    ACTIONS(1527), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19711] = 2,
    ACTIONS(1529), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19719] = 2,
    ACTIONS(1531), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19727] = 2,
    ACTIONS(1533), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19735] = 2,
    ACTIONS(1535), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19743] = 2,
    ACTIONS(1537), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19751] = 2,
    ACTIONS(1223), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19759] = 2,
    ACTIONS(1541), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1539), 2,
      sym_comment,
      sym_marginalia,
  [19767] = 2,
    ACTIONS(1543), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1539), 2,
      sym_comment,
      sym_marginalia,
  [19775] = 2,
    ACTIONS(1545), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19783] = 2,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19791] = 2,
    ACTIONS(974), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19799] = 2,
    ACTIONS(1549), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19807] = 2,
    ACTIONS(1551), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19815] = 2,
    ACTIONS(1553), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19823] = 2,
    ACTIONS(1237), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19831] = 2,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19839] = 2,
    ACTIONS(1557), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19847] = 2,
    ACTIONS(1559), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19855] = 2,
    ACTIONS(1561), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19863] = 2,
    ACTIONS(1563), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19871] = 2,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19879] = 2,
    ACTIONS(1567), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1539), 2,
      sym_comment,
      sym_marginalia,
  [19887] = 2,
    ACTIONS(1569), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1539), 2,
      sym_comment,
      sym_marginalia,
  [19895] = 2,
    ACTIONS(1571), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19903] = 2,
    ACTIONS(1573), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19911] = 2,
    ACTIONS(1575), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19919] = 2,
    ACTIONS(1577), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1539), 2,
      sym_comment,
      sym_marginalia,
  [19927] = 2,
    ACTIONS(1579), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1539), 2,
      sym_comment,
      sym_marginalia,
  [19935] = 2,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19943] = 2,
    ACTIONS(1583), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19951] = 2,
    ACTIONS(1585), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19959] = 2,
    ACTIONS(1587), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19967] = 2,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19975] = 2,
    ACTIONS(1591), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19983] = 2,
    ACTIONS(1593), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19991] = 2,
    ACTIONS(1595), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19999] = 2,
    ACTIONS(1597), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20007] = 2,
    ACTIONS(1599), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20015] = 2,
    ACTIONS(1601), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20023] = 2,
    ACTIONS(1603), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20031] = 2,
    ACTIONS(1605), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20039] = 2,
    ACTIONS(1607), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20047] = 2,
    ACTIONS(1609), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20055] = 2,
    ACTIONS(1611), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20063] = 2,
    ACTIONS(1613), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20071] = 2,
    ACTIONS(1615), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20079] = 2,
    ACTIONS(1617), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20087] = 2,
    ACTIONS(1619), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20095] = 2,
    ACTIONS(1621), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20103] = 2,
    ACTIONS(1623), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20111] = 2,
    ACTIONS(1625), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20119] = 2,
    ACTIONS(1627), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20127] = 2,
    ACTIONS(1629), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20135] = 2,
    ACTIONS(1631), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20143] = 2,
    ACTIONS(1633), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20151] = 2,
    ACTIONS(1635), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20159] = 2,
    ACTIONS(1637), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20167] = 2,
    ACTIONS(1639), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20175] = 2,
    ACTIONS(1641), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20183] = 2,
    ACTIONS(1643), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20191] = 2,
    ACTIONS(1030), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20199] = 2,
    ACTIONS(1645), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20207] = 2,
    ACTIONS(1032), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20215] = 2,
    ACTIONS(1647), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20223] = 2,
    ACTIONS(1649), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20231] = 2,
    ACTIONS(1651), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20239] = 2,
    ACTIONS(1653), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20247] = 2,
    ACTIONS(1655), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20255] = 2,
    ACTIONS(1657), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20263] = 2,
    ACTIONS(1659), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20271] = 2,
    ACTIONS(1661), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20279] = 2,
    ACTIONS(1659), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20287] = 2,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20295] = 2,
    ACTIONS(1663), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20303] = 2,
    ACTIONS(1665), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20311] = 2,
    ACTIONS(1667), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20319] = 2,
    ACTIONS(1205), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20327] = 2,
    ACTIONS(1669), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static const uint32_t ts_small_parse_table_map[] = {
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
  [SMALL_STATE(12)] = 606,
  [SMALL_STATE(13)] = 644,
  [SMALL_STATE(14)] = 682,
  [SMALL_STATE(15)] = 720,
  [SMALL_STATE(16)] = 766,
  [SMALL_STATE(17)] = 812,
  [SMALL_STATE(18)] = 847,
  [SMALL_STATE(19)] = 882,
  [SMALL_STATE(20)] = 917,
  [SMALL_STATE(21)] = 952,
  [SMALL_STATE(22)] = 989,
  [SMALL_STATE(23)] = 1026,
  [SMALL_STATE(24)] = 1063,
  [SMALL_STATE(25)] = 1098,
  [SMALL_STATE(26)] = 1133,
  [SMALL_STATE(27)] = 1168,
  [SMALL_STATE(28)] = 1203,
  [SMALL_STATE(29)] = 1238,
  [SMALL_STATE(30)] = 1273,
  [SMALL_STATE(31)] = 1308,
  [SMALL_STATE(32)] = 1343,
  [SMALL_STATE(33)] = 1380,
  [SMALL_STATE(34)] = 1415,
  [SMALL_STATE(35)] = 1450,
  [SMALL_STATE(36)] = 1485,
  [SMALL_STATE(37)] = 1519,
  [SMALL_STATE(38)] = 1563,
  [SMALL_STATE(39)] = 1607,
  [SMALL_STATE(40)] = 1651,
  [SMALL_STATE(41)] = 1687,
  [SMALL_STATE(42)] = 1731,
  [SMALL_STATE(43)] = 1775,
  [SMALL_STATE(44)] = 1819,
  [SMALL_STATE(45)] = 1859,
  [SMALL_STATE(46)] = 1895,
  [SMALL_STATE(47)] = 1941,
  [SMALL_STATE(48)] = 1991,
  [SMALL_STATE(49)] = 2035,
  [SMALL_STATE(50)] = 2075,
  [SMALL_STATE(51)] = 2121,
  [SMALL_STATE(52)] = 2165,
  [SMALL_STATE(53)] = 2199,
  [SMALL_STATE(54)] = 2249,
  [SMALL_STATE(55)] = 2282,
  [SMALL_STATE(56)] = 2325,
  [SMALL_STATE(57)] = 2368,
  [SMALL_STATE(58)] = 2411,
  [SMALL_STATE(59)] = 2444,
  [SMALL_STATE(60)] = 2477,
  [SMALL_STATE(61)] = 2510,
  [SMALL_STATE(62)] = 2543,
  [SMALL_STATE(63)] = 2576,
  [SMALL_STATE(64)] = 2609,
  [SMALL_STATE(65)] = 2650,
  [SMALL_STATE(66)] = 2683,
  [SMALL_STATE(67)] = 2726,
  [SMALL_STATE(68)] = 2759,
  [SMALL_STATE(69)] = 2792,
  [SMALL_STATE(70)] = 2825,
  [SMALL_STATE(71)] = 2866,
  [SMALL_STATE(72)] = 2907,
  [SMALL_STATE(73)] = 2940,
  [SMALL_STATE(74)] = 2972,
  [SMALL_STATE(75)] = 3014,
  [SMALL_STATE(76)] = 3054,
  [SMALL_STATE(77)] = 3086,
  [SMALL_STATE(78)] = 3118,
  [SMALL_STATE(79)] = 3150,
  [SMALL_STATE(80)] = 3182,
  [SMALL_STATE(81)] = 3214,
  [SMALL_STATE(82)] = 3246,
  [SMALL_STATE(83)] = 3278,
  [SMALL_STATE(84)] = 3320,
  [SMALL_STATE(85)] = 3352,
  [SMALL_STATE(86)] = 3394,
  [SMALL_STATE(87)] = 3426,
  [SMALL_STATE(88)] = 3470,
  [SMALL_STATE(89)] = 3502,
  [SMALL_STATE(90)] = 3534,
  [SMALL_STATE(91)] = 3566,
  [SMALL_STATE(92)] = 3598,
  [SMALL_STATE(93)] = 3630,
  [SMALL_STATE(94)] = 3662,
  [SMALL_STATE(95)] = 3694,
  [SMALL_STATE(96)] = 3736,
  [SMALL_STATE(97)] = 3768,
  [SMALL_STATE(98)] = 3800,
  [SMALL_STATE(99)] = 3832,
  [SMALL_STATE(100)] = 3864,
  [SMALL_STATE(101)] = 3896,
  [SMALL_STATE(102)] = 3928,
  [SMALL_STATE(103)] = 3968,
  [SMALL_STATE(104)] = 3999,
  [SMALL_STATE(105)] = 4038,
  [SMALL_STATE(106)] = 4077,
  [SMALL_STATE(107)] = 4108,
  [SMALL_STATE(108)] = 4144,
  [SMALL_STATE(109)] = 4175,
  [SMALL_STATE(110)] = 4206,
  [SMALL_STATE(111)] = 4237,
  [SMALL_STATE(112)] = 4278,
  [SMALL_STATE(113)] = 4319,
  [SMALL_STATE(114)] = 4376,
  [SMALL_STATE(115)] = 4421,
  [SMALL_STATE(116)] = 4466,
  [SMALL_STATE(117)] = 4505,
  [SMALL_STATE(118)] = 4544,
  [SMALL_STATE(119)] = 4601,
  [SMALL_STATE(120)] = 4658,
  [SMALL_STATE(121)] = 4705,
  [SMALL_STATE(122)] = 4752,
  [SMALL_STATE(123)] = 4787,
  [SMALL_STATE(124)] = 4822,
  [SMALL_STATE(125)] = 4863,
  [SMALL_STATE(126)] = 4920,
  [SMALL_STATE(127)] = 4965,
  [SMALL_STATE(128)] = 5004,
  [SMALL_STATE(129)] = 5061,
  [SMALL_STATE(130)] = 5118,
  [SMALL_STATE(131)] = 5175,
  [SMALL_STATE(132)] = 5232,
  [SMALL_STATE(133)] = 5289,
  [SMALL_STATE(134)] = 5320,
  [SMALL_STATE(135)] = 5351,
  [SMALL_STATE(136)] = 5386,
  [SMALL_STATE(137)] = 5443,
  [SMALL_STATE(138)] = 5473,
  [SMALL_STATE(139)] = 5527,
  [SMALL_STATE(140)] = 5567,
  [SMALL_STATE(141)] = 5601,
  [SMALL_STATE(142)] = 5655,
  [SMALL_STATE(143)] = 5683,
  [SMALL_STATE(144)] = 5717,
  [SMALL_STATE(145)] = 5745,
  [SMALL_STATE(146)] = 5799,
  [SMALL_STATE(147)] = 5827,
  [SMALL_STATE(148)] = 5855,
  [SMALL_STATE(149)] = 5883,
  [SMALL_STATE(150)] = 5923,
  [SMALL_STATE(151)] = 5967,
  [SMALL_STATE(152)] = 6005,
  [SMALL_STATE(153)] = 6043,
  [SMALL_STATE(154)] = 6077,
  [SMALL_STATE(155)] = 6131,
  [SMALL_STATE(156)] = 6185,
  [SMALL_STATE(157)] = 6229,
  [SMALL_STATE(158)] = 6283,
  [SMALL_STATE(159)] = 6313,
  [SMALL_STATE(160)] = 6367,
  [SMALL_STATE(161)] = 6412,
  [SMALL_STATE(162)] = 6445,
  [SMALL_STATE(163)] = 6496,
  [SMALL_STATE(164)] = 6547,
  [SMALL_STATE(165)] = 6580,
  [SMALL_STATE(166)] = 6609,
  [SMALL_STATE(167)] = 6660,
  [SMALL_STATE(168)] = 6711,
  [SMALL_STATE(169)] = 6752,
  [SMALL_STATE(170)] = 6789,
  [SMALL_STATE(171)] = 6828,
  [SMALL_STATE(172)] = 6857,
  [SMALL_STATE(173)] = 6908,
  [SMALL_STATE(174)] = 6937,
  [SMALL_STATE(175)] = 6976,
  [SMALL_STATE(176)] = 7017,
  [SMALL_STATE(177)] = 7054,
  [SMALL_STATE(178)] = 7087,
  [SMALL_STATE(179)] = 7138,
  [SMALL_STATE(180)] = 7166,
  [SMALL_STATE(181)] = 7202,
  [SMALL_STATE(182)] = 7238,
  [SMALL_STATE(183)] = 7280,
  [SMALL_STATE(184)] = 7308,
  [SMALL_STATE(185)] = 7355,
  [SMALL_STATE(186)] = 7388,
  [SMALL_STATE(187)] = 7435,
  [SMALL_STATE(188)] = 7476,
  [SMALL_STATE(189)] = 7523,
  [SMALL_STATE(190)] = 7570,
  [SMALL_STATE(191)] = 7619,
  [SMALL_STATE(192)] = 7666,
  [SMALL_STATE(193)] = 7691,
  [SMALL_STATE(194)] = 7716,
  [SMALL_STATE(195)] = 7765,
  [SMALL_STATE(196)] = 7812,
  [SMALL_STATE(197)] = 7861,
  [SMALL_STATE(198)] = 7910,
  [SMALL_STATE(199)] = 7943,
  [SMALL_STATE(200)] = 7968,
  [SMALL_STATE(201)] = 7993,
  [SMALL_STATE(202)] = 8023,
  [SMALL_STATE(203)] = 8053,
  [SMALL_STATE(204)] = 8099,
  [SMALL_STATE(205)] = 8137,
  [SMALL_STATE(206)] = 8167,
  [SMALL_STATE(207)] = 8205,
  [SMALL_STATE(208)] = 8243,
  [SMALL_STATE(209)] = 8283,
  [SMALL_STATE(210)] = 8329,
  [SMALL_STATE(211)] = 8367,
  [SMALL_STATE(212)] = 8407,
  [SMALL_STATE(213)] = 8447,
  [SMALL_STATE(214)] = 8487,
  [SMALL_STATE(215)] = 8525,
  [SMALL_STATE(216)] = 8571,
  [SMALL_STATE(217)] = 8609,
  [SMALL_STATE(218)] = 8651,
  [SMALL_STATE(219)] = 8693,
  [SMALL_STATE(220)] = 8723,
  [SMALL_STATE(221)] = 8761,
  [SMALL_STATE(222)] = 8782,
  [SMALL_STATE(223)] = 8819,
  [SMALL_STATE(224)] = 8856,
  [SMALL_STATE(225)] = 8893,
  [SMALL_STATE(226)] = 8932,
  [SMALL_STATE(227)] = 8971,
  [SMALL_STATE(228)] = 9008,
  [SMALL_STATE(229)] = 9045,
  [SMALL_STATE(230)] = 9082,
  [SMALL_STATE(231)] = 9119,
  [SMALL_STATE(232)] = 9158,
  [SMALL_STATE(233)] = 9195,
  [SMALL_STATE(234)] = 9232,
  [SMALL_STATE(235)] = 9271,
  [SMALL_STATE(236)] = 9308,
  [SMALL_STATE(237)] = 9347,
  [SMALL_STATE(238)] = 9384,
  [SMALL_STATE(239)] = 9423,
  [SMALL_STATE(240)] = 9460,
  [SMALL_STATE(241)] = 9497,
  [SMALL_STATE(242)] = 9534,
  [SMALL_STATE(243)] = 9571,
  [SMALL_STATE(244)] = 9610,
  [SMALL_STATE(245)] = 9647,
  [SMALL_STATE(246)] = 9686,
  [SMALL_STATE(247)] = 9707,
  [SMALL_STATE(248)] = 9744,
  [SMALL_STATE(249)] = 9781,
  [SMALL_STATE(250)] = 9818,
  [SMALL_STATE(251)] = 9855,
  [SMALL_STATE(252)] = 9892,
  [SMALL_STATE(253)] = 9929,
  [SMALL_STATE(254)] = 9966,
  [SMALL_STATE(255)] = 10003,
  [SMALL_STATE(256)] = 10040,
  [SMALL_STATE(257)] = 10077,
  [SMALL_STATE(258)] = 10114,
  [SMALL_STATE(259)] = 10151,
  [SMALL_STATE(260)] = 10188,
  [SMALL_STATE(261)] = 10225,
  [SMALL_STATE(262)] = 10262,
  [SMALL_STATE(263)] = 10301,
  [SMALL_STATE(264)] = 10322,
  [SMALL_STATE(265)] = 10359,
  [SMALL_STATE(266)] = 10396,
  [SMALL_STATE(267)] = 10433,
  [SMALL_STATE(268)] = 10470,
  [SMALL_STATE(269)] = 10507,
  [SMALL_STATE(270)] = 10544,
  [SMALL_STATE(271)] = 10581,
  [SMALL_STATE(272)] = 10618,
  [SMALL_STATE(273)] = 10655,
  [SMALL_STATE(274)] = 10692,
  [SMALL_STATE(275)] = 10729,
  [SMALL_STATE(276)] = 10766,
  [SMALL_STATE(277)] = 10787,
  [SMALL_STATE(278)] = 10824,
  [SMALL_STATE(279)] = 10861,
  [SMALL_STATE(280)] = 10898,
  [SMALL_STATE(281)] = 10935,
  [SMALL_STATE(282)] = 10974,
  [SMALL_STATE(283)] = 11011,
  [SMALL_STATE(284)] = 11048,
  [SMALL_STATE(285)] = 11085,
  [SMALL_STATE(286)] = 11122,
  [SMALL_STATE(287)] = 11159,
  [SMALL_STATE(288)] = 11198,
  [SMALL_STATE(289)] = 11235,
  [SMALL_STATE(290)] = 11272,
  [SMALL_STATE(291)] = 11311,
  [SMALL_STATE(292)] = 11348,
  [SMALL_STATE(293)] = 11384,
  [SMALL_STATE(294)] = 11418,
  [SMALL_STATE(295)] = 11438,
  [SMALL_STATE(296)] = 11458,
  [SMALL_STATE(297)] = 11480,
  [SMALL_STATE(298)] = 11514,
  [SMALL_STATE(299)] = 11533,
  [SMALL_STATE(300)] = 11566,
  [SMALL_STATE(301)] = 11607,
  [SMALL_STATE(302)] = 11640,
  [SMALL_STATE(303)] = 11667,
  [SMALL_STATE(304)] = 11694,
  [SMALL_STATE(305)] = 11714,
  [SMALL_STATE(306)] = 11736,
  [SMALL_STATE(307)] = 11766,
  [SMALL_STATE(308)] = 11786,
  [SMALL_STATE(309)] = 11806,
  [SMALL_STATE(310)] = 11826,
  [SMALL_STATE(311)] = 11856,
  [SMALL_STATE(312)] = 11876,
  [SMALL_STATE(313)] = 11903,
  [SMALL_STATE(314)] = 11930,
  [SMALL_STATE(315)] = 11949,
  [SMALL_STATE(316)] = 11968,
  [SMALL_STATE(317)] = 11985,
  [SMALL_STATE(318)] = 12016,
  [SMALL_STATE(319)] = 12035,
  [SMALL_STATE(320)] = 12052,
  [SMALL_STATE(321)] = 12071,
  [SMALL_STATE(322)] = 12088,
  [SMALL_STATE(323)] = 12115,
  [SMALL_STATE(324)] = 12134,
  [SMALL_STATE(325)] = 12161,
  [SMALL_STATE(326)] = 12180,
  [SMALL_STATE(327)] = 12199,
  [SMALL_STATE(328)] = 12226,
  [SMALL_STATE(329)] = 12253,
  [SMALL_STATE(330)] = 12280,
  [SMALL_STATE(331)] = 12307,
  [SMALL_STATE(332)] = 12338,
  [SMALL_STATE(333)] = 12366,
  [SMALL_STATE(334)] = 12382,
  [SMALL_STATE(335)] = 12400,
  [SMALL_STATE(336)] = 12418,
  [SMALL_STATE(337)] = 12434,
  [SMALL_STATE(338)] = 12452,
  [SMALL_STATE(339)] = 12468,
  [SMALL_STATE(340)] = 12486,
  [SMALL_STATE(341)] = 12504,
  [SMALL_STATE(342)] = 12520,
  [SMALL_STATE(343)] = 12536,
  [SMALL_STATE(344)] = 12554,
  [SMALL_STATE(345)] = 12572,
  [SMALL_STATE(346)] = 12588,
  [SMALL_STATE(347)] = 12604,
  [SMALL_STATE(348)] = 12620,
  [SMALL_STATE(349)] = 12646,
  [SMALL_STATE(350)] = 12662,
  [SMALL_STATE(351)] = 12678,
  [SMALL_STATE(352)] = 12706,
  [SMALL_STATE(353)] = 12734,
  [SMALL_STATE(354)] = 12750,
  [SMALL_STATE(355)] = 12766,
  [SMALL_STATE(356)] = 12784,
  [SMALL_STATE(357)] = 12809,
  [SMALL_STATE(358)] = 12834,
  [SMALL_STATE(359)] = 12859,
  [SMALL_STATE(360)] = 12874,
  [SMALL_STATE(361)] = 12899,
  [SMALL_STATE(362)] = 12926,
  [SMALL_STATE(363)] = 12953,
  [SMALL_STATE(364)] = 12968,
  [SMALL_STATE(365)] = 12983,
  [SMALL_STATE(366)] = 13010,
  [SMALL_STATE(367)] = 13033,
  [SMALL_STATE(368)] = 13058,
  [SMALL_STATE(369)] = 13085,
  [SMALL_STATE(370)] = 13100,
  [SMALL_STATE(371)] = 13115,
  [SMALL_STATE(372)] = 13142,
  [SMALL_STATE(373)] = 13165,
  [SMALL_STATE(374)] = 13180,
  [SMALL_STATE(375)] = 13209,
  [SMALL_STATE(376)] = 13238,
  [SMALL_STATE(377)] = 13263,
  [SMALL_STATE(378)] = 13290,
  [SMALL_STATE(379)] = 13315,
  [SMALL_STATE(380)] = 13330,
  [SMALL_STATE(381)] = 13357,
  [SMALL_STATE(382)] = 13384,
  [SMALL_STATE(383)] = 13409,
  [SMALL_STATE(384)] = 13426,
  [SMALL_STATE(385)] = 13451,
  [SMALL_STATE(386)] = 13478,
  [SMALL_STATE(387)] = 13505,
  [SMALL_STATE(388)] = 13522,
  [SMALL_STATE(389)] = 13549,
  [SMALL_STATE(390)] = 13574,
  [SMALL_STATE(391)] = 13592,
  [SMALL_STATE(392)] = 13610,
  [SMALL_STATE(393)] = 13634,
  [SMALL_STATE(394)] = 13652,
  [SMALL_STATE(395)] = 13670,
  [SMALL_STATE(396)] = 13688,
  [SMALL_STATE(397)] = 13704,
  [SMALL_STATE(398)] = 13726,
  [SMALL_STATE(399)] = 13742,
  [SMALL_STATE(400)] = 13766,
  [SMALL_STATE(401)] = 13782,
  [SMALL_STATE(402)] = 13798,
  [SMALL_STATE(403)] = 13814,
  [SMALL_STATE(404)] = 13830,
  [SMALL_STATE(405)] = 13854,
  [SMALL_STATE(406)] = 13876,
  [SMALL_STATE(407)] = 13902,
  [SMALL_STATE(408)] = 13922,
  [SMALL_STATE(409)] = 13946,
  [SMALL_STATE(410)] = 13970,
  [SMALL_STATE(411)] = 13990,
  [SMALL_STATE(412)] = 14012,
  [SMALL_STATE(413)] = 14036,
  [SMALL_STATE(414)] = 14060,
  [SMALL_STATE(415)] = 14084,
  [SMALL_STATE(416)] = 14100,
  [SMALL_STATE(417)] = 14116,
  [SMALL_STATE(418)] = 14142,
  [SMALL_STATE(419)] = 14168,
  [SMALL_STATE(420)] = 14186,
  [SMALL_STATE(421)] = 14200,
  [SMALL_STATE(422)] = 14214,
  [SMALL_STATE(423)] = 14240,
  [SMALL_STATE(424)] = 14266,
  [SMALL_STATE(425)] = 14282,
  [SMALL_STATE(426)] = 14298,
  [SMALL_STATE(427)] = 14316,
  [SMALL_STATE(428)] = 14329,
  [SMALL_STATE(429)] = 14352,
  [SMALL_STATE(430)] = 14373,
  [SMALL_STATE(431)] = 14390,
  [SMALL_STATE(432)] = 14411,
  [SMALL_STATE(433)] = 14424,
  [SMALL_STATE(434)] = 14445,
  [SMALL_STATE(435)] = 14464,
  [SMALL_STATE(436)] = 14481,
  [SMALL_STATE(437)] = 14502,
  [SMALL_STATE(438)] = 14523,
  [SMALL_STATE(439)] = 14542,
  [SMALL_STATE(440)] = 14563,
  [SMALL_STATE(441)] = 14584,
  [SMALL_STATE(442)] = 14605,
  [SMALL_STATE(443)] = 14628,
  [SMALL_STATE(444)] = 14649,
  [SMALL_STATE(445)] = 14672,
  [SMALL_STATE(446)] = 14689,
  [SMALL_STATE(447)] = 14712,
  [SMALL_STATE(448)] = 14735,
  [SMALL_STATE(449)] = 14758,
  [SMALL_STATE(450)] = 14781,
  [SMALL_STATE(451)] = 14804,
  [SMALL_STATE(452)] = 14821,
  [SMALL_STATE(453)] = 14838,
  [SMALL_STATE(454)] = 14859,
  [SMALL_STATE(455)] = 14880,
  [SMALL_STATE(456)] = 14903,
  [SMALL_STATE(457)] = 14920,
  [SMALL_STATE(458)] = 14937,
  [SMALL_STATE(459)] = 14956,
  [SMALL_STATE(460)] = 14977,
  [SMALL_STATE(461)] = 15000,
  [SMALL_STATE(462)] = 15023,
  [SMALL_STATE(463)] = 15039,
  [SMALL_STATE(464)] = 15053,
  [SMALL_STATE(465)] = 15069,
  [SMALL_STATE(466)] = 15089,
  [SMALL_STATE(467)] = 15105,
  [SMALL_STATE(468)] = 15121,
  [SMALL_STATE(469)] = 15135,
  [SMALL_STATE(470)] = 15151,
  [SMALL_STATE(471)] = 15167,
  [SMALL_STATE(472)] = 15183,
  [SMALL_STATE(473)] = 15203,
  [SMALL_STATE(474)] = 15223,
  [SMALL_STATE(475)] = 15243,
  [SMALL_STATE(476)] = 15259,
  [SMALL_STATE(477)] = 15275,
  [SMALL_STATE(478)] = 15291,
  [SMALL_STATE(479)] = 15311,
  [SMALL_STATE(480)] = 15331,
  [SMALL_STATE(481)] = 15347,
  [SMALL_STATE(482)] = 15367,
  [SMALL_STATE(483)] = 15383,
  [SMALL_STATE(484)] = 15395,
  [SMALL_STATE(485)] = 15407,
  [SMALL_STATE(486)] = 15421,
  [SMALL_STATE(487)] = 15441,
  [SMALL_STATE(488)] = 15461,
  [SMALL_STATE(489)] = 15477,
  [SMALL_STATE(490)] = 15494,
  [SMALL_STATE(491)] = 15511,
  [SMALL_STATE(492)] = 15528,
  [SMALL_STATE(493)] = 15543,
  [SMALL_STATE(494)] = 15558,
  [SMALL_STATE(495)] = 15575,
  [SMALL_STATE(496)] = 15592,
  [SMALL_STATE(497)] = 15605,
  [SMALL_STATE(498)] = 15622,
  [SMALL_STATE(499)] = 15639,
  [SMALL_STATE(500)] = 15656,
  [SMALL_STATE(501)] = 15673,
  [SMALL_STATE(502)] = 15688,
  [SMALL_STATE(503)] = 15705,
  [SMALL_STATE(504)] = 15718,
  [SMALL_STATE(505)] = 15731,
  [SMALL_STATE(506)] = 15744,
  [SMALL_STATE(507)] = 15761,
  [SMALL_STATE(508)] = 15778,
  [SMALL_STATE(509)] = 15795,
  [SMALL_STATE(510)] = 15812,
  [SMALL_STATE(511)] = 15829,
  [SMALL_STATE(512)] = 15846,
  [SMALL_STATE(513)] = 15863,
  [SMALL_STATE(514)] = 15878,
  [SMALL_STATE(515)] = 15895,
  [SMALL_STATE(516)] = 15906,
  [SMALL_STATE(517)] = 15923,
  [SMALL_STATE(518)] = 15940,
  [SMALL_STATE(519)] = 15957,
  [SMALL_STATE(520)] = 15970,
  [SMALL_STATE(521)] = 15987,
  [SMALL_STATE(522)] = 16002,
  [SMALL_STATE(523)] = 16013,
  [SMALL_STATE(524)] = 16030,
  [SMALL_STATE(525)] = 16041,
  [SMALL_STATE(526)] = 16058,
  [SMALL_STATE(527)] = 16075,
  [SMALL_STATE(528)] = 16088,
  [SMALL_STATE(529)] = 16105,
  [SMALL_STATE(530)] = 16122,
  [SMALL_STATE(531)] = 16137,
  [SMALL_STATE(532)] = 16148,
  [SMALL_STATE(533)] = 16165,
  [SMALL_STATE(534)] = 16180,
  [SMALL_STATE(535)] = 16191,
  [SMALL_STATE(536)] = 16202,
  [SMALL_STATE(537)] = 16217,
  [SMALL_STATE(538)] = 16230,
  [SMALL_STATE(539)] = 16245,
  [SMALL_STATE(540)] = 16260,
  [SMALL_STATE(541)] = 16277,
  [SMALL_STATE(542)] = 16294,
  [SMALL_STATE(543)] = 16308,
  [SMALL_STATE(544)] = 16322,
  [SMALL_STATE(545)] = 16336,
  [SMALL_STATE(546)] = 16346,
  [SMALL_STATE(547)] = 16360,
  [SMALL_STATE(548)] = 16374,
  [SMALL_STATE(549)] = 16388,
  [SMALL_STATE(550)] = 16398,
  [SMALL_STATE(551)] = 16412,
  [SMALL_STATE(552)] = 16426,
  [SMALL_STATE(553)] = 16440,
  [SMALL_STATE(554)] = 16454,
  [SMALL_STATE(555)] = 16468,
  [SMALL_STATE(556)] = 16482,
  [SMALL_STATE(557)] = 16496,
  [SMALL_STATE(558)] = 16510,
  [SMALL_STATE(559)] = 16524,
  [SMALL_STATE(560)] = 16534,
  [SMALL_STATE(561)] = 16548,
  [SMALL_STATE(562)] = 16562,
  [SMALL_STATE(563)] = 16572,
  [SMALL_STATE(564)] = 16586,
  [SMALL_STATE(565)] = 16600,
  [SMALL_STATE(566)] = 16614,
  [SMALL_STATE(567)] = 16628,
  [SMALL_STATE(568)] = 16642,
  [SMALL_STATE(569)] = 16656,
  [SMALL_STATE(570)] = 16670,
  [SMALL_STATE(571)] = 16684,
  [SMALL_STATE(572)] = 16698,
  [SMALL_STATE(573)] = 16712,
  [SMALL_STATE(574)] = 16726,
  [SMALL_STATE(575)] = 16740,
  [SMALL_STATE(576)] = 16754,
  [SMALL_STATE(577)] = 16768,
  [SMALL_STATE(578)] = 16782,
  [SMALL_STATE(579)] = 16796,
  [SMALL_STATE(580)] = 16810,
  [SMALL_STATE(581)] = 16824,
  [SMALL_STATE(582)] = 16838,
  [SMALL_STATE(583)] = 16852,
  [SMALL_STATE(584)] = 16866,
  [SMALL_STATE(585)] = 16880,
  [SMALL_STATE(586)] = 16894,
  [SMALL_STATE(587)] = 16908,
  [SMALL_STATE(588)] = 16922,
  [SMALL_STATE(589)] = 16936,
  [SMALL_STATE(590)] = 16950,
  [SMALL_STATE(591)] = 16964,
  [SMALL_STATE(592)] = 16978,
  [SMALL_STATE(593)] = 16992,
  [SMALL_STATE(594)] = 17002,
  [SMALL_STATE(595)] = 17016,
  [SMALL_STATE(596)] = 17030,
  [SMALL_STATE(597)] = 17044,
  [SMALL_STATE(598)] = 17058,
  [SMALL_STATE(599)] = 17072,
  [SMALL_STATE(600)] = 17086,
  [SMALL_STATE(601)] = 17100,
  [SMALL_STATE(602)] = 17114,
  [SMALL_STATE(603)] = 17128,
  [SMALL_STATE(604)] = 17142,
  [SMALL_STATE(605)] = 17156,
  [SMALL_STATE(606)] = 17170,
  [SMALL_STATE(607)] = 17184,
  [SMALL_STATE(608)] = 17198,
  [SMALL_STATE(609)] = 17208,
  [SMALL_STATE(610)] = 17222,
  [SMALL_STATE(611)] = 17236,
  [SMALL_STATE(612)] = 17250,
  [SMALL_STATE(613)] = 17260,
  [SMALL_STATE(614)] = 17274,
  [SMALL_STATE(615)] = 17284,
  [SMALL_STATE(616)] = 17298,
  [SMALL_STATE(617)] = 17312,
  [SMALL_STATE(618)] = 17326,
  [SMALL_STATE(619)] = 17340,
  [SMALL_STATE(620)] = 17354,
  [SMALL_STATE(621)] = 17368,
  [SMALL_STATE(622)] = 17382,
  [SMALL_STATE(623)] = 17396,
  [SMALL_STATE(624)] = 17410,
  [SMALL_STATE(625)] = 17424,
  [SMALL_STATE(626)] = 17438,
  [SMALL_STATE(627)] = 17452,
  [SMALL_STATE(628)] = 17466,
  [SMALL_STATE(629)] = 17480,
  [SMALL_STATE(630)] = 17494,
  [SMALL_STATE(631)] = 17508,
  [SMALL_STATE(632)] = 17522,
  [SMALL_STATE(633)] = 17536,
  [SMALL_STATE(634)] = 17550,
  [SMALL_STATE(635)] = 17564,
  [SMALL_STATE(636)] = 17578,
  [SMALL_STATE(637)] = 17592,
  [SMALL_STATE(638)] = 17602,
  [SMALL_STATE(639)] = 17616,
  [SMALL_STATE(640)] = 17630,
  [SMALL_STATE(641)] = 17644,
  [SMALL_STATE(642)] = 17658,
  [SMALL_STATE(643)] = 17672,
  [SMALL_STATE(644)] = 17686,
  [SMALL_STATE(645)] = 17700,
  [SMALL_STATE(646)] = 17714,
  [SMALL_STATE(647)] = 17728,
  [SMALL_STATE(648)] = 17742,
  [SMALL_STATE(649)] = 17756,
  [SMALL_STATE(650)] = 17770,
  [SMALL_STATE(651)] = 17784,
  [SMALL_STATE(652)] = 17798,
  [SMALL_STATE(653)] = 17812,
  [SMALL_STATE(654)] = 17826,
  [SMALL_STATE(655)] = 17840,
  [SMALL_STATE(656)] = 17854,
  [SMALL_STATE(657)] = 17868,
  [SMALL_STATE(658)] = 17882,
  [SMALL_STATE(659)] = 17896,
  [SMALL_STATE(660)] = 17910,
  [SMALL_STATE(661)] = 17924,
  [SMALL_STATE(662)] = 17938,
  [SMALL_STATE(663)] = 17952,
  [SMALL_STATE(664)] = 17966,
  [SMALL_STATE(665)] = 17980,
  [SMALL_STATE(666)] = 17994,
  [SMALL_STATE(667)] = 18008,
  [SMALL_STATE(668)] = 18022,
  [SMALL_STATE(669)] = 18036,
  [SMALL_STATE(670)] = 18050,
  [SMALL_STATE(671)] = 18062,
  [SMALL_STATE(672)] = 18072,
  [SMALL_STATE(673)] = 18086,
  [SMALL_STATE(674)] = 18100,
  [SMALL_STATE(675)] = 18110,
  [SMALL_STATE(676)] = 18124,
  [SMALL_STATE(677)] = 18138,
  [SMALL_STATE(678)] = 18148,
  [SMALL_STATE(679)] = 18162,
  [SMALL_STATE(680)] = 18173,
  [SMALL_STATE(681)] = 18184,
  [SMALL_STATE(682)] = 18195,
  [SMALL_STATE(683)] = 18204,
  [SMALL_STATE(684)] = 18215,
  [SMALL_STATE(685)] = 18224,
  [SMALL_STATE(686)] = 18235,
  [SMALL_STATE(687)] = 18246,
  [SMALL_STATE(688)] = 18257,
  [SMALL_STATE(689)] = 18268,
  [SMALL_STATE(690)] = 18277,
  [SMALL_STATE(691)] = 18286,
  [SMALL_STATE(692)] = 18297,
  [SMALL_STATE(693)] = 18306,
  [SMALL_STATE(694)] = 18315,
  [SMALL_STATE(695)] = 18326,
  [SMALL_STATE(696)] = 18335,
  [SMALL_STATE(697)] = 18346,
  [SMALL_STATE(698)] = 18357,
  [SMALL_STATE(699)] = 18366,
  [SMALL_STATE(700)] = 18375,
  [SMALL_STATE(701)] = 18386,
  [SMALL_STATE(702)] = 18397,
  [SMALL_STATE(703)] = 18406,
  [SMALL_STATE(704)] = 18415,
  [SMALL_STATE(705)] = 18424,
  [SMALL_STATE(706)] = 18433,
  [SMALL_STATE(707)] = 18444,
  [SMALL_STATE(708)] = 18455,
  [SMALL_STATE(709)] = 18464,
  [SMALL_STATE(710)] = 18473,
  [SMALL_STATE(711)] = 18482,
  [SMALL_STATE(712)] = 18491,
  [SMALL_STATE(713)] = 18500,
  [SMALL_STATE(714)] = 18509,
  [SMALL_STATE(715)] = 18518,
  [SMALL_STATE(716)] = 18529,
  [SMALL_STATE(717)] = 18540,
  [SMALL_STATE(718)] = 18549,
  [SMALL_STATE(719)] = 18560,
  [SMALL_STATE(720)] = 18569,
  [SMALL_STATE(721)] = 18578,
  [SMALL_STATE(722)] = 18589,
  [SMALL_STATE(723)] = 18600,
  [SMALL_STATE(724)] = 18609,
  [SMALL_STATE(725)] = 18618,
  [SMALL_STATE(726)] = 18627,
  [SMALL_STATE(727)] = 18636,
  [SMALL_STATE(728)] = 18647,
  [SMALL_STATE(729)] = 18658,
  [SMALL_STATE(730)] = 18667,
  [SMALL_STATE(731)] = 18676,
  [SMALL_STATE(732)] = 18687,
  [SMALL_STATE(733)] = 18698,
  [SMALL_STATE(734)] = 18709,
  [SMALL_STATE(735)] = 18718,
  [SMALL_STATE(736)] = 18727,
  [SMALL_STATE(737)] = 18735,
  [SMALL_STATE(738)] = 18743,
  [SMALL_STATE(739)] = 18751,
  [SMALL_STATE(740)] = 18759,
  [SMALL_STATE(741)] = 18767,
  [SMALL_STATE(742)] = 18775,
  [SMALL_STATE(743)] = 18783,
  [SMALL_STATE(744)] = 18791,
  [SMALL_STATE(745)] = 18799,
  [SMALL_STATE(746)] = 18807,
  [SMALL_STATE(747)] = 18815,
  [SMALL_STATE(748)] = 18823,
  [SMALL_STATE(749)] = 18831,
  [SMALL_STATE(750)] = 18839,
  [SMALL_STATE(751)] = 18847,
  [SMALL_STATE(752)] = 18855,
  [SMALL_STATE(753)] = 18863,
  [SMALL_STATE(754)] = 18871,
  [SMALL_STATE(755)] = 18879,
  [SMALL_STATE(756)] = 18887,
  [SMALL_STATE(757)] = 18895,
  [SMALL_STATE(758)] = 18903,
  [SMALL_STATE(759)] = 18911,
  [SMALL_STATE(760)] = 18919,
  [SMALL_STATE(761)] = 18927,
  [SMALL_STATE(762)] = 18935,
  [SMALL_STATE(763)] = 18943,
  [SMALL_STATE(764)] = 18951,
  [SMALL_STATE(765)] = 18959,
  [SMALL_STATE(766)] = 18967,
  [SMALL_STATE(767)] = 18975,
  [SMALL_STATE(768)] = 18983,
  [SMALL_STATE(769)] = 18991,
  [SMALL_STATE(770)] = 18999,
  [SMALL_STATE(771)] = 19007,
  [SMALL_STATE(772)] = 19015,
  [SMALL_STATE(773)] = 19023,
  [SMALL_STATE(774)] = 19031,
  [SMALL_STATE(775)] = 19039,
  [SMALL_STATE(776)] = 19047,
  [SMALL_STATE(777)] = 19055,
  [SMALL_STATE(778)] = 19063,
  [SMALL_STATE(779)] = 19071,
  [SMALL_STATE(780)] = 19079,
  [SMALL_STATE(781)] = 19087,
  [SMALL_STATE(782)] = 19095,
  [SMALL_STATE(783)] = 19103,
  [SMALL_STATE(784)] = 19111,
  [SMALL_STATE(785)] = 19119,
  [SMALL_STATE(786)] = 19127,
  [SMALL_STATE(787)] = 19135,
  [SMALL_STATE(788)] = 19143,
  [SMALL_STATE(789)] = 19151,
  [SMALL_STATE(790)] = 19159,
  [SMALL_STATE(791)] = 19167,
  [SMALL_STATE(792)] = 19175,
  [SMALL_STATE(793)] = 19183,
  [SMALL_STATE(794)] = 19191,
  [SMALL_STATE(795)] = 19199,
  [SMALL_STATE(796)] = 19207,
  [SMALL_STATE(797)] = 19215,
  [SMALL_STATE(798)] = 19223,
  [SMALL_STATE(799)] = 19231,
  [SMALL_STATE(800)] = 19239,
  [SMALL_STATE(801)] = 19247,
  [SMALL_STATE(802)] = 19255,
  [SMALL_STATE(803)] = 19263,
  [SMALL_STATE(804)] = 19271,
  [SMALL_STATE(805)] = 19279,
  [SMALL_STATE(806)] = 19287,
  [SMALL_STATE(807)] = 19295,
  [SMALL_STATE(808)] = 19303,
  [SMALL_STATE(809)] = 19311,
  [SMALL_STATE(810)] = 19319,
  [SMALL_STATE(811)] = 19327,
  [SMALL_STATE(812)] = 19335,
  [SMALL_STATE(813)] = 19343,
  [SMALL_STATE(814)] = 19351,
  [SMALL_STATE(815)] = 19359,
  [SMALL_STATE(816)] = 19367,
  [SMALL_STATE(817)] = 19375,
  [SMALL_STATE(818)] = 19383,
  [SMALL_STATE(819)] = 19391,
  [SMALL_STATE(820)] = 19399,
  [SMALL_STATE(821)] = 19407,
  [SMALL_STATE(822)] = 19415,
  [SMALL_STATE(823)] = 19423,
  [SMALL_STATE(824)] = 19431,
  [SMALL_STATE(825)] = 19439,
  [SMALL_STATE(826)] = 19447,
  [SMALL_STATE(827)] = 19455,
  [SMALL_STATE(828)] = 19463,
  [SMALL_STATE(829)] = 19471,
  [SMALL_STATE(830)] = 19479,
  [SMALL_STATE(831)] = 19487,
  [SMALL_STATE(832)] = 19495,
  [SMALL_STATE(833)] = 19503,
  [SMALL_STATE(834)] = 19511,
  [SMALL_STATE(835)] = 19519,
  [SMALL_STATE(836)] = 19527,
  [SMALL_STATE(837)] = 19535,
  [SMALL_STATE(838)] = 19543,
  [SMALL_STATE(839)] = 19551,
  [SMALL_STATE(840)] = 19559,
  [SMALL_STATE(841)] = 19567,
  [SMALL_STATE(842)] = 19575,
  [SMALL_STATE(843)] = 19583,
  [SMALL_STATE(844)] = 19591,
  [SMALL_STATE(845)] = 19599,
  [SMALL_STATE(846)] = 19607,
  [SMALL_STATE(847)] = 19615,
  [SMALL_STATE(848)] = 19623,
  [SMALL_STATE(849)] = 19631,
  [SMALL_STATE(850)] = 19639,
  [SMALL_STATE(851)] = 19647,
  [SMALL_STATE(852)] = 19655,
  [SMALL_STATE(853)] = 19663,
  [SMALL_STATE(854)] = 19671,
  [SMALL_STATE(855)] = 19679,
  [SMALL_STATE(856)] = 19687,
  [SMALL_STATE(857)] = 19695,
  [SMALL_STATE(858)] = 19703,
  [SMALL_STATE(859)] = 19711,
  [SMALL_STATE(860)] = 19719,
  [SMALL_STATE(861)] = 19727,
  [SMALL_STATE(862)] = 19735,
  [SMALL_STATE(863)] = 19743,
  [SMALL_STATE(864)] = 19751,
  [SMALL_STATE(865)] = 19759,
  [SMALL_STATE(866)] = 19767,
  [SMALL_STATE(867)] = 19775,
  [SMALL_STATE(868)] = 19783,
  [SMALL_STATE(869)] = 19791,
  [SMALL_STATE(870)] = 19799,
  [SMALL_STATE(871)] = 19807,
  [SMALL_STATE(872)] = 19815,
  [SMALL_STATE(873)] = 19823,
  [SMALL_STATE(874)] = 19831,
  [SMALL_STATE(875)] = 19839,
  [SMALL_STATE(876)] = 19847,
  [SMALL_STATE(877)] = 19855,
  [SMALL_STATE(878)] = 19863,
  [SMALL_STATE(879)] = 19871,
  [SMALL_STATE(880)] = 19879,
  [SMALL_STATE(881)] = 19887,
  [SMALL_STATE(882)] = 19895,
  [SMALL_STATE(883)] = 19903,
  [SMALL_STATE(884)] = 19911,
  [SMALL_STATE(885)] = 19919,
  [SMALL_STATE(886)] = 19927,
  [SMALL_STATE(887)] = 19935,
  [SMALL_STATE(888)] = 19943,
  [SMALL_STATE(889)] = 19951,
  [SMALL_STATE(890)] = 19959,
  [SMALL_STATE(891)] = 19967,
  [SMALL_STATE(892)] = 19975,
  [SMALL_STATE(893)] = 19983,
  [SMALL_STATE(894)] = 19991,
  [SMALL_STATE(895)] = 19999,
  [SMALL_STATE(896)] = 20007,
  [SMALL_STATE(897)] = 20015,
  [SMALL_STATE(898)] = 20023,
  [SMALL_STATE(899)] = 20031,
  [SMALL_STATE(900)] = 20039,
  [SMALL_STATE(901)] = 20047,
  [SMALL_STATE(902)] = 20055,
  [SMALL_STATE(903)] = 20063,
  [SMALL_STATE(904)] = 20071,
  [SMALL_STATE(905)] = 20079,
  [SMALL_STATE(906)] = 20087,
  [SMALL_STATE(907)] = 20095,
  [SMALL_STATE(908)] = 20103,
  [SMALL_STATE(909)] = 20111,
  [SMALL_STATE(910)] = 20119,
  [SMALL_STATE(911)] = 20127,
  [SMALL_STATE(912)] = 20135,
  [SMALL_STATE(913)] = 20143,
  [SMALL_STATE(914)] = 20151,
  [SMALL_STATE(915)] = 20159,
  [SMALL_STATE(916)] = 20167,
  [SMALL_STATE(917)] = 20175,
  [SMALL_STATE(918)] = 20183,
  [SMALL_STATE(919)] = 20191,
  [SMALL_STATE(920)] = 20199,
  [SMALL_STATE(921)] = 20207,
  [SMALL_STATE(922)] = 20215,
  [SMALL_STATE(923)] = 20223,
  [SMALL_STATE(924)] = 20231,
  [SMALL_STATE(925)] = 20239,
  [SMALL_STATE(926)] = 20247,
  [SMALL_STATE(927)] = 20255,
  [SMALL_STATE(928)] = 20263,
  [SMALL_STATE(929)] = 20271,
  [SMALL_STATE(930)] = 20279,
  [SMALL_STATE(931)] = 20287,
  [SMALL_STATE(932)] = 20295,
  [SMALL_STATE(933)] = 20303,
  [SMALL_STATE(934)] = 20311,
  [SMALL_STATE(935)] = 20319,
  [SMALL_STATE(936)] = 20327,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 8),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 25),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 25),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 19),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 19),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 24),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 24),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 33),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 33),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 40),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 40),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 6),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 15),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 15),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 30),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 9),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 9),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(889),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 9),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 9),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 31),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 17),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 10),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 38),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 28),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 26),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 41),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 9),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(918),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(696),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(873),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(490),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(681),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(935),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(540),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 14),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 14),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 48),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 11),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 11),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 18),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 18),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 48),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_int, 1),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 45),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 45),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 4),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 4),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 46),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 28),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 45),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 46),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 32),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 28),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 20),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 23),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(408),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [856] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(503),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(884),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(323),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(409),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(234),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 28),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(413),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(414),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 2),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(290),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 16),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 16),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 35),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 35),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1046] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(375),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(474),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(511),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(458),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22),
  [1108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22), SHIFT_REPEAT(178),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 1, .production_id = 7),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(520),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 28),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(525),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(508),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(399),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 13),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 30),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 42),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 21),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 44),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 27),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 34),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 30),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 36),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 44),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 47),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_with, 1),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 2),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 27),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 29),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 37),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(930),
  [1543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 27),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 43),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1651] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
