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
#define STATE_COUNT 927
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 232
#define ALIAS_COUNT 0
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 47

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
  [14] = {.index = 26, .length = 3},
  [15] = {.index = 2, .length = 1},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 3},
  [19] = {.index = 36, .length = 1},
  [20] = {.index = 37, .length = 2},
  [21] = {.index = 39, .length = 3},
  [22] = {.index = 42, .length = 3},
  [23] = {.index = 45, .length = 3},
  [24] = {.index = 48, .length = 1},
  [25] = {.index = 49, .length = 1},
  [26] = {.index = 50, .length = 2},
  [27] = {.index = 52, .length = 1},
  [28] = {.index = 53, .length = 1},
  [29] = {.index = 54, .length = 3},
  [30] = {.index = 57, .length = 3},
  [31] = {.index = 60, .length = 4},
  [32] = {.index = 64, .length = 1},
  [33] = {.index = 65, .length = 2},
  [34] = {.index = 67, .length = 1},
  [35] = {.index = 68, .length = 2},
  [36] = {.index = 70, .length = 3},
  [37] = {.index = 73, .length = 2},
  [38] = {.index = 75, .length = 4},
  [39] = {.index = 79, .length = 1},
  [40] = {.index = 80, .length = 2},
  [41] = {.index = 82, .length = 2},
  [42] = {.index = 84, .length = 1},
  [43] = {.index = 85, .length = 1},
  [44] = {.index = 86, .length = 1},
  [45] = {.index = 87, .length = 2},
  [46] = {.index = 89, .length = 2},
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
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [24] =
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [26] =
    {field_alias, 3},
    {field_name, 2},
    {field_table_alias, 0},
  [29] =
    {field_name, 0},
    {field_table_alias, 2},
  [31] =
    {field_name, 0},
    {field_parameter, 3},
  [33] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [36] =
    {field_parameter, 1},
  [37] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [39] =
    {field_alias, 4},
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [42] =
    {field_alias, 4},
    {field_name, 2},
    {field_table_alias, 0},
  [45] =
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [48] =
    {field_index_name, 3},
  [49] =
    {field_name, 1, .inherited = true},
  [50] =
    {field_name, 0},
    {field_type, 1},
  [52] =
    {field_schema, 2},
  [53] =
    {field_name, 2},
  [54] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 3},
  [57] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [60] =
    {field_alias, 5},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [64] =
    {field_name, 0, .inherited = true},
  [65] =
    {field_name, 0},
    {field_value, 2},
  [67] =
    {field_name, 3},
  [68] =
    {field_new_name, 3},
    {field_old_name, 1},
  [70] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 4},
  [73] =
    {field_name, 0},
    {field_parameter, 4},
  [75] =
    {field_alias, 6},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [79] =
    {field_index_name, 5},
  [80] =
    {field_name, 2},
    {field_type, 4},
  [82] =
    {field_new_name, 4},
    {field_old_name, 2},
  [84] =
    {field_name, 1},
  [85] =
    {field_size, 2},
  [86] =
    {field_precision, 2},
  [87] =
    {field_name, 2},
    {field_type, 6},
  [89] =
    {field_precision, 2},
    {field_scale, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [15] = {
    [0] = sym_identifier,
  },
  [43] = {
    [2] = sym_literal,
  },
  [44] = {
    [2] = sym_literal,
  },
  [46] = {
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
          lookahead == ' ') SKIP(759)
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
          lookahead == ' ') SKIP(753)
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
          lookahead == ' ') SKIP(760)
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
          lookahead == ' ') SKIP(755)
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
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1144);
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
          lookahead == ' ') SKIP(767)
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
          lookahead == ' ') SKIP(770)
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
          lookahead == ' ') SKIP(775)
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
          lookahead == ' ') SKIP(769)
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
          lookahead == ' ') SKIP(768)
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
          lookahead == ' ') SKIP(777)
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
          lookahead == ' ') SKIP(766)
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
          lookahead == ' ') SKIP(771)
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
    case 760:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(760)
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
      if (lookahead == '`') ADVANCE(978);
      if (lookahead == 'c') ADVANCE(1144);
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
    case 767:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(767)
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
    case 768:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(768)
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
    case 769:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(769)
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
    case 770:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(770)
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
    case 771:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(771)
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
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 14},
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
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 18},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 17},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 18},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 18},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 18},
  [171] = {.lex_state = 18},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 18},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 28},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 33},
  [184] = {.lex_state = 33},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 33},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 28},
  [191] = {.lex_state = 28},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 28},
  [195] = {.lex_state = 33},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 37},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 20},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 18},
  [211] = {.lex_state = 20},
  [212] = {.lex_state = 29},
  [213] = {.lex_state = 37},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 20},
  [217] = {.lex_state = 29},
  [218] = {.lex_state = 18},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 20},
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
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 20},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 20},
  [250] = {.lex_state = 23},
  [251] = {.lex_state = 23},
  [252] = {.lex_state = 20},
  [253] = {.lex_state = 23},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 20},
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
  [289] = {.lex_state = 20},
  [290] = {.lex_state = 20},
  [291] = {.lex_state = 20},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 23},
  [298] = {.lex_state = 27},
  [299] = {.lex_state = 23},
  [300] = {.lex_state = 24},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 24},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 27},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 27},
  [309] = {.lex_state = 27},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 24},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 24},
  [314] = {.lex_state = 27},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 22},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 24},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 22},
  [325] = {.lex_state = 26},
  [326] = {.lex_state = 27},
  [327] = {.lex_state = 22},
  [328] = {.lex_state = 27},
  [329] = {.lex_state = 24},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 27},
  [333] = {.lex_state = 27},
  [334] = {.lex_state = 22},
  [335] = {.lex_state = 7},
  [336] = {.lex_state = 27},
  [337] = {.lex_state = 7},
  [338] = {.lex_state = 34},
  [339] = {.lex_state = 26},
  [340] = {.lex_state = 7},
  [341] = {.lex_state = 26},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 26},
  [346] = {.lex_state = 7},
  [347] = {.lex_state = 24},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 24},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 24},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 34},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 26},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 25},
  [363] = {.lex_state = 22},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 26},
  [368] = {.lex_state = 34},
  [369] = {.lex_state = 26},
  [370] = {.lex_state = 34},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 35},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 7},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 20},
  [381] = {.lex_state = 22},
  [382] = {.lex_state = 36},
  [383] = {.lex_state = 22},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 38},
  [387] = {.lex_state = 25},
  [388] = {.lex_state = 36},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 22},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 18},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 35},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 22},
  [398] = {.lex_state = 18},
  [399] = {.lex_state = 35},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 35},
  [402] = {.lex_state = 36},
  [403] = {.lex_state = 22},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 25},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 18},
  [412] = {.lex_state = 25},
  [413] = {.lex_state = 26},
  [414] = {.lex_state = 18},
  [415] = {.lex_state = 38},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 26},
  [419] = {.lex_state = 18},
  [420] = {.lex_state = 26},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 42},
  [426] = {.lex_state = 42},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 42},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 41},
  [432] = {.lex_state = 25},
  [433] = {.lex_state = 42},
  [434] = {.lex_state = 42},
  [435] = {.lex_state = 42},
  [436] = {.lex_state = 42},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 41},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 42},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 42},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 42},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 25},
  [450] = {.lex_state = 42},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 25},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 20},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 25},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 40},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 42},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 25},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 25},
  [482] = {.lex_state = 20},
  [483] = {.lex_state = 20},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 20},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 20},
  [488] = {.lex_state = 20},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 20},
  [491] = {.lex_state = 20},
  [492] = {.lex_state = 20},
  [493] = {.lex_state = 20},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 23},
  [496] = {.lex_state = 20},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 20},
  [499] = {.lex_state = 20},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 20},
  [502] = {.lex_state = 36},
  [503] = {.lex_state = 20},
  [504] = {.lex_state = 36},
  [505] = {.lex_state = 20},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 23},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 36},
  [510] = {.lex_state = 20},
  [511] = {.lex_state = 36},
  [512] = {.lex_state = 20},
  [513] = {.lex_state = 36},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 23},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 36},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 36},
  [521] = {.lex_state = 23},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 23},
  [524] = {.lex_state = 20},
  [525] = {.lex_state = 23},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 20},
  [528] = {.lex_state = 20},
  [529] = {.lex_state = 23},
  [530] = {.lex_state = 20},
  [531] = {.lex_state = 20},
  [532] = {.lex_state = 20},
  [533] = {.lex_state = 20},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 20},
  [537] = {.lex_state = 20},
  [538] = {.lex_state = 20},
  [539] = {.lex_state = 20},
  [540] = {.lex_state = 20},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 20},
  [543] = {.lex_state = 20},
  [544] = {.lex_state = 20},
  [545] = {.lex_state = 20},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 20},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 20},
  [551] = {.lex_state = 20},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 20},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 20},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 20},
  [560] = {.lex_state = 20},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 20},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 20},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 20},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 20},
  [576] = {.lex_state = 20},
  [577] = {.lex_state = 20},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 20},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 20},
  [584] = {.lex_state = 20},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 20},
  [587] = {.lex_state = 20},
  [588] = {.lex_state = 20},
  [589] = {.lex_state = 20},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 20},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 20},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 20},
  [601] = {.lex_state = 20},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 20},
  [604] = {.lex_state = 20},
  [605] = {.lex_state = 23},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 20},
  [608] = {.lex_state = 20},
  [609] = {.lex_state = 20},
  [610] = {.lex_state = 20},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 20},
  [614] = {.lex_state = 20},
  [615] = {.lex_state = 20},
  [616] = {.lex_state = 20},
  [617] = {.lex_state = 20},
  [618] = {.lex_state = 20},
  [619] = {.lex_state = 20},
  [620] = {.lex_state = 20},
  [621] = {.lex_state = 20},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 20},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 20},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 20},
  [631] = {.lex_state = 20},
  [632] = {.lex_state = 20},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 20},
  [636] = {.lex_state = 20},
  [637] = {.lex_state = 20},
  [638] = {.lex_state = 20},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 20},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 20},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 20},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 20},
  [654] = {.lex_state = 20},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 20},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 20},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 20},
  [665] = {.lex_state = 20},
  [666] = {.lex_state = 20},
  [667] = {.lex_state = 20},
  [668] = {.lex_state = 20},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 20},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 8},
  [689] = {.lex_state = 8},
  [690] = {.lex_state = 23},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 20},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 8},
  [703] = {.lex_state = 7},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 8},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
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
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 23},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 23},
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
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 23},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 23},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 23},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 43},
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
  [814] = {.lex_state = 23},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 7},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 7},
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
  [850] = {.lex_state = 23},
  [851] = {.lex_state = 964},
  [852] = {.lex_state = 973},
  [853] = {.lex_state = 20},
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
  [867] = {.lex_state = 964},
  [868] = {.lex_state = 973},
  [869] = {.lex_state = 20},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 20},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 20},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 20},
  [887] = {.lex_state = 20},
  [888] = {.lex_state = 20},
  [889] = {.lex_state = 20},
  [890] = {.lex_state = 20},
  [891] = {.lex_state = 20},
  [892] = {.lex_state = 20},
  [893] = {.lex_state = 20},
  [894] = {.lex_state = 20},
  [895] = {.lex_state = 20},
  [896] = {.lex_state = 20},
  [897] = {.lex_state = 20},
  [898] = {.lex_state = 20},
  [899] = {.lex_state = 20},
  [900] = {.lex_state = 20},
  [901] = {.lex_state = 20},
  [902] = {.lex_state = 20},
  [903] = {.lex_state = 20},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 23},
  [906] = {.lex_state = 20},
  [907] = {.lex_state = 973},
  [908] = {.lex_state = 964},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
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
    [sym_program] = STATE(921),
    [sym_statement] = STATE(919),
    [sym__select_statement] = STATE(918),
    [sym_select] = STATE(555),
    [sym__delete_statement] = STATE(918),
    [sym_delete] = STATE(716),
    [sym__create_statement] = STATE(918),
    [sym_create_table] = STATE(918),
    [sym_create_view] = STATE(918),
    [sym_create_materialized_view] = STATE(918),
    [sym__alter_statement] = STATE(918),
    [sym_alter_table] = STATE(918),
    [sym_alter_view] = STATE(918),
    [sym__drop_statement] = STATE(918),
    [sym_drop_table] = STATE(918),
    [sym_drop_view] = STATE(918),
    [sym__insert_statement] = STATE(918),
    [sym_insert] = STATE(918),
    [sym__update_statement] = STATE(918),
    [sym_update] = STATE(918),
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
    STATE(312), 1,
      sym_keyword_char,
    STATE(319), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(705), 10,
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
    STATE(312), 1,
      sym_keyword_char,
    STATE(319), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(293), 10,
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
    STATE(312), 1,
      sym_keyword_char,
    STATE(319), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(718), 10,
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
  [470] = 8,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(79), 1,
      sym_keyword_as,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(17), 1,
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
    STATE(17), 1,
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
  [568] = 3,
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
  [606] = 3,
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
  [917] = 3,
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
    ACTIONS(99), 20,
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
  [952] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(105), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 20,
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
  [987] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 9,
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
  [1024] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(113), 11,
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
  [1061] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 20,
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
  [1096] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 20,
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
  [1131] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 20,
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
  [1166] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 20,
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
  [1201] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 20,
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
  [1236] = 3,
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
  [1271] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 9,
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
  [1308] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(143), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 20,
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
  [1343] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 20,
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
  [1378] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 20,
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
  [1413] = 3,
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
  [1448] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 11,
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
  [1485] = 11,
    ACTIONS(97), 1,
      sym_keyword_or,
    ACTIONS(155), 1,
      sym_keyword_in,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 11,
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
  [1535] = 6,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 16,
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
  [1575] = 11,
    ACTIONS(97), 1,
      sym_keyword_or,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      sym_keyword_in,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(185), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 11,
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
  [1625] = 9,
    ACTIONS(155), 1,
      sym_keyword_in,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 15,
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
  [1671] = 4,
    ACTIONS(167), 1,
      anon_sym_CARET,
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
    ACTIONS(95), 18,
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
  [1707] = 6,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 16,
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
  [1747] = 8,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 15,
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
  [1791] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 21,
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
  [1825] = 4,
    ACTIONS(175), 1,
      anon_sym_CARET,
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
    ACTIONS(95), 18,
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
  [1861] = 8,
    ACTIONS(187), 1,
      sym_keyword_as,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    STATE(85), 1,
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
  [1905] = 8,
    ACTIONS(187), 1,
      sym_keyword_as,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(195), 1,
      anon_sym_DOT,
    STATE(85), 1,
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
  [1949] = 8,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(199), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [1993] = 8,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 15,
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
  [2037] = 8,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(201), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [2081] = 8,
    ACTIONS(187), 1,
      sym_keyword_as,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(85), 1,
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
  [2125] = 8,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [2169] = 9,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      sym_keyword_in,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 15,
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
  [2215] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 21,
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
  [2249] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(143), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 20,
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
  [2282] = 3,
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
  [2315] = 8,
    ACTIONS(187), 1,
      sym_keyword_as,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(207), 1,
      anon_sym_DOT,
    STATE(85), 1,
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
  [2358] = 3,
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
  [2391] = 3,
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
  [2424] = 8,
    ACTIONS(187), 1,
      sym_keyword_as,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(85), 1,
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
  [2467] = 3,
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
  [2500] = 7,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    STATE(95), 1,
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
  [2541] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 20,
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
  [2574] = 7,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    STATE(95), 1,
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
  [2615] = 8,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [2658] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 20,
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
  [2691] = 8,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(197), 1,
      sym_keyword_as,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [2734] = 7,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    STATE(95), 1,
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
  [2775] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(137), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 20,
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
  [2808] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 20,
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
  [2841] = 3,
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
  [2874] = 3,
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
  [2907] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 20,
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
  [2972] = 3,
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
  [3004] = 3,
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
  [3036] = 3,
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
  [3068] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 18,
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
  [3100] = 3,
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
  [3132] = 7,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    STATE(95), 1,
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
  [3172] = 3,
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
  [3204] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 18,
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
  [3236] = 8,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    STATE(62), 1,
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
  [3278] = 3,
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
  [3310] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 18,
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
  [3342] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 18,
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
  [3374] = 7,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    STATE(95), 1,
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
  [3414] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(143), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 18,
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
  [3446] = 9,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(62), 1,
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
  [3490] = 8,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym_keyword_as,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(72), 1,
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
  [3532] = 3,
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
  [3564] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 18,
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
  [3596] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 18,
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
  [3628] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 18,
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
  [3660] = 3,
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
  [3692] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 18,
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
  [3724] = 8,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(62), 1,
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
  [3766] = 3,
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
  [3798] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(105), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 18,
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
  [3830] = 3,
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
  [3862] = 3,
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
  [3894] = 8,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym_keyword_as,
    ACTIONS(233), 1,
      anon_sym_DOT,
    STATE(72), 1,
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
  [3936] = 3,
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
  [3968] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(65), 1,
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
  [4007] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(65), 1,
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
  [4046] = 3,
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
    STATE(451), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(237), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(109), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 10,
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
    ACTIONS(241), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 14,
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
  [4175] = 17,
    ACTIONS(243), 1,
      sym_keyword_select,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(172), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(572), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(880), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4232] = 17,
    ACTIONS(243), 1,
      sym_keyword_select,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(172), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(572), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(875), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4289] = 8,
    ACTIONS(261), 1,
      anon_sym_PLUS,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [4328] = 17,
    ACTIONS(243), 1,
      sym_keyword_select,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(172), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(572), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(749), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4385] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(269), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(111), 10,
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
  [4416] = 8,
    ACTIONS(241), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_PLUS,
    ACTIONS(275), 1,
      anon_sym_DASH,
    ACTIONS(277), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [4455] = 11,
    ACTIONS(97), 1,
      sym_keyword_or,
    ACTIONS(241), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_PLUS,
    ACTIONS(275), 1,
      anon_sym_DASH,
    ACTIONS(277), 1,
      anon_sym_SLASH,
    ACTIONS(279), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(283), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(281), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4500] = 6,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
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
  [4535] = 9,
    ACTIONS(241), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_PLUS,
    ACTIONS(275), 1,
      anon_sym_DASH,
    ACTIONS(277), 1,
      anon_sym_SLASH,
    ACTIONS(279), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 10,
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
  [4576] = 4,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 14,
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
  [4607] = 6,
    ACTIONS(265), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
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
  [4642] = 9,
    ACTIONS(261), 1,
      anon_sym_PLUS,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(291), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 10,
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
  [4683] = 9,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(293), 1,
      sym_keyword_in,
    ACTIONS(295), 1,
      anon_sym_PLUS,
    ACTIONS(297), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 10,
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
  [4724] = 11,
    ACTIONS(97), 1,
      sym_keyword_or,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(293), 1,
      sym_keyword_in,
    ACTIONS(295), 1,
      anon_sym_PLUS,
    ACTIONS(297), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [4769] = 8,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(295), 1,
      anon_sym_PLUS,
    ACTIONS(297), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [4808] = 12,
    ACTIONS(241), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_PLUS,
    ACTIONS(275), 1,
      anon_sym_DASH,
    ACTIONS(277), 1,
      anon_sym_SLASH,
    ACTIONS(279), 1,
      sym_keyword_in,
    ACTIONS(305), 1,
      sym_keyword_and,
    ACTIONS(307), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(283), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(281), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(303), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4855] = 12,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(293), 1,
      sym_keyword_in,
    ACTIONS(295), 1,
      anon_sym_PLUS,
    ACTIONS(297), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      sym_keyword_and,
    ACTIONS(311), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(303), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [4902] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(111), 10,
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
  [4933] = 6,
    ACTIONS(241), 1,
      anon_sym_CARET,
    ACTIONS(277), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
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
  [4968] = 4,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 14,
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
  [4999] = 17,
    ACTIONS(243), 1,
      sym_keyword_select,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(172), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(572), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(861), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5056] = 11,
    ACTIONS(97), 1,
      sym_keyword_or,
    ACTIONS(261), 1,
      anon_sym_PLUS,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(291), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(315), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5101] = 17,
    ACTIONS(243), 1,
      sym_keyword_select,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(172), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(572), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(885), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5158] = 6,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(319), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [5192] = 8,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(329), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 10,
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
  [5230] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(335), 1,
      sym_keyword_distinct,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(806), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5284] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(337), 1,
      sym_keyword_distinct,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(771), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5338] = 4,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 13,
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
  [5368] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(741), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(641), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5422] = 3,
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
  [5450] = 9,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(339), 1,
      sym_keyword_in,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(343), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(319), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5490] = 6,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [5524] = 4,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 13,
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
  [5554] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(773), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(641), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5608] = 9,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(329), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5648] = 11,
    ACTIONS(97), 1,
      sym_keyword_or,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(329), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5692] = 16,
    ACTIONS(353), 1,
      sym_keyword_inner,
    ACTIONS(355), 1,
      sym_keyword_join,
    ACTIONS(357), 1,
      sym_keyword_where,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(361), 1,
      sym_keyword_group_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(198), 1,
      sym_index_hint,
    STATE(366), 1,
      sym_where,
    STATE(424), 1,
      sym_group_by,
    STATE(475), 1,
      sym_order_by,
    STATE(552), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(365), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(367), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(188), 2,
      sym_join,
      aux_sym_from_repeat1,
  [5746] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(369), 1,
      sym_keyword_distinct,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(778), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5800] = 11,
    ACTIONS(97), 1,
      sym_keyword_or,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(339), 1,
      sym_keyword_in,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(343), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(319), 2,
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
    ACTIONS(95), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [5844] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 15,
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
  [5872] = 6,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(522), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(237), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(109), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 11,
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
  [5906] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(105), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 15,
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
  [5934] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(742), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(641), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5988] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(377), 1,
      sym_keyword_distinct,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(739), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6042] = 8,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(343), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(319), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 10,
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
  [6080] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(379), 1,
      sym_keyword_distinct,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(797), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6134] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 15,
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
  [6162] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(799), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(641), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6216] = 16,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(383), 1,
      sym_keyword_inner,
    ACTIONS(385), 1,
      sym_keyword_join,
    ACTIONS(387), 1,
      sym_keyword_where,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_group_by,
    STATE(196), 1,
      sym_index_hint,
    STATE(364), 1,
      sym_where,
    STATE(454), 1,
      sym_group_by,
    STATE(475), 1,
      sym_order_by,
    STATE(552), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(367), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    ACTIONS(381), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(192), 2,
      sym_join,
      aux_sym_from_repeat1,
  [6270] = 16,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    STATE(804), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(641), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6324] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 15,
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
  [6352] = 4,
    ACTIONS(393), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 13,
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
  [6381] = 8,
    ACTIONS(397), 1,
      anon_sym_PLUS,
    ACTIONS(399), 1,
      anon_sym_DASH,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 10,
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
  [6418] = 15,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(738), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6469] = 10,
    ACTIONS(397), 1,
      anon_sym_PLUS,
    ACTIONS(399), 1,
      anon_sym_DASH,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_CARET,
    ACTIONS(407), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(411), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(409), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6510] = 9,
    ACTIONS(397), 1,
      anon_sym_PLUS,
    ACTIONS(399), 1,
      anon_sym_DASH,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_CARET,
    ACTIONS(407), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6549] = 4,
    ACTIONS(403), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 13,
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
  [6578] = 6,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [6611] = 10,
    ACTIONS(393), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      sym_keyword_in,
    ACTIONS(419), 1,
      anon_sym_PLUS,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6652] = 8,
    ACTIONS(393), 1,
      anon_sym_CARET,
    ACTIONS(419), 1,
      anon_sym_PLUS,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 10,
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
  [6689] = 6,
    ACTIONS(393), 1,
      anon_sym_CARET,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [6722] = 15,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(752), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6773] = 15,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(744), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6824] = 6,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(629), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 11,
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
  [6857] = 15,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(800), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6908] = 9,
    ACTIONS(393), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      sym_keyword_in,
    ACTIONS(419), 1,
      anon_sym_PLUS,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6947] = 15,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(775), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6998] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 3,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(109), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 11,
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
  [7027] = 12,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(329), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      sym_keyword_in,
    ACTIONS(439), 1,
      sym_keyword_and,
    ACTIONS(441), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(347), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7072] = 15,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(257), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(179), 2,
      sym_field,
      sym_predicate,
    STATE(669), 2,
      sym_function_call,
      sym__function_param,
    STATE(201), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [7123] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(431), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(109), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 11,
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
  [7151] = 11,
    ACTIONS(393), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      sym_keyword_in,
    ACTIONS(419), 1,
      anon_sym_PLUS,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(443), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(415), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7193] = 8,
    ACTIONS(451), 1,
      sym_keyword_as,
    ACTIONS(453), 1,
      anon_sym_DOT,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(447), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [7229] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(431), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(109), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 11,
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
  [7257] = 8,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(459), 1,
      sym_keyword_as,
    ACTIONS(461), 1,
      anon_sym_DOT,
    STATE(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(447), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [7293] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(467), 1,
      sym_keyword_as,
    STATE(253), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(465), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(463), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [7326] = 15,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(469), 1,
      sym_keyword_distinct,
    ACTIONS(471), 1,
      sym_keyword_count,
    ACTIONS(473), 1,
      anon_sym_STAR,
    ACTIONS(475), 1,
      anon_sym_BQUOTE,
    ACTIONS(477), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(325), 1,
      sym_identifier,
    STATE(369), 1,
      sym__count_function,
    STATE(519), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(472), 2,
      sym_field,
      sym_function_call,
    STATE(518), 2,
      sym__field_list,
      sym_literal,
  [7375] = 15,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(473), 1,
      anon_sym_STAR,
    ACTIONS(479), 1,
      sym_keyword_distinct,
    ACTIONS(481), 1,
      sym_keyword_count,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(320), 1,
      sym_identifier,
    STATE(363), 1,
      sym__count_function,
    STATE(519), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(462), 2,
      sym_field,
      sym_function_call,
    STATE(518), 2,
      sym__field_list,
      sym_literal,
  [7424] = 3,
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
  [7449] = 14,
    ACTIONS(353), 1,
      sym_keyword_inner,
    ACTIONS(355), 1,
      sym_keyword_join,
    ACTIONS(357), 1,
      sym_keyword_where,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(361), 1,
      sym_keyword_group_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(357), 1,
      sym_where,
    STATE(441), 1,
      sym_group_by,
    STATE(457), 1,
      sym_order_by,
    STATE(626), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(487), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7496] = 15,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(473), 1,
      anon_sym_STAR,
    ACTIONS(481), 1,
      sym_keyword_count,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym__literal_string,
    STATE(320), 1,
      sym_identifier,
    STATE(363), 1,
      sym__count_function,
    STATE(497), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(462), 2,
      sym_field,
      sym_function_call,
    STATE(518), 2,
      sym__field_list,
      sym_literal,
  [7545] = 3,
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
  [7570] = 3,
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
  [7595] = 14,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(383), 1,
      sym_keyword_inner,
    ACTIONS(385), 1,
      sym_keyword_join,
    ACTIONS(387), 1,
      sym_keyword_where,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_group_by,
    STATE(377), 1,
      sym_where,
    STATE(443), 1,
      sym_group_by,
    STATE(457), 1,
      sym_order_by,
    STATE(626), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(487), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(302), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7642] = 14,
    ACTIONS(353), 1,
      sym_keyword_inner,
    ACTIONS(355), 1,
      sym_keyword_join,
    ACTIONS(357), 1,
      sym_keyword_where,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(361), 1,
      sym_keyword_group_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(379), 1,
      sym_where,
    STATE(447), 1,
      sym_group_by,
    STATE(456), 1,
      sym_order_by,
    STATE(643), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7689] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(493), 1,
      sym_keyword_as,
    STATE(253), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(465), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(463), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [7722] = 3,
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
  [7747] = 14,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(383), 1,
      sym_keyword_inner,
    ACTIONS(385), 1,
      sym_keyword_join,
    ACTIONS(387), 1,
      sym_keyword_where,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_group_by,
    STATE(377), 1,
      sym_where,
    STATE(443), 1,
      sym_group_by,
    STATE(457), 1,
      sym_order_by,
    STATE(626), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(487), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(200), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7794] = 15,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(471), 1,
      sym_keyword_count,
    ACTIONS(473), 1,
      anon_sym_STAR,
    ACTIONS(475), 1,
      anon_sym_BQUOTE,
    ACTIONS(477), 1,
      sym__identifier,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym__literal_string,
    STATE(325), 1,
      sym_identifier,
    STATE(369), 1,
      sym__count_function,
    STATE(497), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(472), 2,
      sym_field,
      sym_function_call,
    STATE(518), 2,
      sym__field_list,
      sym_literal,
  [7843] = 14,
    ACTIONS(353), 1,
      sym_keyword_inner,
    ACTIONS(355), 1,
      sym_keyword_join,
    ACTIONS(357), 1,
      sym_keyword_where,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(361), 1,
      sym_keyword_group_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(357), 1,
      sym_where,
    STATE(441), 1,
      sym_group_by,
    STATE(457), 1,
      sym_order_by,
    STATE(626), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(487), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(193), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7890] = 11,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      sym_keyword_in,
    ACTIONS(419), 1,
      anon_sym_PLUS,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(443), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(415), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7931] = 14,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(383), 1,
      sym_keyword_inner,
    ACTIONS(385), 1,
      sym_keyword_join,
    ACTIONS(387), 1,
      sym_keyword_where,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_group_by,
    STATE(355), 1,
      sym_where,
    STATE(429), 1,
      sym_group_by,
    STATE(456), 1,
      sym_order_by,
    STATE(643), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(491), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(302), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7978] = 10,
    ACTIONS(393), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      sym_keyword_in,
    ACTIONS(419), 1,
      anon_sym_PLUS,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(443), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(415), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8016] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(243), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(497), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(495), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [8046] = 10,
    ACTIONS(261), 1,
      anon_sym_PLUS,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(291), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(499), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(315), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8084] = 11,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    STATE(421), 1,
      sym_where_expression,
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
  [8124] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    STATE(421), 1,
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
  [8164] = 14,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(515), 1,
      sym_keyword_count,
    ACTIONS(517), 1,
      anon_sym_STAR,
    ACTIONS(519), 1,
      anon_sym_BQUOTE,
    ACTIONS(521), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(298), 1,
      sym_identifier,
    STATE(314), 1,
      sym__count_function,
    STATE(516), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(396), 2,
      sym_field,
      sym_function_call,
    STATE(407), 2,
      sym__field_list,
      sym_literal,
  [8210] = 10,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(523), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(185), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(525), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(179), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8248] = 11,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(50), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    STATE(421), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(125), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8288] = 10,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(531), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(533), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(157), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8326] = 14,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(517), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      sym_keyword_count,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(300), 1,
      sym_identifier,
    STATE(313), 1,
      sym__count_function,
    STATE(516), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(391), 2,
      sym_field,
      sym_function_call,
    STATE(407), 2,
      sym__field_list,
      sym_literal,
  [8372] = 11,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    STATE(421), 1,
      sym_where_expression,
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
  [8412] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(243), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(497), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(495), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8442] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(250), 1,
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
  [8472] = 10,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(339), 1,
      sym_keyword_in,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(343), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(319), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(373), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(371), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8510] = 12,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    STATE(149), 1,
      sym_predicate,
    STATE(651), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(219), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8552] = 12,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    STATE(107), 1,
      sym_predicate,
    STATE(400), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8594] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(250), 1,
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
  [8624] = 14,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(473), 1,
      anon_sym_STAR,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(362), 1,
      sym_identifier,
    STATE(432), 1,
      sym__count_function,
    STATE(807), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(518), 2,
      sym__field_list,
      sym_literal,
    STATE(660), 2,
      sym_field,
      sym_function_call,
  [8670] = 10,
    ACTIONS(397), 1,
      anon_sym_PLUS,
    ACTIONS(399), 1,
      anon_sym_DASH,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_CARET,
    ACTIONS(407), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(411), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(555), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(409), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8708] = 10,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(329), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(439), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(347), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8746] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(50), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
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
  [8783] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(565), 1,
      anon_sym_BQUOTE,
    ACTIONS(567), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(32), 1,
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
  [8820] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    STATE(126), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8859] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8896] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
    STATE(93), 1,
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
  [8933] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(108), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8970] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
    STATE(93), 1,
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
  [9007] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
    STATE(93), 1,
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
  [9044] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(571), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(119), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9081] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
    STATE(93), 1,
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
  [9118] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(571), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
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
  [9155] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(565), 1,
      anon_sym_BQUOTE,
    ACTIONS(567), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(32), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(18), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9192] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(571), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9229] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(565), 1,
      anon_sym_BQUOTE,
    ACTIONS(567), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(32), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(41), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9266] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(565), 1,
      anon_sym_BQUOTE,
    ACTIONS(567), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(32), 1,
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
  [9303] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(565), 1,
      anon_sym_BQUOTE,
    ACTIONS(567), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(32), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(39), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9340] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(571), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(128), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9377] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(565), 1,
      anon_sym_BQUOTE,
    ACTIONS(567), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(32), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(36), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9414] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(35), 1,
      sym_predicate,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9453] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(571), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(130), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9490] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(571), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
    STATE(93), 1,
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
  [9527] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(138), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9564] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 14,
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
  [9585] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
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
  [9622] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
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
  [9659] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
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
  [9696] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
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
  [9733] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
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
  [9770] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(30), 1,
      sym_predicate,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
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
  [9809] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(575), 14,
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
  [9830] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 14,
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
  [9851] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(133), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9888] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(579), 14,
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
  [9909] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(93), 1,
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
  [9946] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
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
  [9983] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(93), 1,
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
  [10020] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(93), 1,
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
  [10057] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
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
  [10094] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10131] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(22), 1,
      sym_predicate,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10170] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    STATE(176), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(219), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10209] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(138), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10246] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(166), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10283] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(22), 1,
      sym_predicate,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
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
  [10322] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(50), 1,
      sym_identifier,
    STATE(93), 1,
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
  [10359] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(30), 1,
      sym_predicate,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10398] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(82), 1,
      sym_identifier,
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
  [10435] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    STATE(113), 1,
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
  [10474] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(82), 1,
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
  [10511] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(23), 1,
      sym_predicate,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10550] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(82), 1,
      sym_identifier,
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
  [10587] = 10,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(161), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10624] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(50), 1,
      sym_identifier,
    STATE(93), 1,
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
  [10661] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(35), 1,
      sym_predicate,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
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
  [10700] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_identifier,
    STATE(113), 1,
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
  [10739] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(50), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(118), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10776] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(50), 1,
      sym_identifier,
    STATE(93), 1,
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
  [10813] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(50), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10850] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(93), 1,
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
  [10887] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(147), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10924] = 11,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(23), 1,
      sym_predicate,
    STATE(53), 1,
      sym__literal_string,
    STATE(96), 1,
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
  [10963] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(93), 1,
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
  [11000] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(136), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11037] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(132), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11074] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(32), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(18), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11111] = 10,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(93), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11148] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(32), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(37), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11185] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(32), 1,
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
  [11222] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(32), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(52), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11259] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(32), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(38), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11296] = 10,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym__number,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(32), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(42), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11333] = 9,
    ACTIONS(593), 1,
      sym_keyword_set,
    ACTIONS(595), 1,
      sym_keyword_alter,
    ACTIONS(597), 1,
      sym_keyword_drop,
    ACTIONS(599), 1,
      sym_keyword_add,
    ACTIONS(601), 1,
      sym_keyword_rename,
    ACTIONS(603), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(602), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(747), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [11367] = 10,
    ACTIONS(607), 1,
      sym_keyword_primary,
    ACTIONS(609), 1,
      sym_keyword_not,
    ACTIONS(611), 1,
      sym_keyword_auto_increment,
    ACTIONS(613), 1,
      sym_keyword_default,
    STATE(423), 1,
      sym__primary_key,
    STATE(612), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(342), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(615), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11403] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(617), 13,
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
  [11423] = 2,
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
  [11443] = 9,
    ACTIONS(593), 1,
      sym_keyword_set,
    ACTIONS(595), 1,
      sym_keyword_alter,
    ACTIONS(597), 1,
      sym_keyword_drop,
    ACTIONS(599), 1,
      sym_keyword_add,
    ACTIONS(601), 1,
      sym_keyword_rename,
    ACTIONS(603), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(549), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(767), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [11477] = 3,
    ACTIONS(623), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(621), 12,
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
  [11499] = 9,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
    ACTIONS(627), 1,
      anon_sym_DOT,
    STATE(62), 1,
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
  [11532] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(629), 12,
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
  [11551] = 9,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_DOT,
    STATE(62), 1,
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
  [11584] = 13,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(635), 1,
      sym_keyword_primary,
    ACTIONS(637), 1,
      sym_keyword_key,
    ACTIONS(639), 1,
      sym_keyword_constraint,
    STATE(5), 1,
      sym_identifier,
    STATE(627), 1,
      sym_constraint,
    STATE(681), 1,
      sym__primary_key,
    STATE(682), 1,
      sym_column_definition,
    STATE(683), 1,
      sym__constraint_literal,
    STATE(684), 1,
      sym__primary_key_constraint,
    STATE(685), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11625] = 6,
    ACTIONS(644), 1,
      sym_keyword_inner,
    ACTIONS(647), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(641), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(302), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(650), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11652] = 6,
    ACTIONS(655), 1,
      sym_keyword_inner,
    ACTIONS(658), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(652), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(650), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11679] = 3,
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
  [11699] = 8,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym_keyword_as,
    ACTIONS(661), 1,
      anon_sym_DOT,
    STATE(72), 1,
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
  [11729] = 8,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym_keyword_as,
    ACTIONS(663), 1,
      anon_sym_DOT,
    STATE(72), 1,
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
  [11759] = 3,
    ACTIONS(667), 1,
      aux_sym_keyword_varchar_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 10,
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
  [11779] = 3,
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
  [11799] = 3,
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
  [11819] = 4,
    ACTIONS(671), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(673), 1,
      aux_sym_keyword_timestamp_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(669), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11841] = 3,
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
  [11861] = 3,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
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
  [11880] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(681), 1,
      sym_keyword_as,
    STATE(361), 1,
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
  [11907] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(681), 1,
      sym_keyword_as,
    STATE(361), 1,
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
  [11934] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(685), 10,
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
  [11951] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(687), 10,
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
  [11968] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 10,
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
  [11985] = 3,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12004] = 3,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(693), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12023] = 9,
    ACTIONS(61), 1,
      sym_keyword_from,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(697), 1,
      sym_keyword_as,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    ACTIONS(701), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12054] = 3,
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
  [12073] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(709), 1,
      sym_keyword_as,
    STATE(365), 1,
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
  [12100] = 3,
    ACTIONS(715), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(713), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12119] = 3,
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
  [12138] = 9,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(697), 1,
      sym_keyword_as,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    ACTIONS(719), 1,
      anon_sym_DOT,
    STATE(62), 1,
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
  [12169] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(65), 1,
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
  [12196] = 3,
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
  [12215] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(709), 1,
      sym_keyword_as,
    STATE(365), 1,
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
  [12242] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(65), 1,
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
  [12269] = 2,
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
  [12285] = 2,
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
  [12301] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(725), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [12319] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(729), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [12337] = 8,
    ACTIONS(75), 1,
      sym_keyword_from,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(733), 1,
      sym_keyword_as,
    ACTIONS(735), 1,
      anon_sym_DOT,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12365] = 2,
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
  [12381] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(741), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(739), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [12399] = 2,
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
  [12415] = 8,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(745), 1,
      sym_keyword_as,
    ACTIONS(747), 1,
      anon_sym_DOT,
    STATE(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(449), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [12443] = 3,
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
  [12461] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(749), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12477] = 3,
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
  [12495] = 7,
    ACTIONS(607), 1,
      sym_keyword_primary,
    ACTIONS(751), 1,
      sym_keyword_auto_increment,
    STATE(437), 1,
      sym__primary_key,
    STATE(585), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(753), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12521] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(755), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12537] = 2,
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
  [12553] = 8,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(733), 1,
      sym_keyword_as,
    ACTIONS(759), 1,
      anon_sym_DOT,
    STATE(72), 1,
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
  [12581] = 2,
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
  [12597] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(741), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(739), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12615] = 2,
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
  [12631] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(729), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12649] = 2,
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
  [12665] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(725), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12683] = 2,
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
  [12699] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(769), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12715] = 6,
    ACTIONS(607), 1,
      sym_keyword_primary,
    STATE(437), 1,
      sym__primary_key,
    STATE(585), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(753), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12738] = 8,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_group_by,
    STATE(427), 1,
      sym_group_by,
    STATE(480), 1,
      sym_order_by,
    STATE(597), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12765] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(773), 1,
      sym_keyword_as,
    STATE(253), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(465), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [12790] = 8,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(361), 1,
      sym_keyword_group_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(447), 1,
      sym_group_by,
    STATE(456), 1,
      sym_order_by,
    STATE(643), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12817] = 6,
    ACTIONS(607), 1,
      sym_keyword_primary,
    STATE(442), 1,
      sym__primary_key,
    STATE(566), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(775), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12840] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(777), 1,
      sym_keyword_as,
    STATE(65), 1,
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
  [12865] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(779), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12880] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(781), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12895] = 8,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(783), 1,
      sym_keyword_as,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12922] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(679), 1,
      sym_keyword_from,
    ACTIONS(787), 1,
      sym_keyword_as,
    STATE(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12947] = 8,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_group_by,
    STATE(443), 1,
      sym_group_by,
    STATE(457), 1,
      sym_order_by,
    STATE(626), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12974] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(789), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12989] = 8,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(361), 1,
      sym_keyword_group_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(441), 1,
      sym_group_by,
    STATE(457), 1,
      sym_order_by,
    STATE(626), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13016] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(791), 1,
      sym_keyword_as,
    STATE(365), 1,
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
  [13041] = 3,
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
  [13058] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(787), 1,
      sym_keyword_as,
    STATE(361), 1,
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
  [13083] = 3,
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
  [13100] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(793), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13115] = 2,
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
  [13130] = 8,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(797), 1,
      sym_keyword_default,
    ACTIONS(799), 1,
      anon_sym_SEMI,
    STATE(762), 1,
      sym_identifier,
    STATE(830), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13157] = 9,
    ACTIONS(607), 1,
      sym_keyword_primary,
    ACTIONS(801), 1,
      sym_keyword_key,
    ACTIONS(803), 1,
      sym_keyword_constraint,
    STATE(681), 1,
      sym__primary_key,
    STATE(683), 1,
      sym__constraint_literal,
    STATE(684), 1,
      sym__primary_key_constraint,
    STATE(685), 1,
      sym__key_constraint,
    STATE(708), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13186] = 8,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(797), 1,
      sym_keyword_default,
    ACTIONS(805), 1,
      anon_sym_SEMI,
    STATE(762), 1,
      sym_identifier,
    STATE(763), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13213] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(807), 1,
      sym_keyword_as,
    ACTIONS(809), 1,
      anon_sym_DOT,
    STATE(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [13238] = 8,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    ACTIONS(391), 1,
      sym_keyword_group_by,
    STATE(429), 1,
      sym_group_by,
    STATE(456), 1,
      sym_order_by,
    STATE(643), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13265] = 9,
    ACTIONS(811), 1,
      sym_keyword_table,
    ACTIONS(813), 1,
      sym_keyword_view,
    ACTIONS(815), 1,
      sym_keyword_materialized,
    ACTIONS(817), 1,
      sym_keyword_or,
    ACTIONS(819), 1,
      sym_keyword_temp,
    ACTIONS(821), 1,
      sym_keyword_temporary,
    STATE(710), 1,
      sym__or_replace,
    STATE(873), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13294] = 8,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(361), 1,
      sym_keyword_group_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(448), 1,
      sym_group_by,
    STATE(480), 1,
      sym_order_by,
    STATE(597), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13321] = 8,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(564), 1,
      sym_table_reference,
    STATE(878), 1,
      sym__table_references,
    STATE(882), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(879), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [13348] = 7,
    ACTIONS(85), 1,
      sym_keyword_from,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(777), 1,
      sym_keyword_as,
    STATE(65), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13373] = 8,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(797), 1,
      sym_keyword_default,
    ACTIONS(825), 1,
      anon_sym_SEMI,
    STATE(760), 1,
      sym_table_options,
    STATE(762), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13400] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(707), 1,
      sym_keyword_from,
    ACTIONS(791), 1,
      sym_keyword_as,
    STATE(365), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(711), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13425] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    STATE(53), 1,
      sym__literal_string,
    STATE(565), 1,
      sym_literal,
    STATE(567), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13451] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(827), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13465] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(243), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(495), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(497), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [13487] = 7,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(829), 1,
      sym_keyword_as,
    ACTIONS(831), 1,
      anon_sym_DOT,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13511] = 7,
    ACTIONS(833), 1,
      sym_keyword_default,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(838), 1,
      anon_sym_BQUOTE,
    ACTIONS(841), 1,
      sym__identifier,
    STATE(762), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(388), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13535] = 5,
    ACTIONS(593), 1,
      sym_keyword_set,
    ACTIONS(601), 1,
      sym_keyword_rename,
    ACTIONS(603), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(766), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [13555] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(739), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(741), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [13571] = 4,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(844), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13589] = 8,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(848), 1,
      sym_keyword_where,
    ACTIONS(850), 1,
      anon_sym_SEMI,
    STATE(467), 1,
      sym_where,
    STATE(557), 1,
      sym_order_by,
    STATE(753), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13615] = 7,
    ACTIONS(481), 1,
      sym_keyword_count,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    STATE(320), 1,
      sym_identifier,
    STATE(363), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(360), 2,
      sym_field,
      sym_function_call,
  [13639] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    STATE(53), 1,
      sym__literal_string,
    STATE(572), 1,
      sym_select,
    STATE(573), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13665] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(852), 1,
      sym_keyword_as,
    STATE(253), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [13687] = 4,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(844), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13705] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(725), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(727), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [13721] = 7,
    ACTIONS(471), 1,
      sym_keyword_count,
    ACTIONS(475), 1,
      anon_sym_BQUOTE,
    ACTIONS(477), 1,
      sym__identifier,
    STATE(325), 1,
      sym_identifier,
    STATE(369), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(360), 2,
      sym_field,
      sym_function_call,
  [13745] = 3,
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
  [13761] = 8,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(848), 1,
      sym_keyword_where,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    STATE(470), 1,
      sym_where,
    STATE(591), 1,
      sym_order_by,
    STATE(770), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13787] = 3,
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
  [13803] = 7,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(797), 1,
      sym_keyword_default,
    ACTIONS(858), 1,
      anon_sym_SEMI,
    STATE(762), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(388), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13827] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(729), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(731), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [13843] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    STATE(53), 1,
      sym__literal_string,
    STATE(648), 1,
      sym_literal,
    STATE(652), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13869] = 4,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(779), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13887] = 4,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(863), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13905] = 4,
    STATE(526), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(865), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13923] = 4,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(779), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13941] = 3,
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
  [13957] = 4,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(863), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13975] = 7,
    ACTIONS(535), 1,
      sym_keyword_count,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(313), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(360), 2,
      sym_field,
      sym_function_call,
  [13999] = 3,
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
  [14015] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(725), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14031] = 7,
    ACTIONS(515), 1,
      sym_keyword_count,
    ACTIONS(519), 1,
      anon_sym_BQUOTE,
    ACTIONS(521), 1,
      sym__identifier,
    STATE(298), 1,
      sym_identifier,
    STATE(314), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(360), 2,
      sym_field,
      sym_function_call,
  [14055] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(250), 1,
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
  [14077] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(870), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14091] = 5,
    ACTIONS(593), 1,
      sym_keyword_set,
    ACTIONS(601), 1,
      sym_keyword_rename,
    ACTIONS(603), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(728), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [14111] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(729), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14127] = 7,
    ACTIONS(245), 1,
      sym_keyword_count,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(553), 1,
      sym__identifier,
    STATE(362), 1,
      sym_identifier,
    STATE(432), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(360), 2,
      sym_field,
      sym_function_call,
  [14151] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(741), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(739), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14167] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(872), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14180] = 4,
    ACTIONS(876), 1,
      sym_keyword_having,
    STATE(461), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(874), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14197] = 4,
    STATE(585), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(753), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14214] = 6,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(457), 1,
      sym_order_by,
    STATE(626), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14235] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(878), 1,
      sym_keyword_if,
    STATE(5), 1,
      sym_identifier,
    STATE(531), 1,
      sym__if_not_exists,
    STATE(672), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14258] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(878), 1,
      sym_keyword_if,
    STATE(297), 1,
      sym_identifier,
    STATE(500), 1,
      sym__if_not_exists,
    STATE(787), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14281] = 6,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    STATE(460), 1,
      sym_order_by,
    STATE(574), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(880), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14302] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(878), 1,
      sym_keyword_if,
    STATE(297), 1,
      sym_identifier,
    STATE(496), 1,
      sym__if_not_exists,
    STATE(785), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14325] = 6,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    STATE(480), 1,
      sym_order_by,
    STATE(597), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14346] = 4,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [14363] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(250), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [14382] = 6,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(885), 1,
      sym_keyword_as,
    STATE(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14403] = 7,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(878), 1,
      sym_keyword_if,
    STATE(493), 1,
      sym__if_not_exists,
    STATE(661), 1,
      sym_identifier,
    STATE(670), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14426] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(878), 1,
      sym_keyword_if,
    STATE(297), 1,
      sym_identifier,
    STATE(510), 1,
      sym__if_not_exists,
    STATE(756), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14449] = 7,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(878), 1,
      sym_keyword_if,
    STATE(488), 1,
      sym__if_not_exists,
    STATE(661), 1,
      sym_identifier,
    STATE(687), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14472] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(887), 1,
      sym_keyword_if,
    STATE(297), 1,
      sym_identifier,
    STATE(483), 1,
      sym__if_exists,
    STATE(677), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14495] = 4,
    STATE(566), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(775), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14512] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(243), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(495), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [14531] = 5,
    ACTIONS(595), 1,
      sym_keyword_alter,
    ACTIONS(597), 1,
      sym_keyword_drop,
    ACTIONS(599), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(674), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [14550] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(887), 1,
      sym_keyword_if,
    STATE(297), 1,
      sym_identifier,
    STATE(484), 1,
      sym__if_exists,
    STATE(679), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14573] = 6,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(456), 1,
      sym_order_by,
    STATE(643), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14594] = 4,
    STATE(554), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(889), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14611] = 6,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    STATE(456), 1,
      sym_order_by,
    STATE(643), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14632] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(887), 1,
      sym_keyword_if,
    STATE(297), 1,
      sym_identifier,
    STATE(389), 1,
      sym_table_reference,
    STATE(486), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14655] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(891), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14668] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(887), 1,
      sym_keyword_if,
    STATE(296), 1,
      sym_table_reference,
    STATE(297), 1,
      sym_identifier,
    STATE(492), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14691] = 6,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(480), 1,
      sym_order_by,
    STATE(597), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14712] = 6,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(460), 1,
      sym_order_by,
    STATE(574), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(880), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14733] = 6,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(893), 1,
      sym_keyword_as,
    STATE(365), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(711), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14754] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(878), 1,
      sym_keyword_if,
    STATE(297), 1,
      sym_identifier,
    STATE(487), 1,
      sym__if_not_exists,
    STATE(814), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14777] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(895), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [14794] = 4,
    ACTIONS(897), 1,
      sym_keyword_having,
    STATE(461), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(874), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14811] = 6,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(899), 1,
      sym_keyword_as,
    STATE(65), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14832] = 6,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(389), 1,
      sym_keyword_order_by,
    STATE(457), 1,
      sym_order_by,
    STATE(626), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14853] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(580), 1,
      sym_table_reference,
    STATE(856), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14873] = 4,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(597), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14889] = 4,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(643), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14905] = 6,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    STATE(53), 1,
      sym__literal_string,
    STATE(598), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14925] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(729), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(731), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [14939] = 4,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(561), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(901), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14955] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(903), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14967] = 4,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(478), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(844), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14983] = 4,
    ACTIONS(907), 1,
      sym_keyword_offset,
    STATE(644), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(909), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14999] = 4,
    STATE(715), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(911), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15015] = 6,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    STATE(53), 1,
      sym__literal_string,
    STATE(676), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15035] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(913), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15047] = 6,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    STATE(628), 1,
      sym_order_by,
    STATE(755), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15067] = 4,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(779), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15083] = 6,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    STATE(53), 1,
      sym__literal_string,
    STATE(573), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15103] = 6,
    ACTIONS(359), 1,
      sym_keyword_order_by,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    STATE(647), 1,
      sym_order_by,
    STATE(732), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15123] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(922), 1,
      sym_keyword_column,
    ACTIONS(924), 1,
      sym_keyword_to,
    STATE(740), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15143] = 4,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    STATE(479), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(844), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15159] = 6,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__number,
    STATE(53), 1,
      sym__literal_string,
    STATE(463), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15179] = 6,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    ACTIONS(887), 1,
      sym_keyword_if,
    STATE(654), 1,
      sym__if_exists,
    STATE(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15199] = 4,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(626), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15215] = 4,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(476), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(779), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15231] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(725), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(727), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [15245] = 4,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(863), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15261] = 4,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    STATE(476), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(863), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15277] = 4,
    ACTIONS(363), 1,
      sym_keyword_limit,
    STATE(574), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(880), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15293] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(739), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(741), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [15307] = 5,
    ACTIONS(931), 1,
      anon_sym_BQUOTE,
    ACTIONS(933), 1,
      sym__identifier,
    STATE(376), 1,
      sym_identifier,
    STATE(529), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15324] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(721), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15341] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(722), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15358] = 5,
    ACTIONS(931), 1,
      anon_sym_BQUOTE,
    ACTIONS(933), 1,
      sym__identifier,
    STATE(376), 1,
      sym_identifier,
    STATE(515), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15375] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(417), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15392] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(787), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15409] = 5,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(661), 1,
      sym_identifier,
    STATE(670), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15426] = 4,
    ACTIONS(937), 1,
      sym_keyword_from,
    STATE(709), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(939), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15441] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(673), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15458] = 5,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(941), 1,
      sym__identifier,
    STATE(464), 1,
      sym_identifier,
    STATE(720), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15475] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(292), 1,
      sym_table_reference,
    STATE(297), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15492] = 5,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(661), 1,
      sym_identifier,
    STATE(693), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15509] = 5,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(590), 1,
      sym__column_without_order,
    STATE(700), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15526] = 4,
    ACTIONS(943), 1,
      sym_keyword_from,
    STATE(884), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15541] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(756), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15558] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(945), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15569] = 5,
    ACTIONS(947), 1,
      anon_sym_BQUOTE,
    ACTIONS(949), 1,
      sym__identifier,
    STATE(338), 1,
      sym_identifier,
    STATE(392), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15586] = 5,
    ACTIONS(951), 1,
      anon_sym_BQUOTE,
    ACTIONS(953), 1,
      sym__identifier,
    STATE(145), 1,
      sym_table_expression,
    STATE(181), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15603] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(751), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15620] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(508), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15637] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(955), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(957), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15650] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(682), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15667] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(959), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(961), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15680] = 5,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(941), 1,
      sym__identifier,
    STATE(464), 1,
      sym_identifier,
    STATE(571), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15697] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(963), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15708] = 4,
    ACTIONS(965), 1,
      sym_keyword_on,
    STATE(862), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15723] = 5,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(534), 1,
      aux_sym_column_definitions_repeat1,
    STATE(745), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15740] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(971), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(973), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15753] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(789), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15770] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(975), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(977), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15783] = 5,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(661), 1,
      sym_identifier,
    STATE(793), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15800] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(979), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(981), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15813] = 4,
    ACTIONS(983), 1,
      anon_sym_COMMA,
    STATE(514), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [15828] = 4,
    ACTIONS(986), 1,
      sym_keyword_on,
    STATE(781), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15843] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(988), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15854] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [15867] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(990), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15878] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(992), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15889] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [15902] = 4,
    ACTIONS(994), 1,
      sym_keyword_on,
    STATE(909), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15917] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(514), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(895), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [15932] = 4,
    ACTIONS(996), 1,
      sym_keyword_on,
    STATE(911), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15947] = 5,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(678), 1,
      sym__column_without_order,
    STATE(700), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15964] = 4,
    ACTIONS(998), 1,
      sym_keyword_on,
    STATE(912), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15979] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1000), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15990] = 5,
    ACTIONS(931), 1,
      anon_sym_BQUOTE,
    ACTIONS(933), 1,
      sym__identifier,
    STATE(376), 1,
      sym_identifier,
    STATE(521), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16007] = 5,
    ACTIONS(931), 1,
      anon_sym_BQUOTE,
    ACTIONS(933), 1,
      sym__identifier,
    STATE(376), 1,
      sym_identifier,
    STATE(523), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16024] = 4,
    ACTIONS(1002), 1,
      sym_keyword_on,
    STATE(802), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16039] = 5,
    ACTIONS(931), 1,
      anon_sym_BQUOTE,
    ACTIONS(933), 1,
      sym__identifier,
    STATE(376), 1,
      sym_identifier,
    STATE(507), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16056] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(692), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16073] = 5,
    ACTIONS(1004), 1,
      anon_sym_BQUOTE,
    ACTIONS(1006), 1,
      sym__identifier,
    STATE(157), 1,
      sym_table_expression,
    STATE(183), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16090] = 5,
    ACTIONS(931), 1,
      anon_sym_BQUOTE,
    ACTIONS(933), 1,
      sym__identifier,
    STATE(376), 1,
      sym_identifier,
    STATE(525), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16107] = 5,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      aux_sym_column_definitions_repeat1,
    STATE(816), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16124] = 4,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16138] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(694), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16152] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(372), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16166] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16180] = 4,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(1012), 1,
      sym__identifier,
    STATE(453), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16194] = 4,
    ACTIONS(1004), 1,
      anon_sym_BQUOTE,
    ACTIONS(1006), 1,
      sym__identifier,
    STATE(184), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16208] = 4,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    STATE(541), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16222] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(299), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16236] = 4,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(1012), 1,
      sym__identifier,
    STATE(387), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16250] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16264] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16278] = 4,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    STATE(541), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16292] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1019), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16306] = 4,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    STATE(548), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16320] = 4,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_SEMI,
    STATE(624), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16334] = 4,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16348] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(422), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16362] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16372] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(452), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16386] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1030), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16396] = 4,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    ACTIONS(1032), 1,
      sym_keyword_from,
    STATE(709), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16410] = 4,
    ACTIONS(951), 1,
      anon_sym_BQUOTE,
    ACTIONS(953), 1,
      sym__identifier,
    STATE(194), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16424] = 4,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    STATE(755), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16438] = 4,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    STATE(548), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16452] = 4,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(47), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16466] = 4,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(1038), 1,
      sym__identifier,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16480] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1040), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16490] = 4,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16504] = 4,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(1038), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16518] = 4,
    ACTIONS(1044), 1,
      sym_keyword_set,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    STATE(582), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16532] = 4,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(562), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16546] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(889), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16556] = 4,
    ACTIONS(1032), 1,
      sym_keyword_from,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(748), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16570] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16584] = 4,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    STATE(569), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16598] = 4,
    ACTIONS(931), 1,
      anon_sym_BQUOTE,
    ACTIONS(933), 1,
      sym__identifier,
    STATE(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16612] = 4,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16626] = 4,
    ACTIONS(1032), 1,
      sym_keyword_from,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(746), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16640] = 4,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16654] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(901), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16664] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16678] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(334), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16692] = 4,
    ACTIONS(191), 1,
      anon_sym_BQUOTE,
    ACTIONS(1038), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16706] = 4,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    STATE(633), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16720] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16734] = 4,
    ACTIONS(1067), 1,
      sym_keyword_values,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
    STATE(794), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16748] = 4,
    ACTIONS(1071), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1073), 1,
      anon_sym_SEMI,
    STATE(711), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16762] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      sym_keyword_set,
    STATE(650), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16776] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(299), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16790] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(381), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16804] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(775), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16814] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16828] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16842] = 4,
    ACTIONS(565), 1,
      anon_sym_BQUOTE,
    ACTIONS(567), 1,
      sym__identifier,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16856] = 4,
    ACTIONS(565), 1,
      anon_sym_BQUOTE,
    ACTIONS(567), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16870] = 4,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
    STATE(645), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16884] = 4,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    STATE(732), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16898] = 4,
    ACTIONS(519), 1,
      anon_sym_BQUOTE,
    ACTIONS(1081), 1,
      sym__identifier,
    STATE(326), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16912] = 4,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    STATE(569), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16926] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(555), 1,
      sym_select,
    STATE(733), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16940] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16954] = 4,
    ACTIONS(1087), 1,
      sym_keyword_select,
    STATE(489), 1,
      sym_select,
    STATE(662), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16968] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(880), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16978] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1089), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16988] = 4,
    ACTIONS(1087), 1,
      sym_keyword_select,
    STATE(489), 1,
      sym_select,
    STATE(611), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17002] = 4,
    ACTIONS(519), 1,
      anon_sym_BQUOTE,
    ACTIONS(1081), 1,
      sym__identifier,
    STATE(306), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17016] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(860), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17030] = 4,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
    STATE(657), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17044] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(791), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17058] = 4,
    ACTIONS(255), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17072] = 4,
    ACTIONS(1093), 1,
      sym_keyword_not,
    ACTIONS(1095), 1,
      sym_keyword_default,
    ACTIONS(1097), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17086] = 4,
    ACTIONS(1087), 1,
      sym_keyword_select,
    STATE(489), 1,
      sym_select,
    STATE(581), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17100] = 4,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17114] = 4,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17128] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(655), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17142] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(792), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17156] = 4,
    ACTIONS(1071), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1099), 1,
      anon_sym_SEMI,
    STATE(702), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17170] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(753), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17180] = 4,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(15), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17194] = 4,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17208] = 4,
    ACTIONS(475), 1,
      anon_sym_BQUOTE,
    ACTIONS(1101), 1,
      sym__identifier,
    STATE(359), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17222] = 4,
    ACTIONS(475), 1,
      anon_sym_BQUOTE,
    ACTIONS(1101), 1,
      sym__identifier,
    STATE(345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17236] = 4,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(103), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17250] = 4,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
    ACTIONS(583), 1,
      sym__identifier,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17264] = 4,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(571), 1,
      sym__identifier,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17278] = 4,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(571), 1,
      sym__identifier,
    STATE(49), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17292] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(941), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17306] = 4,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    STATE(622), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17320] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(795), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17334] = 4,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17348] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(941), 1,
      sym__identifier,
    STATE(372), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17362] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17372] = 4,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17386] = 4,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
    STATE(805), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17400] = 4,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17414] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(695), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17428] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1019), 1,
      sym__identifier,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17442] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17456] = 4,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    STATE(633), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17470] = 4,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    ACTIONS(1121), 1,
      anon_sym_COMMA,
    STATE(634), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17484] = 4,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(86), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17498] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(941), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17512] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(372), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17526] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17540] = 4,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    STATE(639), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17554] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(809), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17568] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17582] = 4,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17596] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17606] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1131), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17616] = 4,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17630] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17644] = 4,
    ACTIONS(363), 1,
      sym_keyword_limit,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
    STATE(813), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17658] = 4,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(535), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17672] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(833), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17686] = 4,
    ACTIONS(1144), 1,
      sym_keyword_set,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    STATE(650), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17700] = 4,
    ACTIONS(1149), 1,
      sym_keyword_where,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
    STATE(768), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17714] = 4,
    ACTIONS(1032), 1,
      sym_keyword_from,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(754), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17728] = 4,
    ACTIONS(947), 1,
      anon_sym_BQUOTE,
    ACTIONS(949), 1,
      sym__identifier,
    STATE(356), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17742] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(691), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17756] = 4,
    ACTIONS(1155), 1,
      sym_keyword_set,
    ACTIONS(1157), 1,
      sym_keyword_drop,
    ACTIONS(1159), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17770] = 4,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(1161), 1,
      sym__identifier,
    STATE(329), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17784] = 4,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17798] = 4,
    ACTIONS(1165), 1,
      anon_sym_BQUOTE,
    ACTIONS(1167), 1,
      sym__identifier,
    STATE(511), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17812] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(555), 1,
      sym_select,
    STATE(832), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17826] = 4,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    STATE(546), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17840] = 3,
    ACTIONS(1169), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(621), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [17852] = 4,
    ACTIONS(1071), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1171), 1,
      anon_sym_SEMI,
    STATE(689), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17866] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(555), 1,
      sym_select,
    STATE(758), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17880] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(935), 1,
      sym__identifier,
    STATE(730), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17894] = 4,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(1161), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17908] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(941), 1,
      sym__identifier,
    STATE(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17922] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(941), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17936] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1019), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17950] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1173), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17959] = 3,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
    STATE(382), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17970] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1177), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17979] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1179), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17988] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1144), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [17997] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1138), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18006] = 3,
    ACTIONS(1181), 1,
      anon_sym_LPAREN,
    STATE(729), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18017] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1124), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18026] = 3,
    ACTIONS(1183), 1,
      sym_keyword_cascade,
    ACTIONS(1185), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18037] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1187), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18046] = 3,
    ACTIONS(1189), 1,
      sym_keyword_cascade,
    ACTIONS(1191), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18057] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1193), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18066] = 3,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    STATE(696), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18077] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1103), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18086] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1197), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18095] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1199), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18104] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1197), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18113] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1201), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [18122] = 3,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
    STATE(375), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18133] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1203), 2,
      sym_keyword_no,
      sym_keyword_data,
  [18142] = 3,
    ACTIONS(1205), 1,
      sym_keyword_no,
    ACTIONS(1207), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18153] = 3,
    ACTIONS(1093), 1,
      sym_keyword_not,
    ACTIONS(1209), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18164] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1211), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18173] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1213), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18182] = 3,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
    STATE(373), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18193] = 3,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    STATE(706), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18204] = 3,
    ACTIONS(607), 1,
      sym_keyword_primary,
    STATE(707), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18215] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1215), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18224] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1217), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18233] = 3,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18244] = 3,
    ACTIONS(1181), 1,
      anon_sym_LPAREN,
    STATE(757), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18255] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1223), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18264] = 3,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18275] = 3,
    ACTIONS(1229), 1,
      sym_keyword_no,
    ACTIONS(1231), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18286] = 3,
    ACTIONS(1233), 1,
      sym_keyword_for,
    ACTIONS(1235), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18297] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1237), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18306] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1239), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18315] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1241), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18324] = 3,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    STATE(713), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18335] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1052), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18344] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1243), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [18353] = 3,
    ACTIONS(1245), 1,
      sym_keyword_view,
    ACTIONS(1247), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18364] = 3,
    ACTIONS(1249), 1,
      sym_keyword_no,
    ACTIONS(1251), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18375] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18384] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1253), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18393] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1255), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18402] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1257), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18411] = 3,
    ACTIONS(1259), 1,
      sym_keyword_from,
    STATE(866), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18422] = 3,
    ACTIONS(1261), 1,
      sym_keyword_table,
    ACTIONS(1263), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18433] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1265), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18442] = 3,
    ACTIONS(1267), 1,
      sym_keyword_outer,
    ACTIONS(1269), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18453] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1021), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18462] = 3,
    ACTIONS(1271), 1,
      sym_keyword_cascade,
    ACTIONS(1273), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18473] = 3,
    ACTIONS(1275), 1,
      sym_keyword_cascade,
    ACTIONS(1277), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18484] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1279), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18493] = 3,
    ACTIONS(1281), 1,
      sym_keyword_table,
    ACTIONS(1283), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18504] = 3,
    ACTIONS(1285), 1,
      sym_keyword_outer,
    ACTIONS(1287), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18515] = 2,
    ACTIONS(1289), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18523] = 2,
    ACTIONS(1291), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18531] = 2,
    ACTIONS(1293), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18539] = 2,
    ACTIONS(1295), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18547] = 2,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18555] = 2,
    ACTIONS(1299), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18563] = 2,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18571] = 2,
    ACTIONS(1301), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18579] = 2,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18587] = 2,
    ACTIONS(1305), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18595] = 2,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18603] = 2,
    ACTIONS(1307), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18611] = 2,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18619] = 2,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18627] = 2,
    ACTIONS(1313), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18635] = 2,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18643] = 2,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18651] = 2,
    ACTIONS(1319), 1,
      aux_sym_double_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18659] = 2,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18667] = 2,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18675] = 2,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18683] = 2,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18691] = 2,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18699] = 2,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18707] = 2,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18715] = 2,
    ACTIONS(1331), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18723] = 2,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18731] = 2,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18739] = 2,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18747] = 2,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18755] = 2,
    ACTIONS(1337), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18763] = 2,
    ACTIONS(1339), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18771] = 2,
    ACTIONS(1341), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18779] = 2,
    ACTIONS(1269), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18787] = 2,
    ACTIONS(799), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18795] = 2,
    ACTIONS(1273), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18803] = 2,
    ACTIONS(1343), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18811] = 2,
    ACTIONS(825), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18819] = 2,
    ACTIONS(1277), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18827] = 2,
    ACTIONS(1345), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18835] = 2,
    ACTIONS(1347), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18843] = 2,
    ACTIONS(1028), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18851] = 2,
    ACTIONS(1349), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18859] = 2,
    ACTIONS(1351), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18867] = 2,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18875] = 2,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18883] = 2,
    ACTIONS(1355), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18891] = 2,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18899] = 2,
    ACTIONS(1359), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18907] = 2,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18915] = 2,
    ACTIONS(1363), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18923] = 2,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18931] = 2,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18939] = 2,
    ACTIONS(1369), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18947] = 2,
    ACTIONS(1371), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18955] = 2,
    ACTIONS(1002), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18963] = 2,
    ACTIONS(1373), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18971] = 2,
    ACTIONS(1375), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18979] = 2,
    ACTIONS(1377), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18987] = 2,
    ACTIONS(1379), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18995] = 2,
    ACTIONS(1381), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19003] = 2,
    ACTIONS(1383), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19011] = 2,
    ACTIONS(1381), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19019] = 2,
    ACTIONS(1385), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19027] = 2,
    ACTIONS(1387), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19035] = 2,
    ACTIONS(1389), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19043] = 2,
    ACTIONS(1391), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19051] = 2,
    ACTIONS(1393), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19059] = 2,
    ACTIONS(1395), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19067] = 2,
    ACTIONS(1397), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19075] = 2,
    ACTIONS(1399), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19083] = 2,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19091] = 2,
    ACTIONS(1403), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19099] = 2,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19107] = 2,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19115] = 2,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19123] = 2,
    ACTIONS(965), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19131] = 2,
    ACTIONS(1411), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19139] = 2,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19147] = 2,
    ACTIONS(1415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19155] = 2,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19163] = 2,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19171] = 2,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19179] = 2,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19187] = 2,
    ACTIONS(1425), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19195] = 2,
    ACTIONS(1427), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19203] = 2,
    ACTIONS(1429), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19211] = 2,
    ACTIONS(1431), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19219] = 2,
    ACTIONS(1433), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19227] = 2,
    ACTIONS(1435), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19235] = 2,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19243] = 2,
    ACTIONS(1439), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19251] = 2,
    ACTIONS(1441), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19259] = 2,
    ACTIONS(1443), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19267] = 2,
    ACTIONS(1445), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19275] = 2,
    ACTIONS(1447), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19283] = 2,
    ACTIONS(1449), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19291] = 2,
    ACTIONS(1451), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19299] = 2,
    ACTIONS(1453), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19307] = 2,
    ACTIONS(1455), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19315] = 2,
    ACTIONS(1457), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19323] = 2,
    ACTIONS(1459), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19331] = 2,
    ACTIONS(1461), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19339] = 2,
    ACTIONS(1463), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19347] = 2,
    ACTIONS(1465), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19355] = 2,
    ACTIONS(1467), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19363] = 2,
    ACTIONS(1469), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19371] = 2,
    ACTIONS(1471), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19379] = 2,
    ACTIONS(1473), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19387] = 2,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19395] = 2,
    ACTIONS(1477), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19403] = 2,
    ACTIONS(1479), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19411] = 2,
    ACTIONS(1481), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19419] = 2,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19427] = 2,
    ACTIONS(1485), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19435] = 2,
    ACTIONS(1487), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19443] = 2,
    ACTIONS(1489), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19451] = 2,
    ACTIONS(1491), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19459] = 2,
    ACTIONS(1493), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19467] = 2,
    ACTIONS(1495), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19475] = 2,
    ACTIONS(1497), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19483] = 2,
    ACTIONS(1499), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19491] = 2,
    ACTIONS(1501), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19499] = 2,
    ACTIONS(1503), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19507] = 2,
    ACTIONS(1505), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19515] = 2,
    ACTIONS(1509), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1507), 2,
      sym_comment,
      sym_marginalia,
  [19523] = 2,
    ACTIONS(1511), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1507), 2,
      sym_comment,
      sym_marginalia,
  [19531] = 2,
    ACTIONS(1513), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19539] = 2,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19547] = 2,
    ACTIONS(1231), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19555] = 2,
    ACTIONS(1517), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19563] = 2,
    ACTIONS(1073), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19571] = 2,
    ACTIONS(1519), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19579] = 2,
    ACTIONS(1521), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19587] = 2,
    ACTIONS(1523), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19595] = 2,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19603] = 2,
    ACTIONS(1527), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19611] = 2,
    ACTIONS(1529), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19619] = 2,
    ACTIONS(1531), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19627] = 2,
    ACTIONS(1531), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19635] = 2,
    ACTIONS(1533), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19643] = 2,
    ACTIONS(1535), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1507), 2,
      sym_comment,
      sym_marginalia,
  [19651] = 2,
    ACTIONS(1537), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1507), 2,
      sym_comment,
      sym_marginalia,
  [19659] = 2,
    ACTIONS(1539), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19667] = 2,
    ACTIONS(1541), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19675] = 2,
    ACTIONS(1543), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19683] = 2,
    ACTIONS(1545), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19691] = 2,
    ACTIONS(1547), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19699] = 2,
    ACTIONS(1549), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19707] = 2,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19715] = 2,
    ACTIONS(1553), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19723] = 2,
    ACTIONS(1555), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19731] = 2,
    ACTIONS(1557), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19739] = 2,
    ACTIONS(1559), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19747] = 2,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19755] = 2,
    ACTIONS(1563), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19763] = 2,
    ACTIONS(1565), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19771] = 2,
    ACTIONS(1251), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19779] = 2,
    ACTIONS(1567), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19787] = 2,
    ACTIONS(1569), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19795] = 2,
    ACTIONS(1571), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19803] = 2,
    ACTIONS(1573), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19811] = 2,
    ACTIONS(1575), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19819] = 2,
    ACTIONS(1577), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19827] = 2,
    ACTIONS(1579), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19835] = 2,
    ACTIONS(1581), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19843] = 2,
    ACTIONS(1583), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19851] = 2,
    ACTIONS(1585), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19859] = 2,
    ACTIONS(1587), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19867] = 2,
    ACTIONS(1589), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19875] = 2,
    ACTIONS(1591), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19883] = 2,
    ACTIONS(1593), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19891] = 2,
    ACTIONS(1595), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19899] = 2,
    ACTIONS(1597), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19907] = 2,
    ACTIONS(1599), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19915] = 2,
    ACTIONS(1601), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19923] = 2,
    ACTIONS(1603), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19931] = 2,
    ACTIONS(1605), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19939] = 2,
    ACTIONS(1607), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19947] = 2,
    ACTIONS(1609), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19955] = 2,
    ACTIONS(1611), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19963] = 2,
    ACTIONS(1613), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1507), 2,
      sym_comment,
      sym_marginalia,
  [19971] = 2,
    ACTIONS(1615), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1507), 2,
      sym_comment,
      sym_marginalia,
  [19979] = 2,
    ACTIONS(996), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19987] = 2,
    ACTIONS(1617), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19995] = 2,
    ACTIONS(998), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20003] = 2,
    ACTIONS(1619), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20011] = 2,
    ACTIONS(1621), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20019] = 2,
    ACTIONS(1623), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20027] = 2,
    ACTIONS(1625), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20035] = 2,
    ACTIONS(1627), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20043] = 2,
    ACTIONS(1629), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20051] = 2,
    ACTIONS(1631), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20059] = 2,
    ACTIONS(1633), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20067] = 2,
    ACTIONS(1635), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20075] = 2,
    ACTIONS(1637), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20083] = 2,
    ACTIONS(1639), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20091] = 2,
    ACTIONS(1641), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20099] = 2,
    ACTIONS(1643), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20107] = 2,
    ACTIONS(1287), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20115] = 2,
    ACTIONS(1645), 1,
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
  [SMALL_STATE(22)] = 987,
  [SMALL_STATE(23)] = 1024,
  [SMALL_STATE(24)] = 1061,
  [SMALL_STATE(25)] = 1096,
  [SMALL_STATE(26)] = 1131,
  [SMALL_STATE(27)] = 1166,
  [SMALL_STATE(28)] = 1201,
  [SMALL_STATE(29)] = 1236,
  [SMALL_STATE(30)] = 1271,
  [SMALL_STATE(31)] = 1308,
  [SMALL_STATE(32)] = 1343,
  [SMALL_STATE(33)] = 1378,
  [SMALL_STATE(34)] = 1413,
  [SMALL_STATE(35)] = 1448,
  [SMALL_STATE(36)] = 1485,
  [SMALL_STATE(37)] = 1535,
  [SMALL_STATE(38)] = 1575,
  [SMALL_STATE(39)] = 1625,
  [SMALL_STATE(40)] = 1671,
  [SMALL_STATE(41)] = 1707,
  [SMALL_STATE(42)] = 1747,
  [SMALL_STATE(43)] = 1791,
  [SMALL_STATE(44)] = 1825,
  [SMALL_STATE(45)] = 1861,
  [SMALL_STATE(46)] = 1905,
  [SMALL_STATE(47)] = 1949,
  [SMALL_STATE(48)] = 1993,
  [SMALL_STATE(49)] = 2037,
  [SMALL_STATE(50)] = 2081,
  [SMALL_STATE(51)] = 2125,
  [SMALL_STATE(52)] = 2169,
  [SMALL_STATE(53)] = 2215,
  [SMALL_STATE(54)] = 2249,
  [SMALL_STATE(55)] = 2282,
  [SMALL_STATE(56)] = 2315,
  [SMALL_STATE(57)] = 2358,
  [SMALL_STATE(58)] = 2391,
  [SMALL_STATE(59)] = 2424,
  [SMALL_STATE(60)] = 2467,
  [SMALL_STATE(61)] = 2500,
  [SMALL_STATE(62)] = 2541,
  [SMALL_STATE(63)] = 2574,
  [SMALL_STATE(64)] = 2615,
  [SMALL_STATE(65)] = 2658,
  [SMALL_STATE(66)] = 2691,
  [SMALL_STATE(67)] = 2734,
  [SMALL_STATE(68)] = 2775,
  [SMALL_STATE(69)] = 2808,
  [SMALL_STATE(70)] = 2841,
  [SMALL_STATE(71)] = 2874,
  [SMALL_STATE(72)] = 2907,
  [SMALL_STATE(73)] = 2940,
  [SMALL_STATE(74)] = 2972,
  [SMALL_STATE(75)] = 3004,
  [SMALL_STATE(76)] = 3036,
  [SMALL_STATE(77)] = 3068,
  [SMALL_STATE(78)] = 3100,
  [SMALL_STATE(79)] = 3132,
  [SMALL_STATE(80)] = 3172,
  [SMALL_STATE(81)] = 3204,
  [SMALL_STATE(82)] = 3236,
  [SMALL_STATE(83)] = 3278,
  [SMALL_STATE(84)] = 3310,
  [SMALL_STATE(85)] = 3342,
  [SMALL_STATE(86)] = 3374,
  [SMALL_STATE(87)] = 3414,
  [SMALL_STATE(88)] = 3446,
  [SMALL_STATE(89)] = 3490,
  [SMALL_STATE(90)] = 3532,
  [SMALL_STATE(91)] = 3564,
  [SMALL_STATE(92)] = 3596,
  [SMALL_STATE(93)] = 3628,
  [SMALL_STATE(94)] = 3660,
  [SMALL_STATE(95)] = 3692,
  [SMALL_STATE(96)] = 3724,
  [SMALL_STATE(97)] = 3766,
  [SMALL_STATE(98)] = 3798,
  [SMALL_STATE(99)] = 3830,
  [SMALL_STATE(100)] = 3862,
  [SMALL_STATE(101)] = 3894,
  [SMALL_STATE(102)] = 3936,
  [SMALL_STATE(103)] = 3968,
  [SMALL_STATE(104)] = 4007,
  [SMALL_STATE(105)] = 4046,
  [SMALL_STATE(106)] = 4077,
  [SMALL_STATE(107)] = 4108,
  [SMALL_STATE(108)] = 4144,
  [SMALL_STATE(109)] = 4175,
  [SMALL_STATE(110)] = 4232,
  [SMALL_STATE(111)] = 4289,
  [SMALL_STATE(112)] = 4328,
  [SMALL_STATE(113)] = 4385,
  [SMALL_STATE(114)] = 4416,
  [SMALL_STATE(115)] = 4455,
  [SMALL_STATE(116)] = 4500,
  [SMALL_STATE(117)] = 4535,
  [SMALL_STATE(118)] = 4576,
  [SMALL_STATE(119)] = 4607,
  [SMALL_STATE(120)] = 4642,
  [SMALL_STATE(121)] = 4683,
  [SMALL_STATE(122)] = 4724,
  [SMALL_STATE(123)] = 4769,
  [SMALL_STATE(124)] = 4808,
  [SMALL_STATE(125)] = 4855,
  [SMALL_STATE(126)] = 4902,
  [SMALL_STATE(127)] = 4933,
  [SMALL_STATE(128)] = 4968,
  [SMALL_STATE(129)] = 4999,
  [SMALL_STATE(130)] = 5056,
  [SMALL_STATE(131)] = 5101,
  [SMALL_STATE(132)] = 5158,
  [SMALL_STATE(133)] = 5192,
  [SMALL_STATE(134)] = 5230,
  [SMALL_STATE(135)] = 5284,
  [SMALL_STATE(136)] = 5338,
  [SMALL_STATE(137)] = 5368,
  [SMALL_STATE(138)] = 5422,
  [SMALL_STATE(139)] = 5450,
  [SMALL_STATE(140)] = 5490,
  [SMALL_STATE(141)] = 5524,
  [SMALL_STATE(142)] = 5554,
  [SMALL_STATE(143)] = 5608,
  [SMALL_STATE(144)] = 5648,
  [SMALL_STATE(145)] = 5692,
  [SMALL_STATE(146)] = 5746,
  [SMALL_STATE(147)] = 5800,
  [SMALL_STATE(148)] = 5844,
  [SMALL_STATE(149)] = 5872,
  [SMALL_STATE(150)] = 5906,
  [SMALL_STATE(151)] = 5934,
  [SMALL_STATE(152)] = 5988,
  [SMALL_STATE(153)] = 6042,
  [SMALL_STATE(154)] = 6080,
  [SMALL_STATE(155)] = 6134,
  [SMALL_STATE(156)] = 6162,
  [SMALL_STATE(157)] = 6216,
  [SMALL_STATE(158)] = 6270,
  [SMALL_STATE(159)] = 6324,
  [SMALL_STATE(160)] = 6352,
  [SMALL_STATE(161)] = 6381,
  [SMALL_STATE(162)] = 6418,
  [SMALL_STATE(163)] = 6469,
  [SMALL_STATE(164)] = 6510,
  [SMALL_STATE(165)] = 6549,
  [SMALL_STATE(166)] = 6578,
  [SMALL_STATE(167)] = 6611,
  [SMALL_STATE(168)] = 6652,
  [SMALL_STATE(169)] = 6689,
  [SMALL_STATE(170)] = 6722,
  [SMALL_STATE(171)] = 6773,
  [SMALL_STATE(172)] = 6824,
  [SMALL_STATE(173)] = 6857,
  [SMALL_STATE(174)] = 6908,
  [SMALL_STATE(175)] = 6947,
  [SMALL_STATE(176)] = 6998,
  [SMALL_STATE(177)] = 7027,
  [SMALL_STATE(178)] = 7072,
  [SMALL_STATE(179)] = 7123,
  [SMALL_STATE(180)] = 7151,
  [SMALL_STATE(181)] = 7193,
  [SMALL_STATE(182)] = 7229,
  [SMALL_STATE(183)] = 7257,
  [SMALL_STATE(184)] = 7293,
  [SMALL_STATE(185)] = 7326,
  [SMALL_STATE(186)] = 7375,
  [SMALL_STATE(187)] = 7424,
  [SMALL_STATE(188)] = 7449,
  [SMALL_STATE(189)] = 7496,
  [SMALL_STATE(190)] = 7545,
  [SMALL_STATE(191)] = 7570,
  [SMALL_STATE(192)] = 7595,
  [SMALL_STATE(193)] = 7642,
  [SMALL_STATE(194)] = 7689,
  [SMALL_STATE(195)] = 7722,
  [SMALL_STATE(196)] = 7747,
  [SMALL_STATE(197)] = 7794,
  [SMALL_STATE(198)] = 7843,
  [SMALL_STATE(199)] = 7890,
  [SMALL_STATE(200)] = 7931,
  [SMALL_STATE(201)] = 7978,
  [SMALL_STATE(202)] = 8016,
  [SMALL_STATE(203)] = 8046,
  [SMALL_STATE(204)] = 8084,
  [SMALL_STATE(205)] = 8124,
  [SMALL_STATE(206)] = 8164,
  [SMALL_STATE(207)] = 8210,
  [SMALL_STATE(208)] = 8248,
  [SMALL_STATE(209)] = 8288,
  [SMALL_STATE(210)] = 8326,
  [SMALL_STATE(211)] = 8372,
  [SMALL_STATE(212)] = 8412,
  [SMALL_STATE(213)] = 8442,
  [SMALL_STATE(214)] = 8472,
  [SMALL_STATE(215)] = 8510,
  [SMALL_STATE(216)] = 8552,
  [SMALL_STATE(217)] = 8594,
  [SMALL_STATE(218)] = 8624,
  [SMALL_STATE(219)] = 8670,
  [SMALL_STATE(220)] = 8708,
  [SMALL_STATE(221)] = 8746,
  [SMALL_STATE(222)] = 8783,
  [SMALL_STATE(223)] = 8820,
  [SMALL_STATE(224)] = 8859,
  [SMALL_STATE(225)] = 8896,
  [SMALL_STATE(226)] = 8933,
  [SMALL_STATE(227)] = 8970,
  [SMALL_STATE(228)] = 9007,
  [SMALL_STATE(229)] = 9044,
  [SMALL_STATE(230)] = 9081,
  [SMALL_STATE(231)] = 9118,
  [SMALL_STATE(232)] = 9155,
  [SMALL_STATE(233)] = 9192,
  [SMALL_STATE(234)] = 9229,
  [SMALL_STATE(235)] = 9266,
  [SMALL_STATE(236)] = 9303,
  [SMALL_STATE(237)] = 9340,
  [SMALL_STATE(238)] = 9377,
  [SMALL_STATE(239)] = 9414,
  [SMALL_STATE(240)] = 9453,
  [SMALL_STATE(241)] = 9490,
  [SMALL_STATE(242)] = 9527,
  [SMALL_STATE(243)] = 9564,
  [SMALL_STATE(244)] = 9585,
  [SMALL_STATE(245)] = 9622,
  [SMALL_STATE(246)] = 9659,
  [SMALL_STATE(247)] = 9696,
  [SMALL_STATE(248)] = 9733,
  [SMALL_STATE(249)] = 9770,
  [SMALL_STATE(250)] = 9809,
  [SMALL_STATE(251)] = 9830,
  [SMALL_STATE(252)] = 9851,
  [SMALL_STATE(253)] = 9888,
  [SMALL_STATE(254)] = 9909,
  [SMALL_STATE(255)] = 9946,
  [SMALL_STATE(256)] = 9983,
  [SMALL_STATE(257)] = 10020,
  [SMALL_STATE(258)] = 10057,
  [SMALL_STATE(259)] = 10094,
  [SMALL_STATE(260)] = 10131,
  [SMALL_STATE(261)] = 10170,
  [SMALL_STATE(262)] = 10209,
  [SMALL_STATE(263)] = 10246,
  [SMALL_STATE(264)] = 10283,
  [SMALL_STATE(265)] = 10322,
  [SMALL_STATE(266)] = 10359,
  [SMALL_STATE(267)] = 10398,
  [SMALL_STATE(268)] = 10435,
  [SMALL_STATE(269)] = 10474,
  [SMALL_STATE(270)] = 10511,
  [SMALL_STATE(271)] = 10550,
  [SMALL_STATE(272)] = 10587,
  [SMALL_STATE(273)] = 10624,
  [SMALL_STATE(274)] = 10661,
  [SMALL_STATE(275)] = 10700,
  [SMALL_STATE(276)] = 10739,
  [SMALL_STATE(277)] = 10776,
  [SMALL_STATE(278)] = 10813,
  [SMALL_STATE(279)] = 10850,
  [SMALL_STATE(280)] = 10887,
  [SMALL_STATE(281)] = 10924,
  [SMALL_STATE(282)] = 10963,
  [SMALL_STATE(283)] = 11000,
  [SMALL_STATE(284)] = 11037,
  [SMALL_STATE(285)] = 11074,
  [SMALL_STATE(286)] = 11111,
  [SMALL_STATE(287)] = 11148,
  [SMALL_STATE(288)] = 11185,
  [SMALL_STATE(289)] = 11222,
  [SMALL_STATE(290)] = 11259,
  [SMALL_STATE(291)] = 11296,
  [SMALL_STATE(292)] = 11333,
  [SMALL_STATE(293)] = 11367,
  [SMALL_STATE(294)] = 11403,
  [SMALL_STATE(295)] = 11423,
  [SMALL_STATE(296)] = 11443,
  [SMALL_STATE(297)] = 11477,
  [SMALL_STATE(298)] = 11499,
  [SMALL_STATE(299)] = 11532,
  [SMALL_STATE(300)] = 11551,
  [SMALL_STATE(301)] = 11584,
  [SMALL_STATE(302)] = 11625,
  [SMALL_STATE(303)] = 11652,
  [SMALL_STATE(304)] = 11679,
  [SMALL_STATE(305)] = 11699,
  [SMALL_STATE(306)] = 11729,
  [SMALL_STATE(307)] = 11759,
  [SMALL_STATE(308)] = 11779,
  [SMALL_STATE(309)] = 11799,
  [SMALL_STATE(310)] = 11819,
  [SMALL_STATE(311)] = 11841,
  [SMALL_STATE(312)] = 11861,
  [SMALL_STATE(313)] = 11880,
  [SMALL_STATE(314)] = 11907,
  [SMALL_STATE(315)] = 11934,
  [SMALL_STATE(316)] = 11951,
  [SMALL_STATE(317)] = 11968,
  [SMALL_STATE(318)] = 11985,
  [SMALL_STATE(319)] = 12004,
  [SMALL_STATE(320)] = 12023,
  [SMALL_STATE(321)] = 12054,
  [SMALL_STATE(322)] = 12073,
  [SMALL_STATE(323)] = 12100,
  [SMALL_STATE(324)] = 12119,
  [SMALL_STATE(325)] = 12138,
  [SMALL_STATE(326)] = 12169,
  [SMALL_STATE(327)] = 12196,
  [SMALL_STATE(328)] = 12215,
  [SMALL_STATE(329)] = 12242,
  [SMALL_STATE(330)] = 12269,
  [SMALL_STATE(331)] = 12285,
  [SMALL_STATE(332)] = 12301,
  [SMALL_STATE(333)] = 12319,
  [SMALL_STATE(334)] = 12337,
  [SMALL_STATE(335)] = 12365,
  [SMALL_STATE(336)] = 12381,
  [SMALL_STATE(337)] = 12399,
  [SMALL_STATE(338)] = 12415,
  [SMALL_STATE(339)] = 12443,
  [SMALL_STATE(340)] = 12461,
  [SMALL_STATE(341)] = 12477,
  [SMALL_STATE(342)] = 12495,
  [SMALL_STATE(343)] = 12521,
  [SMALL_STATE(344)] = 12537,
  [SMALL_STATE(345)] = 12553,
  [SMALL_STATE(346)] = 12581,
  [SMALL_STATE(347)] = 12597,
  [SMALL_STATE(348)] = 12615,
  [SMALL_STATE(349)] = 12631,
  [SMALL_STATE(350)] = 12649,
  [SMALL_STATE(351)] = 12665,
  [SMALL_STATE(352)] = 12683,
  [SMALL_STATE(353)] = 12699,
  [SMALL_STATE(354)] = 12715,
  [SMALL_STATE(355)] = 12738,
  [SMALL_STATE(356)] = 12765,
  [SMALL_STATE(357)] = 12790,
  [SMALL_STATE(358)] = 12817,
  [SMALL_STATE(359)] = 12840,
  [SMALL_STATE(360)] = 12865,
  [SMALL_STATE(361)] = 12880,
  [SMALL_STATE(362)] = 12895,
  [SMALL_STATE(363)] = 12922,
  [SMALL_STATE(364)] = 12947,
  [SMALL_STATE(365)] = 12974,
  [SMALL_STATE(366)] = 12989,
  [SMALL_STATE(367)] = 13016,
  [SMALL_STATE(368)] = 13041,
  [SMALL_STATE(369)] = 13058,
  [SMALL_STATE(370)] = 13083,
  [SMALL_STATE(371)] = 13100,
  [SMALL_STATE(372)] = 13115,
  [SMALL_STATE(373)] = 13130,
  [SMALL_STATE(374)] = 13157,
  [SMALL_STATE(375)] = 13186,
  [SMALL_STATE(376)] = 13213,
  [SMALL_STATE(377)] = 13238,
  [SMALL_STATE(378)] = 13265,
  [SMALL_STATE(379)] = 13294,
  [SMALL_STATE(380)] = 13321,
  [SMALL_STATE(381)] = 13348,
  [SMALL_STATE(382)] = 13373,
  [SMALL_STATE(383)] = 13400,
  [SMALL_STATE(384)] = 13425,
  [SMALL_STATE(385)] = 13451,
  [SMALL_STATE(386)] = 13465,
  [SMALL_STATE(387)] = 13487,
  [SMALL_STATE(388)] = 13511,
  [SMALL_STATE(389)] = 13535,
  [SMALL_STATE(390)] = 13555,
  [SMALL_STATE(391)] = 13571,
  [SMALL_STATE(392)] = 13589,
  [SMALL_STATE(393)] = 13615,
  [SMALL_STATE(394)] = 13639,
  [SMALL_STATE(395)] = 13665,
  [SMALL_STATE(396)] = 13687,
  [SMALL_STATE(397)] = 13705,
  [SMALL_STATE(398)] = 13721,
  [SMALL_STATE(399)] = 13745,
  [SMALL_STATE(400)] = 13761,
  [SMALL_STATE(401)] = 13787,
  [SMALL_STATE(402)] = 13803,
  [SMALL_STATE(403)] = 13827,
  [SMALL_STATE(404)] = 13843,
  [SMALL_STATE(405)] = 13869,
  [SMALL_STATE(406)] = 13887,
  [SMALL_STATE(407)] = 13905,
  [SMALL_STATE(408)] = 13923,
  [SMALL_STATE(409)] = 13941,
  [SMALL_STATE(410)] = 13957,
  [SMALL_STATE(411)] = 13975,
  [SMALL_STATE(412)] = 13999,
  [SMALL_STATE(413)] = 14015,
  [SMALL_STATE(414)] = 14031,
  [SMALL_STATE(415)] = 14055,
  [SMALL_STATE(416)] = 14077,
  [SMALL_STATE(417)] = 14091,
  [SMALL_STATE(418)] = 14111,
  [SMALL_STATE(419)] = 14127,
  [SMALL_STATE(420)] = 14151,
  [SMALL_STATE(421)] = 14167,
  [SMALL_STATE(422)] = 14180,
  [SMALL_STATE(423)] = 14197,
  [SMALL_STATE(424)] = 14214,
  [SMALL_STATE(425)] = 14235,
  [SMALL_STATE(426)] = 14258,
  [SMALL_STATE(427)] = 14281,
  [SMALL_STATE(428)] = 14302,
  [SMALL_STATE(429)] = 14325,
  [SMALL_STATE(430)] = 14346,
  [SMALL_STATE(431)] = 14363,
  [SMALL_STATE(432)] = 14382,
  [SMALL_STATE(433)] = 14403,
  [SMALL_STATE(434)] = 14426,
  [SMALL_STATE(435)] = 14449,
  [SMALL_STATE(436)] = 14472,
  [SMALL_STATE(437)] = 14495,
  [SMALL_STATE(438)] = 14512,
  [SMALL_STATE(439)] = 14531,
  [SMALL_STATE(440)] = 14550,
  [SMALL_STATE(441)] = 14573,
  [SMALL_STATE(442)] = 14594,
  [SMALL_STATE(443)] = 14611,
  [SMALL_STATE(444)] = 14632,
  [SMALL_STATE(445)] = 14655,
  [SMALL_STATE(446)] = 14668,
  [SMALL_STATE(447)] = 14691,
  [SMALL_STATE(448)] = 14712,
  [SMALL_STATE(449)] = 14733,
  [SMALL_STATE(450)] = 14754,
  [SMALL_STATE(451)] = 14777,
  [SMALL_STATE(452)] = 14794,
  [SMALL_STATE(453)] = 14811,
  [SMALL_STATE(454)] = 14832,
  [SMALL_STATE(455)] = 14853,
  [SMALL_STATE(456)] = 14873,
  [SMALL_STATE(457)] = 14889,
  [SMALL_STATE(458)] = 14905,
  [SMALL_STATE(459)] = 14925,
  [SMALL_STATE(460)] = 14939,
  [SMALL_STATE(461)] = 14955,
  [SMALL_STATE(462)] = 14967,
  [SMALL_STATE(463)] = 14983,
  [SMALL_STATE(464)] = 14999,
  [SMALL_STATE(465)] = 15015,
  [SMALL_STATE(466)] = 15035,
  [SMALL_STATE(467)] = 15047,
  [SMALL_STATE(468)] = 15067,
  [SMALL_STATE(469)] = 15083,
  [SMALL_STATE(470)] = 15103,
  [SMALL_STATE(471)] = 15123,
  [SMALL_STATE(472)] = 15143,
  [SMALL_STATE(473)] = 15159,
  [SMALL_STATE(474)] = 15179,
  [SMALL_STATE(475)] = 15199,
  [SMALL_STATE(476)] = 15215,
  [SMALL_STATE(477)] = 15231,
  [SMALL_STATE(478)] = 15245,
  [SMALL_STATE(479)] = 15261,
  [SMALL_STATE(480)] = 15277,
  [SMALL_STATE(481)] = 15293,
  [SMALL_STATE(482)] = 15307,
  [SMALL_STATE(483)] = 15324,
  [SMALL_STATE(484)] = 15341,
  [SMALL_STATE(485)] = 15358,
  [SMALL_STATE(486)] = 15375,
  [SMALL_STATE(487)] = 15392,
  [SMALL_STATE(488)] = 15409,
  [SMALL_STATE(489)] = 15426,
  [SMALL_STATE(490)] = 15441,
  [SMALL_STATE(491)] = 15458,
  [SMALL_STATE(492)] = 15475,
  [SMALL_STATE(493)] = 15492,
  [SMALL_STATE(494)] = 15509,
  [SMALL_STATE(495)] = 15526,
  [SMALL_STATE(496)] = 15541,
  [SMALL_STATE(497)] = 15558,
  [SMALL_STATE(498)] = 15569,
  [SMALL_STATE(499)] = 15586,
  [SMALL_STATE(500)] = 15603,
  [SMALL_STATE(501)] = 15620,
  [SMALL_STATE(502)] = 15637,
  [SMALL_STATE(503)] = 15650,
  [SMALL_STATE(504)] = 15667,
  [SMALL_STATE(505)] = 15680,
  [SMALL_STATE(506)] = 15697,
  [SMALL_STATE(507)] = 15708,
  [SMALL_STATE(508)] = 15723,
  [SMALL_STATE(509)] = 15740,
  [SMALL_STATE(510)] = 15753,
  [SMALL_STATE(511)] = 15770,
  [SMALL_STATE(512)] = 15783,
  [SMALL_STATE(513)] = 15800,
  [SMALL_STATE(514)] = 15813,
  [SMALL_STATE(515)] = 15828,
  [SMALL_STATE(516)] = 15843,
  [SMALL_STATE(517)] = 15854,
  [SMALL_STATE(518)] = 15867,
  [SMALL_STATE(519)] = 15878,
  [SMALL_STATE(520)] = 15889,
  [SMALL_STATE(521)] = 15902,
  [SMALL_STATE(522)] = 15917,
  [SMALL_STATE(523)] = 15932,
  [SMALL_STATE(524)] = 15947,
  [SMALL_STATE(525)] = 15964,
  [SMALL_STATE(526)] = 15979,
  [SMALL_STATE(527)] = 15990,
  [SMALL_STATE(528)] = 16007,
  [SMALL_STATE(529)] = 16024,
  [SMALL_STATE(530)] = 16039,
  [SMALL_STATE(531)] = 16056,
  [SMALL_STATE(532)] = 16073,
  [SMALL_STATE(533)] = 16090,
  [SMALL_STATE(534)] = 16107,
  [SMALL_STATE(535)] = 16124,
  [SMALL_STATE(536)] = 16138,
  [SMALL_STATE(537)] = 16152,
  [SMALL_STATE(538)] = 16166,
  [SMALL_STATE(539)] = 16180,
  [SMALL_STATE(540)] = 16194,
  [SMALL_STATE(541)] = 16208,
  [SMALL_STATE(542)] = 16222,
  [SMALL_STATE(543)] = 16236,
  [SMALL_STATE(544)] = 16250,
  [SMALL_STATE(545)] = 16264,
  [SMALL_STATE(546)] = 16278,
  [SMALL_STATE(547)] = 16292,
  [SMALL_STATE(548)] = 16306,
  [SMALL_STATE(549)] = 16320,
  [SMALL_STATE(550)] = 16334,
  [SMALL_STATE(551)] = 16348,
  [SMALL_STATE(552)] = 16362,
  [SMALL_STATE(553)] = 16372,
  [SMALL_STATE(554)] = 16386,
  [SMALL_STATE(555)] = 16396,
  [SMALL_STATE(556)] = 16410,
  [SMALL_STATE(557)] = 16424,
  [SMALL_STATE(558)] = 16438,
  [SMALL_STATE(559)] = 16452,
  [SMALL_STATE(560)] = 16466,
  [SMALL_STATE(561)] = 16480,
  [SMALL_STATE(562)] = 16490,
  [SMALL_STATE(563)] = 16504,
  [SMALL_STATE(564)] = 16518,
  [SMALL_STATE(565)] = 16532,
  [SMALL_STATE(566)] = 16546,
  [SMALL_STATE(567)] = 16556,
  [SMALL_STATE(568)] = 16570,
  [SMALL_STATE(569)] = 16584,
  [SMALL_STATE(570)] = 16598,
  [SMALL_STATE(571)] = 16612,
  [SMALL_STATE(572)] = 16626,
  [SMALL_STATE(573)] = 16640,
  [SMALL_STATE(574)] = 16654,
  [SMALL_STATE(575)] = 16664,
  [SMALL_STATE(576)] = 16678,
  [SMALL_STATE(577)] = 16692,
  [SMALL_STATE(578)] = 16706,
  [SMALL_STATE(579)] = 16720,
  [SMALL_STATE(580)] = 16734,
  [SMALL_STATE(581)] = 16748,
  [SMALL_STATE(582)] = 16762,
  [SMALL_STATE(583)] = 16776,
  [SMALL_STATE(584)] = 16790,
  [SMALL_STATE(585)] = 16804,
  [SMALL_STATE(586)] = 16814,
  [SMALL_STATE(587)] = 16828,
  [SMALL_STATE(588)] = 16842,
  [SMALL_STATE(589)] = 16856,
  [SMALL_STATE(590)] = 16870,
  [SMALL_STATE(591)] = 16884,
  [SMALL_STATE(592)] = 16898,
  [SMALL_STATE(593)] = 16912,
  [SMALL_STATE(594)] = 16926,
  [SMALL_STATE(595)] = 16940,
  [SMALL_STATE(596)] = 16954,
  [SMALL_STATE(597)] = 16968,
  [SMALL_STATE(598)] = 16978,
  [SMALL_STATE(599)] = 16988,
  [SMALL_STATE(600)] = 17002,
  [SMALL_STATE(601)] = 17016,
  [SMALL_STATE(602)] = 17030,
  [SMALL_STATE(603)] = 17044,
  [SMALL_STATE(604)] = 17058,
  [SMALL_STATE(605)] = 17072,
  [SMALL_STATE(606)] = 17086,
  [SMALL_STATE(607)] = 17100,
  [SMALL_STATE(608)] = 17114,
  [SMALL_STATE(609)] = 17128,
  [SMALL_STATE(610)] = 17142,
  [SMALL_STATE(611)] = 17156,
  [SMALL_STATE(612)] = 17170,
  [SMALL_STATE(613)] = 17180,
  [SMALL_STATE(614)] = 17194,
  [SMALL_STATE(615)] = 17208,
  [SMALL_STATE(616)] = 17222,
  [SMALL_STATE(617)] = 17236,
  [SMALL_STATE(618)] = 17250,
  [SMALL_STATE(619)] = 17264,
  [SMALL_STATE(620)] = 17278,
  [SMALL_STATE(621)] = 17292,
  [SMALL_STATE(622)] = 17306,
  [SMALL_STATE(623)] = 17320,
  [SMALL_STATE(624)] = 17334,
  [SMALL_STATE(625)] = 17348,
  [SMALL_STATE(626)] = 17362,
  [SMALL_STATE(627)] = 17372,
  [SMALL_STATE(628)] = 17386,
  [SMALL_STATE(629)] = 17400,
  [SMALL_STATE(630)] = 17414,
  [SMALL_STATE(631)] = 17428,
  [SMALL_STATE(632)] = 17442,
  [SMALL_STATE(633)] = 17456,
  [SMALL_STATE(634)] = 17470,
  [SMALL_STATE(635)] = 17484,
  [SMALL_STATE(636)] = 17498,
  [SMALL_STATE(637)] = 17512,
  [SMALL_STATE(638)] = 17526,
  [SMALL_STATE(639)] = 17540,
  [SMALL_STATE(640)] = 17554,
  [SMALL_STATE(641)] = 17568,
  [SMALL_STATE(642)] = 17582,
  [SMALL_STATE(643)] = 17596,
  [SMALL_STATE(644)] = 17606,
  [SMALL_STATE(645)] = 17616,
  [SMALL_STATE(646)] = 17630,
  [SMALL_STATE(647)] = 17644,
  [SMALL_STATE(648)] = 17658,
  [SMALL_STATE(649)] = 17672,
  [SMALL_STATE(650)] = 17686,
  [SMALL_STATE(651)] = 17700,
  [SMALL_STATE(652)] = 17714,
  [SMALL_STATE(653)] = 17728,
  [SMALL_STATE(654)] = 17742,
  [SMALL_STATE(655)] = 17756,
  [SMALL_STATE(656)] = 17770,
  [SMALL_STATE(657)] = 17784,
  [SMALL_STATE(658)] = 17798,
  [SMALL_STATE(659)] = 17812,
  [SMALL_STATE(660)] = 17826,
  [SMALL_STATE(661)] = 17840,
  [SMALL_STATE(662)] = 17852,
  [SMALL_STATE(663)] = 17866,
  [SMALL_STATE(664)] = 17880,
  [SMALL_STATE(665)] = 17894,
  [SMALL_STATE(666)] = 17908,
  [SMALL_STATE(667)] = 17922,
  [SMALL_STATE(668)] = 17936,
  [SMALL_STATE(669)] = 17950,
  [SMALL_STATE(670)] = 17959,
  [SMALL_STATE(671)] = 17970,
  [SMALL_STATE(672)] = 17979,
  [SMALL_STATE(673)] = 17988,
  [SMALL_STATE(674)] = 17997,
  [SMALL_STATE(675)] = 18006,
  [SMALL_STATE(676)] = 18017,
  [SMALL_STATE(677)] = 18026,
  [SMALL_STATE(678)] = 18037,
  [SMALL_STATE(679)] = 18046,
  [SMALL_STATE(680)] = 18057,
  [SMALL_STATE(681)] = 18066,
  [SMALL_STATE(682)] = 18077,
  [SMALL_STATE(683)] = 18086,
  [SMALL_STATE(684)] = 18095,
  [SMALL_STATE(685)] = 18104,
  [SMALL_STATE(686)] = 18113,
  [SMALL_STATE(687)] = 18122,
  [SMALL_STATE(688)] = 18133,
  [SMALL_STATE(689)] = 18142,
  [SMALL_STATE(690)] = 18153,
  [SMALL_STATE(691)] = 18164,
  [SMALL_STATE(692)] = 18173,
  [SMALL_STATE(693)] = 18182,
  [SMALL_STATE(694)] = 18193,
  [SMALL_STATE(695)] = 18204,
  [SMALL_STATE(696)] = 18215,
  [SMALL_STATE(697)] = 18224,
  [SMALL_STATE(698)] = 18233,
  [SMALL_STATE(699)] = 18244,
  [SMALL_STATE(700)] = 18255,
  [SMALL_STATE(701)] = 18264,
  [SMALL_STATE(702)] = 18275,
  [SMALL_STATE(703)] = 18286,
  [SMALL_STATE(704)] = 18297,
  [SMALL_STATE(705)] = 18306,
  [SMALL_STATE(706)] = 18315,
  [SMALL_STATE(707)] = 18324,
  [SMALL_STATE(708)] = 18335,
  [SMALL_STATE(709)] = 18344,
  [SMALL_STATE(710)] = 18353,
  [SMALL_STATE(711)] = 18364,
  [SMALL_STATE(712)] = 18375,
  [SMALL_STATE(713)] = 18384,
  [SMALL_STATE(714)] = 18393,
  [SMALL_STATE(715)] = 18402,
  [SMALL_STATE(716)] = 18411,
  [SMALL_STATE(717)] = 18422,
  [SMALL_STATE(718)] = 18433,
  [SMALL_STATE(719)] = 18442,
  [SMALL_STATE(720)] = 18453,
  [SMALL_STATE(721)] = 18462,
  [SMALL_STATE(722)] = 18473,
  [SMALL_STATE(723)] = 18484,
  [SMALL_STATE(724)] = 18493,
  [SMALL_STATE(725)] = 18504,
  [SMALL_STATE(726)] = 18515,
  [SMALL_STATE(727)] = 18523,
  [SMALL_STATE(728)] = 18531,
  [SMALL_STATE(729)] = 18539,
  [SMALL_STATE(730)] = 18547,
  [SMALL_STATE(731)] = 18555,
  [SMALL_STATE(732)] = 18563,
  [SMALL_STATE(733)] = 18571,
  [SMALL_STATE(734)] = 18579,
  [SMALL_STATE(735)] = 18587,
  [SMALL_STATE(736)] = 18595,
  [SMALL_STATE(737)] = 18603,
  [SMALL_STATE(738)] = 18611,
  [SMALL_STATE(739)] = 18619,
  [SMALL_STATE(740)] = 18627,
  [SMALL_STATE(741)] = 18635,
  [SMALL_STATE(742)] = 18643,
  [SMALL_STATE(743)] = 18651,
  [SMALL_STATE(744)] = 18659,
  [SMALL_STATE(745)] = 18667,
  [SMALL_STATE(746)] = 18675,
  [SMALL_STATE(747)] = 18683,
  [SMALL_STATE(748)] = 18691,
  [SMALL_STATE(749)] = 18699,
  [SMALL_STATE(750)] = 18707,
  [SMALL_STATE(751)] = 18715,
  [SMALL_STATE(752)] = 18723,
  [SMALL_STATE(753)] = 18731,
  [SMALL_STATE(754)] = 18739,
  [SMALL_STATE(755)] = 18747,
  [SMALL_STATE(756)] = 18755,
  [SMALL_STATE(757)] = 18763,
  [SMALL_STATE(758)] = 18771,
  [SMALL_STATE(759)] = 18779,
  [SMALL_STATE(760)] = 18787,
  [SMALL_STATE(761)] = 18795,
  [SMALL_STATE(762)] = 18803,
  [SMALL_STATE(763)] = 18811,
  [SMALL_STATE(764)] = 18819,
  [SMALL_STATE(765)] = 18827,
  [SMALL_STATE(766)] = 18835,
  [SMALL_STATE(767)] = 18843,
  [SMALL_STATE(768)] = 18851,
  [SMALL_STATE(769)] = 18859,
  [SMALL_STATE(770)] = 18867,
  [SMALL_STATE(771)] = 18875,
  [SMALL_STATE(772)] = 18883,
  [SMALL_STATE(773)] = 18891,
  [SMALL_STATE(774)] = 18899,
  [SMALL_STATE(775)] = 18907,
  [SMALL_STATE(776)] = 18915,
  [SMALL_STATE(777)] = 18923,
  [SMALL_STATE(778)] = 18931,
  [SMALL_STATE(779)] = 18939,
  [SMALL_STATE(780)] = 18947,
  [SMALL_STATE(781)] = 18955,
  [SMALL_STATE(782)] = 18963,
  [SMALL_STATE(783)] = 18971,
  [SMALL_STATE(784)] = 18979,
  [SMALL_STATE(785)] = 18987,
  [SMALL_STATE(786)] = 18995,
  [SMALL_STATE(787)] = 19003,
  [SMALL_STATE(788)] = 19011,
  [SMALL_STATE(789)] = 19019,
  [SMALL_STATE(790)] = 19027,
  [SMALL_STATE(791)] = 19035,
  [SMALL_STATE(792)] = 19043,
  [SMALL_STATE(793)] = 19051,
  [SMALL_STATE(794)] = 19059,
  [SMALL_STATE(795)] = 19067,
  [SMALL_STATE(796)] = 19075,
  [SMALL_STATE(797)] = 19083,
  [SMALL_STATE(798)] = 19091,
  [SMALL_STATE(799)] = 19099,
  [SMALL_STATE(800)] = 19107,
  [SMALL_STATE(801)] = 19115,
  [SMALL_STATE(802)] = 19123,
  [SMALL_STATE(803)] = 19131,
  [SMALL_STATE(804)] = 19139,
  [SMALL_STATE(805)] = 19147,
  [SMALL_STATE(806)] = 19155,
  [SMALL_STATE(807)] = 19163,
  [SMALL_STATE(808)] = 19171,
  [SMALL_STATE(809)] = 19179,
  [SMALL_STATE(810)] = 19187,
  [SMALL_STATE(811)] = 19195,
  [SMALL_STATE(812)] = 19203,
  [SMALL_STATE(813)] = 19211,
  [SMALL_STATE(814)] = 19219,
  [SMALL_STATE(815)] = 19227,
  [SMALL_STATE(816)] = 19235,
  [SMALL_STATE(817)] = 19243,
  [SMALL_STATE(818)] = 19251,
  [SMALL_STATE(819)] = 19259,
  [SMALL_STATE(820)] = 19267,
  [SMALL_STATE(821)] = 19275,
  [SMALL_STATE(822)] = 19283,
  [SMALL_STATE(823)] = 19291,
  [SMALL_STATE(824)] = 19299,
  [SMALL_STATE(825)] = 19307,
  [SMALL_STATE(826)] = 19315,
  [SMALL_STATE(827)] = 19323,
  [SMALL_STATE(828)] = 19331,
  [SMALL_STATE(829)] = 19339,
  [SMALL_STATE(830)] = 19347,
  [SMALL_STATE(831)] = 19355,
  [SMALL_STATE(832)] = 19363,
  [SMALL_STATE(833)] = 19371,
  [SMALL_STATE(834)] = 19379,
  [SMALL_STATE(835)] = 19387,
  [SMALL_STATE(836)] = 19395,
  [SMALL_STATE(837)] = 19403,
  [SMALL_STATE(838)] = 19411,
  [SMALL_STATE(839)] = 19419,
  [SMALL_STATE(840)] = 19427,
  [SMALL_STATE(841)] = 19435,
  [SMALL_STATE(842)] = 19443,
  [SMALL_STATE(843)] = 19451,
  [SMALL_STATE(844)] = 19459,
  [SMALL_STATE(845)] = 19467,
  [SMALL_STATE(846)] = 19475,
  [SMALL_STATE(847)] = 19483,
  [SMALL_STATE(848)] = 19491,
  [SMALL_STATE(849)] = 19499,
  [SMALL_STATE(850)] = 19507,
  [SMALL_STATE(851)] = 19515,
  [SMALL_STATE(852)] = 19523,
  [SMALL_STATE(853)] = 19531,
  [SMALL_STATE(854)] = 19539,
  [SMALL_STATE(855)] = 19547,
  [SMALL_STATE(856)] = 19555,
  [SMALL_STATE(857)] = 19563,
  [SMALL_STATE(858)] = 19571,
  [SMALL_STATE(859)] = 19579,
  [SMALL_STATE(860)] = 19587,
  [SMALL_STATE(861)] = 19595,
  [SMALL_STATE(862)] = 19603,
  [SMALL_STATE(863)] = 19611,
  [SMALL_STATE(864)] = 19619,
  [SMALL_STATE(865)] = 19627,
  [SMALL_STATE(866)] = 19635,
  [SMALL_STATE(867)] = 19643,
  [SMALL_STATE(868)] = 19651,
  [SMALL_STATE(869)] = 19659,
  [SMALL_STATE(870)] = 19667,
  [SMALL_STATE(871)] = 19675,
  [SMALL_STATE(872)] = 19683,
  [SMALL_STATE(873)] = 19691,
  [SMALL_STATE(874)] = 19699,
  [SMALL_STATE(875)] = 19707,
  [SMALL_STATE(876)] = 19715,
  [SMALL_STATE(877)] = 19723,
  [SMALL_STATE(878)] = 19731,
  [SMALL_STATE(879)] = 19739,
  [SMALL_STATE(880)] = 19747,
  [SMALL_STATE(881)] = 19755,
  [SMALL_STATE(882)] = 19763,
  [SMALL_STATE(883)] = 19771,
  [SMALL_STATE(884)] = 19779,
  [SMALL_STATE(885)] = 19787,
  [SMALL_STATE(886)] = 19795,
  [SMALL_STATE(887)] = 19803,
  [SMALL_STATE(888)] = 19811,
  [SMALL_STATE(889)] = 19819,
  [SMALL_STATE(890)] = 19827,
  [SMALL_STATE(891)] = 19835,
  [SMALL_STATE(892)] = 19843,
  [SMALL_STATE(893)] = 19851,
  [SMALL_STATE(894)] = 19859,
  [SMALL_STATE(895)] = 19867,
  [SMALL_STATE(896)] = 19875,
  [SMALL_STATE(897)] = 19883,
  [SMALL_STATE(898)] = 19891,
  [SMALL_STATE(899)] = 19899,
  [SMALL_STATE(900)] = 19907,
  [SMALL_STATE(901)] = 19915,
  [SMALL_STATE(902)] = 19923,
  [SMALL_STATE(903)] = 19931,
  [SMALL_STATE(904)] = 19939,
  [SMALL_STATE(905)] = 19947,
  [SMALL_STATE(906)] = 19955,
  [SMALL_STATE(907)] = 19963,
  [SMALL_STATE(908)] = 19971,
  [SMALL_STATE(909)] = 19979,
  [SMALL_STATE(910)] = 19987,
  [SMALL_STATE(911)] = 19995,
  [SMALL_STATE(912)] = 20003,
  [SMALL_STATE(913)] = 20011,
  [SMALL_STATE(914)] = 20019,
  [SMALL_STATE(915)] = 20027,
  [SMALL_STATE(916)] = 20035,
  [SMALL_STATE(917)] = 20043,
  [SMALL_STATE(918)] = 20051,
  [SMALL_STATE(919)] = 20059,
  [SMALL_STATE(920)] = 20067,
  [SMALL_STATE(921)] = 20075,
  [SMALL_STATE(922)] = 20083,
  [SMALL_STATE(923)] = 20091,
  [SMALL_STATE(924)] = 20099,
  [SMALL_STATE(925)] = 20107,
  [SMALL_STATE(926)] = 20115,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 23),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 23),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 14),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 18),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 18),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 22),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 22),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 31),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 31),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 38),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 38),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 6),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 28),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 9),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 9),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(915),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 9),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 9),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 16),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 36),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 10),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 29),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 26),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 39),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 24),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 9),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(725),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(925),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(527),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(719),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(759),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(485),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 13),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 13),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 43),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 37),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 37),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 17),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 17),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_int, 1),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 11),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 11),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 43),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 4),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 26),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 44),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 44),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 43),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 46),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 46),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 26),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 21),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 30),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(873),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(509),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(906),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(327),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(411),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(414),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(223),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 26),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(393),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(398),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 15),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 15),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 33),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 33),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(261),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(419),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(491),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 26),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(374),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 12),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(503),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 20),
  [1116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 20), SHIFT_REPEAT(178),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [1121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(524),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(465),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 1, .production_id = 7),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(439),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [1146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(490),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 19),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 28),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 25),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 32),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_with, 1),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 34),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 2),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 28),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 40),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 42),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 42),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 2),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 45),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 27),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 25),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 25),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 35),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1507] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 41),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [1537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(864),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1637] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
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
