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
#define STATE_COUNT 945
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 233
#define ALIAS_COUNT 0
#define TOKEN_COUNT 126
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
  sym_keyword_using = 46,
  sym_keyword_use = 47,
  sym_keyword_index = 48,
  sym_keyword_for = 49,
  sym_keyword_if = 50,
  sym_keyword_exists = 51,
  sym_keyword_auto_increment = 52,
  sym_keyword_default = 53,
  sym_keyword_cascade = 54,
  aux_sym_keyword_with_token1 = 55,
  sym_keyword_no = 56,
  sym_keyword_data = 57,
  sym_keyword_type = 58,
  sym_keyword_rename = 59,
  sym_keyword_to = 60,
  sym_keyword_schema = 61,
  sym_keyword_owner = 62,
  sym_keyword_temp = 63,
  sym_keyword_temporary = 64,
  sym_keyword_null = 65,
  sym_keyword_boolean = 66,
  sym_keyword_smallserial = 67,
  sym_keyword_serial = 68,
  sym_keyword_bigserial = 69,
  sym_keyword_smallint = 70,
  aux_sym_keyword_int_token1 = 71,
  aux_sym_keyword_int_token2 = 72,
  sym_keyword_bigint = 73,
  sym_keyword_decimal = 74,
  sym_keyword_numeric = 75,
  sym_keyword_real = 76,
  aux_sym_double_token1 = 77,
  aux_sym_double_token2 = 78,
  sym_keyword_money = 79,
  aux_sym_keyword_char_token1 = 80,
  aux_sym_keyword_char_token2 = 81,
  aux_sym_keyword_varchar_token1 = 82,
  aux_sym_keyword_varchar_token2 = 83,
  sym_keyword_text = 84,
  sym_keyword_json = 85,
  sym_keyword_jsonb = 86,
  sym_keyword_xml = 87,
  sym_keyword_bytea = 88,
  sym_keyword_date = 89,
  sym_keyword_datetime = 90,
  aux_sym_keyword_timestamp_token1 = 91,
  aux_sym_keyword_timestamp_token2 = 92,
  aux_sym_keyword_timestamp_token3 = 93,
  aux_sym_keyword_timestamp_token4 = 94,
  aux_sym_keyword_timestamptz_token1 = 95,
  sym_keyword_geometry = 96,
  sym_keyword_geography = 97,
  sym_keyword_box2d = 98,
  sym_keyword_box3d = 99,
  anon_sym_LPAREN = 100,
  anon_sym_RPAREN = 101,
  anon_sym_COMMA = 102,
  sym_comment = 103,
  sym_marginalia = 104,
  anon_sym_SEMI = 105,
  anon_sym_DOT = 106,
  anon_sym_EQ = 107,
  anon_sym_STAR = 108,
  anon_sym_PLUS = 109,
  anon_sym_DASH = 110,
  anon_sym_SLASH = 111,
  anon_sym_PERCENT = 112,
  anon_sym_CARET = 113,
  anon_sym_LT = 114,
  anon_sym_LT_EQ = 115,
  anon_sym_BANG_EQ = 116,
  anon_sym_GT_EQ = 117,
  anon_sym_GT = 118,
  anon_sym_SQUOTE = 119,
  aux_sym__literal_string_token1 = 120,
  anon_sym_DQUOTE = 121,
  aux_sym__literal_string_token2 = 122,
  sym__number = 123,
  anon_sym_BQUOTE = 124,
  sym__identifier = 125,
  sym_program = 126,
  sym_keyword_with = 127,
  sym__temporary = 128,
  sym__not_null = 129,
  sym__primary_key = 130,
  sym__if_exists = 131,
  sym__if_not_exists = 132,
  sym__or_replace = 133,
  sym__default_null = 134,
  sym_direction = 135,
  sym_keyword_int = 136,
  sym_double = 137,
  sym_keyword_char = 138,
  sym_keyword_varchar = 139,
  sym_keyword_timestamp = 140,
  sym_keyword_timestamptz = 141,
  sym__type = 142,
  sym_bigint = 143,
  sym_decimal = 144,
  sym_numeric = 145,
  sym_char = 146,
  sym_varchar = 147,
  sym_statement = 148,
  sym__select_statement = 149,
  sym_select = 150,
  sym_select_expression = 151,
  sym__delete_statement = 152,
  sym__delete_from = 153,
  sym_delete = 154,
  sym__create_statement = 155,
  sym_create_table = 156,
  sym_create_view = 157,
  sym_create_materialized_view = 158,
  sym__alter_statement = 159,
  sym_alter_table = 160,
  sym_add_column = 161,
  sym_alter_column = 162,
  sym_drop_column = 163,
  sym_rename_column = 164,
  sym_alter_view = 165,
  sym__drop_statement = 166,
  sym_drop_table = 167,
  sym_drop_view = 168,
  sym_rename_object = 169,
  sym_set_schema = 170,
  sym_change_ownership = 171,
  sym_table_reference = 172,
  sym__insert_statement = 173,
  sym_insert = 174,
  sym_insert_expression = 175,
  sym__column_list_without_order = 176,
  sym__column_without_order = 177,
  sym__update_statement = 178,
  sym_update = 179,
  sym_update_expression = 180,
  sym__single_table_update = 181,
  sym__multi_table_update = 182,
  sym__table_references = 183,
  sym_assignment_list = 184,
  sym_table_options = 185,
  sym_table_option = 186,
  sym_column_definitions = 187,
  sym_column_definition = 188,
  sym_constraints = 189,
  sym_constraint = 190,
  sym__constraint_literal = 191,
  sym__primary_key_constraint = 192,
  sym__key_constraint = 193,
  sym_column_list = 194,
  sym_column = 195,
  sym__field_list = 196,
  sym_field = 197,
  sym_function_call = 198,
  sym__count_function = 199,
  sym__function_param = 200,
  sym__function_params = 201,
  sym_from = 202,
  sym_table_expression = 203,
  sym_index_hint = 204,
  sym_join = 205,
  sym_where = 206,
  sym_group_by = 207,
  sym__having = 208,
  sym_order_by = 209,
  sym_order_expression = 210,
  sym_limit = 211,
  sym_offset = 212,
  sym_where_expression = 213,
  sym_predicate = 214,
  sym__expression = 215,
  sym_subquery = 216,
  sym_list = 217,
  sym_literal = 218,
  sym__literal_string = 219,
  sym_identifier = 220,
  aux_sym_alter_table_repeat1 = 221,
  aux_sym__column_list_without_order_repeat1 = 222,
  aux_sym__table_references_repeat1 = 223,
  aux_sym_assignment_list_repeat1 = 224,
  aux_sym_table_options_repeat1 = 225,
  aux_sym_column_definitions_repeat1 = 226,
  aux_sym_constraints_repeat1 = 227,
  aux_sym_column_list_repeat1 = 228,
  aux_sym__field_list_repeat1 = 229,
  aux_sym__function_params_repeat1 = 230,
  aux_sym_from_repeat1 = 231,
  aux_sym_list_repeat1 = 232,
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
  [sym_keyword_using] = "keyword_using",
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
  [sym_keyword_using] = sym_keyword_using,
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
  [sym_keyword_using] = {
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
      if (eof) ADVANCE(788);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(385);
      if (lookahead == 'F') ADVANCE(281);
      if (lookahead == 'G') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == 'J') ADVANCE(282);
      if (lookahead == 'K') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(276);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'P') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(299);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == 'X') ADVANCE(234);
      if (lookahead == 'Z') ADVANCE(294);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'g') ADVANCE(498);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead == 'j') ADVANCE(635);
      if (lookahead == 'k') ADVANCE(470);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == 'p') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(407);
      if (lookahead == 'w') ADVANCE(539);
      if (lookahead == 'x') ADVANCE(588);
      if (lookahead == 'z') ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(787)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(439);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(440);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'O') ADVANCE(1060);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(762)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'D') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(291);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(192);
      if (lookahead == 'M') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(292);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(325);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == 'V') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(680);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(432);
      if (lookahead == 'w') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(759)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(260);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'G') ADVANCE(316);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(192);
      if (lookahead == 'N') ADVANCE(279);
      if (lookahead == 'O') ADVANCE(302);
      if (lookahead == 'W') ADVANCE(186);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'd') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(670);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'o') ADVANCE(656);
      if (lookahead == 'w') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(763)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1142);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(755)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(756)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(761)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(758)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'O') ADVANCE(1060);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(764)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'W') ADVANCE(1016);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1142);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'w') ADVANCE(1121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(754)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1022);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'w') ADVANCE(1127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(757)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1022);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'w') ADVANCE(1127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(760)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1052);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(765)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1052);
      if (lookahead == 'D') ADVANCE(1023);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead == 'd') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(767)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1052);
      if (lookahead == 'S') ADVANCE(1000);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead == 's') ADVANCE(1105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(766)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(770)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1067);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(776)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'B') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(290);
      if (lookahead == 'G') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'J') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(283);
      if (lookahead == 'N') ADVANCE(293);
      if (lookahead == 'O') ADVANCE(251);
      if (lookahead == 'P') ADVANCE(325);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(299);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(186);
      if (lookahead == 'X') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(402);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == 'f') ADVANCE(644);
      if (lookahead == 'g') ADVANCE(498);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(612);
      if (lookahead == 'j') ADVANCE(635);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'm') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(680);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(412);
      if (lookahead == 'w') ADVANCE(540);
      if (lookahead == 'x') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(753)
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1071);
      if (lookahead == 'D') ADVANCE(1010);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1176);
      if (lookahead == 'd') ADVANCE(1115);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(773)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(780)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1067);
      if (lookahead == 'W') ADVANCE(1022);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1172);
      if (lookahead == 'w') ADVANCE(1127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(777)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1071);
      if (lookahead == 'D') ADVANCE(1010);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'W') ADVANCE(1022);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1176);
      if (lookahead == 'd') ADVANCE(1115);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'w') ADVANCE(1127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(774)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1044);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'U') ADVANCE(1074);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'u') ADVANCE(1179);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(769)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1044);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'U') ADVANCE(1074);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'u') ADVANCE(1179);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(771)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(950);
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
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1044);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'U') ADVANCE(1074);
      if (lookahead == 'W') ADVANCE(1016);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'u') ADVANCE(1179);
      if (lookahead == 'w') ADVANCE(1121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(768)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(779)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'O') ADVANCE(1040);
      if (lookahead == 'U') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'o') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(1177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(778)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'D') ADVANCE(1006);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'd') ADVANCE(1111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(781)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1044);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'U') ADVANCE(1074);
      if (lookahead == 'W') ADVANCE(1016);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'u') ADVANCE(1179);
      if (lookahead == 'w') ADVANCE(1121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(772)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1056);
      if (lookahead == 'K') ADVANCE(1005);
      if (lookahead == 'P') ADVANCE(1068);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1161);
      if (lookahead == 'k') ADVANCE(1110);
      if (lookahead == 'p') ADVANCE(1173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(775)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1054);
      if (lookahead == 'T') ADVANCE(1050);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1159);
      if (lookahead == 't') ADVANCE(1155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(785)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'O') ADVANCE(1040);
      if (lookahead == 'U') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'o') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(1177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(1011);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'i') ADVANCE(1116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(784)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(786)
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(109);
      if (lookahead == '3') ADVANCE(110);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(463);
      if (lookahead == '3') ADVANCE(464);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(962);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(332);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'O') ADVANCE(221);
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(332);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(383);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'O') ADVANCE(272);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'E') ADVANCE(237);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'O') ADVANCE(893);
      if (lookahead == 'Y') ADVANCE(301);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'E') ADVANCE(236);
      if (lookahead == 'I') ADVANCE(247);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(890);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(890);
      if (lookahead == 'E') ADVANCE(927);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(926);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(895);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(224);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(304);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(382);
      if (lookahead == 'R') ADVANCE(284);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(382);
      if (lookahead == 'R') ADVANCE(284);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(227);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(379);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(300);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(226);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(239);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(217);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(218);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(228);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(314);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(256);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(219);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(220);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(309);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(318);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(319);
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(366);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(243);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(365);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(368);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(211);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(373);
      END_STATE();
    case 85:
      if (lookahead == 'B') ADVANCE(392);
      END_STATE();
    case 86:
      if (lookahead == 'B') ADVANCE(393);
      END_STATE();
    case 87:
      if (lookahead == 'B') ADVANCE(229);
      END_STATE();
    case 88:
      if (lookahead == 'B') ADVANCE(230);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(187);
      if (lookahead == 'E') ADVANCE(225);
      if (lookahead == 'M') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(818);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(816);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(911);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(197);
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'L') ADVANCE(163);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(197);
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(190);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(190);
      if (lookahead == 'Y') ADVANCE(202);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(350);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(353);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(134);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(195);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(323);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(376);
      END_STATE();
    case 105:
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(370);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(837);
      if (lookahead == 'U') ADVANCE(360);
      if (lookahead == 'V') ADVANCE(175);
      END_STATE();
    case 106:
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(836);
      END_STATE();
    case 107:
      if (lookahead == 'D') ADVANCE(828);
      END_STATE();
    case 108:
      if (lookahead == 'D') ADVANCE(857);
      END_STATE();
    case 109:
      if (lookahead == 'D') ADVANCE(940);
      END_STATE();
    case 110:
      if (lookahead == 'D') ADVANCE(941);
      END_STATE();
    case 111:
      if (lookahead == 'D') ADVANCE(831);
      END_STATE();
    case 112:
      if (lookahead == 'D') ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == 'S') ADVANCE(161);
      if (lookahead == 'T') ADVANCE(906);
      END_STATE();
    case 114:
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 115:
      if (lookahead == 'D') ADVANCE(82);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(388);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'I') ADVANCE(238);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(180);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(225);
      if (lookahead == 'M') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(870);
      if (lookahead == 'I') ADVANCE(262);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(384);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(934);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(891);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(936);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(866);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(829);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(811);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(825);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(791);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(913);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(892);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(794);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(882);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(793);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(929);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(933);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(387);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(893);
      if (lookahead == 'Y') ADVANCE(301);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(389);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(386);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(322);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(277);
      if (lookahead == 'R') ADVANCE(286);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(305);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(306);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(329);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(242);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(317);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(364);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(349);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(324);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(311);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(367);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(339);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(245);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(271);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(330);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(331);
      END_STATE();
    case 169:
      if (lookahead == 'F') ADVANCE(876);
      if (lookahead == 'N') ADVANCE(853);
      END_STATE();
    case 170:
      if (lookahead == 'F') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(809);
      if (lookahead == 'R') ADVANCE(861);
      if (lookahead == 'U') ADVANCE(375);
      if (lookahead == 'W') ADVANCE(275);
      END_STATE();
    case 171:
      if (lookahead == 'F') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(859);
      END_STATE();
    case 172:
      if (lookahead == 'F') ADVANCE(340);
      END_STATE();
    case 173:
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 174:
      if (lookahead == 'F') ADVANCE(343);
      END_STATE();
    case 175:
      if (lookahead == 'G') ADVANCE(850);
      END_STATE();
    case 176:
      if (lookahead == 'G') ADVANCE(205);
      END_STATE();
    case 177:
      if (lookahead == 'G') ADVANCE(868);
      END_STATE();
    case 178:
      if (lookahead == 'G') ADVANCE(815);
      END_STATE();
    case 179:
      if (lookahead == 'G') ADVANCE(920);
      END_STATE();
    case 180:
      if (lookahead == 'G') ADVANCE(189);
      END_STATE();
    case 181:
      if (lookahead == 'G') ADVANCE(320);
      if (lookahead == 'M') ADVANCE(158);
      END_STATE();
    case 182:
      if (lookahead == 'G') ADVANCE(162);
      END_STATE();
    case 183:
      if (lookahead == 'H') ADVANCE(884);
      END_STATE();
    case 184:
      if (lookahead == 'H') ADVANCE(883);
      END_STATE();
    case 185:
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(358);
      END_STATE();
    case 186:
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(361);
      END_STATE();
    case 187:
      if (lookahead == 'H') ADVANCE(152);
      END_STATE();
    case 188:
      if (lookahead == 'H') ADVANCE(394);
      END_STATE();
    case 189:
      if (lookahead == 'H') ADVANCE(347);
      END_STATE();
    case 190:
      if (lookahead == 'H') ADVANCE(76);
      END_STATE();
    case 191:
      if (lookahead == 'I') ADVANCE(398);
      END_STATE();
    case 192:
      if (lookahead == 'I') ADVANCE(238);
      END_STATE();
    case 193:
      if (lookahead == 'I') ADVANCE(176);
      if (lookahead == 'O') ADVANCE(285);
      if (lookahead == 'Y') ADVANCE(369);
      END_STATE();
    case 194:
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 195:
      if (lookahead == 'I') ADVANCE(337);
      END_STATE();
    case 196:
      if (lookahead == 'I') ADVANCE(253);
      END_STATE();
    case 197:
      if (lookahead == 'I') ADVANCE(249);
      END_STATE();
    case 198:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 199:
      if (lookahead == 'I') ADVANCE(263);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(274);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(346);
      END_STATE();
    case 202:
      if (lookahead == 'I') ADVANCE(264);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(265);
      END_STATE();
    case 204:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(167);
      END_STATE();
    case 206:
      if (lookahead == 'I') ADVANCE(289);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(338);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(244);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(168);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(270);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 214:
      if (lookahead == 'L') ADVANCE(925);
      END_STATE();
    case 215:
      if (lookahead == 'L') ADVANCE(900);
      END_STATE();
    case 216:
      if (lookahead == 'L') ADVANCE(912);
      END_STATE();
    case 217:
      if (lookahead == 'L') ADVANCE(903);
      END_STATE();
    case 218:
      if (lookahead == 'L') ADVANCE(910);
      END_STATE();
    case 219:
      if (lookahead == 'L') ADVANCE(904);
      END_STATE();
    case 220:
      if (lookahead == 'L') ADVANCE(902);
      END_STATE();
    case 221:
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == 'N') ADVANCE(336);
      if (lookahead == 'U') ADVANCE(266);
      END_STATE();
    case 222:
      if (lookahead == 'L') ADVANCE(215);
      if (lookahead == 'M') ADVANCE(153);
      END_STATE();
    case 223:
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == 'R') ADVANCE(96);
      END_STATE();
    case 224:
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == 'R') ADVANCE(95);
      END_STATE();
    case 225:
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == 'T') ADVANCE(797);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(233);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(191);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(126);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(351);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(154);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(209);
      END_STATE();
    case 234:
      if (lookahead == 'M') ADVANCE(214);
      END_STATE();
    case 235:
      if (lookahead == 'M') ADVANCE(798);
      END_STATE();
    case 236:
      if (lookahead == 'M') ADVANCE(296);
      END_STATE();
    case 237:
      if (lookahead == 'M') ADVANCE(296);
      if (lookahead == 'X') ADVANCE(344);
      END_STATE();
    case 238:
      if (lookahead == 'M') ADVANCE(201);
      END_STATE();
    case 239:
      if (lookahead == 'M') ADVANCE(298);
      END_STATE();
    case 240:
      if (lookahead == 'M') ADVANCE(122);
      END_STATE();
    case 241:
      if (lookahead == 'M') ADVANCE(255);
      END_STATE();
    case 242:
      if (lookahead == 'M') ADVANCE(57);
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
      if (lookahead == 'M') ADVANCE(164);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(137);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(72);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(70);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(153);
      END_STATE();
    case 251:
      if (lookahead == 'N') ADVANCE(809);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'W') ADVANCE(275);
      END_STATE();
    case 252:
      if (lookahead == 'N') ADVANCE(849);
      END_STATE();
    case 253:
      if (lookahead == 'N') ADVANCE(807);
      END_STATE();
    case 254:
      if (lookahead == 'N') ADVANCE(922);
      END_STATE();
    case 255:
      if (lookahead == 'N') ADVANCE(832);
      END_STATE();
    case 256:
      if (lookahead == 'N') ADVANCE(901);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(914);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(851);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(108);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'U') ADVANCE(360);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(177);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(178);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(179);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(345);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(124);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(348);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(354);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(355);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(356);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(139);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(362);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(157);
      END_STATE();
    case 276:
      if (lookahead == 'O') ADVANCE(888);
      if (lookahead == 'U') ADVANCE(222);
      END_STATE();
    case 277:
      if (lookahead == 'O') ADVANCE(181);
      END_STATE();
    case 278:
      if (lookahead == 'O') ADVANCE(399);
      END_STATE();
    case 279:
      if (lookahead == 'O') ADVANCE(887);
      END_STATE();
    case 280:
      if (lookahead == 'O') ADVANCE(795);
      END_STATE();
    case 281:
      if (lookahead == 'O') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(287);
      END_STATE();
    case 282:
      if (lookahead == 'O') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(288);
      END_STATE();
    case 283:
      if (lookahead == 'O') ADVANCE(272);
      END_STATE();
    case 284:
      if (lookahead == 'O') ADVANCE(295);
      END_STATE();
    case 285:
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == 'X') ADVANCE(44);
      END_STATE();
    case 286:
      if (lookahead == 'O') ADVANCE(377);
      END_STATE();
    case 287:
      if (lookahead == 'O') ADVANCE(235);
      END_STATE();
    case 288:
      if (lookahead == 'O') ADVANCE(254);
      END_STATE();
    case 289:
      if (lookahead == 'O') ADVANCE(257);
      END_STATE();
    case 290:
      if (lookahead == 'O') ADVANCE(326);
      if (lookahead == 'R') ADVANCE(287);
      END_STATE();
    case 291:
      if (lookahead == 'O') ADVANCE(312);
      if (lookahead == 'R') ADVANCE(287);
      END_STATE();
    case 292:
      if (lookahead == 'O') ADVANCE(342);
      END_STATE();
    case 293:
      if (lookahead == 'O') ADVANCE(342);
      if (lookahead == 'U') ADVANCE(250);
      END_STATE();
    case 294:
      if (lookahead == 'O') ADVANCE(267);
      END_STATE();
    case 295:
      if (lookahead == 'P') ADVANCE(827);
      END_STATE();
    case 296:
      if (lookahead == 'P') ADVANCE(897);
      END_STATE();
    case 297:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 298:
      if (lookahead == 'P') ADVANCE(930);
      END_STATE();
    case 299:
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(120);
      END_STATE();
    case 300:
      if (lookahead == 'P') ADVANCE(188);
      END_STATE();
    case 301:
      if (lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 302:
      if (lookahead == 'R') ADVANCE(861);
      END_STATE();
    case 303:
      if (lookahead == 'R') ADVANCE(874);
      END_STATE();
    case 304:
      if (lookahead == 'R') ADVANCE(916);
      END_STATE();
    case 305:
      if (lookahead == 'R') ADVANCE(826);
      END_STATE();
    case 306:
      if (lookahead == 'R') ADVANCE(804);
      END_STATE();
    case 307:
      if (lookahead == 'R') ADVANCE(806);
      END_STATE();
    case 308:
      if (lookahead == 'R') ADVANCE(896);
      END_STATE();
    case 309:
      if (lookahead == 'R') ADVANCE(919);
      END_STATE();
    case 310:
      if (lookahead == 'R') ADVANCE(918);
      END_STATE();
    case 311:
      if (lookahead == 'R') ADVANCE(908);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(873);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(141);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(390);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(391);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(286);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(198);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(395);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(396);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(127);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(165);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(357);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(194);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(210);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(213);
      END_STATE();
    case 332:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 333:
      if (lookahead == 'S') ADVANCE(878);
      END_STATE();
    case 334:
      if (lookahead == 'S') ADVANCE(796);
      END_STATE();
    case 335:
      if (lookahead == 'S') ADVANCE(372);
      END_STATE();
    case 336:
      if (lookahead == 'S') ADVANCE(371);
      END_STATE();
    case 337:
      if (lookahead == 'S') ADVANCE(206);
      END_STATE();
    case 338:
      if (lookahead == 'S') ADVANCE(359);
      END_STATE();
    case 339:
      if (lookahead == 'S') ADVANCE(363);
      END_STATE();
    case 340:
      if (lookahead == 'S') ADVANCE(159);
      END_STATE();
    case 341:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 342:
      if (lookahead == 'T') ADVANCE(865);
      END_STATE();
    case 343:
      if (lookahead == 'T') ADVANCE(800);
      END_STATE();
    case 344:
      if (lookahead == 'T') ADVANCE(921);
      END_STATE();
    case 345:
      if (lookahead == 'T') ADVANCE(846);
      END_STATE();
    case 346:
      if (lookahead == 'T') ADVANCE(820);
      END_STATE();
    case 347:
      if (lookahead == 'T') ADVANCE(802);
      END_STATE();
    case 348:
      if (lookahead == 'T') ADVANCE(909);
      END_STATE();
    case 349:
      if (lookahead == 'T') ADVANCE(822);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(789);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(880);
      END_STATE();
    case 352:
      if (lookahead == 'T') ADVANCE(932);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(842);
      END_STATE();
    case 354:
      if (lookahead == 'T') ADVANCE(905);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(844);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(879);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(792);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(333);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(278);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(184);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(280);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(315);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(321);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(200);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'X') ADVANCE(848);
      END_STATE();
    case 375:
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 376:
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 377:
      if (lookahead == 'U') ADVANCE(297);
      END_STATE();
    case 378:
      if (lookahead == 'U') ADVANCE(241);
      END_STATE();
    case 379:
      if (lookahead == 'U') ADVANCE(231);
      END_STATE();
    case 380:
      if (lookahead == 'U') ADVANCE(147);
      END_STATE();
    case 381:
      if (lookahead == 'U') ADVANCE(352);
      END_STATE();
    case 382:
      if (lookahead == 'U') ADVANCE(88);
      END_STATE();
    case 383:
      if (lookahead == 'V') ADVANCE(199);
      END_STATE();
    case 384:
      if (lookahead == 'W') ADVANCE(830);
      END_STATE();
    case 385:
      if (lookahead == 'X') ADVANCE(207);
      END_STATE();
    case 386:
      if (lookahead == 'X') ADVANCE(872);
      END_STATE();
    case 387:
      if (lookahead == 'X') ADVANCE(344);
      END_STATE();
    case 388:
      if (lookahead == 'Y') ADVANCE(834);
      END_STATE();
    case 389:
      if (lookahead == 'Y') ADVANCE(915);
      END_STATE();
    case 390:
      if (lookahead == 'Y') ADVANCE(823);
      END_STATE();
    case 391:
      if (lookahead == 'Y') ADVANCE(938);
      END_STATE();
    case 392:
      if (lookahead == 'Y') ADVANCE(814);
      END_STATE();
    case 393:
      if (lookahead == 'Y') ADVANCE(813);
      END_STATE();
    case 394:
      if (lookahead == 'Y') ADVANCE(939);
      END_STATE();
    case 395:
      if (lookahead == 'Y') ADVANCE(899);
      END_STATE();
    case 396:
      if (lookahead == 'Y') ADVANCE(202);
      END_STATE();
    case 397:
      if (lookahead == 'Z') ADVANCE(937);
      END_STATE();
    case 398:
      if (lookahead == 'Z') ADVANCE(150);
      END_STATE();
    case 399:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 400:
      if (lookahead == '_') ADVANCE(557);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == 'o') ADVANCE(893);
      if (lookahead == 'y') ADVANCE(655);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(890);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(926);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(895);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(736);
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'o') ADVANCE(736);
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'p') ADVANCE(581);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(571);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(672);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(720);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(722);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 439:
      if (lookahead == 'b') ADVANCE(746);
      END_STATE();
    case 440:
      if (lookahead == 'b') ADVANCE(747);
      END_STATE();
    case 441:
      if (lookahead == 'b') ADVANCE(583);
      END_STATE();
    case 442:
      if (lookahead == 'b') ADVANCE(584);
      END_STATE();
    case 443:
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 444:
      if (lookahead == 'c') ADVANCE(818);
      END_STATE();
    case 445:
      if (lookahead == 'c') ADVANCE(816);
      END_STATE();
    case 446:
      if (lookahead == 'c') ADVANCE(911);
      END_STATE();
    case 447:
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 448:
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(517);
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 449:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 450:
      if (lookahead == 'c') ADVANCE(544);
      if (lookahead == 'y') ADVANCE(556);
      END_STATE();
    case 451:
      if (lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 452:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 453:
      if (lookahead == 'c') ADVANCE(704);
      END_STATE();
    case 454:
      if (lookahead == 'c') ADVANCE(707);
      END_STATE();
    case 455:
      if (lookahead == 'c') ADVANCE(488);
      END_STATE();
    case 456:
      if (lookahead == 'c') ADVANCE(549);
      END_STATE();
    case 457:
      if (lookahead == 'c') ADVANCE(677);
      END_STATE();
    case 458:
      if (lookahead == 'c') ADVANCE(730);
      END_STATE();
    case 459:
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead == 's') ADVANCE(839);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead == 'v') ADVANCE(529);
      END_STATE();
    case 460:
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 's') ADVANCE(836);
      END_STATE();
    case 461:
      if (lookahead == 'd') ADVANCE(828);
      END_STATE();
    case 462:
      if (lookahead == 'd') ADVANCE(857);
      END_STATE();
    case 463:
      if (lookahead == 'd') ADVANCE(940);
      END_STATE();
    case 464:
      if (lookahead == 'd') ADVANCE(941);
      END_STATE();
    case 465:
      if (lookahead == 'd') ADVANCE(831);
      END_STATE();
    case 466:
      if (lookahead == 'd') ADVANCE(487);
      END_STATE();
    case 467:
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 468:
      if (lookahead == 'd') ADVANCE(509);
      END_STATE();
    case 469:
      if (lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(870);
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(935);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(600);
      if (lookahead == 'o') ADVANCE(893);
      if (lookahead == 'y') ADVANCE(655);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 523:
      if (lookahead == 'f') ADVANCE(876);
      if (lookahead == 'n') ADVANCE(855);
      END_STATE();
    case 524:
      if (lookahead == 'f') ADVANCE(526);
      if (lookahead == 'n') ADVANCE(809);
      if (lookahead == 'r') ADVANCE(863);
      if (lookahead == 'u') ADVANCE(729);
      if (lookahead == 'w') ADVANCE(629);
      END_STATE();
    case 525:
      if (lookahead == 'f') ADVANCE(526);
      if (lookahead == 'r') ADVANCE(859);
      END_STATE();
    case 526:
      if (lookahead == 'f') ADVANCE(694);
      END_STATE();
    case 527:
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 528:
      if (lookahead == 'f') ADVANCE(697);
      END_STATE();
    case 529:
      if (lookahead == 'g') ADVANCE(850);
      END_STATE();
    case 530:
      if (lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 531:
      if (lookahead == 'g') ADVANCE(868);
      END_STATE();
    case 532:
      if (lookahead == 'g') ADVANCE(815);
      END_STATE();
    case 533:
      if (lookahead == 'g') ADVANCE(920);
      END_STATE();
    case 534:
      if (lookahead == 'g') ADVANCE(543);
      END_STATE();
    case 535:
      if (lookahead == 'g') ADVANCE(674);
      if (lookahead == 'm') ADVANCE(512);
      END_STATE();
    case 536:
      if (lookahead == 'g') ADVANCE(516);
      END_STATE();
    case 537:
      if (lookahead == 'h') ADVANCE(885);
      END_STATE();
    case 538:
      if (lookahead == 'h') ADVANCE(883);
      END_STATE();
    case 539:
      if (lookahead == 'h') ADVANCE(497);
      if (lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 540:
      if (lookahead == 'h') ADVANCE(497);
      if (lookahead == 'i') ADVANCE(715);
      END_STATE();
    case 541:
      if (lookahead == 'h') ADVANCE(506);
      END_STATE();
    case 542:
      if (lookahead == 'h') ADVANCE(748);
      END_STATE();
    case 543:
      if (lookahead == 'h') ADVANCE(701);
      END_STATE();
    case 544:
      if (lookahead == 'h') ADVANCE(430);
      END_STATE();
    case 545:
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 547:
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'o') ADVANCE(638);
      if (lookahead == 'y') ADVANCE(723);
      END_STATE();
    case 548:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 549:
      if (lookahead == 'i') ADVANCE(691);
      END_STATE();
    case 550:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 551:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 552:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 553:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 554:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 555:
      if (lookahead == 'i') ADVANCE(700);
      END_STATE();
    case 556:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 557:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 558:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 560:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 561:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 562:
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 563:
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 566:
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 568:
      if (lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 569:
      if (lookahead == 'l') ADVANCE(900);
      END_STATE();
    case 570:
      if (lookahead == 'l') ADVANCE(912);
      END_STATE();
    case 571:
      if (lookahead == 'l') ADVANCE(903);
      END_STATE();
    case 572:
      if (lookahead == 'l') ADVANCE(910);
      END_STATE();
    case 573:
      if (lookahead == 'l') ADVANCE(904);
      END_STATE();
    case 574:
      if (lookahead == 'l') ADVANCE(902);
      END_STATE();
    case 575:
      if (lookahead == 'l') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead == 'u') ADVANCE(620);
      END_STATE();
    case 576:
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(507);
      END_STATE();
    case 577:
      if (lookahead == 'l') ADVANCE(734);
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 578:
      if (lookahead == 'l') ADVANCE(734);
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 579:
      if (lookahead == 'l') ADVANCE(499);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 580:
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 581:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 582:
      if (lookahead == 'l') ADVANCE(545);
      END_STATE();
    case 583:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 584:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 585:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 586:
      if (lookahead == 'l') ADVANCE(508);
      END_STATE();
    case 587:
      if (lookahead == 'l') ADVANCE(563);
      END_STATE();
    case 588:
      if (lookahead == 'm') ADVANCE(568);
      END_STATE();
    case 589:
      if (lookahead == 'm') ADVANCE(798);
      END_STATE();
    case 590:
      if (lookahead == 'm') ADVANCE(650);
      END_STATE();
    case 591:
      if (lookahead == 'm') ADVANCE(650);
      if (lookahead == 'x') ADVANCE(698);
      END_STATE();
    case 592:
      if (lookahead == 'm') ADVANCE(555);
      END_STATE();
    case 593:
      if (lookahead == 'm') ADVANCE(651);
      END_STATE();
    case 594:
      if (lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 595:
      if (lookahead == 'm') ADVANCE(609);
      END_STATE();
    case 596:
      if (lookahead == 'm') ADVANCE(411);
      END_STATE();
    case 597:
      if (lookahead == 'm') ADVANCE(485);
      END_STATE();
    case 598:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 599:
      if (lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 600:
      if (lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 601:
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 602:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 603:
      if (lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 604:
      if (lookahead == 'm') ADVANCE(507);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(809);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead == 'w') ADVANCE(629);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(849);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(807);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(923);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(901);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(914);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 613:
      if (lookahead == 'n') ADVANCE(851);
      END_STATE();
    case 614:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 615:
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == 'u') ADVANCE(714);
      END_STATE();
    case 616:
      if (lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 617:
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 618:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 619:
      if (lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 621:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 622:
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 624:
      if (lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 625:
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 626:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(716);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(889);
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(887);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead == 'r') ADVANCE(641);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == 's') ADVANCE(642);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(586);
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(681);
      if (lookahead == 'r') ADVANCE(641);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(641);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(695);
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(827);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(898);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(931);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == 's') ADVANCE(474);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(542);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(875);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(826);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(804);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(806);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(918);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(749);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(750);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(878);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(796);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(725);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(560);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(846);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(820);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(909);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(822);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(880);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(932);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(842);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(844);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(879);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(792);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(687);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(639);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == 'x') ADVANCE(848);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 731:
      if (lookahead == 'u') ADVANCE(652);
      END_STATE();
    case 732:
      if (lookahead == 'u') ADVANCE(595);
      END_STATE();
    case 733:
      if (lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 734:
      if (lookahead == 'u') ADVANCE(501);
      END_STATE();
    case 735:
      if (lookahead == 'u') ADVANCE(706);
      END_STATE();
    case 736:
      if (lookahead == 'u') ADVANCE(442);
      END_STATE();
    case 737:
      if (lookahead == 'v') ADVANCE(553);
      END_STATE();
    case 738:
      if (lookahead == 'w') ADVANCE(830);
      END_STATE();
    case 739:
      if (lookahead == 'x') ADVANCE(561);
      END_STATE();
    case 740:
      if (lookahead == 'x') ADVANCE(872);
      END_STATE();
    case 741:
      if (lookahead == 'x') ADVANCE(698);
      END_STATE();
    case 742:
      if (lookahead == 'y') ADVANCE(834);
      END_STATE();
    case 743:
      if (lookahead == 'y') ADVANCE(915);
      END_STATE();
    case 744:
      if (lookahead == 'y') ADVANCE(823);
      END_STATE();
    case 745:
      if (lookahead == 'y') ADVANCE(938);
      END_STATE();
    case 746:
      if (lookahead == 'y') ADVANCE(814);
      END_STATE();
    case 747:
      if (lookahead == 'y') ADVANCE(813);
      END_STATE();
    case 748:
      if (lookahead == 'y') ADVANCE(939);
      END_STATE();
    case 749:
      if (lookahead == 'y') ADVANCE(899);
      END_STATE();
    case 750:
      if (lookahead == 'y') ADVANCE(556);
      END_STATE();
    case 751:
      if (lookahead == 'z') ADVANCE(937);
      END_STATE();
    case 752:
      if (lookahead == 'z') ADVANCE(504);
      END_STATE();
    case 753:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(753)
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'B') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(290);
      if (lookahead == 'G') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'J') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(283);
      if (lookahead == 'N') ADVANCE(293);
      if (lookahead == 'O') ADVANCE(251);
      if (lookahead == 'P') ADVANCE(325);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(299);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(186);
      if (lookahead == 'X') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(402);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == 'f') ADVANCE(644);
      if (lookahead == 'g') ADVANCE(498);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(612);
      if (lookahead == 'j') ADVANCE(635);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'm') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(680);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(412);
      if (lookahead == 'w') ADVANCE(540);
      if (lookahead == 'x') ADVANCE(588);
      END_STATE();
    case 754:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(754)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'W') ADVANCE(1016);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1142);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'w') ADVANCE(1121);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 755:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(755)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1037);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1142);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 756:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(756)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 757:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(757)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1022);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'w') ADVANCE(1127);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 758:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(758)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 759:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(759)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'D') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(291);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(192);
      if (lookahead == 'M') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(292);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(325);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == 'V') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(680);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(432);
      if (lookahead == 'w') ADVANCE(539);
      END_STATE();
    case 760:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(760)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1022);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == 'w') ADVANCE(1127);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 761:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(761)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1058);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 762:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(762)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'O') ADVANCE(1060);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 763:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(763)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(260);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'G') ADVANCE(316);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(192);
      if (lookahead == 'N') ADVANCE(279);
      if (lookahead == 'O') ADVANCE(302);
      if (lookahead == 'W') ADVANCE(186);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'd') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(670);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'o') ADVANCE(656);
      if (lookahead == 'w') ADVANCE(540);
      END_STATE();
    case 764:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(764)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'I') ADVANCE(1039);
      if (lookahead == 'O') ADVANCE(1060);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 765:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(765)
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1052);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 766:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(766)
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1052);
      if (lookahead == 'S') ADVANCE(1000);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead == 's') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 767:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(767)
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1052);
      if (lookahead == 'D') ADVANCE(1023);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead == 'd') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 768:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(768)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1044);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'U') ADVANCE(1074);
      if (lookahead == 'W') ADVANCE(1016);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'u') ADVANCE(1179);
      if (lookahead == 'w') ADVANCE(1121);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 769:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(769)
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1044);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'U') ADVANCE(1074);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'u') ADVANCE(1179);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 770:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(770)
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 771:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(771)
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1044);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'U') ADVANCE(1074);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'u') ADVANCE(1179);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 772:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(772)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'G') ADVANCE(1061);
      if (lookahead == 'I') ADVANCE(1044);
      if (lookahead == 'J') ADVANCE(1051);
      if (lookahead == 'L') ADVANCE(998);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == 'U') ADVANCE(1074);
      if (lookahead == 'W') ADVANCE(1016);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 'j') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(1103);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'r') ADVANCE(1126);
      if (lookahead == 'u') ADVANCE(1179);
      if (lookahead == 'w') ADVANCE(1121);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 773:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(773)
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1071);
      if (lookahead == 'D') ADVANCE(1010);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1176);
      if (lookahead == 'd') ADVANCE(1115);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 774:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(774)
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1071);
      if (lookahead == 'D') ADVANCE(1010);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'W') ADVANCE(1022);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1176);
      if (lookahead == 'd') ADVANCE(1115);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'w') ADVANCE(1127);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 775:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(775)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1056);
      if (lookahead == 'K') ADVANCE(1005);
      if (lookahead == 'P') ADVANCE(1068);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1161);
      if (lookahead == 'k') ADVANCE(1110);
      if (lookahead == 'p') ADVANCE(1173);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 776:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(776)
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1067);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1172);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 777:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(777)
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1067);
      if (lookahead == 'W') ADVANCE(1022);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1172);
      if (lookahead == 'w') ADVANCE(1127);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 778:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(778)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'O') ADVANCE(1040);
      if (lookahead == 'U') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'o') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(1177);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 779:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(779)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 780:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(780)
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(1070);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 781:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(781)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'D') ADVANCE(1006);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'd') ADVANCE(1111);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 782:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == 'O') ADVANCE(1062);
      if (lookahead == 'W') ADVANCE(1017);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == 'w') ADVANCE(1122);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 783:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'F') ADVANCE(1055);
      if (lookahead == 'O') ADVANCE(1040);
      if (lookahead == 'U') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'f') ADVANCE(1160);
      if (lookahead == 'o') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(1177);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 784:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(784)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(1011);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'i') ADVANCE(1116);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 785:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(785)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(1054);
      if (lookahead == 'T') ADVANCE(1050);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'c') ADVANCE(1159);
      if (lookahead == 't') ADVANCE(1155);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 786:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(786)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 787:
      if (eof) ADVANCE(788);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(787)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '%') ADVANCE(958);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead == '(') ADVANCE(942);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '*') ADVANCE(954);
      if (lookahead == '+') ADVANCE(955);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(952);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(953);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(385);
      if (lookahead == 'F') ADVANCE(281);
      if (lookahead == 'G') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == 'J') ADVANCE(282);
      if (lookahead == 'K') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(276);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'P') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(299);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(185);
      if (lookahead == 'X') ADVANCE(234);
      if (lookahead == 'Z') ADVANCE(294);
      if (lookahead == '^') ADVANCE(959);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'g') ADVANCE(498);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead == 'j') ADVANCE(635);
      if (lookahead == 'k') ADVANCE(470);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == 'p') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(407);
      if (lookahead == 'w') ADVANCE(539);
      if (lookahead == 'x') ADVANCE(588);
      if (lookahead == 'z') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_keyword_outer);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_keyword_alter);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_keyword_drop);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_keyword_add);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_keyword_view);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keyword_materialized);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_keyword_column);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_keyword_column);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(818);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(818);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(509);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_keyword_using);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_keyword_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_keyword_cascade);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'O') ADVANCE(381);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_keyword_no);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 'T') ADVANCE(865);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_keyword_data);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_keyword_type);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_keyword_rename);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_keyword_to);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_keyword_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_keyword_schema);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_keyword_owner);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'O') ADVANCE(327);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_keyword_temporary);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_keyword_int_token2);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token2);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(924);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(924);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(397);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token2);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 'S') ADVANCE(363);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token4);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_keyword_timestamptz_token1);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_keyword_geometry);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_keyword_geography);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_keyword_box2d);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_keyword_box3d);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(982);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(973);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(973);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(967);
      if (lookahead != 0) ADVANCE(968);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(982);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '*') ADVANCE(976);
      if (lookahead != 0) ADVANCE(977);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(961);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(963);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(973);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(967);
      if (lookahead != 0) ADVANCE(968);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(973);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(967);
      if (lookahead == '/') ADVANCE(948);
      if (lookahead != 0) ADVANCE(968);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(973);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(967);
      if (lookahead != 0) ADVANCE(968);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(947);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(971);
      if (lookahead == '/') ADVANCE(966);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(973);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(973);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(972);
      if (lookahead == '-') ADVANCE(971);
      if (lookahead == '/') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(973);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(973);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(982);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(975);
      if (lookahead == '*') ADVANCE(976);
      if (lookahead != 0) ADVANCE(977);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(982);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '*') ADVANCE(976);
      if (lookahead == '/') ADVANCE(949);
      if (lookahead != 0) ADVANCE(977);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(982);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '*') ADVANCE(976);
      if (lookahead != 0) ADVANCE(977);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(946);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead == '/') ADVANCE(975);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(982);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(982);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead == '/') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(982);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(982);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1012);
      if (lookahead == 'I') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(871);
      if (lookahead == 'I') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1007);
      if (lookahead == 'I') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(996);
      if (lookahead == 'S') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1117);
      if (lookahead == 'i') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(871);
      if (lookahead == 'i') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1112);
      if (lookahead == 'i') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1101);
      if (lookahead == 's') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
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
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
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
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 19},
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
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 18},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 18},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 18},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 17},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 17},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 17},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 33},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 28},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 28},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 33},
  [196] = {.lex_state = 33},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 33},
  [199] = {.lex_state = 28},
  [200] = {.lex_state = 28},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 20},
  [204] = {.lex_state = 20},
  [205] = {.lex_state = 23},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 29},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 37},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 23},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 37},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 29},
  [225] = {.lex_state = 20},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 20},
  [230] = {.lex_state = 0},
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
  [246] = {.lex_state = 20},
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
  [275] = {.lex_state = 0},
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
  [292] = {.lex_state = 20},
  [293] = {.lex_state = 20},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 23},
  [296] = {.lex_state = 7},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 24},
  [299] = {.lex_state = 27},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 23},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 39},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 24},
  [308] = {.lex_state = 27},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 27},
  [311] = {.lex_state = 27},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 24},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 24},
  [320] = {.lex_state = 24},
  [321] = {.lex_state = 22},
  [322] = {.lex_state = 7},
  [323] = {.lex_state = 22},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 27},
  [326] = {.lex_state = 22},
  [327] = {.lex_state = 27},
  [328] = {.lex_state = 24},
  [329] = {.lex_state = 7},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 27},
  [332] = {.lex_state = 26},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 27},
  [335] = {.lex_state = 7},
  [336] = {.lex_state = 24},
  [337] = {.lex_state = 7},
  [338] = {.lex_state = 27},
  [339] = {.lex_state = 7},
  [340] = {.lex_state = 26},
  [341] = {.lex_state = 24},
  [342] = {.lex_state = 24},
  [343] = {.lex_state = 26},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 7},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 7},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 7},
  [352] = {.lex_state = 35},
  [353] = {.lex_state = 27},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 26},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 7},
  [358] = {.lex_state = 7},
  [359] = {.lex_state = 24},
  [360] = {.lex_state = 27},
  [361] = {.lex_state = 34},
  [362] = {.lex_state = 22},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 26},
  [365] = {.lex_state = 22},
  [366] = {.lex_state = 26},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 25},
  [372] = {.lex_state = 22},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 34},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 36},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 22},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 34},
  [384] = {.lex_state = 26},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 34},
  [388] = {.lex_state = 22},
  [389] = {.lex_state = 36},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 7},
  [392] = {.lex_state = 35},
  [393] = {.lex_state = 35},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 26},
  [396] = {.lex_state = 20},
  [397] = {.lex_state = 36},
  [398] = {.lex_state = 35},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 26},
  [401] = {.lex_state = 25},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 17},
  [405] = {.lex_state = 38},
  [406] = {.lex_state = 41},
  [407] = {.lex_state = 36},
  [408] = {.lex_state = 22},
  [409] = {.lex_state = 41},
  [410] = {.lex_state = 22},
  [411] = {.lex_state = 38},
  [412] = {.lex_state = 26},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 17},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 17},
  [418] = {.lex_state = 26},
  [419] = {.lex_state = 25},
  [420] = {.lex_state = 17},
  [421] = {.lex_state = 25},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 36},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 17},
  [433] = {.lex_state = 22},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 42},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 42},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 42},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 42},
  [448] = {.lex_state = 42},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 42},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 42},
  [453] = {.lex_state = 42},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 42},
  [458] = {.lex_state = 42},
  [459] = {.lex_state = 25},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 25},
  [464] = {.lex_state = 25},
  [465] = {.lex_state = 42},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 25},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 25},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 23},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 23},
  [476] = {.lex_state = 23},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 20},
  [481] = {.lex_state = 23},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 23},
  [487] = {.lex_state = 25},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 42},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 23},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 25},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 40},
  [501] = {.lex_state = 23},
  [502] = {.lex_state = 36},
  [503] = {.lex_state = 20},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 20},
  [506] = {.lex_state = 20},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 20},
  [509] = {.lex_state = 36},
  [510] = {.lex_state = 20},
  [511] = {.lex_state = 20},
  [512] = {.lex_state = 20},
  [513] = {.lex_state = 20},
  [514] = {.lex_state = 20},
  [515] = {.lex_state = 20},
  [516] = {.lex_state = 20},
  [517] = {.lex_state = 20},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 36},
  [520] = {.lex_state = 36},
  [521] = {.lex_state = 20},
  [522] = {.lex_state = 20},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 20},
  [525] = {.lex_state = 20},
  [526] = {.lex_state = 20},
  [527] = {.lex_state = 36},
  [528] = {.lex_state = 20},
  [529] = {.lex_state = 20},
  [530] = {.lex_state = 20},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 20},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 20},
  [535] = {.lex_state = 20},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 20},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 20},
  [540] = {.lex_state = 20},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 36},
  [545] = {.lex_state = 36},
  [546] = {.lex_state = 20},
  [547] = {.lex_state = 20},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 20},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 20},
  [554] = {.lex_state = 20},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 20},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 20},
  [565] = {.lex_state = 20},
  [566] = {.lex_state = 20},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 20},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 20},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 20},
  [575] = {.lex_state = 20},
  [576] = {.lex_state = 20},
  [577] = {.lex_state = 20},
  [578] = {.lex_state = 20},
  [579] = {.lex_state = 20},
  [580] = {.lex_state = 20},
  [581] = {.lex_state = 20},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 20},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 20},
  [586] = {.lex_state = 20},
  [587] = {.lex_state = 20},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 20},
  [590] = {.lex_state = 20},
  [591] = {.lex_state = 20},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 20},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 23},
  [599] = {.lex_state = 20},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 20},
  [604] = {.lex_state = 20},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 20},
  [607] = {.lex_state = 20},
  [608] = {.lex_state = 20},
  [609] = {.lex_state = 20},
  [610] = {.lex_state = 20},
  [611] = {.lex_state = 20},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 20},
  [615] = {.lex_state = 20},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 20},
  [619] = {.lex_state = 20},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 20},
  [622] = {.lex_state = 20},
  [623] = {.lex_state = 20},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 20},
  [626] = {.lex_state = 20},
  [627] = {.lex_state = 20},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 20},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 20},
  [637] = {.lex_state = 20},
  [638] = {.lex_state = 20},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 20},
  [643] = {.lex_state = 20},
  [644] = {.lex_state = 20},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 20},
  [648] = {.lex_state = 20},
  [649] = {.lex_state = 20},
  [650] = {.lex_state = 20},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 20},
  [653] = {.lex_state = 20},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 20},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 20},
  [660] = {.lex_state = 20},
  [661] = {.lex_state = 20},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 20},
  [664] = {.lex_state = 20},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 20},
  [668] = {.lex_state = 20},
  [669] = {.lex_state = 20},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 20},
  [676] = {.lex_state = 20},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 20},
  [682] = {.lex_state = 20},
  [683] = {.lex_state = 20},
  [684] = {.lex_state = 20},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 8},
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
  [702] = {.lex_state = 20},
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
  [728] = {.lex_state = 23},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 8},
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
  [744] = {.lex_state = 7},
  [745] = {.lex_state = 8},
  [746] = {.lex_state = 8},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 20},
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
  [785] = {.lex_state = 7},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 23},
  [789] = {.lex_state = 7},
  [790] = {.lex_state = 23},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 23},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
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
  [858] = {.lex_state = 23},
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
  [873] = {.lex_state = 970},
  [874] = {.lex_state = 979},
  [875] = {.lex_state = 20},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 23},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 23},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 23},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 970},
  [889] = {.lex_state = 979},
  [890] = {.lex_state = 20},
  [891] = {.lex_state = 20},
  [892] = {.lex_state = 979},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 970},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 20},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 20},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
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
  [914] = {.lex_state = 20},
  [915] = {.lex_state = 20},
  [916] = {.lex_state = 20},
  [917] = {.lex_state = 20},
  [918] = {.lex_state = 20},
  [919] = {.lex_state = 20},
  [920] = {.lex_state = 20},
  [921] = {.lex_state = 20},
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
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 43},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
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
    [sym_keyword_using] = ACTIONS(1),
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
    [sym_program] = STATE(932),
    [sym_statement] = STATE(923),
    [sym__select_statement] = STATE(902),
    [sym_select] = STATE(558),
    [sym__delete_statement] = STATE(902),
    [sym_delete] = STATE(704),
    [sym__create_statement] = STATE(902),
    [sym_create_table] = STATE(902),
    [sym_create_view] = STATE(902),
    [sym_create_materialized_view] = STATE(902),
    [sym__alter_statement] = STATE(902),
    [sym_alter_table] = STATE(902),
    [sym_alter_view] = STATE(902),
    [sym__drop_statement] = STATE(902),
    [sym_drop_table] = STATE(902),
    [sym_drop_view] = STATE(902),
    [sym__insert_statement] = STATE(902),
    [sym_insert] = STATE(902),
    [sym__update_statement] = STATE(902),
    [sym_update] = STATE(902),
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
    ACTIONS(19), 56,
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
      sym_keyword_using,
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
  [70] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      aux_sym_keyword_int_token1,
      aux_sym_keyword_char_token1,
      sym_keyword_json,
      sym_keyword_date,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(23), 56,
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
      sym_keyword_using,
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
  [140] = 17,
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
    STATE(322), 1,
      sym_keyword_char,
    STATE(337), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(296), 10,
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
  [218] = 17,
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
    STATE(322), 1,
      sym_keyword_char,
    STATE(337), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(710), 10,
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
  [296] = 17,
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
    STATE(322), 1,
      sym_keyword_char,
    STATE(337), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(740), 10,
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
  [374] = 8,
    ACTIONS(65), 1,
      sym_keyword_as,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(27), 1,
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
  [423] = 8,
    ACTIONS(65), 1,
      sym_keyword_as,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(27), 1,
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
  [472] = 8,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(79), 1,
      sym_keyword_as,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(24), 1,
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
  [521] = 8,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(79), 1,
      sym_keyword_as,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(24), 1,
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
  [570] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(34), 1,
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
  [616] = 3,
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
  [654] = 3,
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
  [692] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(34), 1,
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
  [738] = 3,
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
  [776] = 3,
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
  [814] = 3,
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
  [849] = 4,
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
    ACTIONS(99), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
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
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [886] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 20,
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
  [921] = 4,
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
    ACTIONS(99), 9,
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
  [958] = 4,
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
    ACTIONS(99), 9,
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
  [995] = 3,
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
  [1030] = 4,
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
    ACTIONS(99), 9,
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
  [1067] = 3,
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
  [1102] = 3,
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
  [1137] = 3,
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
  [1172] = 3,
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
  [1207] = 3,
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
  [1242] = 3,
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
  [1277] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(141), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 20,
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
  [1312] = 3,
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
  [1347] = 3,
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
  [1382] = 3,
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
  [1417] = 3,
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
  [1452] = 3,
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
  [1487] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    STATE(75), 1,
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
  [1531] = 6,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 16,
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
  [1571] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [1615] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(173), 1,
      anon_sym_DOT,
    STATE(75), 1,
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
  [1659] = 8,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 15,
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
  [1703] = 11,
    ACTIONS(93), 1,
      sym_keyword_or,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 11,
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
  [1753] = 9,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 15,
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
  [1799] = 4,
    ACTIONS(183), 1,
      anon_sym_CARET,
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
    ACTIONS(91), 18,
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
  [1835] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [1879] = 6,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 16,
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
  [1919] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 21,
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
  [1953] = 11,
    ACTIONS(93), 1,
      sym_keyword_or,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(193), 1,
      sym_keyword_in,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(201), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 11,
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
  [2003] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(75), 1,
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
  [2047] = 8,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 15,
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
  [2091] = 9,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(193), 1,
      sym_keyword_in,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 15,
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
  [2137] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [2181] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 21,
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
  [2215] = 4,
    ACTIONS(167), 1,
      anon_sym_CARET,
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
    ACTIONS(91), 18,
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
  [2251] = 3,
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
  [2284] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(207), 1,
      sym_keyword_as,
    STATE(81), 1,
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
  [2325] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [2368] = 3,
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
  [2401] = 3,
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
  [2434] = 3,
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
  [2467] = 3,
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
  [2500] = 3,
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
  [2533] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 20,
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
  [2566] = 8,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(211), 1,
      anon_sym_DOT,
    STATE(90), 1,
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
  [2609] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 20,
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
  [2642] = 3,
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
  [2675] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 20,
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
  [2708] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(207), 1,
      sym_keyword_as,
    STATE(81), 1,
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
  [2749] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(207), 1,
      sym_keyword_as,
    STATE(81), 1,
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
  [2790] = 3,
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
  [2823] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(75), 1,
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
  [2866] = 3,
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
  [2899] = 8,
    ACTIONS(155), 1,
      sym_keyword_as,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(75), 1,
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
  [2942] = 3,
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
  [2974] = 3,
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
  [3006] = 3,
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
  [3038] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(207), 1,
      sym_keyword_as,
    STATE(81), 1,
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
  [3078] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(141), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 18,
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
  [3110] = 3,
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
  [3142] = 3,
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
  [3174] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 18,
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
  [3206] = 3,
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
  [3238] = 3,
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
  [3270] = 8,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    STATE(66), 1,
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
  [3312] = 3,
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
  [3344] = 3,
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
  [3376] = 3,
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
  [3408] = 9,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
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
  [3452] = 8,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(66), 1,
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
  [3494] = 8,
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
  [3536] = 3,
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
  [3568] = 3,
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
  [3600] = 3,
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
  [3632] = 3,
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
  [3664] = 3,
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
  [3696] = 3,
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
  [3728] = 3,
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
  [3760] = 3,
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
  [3792] = 3,
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
  [3824] = 7,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(207), 1,
      sym_keyword_as,
    STATE(81), 1,
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
  [3864] = 3,
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
  [3896] = 8,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    ACTIONS(229), 1,
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
  [3938] = 3,
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
  [3970] = 3,
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
  [4001] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(71), 1,
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
  [4040] = 3,
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
  [4071] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(71), 1,
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
  [4110] = 6,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(237), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(97), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 10,
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
  [4146] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(774), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(646), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4203] = 4,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 14,
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
  [4234] = 8,
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
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 11,
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
  [4273] = 9,
    ACTIONS(261), 1,
      anon_sym_PLUS,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(269), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 10,
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
  [4314] = 11,
    ACTIONS(93), 1,
      sym_keyword_or,
    ACTIONS(261), 1,
      anon_sym_PLUS,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(269), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(273), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(271), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4359] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(275), 1,
      sym_keyword_select,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(160), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(658), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(903), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4416] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(275), 1,
      sym_keyword_select,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(160), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(658), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(839), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4473] = 11,
    ACTIONS(93), 1,
      sym_keyword_or,
    ACTIONS(277), 1,
      sym_keyword_in,
    ACTIONS(283), 1,
      anon_sym_PLUS,
    ACTIONS(285), 1,
      anon_sym_DASH,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4518] = 9,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(293), 1,
      sym_keyword_in,
    ACTIONS(297), 1,
      anon_sym_PLUS,
    ACTIONS(299), 1,
      anon_sym_DASH,
    ACTIONS(301), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(295), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 10,
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
  [4559] = 4,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 14,
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
  [4590] = 6,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(301), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(295), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 12,
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
  [4625] = 11,
    ACTIONS(93), 1,
      sym_keyword_or,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(293), 1,
      sym_keyword_in,
    ACTIONS(297), 1,
      anon_sym_PLUS,
    ACTIONS(299), 1,
      anon_sym_DASH,
    ACTIONS(301), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(295), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(305), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [4670] = 8,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(297), 1,
      anon_sym_PLUS,
    ACTIONS(299), 1,
      anon_sym_DASH,
    ACTIONS(301), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(295), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 11,
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
  [4709] = 9,
    ACTIONS(277), 1,
      sym_keyword_in,
    ACTIONS(283), 1,
      anon_sym_PLUS,
    ACTIONS(285), 1,
      anon_sym_DASH,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 10,
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
  [4750] = 6,
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
    ACTIONS(93), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 12,
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
  [4785] = 4,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 14,
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
  [4816] = 6,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 12,
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
  [4851] = 12,
    ACTIONS(257), 1,
      anon_sym_CARET,
    ACTIONS(293), 1,
      sym_keyword_in,
    ACTIONS(297), 1,
      anon_sym_PLUS,
    ACTIONS(299), 1,
      anon_sym_DASH,
    ACTIONS(301), 1,
      anon_sym_SLASH,
    ACTIONS(309), 1,
      sym_keyword_and,
    ACTIONS(311), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(295), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(305), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(307), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [4898] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 5,
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
    ACTIONS(99), 10,
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
  [4929] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(821), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(646), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4986] = 8,
    ACTIONS(283), 1,
      anon_sym_PLUS,
    ACTIONS(285), 1,
      anon_sym_DASH,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 11,
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
  [5025] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(99), 10,
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
  [5056] = 12,
    ACTIONS(261), 1,
      anon_sym_PLUS,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_CARET,
    ACTIONS(269), 1,
      sym_keyword_in,
    ACTIONS(319), 1,
      sym_keyword_and,
    ACTIONS(321), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(273), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(271), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(307), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5103] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(275), 1,
      sym_keyword_select,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(160), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(658), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(882), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5160] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(816), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(646), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5217] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(275), 1,
      sym_keyword_select,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(160), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(658), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(895), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5274] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(275), 1,
      sym_keyword_select,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(160), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(658), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(899), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5331] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(799), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(646), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5388] = 17,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    STATE(758), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(646), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5445] = 16,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(329), 1,
      sym_keyword_distinct,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(814), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5499] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(141), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 15,
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
  [5527] = 8,
    ACTIONS(333), 1,
      anon_sym_PLUS,
    ACTIONS(335), 1,
      anon_sym_DASH,
    ACTIONS(337), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(331), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 10,
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
  [5565] = 11,
    ACTIONS(93), 1,
      sym_keyword_or,
    ACTIONS(333), 1,
      anon_sym_PLUS,
    ACTIONS(335), 1,
      anon_sym_DASH,
    ACTIONS(337), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(341), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(331), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(345), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(343), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [5609] = 9,
    ACTIONS(333), 1,
      anon_sym_PLUS,
    ACTIONS(335), 1,
      anon_sym_DASH,
    ACTIONS(337), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(341), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(331), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5649] = 4,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 13,
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
  [5679] = 3,
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
  [5707] = 6,
    ACTIONS(337), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(331), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 11,
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
  [5741] = 6,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(507), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(237), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(97), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
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
  [5775] = 6,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 11,
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
  [5809] = 4,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 13,
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
  [5839] = 16,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(355), 1,
      sym_keyword_distinct,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(772), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5893] = 9,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      sym_keyword_in,
    ACTIONS(359), 1,
      anon_sym_PLUS,
    ACTIONS(361), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5933] = 11,
    ACTIONS(93), 1,
      sym_keyword_or,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      sym_keyword_in,
    ACTIONS(359), 1,
      anon_sym_PLUS,
    ACTIONS(361), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(365), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(363), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5977] = 8,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(359), 1,
      anon_sym_PLUS,
    ACTIONS(361), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 10,
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
  [6015] = 3,
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
  [6043] = 16,
    ACTIONS(369), 1,
      sym_keyword_inner,
    ACTIONS(371), 1,
      sym_keyword_join,
    ACTIONS(373), 1,
      sym_keyword_where,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(377), 1,
      sym_keyword_group_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(189), 1,
      sym_index_hint,
    STATE(390), 1,
      sym_where,
    STATE(437), 1,
      sym_group_by,
    STATE(495), 1,
      sym_order_by,
    STATE(665), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(381), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(383), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(187), 2,
      sym_join,
      aux_sym_from_repeat1,
  [6097] = 16,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(387), 1,
      sym_keyword_inner,
    ACTIONS(389), 1,
      sym_keyword_join,
    ACTIONS(391), 1,
      sym_keyword_where,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(395), 1,
      sym_keyword_group_by,
    STATE(192), 1,
      sym_index_hint,
    STATE(370), 1,
      sym_where,
    STATE(439), 1,
      sym_group_by,
    STATE(495), 1,
      sym_order_by,
    STATE(665), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(385), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(194), 2,
      sym_join,
      aux_sym_from_repeat1,
  [6151] = 16,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(397), 1,
      sym_keyword_distinct,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(819), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6205] = 16,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(399), 1,
      sym_keyword_distinct,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(798), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6259] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 15,
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
  [6287] = 16,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(401), 1,
      sym_keyword_distinct,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(761), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6341] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 15,
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
  [6369] = 6,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(548), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
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
  [6402] = 15,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(712), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6453] = 4,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 13,
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
  [6482] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 3,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(97), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
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
  [6511] = 15,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(777), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6562] = 6,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 11,
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
  [6595] = 9,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_SLASH,
    ACTIONS(415), 1,
      sym_keyword_in,
    ACTIONS(417), 1,
      anon_sym_PLUS,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6634] = 10,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_SLASH,
    ACTIONS(415), 1,
      sym_keyword_in,
    ACTIONS(417), 1,
      anon_sym_PLUS,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6675] = 8,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_SLASH,
    ACTIONS(417), 1,
      anon_sym_PLUS,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 10,
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
  [6712] = 15,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(801), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6763] = 12,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      sym_keyword_in,
    ACTIONS(359), 1,
      anon_sym_PLUS,
    ACTIONS(361), 1,
      anon_sym_DASH,
    ACTIONS(427), 1,
      sym_keyword_and,
    ACTIONS(429), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(365), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(363), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6808] = 15,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(822), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6859] = 15,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(824), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6910] = 6,
    ACTIONS(437), 1,
      anon_sym_SLASH,
    ACTIONS(439), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(435), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 11,
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
  [6943] = 15,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__literal_string,
    STATE(87), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_field,
      sym_predicate,
    STATE(934), 2,
      sym_function_call,
      sym__function_param,
    STATE(221), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6994] = 4,
    ACTIONS(439), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 13,
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
  [7023] = 9,
    ACTIONS(437), 1,
      anon_sym_SLASH,
    ACTIONS(439), 1,
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
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(435), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7062] = 10,
    ACTIONS(437), 1,
      anon_sym_SLASH,
    ACTIONS(439), 1,
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
    ACTIONS(435), 2,
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
    ACTIONS(91), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7103] = 8,
    ACTIONS(437), 1,
      anon_sym_SLASH,
    ACTIONS(439), 1,
      anon_sym_CARET,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(435), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 10,
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
  [7140] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(97), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
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
  [7168] = 11,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_SLASH,
    ACTIONS(415), 1,
      sym_keyword_in,
    ACTIONS(417), 1,
      anon_sym_PLUS,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(455), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(421), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7210] = 8,
    ACTIONS(461), 1,
      sym_keyword_as,
    ACTIONS(463), 1,
      anon_sym_DOT,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(219), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(459), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(457), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [7246] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(97), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
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
  [7274] = 8,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(469), 1,
      sym_keyword_as,
    ACTIONS(471), 1,
      anon_sym_DOT,
    STATE(219), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(459), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(457), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [7310] = 15,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(473), 1,
      sym_keyword_count,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_STAR,
    ACTIONS(479), 1,
      anon_sym_BQUOTE,
    ACTIONS(481), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(332), 1,
      sym_identifier,
    STATE(395), 1,
      sym__count_function,
    STATE(531), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(492), 2,
      sym_field,
      sym_function_call,
    STATE(541), 2,
      sym__field_list,
      sym_literal,
  [7359] = 15,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_STAR,
    ACTIONS(483), 1,
      sym_keyword_count,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(326), 1,
      sym_identifier,
    STATE(380), 1,
      sym__count_function,
    STATE(531), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(479), 2,
      sym_field,
      sym_function_call,
    STATE(541), 2,
      sym__field_list,
      sym_literal,
  [7408] = 14,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(387), 1,
      sym_keyword_inner,
    ACTIONS(389), 1,
      sym_keyword_join,
    ACTIONS(391), 1,
      sym_keyword_where,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(395), 1,
      sym_keyword_group_by,
    STATE(376), 1,
      sym_where,
    STATE(460), 1,
      sym_group_by,
    STATE(482), 1,
      sym_order_by,
    STATE(602), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(385), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(489), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7455] = 14,
    ACTIONS(369), 1,
      sym_keyword_inner,
    ACTIONS(371), 1,
      sym_keyword_join,
    ACTIONS(373), 1,
      sym_keyword_where,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(377), 1,
      sym_keyword_group_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(363), 1,
      sym_where,
    STATE(435), 1,
      sym_group_by,
    STATE(477), 1,
      sym_order_by,
    STATE(596), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(491), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(305), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7502] = 14,
    ACTIONS(369), 1,
      sym_keyword_inner,
    ACTIONS(371), 1,
      sym_keyword_join,
    ACTIONS(373), 1,
      sym_keyword_where,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(377), 1,
      sym_keyword_group_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(369), 1,
      sym_where,
    STATE(438), 1,
      sym_group_by,
    STATE(482), 1,
      sym_order_by,
    STATE(602), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(489), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(305), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7549] = 14,
    ACTIONS(369), 1,
      sym_keyword_inner,
    ACTIONS(371), 1,
      sym_keyword_join,
    ACTIONS(373), 1,
      sym_keyword_where,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(377), 1,
      sym_keyword_group_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(363), 1,
      sym_where,
    STATE(435), 1,
      sym_group_by,
    STATE(477), 1,
      sym_order_by,
    STATE(596), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(367), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(491), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(188), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7596] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(497), 1,
      sym_keyword_as,
    STATE(206), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(495), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(493), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [7629] = 15,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(473), 1,
      sym_keyword_count,
    ACTIONS(477), 1,
      anon_sym_STAR,
    ACTIONS(479), 1,
      anon_sym_BQUOTE,
    ACTIONS(481), 1,
      sym__identifier,
    ACTIONS(499), 1,
      sym_keyword_distinct,
    STATE(46), 1,
      sym__literal_string,
    STATE(332), 1,
      sym_identifier,
    STATE(395), 1,
      sym__count_function,
    STATE(542), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(492), 2,
      sym_field,
      sym_function_call,
    STATE(541), 2,
      sym__field_list,
      sym_literal,
  [7678] = 14,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(387), 1,
      sym_keyword_inner,
    ACTIONS(389), 1,
      sym_keyword_join,
    ACTIONS(391), 1,
      sym_keyword_where,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(395), 1,
      sym_keyword_group_by,
    STATE(382), 1,
      sym_where,
    STATE(451), 1,
      sym_group_by,
    STATE(477), 1,
      sym_order_by,
    STATE(596), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(385), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(186), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7725] = 11,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_SLASH,
    ACTIONS(415), 1,
      sym_keyword_in,
    ACTIONS(417), 1,
      anon_sym_PLUS,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(421), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7766] = 14,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(387), 1,
      sym_keyword_inner,
    ACTIONS(389), 1,
      sym_keyword_join,
    ACTIONS(391), 1,
      sym_keyword_where,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(395), 1,
      sym_keyword_group_by,
    STATE(382), 1,
      sym_where,
    STATE(451), 1,
      sym_group_by,
    STATE(477), 1,
      sym_order_by,
    STATE(596), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(385), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7813] = 3,
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
  [7838] = 3,
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
  [7863] = 15,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(477), 1,
      anon_sym_STAR,
    ACTIONS(483), 1,
      sym_keyword_count,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(501), 1,
      sym_keyword_distinct,
    STATE(46), 1,
      sym__literal_string,
    STATE(326), 1,
      sym_identifier,
    STATE(380), 1,
      sym__count_function,
    STATE(542), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(479), 2,
      sym_field,
      sym_function_call,
    STATE(541), 2,
      sym__field_list,
      sym_literal,
  [7912] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(503), 1,
      sym_keyword_as,
    STATE(206), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(495), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(493), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [7945] = 3,
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
  [7970] = 3,
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
  [7995] = 10,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      sym_keyword_in,
    ACTIONS(359), 1,
      anon_sym_PLUS,
    ACTIONS(361), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(365), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(427), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(363), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8033] = 10,
    ACTIONS(277), 1,
      sym_keyword_in,
    ACTIONS(283), 1,
      anon_sym_PLUS,
    ACTIONS(285), 1,
      anon_sym_DASH,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(505), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(279), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8071] = 12,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(107), 1,
      sym_predicate,
    STATE(429), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(202), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8113] = 12,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(145), 1,
      sym_predicate,
    STATE(666), 1,
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
  [8155] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(509), 15,
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
      sym_keyword_using,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8177] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(511), 15,
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
      sym_keyword_using,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8199] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    STATE(80), 1,
      sym__literal_string,
    STATE(446), 1,
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
  [8239] = 10,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_DASH,
    ACTIONS(525), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(201), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(527), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(195), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8277] = 14,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(477), 1,
      anon_sym_STAR,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(371), 1,
      sym_identifier,
    STATE(463), 1,
      sym__count_function,
    STATE(763), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(541), 2,
      sym__field_list,
      sym_literal,
    STATE(677), 2,
      sym_field,
      sym_function_call,
  [8323] = 10,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(533), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(535), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8361] = 14,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(537), 1,
      sym_keyword_count,
    ACTIONS(539), 1,
      anon_sym_STAR,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(298), 1,
      sym_identifier,
    STATE(319), 1,
      sym__count_function,
    STATE(533), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(399), 2,
      sym__field_list,
      sym_literal,
    STATE(422), 2,
      sym_field,
      sym_function_call,
  [8407] = 6,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(205), 1,
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
  [8437] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(80), 1,
      sym__literal_string,
    STATE(446), 1,
      sym_where_expression,
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
  [8477] = 14,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(539), 1,
      anon_sym_STAR,
    ACTIONS(553), 1,
      sym_keyword_count,
    ACTIONS(555), 1,
      anon_sym_BQUOTE,
    ACTIONS(557), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(299), 1,
      sym_identifier,
    STATE(334), 1,
      sym__count_function,
    STATE(533), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(399), 2,
      sym__field_list,
      sym_literal,
    STATE(413), 2,
      sym_field,
      sym_function_call,
  [8523] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(80), 1,
      sym__literal_string,
    STATE(446), 1,
      sym_where_expression,
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
  [8563] = 6,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(223), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(565), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(563), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [8593] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(446), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(193), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8633] = 10,
    ACTIONS(333), 1,
      anon_sym_PLUS,
    ACTIONS(335), 1,
      anon_sym_DASH,
    ACTIONS(337), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(341), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(331), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(345), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(567), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(343), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8671] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(569), 15,
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
      sym_keyword_using,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8693] = 10,
    ACTIONS(437), 1,
      anon_sym_SLASH,
    ACTIONS(439), 1,
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
    ACTIONS(435), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(571), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(449), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8731] = 10,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_SLASH,
    ACTIONS(415), 1,
      sym_keyword_in,
    ACTIONS(417), 1,
      anon_sym_PLUS,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(421), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8769] = 6,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(205), 1,
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
  [8799] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 15,
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
      sym_keyword_using,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8821] = 6,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(223), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(565), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(563), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8851] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(575), 1,
      anon_sym_BQUOTE,
    ACTIONS(577), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(80), 1,
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
  [8888] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(575), 1,
      anon_sym_BQUOTE,
    ACTIONS(577), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(80), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(93), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8925] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(159), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8962] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(159), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8999] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(18), 1,
      sym_predicate,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9038] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(583), 14,
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
      sym_keyword_using,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9059] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
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
  [9096] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(89), 1,
      sym_identifier,
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
  [9133] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(89), 1,
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
  [9170] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(20), 1,
      sym_predicate,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9209] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(21), 1,
      sym_predicate,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
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
  [9248] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(20), 1,
      sym_predicate,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
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
  [9287] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(21), 1,
      sym_predicate,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9326] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(18), 1,
      sym_predicate,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
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
  [9365] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(129), 1,
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
  [9404] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(23), 1,
      sym_predicate,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
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
  [9443] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(89), 1,
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
  [9480] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
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
  [9517] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(44), 1,
      sym_identifier,
    STATE(80), 1,
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
  [9554] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(44), 1,
      sym_identifier,
    STATE(80), 1,
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
  [9591] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(44), 1,
      sym_identifier,
    STATE(80), 1,
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
  [9628] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(89), 1,
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
  [9665] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(89), 1,
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
  [9702] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(44), 1,
      sym_identifier,
    STATE(80), 1,
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
  [9739] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(44), 1,
      sym_identifier,
    STATE(80), 1,
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
  [9776] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(44), 1,
      sym_identifier,
    STATE(80), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(93), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9813] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(163), 1,
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
  [9852] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(575), 1,
      anon_sym_BQUOTE,
    ACTIONS(577), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(80), 1,
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
  [9889] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(126), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(202), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9928] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(575), 1,
      anon_sym_BQUOTE,
    ACTIONS(577), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(80), 1,
      sym__literal_string,
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
  [9965] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(575), 1,
      anon_sym_BQUOTE,
    ACTIONS(577), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10002] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(575), 1,
      anon_sym_BQUOTE,
    ACTIONS(577), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10039] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
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
  [10076] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    STATE(80), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(93), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10113] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10150] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10187] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10224] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10261] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10298] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10335] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10372] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10409] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(80), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(93), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10446] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10483] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10520] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(129), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(201), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10559] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
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
  [10596] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
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
  [10633] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(80), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(93), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10670] = 11,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(23), 1,
      sym_predicate,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10709] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(589), 14,
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
      sym_keyword_using,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10730] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10767] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10804] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(80), 1,
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
  [10841] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(599), 1,
      anon_sym_BQUOTE,
    ACTIONS(601), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(19), 1,
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
  [10878] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(599), 1,
      anon_sym_BQUOTE,
    ACTIONS(601), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(19), 1,
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
  [10915] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(599), 1,
      anon_sym_BQUOTE,
    ACTIONS(601), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(19), 1,
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
  [10952] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(599), 1,
      anon_sym_BQUOTE,
    ACTIONS(601), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(19), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(43), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10989] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(80), 1,
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
  [11026] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(599), 1,
      anon_sym_BQUOTE,
    ACTIONS(601), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(19), 1,
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
  [11063] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(599), 1,
      anon_sym_BQUOTE,
    ACTIONS(601), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(19), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(17), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11100] = 10,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(80), 1,
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
  [11137] = 10,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(46), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11174] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(603), 1,
      anon_sym_BQUOTE,
    ACTIONS(605), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(19), 1,
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
  [11211] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(603), 1,
      anon_sym_BQUOTE,
    ACTIONS(605), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(19), 1,
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
  [11248] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(603), 1,
      anon_sym_BQUOTE,
    ACTIONS(605), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(19), 1,
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
  [11285] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(603), 1,
      anon_sym_BQUOTE,
    ACTIONS(605), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(19), 1,
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
  [11322] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(603), 1,
      anon_sym_BQUOTE,
    ACTIONS(605), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(19), 1,
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
  [11359] = 10,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym__number,
    ACTIONS(603), 1,
      anon_sym_BQUOTE,
    ACTIONS(605), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(19), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(17), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11396] = 9,
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
    STATE(624), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(793), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [11430] = 3,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(619), 12,
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
  [11452] = 10,
    ACTIONS(625), 1,
      sym_keyword_primary,
    ACTIONS(627), 1,
      sym_keyword_not,
    ACTIONS(629), 1,
      sym_keyword_auto_increment,
    ACTIONS(631), 1,
      sym_keyword_default,
    STATE(462), 1,
      sym__primary_key,
    STATE(556), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(354), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(633), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11488] = 9,
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
    STATE(549), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(942), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [11522] = 9,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    ACTIONS(637), 1,
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
  [11555] = 9,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
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
  [11588] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(643), 12,
      sym_keyword_values,
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
  [11607] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(645), 12,
      sym_keyword_values,
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
  [11626] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(647), 12,
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
  [11645] = 6,
    ACTIONS(652), 1,
      sym_keyword_inner,
    ACTIONS(655), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(658), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11672] = 13,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(660), 1,
      sym_keyword_primary,
    ACTIONS(662), 1,
      sym_keyword_key,
    ACTIONS(664), 1,
      sym_keyword_constraint,
    STATE(4), 1,
      sym_identifier,
    STATE(670), 1,
      sym_constraint,
    STATE(690), 1,
      sym__primary_key_constraint,
    STATE(705), 1,
      sym__constraint_literal,
    STATE(719), 1,
      sym_column_definition,
    STATE(724), 1,
      sym__primary_key,
    STATE(727), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11713] = 6,
    ACTIONS(669), 1,
      sym_keyword_inner,
    ACTIONS(672), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(666), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(305), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(658), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11740] = 3,
    ACTIONS(677), 1,
      aux_sym_keyword_varchar_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 10,
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
  [11760] = 8,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(679), 1,
      anon_sym_DOT,
    STATE(66), 1,
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
  [11790] = 8,
    ACTIONS(217), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(681), 1,
      anon_sym_DOT,
    STATE(66), 1,
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
  [11820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(95), 11,
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
  [11838] = 3,
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
  [11858] = 3,
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
  [11878] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
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
  [11896] = 4,
    ACTIONS(685), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(687), 1,
      aux_sym_keyword_timestamp_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11918] = 3,
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
  [11938] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
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
  [11956] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
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
  [11974] = 3,
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
  [11994] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 10,
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
  [12011] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(691), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(693), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12038] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(71), 1,
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
  [12065] = 3,
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
  [12084] = 3,
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
  [12103] = 3,
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
  [12122] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(699), 10,
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
  [12139] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(703), 1,
      sym_keyword_as,
    STATE(367), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(701), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [12166] = 9,
    ACTIONS(61), 1,
      sym_keyword_from,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(707), 1,
      sym_keyword_as,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
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
  [12197] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_as,
    STATE(71), 1,
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
  [12224] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(715), 1,
      sym_keyword_as,
    STATE(386), 1,
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
  [12251] = 3,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(719), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12270] = 3,
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
  [12289] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(715), 1,
      sym_keyword_as,
    STATE(386), 1,
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
  [12316] = 9,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(707), 1,
      sym_keyword_as,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
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
  [12347] = 3,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12366] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(691), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(693), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(689), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [12393] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(735), 10,
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
  [12410] = 7,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(703), 1,
      sym_keyword_as,
    STATE(367), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(701), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(705), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12437] = 3,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
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
  [12456] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(741), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [12474] = 2,
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
  [12490] = 3,
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
  [12508] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(741), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12526] = 3,
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
  [12544] = 3,
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
  [12562] = 2,
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
  [12578] = 2,
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
  [12594] = 2,
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
  [12610] = 2,
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
  [12626] = 2,
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
  [12642] = 2,
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
  [12658] = 2,
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
  [12674] = 2,
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
  [12690] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(767), 1,
      sym_keyword_as,
    ACTIONS(769), 1,
      anon_sym_DOT,
    STATE(219), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [12716] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(773), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(771), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [12734] = 7,
    ACTIONS(625), 1,
      sym_keyword_primary,
    ACTIONS(775), 1,
      sym_keyword_auto_increment,
    STATE(442), 1,
      sym__primary_key,
    STATE(639), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(777), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12760] = 8,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(779), 1,
      sym_keyword_as,
    ACTIONS(781), 1,
      anon_sym_DOT,
    STATE(66), 1,
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
  [12788] = 2,
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
  [12804] = 2,
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
  [12820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(787), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12836] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(773), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(771), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12854] = 3,
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
  [12872] = 8,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(789), 1,
      sym_keyword_as,
    ACTIONS(791), 1,
      anon_sym_DOT,
    STATE(219), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(459), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [12900] = 8,
    ACTIONS(75), 1,
      sym_keyword_from,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(779), 1,
      sym_keyword_as,
    ACTIONS(793), 1,
      anon_sym_DOT,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12928] = 8,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(377), 1,
      sym_keyword_group_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(438), 1,
      sym_group_by,
    STATE(482), 1,
      sym_order_by,
    STATE(602), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12955] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(795), 1,
      sym_keyword_as,
    STATE(386), 1,
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
  [12980] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(713), 1,
      sym_keyword_from,
    ACTIONS(795), 1,
      sym_keyword_as,
    STATE(386), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13005] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(797), 1,
      sym_keyword_as,
    STATE(367), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(701), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13030] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13045] = 2,
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
  [13060] = 8,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(377), 1,
      sym_keyword_group_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(440), 1,
      sym_group_by,
    STATE(483), 1,
      sym_order_by,
    STATE(593), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13087] = 8,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(395), 1,
      sym_keyword_group_by,
    STATE(451), 1,
      sym_group_by,
    STATE(477), 1,
      sym_order_by,
    STATE(596), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13114] = 8,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(805), 1,
      sym_keyword_as,
    ACTIONS(807), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13141] = 7,
    ACTIONS(85), 1,
      sym_keyword_from,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(809), 1,
      sym_keyword_as,
    STATE(71), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13166] = 6,
    ACTIONS(625), 1,
      sym_keyword_primary,
    STATE(442), 1,
      sym__primary_key,
    STATE(639), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(777), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13189] = 9,
    ACTIONS(625), 1,
      sym_keyword_primary,
    ACTIONS(811), 1,
      sym_keyword_key,
    ACTIONS(813), 1,
      sym_keyword_constraint,
    STATE(690), 1,
      sym__primary_key_constraint,
    STATE(697), 1,
      sym_constraint,
    STATE(705), 1,
      sym__constraint_literal,
    STATE(724), 1,
      sym__primary_key,
    STATE(727), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13218] = 3,
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
  [13235] = 8,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(395), 1,
      sym_keyword_group_by,
    STATE(456), 1,
      sym_group_by,
    STATE(483), 1,
      sym_order_by,
    STATE(593), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13262] = 8,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(815), 1,
      sym_keyword_default,
    ACTIONS(817), 1,
      anon_sym_SEMI,
    STATE(779), 1,
      sym_identifier,
    STATE(851), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(425), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13289] = 2,
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
  [13304] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(821), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13319] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(689), 1,
      sym_keyword_from,
    ACTIONS(823), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(693), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13344] = 2,
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
  [13359] = 8,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(395), 1,
      sym_keyword_group_by,
    STATE(460), 1,
      sym_group_by,
    STATE(482), 1,
      sym_order_by,
    STATE(602), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13386] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(827), 1,
      sym_keyword_as,
    STATE(206), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(493), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(495), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [13411] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(809), 1,
      sym_keyword_as,
    STATE(71), 1,
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
  [13436] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(829), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13451] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(831), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13466] = 3,
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
  [13483] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(701), 1,
      sym_keyword_from,
    ACTIONS(797), 1,
      sym_keyword_as,
    STATE(367), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(705), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13508] = 8,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(815), 1,
      sym_keyword_default,
    ACTIONS(833), 1,
      anon_sym_SEMI,
    STATE(778), 1,
      sym_table_options,
    STATE(779), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(425), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13535] = 8,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(377), 1,
      sym_keyword_group_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(435), 1,
      sym_group_by,
    STATE(477), 1,
      sym_order_by,
    STATE(596), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [13562] = 9,
    ACTIONS(835), 1,
      sym_keyword_table,
    ACTIONS(837), 1,
      sym_keyword_view,
    ACTIONS(839), 1,
      sym_keyword_materialized,
    ACTIONS(841), 1,
      sym_keyword_or,
    ACTIONS(843), 1,
      sym_keyword_temp,
    ACTIONS(845), 1,
      sym_keyword_temporary,
    STATE(718), 1,
      sym__or_replace,
    STATE(833), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13591] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 6,
      sym_keyword_on,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
      sym__identifier,
  [13608] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 6,
      sym_keyword_on,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
      sym__identifier,
  [13625] = 6,
    ACTIONS(625), 1,
      sym_keyword_primary,
    STATE(461), 1,
      sym__primary_key,
    STATE(552), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(847), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13648] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(823), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(693), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13673] = 8,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(562), 1,
      sym_table_reference,
    STATE(876), 1,
      sym__table_references,
    STATE(878), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(877), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [13700] = 8,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(815), 1,
      sym_keyword_default,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    STATE(779), 1,
      sym_identifier,
    STATE(855), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(425), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13727] = 6,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(853), 1,
      sym_keyword_as,
    STATE(206), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(493), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [13750] = 4,
    STATE(543), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(855), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13768] = 3,
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
  [13784] = 7,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(857), 1,
      sym_keyword_as,
    ACTIONS(859), 1,
      anon_sym_DOT,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13808] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    STATE(46), 1,
      sym__literal_string,
    STATE(633), 1,
      sym_literal,
    STATE(634), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13834] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    STATE(46), 1,
      sym__literal_string,
    STATE(679), 1,
      sym_literal,
    STATE(680), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13860] = 7,
    ACTIONS(241), 1,
      sym_keyword_count,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(371), 1,
      sym_identifier,
    STATE(463), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(378), 2,
      sym_field,
      sym_function_call,
  [13884] = 6,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(205), 1,
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
  [13906] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(223), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(563), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [13926] = 7,
    ACTIONS(861), 1,
      sym_keyword_default,
    ACTIONS(864), 1,
      anon_sym_SEMI,
    ACTIONS(866), 1,
      anon_sym_BQUOTE,
    ACTIONS(869), 1,
      sym__identifier,
    STATE(779), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(407), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13950] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(773), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [13966] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(205), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [13986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(741), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(743), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [14002] = 6,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(223), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(563), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(565), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [14024] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(741), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14040] = 4,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    STATE(416), 1,
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
  [14058] = 7,
    ACTIONS(483), 1,
      sym_keyword_count,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    STATE(326), 1,
      sym_identifier,
    STATE(380), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(378), 2,
      sym_field,
      sym_function_call,
  [14082] = 4,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(819), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14100] = 4,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14118] = 7,
    ACTIONS(553), 1,
      sym_keyword_count,
    ACTIONS(555), 1,
      anon_sym_BQUOTE,
    ACTIONS(557), 1,
      sym__identifier,
    STATE(299), 1,
      sym_identifier,
    STATE(334), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(378), 2,
      sym_field,
      sym_function_call,
  [14142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(773), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(771), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14158] = 3,
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
  [14174] = 7,
    ACTIONS(473), 1,
      sym_keyword_count,
    ACTIONS(479), 1,
      anon_sym_BQUOTE,
    ACTIONS(481), 1,
      sym__identifier,
    STATE(332), 1,
      sym_identifier,
    STATE(395), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(378), 2,
      sym_field,
      sym_function_call,
  [14198] = 3,
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
  [14214] = 4,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(431), 1,
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
  [14232] = 5,
    ACTIONS(607), 1,
      sym_keyword_set,
    ACTIONS(615), 1,
      sym_keyword_rename,
    ACTIONS(617), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(843), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [14252] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(883), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14266] = 7,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(815), 1,
      sym_keyword_default,
    ACTIONS(885), 1,
      anon_sym_SEMI,
    STATE(779), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(407), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14290] = 8,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(887), 1,
      sym_keyword_where,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    STATE(494), 1,
      sym_where,
    STATE(662), 1,
      sym_order_by,
    STATE(825), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14316] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(891), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14330] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    STATE(46), 1,
      sym__literal_string,
    STATE(657), 1,
      sym_literal,
    STATE(658), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14356] = 8,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(887), 1,
      sym_keyword_where,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      sym_where,
    STATE(641), 1,
      sym_order_by,
    STATE(764), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14382] = 4,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(819), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14400] = 4,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14418] = 7,
    ACTIONS(537), 1,
      sym_keyword_count,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(298), 1,
      sym_identifier,
    STATE(319), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(378), 2,
      sym_field,
      sym_function_call,
  [14442] = 3,
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
  [14458] = 5,
    ACTIONS(607), 1,
      sym_keyword_set,
    ACTIONS(615), 1,
      sym_keyword_rename,
    ACTIONS(617), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(800), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [14478] = 6,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(482), 1,
      sym_order_by,
    STATE(602), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14499] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(898), 1,
      sym_keyword_if,
    STATE(295), 1,
      sym_identifier,
    STATE(525), 1,
      sym__if_not_exists,
    STATE(783), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14522] = 6,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(477), 1,
      sym_order_by,
    STATE(596), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14543] = 6,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(483), 1,
      sym_order_by,
    STATE(593), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14564] = 6,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    STATE(477), 1,
      sym_order_by,
    STATE(596), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14585] = 6,
    ACTIONS(375), 1,
      sym_keyword_order_by,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(488), 1,
      sym_order_by,
    STATE(632), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(900), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14606] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(902), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [14623] = 4,
    STATE(552), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(847), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14640] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(898), 1,
      sym_keyword_if,
    STATE(4), 1,
      sym_identifier,
    STATE(539), 1,
      sym__if_not_exists,
    STATE(738), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14663] = 5,
    ACTIONS(609), 1,
      sym_keyword_alter,
    ACTIONS(611), 1,
      sym_keyword_drop,
    ACTIONS(613), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(699), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [14682] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(898), 1,
      sym_keyword_if,
    STATE(295), 1,
      sym_identifier,
    STATE(511), 1,
      sym__if_not_exists,
    STATE(879), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14705] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(904), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14718] = 7,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(898), 1,
      sym_keyword_if,
    STATE(508), 1,
      sym__if_not_exists,
    STATE(678), 1,
      sym_identifier,
    STATE(717), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14741] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(898), 1,
      sym_keyword_if,
    STATE(295), 1,
      sym_identifier,
    STATE(506), 1,
      sym__if_not_exists,
    STATE(886), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14764] = 4,
    ACTIONS(908), 1,
      sym_keyword_having,
    STATE(474), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(906), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14781] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(910), 1,
      sym_keyword_if,
    STATE(295), 1,
      sym_identifier,
    STATE(524), 1,
      sym__if_exists,
    STATE(685), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14804] = 6,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    STATE(482), 1,
      sym_order_by,
    STATE(602), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14825] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(910), 1,
      sym_keyword_if,
    STATE(295), 1,
      sym_identifier,
    STATE(514), 1,
      sym__if_exists,
    STATE(748), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14848] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(910), 1,
      sym_keyword_if,
    STATE(295), 1,
      sym_identifier,
    STATE(423), 1,
      sym_table_reference,
    STATE(515), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14871] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(912), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14884] = 4,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [14901] = 6,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    STATE(488), 1,
      sym_order_by,
    STATE(632), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(900), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14922] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(910), 1,
      sym_keyword_if,
    STATE(295), 1,
      sym_identifier,
    STATE(297), 1,
      sym_table_reference,
    STATE(516), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14945] = 7,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(898), 1,
      sym_keyword_if,
    STATE(295), 1,
      sym_identifier,
    STATE(517), 1,
      sym__if_not_exists,
    STATE(788), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14968] = 6,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(917), 1,
      sym_keyword_as,
    STATE(71), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14989] = 6,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    STATE(483), 1,
      sym_order_by,
    STATE(593), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15010] = 4,
    STATE(597), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(919), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15027] = 4,
    STATE(639), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(777), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15044] = 6,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(921), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(693), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15065] = 6,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(923), 1,
      sym_keyword_as,
    STATE(386), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15086] = 7,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(898), 1,
      sym_keyword_if,
    STATE(521), 1,
      sym__if_not_exists,
    STATE(678), 1,
      sym_identifier,
    STATE(736), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15109] = 4,
    ACTIONS(925), 1,
      sym_keyword_having,
    STATE(474), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(906), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15126] = 6,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(927), 1,
      sym_keyword_as,
    STATE(367), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(705), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15147] = 4,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15163] = 4,
    ACTIONS(931), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(819), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15179] = 6,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    STATE(46), 1,
      sym__literal_string,
    STATE(737), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15199] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(773), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [15213] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(934), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15225] = 5,
    ACTIONS(936), 1,
      sym_keyword_on,
    ACTIONS(938), 1,
      sym_keyword_using,
    STATE(696), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15243] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(940), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15255] = 5,
    ACTIONS(942), 1,
      sym_keyword_on,
    ACTIONS(944), 1,
      sym_keyword_using,
    STATE(698), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15273] = 5,
    ACTIONS(946), 1,
      sym_keyword_on,
    ACTIONS(948), 1,
      sym_keyword_using,
    STATE(700), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15291] = 4,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(602), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15307] = 6,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    STATE(46), 1,
      sym__literal_string,
    STATE(563), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15327] = 4,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(872), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15343] = 6,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(612), 1,
      sym_table_reference,
    STATE(797), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15363] = 5,
    ACTIONS(944), 1,
      sym_keyword_using,
    ACTIONS(950), 1,
      sym_keyword_on,
    STATE(707), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15381] = 4,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(593), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15397] = 4,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(632), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(900), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15413] = 4,
    ACTIONS(952), 1,
      sym_keyword_offset,
    STATE(551), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(954), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15429] = 4,
    STATE(715), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(956), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15445] = 5,
    ACTIONS(948), 1,
      sym_keyword_using,
    ACTIONS(958), 1,
      sym_keyword_on,
    STATE(692), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15463] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(741), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(743), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [15477] = 4,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(559), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(960), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15493] = 6,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    ACTIONS(910), 1,
      sym_keyword_if,
    STATE(566), 1,
      sym__if_exists,
    STATE(713), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15513] = 6,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    STATE(582), 1,
      sym_order_by,
    STATE(848), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15533] = 5,
    ACTIONS(938), 1,
      sym_keyword_using,
    ACTIONS(964), 1,
      sym_keyword_on,
    STATE(722), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15551] = 4,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    STATE(497), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(872), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15567] = 6,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    STATE(46), 1,
      sym__literal_string,
    STATE(657), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15587] = 6,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(393), 1,
      sym_keyword_order_by,
    ACTIONS(968), 1,
      anon_sym_SEMI,
    STATE(595), 1,
      sym_order_by,
    STATE(836), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15607] = 4,
    ACTIONS(379), 1,
      sym_keyword_limit,
    STATE(596), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15623] = 4,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(496), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(819), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15639] = 4,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    STATE(496), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15655] = 3,
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
  [15669] = 6,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__number,
    STATE(46), 1,
      sym__literal_string,
    STATE(484), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15689] = 6,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    ACTIONS(973), 1,
      sym_keyword_column,
    ACTIONS(975), 1,
      sym_keyword_to,
    STATE(796), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15709] = 4,
    ACTIONS(977), 1,
      sym_keyword_from,
    STATE(883), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      sym_keyword_force,
      sym_keyword_use,
  [15724] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(979), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(981), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15737] = 5,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(645), 1,
      sym__column_without_order,
    STATE(747), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15754] = 4,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(504), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [15769] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(523), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15786] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(783), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15803] = 4,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(504), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(902), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [15818] = 5,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(678), 1,
      sym_identifier,
    STATE(742), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15835] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(988), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(990), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15848] = 5,
    ACTIONS(992), 1,
      anon_sym_BQUOTE,
    ACTIONS(994), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(473), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15865] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(790), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15882] = 5,
    ACTIONS(996), 1,
      anon_sym_BQUOTE,
    ACTIONS(998), 1,
      sym__identifier,
    STATE(153), 1,
      sym_table_expression,
    STATE(181), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15899] = 5,
    ACTIONS(992), 1,
      anon_sym_BQUOTE,
    ACTIONS(994), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(486), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15916] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(706), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15933] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(434), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15950] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(294), 1,
      sym_table_reference,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15967] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(879), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15984] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1000), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15995] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [16008] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [16021] = 5,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(678), 1,
      sym_identifier,
    STATE(717), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16038] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(731), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16055] = 5,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    STATE(538), 1,
      aux_sym_column_definitions_repeat1,
    STATE(852), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16072] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(711), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16089] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    STATE(858), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16106] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(719), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16123] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1006), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1008), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16136] = 5,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(741), 1,
      sym__column_without_order,
    STATE(747), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16153] = 5,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(678), 1,
      sym_identifier,
    STATE(887), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16170] = 5,
    ACTIONS(992), 1,
      anon_sym_BQUOTE,
    ACTIONS(994), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(481), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16187] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1010), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16198] = 5,
    ACTIONS(1012), 1,
      anon_sym_BQUOTE,
    ACTIONS(1014), 1,
      sym__identifier,
    STATE(361), 1,
      sym_identifier,
    STATE(426), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16215] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1016), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16226] = 5,
    ACTIONS(1018), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(154), 1,
      sym_table_expression,
    STATE(183), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16243] = 5,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(485), 1,
      sym_identifier,
    STATE(605), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16260] = 4,
    ACTIONS(1024), 1,
      sym_keyword_from,
    STATE(729), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1026), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16275] = 5,
    ACTIONS(992), 1,
      anon_sym_BQUOTE,
    ACTIONS(994), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(491), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16292] = 5,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      aux_sym_column_definitions_repeat1,
    STATE(893), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16309] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(730), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16326] = 5,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(485), 1,
      sym_identifier,
    STATE(734), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16343] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1030), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16354] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1032), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16365] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1034), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16376] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1036), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1038), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16389] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1040), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1042), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16402] = 5,
    ACTIONS(992), 1,
      anon_sym_BQUOTE,
    ACTIONS(994), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(476), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16419] = 5,
    ACTIONS(992), 1,
      anon_sym_BQUOTE,
    ACTIONS(994), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(475), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16436] = 4,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16450] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
    STATE(613), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16464] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16478] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1050), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16488] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(919), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16498] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(466), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16512] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16526] = 4,
    ACTIONS(1052), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1054), 1,
      anon_sym_SEMI,
    STATE(745), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16540] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(777), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16550] = 4,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      anon_sym_SEMI,
    STATE(557), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16564] = 4,
    ACTIONS(1026), 1,
      anon_sym_SEMI,
    ACTIONS(1061), 1,
      sym_keyword_from,
    STATE(729), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16578] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1063), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16588] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(809), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16602] = 4,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    STATE(616), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16616] = 4,
    ACTIONS(1069), 1,
      sym_keyword_set,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    STATE(620), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16630] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1073), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16640] = 4,
    ACTIONS(575), 1,
      anon_sym_BQUOTE,
    ACTIONS(577), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16654] = 4,
    ACTIONS(575), 1,
      anon_sym_BQUOTE,
    ACTIONS(577), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16668] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(726), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16682] = 4,
    ACTIONS(1075), 1,
      sym_keyword_set,
    ACTIONS(1077), 1,
      sym_keyword_drop,
    ACTIONS(1079), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16696] = 4,
    ACTIONS(599), 1,
      anon_sym_BQUOTE,
    ACTIONS(601), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16710] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_SEMI,
    STATE(557), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16724] = 4,
    ACTIONS(599), 1,
      anon_sym_BQUOTE,
    ACTIONS(601), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16738] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(558), 1,
      sym_select,
    STATE(753), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16752] = 4,
    ACTIONS(1052), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1083), 1,
      anon_sym_SEMI,
    STATE(746), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16766] = 4,
    ACTIONS(1085), 1,
      sym_keyword_select,
    STATE(536), 1,
      sym_select,
    STATE(555), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16780] = 4,
    ACTIONS(555), 1,
      anon_sym_BQUOTE,
    ACTIONS(1087), 1,
      sym__identifier,
    STATE(327), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16794] = 4,
    ACTIONS(555), 1,
      anon_sym_BQUOTE,
    ACTIONS(1087), 1,
      sym__identifier,
    STATE(308), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16808] = 4,
    ACTIONS(1089), 1,
      anon_sym_BQUOTE,
    ACTIONS(1091), 1,
      sym__identifier,
    STATE(545), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16822] = 4,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16836] = 4,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      sym__identifier,
    STATE(48), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16850] = 4,
    ACTIONS(603), 1,
      anon_sym_BQUOTE,
    ACTIONS(605), 1,
      sym__identifier,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16864] = 4,
    ACTIONS(603), 1,
      anon_sym_BQUOTE,
    ACTIONS(605), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16878] = 4,
    ACTIONS(479), 1,
      anon_sym_BQUOTE,
    ACTIONS(1093), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16892] = 4,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(1095), 1,
      anon_sym_SEMI,
    STATE(756), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16906] = 4,
    ACTIONS(479), 1,
      anon_sym_BQUOTE,
    ACTIONS(1093), 1,
      sym__identifier,
    STATE(355), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16920] = 4,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(635), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16934] = 4,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16948] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(794), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16962] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16976] = 4,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    STATE(588), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16990] = 4,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17004] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17018] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17032] = 4,
    ACTIONS(1085), 1,
      sym_keyword_select,
    STATE(536), 1,
      sym_select,
    STATE(656), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17046] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(900), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17056] = 4,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17070] = 4,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(1106), 1,
      anon_sym_SEMI,
    STATE(811), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17084] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17094] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1108), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17104] = 4,
    ACTIONS(1110), 1,
      sym_keyword_not,
    ACTIONS(1112), 1,
      sym_keyword_default,
    ACTIONS(1114), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17118] = 4,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17132] = 4,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(601), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17146] = 4,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(601), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17160] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17170] = 4,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(1125), 1,
      sym__identifier,
    STATE(320), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17184] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(381), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17198] = 4,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(561), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17212] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17226] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(362), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17240] = 4,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(1125), 1,
      sym__identifier,
    STATE(307), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17254] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1129), 1,
      sym__identifier,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17268] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1129), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17282] = 4,
    ACTIONS(996), 1,
      anon_sym_BQUOTE,
    ACTIONS(998), 1,
      sym__identifier,
    STATE(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17296] = 4,
    ACTIONS(1131), 1,
      sym_keyword_values,
    ACTIONS(1133), 1,
      anon_sym_LPAREN,
    STATE(849), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17310] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    STATE(557), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17324] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1129), 1,
      sym__identifier,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17338] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(901), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17352] = 4,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    STATE(616), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17366] = 4,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(617), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17380] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(881), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17394] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17408] = 4,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      sym_keyword_set,
    STATE(651), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17422] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(567), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17436] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(860), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17450] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17464] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    STATE(569), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17478] = 4,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17492] = 4,
    ACTIONS(559), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym__identifier,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17506] = 4,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(1149), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17520] = 4,
    ACTIONS(1085), 1,
      sym_keyword_select,
    STATE(536), 1,
      sym_select,
    STATE(572), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17534] = 4,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17548] = 4,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(1149), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17562] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(558), 1,
      sym_select,
    STATE(857), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17576] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(960), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17586] = 4,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17600] = 4,
    ACTIONS(1061), 1,
      sym_keyword_from,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(780), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17614] = 4,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    STATE(635), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17628] = 4,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(1162), 1,
      sym__identifier,
    STATE(459), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17642] = 4,
    ACTIONS(992), 1,
      anon_sym_BQUOTE,
    ACTIONS(994), 1,
      sym__identifier,
    STATE(398), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17656] = 4,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(1149), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17670] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(847), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17680] = 4,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(674), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17694] = 4,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    STATE(848), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17708] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17722] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(381), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17736] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17750] = 4,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17764] = 4,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(654), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17778] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17792] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(759), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17806] = 4,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17820] = 4,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(1162), 1,
      sym__identifier,
    STATE(401), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17834] = 4,
    ACTIONS(1172), 1,
      sym_keyword_set,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(651), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17848] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(372), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17862] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17876] = 4,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17890] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17904] = 4,
    ACTIONS(1052), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1179), 1,
      anon_sym_SEMI,
    STATE(689), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17918] = 4,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17932] = 4,
    ACTIONS(1061), 1,
      sym_keyword_from,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(840), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17946] = 4,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(507), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17960] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17974] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17988] = 4,
    ACTIONS(379), 1,
      sym_keyword_limit,
    ACTIONS(968), 1,
      anon_sym_SEMI,
    STATE(836), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18002] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(723), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18016] = 4,
    ACTIONS(1018), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(190), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18030] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18040] = 4,
    ACTIONS(1185), 1,
      sym_keyword_where,
    ACTIONS(1187), 1,
      anon_sym_SEMI,
    STATE(776), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18054] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18068] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18082] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(849), 1,
      sym__identifier,
    STATE(449), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18096] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18110] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(558), 1,
      sym_select,
    STATE(781), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18124] = 4,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18138] = 4,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    STATE(673), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18152] = 4,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    STATE(674), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18166] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18180] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18194] = 4,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(640), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18208] = 3,
    ACTIONS(1201), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(619), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [18220] = 4,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18234] = 4,
    ACTIONS(1061), 1,
      sym_keyword_from,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
    STATE(885), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18248] = 4,
    ACTIONS(1012), 1,
      anon_sym_BQUOTE,
    ACTIONS(1014), 1,
      sym__identifier,
    STATE(383), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18262] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(925), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18276] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(381), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18290] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18304] = 3,
    ACTIONS(1207), 1,
      sym_keyword_cascade,
    ACTIONS(1209), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18315] = 3,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18326] = 3,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18337] = 3,
    ACTIONS(1219), 1,
      sym_keyword_outer,
    ACTIONS(1221), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18348] = 3,
    ACTIONS(1223), 1,
      sym_keyword_no,
    ACTIONS(1225), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18359] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1227), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18368] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(455), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18377] = 3,
    ACTIONS(944), 1,
      sym_keyword_using,
    ACTIONS(950), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18388] = 3,
    ACTIONS(1133), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18399] = 3,
    ACTIONS(1229), 1,
      sym_keyword_table,
    ACTIONS(1231), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18410] = 3,
    ACTIONS(1233), 1,
      sym_keyword_table,
    ACTIONS(1235), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18421] = 3,
    ACTIONS(1237), 1,
      sym_keyword_on,
    ACTIONS(1239), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18432] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1120), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18441] = 3,
    ACTIONS(936), 1,
      sym_keyword_on,
    ACTIONS(938), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1059), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18461] = 3,
    ACTIONS(942), 1,
      sym_keyword_on,
    ACTIONS(944), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18472] = 3,
    ACTIONS(1133), 1,
      anon_sym_LPAREN,
    STATE(309), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18483] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1241), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18492] = 3,
    ACTIONS(1133), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18503] = 3,
    ACTIONS(1243), 1,
      sym_keyword_from,
    STATE(815), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18514] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1245), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18523] = 3,
    ACTIONS(1247), 1,
      sym_keyword_cascade,
    ACTIONS(1249), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18534] = 3,
    ACTIONS(938), 1,
      sym_keyword_using,
    ACTIONS(964), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18545] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1251), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18554] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1253), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18563] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1255), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18572] = 3,
    ACTIONS(1257), 1,
      sym_keyword_cascade,
    ACTIONS(1259), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18583] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1261), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18592] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1263), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18601] = 3,
    ACTIONS(1265), 1,
      sym_keyword_outer,
    ACTIONS(1267), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18612] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1269), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18621] = 3,
    ACTIONS(1133), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18632] = 3,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
    STATE(377), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18643] = 3,
    ACTIONS(1273), 1,
      sym_keyword_view,
    ACTIONS(1275), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18654] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1193), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18663] = 3,
    ACTIONS(1277), 1,
      anon_sym_LPAREN,
    STATE(743), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1279), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18683] = 3,
    ACTIONS(1239), 1,
      sym_keyword_using,
    ACTIONS(1281), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18694] = 3,
    ACTIONS(625), 1,
      sym_keyword_primary,
    STATE(739), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18705] = 3,
    ACTIONS(1277), 1,
      anon_sym_LPAREN,
    STATE(725), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18716] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1283), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18725] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1285), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18734] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1245), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18743] = 3,
    ACTIONS(1110), 1,
      sym_keyword_not,
    ACTIONS(1287), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18754] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1289), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [18763] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1291), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18772] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1172), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [18781] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1293), 2,
      sym_keyword_no,
      sym_keyword_data,
  [18790] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1295), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18799] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1137), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18808] = 3,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
    STATE(760), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18819] = 3,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
    STATE(389), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18830] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1142), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18839] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1299), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18848] = 3,
    ACTIONS(1277), 1,
      anon_sym_LPAREN,
    STATE(708), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18859] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1301), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18868] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1303), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18877] = 3,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
    STATE(397), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18888] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1305), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18897] = 3,
    ACTIONS(1307), 1,
      sym_keyword_for,
    ACTIONS(1309), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18908] = 3,
    ACTIONS(1311), 1,
      sym_keyword_no,
    ACTIONS(1313), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18919] = 3,
    ACTIONS(1315), 1,
      sym_keyword_no,
    ACTIONS(1317), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18930] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1319), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18939] = 3,
    ACTIONS(1321), 1,
      sym_keyword_cascade,
    ACTIONS(1323), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18950] = 3,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
    STATE(846), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18961] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1325), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [18970] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1327), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18979] = 2,
    ACTIONS(1329), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18987] = 2,
    ACTIONS(1331), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18995] = 2,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19003] = 2,
    ACTIONS(1335), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19011] = 2,
    ACTIONS(1337), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19019] = 2,
    ACTIONS(1339), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19027] = 2,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19035] = 2,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19043] = 2,
    ACTIONS(1345), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19051] = 2,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19059] = 2,
    ACTIONS(1313), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19067] = 2,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19075] = 2,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19083] = 2,
    ACTIONS(1351), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19091] = 2,
    ACTIONS(1353), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19099] = 2,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19107] = 2,
    ACTIONS(1357), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19115] = 2,
    ACTIONS(1357), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19123] = 2,
    ACTIONS(1359), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19131] = 2,
    ACTIONS(1361), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19139] = 2,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19147] = 2,
    ACTIONS(1365), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19155] = 2,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19163] = 2,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19171] = 2,
    ACTIONS(1371), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19179] = 2,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19187] = 2,
    ACTIONS(817), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19195] = 2,
    ACTIONS(1375), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19203] = 2,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19211] = 2,
    ACTIONS(1379), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19219] = 2,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19227] = 2,
    ACTIONS(1383), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19235] = 2,
    ACTIONS(1385), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19243] = 2,
    ACTIONS(1387), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19251] = 2,
    ACTIONS(1389), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19259] = 2,
    ACTIONS(1391), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19267] = 2,
    ACTIONS(1393), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19275] = 2,
    ACTIONS(1395), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19283] = 2,
    ACTIONS(1397), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19291] = 2,
    ACTIONS(1399), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19299] = 2,
    ACTIONS(1401), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19307] = 2,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19315] = 2,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19323] = 2,
    ACTIONS(1405), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19331] = 2,
    ACTIONS(1407), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19339] = 2,
    ACTIONS(1409), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19347] = 2,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19355] = 2,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19363] = 2,
    ACTIONS(1415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19371] = 2,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19379] = 2,
    ACTIONS(1419), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19387] = 2,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19395] = 2,
    ACTIONS(1423), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19403] = 2,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19411] = 2,
    ACTIONS(1427), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19419] = 2,
    ACTIONS(1429), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19427] = 2,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19435] = 2,
    ACTIONS(1433), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19443] = 2,
    ACTIONS(1435), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19451] = 2,
    ACTIONS(1437), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19459] = 2,
    ACTIONS(1439), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19467] = 2,
    ACTIONS(1441), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19475] = 2,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19483] = 2,
    ACTIONS(1445), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19491] = 2,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19499] = 2,
    ACTIONS(1449), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19507] = 2,
    ACTIONS(1451), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19515] = 2,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19523] = 2,
    ACTIONS(1179), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19531] = 2,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19539] = 2,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19547] = 2,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19555] = 2,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19563] = 2,
    ACTIONS(968), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19571] = 2,
    ACTIONS(1463), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19579] = 2,
    ACTIONS(1465), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19587] = 2,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19595] = 2,
    ACTIONS(1469), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19603] = 2,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19611] = 2,
    ACTIONS(1473), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19619] = 2,
    ACTIONS(1475), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19627] = 2,
    ACTIONS(1477), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19635] = 2,
    ACTIONS(1479), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19643] = 2,
    ACTIONS(1481), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19651] = 2,
    ACTIONS(1106), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19659] = 2,
    ACTIONS(1483), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19667] = 2,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19675] = 2,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19683] = 2,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19691] = 2,
    ACTIONS(1491), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19699] = 2,
    ACTIONS(1225), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19707] = 2,
    ACTIONS(1493), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19715] = 2,
    ACTIONS(1495), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19723] = 2,
    ACTIONS(1497), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19731] = 2,
    ACTIONS(1499), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19739] = 2,
    ACTIONS(1501), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19747] = 2,
    ACTIONS(1095), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19755] = 2,
    ACTIONS(1503), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19763] = 2,
    ACTIONS(1505), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19771] = 2,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19779] = 2,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19787] = 2,
    ACTIONS(1507), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19795] = 2,
    ACTIONS(1509), 1,
      aux_sym_double_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19803] = 2,
    ACTIONS(1511), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19811] = 2,
    ACTIONS(1513), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19819] = 2,
    ACTIONS(1515), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19827] = 2,
    ACTIONS(1517), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19835] = 2,
    ACTIONS(1519), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19843] = 2,
    ACTIONS(1521), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19851] = 2,
    ACTIONS(1523), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19859] = 2,
    ACTIONS(1525), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19867] = 2,
    ACTIONS(1527), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19875] = 2,
    ACTIONS(1529), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19883] = 2,
    ACTIONS(1531), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19891] = 2,
    ACTIONS(1533), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19899] = 2,
    ACTIONS(1535), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19907] = 2,
    ACTIONS(1537), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19915] = 2,
    ACTIONS(1539), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19923] = 2,
    ACTIONS(1541), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19931] = 2,
    ACTIONS(1543), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19939] = 2,
    ACTIONS(1267), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19947] = 2,
    ACTIONS(1547), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1545), 2,
      sym_comment,
      sym_marginalia,
  [19955] = 2,
    ACTIONS(1549), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1545), 2,
      sym_comment,
      sym_marginalia,
  [19963] = 2,
    ACTIONS(1551), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19971] = 2,
    ACTIONS(1553), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19979] = 2,
    ACTIONS(1555), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19987] = 2,
    ACTIONS(1557), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19995] = 2,
    ACTIONS(1559), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20003] = 2,
    ACTIONS(1259), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20011] = 2,
    ACTIONS(1561), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20019] = 2,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20027] = 2,
    ACTIONS(1565), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20035] = 2,
    ACTIONS(1567), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20043] = 2,
    ACTIONS(1569), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20051] = 2,
    ACTIONS(1571), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20059] = 2,
    ACTIONS(1573), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20067] = 2,
    ACTIONS(1575), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1545), 2,
      sym_comment,
      sym_marginalia,
  [20075] = 2,
    ACTIONS(1577), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1545), 2,
      sym_comment,
      sym_marginalia,
  [20083] = 2,
    ACTIONS(1579), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20091] = 2,
    ACTIONS(1581), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20099] = 2,
    ACTIONS(1583), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1545), 2,
      sym_comment,
      sym_marginalia,
  [20107] = 2,
    ACTIONS(1585), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20115] = 2,
    ACTIONS(1587), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1545), 2,
      sym_comment,
      sym_marginalia,
  [20123] = 2,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20131] = 2,
    ACTIONS(1591), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20139] = 2,
    ACTIONS(1593), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20147] = 2,
    ACTIONS(1249), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20155] = 2,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20163] = 2,
    ACTIONS(1597), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20171] = 2,
    ACTIONS(1599), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20179] = 2,
    ACTIONS(1601), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20187] = 2,
    ACTIONS(1603), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20195] = 2,
    ACTIONS(1605), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20203] = 2,
    ACTIONS(1607), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20211] = 2,
    ACTIONS(1609), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20219] = 2,
    ACTIONS(1611), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20227] = 2,
    ACTIONS(1613), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20235] = 2,
    ACTIONS(1615), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20243] = 2,
    ACTIONS(1617), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20251] = 2,
    ACTIONS(1619), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20259] = 2,
    ACTIONS(1621), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20267] = 2,
    ACTIONS(1623), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20275] = 2,
    ACTIONS(1625), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20283] = 2,
    ACTIONS(1627), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20291] = 2,
    ACTIONS(1629), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20299] = 2,
    ACTIONS(1631), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20307] = 2,
    ACTIONS(1633), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20315] = 2,
    ACTIONS(1635), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20323] = 2,
    ACTIONS(1637), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20331] = 2,
    ACTIONS(1639), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20339] = 2,
    ACTIONS(1641), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20347] = 2,
    ACTIONS(1643), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20355] = 2,
    ACTIONS(1441), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20363] = 2,
    ACTIONS(1645), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20371] = 2,
    ACTIONS(1647), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20379] = 2,
    ACTIONS(1649), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20387] = 2,
    ACTIONS(1651), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20395] = 2,
    ACTIONS(1653), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20403] = 2,
    ACTIONS(1655), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20411] = 2,
    ACTIONS(1657), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20419] = 2,
    ACTIONS(1659), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20427] = 2,
    ACTIONS(1661), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20435] = 2,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20443] = 2,
    ACTIONS(1665), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20451] = 2,
    ACTIONS(1667), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20459] = 2,
    ACTIONS(1669), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20467] = 2,
    ACTIONS(1655), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20475] = 2,
    ACTIONS(1671), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20483] = 2,
    ACTIONS(1673), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20491] = 2,
    ACTIONS(1675), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20499] = 2,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20507] = 2,
    ACTIONS(1221), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20515] = 2,
    ACTIONS(1677), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 218,
  [SMALL_STATE(6)] = 296,
  [SMALL_STATE(7)] = 374,
  [SMALL_STATE(8)] = 423,
  [SMALL_STATE(9)] = 472,
  [SMALL_STATE(10)] = 521,
  [SMALL_STATE(11)] = 570,
  [SMALL_STATE(12)] = 616,
  [SMALL_STATE(13)] = 654,
  [SMALL_STATE(14)] = 692,
  [SMALL_STATE(15)] = 738,
  [SMALL_STATE(16)] = 776,
  [SMALL_STATE(17)] = 814,
  [SMALL_STATE(18)] = 849,
  [SMALL_STATE(19)] = 886,
  [SMALL_STATE(20)] = 921,
  [SMALL_STATE(21)] = 958,
  [SMALL_STATE(22)] = 995,
  [SMALL_STATE(23)] = 1030,
  [SMALL_STATE(24)] = 1067,
  [SMALL_STATE(25)] = 1102,
  [SMALL_STATE(26)] = 1137,
  [SMALL_STATE(27)] = 1172,
  [SMALL_STATE(28)] = 1207,
  [SMALL_STATE(29)] = 1242,
  [SMALL_STATE(30)] = 1277,
  [SMALL_STATE(31)] = 1312,
  [SMALL_STATE(32)] = 1347,
  [SMALL_STATE(33)] = 1382,
  [SMALL_STATE(34)] = 1417,
  [SMALL_STATE(35)] = 1452,
  [SMALL_STATE(36)] = 1487,
  [SMALL_STATE(37)] = 1531,
  [SMALL_STATE(38)] = 1571,
  [SMALL_STATE(39)] = 1615,
  [SMALL_STATE(40)] = 1659,
  [SMALL_STATE(41)] = 1703,
  [SMALL_STATE(42)] = 1753,
  [SMALL_STATE(43)] = 1799,
  [SMALL_STATE(44)] = 1835,
  [SMALL_STATE(45)] = 1879,
  [SMALL_STATE(46)] = 1919,
  [SMALL_STATE(47)] = 1953,
  [SMALL_STATE(48)] = 2003,
  [SMALL_STATE(49)] = 2047,
  [SMALL_STATE(50)] = 2091,
  [SMALL_STATE(51)] = 2137,
  [SMALL_STATE(52)] = 2181,
  [SMALL_STATE(53)] = 2215,
  [SMALL_STATE(54)] = 2251,
  [SMALL_STATE(55)] = 2284,
  [SMALL_STATE(56)] = 2325,
  [SMALL_STATE(57)] = 2368,
  [SMALL_STATE(58)] = 2401,
  [SMALL_STATE(59)] = 2434,
  [SMALL_STATE(60)] = 2467,
  [SMALL_STATE(61)] = 2500,
  [SMALL_STATE(62)] = 2533,
  [SMALL_STATE(63)] = 2566,
  [SMALL_STATE(64)] = 2609,
  [SMALL_STATE(65)] = 2642,
  [SMALL_STATE(66)] = 2675,
  [SMALL_STATE(67)] = 2708,
  [SMALL_STATE(68)] = 2749,
  [SMALL_STATE(69)] = 2790,
  [SMALL_STATE(70)] = 2823,
  [SMALL_STATE(71)] = 2866,
  [SMALL_STATE(72)] = 2899,
  [SMALL_STATE(73)] = 2942,
  [SMALL_STATE(74)] = 2974,
  [SMALL_STATE(75)] = 3006,
  [SMALL_STATE(76)] = 3038,
  [SMALL_STATE(77)] = 3078,
  [SMALL_STATE(78)] = 3110,
  [SMALL_STATE(79)] = 3142,
  [SMALL_STATE(80)] = 3174,
  [SMALL_STATE(81)] = 3206,
  [SMALL_STATE(82)] = 3238,
  [SMALL_STATE(83)] = 3270,
  [SMALL_STATE(84)] = 3312,
  [SMALL_STATE(85)] = 3344,
  [SMALL_STATE(86)] = 3376,
  [SMALL_STATE(87)] = 3408,
  [SMALL_STATE(88)] = 3452,
  [SMALL_STATE(89)] = 3494,
  [SMALL_STATE(90)] = 3536,
  [SMALL_STATE(91)] = 3568,
  [SMALL_STATE(92)] = 3600,
  [SMALL_STATE(93)] = 3632,
  [SMALL_STATE(94)] = 3664,
  [SMALL_STATE(95)] = 3696,
  [SMALL_STATE(96)] = 3728,
  [SMALL_STATE(97)] = 3760,
  [SMALL_STATE(98)] = 3792,
  [SMALL_STATE(99)] = 3824,
  [SMALL_STATE(100)] = 3864,
  [SMALL_STATE(101)] = 3896,
  [SMALL_STATE(102)] = 3938,
  [SMALL_STATE(103)] = 3970,
  [SMALL_STATE(104)] = 4001,
  [SMALL_STATE(105)] = 4040,
  [SMALL_STATE(106)] = 4071,
  [SMALL_STATE(107)] = 4110,
  [SMALL_STATE(108)] = 4146,
  [SMALL_STATE(109)] = 4203,
  [SMALL_STATE(110)] = 4234,
  [SMALL_STATE(111)] = 4273,
  [SMALL_STATE(112)] = 4314,
  [SMALL_STATE(113)] = 4359,
  [SMALL_STATE(114)] = 4416,
  [SMALL_STATE(115)] = 4473,
  [SMALL_STATE(116)] = 4518,
  [SMALL_STATE(117)] = 4559,
  [SMALL_STATE(118)] = 4590,
  [SMALL_STATE(119)] = 4625,
  [SMALL_STATE(120)] = 4670,
  [SMALL_STATE(121)] = 4709,
  [SMALL_STATE(122)] = 4750,
  [SMALL_STATE(123)] = 4785,
  [SMALL_STATE(124)] = 4816,
  [SMALL_STATE(125)] = 4851,
  [SMALL_STATE(126)] = 4898,
  [SMALL_STATE(127)] = 4929,
  [SMALL_STATE(128)] = 4986,
  [SMALL_STATE(129)] = 5025,
  [SMALL_STATE(130)] = 5056,
  [SMALL_STATE(131)] = 5103,
  [SMALL_STATE(132)] = 5160,
  [SMALL_STATE(133)] = 5217,
  [SMALL_STATE(134)] = 5274,
  [SMALL_STATE(135)] = 5331,
  [SMALL_STATE(136)] = 5388,
  [SMALL_STATE(137)] = 5445,
  [SMALL_STATE(138)] = 5499,
  [SMALL_STATE(139)] = 5527,
  [SMALL_STATE(140)] = 5565,
  [SMALL_STATE(141)] = 5609,
  [SMALL_STATE(142)] = 5649,
  [SMALL_STATE(143)] = 5679,
  [SMALL_STATE(144)] = 5707,
  [SMALL_STATE(145)] = 5741,
  [SMALL_STATE(146)] = 5775,
  [SMALL_STATE(147)] = 5809,
  [SMALL_STATE(148)] = 5839,
  [SMALL_STATE(149)] = 5893,
  [SMALL_STATE(150)] = 5933,
  [SMALL_STATE(151)] = 5977,
  [SMALL_STATE(152)] = 6015,
  [SMALL_STATE(153)] = 6043,
  [SMALL_STATE(154)] = 6097,
  [SMALL_STATE(155)] = 6151,
  [SMALL_STATE(156)] = 6205,
  [SMALL_STATE(157)] = 6259,
  [SMALL_STATE(158)] = 6287,
  [SMALL_STATE(159)] = 6341,
  [SMALL_STATE(160)] = 6369,
  [SMALL_STATE(161)] = 6402,
  [SMALL_STATE(162)] = 6453,
  [SMALL_STATE(163)] = 6482,
  [SMALL_STATE(164)] = 6511,
  [SMALL_STATE(165)] = 6562,
  [SMALL_STATE(166)] = 6595,
  [SMALL_STATE(167)] = 6634,
  [SMALL_STATE(168)] = 6675,
  [SMALL_STATE(169)] = 6712,
  [SMALL_STATE(170)] = 6763,
  [SMALL_STATE(171)] = 6808,
  [SMALL_STATE(172)] = 6859,
  [SMALL_STATE(173)] = 6910,
  [SMALL_STATE(174)] = 6943,
  [SMALL_STATE(175)] = 6994,
  [SMALL_STATE(176)] = 7023,
  [SMALL_STATE(177)] = 7062,
  [SMALL_STATE(178)] = 7103,
  [SMALL_STATE(179)] = 7140,
  [SMALL_STATE(180)] = 7168,
  [SMALL_STATE(181)] = 7210,
  [SMALL_STATE(182)] = 7246,
  [SMALL_STATE(183)] = 7274,
  [SMALL_STATE(184)] = 7310,
  [SMALL_STATE(185)] = 7359,
  [SMALL_STATE(186)] = 7408,
  [SMALL_STATE(187)] = 7455,
  [SMALL_STATE(188)] = 7502,
  [SMALL_STATE(189)] = 7549,
  [SMALL_STATE(190)] = 7596,
  [SMALL_STATE(191)] = 7629,
  [SMALL_STATE(192)] = 7678,
  [SMALL_STATE(193)] = 7725,
  [SMALL_STATE(194)] = 7766,
  [SMALL_STATE(195)] = 7813,
  [SMALL_STATE(196)] = 7838,
  [SMALL_STATE(197)] = 7863,
  [SMALL_STATE(198)] = 7912,
  [SMALL_STATE(199)] = 7945,
  [SMALL_STATE(200)] = 7970,
  [SMALL_STATE(201)] = 7995,
  [SMALL_STATE(202)] = 8033,
  [SMALL_STATE(203)] = 8071,
  [SMALL_STATE(204)] = 8113,
  [SMALL_STATE(205)] = 8155,
  [SMALL_STATE(206)] = 8177,
  [SMALL_STATE(207)] = 8199,
  [SMALL_STATE(208)] = 8239,
  [SMALL_STATE(209)] = 8277,
  [SMALL_STATE(210)] = 8323,
  [SMALL_STATE(211)] = 8361,
  [SMALL_STATE(212)] = 8407,
  [SMALL_STATE(213)] = 8437,
  [SMALL_STATE(214)] = 8477,
  [SMALL_STATE(215)] = 8523,
  [SMALL_STATE(216)] = 8563,
  [SMALL_STATE(217)] = 8593,
  [SMALL_STATE(218)] = 8633,
  [SMALL_STATE(219)] = 8671,
  [SMALL_STATE(220)] = 8693,
  [SMALL_STATE(221)] = 8731,
  [SMALL_STATE(222)] = 8769,
  [SMALL_STATE(223)] = 8799,
  [SMALL_STATE(224)] = 8821,
  [SMALL_STATE(225)] = 8851,
  [SMALL_STATE(226)] = 8888,
  [SMALL_STATE(227)] = 8925,
  [SMALL_STATE(228)] = 8962,
  [SMALL_STATE(229)] = 8999,
  [SMALL_STATE(230)] = 9038,
  [SMALL_STATE(231)] = 9059,
  [SMALL_STATE(232)] = 9096,
  [SMALL_STATE(233)] = 9133,
  [SMALL_STATE(234)] = 9170,
  [SMALL_STATE(235)] = 9209,
  [SMALL_STATE(236)] = 9248,
  [SMALL_STATE(237)] = 9287,
  [SMALL_STATE(238)] = 9326,
  [SMALL_STATE(239)] = 9365,
  [SMALL_STATE(240)] = 9404,
  [SMALL_STATE(241)] = 9443,
  [SMALL_STATE(242)] = 9480,
  [SMALL_STATE(243)] = 9517,
  [SMALL_STATE(244)] = 9554,
  [SMALL_STATE(245)] = 9591,
  [SMALL_STATE(246)] = 9628,
  [SMALL_STATE(247)] = 9665,
  [SMALL_STATE(248)] = 9702,
  [SMALL_STATE(249)] = 9739,
  [SMALL_STATE(250)] = 9776,
  [SMALL_STATE(251)] = 9813,
  [SMALL_STATE(252)] = 9852,
  [SMALL_STATE(253)] = 9889,
  [SMALL_STATE(254)] = 9928,
  [SMALL_STATE(255)] = 9965,
  [SMALL_STATE(256)] = 10002,
  [SMALL_STATE(257)] = 10039,
  [SMALL_STATE(258)] = 10076,
  [SMALL_STATE(259)] = 10113,
  [SMALL_STATE(260)] = 10150,
  [SMALL_STATE(261)] = 10187,
  [SMALL_STATE(262)] = 10224,
  [SMALL_STATE(263)] = 10261,
  [SMALL_STATE(264)] = 10298,
  [SMALL_STATE(265)] = 10335,
  [SMALL_STATE(266)] = 10372,
  [SMALL_STATE(267)] = 10409,
  [SMALL_STATE(268)] = 10446,
  [SMALL_STATE(269)] = 10483,
  [SMALL_STATE(270)] = 10520,
  [SMALL_STATE(271)] = 10559,
  [SMALL_STATE(272)] = 10596,
  [SMALL_STATE(273)] = 10633,
  [SMALL_STATE(274)] = 10670,
  [SMALL_STATE(275)] = 10709,
  [SMALL_STATE(276)] = 10730,
  [SMALL_STATE(277)] = 10767,
  [SMALL_STATE(278)] = 10804,
  [SMALL_STATE(279)] = 10841,
  [SMALL_STATE(280)] = 10878,
  [SMALL_STATE(281)] = 10915,
  [SMALL_STATE(282)] = 10952,
  [SMALL_STATE(283)] = 10989,
  [SMALL_STATE(284)] = 11026,
  [SMALL_STATE(285)] = 11063,
  [SMALL_STATE(286)] = 11100,
  [SMALL_STATE(287)] = 11137,
  [SMALL_STATE(288)] = 11174,
  [SMALL_STATE(289)] = 11211,
  [SMALL_STATE(290)] = 11248,
  [SMALL_STATE(291)] = 11285,
  [SMALL_STATE(292)] = 11322,
  [SMALL_STATE(293)] = 11359,
  [SMALL_STATE(294)] = 11396,
  [SMALL_STATE(295)] = 11430,
  [SMALL_STATE(296)] = 11452,
  [SMALL_STATE(297)] = 11488,
  [SMALL_STATE(298)] = 11522,
  [SMALL_STATE(299)] = 11555,
  [SMALL_STATE(300)] = 11588,
  [SMALL_STATE(301)] = 11607,
  [SMALL_STATE(302)] = 11626,
  [SMALL_STATE(303)] = 11645,
  [SMALL_STATE(304)] = 11672,
  [SMALL_STATE(305)] = 11713,
  [SMALL_STATE(306)] = 11740,
  [SMALL_STATE(307)] = 11760,
  [SMALL_STATE(308)] = 11790,
  [SMALL_STATE(309)] = 11820,
  [SMALL_STATE(310)] = 11838,
  [SMALL_STATE(311)] = 11858,
  [SMALL_STATE(312)] = 11878,
  [SMALL_STATE(313)] = 11896,
  [SMALL_STATE(314)] = 11918,
  [SMALL_STATE(315)] = 11938,
  [SMALL_STATE(316)] = 11956,
  [SMALL_STATE(317)] = 11974,
  [SMALL_STATE(318)] = 11994,
  [SMALL_STATE(319)] = 12011,
  [SMALL_STATE(320)] = 12038,
  [SMALL_STATE(321)] = 12065,
  [SMALL_STATE(322)] = 12084,
  [SMALL_STATE(323)] = 12103,
  [SMALL_STATE(324)] = 12122,
  [SMALL_STATE(325)] = 12139,
  [SMALL_STATE(326)] = 12166,
  [SMALL_STATE(327)] = 12197,
  [SMALL_STATE(328)] = 12224,
  [SMALL_STATE(329)] = 12251,
  [SMALL_STATE(330)] = 12270,
  [SMALL_STATE(331)] = 12289,
  [SMALL_STATE(332)] = 12316,
  [SMALL_STATE(333)] = 12347,
  [SMALL_STATE(334)] = 12366,
  [SMALL_STATE(335)] = 12393,
  [SMALL_STATE(336)] = 12410,
  [SMALL_STATE(337)] = 12437,
  [SMALL_STATE(338)] = 12456,
  [SMALL_STATE(339)] = 12474,
  [SMALL_STATE(340)] = 12490,
  [SMALL_STATE(341)] = 12508,
  [SMALL_STATE(342)] = 12526,
  [SMALL_STATE(343)] = 12544,
  [SMALL_STATE(344)] = 12562,
  [SMALL_STATE(345)] = 12578,
  [SMALL_STATE(346)] = 12594,
  [SMALL_STATE(347)] = 12610,
  [SMALL_STATE(348)] = 12626,
  [SMALL_STATE(349)] = 12642,
  [SMALL_STATE(350)] = 12658,
  [SMALL_STATE(351)] = 12674,
  [SMALL_STATE(352)] = 12690,
  [SMALL_STATE(353)] = 12716,
  [SMALL_STATE(354)] = 12734,
  [SMALL_STATE(355)] = 12760,
  [SMALL_STATE(356)] = 12788,
  [SMALL_STATE(357)] = 12804,
  [SMALL_STATE(358)] = 12820,
  [SMALL_STATE(359)] = 12836,
  [SMALL_STATE(360)] = 12854,
  [SMALL_STATE(361)] = 12872,
  [SMALL_STATE(362)] = 12900,
  [SMALL_STATE(363)] = 12928,
  [SMALL_STATE(364)] = 12955,
  [SMALL_STATE(365)] = 12980,
  [SMALL_STATE(366)] = 13005,
  [SMALL_STATE(367)] = 13030,
  [SMALL_STATE(368)] = 13045,
  [SMALL_STATE(369)] = 13060,
  [SMALL_STATE(370)] = 13087,
  [SMALL_STATE(371)] = 13114,
  [SMALL_STATE(372)] = 13141,
  [SMALL_STATE(373)] = 13166,
  [SMALL_STATE(374)] = 13189,
  [SMALL_STATE(375)] = 13218,
  [SMALL_STATE(376)] = 13235,
  [SMALL_STATE(377)] = 13262,
  [SMALL_STATE(378)] = 13289,
  [SMALL_STATE(379)] = 13304,
  [SMALL_STATE(380)] = 13319,
  [SMALL_STATE(381)] = 13344,
  [SMALL_STATE(382)] = 13359,
  [SMALL_STATE(383)] = 13386,
  [SMALL_STATE(384)] = 13411,
  [SMALL_STATE(385)] = 13436,
  [SMALL_STATE(386)] = 13451,
  [SMALL_STATE(387)] = 13466,
  [SMALL_STATE(388)] = 13483,
  [SMALL_STATE(389)] = 13508,
  [SMALL_STATE(390)] = 13535,
  [SMALL_STATE(391)] = 13562,
  [SMALL_STATE(392)] = 13591,
  [SMALL_STATE(393)] = 13608,
  [SMALL_STATE(394)] = 13625,
  [SMALL_STATE(395)] = 13648,
  [SMALL_STATE(396)] = 13673,
  [SMALL_STATE(397)] = 13700,
  [SMALL_STATE(398)] = 13727,
  [SMALL_STATE(399)] = 13750,
  [SMALL_STATE(400)] = 13768,
  [SMALL_STATE(401)] = 13784,
  [SMALL_STATE(402)] = 13808,
  [SMALL_STATE(403)] = 13834,
  [SMALL_STATE(404)] = 13860,
  [SMALL_STATE(405)] = 13884,
  [SMALL_STATE(406)] = 13906,
  [SMALL_STATE(407)] = 13926,
  [SMALL_STATE(408)] = 13950,
  [SMALL_STATE(409)] = 13966,
  [SMALL_STATE(410)] = 13986,
  [SMALL_STATE(411)] = 14002,
  [SMALL_STATE(412)] = 14024,
  [SMALL_STATE(413)] = 14040,
  [SMALL_STATE(414)] = 14058,
  [SMALL_STATE(415)] = 14082,
  [SMALL_STATE(416)] = 14100,
  [SMALL_STATE(417)] = 14118,
  [SMALL_STATE(418)] = 14142,
  [SMALL_STATE(419)] = 14158,
  [SMALL_STATE(420)] = 14174,
  [SMALL_STATE(421)] = 14198,
  [SMALL_STATE(422)] = 14214,
  [SMALL_STATE(423)] = 14232,
  [SMALL_STATE(424)] = 14252,
  [SMALL_STATE(425)] = 14266,
  [SMALL_STATE(426)] = 14290,
  [SMALL_STATE(427)] = 14316,
  [SMALL_STATE(428)] = 14330,
  [SMALL_STATE(429)] = 14356,
  [SMALL_STATE(430)] = 14382,
  [SMALL_STATE(431)] = 14400,
  [SMALL_STATE(432)] = 14418,
  [SMALL_STATE(433)] = 14442,
  [SMALL_STATE(434)] = 14458,
  [SMALL_STATE(435)] = 14478,
  [SMALL_STATE(436)] = 14499,
  [SMALL_STATE(437)] = 14522,
  [SMALL_STATE(438)] = 14543,
  [SMALL_STATE(439)] = 14564,
  [SMALL_STATE(440)] = 14585,
  [SMALL_STATE(441)] = 14606,
  [SMALL_STATE(442)] = 14623,
  [SMALL_STATE(443)] = 14640,
  [SMALL_STATE(444)] = 14663,
  [SMALL_STATE(445)] = 14682,
  [SMALL_STATE(446)] = 14705,
  [SMALL_STATE(447)] = 14718,
  [SMALL_STATE(448)] = 14741,
  [SMALL_STATE(449)] = 14764,
  [SMALL_STATE(450)] = 14781,
  [SMALL_STATE(451)] = 14804,
  [SMALL_STATE(452)] = 14825,
  [SMALL_STATE(453)] = 14848,
  [SMALL_STATE(454)] = 14871,
  [SMALL_STATE(455)] = 14884,
  [SMALL_STATE(456)] = 14901,
  [SMALL_STATE(457)] = 14922,
  [SMALL_STATE(458)] = 14945,
  [SMALL_STATE(459)] = 14968,
  [SMALL_STATE(460)] = 14989,
  [SMALL_STATE(461)] = 15010,
  [SMALL_STATE(462)] = 15027,
  [SMALL_STATE(463)] = 15044,
  [SMALL_STATE(464)] = 15065,
  [SMALL_STATE(465)] = 15086,
  [SMALL_STATE(466)] = 15109,
  [SMALL_STATE(467)] = 15126,
  [SMALL_STATE(468)] = 15147,
  [SMALL_STATE(469)] = 15163,
  [SMALL_STATE(470)] = 15179,
  [SMALL_STATE(471)] = 15199,
  [SMALL_STATE(472)] = 15213,
  [SMALL_STATE(473)] = 15225,
  [SMALL_STATE(474)] = 15243,
  [SMALL_STATE(475)] = 15255,
  [SMALL_STATE(476)] = 15273,
  [SMALL_STATE(477)] = 15291,
  [SMALL_STATE(478)] = 15307,
  [SMALL_STATE(479)] = 15327,
  [SMALL_STATE(480)] = 15343,
  [SMALL_STATE(481)] = 15363,
  [SMALL_STATE(482)] = 15381,
  [SMALL_STATE(483)] = 15397,
  [SMALL_STATE(484)] = 15413,
  [SMALL_STATE(485)] = 15429,
  [SMALL_STATE(486)] = 15445,
  [SMALL_STATE(487)] = 15463,
  [SMALL_STATE(488)] = 15477,
  [SMALL_STATE(489)] = 15493,
  [SMALL_STATE(490)] = 15513,
  [SMALL_STATE(491)] = 15533,
  [SMALL_STATE(492)] = 15551,
  [SMALL_STATE(493)] = 15567,
  [SMALL_STATE(494)] = 15587,
  [SMALL_STATE(495)] = 15607,
  [SMALL_STATE(496)] = 15623,
  [SMALL_STATE(497)] = 15639,
  [SMALL_STATE(498)] = 15655,
  [SMALL_STATE(499)] = 15669,
  [SMALL_STATE(500)] = 15689,
  [SMALL_STATE(501)] = 15709,
  [SMALL_STATE(502)] = 15724,
  [SMALL_STATE(503)] = 15737,
  [SMALL_STATE(504)] = 15754,
  [SMALL_STATE(505)] = 15769,
  [SMALL_STATE(506)] = 15786,
  [SMALL_STATE(507)] = 15803,
  [SMALL_STATE(508)] = 15818,
  [SMALL_STATE(509)] = 15835,
  [SMALL_STATE(510)] = 15848,
  [SMALL_STATE(511)] = 15865,
  [SMALL_STATE(512)] = 15882,
  [SMALL_STATE(513)] = 15899,
  [SMALL_STATE(514)] = 15916,
  [SMALL_STATE(515)] = 15933,
  [SMALL_STATE(516)] = 15950,
  [SMALL_STATE(517)] = 15967,
  [SMALL_STATE(518)] = 15984,
  [SMALL_STATE(519)] = 15995,
  [SMALL_STATE(520)] = 16008,
  [SMALL_STATE(521)] = 16021,
  [SMALL_STATE(522)] = 16038,
  [SMALL_STATE(523)] = 16055,
  [SMALL_STATE(524)] = 16072,
  [SMALL_STATE(525)] = 16089,
  [SMALL_STATE(526)] = 16106,
  [SMALL_STATE(527)] = 16123,
  [SMALL_STATE(528)] = 16136,
  [SMALL_STATE(529)] = 16153,
  [SMALL_STATE(530)] = 16170,
  [SMALL_STATE(531)] = 16187,
  [SMALL_STATE(532)] = 16198,
  [SMALL_STATE(533)] = 16215,
  [SMALL_STATE(534)] = 16226,
  [SMALL_STATE(535)] = 16243,
  [SMALL_STATE(536)] = 16260,
  [SMALL_STATE(537)] = 16275,
  [SMALL_STATE(538)] = 16292,
  [SMALL_STATE(539)] = 16309,
  [SMALL_STATE(540)] = 16326,
  [SMALL_STATE(541)] = 16343,
  [SMALL_STATE(542)] = 16354,
  [SMALL_STATE(543)] = 16365,
  [SMALL_STATE(544)] = 16376,
  [SMALL_STATE(545)] = 16389,
  [SMALL_STATE(546)] = 16402,
  [SMALL_STATE(547)] = 16419,
  [SMALL_STATE(548)] = 16436,
  [SMALL_STATE(549)] = 16450,
  [SMALL_STATE(550)] = 16464,
  [SMALL_STATE(551)] = 16478,
  [SMALL_STATE(552)] = 16488,
  [SMALL_STATE(553)] = 16498,
  [SMALL_STATE(554)] = 16512,
  [SMALL_STATE(555)] = 16526,
  [SMALL_STATE(556)] = 16540,
  [SMALL_STATE(557)] = 16550,
  [SMALL_STATE(558)] = 16564,
  [SMALL_STATE(559)] = 16578,
  [SMALL_STATE(560)] = 16588,
  [SMALL_STATE(561)] = 16602,
  [SMALL_STATE(562)] = 16616,
  [SMALL_STATE(563)] = 16630,
  [SMALL_STATE(564)] = 16640,
  [SMALL_STATE(565)] = 16654,
  [SMALL_STATE(566)] = 16668,
  [SMALL_STATE(567)] = 16682,
  [SMALL_STATE(568)] = 16696,
  [SMALL_STATE(569)] = 16710,
  [SMALL_STATE(570)] = 16724,
  [SMALL_STATE(571)] = 16738,
  [SMALL_STATE(572)] = 16752,
  [SMALL_STATE(573)] = 16766,
  [SMALL_STATE(574)] = 16780,
  [SMALL_STATE(575)] = 16794,
  [SMALL_STATE(576)] = 16808,
  [SMALL_STATE(577)] = 16822,
  [SMALL_STATE(578)] = 16836,
  [SMALL_STATE(579)] = 16850,
  [SMALL_STATE(580)] = 16864,
  [SMALL_STATE(581)] = 16878,
  [SMALL_STATE(582)] = 16892,
  [SMALL_STATE(583)] = 16906,
  [SMALL_STATE(584)] = 16920,
  [SMALL_STATE(585)] = 16934,
  [SMALL_STATE(586)] = 16948,
  [SMALL_STATE(587)] = 16962,
  [SMALL_STATE(588)] = 16976,
  [SMALL_STATE(589)] = 16990,
  [SMALL_STATE(590)] = 17004,
  [SMALL_STATE(591)] = 17018,
  [SMALL_STATE(592)] = 17032,
  [SMALL_STATE(593)] = 17046,
  [SMALL_STATE(594)] = 17056,
  [SMALL_STATE(595)] = 17070,
  [SMALL_STATE(596)] = 17084,
  [SMALL_STATE(597)] = 17094,
  [SMALL_STATE(598)] = 17104,
  [SMALL_STATE(599)] = 17118,
  [SMALL_STATE(600)] = 17132,
  [SMALL_STATE(601)] = 17146,
  [SMALL_STATE(602)] = 17160,
  [SMALL_STATE(603)] = 17170,
  [SMALL_STATE(604)] = 17184,
  [SMALL_STATE(605)] = 17198,
  [SMALL_STATE(606)] = 17212,
  [SMALL_STATE(607)] = 17226,
  [SMALL_STATE(608)] = 17240,
  [SMALL_STATE(609)] = 17254,
  [SMALL_STATE(610)] = 17268,
  [SMALL_STATE(611)] = 17282,
  [SMALL_STATE(612)] = 17296,
  [SMALL_STATE(613)] = 17310,
  [SMALL_STATE(614)] = 17324,
  [SMALL_STATE(615)] = 17338,
  [SMALL_STATE(616)] = 17352,
  [SMALL_STATE(617)] = 17366,
  [SMALL_STATE(618)] = 17380,
  [SMALL_STATE(619)] = 17394,
  [SMALL_STATE(620)] = 17408,
  [SMALL_STATE(621)] = 17422,
  [SMALL_STATE(622)] = 17436,
  [SMALL_STATE(623)] = 17450,
  [SMALL_STATE(624)] = 17464,
  [SMALL_STATE(625)] = 17478,
  [SMALL_STATE(626)] = 17492,
  [SMALL_STATE(627)] = 17506,
  [SMALL_STATE(628)] = 17520,
  [SMALL_STATE(629)] = 17534,
  [SMALL_STATE(630)] = 17548,
  [SMALL_STATE(631)] = 17562,
  [SMALL_STATE(632)] = 17576,
  [SMALL_STATE(633)] = 17586,
  [SMALL_STATE(634)] = 17600,
  [SMALL_STATE(635)] = 17614,
  [SMALL_STATE(636)] = 17628,
  [SMALL_STATE(637)] = 17642,
  [SMALL_STATE(638)] = 17656,
  [SMALL_STATE(639)] = 17670,
  [SMALL_STATE(640)] = 17680,
  [SMALL_STATE(641)] = 17694,
  [SMALL_STATE(642)] = 17708,
  [SMALL_STATE(643)] = 17722,
  [SMALL_STATE(644)] = 17736,
  [SMALL_STATE(645)] = 17750,
  [SMALL_STATE(646)] = 17764,
  [SMALL_STATE(647)] = 17778,
  [SMALL_STATE(648)] = 17792,
  [SMALL_STATE(649)] = 17806,
  [SMALL_STATE(650)] = 17820,
  [SMALL_STATE(651)] = 17834,
  [SMALL_STATE(652)] = 17848,
  [SMALL_STATE(653)] = 17862,
  [SMALL_STATE(654)] = 17876,
  [SMALL_STATE(655)] = 17890,
  [SMALL_STATE(656)] = 17904,
  [SMALL_STATE(657)] = 17918,
  [SMALL_STATE(658)] = 17932,
  [SMALL_STATE(659)] = 17946,
  [SMALL_STATE(660)] = 17960,
  [SMALL_STATE(661)] = 17974,
  [SMALL_STATE(662)] = 17988,
  [SMALL_STATE(663)] = 18002,
  [SMALL_STATE(664)] = 18016,
  [SMALL_STATE(665)] = 18030,
  [SMALL_STATE(666)] = 18040,
  [SMALL_STATE(667)] = 18054,
  [SMALL_STATE(668)] = 18068,
  [SMALL_STATE(669)] = 18082,
  [SMALL_STATE(670)] = 18096,
  [SMALL_STATE(671)] = 18110,
  [SMALL_STATE(672)] = 18124,
  [SMALL_STATE(673)] = 18138,
  [SMALL_STATE(674)] = 18152,
  [SMALL_STATE(675)] = 18166,
  [SMALL_STATE(676)] = 18180,
  [SMALL_STATE(677)] = 18194,
  [SMALL_STATE(678)] = 18208,
  [SMALL_STATE(679)] = 18220,
  [SMALL_STATE(680)] = 18234,
  [SMALL_STATE(681)] = 18248,
  [SMALL_STATE(682)] = 18262,
  [SMALL_STATE(683)] = 18276,
  [SMALL_STATE(684)] = 18290,
  [SMALL_STATE(685)] = 18304,
  [SMALL_STATE(686)] = 18315,
  [SMALL_STATE(687)] = 18326,
  [SMALL_STATE(688)] = 18337,
  [SMALL_STATE(689)] = 18348,
  [SMALL_STATE(690)] = 18359,
  [SMALL_STATE(691)] = 18368,
  [SMALL_STATE(692)] = 18377,
  [SMALL_STATE(693)] = 18388,
  [SMALL_STATE(694)] = 18399,
  [SMALL_STATE(695)] = 18410,
  [SMALL_STATE(696)] = 18421,
  [SMALL_STATE(697)] = 18432,
  [SMALL_STATE(698)] = 18441,
  [SMALL_STATE(699)] = 18452,
  [SMALL_STATE(700)] = 18461,
  [SMALL_STATE(701)] = 18472,
  [SMALL_STATE(702)] = 18483,
  [SMALL_STATE(703)] = 18492,
  [SMALL_STATE(704)] = 18503,
  [SMALL_STATE(705)] = 18514,
  [SMALL_STATE(706)] = 18523,
  [SMALL_STATE(707)] = 18534,
  [SMALL_STATE(708)] = 18545,
  [SMALL_STATE(709)] = 18554,
  [SMALL_STATE(710)] = 18563,
  [SMALL_STATE(711)] = 18572,
  [SMALL_STATE(712)] = 18583,
  [SMALL_STATE(713)] = 18592,
  [SMALL_STATE(714)] = 18601,
  [SMALL_STATE(715)] = 18612,
  [SMALL_STATE(716)] = 18621,
  [SMALL_STATE(717)] = 18632,
  [SMALL_STATE(718)] = 18643,
  [SMALL_STATE(719)] = 18654,
  [SMALL_STATE(720)] = 18663,
  [SMALL_STATE(721)] = 18674,
  [SMALL_STATE(722)] = 18683,
  [SMALL_STATE(723)] = 18694,
  [SMALL_STATE(724)] = 18705,
  [SMALL_STATE(725)] = 18716,
  [SMALL_STATE(726)] = 18725,
  [SMALL_STATE(727)] = 18734,
  [SMALL_STATE(728)] = 18743,
  [SMALL_STATE(729)] = 18754,
  [SMALL_STATE(730)] = 18763,
  [SMALL_STATE(731)] = 18772,
  [SMALL_STATE(732)] = 18781,
  [SMALL_STATE(733)] = 18790,
  [SMALL_STATE(734)] = 18799,
  [SMALL_STATE(735)] = 18808,
  [SMALL_STATE(736)] = 18819,
  [SMALL_STATE(737)] = 18830,
  [SMALL_STATE(738)] = 18839,
  [SMALL_STATE(739)] = 18848,
  [SMALL_STATE(740)] = 18859,
  [SMALL_STATE(741)] = 18868,
  [SMALL_STATE(742)] = 18877,
  [SMALL_STATE(743)] = 18888,
  [SMALL_STATE(744)] = 18897,
  [SMALL_STATE(745)] = 18908,
  [SMALL_STATE(746)] = 18919,
  [SMALL_STATE(747)] = 18930,
  [SMALL_STATE(748)] = 18939,
  [SMALL_STATE(749)] = 18950,
  [SMALL_STATE(750)] = 18961,
  [SMALL_STATE(751)] = 18970,
  [SMALL_STATE(752)] = 18979,
  [SMALL_STATE(753)] = 18987,
  [SMALL_STATE(754)] = 18995,
  [SMALL_STATE(755)] = 19003,
  [SMALL_STATE(756)] = 19011,
  [SMALL_STATE(757)] = 19019,
  [SMALL_STATE(758)] = 19027,
  [SMALL_STATE(759)] = 19035,
  [SMALL_STATE(760)] = 19043,
  [SMALL_STATE(761)] = 19051,
  [SMALL_STATE(762)] = 19059,
  [SMALL_STATE(763)] = 19067,
  [SMALL_STATE(764)] = 19075,
  [SMALL_STATE(765)] = 19083,
  [SMALL_STATE(766)] = 19091,
  [SMALL_STATE(767)] = 19099,
  [SMALL_STATE(768)] = 19107,
  [SMALL_STATE(769)] = 19115,
  [SMALL_STATE(770)] = 19123,
  [SMALL_STATE(771)] = 19131,
  [SMALL_STATE(772)] = 19139,
  [SMALL_STATE(773)] = 19147,
  [SMALL_STATE(774)] = 19155,
  [SMALL_STATE(775)] = 19163,
  [SMALL_STATE(776)] = 19171,
  [SMALL_STATE(777)] = 19179,
  [SMALL_STATE(778)] = 19187,
  [SMALL_STATE(779)] = 19195,
  [SMALL_STATE(780)] = 19203,
  [SMALL_STATE(781)] = 19211,
  [SMALL_STATE(782)] = 19219,
  [SMALL_STATE(783)] = 19227,
  [SMALL_STATE(784)] = 19235,
  [SMALL_STATE(785)] = 19243,
  [SMALL_STATE(786)] = 19251,
  [SMALL_STATE(787)] = 19259,
  [SMALL_STATE(788)] = 19267,
  [SMALL_STATE(789)] = 19275,
  [SMALL_STATE(790)] = 19283,
  [SMALL_STATE(791)] = 19291,
  [SMALL_STATE(792)] = 19299,
  [SMALL_STATE(793)] = 19307,
  [SMALL_STATE(794)] = 19315,
  [SMALL_STATE(795)] = 19323,
  [SMALL_STATE(796)] = 19331,
  [SMALL_STATE(797)] = 19339,
  [SMALL_STATE(798)] = 19347,
  [SMALL_STATE(799)] = 19355,
  [SMALL_STATE(800)] = 19363,
  [SMALL_STATE(801)] = 19371,
  [SMALL_STATE(802)] = 19379,
  [SMALL_STATE(803)] = 19387,
  [SMALL_STATE(804)] = 19395,
  [SMALL_STATE(805)] = 19403,
  [SMALL_STATE(806)] = 19411,
  [SMALL_STATE(807)] = 19419,
  [SMALL_STATE(808)] = 19427,
  [SMALL_STATE(809)] = 19435,
  [SMALL_STATE(810)] = 19443,
  [SMALL_STATE(811)] = 19451,
  [SMALL_STATE(812)] = 19459,
  [SMALL_STATE(813)] = 19467,
  [SMALL_STATE(814)] = 19475,
  [SMALL_STATE(815)] = 19483,
  [SMALL_STATE(816)] = 19491,
  [SMALL_STATE(817)] = 19499,
  [SMALL_STATE(818)] = 19507,
  [SMALL_STATE(819)] = 19515,
  [SMALL_STATE(820)] = 19523,
  [SMALL_STATE(821)] = 19531,
  [SMALL_STATE(822)] = 19539,
  [SMALL_STATE(823)] = 19547,
  [SMALL_STATE(824)] = 19555,
  [SMALL_STATE(825)] = 19563,
  [SMALL_STATE(826)] = 19571,
  [SMALL_STATE(827)] = 19579,
  [SMALL_STATE(828)] = 19587,
  [SMALL_STATE(829)] = 19595,
  [SMALL_STATE(830)] = 19603,
  [SMALL_STATE(831)] = 19611,
  [SMALL_STATE(832)] = 19619,
  [SMALL_STATE(833)] = 19627,
  [SMALL_STATE(834)] = 19635,
  [SMALL_STATE(835)] = 19643,
  [SMALL_STATE(836)] = 19651,
  [SMALL_STATE(837)] = 19659,
  [SMALL_STATE(838)] = 19667,
  [SMALL_STATE(839)] = 19675,
  [SMALL_STATE(840)] = 19683,
  [SMALL_STATE(841)] = 19691,
  [SMALL_STATE(842)] = 19699,
  [SMALL_STATE(843)] = 19707,
  [SMALL_STATE(844)] = 19715,
  [SMALL_STATE(845)] = 19723,
  [SMALL_STATE(846)] = 19731,
  [SMALL_STATE(847)] = 19739,
  [SMALL_STATE(848)] = 19747,
  [SMALL_STATE(849)] = 19755,
  [SMALL_STATE(850)] = 19763,
  [SMALL_STATE(851)] = 19771,
  [SMALL_STATE(852)] = 19779,
  [SMALL_STATE(853)] = 19787,
  [SMALL_STATE(854)] = 19795,
  [SMALL_STATE(855)] = 19803,
  [SMALL_STATE(856)] = 19811,
  [SMALL_STATE(857)] = 19819,
  [SMALL_STATE(858)] = 19827,
  [SMALL_STATE(859)] = 19835,
  [SMALL_STATE(860)] = 19843,
  [SMALL_STATE(861)] = 19851,
  [SMALL_STATE(862)] = 19859,
  [SMALL_STATE(863)] = 19867,
  [SMALL_STATE(864)] = 19875,
  [SMALL_STATE(865)] = 19883,
  [SMALL_STATE(866)] = 19891,
  [SMALL_STATE(867)] = 19899,
  [SMALL_STATE(868)] = 19907,
  [SMALL_STATE(869)] = 19915,
  [SMALL_STATE(870)] = 19923,
  [SMALL_STATE(871)] = 19931,
  [SMALL_STATE(872)] = 19939,
  [SMALL_STATE(873)] = 19947,
  [SMALL_STATE(874)] = 19955,
  [SMALL_STATE(875)] = 19963,
  [SMALL_STATE(876)] = 19971,
  [SMALL_STATE(877)] = 19979,
  [SMALL_STATE(878)] = 19987,
  [SMALL_STATE(879)] = 19995,
  [SMALL_STATE(880)] = 20003,
  [SMALL_STATE(881)] = 20011,
  [SMALL_STATE(882)] = 20019,
  [SMALL_STATE(883)] = 20027,
  [SMALL_STATE(884)] = 20035,
  [SMALL_STATE(885)] = 20043,
  [SMALL_STATE(886)] = 20051,
  [SMALL_STATE(887)] = 20059,
  [SMALL_STATE(888)] = 20067,
  [SMALL_STATE(889)] = 20075,
  [SMALL_STATE(890)] = 20083,
  [SMALL_STATE(891)] = 20091,
  [SMALL_STATE(892)] = 20099,
  [SMALL_STATE(893)] = 20107,
  [SMALL_STATE(894)] = 20115,
  [SMALL_STATE(895)] = 20123,
  [SMALL_STATE(896)] = 20131,
  [SMALL_STATE(897)] = 20139,
  [SMALL_STATE(898)] = 20147,
  [SMALL_STATE(899)] = 20155,
  [SMALL_STATE(900)] = 20163,
  [SMALL_STATE(901)] = 20171,
  [SMALL_STATE(902)] = 20179,
  [SMALL_STATE(903)] = 20187,
  [SMALL_STATE(904)] = 20195,
  [SMALL_STATE(905)] = 20203,
  [SMALL_STATE(906)] = 20211,
  [SMALL_STATE(907)] = 20219,
  [SMALL_STATE(908)] = 20227,
  [SMALL_STATE(909)] = 20235,
  [SMALL_STATE(910)] = 20243,
  [SMALL_STATE(911)] = 20251,
  [SMALL_STATE(912)] = 20259,
  [SMALL_STATE(913)] = 20267,
  [SMALL_STATE(914)] = 20275,
  [SMALL_STATE(915)] = 20283,
  [SMALL_STATE(916)] = 20291,
  [SMALL_STATE(917)] = 20299,
  [SMALL_STATE(918)] = 20307,
  [SMALL_STATE(919)] = 20315,
  [SMALL_STATE(920)] = 20323,
  [SMALL_STATE(921)] = 20331,
  [SMALL_STATE(922)] = 20339,
  [SMALL_STATE(923)] = 20347,
  [SMALL_STATE(924)] = 20355,
  [SMALL_STATE(925)] = 20363,
  [SMALL_STATE(926)] = 20371,
  [SMALL_STATE(927)] = 20379,
  [SMALL_STATE(928)] = 20387,
  [SMALL_STATE(929)] = 20395,
  [SMALL_STATE(930)] = 20403,
  [SMALL_STATE(931)] = 20411,
  [SMALL_STATE(932)] = 20419,
  [SMALL_STATE(933)] = 20427,
  [SMALL_STATE(934)] = 20435,
  [SMALL_STATE(935)] = 20443,
  [SMALL_STATE(936)] = 20451,
  [SMALL_STATE(937)] = 20459,
  [SMALL_STATE(938)] = 20467,
  [SMALL_STATE(939)] = 20475,
  [SMALL_STATE(940)] = 20483,
  [SMALL_STATE(941)] = 20491,
  [SMALL_STATE(942)] = 20499,
  [SMALL_STATE(943)] = 20507,
  [SMALL_STATE(944)] = 20515,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 25),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 25),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 19),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 19),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 15),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 15),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 24),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 24),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 33),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 33),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 40),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 40),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 30),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(933),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 9),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 9),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 38),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 31),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 9),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 9),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 10),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 17),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 41),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 26),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 28),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 27),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 27),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 9),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(714),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(872),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(513),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(688),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(943),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(546),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 14),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 14),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 18),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 18),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 46),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 11),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 11),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 45),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 46),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 45),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 45),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_int, 1),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 28),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 48),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 48),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 23),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 20),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 32),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 28),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [861] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(502),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(891),
  [869] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(323),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(417),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(432),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(253),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 28),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(414),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(420),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 16),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 16),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(251),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 35),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 35),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(444),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22),
  [1103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22), SHIFT_REPEAT(161),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 28),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(374),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(540),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(470),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(528),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 1, .production_id = 7),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(522),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 13),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(526),
  [1198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(404),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 34),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 44),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 42),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 21),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 30),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 2),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 30),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 36),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_with, 1),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 47),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 27),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 44),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 2),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 37),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 29),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(930),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 43),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1659] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
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
