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
#define STATE_COUNT 1020
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 240
#define ALIAS_COUNT 0
#define TOKEN_COUNT 130
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 54

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
  sym_keyword_cross = 14,
  sym_keyword_join = 15,
  sym_keyword_lateral = 16,
  sym_keyword_on = 17,
  sym_keyword_where = 18,
  sym_keyword_order_by = 19,
  sym_keyword_group_by = 20,
  sym_keyword_having = 21,
  sym_keyword_desc = 22,
  sym_keyword_asc = 23,
  sym_keyword_limit = 24,
  sym_keyword_offset = 25,
  sym_keyword_primary = 26,
  sym_keyword_create = 27,
  sym_keyword_alter = 28,
  sym_keyword_drop = 29,
  sym_keyword_add = 30,
  sym_keyword_table = 31,
  sym_keyword_view = 32,
  sym_keyword_materialized = 33,
  sym_keyword_column = 34,
  sym_keyword_key = 35,
  sym_keyword_as = 36,
  sym_keyword_distinct = 37,
  sym_keyword_constraint = 38,
  sym_keyword_count = 39,
  sym_keyword_max = 40,
  sym_keyword_min = 41,
  sym_keyword_avg = 42,
  sym_keyword_in = 43,
  sym_keyword_and = 44,
  sym_keyword_or = 45,
  sym_keyword_not = 46,
  sym_keyword_force = 47,
  sym_keyword_using = 48,
  sym_keyword_use = 49,
  sym_keyword_index = 50,
  sym_keyword_for = 51,
  sym_keyword_if = 52,
  sym_keyword_exists = 53,
  sym_keyword_auto_increment = 54,
  sym_keyword_default = 55,
  sym_keyword_cascade = 56,
  aux_sym_keyword_with_token1 = 57,
  sym_keyword_no = 58,
  sym_keyword_data = 59,
  sym_keyword_type = 60,
  sym_keyword_rename = 61,
  sym_keyword_to = 62,
  sym_keyword_schema = 63,
  sym_keyword_owner = 64,
  sym_keyword_temp = 65,
  sym_keyword_temporary = 66,
  sym_keyword_null = 67,
  sym_keyword_true = 68,
  sym_keyword_false = 69,
  sym_keyword_boolean = 70,
  sym_keyword_smallserial = 71,
  sym_keyword_serial = 72,
  sym_keyword_bigserial = 73,
  sym_keyword_smallint = 74,
  aux_sym_keyword_int_token1 = 75,
  aux_sym_keyword_int_token2 = 76,
  sym_keyword_bigint = 77,
  sym_keyword_decimal = 78,
  sym_keyword_numeric = 79,
  sym_keyword_real = 80,
  aux_sym_double_token1 = 81,
  aux_sym_double_token2 = 82,
  sym_keyword_money = 83,
  aux_sym_keyword_char_token1 = 84,
  aux_sym_keyword_char_token2 = 85,
  aux_sym_keyword_varchar_token1 = 86,
  aux_sym_keyword_varchar_token2 = 87,
  sym_keyword_text = 88,
  sym_keyword_json = 89,
  sym_keyword_jsonb = 90,
  sym_keyword_xml = 91,
  sym_keyword_bytea = 92,
  sym_keyword_date = 93,
  sym_keyword_datetime = 94,
  aux_sym_keyword_timestamp_token1 = 95,
  aux_sym_keyword_timestamp_token2 = 96,
  aux_sym_keyword_timestamp_token3 = 97,
  aux_sym_keyword_timestamp_token4 = 98,
  aux_sym_keyword_timestamptz_token1 = 99,
  sym_keyword_geometry = 100,
  sym_keyword_geography = 101,
  sym_keyword_box2d = 102,
  sym_keyword_box3d = 103,
  anon_sym_LPAREN = 104,
  anon_sym_RPAREN = 105,
  anon_sym_COMMA = 106,
  sym_comment = 107,
  sym_marginalia = 108,
  anon_sym_SEMI = 109,
  anon_sym_DOT = 110,
  anon_sym_EQ = 111,
  anon_sym_STAR = 112,
  anon_sym_PLUS = 113,
  anon_sym_DASH = 114,
  anon_sym_SLASH = 115,
  anon_sym_PERCENT = 116,
  anon_sym_CARET = 117,
  anon_sym_LT = 118,
  anon_sym_LT_EQ = 119,
  anon_sym_BANG_EQ = 120,
  anon_sym_GT_EQ = 121,
  anon_sym_GT = 122,
  anon_sym_SQUOTE = 123,
  aux_sym__literal_string_token1 = 124,
  anon_sym_DQUOTE = 125,
  aux_sym__literal_string_token2 = 126,
  sym__number = 127,
  anon_sym_BQUOTE = 128,
  sym__identifier = 129,
  sym_program = 130,
  sym_keyword_with = 131,
  sym__temporary = 132,
  sym__not_null = 133,
  sym__primary_key = 134,
  sym__if_exists = 135,
  sym__if_not_exists = 136,
  sym__or_replace = 137,
  sym__default_null = 138,
  sym_direction = 139,
  sym_keyword_int = 140,
  sym_double = 141,
  sym_keyword_char = 142,
  sym_keyword_varchar = 143,
  sym_keyword_timestamp = 144,
  sym_keyword_timestamptz = 145,
  sym__type = 146,
  sym_bigint = 147,
  sym_decimal = 148,
  sym_numeric = 149,
  sym_char = 150,
  sym_varchar = 151,
  sym_statement = 152,
  sym__select_statement = 153,
  sym_select = 154,
  sym_select_expression = 155,
  sym__delete_statement = 156,
  sym__delete_from = 157,
  sym_delete = 158,
  sym__create_statement = 159,
  sym_create_table = 160,
  sym_create_view = 161,
  sym_create_materialized_view = 162,
  sym__alter_statement = 163,
  sym_alter_table = 164,
  sym_add_column = 165,
  sym_alter_column = 166,
  sym_drop_column = 167,
  sym_rename_column = 168,
  sym_alter_view = 169,
  sym__drop_statement = 170,
  sym_drop_table = 171,
  sym_drop_view = 172,
  sym_rename_object = 173,
  sym_set_schema = 174,
  sym_change_ownership = 175,
  sym_table_reference = 176,
  sym__insert_statement = 177,
  sym_insert = 178,
  sym_insert_expression = 179,
  sym__column_list_without_order = 180,
  sym__column_without_order = 181,
  sym__update_statement = 182,
  sym_update = 183,
  sym_update_expression = 184,
  sym__single_table_update = 185,
  sym__multi_table_update = 186,
  sym__table_references = 187,
  sym_assignment_list = 188,
  sym_table_options = 189,
  sym_table_option = 190,
  sym_column_definitions = 191,
  sym_column_definition = 192,
  sym_constraints = 193,
  sym_constraint = 194,
  sym__constraint_literal = 195,
  sym__primary_key_constraint = 196,
  sym__key_constraint = 197,
  sym_column_list = 198,
  sym_column = 199,
  sym__field_list = 200,
  sym_field = 201,
  sym_all_fields = 202,
  sym_function_call = 203,
  sym_invocation = 204,
  sym__count_function = 205,
  sym__function_param = 206,
  sym__function_params = 207,
  sym_from = 208,
  sym_table_expression = 209,
  sym_index_hint = 210,
  sym_join = 211,
  sym_lateral_join = 212,
  sym_where = 213,
  sym_group_by = 214,
  sym__having = 215,
  sym_order_by = 216,
  sym_order_expression = 217,
  sym_limit = 218,
  sym_offset = 219,
  sym_where_expression = 220,
  sym_predicate = 221,
  sym__expression = 222,
  sym_subquery = 223,
  sym_list = 224,
  sym_literal = 225,
  sym__literal_string = 226,
  sym_identifier = 227,
  aux_sym_alter_table_repeat1 = 228,
  aux_sym__column_list_without_order_repeat1 = 229,
  aux_sym__table_references_repeat1 = 230,
  aux_sym_assignment_list_repeat1 = 231,
  aux_sym_table_options_repeat1 = 232,
  aux_sym_column_definitions_repeat1 = 233,
  aux_sym_constraints_repeat1 = 234,
  aux_sym_column_list_repeat1 = 235,
  aux_sym__field_list_repeat1 = 236,
  aux_sym__function_params_repeat1 = 237,
  aux_sym_from_repeat1 = 238,
  aux_sym_list_repeat1 = 239,
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
  [sym_keyword_cross] = "keyword_cross",
  [sym_keyword_join] = "keyword_join",
  [sym_keyword_lateral] = "keyword_lateral",
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
  [sym_keyword_true] = "keyword_true",
  [sym_keyword_false] = "keyword_false",
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
  [sym_all_fields] = "all_fields",
  [sym_function_call] = "function_call",
  [sym_invocation] = "invocation",
  [sym__count_function] = "_count_function",
  [sym__function_param] = "_function_param",
  [sym__function_params] = "_function_params",
  [sym_from] = "from",
  [sym_table_expression] = "table_expression",
  [sym_index_hint] = "index_hint",
  [sym_join] = "join",
  [sym_lateral_join] = "lateral_join",
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
  [sym_keyword_cross] = sym_keyword_cross,
  [sym_keyword_join] = sym_keyword_join,
  [sym_keyword_lateral] = sym_keyword_lateral,
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
  [sym_keyword_true] = sym_keyword_true,
  [sym_keyword_false] = sym_keyword_false,
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
  [sym_all_fields] = sym_all_fields,
  [sym_function_call] = sym_function_call,
  [sym_invocation] = sym_invocation,
  [sym__count_function] = sym__count_function,
  [sym__function_param] = sym__function_param,
  [sym__function_params] = sym__function_params,
  [sym_from] = sym_from,
  [sym_table_expression] = sym_table_expression,
  [sym_index_hint] = sym_index_hint,
  [sym_join] = sym_join,
  [sym_lateral_join] = sym_lateral_join,
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
  [sym_keyword_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_join] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_lateral] = {
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
  [sym_keyword_true] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_false] = {
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
  [sym_all_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_invocation] = {
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
  [sym_lateral_join] = {
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 3},
  [19] = {.index = 3, .length = 1},
  [20] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 3},
  [23] = {.index = 40, .length = 1},
  [24] = {.index = 41, .length = 2},
  [25] = {.index = 43, .length = 3},
  [26] = {.index = 46, .length = 2},
  [27] = {.index = 48, .length = 3},
  [28] = {.index = 51, .length = 1},
  [29] = {.index = 52, .length = 1},
  [30] = {.index = 53, .length = 2},
  [31] = {.index = 55, .length = 1},
  [32] = {.index = 56, .length = 1},
  [33] = {.index = 57, .length = 3},
  [34] = {.index = 60, .length = 4},
  [35] = {.index = 64, .length = 1},
  [36] = {.index = 65, .length = 2},
  [37] = {.index = 67, .length = 1},
  [38] = {.index = 68, .length = 2},
  [39] = {.index = 70, .length = 3},
  [40] = {.index = 73, .length = 2},
  [41] = {.index = 75, .length = 4},
  [42] = {.index = 79, .length = 1},
  [43] = {.index = 80, .length = 2},
  [44] = {.index = 82, .length = 2},
  [45] = {.index = 84, .length = 1},
  [46] = {.index = 85, .length = 1},
  [47] = {.index = 86, .length = 1},
  [48] = {.index = 87, .length = 1},
  [49] = {.index = 88, .length = 2},
  [50] = {.index = 90, .length = 1},
  [51] = {.index = 91, .length = 2},
  [52] = {.index = 93, .length = 1},
  [53] = {.index = 94, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alias, 0, .inherited = true},
  [1] =
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [3] =
    {field_name, 0},
  [4] =
    {field_alias, 1},
  [5] =
    {field_alias, 1},
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [8] =
    {field_alias, 1},
    {field_name, 0},
  [10] =
    {field_alias, 2},
  [11] =
    {field_alias, 2},
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [14] =
    {field_alias, 2},
    {field_name, 0},
  [16] =
    {field_parameter, 0},
  [17] =
    {field_table_alias, 0},
  [18] =
    {field_name, 2},
    {field_table_alias, 0},
  [20] =
    {field_name, 2},
    {field_schema, 0},
  [22] =
    {field_name, 0},
    {field_table_alias, 1},
  [24] =
    {field_name, 0},
    {field_parameter, 2},
  [26] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [28] =
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [30] =
    {field_alias, 3},
    {field_name, 2},
    {field_table_alias, 0},
  [33] =
    {field_name, 0},
    {field_table_alias, 2},
  [35] =
    {field_name, 0},
    {field_parameter, 3},
  [37] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [40] =
    {field_parameter, 1},
  [41] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [43] =
    {field_alias, 4},
    {field_name, 2},
    {field_table_alias, 0},
  [46] =
    {field_schema, 0},
    {field_table_alias, 2},
  [48] =
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [51] =
    {field_index_name, 3},
  [52] =
    {field_name, 1, .inherited = true},
  [53] =
    {field_name, 0},
    {field_type, 1},
  [55] =
    {field_schema, 2},
  [56] =
    {field_name, 2},
  [57] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 3},
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
    {field_alias, 3},
  [88] =
    {field_name, 2},
    {field_type, 6},
  [90] =
    {field_alias, 4},
  [91] =
    {field_precision, 2},
    {field_scale, 4},
  [93] =
    {field_alias, 5},
  [94] =
    {field_alias, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [19] = {
    [0] = sym_identifier,
  },
  [46] = {
    [2] = sym_literal,
  },
  [47] = {
    [2] = sym_literal,
  },
  [51] = {
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
      if (eof) ADVANCE(826);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(404);
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == 'G') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(175);
      if (lookahead == 'J') ADVANCE(292);
      if (lookahead == 'K') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(287);
      if (lookahead == 'O') ADVANCE(176);
      if (lookahead == 'P') ADVANCE(324);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'V') ADVANCE(54);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == 'X') ADVANCE(245);
      if (lookahead == 'Z') ADVANCE(298);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'b') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead == 'f') ADVANCE(422);
      if (lookahead == 'g') ADVANCE(522);
      if (lookahead == 'h') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(548);
      if (lookahead == 'j') ADVANCE(664);
      if (lookahead == 'k') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(424);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead == 'p') ADVANCE(697);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == 's') ADVANCE(465);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(682);
      if (lookahead == 'v') ADVANCE(427);
      if (lookahead == 'w') ADVANCE(564);
      if (lookahead == 'x') ADVANCE(618);
      if (lookahead == 'z') ADVANCE(671);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(825)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(991);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(461);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(462);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'O') ADVANCE(1115);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'o') ADVANCE(1237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(801)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'F') ADVANCE(304);
      if (lookahead == 'G') ADVANCE(328);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'N') ADVANCE(302);
      if (lookahead == 'O') ADVANCE(312);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == 'T') ADVANCE(220);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(643);
      if (lookahead == 'd') ADVANCE(514);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'g') ADVANCE(701);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'l') ADVANCE(572);
      if (lookahead == 'n') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead == 'p') ADVANCE(711);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == 'v') ADVANCE(453);
      if (lookahead == 'w') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(794)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(272);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'O') ADVANCE(323);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == 'V') ADVANCE(198);
      if (lookahead == 'W') ADVANCE(192);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'l') ADVANCE(572);
      if (lookahead == 'm') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == 'v') ADVANCE(571);
      if (lookahead == 'w') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(799)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(271);
      if (lookahead == 'F') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'O') ADVANCE(177);
      if (lookahead == 'W') ADVANCE(192);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == 'w') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(802)
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'C') ADVANCE(1116);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1091);
      if (lookahead == 'J') ADVANCE(1106);
      if (lookahead == 'L') ADVANCE(1047);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'R') ADVANCE(1073);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'c') ADVANCE(1238);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'j') ADVANCE(1228);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'r') ADVANCE(1195);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(792)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(795)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(798)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'O') ADVANCE(1115);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'o') ADVANCE(1237);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(803)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'C') ADVANCE(1116);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1091);
      if (lookahead == 'J') ADVANCE(1106);
      if (lookahead == 'L') ADVANCE(1047);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'R') ADVANCE(1073);
      if (lookahead == 'W') ADVANCE(1068);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'c') ADVANCE(1238);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'j') ADVANCE(1228);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'r') ADVANCE(1195);
      if (lookahead == 'w') ADVANCE(1190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(793)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'W') ADVANCE(1078);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'W') ADVANCE(1078);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(800)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1107);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1107);
      if (lookahead == 'D') ADVANCE(1077);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1229);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(806)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(810)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1107);
      if (lookahead == 'S') ADVANCE(1049);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1229);
      if (lookahead == 's') ADVANCE(1171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(804)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(1035);
      if (lookahead == 'T') ADVANCE(1122);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'f') ADVANCE(1157);
      if (lookahead == 't') ADVANCE(1244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(809)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'F') ADVANCE(1124);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'f') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(814)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'B') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'F') ADVANCE(301);
      if (lookahead == 'G') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead == 'J') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == 'M') ADVANCE(293);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'V') ADVANCE(59);
      if (lookahead == 'W') ADVANCE(192);
      if (lookahead == 'X') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'b') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'f') ADVANCE(674);
      if (lookahead == 'g') ADVANCE(522);
      if (lookahead == 'h') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(641);
      if (lookahead == 'j') ADVANCE(664);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == 'p') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(682);
      if (lookahead == 'v') ADVANCE(432);
      if (lookahead == 'w') ADVANCE(565);
      if (lookahead == 'x') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(791)
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1130);
      if (lookahead == 'D') ADVANCE(1061);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1252);
      if (lookahead == 'd') ADVANCE(1183);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(813)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(819)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'F') ADVANCE(1124);
      if (lookahead == 'W') ADVANCE(1078);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'f') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(815)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1130);
      if (lookahead == 'D') ADVANCE(1061);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'W') ADVANCE(1078);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1252);
      if (lookahead == 'd') ADVANCE(1183);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(811)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'C') ADVANCE(1116);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1098);
      if (lookahead == 'J') ADVANCE(1106);
      if (lookahead == 'L') ADVANCE(1047);
      if (lookahead == 'O') ADVANCE(1117);
      if (lookahead == 'R') ADVANCE(1073);
      if (lookahead == 'U') ADVANCE(1134);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'c') ADVANCE(1238);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1220);
      if (lookahead == 'j') ADVANCE(1228);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1239);
      if (lookahead == 'r') ADVANCE(1195);
      if (lookahead == 'u') ADVANCE(1256);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(807)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'C') ADVANCE(1116);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1098);
      if (lookahead == 'J') ADVANCE(1106);
      if (lookahead == 'L') ADVANCE(1047);
      if (lookahead == 'O') ADVANCE(1117);
      if (lookahead == 'R') ADVANCE(1073);
      if (lookahead == 'U') ADVANCE(1134);
      if (lookahead == 'W') ADVANCE(1068);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'c') ADVANCE(1238);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1220);
      if (lookahead == 'j') ADVANCE(1228);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1239);
      if (lookahead == 'r') ADVANCE(1195);
      if (lookahead == 'u') ADVANCE(1256);
      if (lookahead == 'w') ADVANCE(1190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(808)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1117);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1239);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(816)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == 'O') ADVANCE(1094);
      if (lookahead == 'U') ADVANCE(1131);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'u') ADVANCE(1253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(817)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'D') ADVANCE(1057);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'd') ADVANCE(1179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(818)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'O') ADVANCE(1094);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(822)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1111);
      if (lookahead == 'K') ADVANCE(1056);
      if (lookahead == 'P') ADVANCE(1125);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1233);
      if (lookahead == 'k') ADVANCE(1178);
      if (lookahead == 'p') ADVANCE(1247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(812)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1109);
      if (lookahead == 'T') ADVANCE(1105);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1231);
      if (lookahead == 't') ADVANCE(1227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(823)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'i') ADVANCE(1186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(820)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(824)
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'L') ADVANCE(1040);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'l') ADVANCE(1162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(821)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(112);
      if (lookahead == '3') ADVANCE(113);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(485);
      if (lookahead == '3') ADVANCE(486);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(1008);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'H') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(230);
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'H') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(231);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(296);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(402);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(262);
      if (lookahead == 'O') ADVANCE(283);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead == 'I') ADVANCE(250);
      if (lookahead == 'O') ADVANCE(935);
      if (lookahead == 'R') ADVANCE(397);
      if (lookahead == 'Y') ADVANCE(311);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(246);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(932);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(932);
      if (lookahead == 'E') ADVANCE(973);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(972);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(937);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(241);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(314);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(358);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(350);
      if (lookahead == 'O') ADVANCE(401);
      if (lookahead == 'R') ADVANCE(294);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(358);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(401);
      if (lookahead == 'R') ADVANCE(294);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(398);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(224);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(235);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(310);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(234);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(249);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(225);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(226);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(227);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(236);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(326);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(228);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(266);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(319);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(330);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(331);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(382);
      if (lookahead == 'E') ADVANCE(349);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(253);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(384);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(386);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(217);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(390);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(391);
      END_STATE();
    case 88:
      if (lookahead == 'B') ADVANCE(411);
      END_STATE();
    case 89:
      if (lookahead == 'B') ADVANCE(412);
      END_STATE();
    case 90:
      if (lookahead == 'B') ADVANCE(237);
      END_STATE();
    case 91:
      if (lookahead == 'B') ADVANCE(239);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(193);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(68);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(860);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(858);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(957);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(203);
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'L') ADVANCE(169);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(203);
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'L') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(196);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(196);
      if (lookahead == 'Y') ADVANCE(209);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(367);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(370);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(139);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(204);
      END_STATE();
    case 106:
      if (lookahead == 'C') ADVANCE(335);
      END_STATE();
    case 107:
      if (lookahead == 'C') ADVANCE(394);
      END_STATE();
    case 108:
      if (lookahead == 'D') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(879);
      if (lookahead == 'U') ADVANCE(377);
      if (lookahead == 'V') ADVANCE(181);
      END_STATE();
    case 109:
      if (lookahead == 'D') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'S') ADVANCE(878);
      END_STATE();
    case 110:
      if (lookahead == 'D') ADVANCE(870);
      END_STATE();
    case 111:
      if (lookahead == 'D') ADVANCE(899);
      END_STATE();
    case 112:
      if (lookahead == 'D') ADVANCE(986);
      END_STATE();
    case 113:
      if (lookahead == 'D') ADVANCE(987);
      END_STATE();
    case 114:
      if (lookahead == 'D') ADVANCE(873);
      END_STATE();
    case 115:
      if (lookahead == 'D') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == 'N') ADVANCE(153);
      if (lookahead == 'S') ADVANCE(167);
      if (lookahead == 'T') ADVANCE(952);
      END_STATE();
    case 117:
      if (lookahead == 'D') ADVANCE(161);
      END_STATE();
    case 118:
      if (lookahead == 'D') ADVANCE(84);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(407);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(186);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(912);
      if (lookahead == 'I') ADVANCE(273);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(403);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(980);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(943);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(933);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(982);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(945);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(908);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(871);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(853);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(867);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(829);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(959);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(934);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(832);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(924);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(831);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(975);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(979);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(406);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == 'O') ADVANCE(935);
      if (lookahead == 'Y') ADVANCE(311);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(408);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(405);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(258);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'O') ADVANCE(351);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(288);
      if (lookahead == 'R') ADVANCE(297);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(316);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(348);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(329);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(341);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(317);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(318);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(383);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(366);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(385);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(255);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(282);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(344);
      END_STATE();
    case 175:
      if (lookahead == 'F') ADVANCE(918);
      if (lookahead == 'N') ADVANCE(895);
      END_STATE();
    case 176:
      if (lookahead == 'F') ADVANCE(180);
      if (lookahead == 'N') ADVANCE(851);
      if (lookahead == 'R') ADVANCE(903);
      if (lookahead == 'U') ADVANCE(393);
      if (lookahead == 'W') ADVANCE(286);
      END_STATE();
    case 177:
      if (lookahead == 'F') ADVANCE(180);
      if (lookahead == 'R') ADVANCE(901);
      END_STATE();
    case 178:
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 179:
      if (lookahead == 'F') ADVANCE(360);
      END_STATE();
    case 180:
      if (lookahead == 'F') ADVANCE(357);
      END_STATE();
    case 181:
      if (lookahead == 'G') ADVANCE(892);
      END_STATE();
    case 182:
      if (lookahead == 'G') ADVANCE(212);
      END_STATE();
    case 183:
      if (lookahead == 'G') ADVANCE(910);
      END_STATE();
    case 184:
      if (lookahead == 'G') ADVANCE(857);
      END_STATE();
    case 185:
      if (lookahead == 'G') ADVANCE(966);
      END_STATE();
    case 186:
      if (lookahead == 'G') ADVANCE(195);
      END_STATE();
    case 187:
      if (lookahead == 'G') ADVANCE(332);
      if (lookahead == 'M') ADVANCE(164);
      END_STATE();
    case 188:
      if (lookahead == 'G') ADVANCE(168);
      END_STATE();
    case 189:
      if (lookahead == 'H') ADVANCE(926);
      END_STATE();
    case 190:
      if (lookahead == 'H') ADVANCE(925);
      END_STATE();
    case 191:
      if (lookahead == 'H') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(375);
      END_STATE();
    case 192:
      if (lookahead == 'H') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(379);
      END_STATE();
    case 193:
      if (lookahead == 'H') ADVANCE(156);
      END_STATE();
    case 194:
      if (lookahead == 'H') ADVANCE(413);
      END_STATE();
    case 195:
      if (lookahead == 'H') ADVANCE(364);
      END_STATE();
    case 196:
      if (lookahead == 'H') ADVANCE(78);
      END_STATE();
    case 197:
      if (lookahead == 'I') ADVANCE(417);
      END_STATE();
    case 198:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 199:
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(182);
      if (lookahead == 'O') ADVANCE(295);
      if (lookahead == 'Y') ADVANCE(376);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(258);
      END_STATE();
    case 202:
      if (lookahead == 'I') ADVANCE(263);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(259);
      END_STATE();
    case 204:
      if (lookahead == 'I') ADVANCE(353);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 206:
      if (lookahead == 'I') ADVANCE(274);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(363);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(285);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(275);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(276);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(70);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(300);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(354);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(254);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'S') ADVANCE(174);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(281);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 219:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 220:
      if (lookahead == 'I') ADVANCE(257);
      END_STATE();
    case 221:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 222:
      if (lookahead == 'L') ADVANCE(971);
      END_STATE();
    case 223:
      if (lookahead == 'L') ADVANCE(942);
      END_STATE();
    case 224:
      if (lookahead == 'L') ADVANCE(958);
      END_STATE();
    case 225:
      if (lookahead == 'L') ADVANCE(949);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(956);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(849);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(950);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(948);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(396);
      if (lookahead == 'N') ADVANCE(352);
      if (lookahead == 'U') ADVANCE(277);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(355);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(223);
      if (lookahead == 'M') ADVANCE(160);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(150);
      if (lookahead == 'R') ADVANCE(211);
      if (lookahead == 'T') ADVANCE(835);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(243);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 236:
      if (lookahead == 'L') ADVANCE(197);
      END_STATE();
    case 237:
      if (lookahead == 'L') ADVANCE(131);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(368);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(135);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(399);
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(399);
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 242:
      if (lookahead == 'L') ADVANCE(159);
      END_STATE();
    case 243:
      if (lookahead == 'L') ADVANCE(216);
      END_STATE();
    case 244:
      if (lookahead == 'M') ADVANCE(836);
      END_STATE();
    case 245:
      if (lookahead == 'M') ADVANCE(222);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(306);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(306);
      if (lookahead == 'X') ADVANCE(361);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(207);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(308);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(125);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(265);
      END_STATE();
    case 252:
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 253:
      if (lookahead == 'M') ADVANCE(136);
      END_STATE();
    case 254:
      if (lookahead == 'M') ADVANCE(140);
      END_STATE();
    case 255:
      if (lookahead == 'M') ADVANCE(172);
      END_STATE();
    case 256:
      if (lookahead == 'M') ADVANCE(170);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(142);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 259:
      if (lookahead == 'M') ADVANCE(71);
      END_STATE();
    case 260:
      if (lookahead == 'M') ADVANCE(160);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(851);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'W') ADVANCE(286);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(891);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(847);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(968);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(874);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(947);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(960);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(893);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(879);
      if (lookahead == 'U') ADVANCE(377);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(878);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(93);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(183);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(184);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(185);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(362);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(128);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(365);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(371);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(372);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(373);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 284:
      if (lookahead == 'N') ADVANCE(380);
      END_STATE();
    case 285:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 286:
      if (lookahead == 'N') ADVANCE(163);
      END_STATE();
    case 287:
      if (lookahead == 'O') ADVANCE(930);
      if (lookahead == 'U') ADVANCE(232);
      END_STATE();
    case 288:
      if (lookahead == 'O') ADVANCE(187);
      END_STATE();
    case 289:
      if (lookahead == 'O') ADVANCE(418);
      END_STATE();
    case 290:
      if (lookahead == 'O') ADVANCE(929);
      END_STATE();
    case 291:
      if (lookahead == 'O') ADVANCE(833);
      END_STATE();
    case 292:
      if (lookahead == 'O') ADVANCE(202);
      if (lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 293:
      if (lookahead == 'O') ADVANCE(283);
      END_STATE();
    case 294:
      if (lookahead == 'O') ADVANCE(305);
      END_STATE();
    case 295:
      if (lookahead == 'O') ADVANCE(242);
      if (lookahead == 'X') ADVANCE(44);
      END_STATE();
    case 296:
      if (lookahead == 'O') ADVANCE(244);
      END_STATE();
    case 297:
      if (lookahead == 'O') ADVANCE(395);
      END_STATE();
    case 298:
      if (lookahead == 'O') ADVANCE(278);
      END_STATE();
    case 299:
      if (lookahead == 'O') ADVANCE(264);
      END_STATE();
    case 300:
      if (lookahead == 'O') ADVANCE(267);
      END_STATE();
    case 301:
      if (lookahead == 'O') ADVANCE(338);
      if (lookahead == 'R') ADVANCE(296);
      END_STATE();
    case 302:
      if (lookahead == 'O') ADVANCE(359);
      END_STATE();
    case 303:
      if (lookahead == 'O') ADVANCE(359);
      if (lookahead == 'U') ADVANCE(260);
      END_STATE();
    case 304:
      if (lookahead == 'O') ADVANCE(322);
      END_STATE();
    case 305:
      if (lookahead == 'P') ADVANCE(869);
      END_STATE();
    case 306:
      if (lookahead == 'P') ADVANCE(939);
      END_STATE();
    case 307:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 308:
      if (lookahead == 'P') ADVANCE(976);
      END_STATE();
    case 309:
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(123);
      END_STATE();
    case 310:
      if (lookahead == 'P') ADVANCE(194);
      END_STATE();
    case 311:
      if (lookahead == 'P') ADVANCE(127);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(903);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(916);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(962);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(868);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(842);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(844);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(938);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(965);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(964);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(954);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(915);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(901);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(296);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(409);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(410);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(297);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(205);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(414);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(415);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 334:
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 335:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 336:
      if (lookahead == 'R') ADVANCE(374);
      END_STATE();
    case 337:
      if (lookahead == 'R') ADVANCE(201);
      END_STATE();
    case 338:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 339:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 340:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 341:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 342:
      if (lookahead == 'R') ADVANCE(218);
      END_STATE();
    case 343:
      if (lookahead == 'R') ADVANCE(219);
      END_STATE();
    case 344:
      if (lookahead == 'R') ADVANCE(221);
      END_STATE();
    case 345:
      if (lookahead == 'S') ADVANCE(100);
      END_STATE();
    case 346:
      if (lookahead == 'S') ADVANCE(845);
      END_STATE();
    case 347:
      if (lookahead == 'S') ADVANCE(920);
      END_STATE();
    case 348:
      if (lookahead == 'S') ADVANCE(834);
      END_STATE();
    case 349:
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 350:
      if (lookahead == 'S') ADVANCE(389);
      END_STATE();
    case 351:
      if (lookahead == 'S') ADVANCE(346);
      END_STATE();
    case 352:
      if (lookahead == 'S') ADVANCE(388);
      END_STATE();
    case 353:
      if (lookahead == 'S') ADVANCE(213);
      END_STATE();
    case 354:
      if (lookahead == 'S') ADVANCE(378);
      END_STATE();
    case 355:
      if (lookahead == 'S') ADVANCE(129);
      END_STATE();
    case 356:
      if (lookahead == 'S') ADVANCE(381);
      END_STATE();
    case 357:
      if (lookahead == 'S') ADVANCE(165);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(907);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(838);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(967);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(888);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(862);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(840);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(955);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(864);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(827);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(922);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(978);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(884);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(951);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(886);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(921);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(830);
      END_STATE();
    case 375:
      if (lookahead == 'T') ADVANCE(189);
      END_STATE();
    case 376:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 377:
      if (lookahead == 'T') ADVANCE(289);
      END_STATE();
    case 378:
      if (lookahead == 'T') ADVANCE(347);
      END_STATE();
    case 379:
      if (lookahead == 'T') ADVANCE(190);
      END_STATE();
    case 380:
      if (lookahead == 'T') ADVANCE(291);
      END_STATE();
    case 381:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 382:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 383:
      if (lookahead == 'T') ADVANCE(327);
      END_STATE();
    case 384:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 385:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 386:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 387:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 388:
      if (lookahead == 'T') ADVANCE(333);
      END_STATE();
    case 389:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 390:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 391:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 392:
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == 'X') ADVANCE(890);
      END_STATE();
    case 393:
      if (lookahead == 'T') ADVANCE(162);
      END_STATE();
    case 394:
      if (lookahead == 'T') ADVANCE(166);
      END_STATE();
    case 395:
      if (lookahead == 'U') ADVANCE(307);
      END_STATE();
    case 396:
      if (lookahead == 'U') ADVANCE(251);
      END_STATE();
    case 397:
      if (lookahead == 'U') ADVANCE(126);
      END_STATE();
    case 398:
      if (lookahead == 'U') ADVANCE(238);
      END_STATE();
    case 399:
      if (lookahead == 'U') ADVANCE(157);
      END_STATE();
    case 400:
      if (lookahead == 'U') ADVANCE(369);
      END_STATE();
    case 401:
      if (lookahead == 'U') ADVANCE(91);
      END_STATE();
    case 402:
      if (lookahead == 'V') ADVANCE(206);
      END_STATE();
    case 403:
      if (lookahead == 'W') ADVANCE(872);
      END_STATE();
    case 404:
      if (lookahead == 'X') ADVANCE(214);
      END_STATE();
    case 405:
      if (lookahead == 'X') ADVANCE(914);
      END_STATE();
    case 406:
      if (lookahead == 'X') ADVANCE(361);
      END_STATE();
    case 407:
      if (lookahead == 'Y') ADVANCE(876);
      END_STATE();
    case 408:
      if (lookahead == 'Y') ADVANCE(961);
      END_STATE();
    case 409:
      if (lookahead == 'Y') ADVANCE(865);
      END_STATE();
    case 410:
      if (lookahead == 'Y') ADVANCE(984);
      END_STATE();
    case 411:
      if (lookahead == 'Y') ADVANCE(856);
      END_STATE();
    case 412:
      if (lookahead == 'Y') ADVANCE(855);
      END_STATE();
    case 413:
      if (lookahead == 'Y') ADVANCE(985);
      END_STATE();
    case 414:
      if (lookahead == 'Y') ADVANCE(941);
      END_STATE();
    case 415:
      if (lookahead == 'Y') ADVANCE(209);
      END_STATE();
    case 416:
      if (lookahead == 'Z') ADVANCE(983);
      END_STATE();
    case 417:
      if (lookahead == 'Z') ADVANCE(154);
      END_STATE();
    case 418:
      if (lookahead == '_') ADVANCE(210);
      END_STATE();
    case 419:
      if (lookahead == '_') ADVANCE(583);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'h') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'h') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == 'o') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'e') ADVANCE(620);
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead == 'o') ADVANCE(935);
      if (lookahead == 'r') ADVANCE(770);
      if (lookahead == 'y') ADVANCE(684);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(932);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(932);
      if (lookahead == 'e') ADVANCE(974);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(972);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(937);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(771);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == 'p') ADVANCE(608);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(699);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 452:
      if (lookahead == 'a') ADVANCE(703);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 454:
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 455:
      if (lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 456:
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 457:
      if (lookahead == 'a') ADVANCE(759);
      END_STATE();
    case 458:
      if (lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 459:
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 460:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 461:
      if (lookahead == 'b') ADVANCE(784);
      END_STATE();
    case 462:
      if (lookahead == 'b') ADVANCE(785);
      END_STATE();
    case 463:
      if (lookahead == 'b') ADVANCE(610);
      END_STATE();
    case 464:
      if (lookahead == 'b') ADVANCE(612);
      END_STATE();
    case 465:
      if (lookahead == 'c') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'm') ADVANCE(441);
      END_STATE();
    case 466:
      if (lookahead == 'c') ADVANCE(860);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(858);
      END_STATE();
    case 468:
      if (lookahead == 'c') ADVANCE(957);
      END_STATE();
    case 469:
      if (lookahead == 'c') ADVANCE(576);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 470:
      if (lookahead == 'c') ADVANCE(576);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(542);
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 471:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 472:
      if (lookahead == 'c') ADVANCE(569);
      if (lookahead == 'y') ADVANCE(582);
      END_STATE();
    case 473:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 474:
      if (lookahead == 'c') ADVANCE(503);
      END_STATE();
    case 475:
      if (lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 476:
      if (lookahead == 'c') ADVANCE(743);
      END_STATE();
    case 477:
      if (lookahead == 'c') ADVANCE(512);
      END_STATE();
    case 478:
      if (lookahead == 'c') ADVANCE(577);
      END_STATE();
    case 479:
      if (lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 480:
      if (lookahead == 'c') ADVANCE(767);
      END_STATE();
    case 481:
      if (lookahead == 'd') ADVANCE(483);
      if (lookahead == 'l') ADVANCE(760);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead == 's') ADVANCE(881);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead == 'v') ADVANCE(554);
      END_STATE();
    case 482:
      if (lookahead == 'd') ADVANCE(483);
      if (lookahead == 'l') ADVANCE(760);
      if (lookahead == 's') ADVANCE(878);
      END_STATE();
    case 483:
      if (lookahead == 'd') ADVANCE(870);
      END_STATE();
    case 484:
      if (lookahead == 'd') ADVANCE(899);
      END_STATE();
    case 485:
      if (lookahead == 'd') ADVANCE(986);
      END_STATE();
    case 486:
      if (lookahead == 'd') ADVANCE(987);
      END_STATE();
    case 487:
      if (lookahead == 'd') ADVANCE(873);
      END_STATE();
    case 488:
      if (lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 489:
      if (lookahead == 'd') ADVANCE(518);
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == 't') ADVANCE(953);
      END_STATE();
    case 490:
      if (lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 491:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'm') ADVANCE(441);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(912);
      if (lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(943);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(975);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(935);
      if (lookahead == 'y') ADVANCE(684);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'o') ADVANCE(724);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 548:
      if (lookahead == 'f') ADVANCE(918);
      if (lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 549:
      if (lookahead == 'f') ADVANCE(553);
      if (lookahead == 'n') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(905);
      if (lookahead == 'u') ADVANCE(766);
      if (lookahead == 'w') ADVANCE(659);
      END_STATE();
    case 550:
      if (lookahead == 'f') ADVANCE(553);
      if (lookahead == 'r') ADVANCE(901);
      END_STATE();
    case 551:
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 552:
      if (lookahead == 'f') ADVANCE(733);
      END_STATE();
    case 553:
      if (lookahead == 'f') ADVANCE(730);
      END_STATE();
    case 554:
      if (lookahead == 'g') ADVANCE(892);
      END_STATE();
    case 555:
      if (lookahead == 'g') ADVANCE(585);
      END_STATE();
    case 556:
      if (lookahead == 'g') ADVANCE(910);
      END_STATE();
    case 557:
      if (lookahead == 'g') ADVANCE(857);
      END_STATE();
    case 558:
      if (lookahead == 'g') ADVANCE(966);
      END_STATE();
    case 559:
      if (lookahead == 'g') ADVANCE(568);
      END_STATE();
    case 560:
      if (lookahead == 'g') ADVANCE(705);
      if (lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 561:
      if (lookahead == 'g') ADVANCE(541);
      END_STATE();
    case 562:
      if (lookahead == 'h') ADVANCE(927);
      END_STATE();
    case 563:
      if (lookahead == 'h') ADVANCE(925);
      END_STATE();
    case 564:
      if (lookahead == 'h') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 565:
      if (lookahead == 'h') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 566:
      if (lookahead == 'h') ADVANCE(529);
      END_STATE();
    case 567:
      if (lookahead == 'h') ADVANCE(786);
      END_STATE();
    case 568:
      if (lookahead == 'h') ADVANCE(737);
      END_STATE();
    case 569:
      if (lookahead == 'h') ADVANCE(451);
      END_STATE();
    case 570:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 571:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 572:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 573:
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(668);
      if (lookahead == 'y') ADVANCE(749);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 576:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(726);
      END_STATE();
    case 578:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 579:
      if (lookahead == 'i') ADVANCE(647);
      END_STATE();
    case 580:
      if (lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 581:
      if (lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 582:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 583:
      if (lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 584:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 585:
      if (lookahead == 'i') ADVANCE(652);
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 586:
      if (lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 587:
      if (lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 588:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 589:
      if (lookahead == 'i') ADVANCE(653);
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 590:
      if (lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 591:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 592:
      if (lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 593:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 594:
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 595:
      if (lookahead == 'l') ADVANCE(971);
      END_STATE();
    case 596:
      if (lookahead == 'l') ADVANCE(942);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(958);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(949);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(956);
      END_STATE();
    case 600:
      if (lookahead == 'l') ADVANCE(849);
      END_STATE();
    case 601:
      if (lookahead == 'l') ADVANCE(950);
      END_STATE();
    case 602:
      if (lookahead == 'l') ADVANCE(948);
      END_STATE();
    case 603:
      if (lookahead == 'l') ADVANCE(769);
      if (lookahead == 'n') ADVANCE(725);
      if (lookahead == 'u') ADVANCE(650);
      END_STATE();
    case 604:
      if (lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 605:
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(533);
      END_STATE();
    case 606:
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == 't') ADVANCE(835);
      END_STATE();
    case 607:
      if (lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 608:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 609:
      if (lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 610:
      if (lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 611:
      if (lookahead == 'l') ADVANCE(741);
      END_STATE();
    case 612:
      if (lookahead == 'l') ADVANCE(508);
      END_STATE();
    case 613:
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 614:
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 615:
      if (lookahead == 'l') ADVANCE(532);
      END_STATE();
    case 616:
      if (lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 617:
      if (lookahead == 'm') ADVANCE(836);
      END_STATE();
    case 618:
      if (lookahead == 'm') ADVANCE(595);
      END_STATE();
    case 619:
      if (lookahead == 'm') ADVANCE(679);
      END_STATE();
    case 620:
      if (lookahead == 'm') ADVANCE(679);
      if (lookahead == 'x') ADVANCE(734);
      END_STATE();
    case 621:
      if (lookahead == 'm') ADVANCE(580);
      END_STATE();
    case 622:
      if (lookahead == 'm') ADVANCE(680);
      END_STATE();
    case 623:
      if (lookahead == 'm') ADVANCE(501);
      END_STATE();
    case 624:
      if (lookahead == 'm') ADVANCE(638);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 626:
      if (lookahead == 'm') ADVANCE(509);
      END_STATE();
    case 627:
      if (lookahead == 'm') ADVANCE(513);
      END_STATE();
    case 628:
      if (lookahead == 'm') ADVANCE(545);
      END_STATE();
    case 629:
      if (lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 630:
      if (lookahead == 'm') ADVANCE(515);
      END_STATE();
    case 631:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 632:
      if (lookahead == 'm') ADVANCE(444);
      END_STATE();
    case 633:
      if (lookahead == 'm') ADVANCE(533);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == 'w') ADVANCE(659);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(969);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(947);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(960);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead == 's') ADVANCE(881);
      if (lookahead == 'u') ADVANCE(750);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead == 's') ADVANCE(878);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(556);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(558);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 654:
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 655:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 656:
      if (lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 657:
      if (lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 658:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(536);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(931);
      if (lookahead == 'u') ADVANCE(605);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(929);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == 's') ADVANCE(672);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(768);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 673:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 676:
      if (lookahead == 'o') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(633);
      END_STATE();
    case 677:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 678:
      if (lookahead == 'p') ADVANCE(869);
      END_STATE();
    case 679:
      if (lookahead == 'p') ADVANCE(940);
      END_STATE();
    case 680:
      if (lookahead == 'p') ADVANCE(977);
      END_STATE();
    case 681:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 682:
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 683:
      if (lookahead == 'p') ADVANCE(567);
      END_STATE();
    case 684:
      if (lookahead == 'p') ADVANCE(499);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(905);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(844);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(965);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(964);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(954);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(901);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(783);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(845);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(920);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(834);
      END_STATE();
    case 722:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 723:
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 724:
      if (lookahead == 's') ADVANCE(719);
      END_STATE();
    case 725:
      if (lookahead == 's') ADVANCE(761);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(751);
      END_STATE();
    case 728:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 730:
      if (lookahead == 's') ADVANCE(538);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(838);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(967);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(862);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(955);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(864);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(827);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(922);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(978);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(951);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(886);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(830);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(720);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == 'x') ADVANCE(890);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 768:
      if (lookahead == 'u') ADVANCE(681);
      END_STATE();
    case 769:
      if (lookahead == 'u') ADVANCE(624);
      END_STATE();
    case 770:
      if (lookahead == 'u') ADVANCE(498);
      END_STATE();
    case 771:
      if (lookahead == 'u') ADVANCE(611);
      END_STATE();
    case 772:
      if (lookahead == 'u') ADVANCE(530);
      END_STATE();
    case 773:
      if (lookahead == 'u') ADVANCE(742);
      END_STATE();
    case 774:
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 775:
      if (lookahead == 'v') ADVANCE(579);
      END_STATE();
    case 776:
      if (lookahead == 'w') ADVANCE(872);
      END_STATE();
    case 777:
      if (lookahead == 'x') ADVANCE(587);
      END_STATE();
    case 778:
      if (lookahead == 'x') ADVANCE(914);
      END_STATE();
    case 779:
      if (lookahead == 'x') ADVANCE(734);
      END_STATE();
    case 780:
      if (lookahead == 'y') ADVANCE(876);
      END_STATE();
    case 781:
      if (lookahead == 'y') ADVANCE(961);
      END_STATE();
    case 782:
      if (lookahead == 'y') ADVANCE(865);
      END_STATE();
    case 783:
      if (lookahead == 'y') ADVANCE(984);
      END_STATE();
    case 784:
      if (lookahead == 'y') ADVANCE(856);
      END_STATE();
    case 785:
      if (lookahead == 'y') ADVANCE(855);
      END_STATE();
    case 786:
      if (lookahead == 'y') ADVANCE(985);
      END_STATE();
    case 787:
      if (lookahead == 'y') ADVANCE(941);
      END_STATE();
    case 788:
      if (lookahead == 'y') ADVANCE(582);
      END_STATE();
    case 789:
      if (lookahead == 'z') ADVANCE(983);
      END_STATE();
    case 790:
      if (lookahead == 'z') ADVANCE(527);
      END_STATE();
    case 791:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(791)
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'B') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'F') ADVANCE(301);
      if (lookahead == 'G') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead == 'J') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == 'M') ADVANCE(293);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'V') ADVANCE(59);
      if (lookahead == 'W') ADVANCE(192);
      if (lookahead == 'X') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'b') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'f') ADVANCE(674);
      if (lookahead == 'g') ADVANCE(522);
      if (lookahead == 'h') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(641);
      if (lookahead == 'j') ADVANCE(664);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == 'p') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(682);
      if (lookahead == 'v') ADVANCE(432);
      if (lookahead == 'w') ADVANCE(565);
      if (lookahead == 'x') ADVANCE(618);
      END_STATE();
    case 792:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(792)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'C') ADVANCE(1116);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1091);
      if (lookahead == 'J') ADVANCE(1106);
      if (lookahead == 'L') ADVANCE(1047);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'R') ADVANCE(1073);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'c') ADVANCE(1238);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'j') ADVANCE(1228);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'r') ADVANCE(1195);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 793:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(793)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'C') ADVANCE(1116);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1091);
      if (lookahead == 'J') ADVANCE(1106);
      if (lookahead == 'L') ADVANCE(1047);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'R') ADVANCE(1073);
      if (lookahead == 'W') ADVANCE(1068);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'c') ADVANCE(1238);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 'j') ADVANCE(1228);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'r') ADVANCE(1195);
      if (lookahead == 'w') ADVANCE(1190);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 794:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(794)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'F') ADVANCE(304);
      if (lookahead == 'G') ADVANCE(328);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'N') ADVANCE(302);
      if (lookahead == 'O') ADVANCE(312);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == 'T') ADVANCE(220);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(643);
      if (lookahead == 'd') ADVANCE(514);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'g') ADVANCE(701);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'l') ADVANCE(572);
      if (lookahead == 'n') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead == 'p') ADVANCE(711);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == 'v') ADVANCE(453);
      if (lookahead == 'w') ADVANCE(564);
      END_STATE();
    case 795:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(795)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 796:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 797:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'W') ADVANCE(1078);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 798:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(798)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 799:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(799)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(272);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'O') ADVANCE(323);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == 'V') ADVANCE(198);
      if (lookahead == 'W') ADVANCE(192);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'l') ADVANCE(572);
      if (lookahead == 'm') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == 'v') ADVANCE(571);
      if (lookahead == 'w') ADVANCE(565);
      END_STATE();
    case 800:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(800)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'W') ADVANCE(1078);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 801:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(801)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'O') ADVANCE(1115);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'o') ADVANCE(1237);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 802:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(802)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(271);
      if (lookahead == 'F') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'O') ADVANCE(177);
      if (lookahead == 'W') ADVANCE(192);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == 'w') ADVANCE(565);
      END_STATE();
    case 803:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(803)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'I') ADVANCE(1093);
      if (lookahead == 'O') ADVANCE(1115);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'o') ADVANCE(1237);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 804:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(804)
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1107);
      if (lookahead == 'S') ADVANCE(1049);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1229);
      if (lookahead == 's') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 805:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1107);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 806:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(806)
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1107);
      if (lookahead == 'D') ADVANCE(1077);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1229);
      if (lookahead == 'd') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 807:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(807)
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'C') ADVANCE(1116);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1098);
      if (lookahead == 'J') ADVANCE(1106);
      if (lookahead == 'L') ADVANCE(1047);
      if (lookahead == 'O') ADVANCE(1117);
      if (lookahead == 'R') ADVANCE(1073);
      if (lookahead == 'U') ADVANCE(1134);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'c') ADVANCE(1238);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1220);
      if (lookahead == 'j') ADVANCE(1228);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1239);
      if (lookahead == 'r') ADVANCE(1195);
      if (lookahead == 'u') ADVANCE(1256);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 808:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(808)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'C') ADVANCE(1116);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == 'G') ADVANCE(1121);
      if (lookahead == 'I') ADVANCE(1098);
      if (lookahead == 'J') ADVANCE(1106);
      if (lookahead == 'L') ADVANCE(1047);
      if (lookahead == 'O') ADVANCE(1117);
      if (lookahead == 'R') ADVANCE(1073);
      if (lookahead == 'U') ADVANCE(1134);
      if (lookahead == 'W') ADVANCE(1068);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'c') ADVANCE(1238);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(1220);
      if (lookahead == 'j') ADVANCE(1228);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1239);
      if (lookahead == 'r') ADVANCE(1195);
      if (lookahead == 'u') ADVANCE(1256);
      if (lookahead == 'w') ADVANCE(1190);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 809:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(809)
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(1035);
      if (lookahead == 'T') ADVANCE(1122);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'f') ADVANCE(1157);
      if (lookahead == 't') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 810:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(810)
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '`') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 811:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(811)
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1130);
      if (lookahead == 'D') ADVANCE(1061);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'W') ADVANCE(1078);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1252);
      if (lookahead == 'd') ADVANCE(1183);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 812:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(812)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1111);
      if (lookahead == 'K') ADVANCE(1056);
      if (lookahead == 'P') ADVANCE(1125);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1233);
      if (lookahead == 'k') ADVANCE(1178);
      if (lookahead == 'p') ADVANCE(1247);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 813:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(813)
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1130);
      if (lookahead == 'D') ADVANCE(1061);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1252);
      if (lookahead == 'd') ADVANCE(1183);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 814:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(814)
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'F') ADVANCE(1124);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'f') ADVANCE(1246);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 815:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(815)
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'F') ADVANCE(1124);
      if (lookahead == 'W') ADVANCE(1078);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'f') ADVANCE(1246);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 816:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(816)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'L') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1117);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 'o') ADVANCE(1239);
      if (lookahead == 'w') ADVANCE(1191);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 817:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(817)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == 'O') ADVANCE(1094);
      if (lookahead == 'U') ADVANCE(1131);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'u') ADVANCE(1253);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 818:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(818)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == 'D') ADVANCE(1057);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'd') ADVANCE(1179);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 819:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(819)
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 820:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(820)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'i') ADVANCE(1186);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 821:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(821)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'L') ADVANCE(1040);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'l') ADVANCE(1162);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 822:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(822)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == 'O') ADVANCE(1094);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(1250);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 823:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(823)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(1109);
      if (lookahead == 'T') ADVANCE(1105);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'c') ADVANCE(1231);
      if (lookahead == 't') ADVANCE(1227);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 824:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(824)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 825:
      if (eof) ADVANCE(826);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(825)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '%') ADVANCE(1004);
      if (lookahead == '\'') ADVANCE(1011);
      if (lookahead == '(') ADVANCE(988);
      if (lookahead == ')') ADVANCE(989);
      if (lookahead == '*') ADVANCE(1000);
      if (lookahead == '+') ADVANCE(1001);
      if (lookahead == ',') ADVANCE(990);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '/') ADVANCE(1003);
      if (lookahead == ';') ADVANCE(997);
      if (lookahead == '<') ADVANCE(1006);
      if (lookahead == '=') ADVANCE(999);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(404);
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == 'G') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(175);
      if (lookahead == 'J') ADVANCE(292);
      if (lookahead == 'K') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(287);
      if (lookahead == 'O') ADVANCE(176);
      if (lookahead == 'P') ADVANCE(324);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'V') ADVANCE(54);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == 'X') ADVANCE(245);
      if (lookahead == 'Z') ADVANCE(298);
      if (lookahead == '^') ADVANCE(1005);
      if (lookahead == '`') ADVANCE(1030);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'b') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead == 'f') ADVANCE(422);
      if (lookahead == 'g') ADVANCE(522);
      if (lookahead == 'h') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(548);
      if (lookahead == 'j') ADVANCE(664);
      if (lookahead == 'k') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(424);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead == 'p') ADVANCE(697);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == 's') ADVANCE(465);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(682);
      if (lookahead == 'v') ADVANCE(427);
      if (lookahead == 'w') ADVANCE(564);
      if (lookahead == 'x') ADVANCE(618);
      if (lookahead == 'z') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_keyword_outer);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_keyword_cross);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_keyword_cross);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_keyword_lateral);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_keyword_lateral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_keyword_alter);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_keyword_drop);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_keyword_add);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_keyword_view);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_keyword_materialized);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_keyword_column);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_keyword_column);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(860);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(860);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(161);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_keyword_using);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_keyword_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(503);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_keyword_cascade);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'O') ADVANCE(400);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'o') ADVANCE(773);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_keyword_no);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 'T') ADVANCE(907);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_keyword_data);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_keyword_type);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_keyword_rename);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_keyword_to);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_keyword_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_keyword_schema);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_keyword_owner);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'O') ADVANCE(339);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_keyword_temporary);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_keyword_int_token2);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token2);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(970);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(970);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(215);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(416);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token2);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 'S') ADVANCE(381);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token4);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_keyword_timestamptz_token1);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_keyword_geometry);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_keyword_geography);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_keyword_box2d);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_keyword_box3d);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1028);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1019);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(1019);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(1014);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(1028);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1022);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1007);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1009);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(1019);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '*') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(1014);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(1019);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1013);
      if (lookahead == '/') ADVANCE(994);
      if (lookahead != 0) ADVANCE(1014);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(1019);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(1014);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(993);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1015);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(1017);
      if (lookahead == '/') ADVANCE(1012);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1019);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1019);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1018);
      if (lookahead == '-') ADVANCE(1017);
      if (lookahead == '/') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1019);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1019);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(1028);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(1021);
      if (lookahead == '*') ADVANCE(1022);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(1028);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1022);
      if (lookahead == '/') ADVANCE(995);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(1028);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1022);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(992);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1024);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead == '/') ADVANCE(1021);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1028);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1028);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1027);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead == '/') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1028);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1028);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1063);
      if (lookahead == 'I') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(913);
      if (lookahead == 'I') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1058);
      if (lookahead == 'I') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1045);
      if (lookahead == 'S') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1185);
      if (lookahead == 'i') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead == 'i') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1180);
      if (lookahead == 'i') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1167);
      if (lookahead == 's') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
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
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 25},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 25},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 18},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 18},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 18},
  [170] = {.lex_state = 18},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 19},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 30},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 34},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 18},
  [201] = {.lex_state = 30},
  [202] = {.lex_state = 34},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 30},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 34},
  [208] = {.lex_state = 34},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 30},
  [211] = {.lex_state = 25},
  [212] = {.lex_state = 22},
  [213] = {.lex_state = 22},
  [214] = {.lex_state = 22},
  [215] = {.lex_state = 22},
  [216] = {.lex_state = 22},
  [217] = {.lex_state = 22},
  [218] = {.lex_state = 22},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 25},
  [221] = {.lex_state = 22},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 22},
  [224] = {.lex_state = 22},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 22},
  [227] = {.lex_state = 22},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 22},
  [230] = {.lex_state = 22},
  [231] = {.lex_state = 22},
  [232] = {.lex_state = 25},
  [233] = {.lex_state = 22},
  [234] = {.lex_state = 22},
  [235] = {.lex_state = 22},
  [236] = {.lex_state = 22},
  [237] = {.lex_state = 25},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 20},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 8},
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
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
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
  [292] = {.lex_state = 20},
  [293] = {.lex_state = 20},
  [294] = {.lex_state = 20},
  [295] = {.lex_state = 20},
  [296] = {.lex_state = 20},
  [297] = {.lex_state = 20},
  [298] = {.lex_state = 20},
  [299] = {.lex_state = 20},
  [300] = {.lex_state = 20},
  [301] = {.lex_state = 20},
  [302] = {.lex_state = 20},
  [303] = {.lex_state = 20},
  [304] = {.lex_state = 20},
  [305] = {.lex_state = 20},
  [306] = {.lex_state = 20},
  [307] = {.lex_state = 20},
  [308] = {.lex_state = 20},
  [309] = {.lex_state = 20},
  [310] = {.lex_state = 20},
  [311] = {.lex_state = 20},
  [312] = {.lex_state = 20},
  [313] = {.lex_state = 20},
  [314] = {.lex_state = 25},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 29},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 39},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 26},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 25},
  [335] = {.lex_state = 29},
  [336] = {.lex_state = 26},
  [337] = {.lex_state = 29},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 7},
  [340] = {.lex_state = 26},
  [341] = {.lex_state = 29},
  [342] = {.lex_state = 26},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 26},
  [346] = {.lex_state = 29},
  [347] = {.lex_state = 29},
  [348] = {.lex_state = 26},
  [349] = {.lex_state = 29},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 24},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 24},
  [354] = {.lex_state = 26},
  [355] = {.lex_state = 7},
  [356] = {.lex_state = 24},
  [357] = {.lex_state = 7},
  [358] = {.lex_state = 28},
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 7},
  [361] = {.lex_state = 7},
  [362] = {.lex_state = 7},
  [363] = {.lex_state = 24},
  [364] = {.lex_state = 28},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 26},
  [367] = {.lex_state = 18},
  [368] = {.lex_state = 28},
  [369] = {.lex_state = 28},
  [370] = {.lex_state = 29},
  [371] = {.lex_state = 7},
  [372] = {.lex_state = 29},
  [373] = {.lex_state = 26},
  [374] = {.lex_state = 35},
  [375] = {.lex_state = 7},
  [376] = {.lex_state = 7},
  [377] = {.lex_state = 7},
  [378] = {.lex_state = 26},
  [379] = {.lex_state = 29},
  [380] = {.lex_state = 7},
  [381] = {.lex_state = 29},
  [382] = {.lex_state = 7},
  [383] = {.lex_state = 18},
  [384] = {.lex_state = 26},
  [385] = {.lex_state = 29},
  [386] = {.lex_state = 18},
  [387] = {.lex_state = 26},
  [388] = {.lex_state = 7},
  [389] = {.lex_state = 18},
  [390] = {.lex_state = 7},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 18},
  [393] = {.lex_state = 7},
  [394] = {.lex_state = 36},
  [395] = {.lex_state = 36},
  [396] = {.lex_state = 35},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 8},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 37},
  [402] = {.lex_state = 27},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 37},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 37},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 28},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 35},
  [414] = {.lex_state = 24},
  [415] = {.lex_state = 28},
  [416] = {.lex_state = 20},
  [417] = {.lex_state = 36},
  [418] = {.lex_state = 24},
  [419] = {.lex_state = 36},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 24},
  [423] = {.lex_state = 28},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 35},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 28},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 24},
  [432] = {.lex_state = 24},
  [433] = {.lex_state = 28},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 24},
  [439] = {.lex_state = 24},
  [440] = {.lex_state = 27},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 37},
  [446] = {.lex_state = 24},
  [447] = {.lex_state = 37},
  [448] = {.lex_state = 28},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 27},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 28},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 27},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 28},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 41},
  [466] = {.lex_state = 27},
  [467] = {.lex_state = 27},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 41},
  [470] = {.lex_state = 20},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 20},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 20},
  [475] = {.lex_state = 20},
  [476] = {.lex_state = 41},
  [477] = {.lex_state = 41},
  [478] = {.lex_state = 27},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 41},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 41},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 41},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 41},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 41},
  [493] = {.lex_state = 20},
  [494] = {.lex_state = 41},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 41},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 43},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 43},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 43},
  [506] = {.lex_state = 43},
  [507] = {.lex_state = 38},
  [508] = {.lex_state = 38},
  [509] = {.lex_state = 25},
  [510] = {.lex_state = 38},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 25},
  [513] = {.lex_state = 25},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 38},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 25},
  [518] = {.lex_state = 20},
  [519] = {.lex_state = 27},
  [520] = {.lex_state = 25},
  [521] = {.lex_state = 43},
  [522] = {.lex_state = 25},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 38},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 25},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 27},
  [531] = {.lex_state = 43},
  [532] = {.lex_state = 41},
  [533] = {.lex_state = 27},
  [534] = {.lex_state = 27},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 27},
  [541] = {.lex_state = 38},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 40},
  [548] = {.lex_state = 25},
  [549] = {.lex_state = 20},
  [550] = {.lex_state = 20},
  [551] = {.lex_state = 20},
  [552] = {.lex_state = 20},
  [553] = {.lex_state = 20},
  [554] = {.lex_state = 20},
  [555] = {.lex_state = 20},
  [556] = {.lex_state = 20},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 20},
  [560] = {.lex_state = 20},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 20},
  [563] = {.lex_state = 20},
  [564] = {.lex_state = 20},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 37},
  [567] = {.lex_state = 20},
  [568] = {.lex_state = 20},
  [569] = {.lex_state = 20},
  [570] = {.lex_state = 37},
  [571] = {.lex_state = 20},
  [572] = {.lex_state = 20},
  [573] = {.lex_state = 20},
  [574] = {.lex_state = 20},
  [575] = {.lex_state = 20},
  [576] = {.lex_state = 20},
  [577] = {.lex_state = 20},
  [578] = {.lex_state = 37},
  [579] = {.lex_state = 37},
  [580] = {.lex_state = 20},
  [581] = {.lex_state = 20},
  [582] = {.lex_state = 20},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 20},
  [585] = {.lex_state = 38},
  [586] = {.lex_state = 20},
  [587] = {.lex_state = 20},
  [588] = {.lex_state = 20},
  [589] = {.lex_state = 37},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 20},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 20},
  [595] = {.lex_state = 20},
  [596] = {.lex_state = 20},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 38},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 20},
  [602] = {.lex_state = 38},
  [603] = {.lex_state = 37},
  [604] = {.lex_state = 20},
  [605] = {.lex_state = 38},
  [606] = {.lex_state = 37},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 20},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 20},
  [611] = {.lex_state = 20},
  [612] = {.lex_state = 20},
  [613] = {.lex_state = 20},
  [614] = {.lex_state = 20},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 20},
  [624] = {.lex_state = 20},
  [625] = {.lex_state = 20},
  [626] = {.lex_state = 20},
  [627] = {.lex_state = 20},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 20},
  [630] = {.lex_state = 20},
  [631] = {.lex_state = 20},
  [632] = {.lex_state = 20},
  [633] = {.lex_state = 20},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 20},
  [636] = {.lex_state = 20},
  [637] = {.lex_state = 20},
  [638] = {.lex_state = 20},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 20},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 20},
  [645] = {.lex_state = 20},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 20},
  [648] = {.lex_state = 20},
  [649] = {.lex_state = 20},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 25},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 20},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 20},
  [658] = {.lex_state = 20},
  [659] = {.lex_state = 20},
  [660] = {.lex_state = 20},
  [661] = {.lex_state = 20},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 20},
  [664] = {.lex_state = 20},
  [665] = {.lex_state = 20},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 20},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 20},
  [674] = {.lex_state = 20},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 20},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 20},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 20},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 20},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 20},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 20},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 20},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 20},
  [696] = {.lex_state = 20},
  [697] = {.lex_state = 20},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 20},
  [701] = {.lex_state = 20},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 20},
  [704] = {.lex_state = 20},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 20},
  [709] = {.lex_state = 20},
  [710] = {.lex_state = 20},
  [711] = {.lex_state = 20},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 20},
  [714] = {.lex_state = 20},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 20},
  [718] = {.lex_state = 20},
  [719] = {.lex_state = 20},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 20},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 20},
  [732] = {.lex_state = 20},
  [733] = {.lex_state = 20},
  [734] = {.lex_state = 20},
  [735] = {.lex_state = 20},
  [736] = {.lex_state = 20},
  [737] = {.lex_state = 20},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 20},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 20},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 8},
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
  [766] = {.lex_state = 25},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 8},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 8},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 8},
  [779] = {.lex_state = 7},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
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
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 25},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 20},
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
  [830] = {.lex_state = 25},
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
  [844] = {.lex_state = 25},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 25},
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
  [871] = {.lex_state = 25},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 25},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
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
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 25},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
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
  [924] = {.lex_state = 1016},
  [925] = {.lex_state = 1025},
  [926] = {.lex_state = 20},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 25},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
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
  [946] = {.lex_state = 1016},
  [947] = {.lex_state = 1025},
  [948] = {.lex_state = 20},
  [949] = {.lex_state = 25},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 20},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 20},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 20},
  [959] = {.lex_state = 1025},
  [960] = {.lex_state = 1016},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 20},
  [963] = {.lex_state = 20},
  [964] = {.lex_state = 20},
  [965] = {.lex_state = 20},
  [966] = {.lex_state = 20},
  [967] = {.lex_state = 20},
  [968] = {.lex_state = 20},
  [969] = {.lex_state = 20},
  [970] = {.lex_state = 20},
  [971] = {.lex_state = 20},
  [972] = {.lex_state = 20},
  [973] = {.lex_state = 20},
  [974] = {.lex_state = 20},
  [975] = {.lex_state = 20},
  [976] = {.lex_state = 20},
  [977] = {.lex_state = 20},
  [978] = {.lex_state = 20},
  [979] = {.lex_state = 20},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 42},
  [1012] = {.lex_state = 7},
  [1013] = {.lex_state = 7},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
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
    [sym_keyword_cross] = ACTIONS(1),
    [sym_keyword_join] = ACTIONS(1),
    [sym_keyword_lateral] = ACTIONS(1),
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
    [sym_keyword_true] = ACTIONS(1),
    [sym_keyword_false] = ACTIONS(1),
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
    [sym_program] = STATE(1006),
    [sym_statement] = STATE(1001),
    [sym__select_statement] = STATE(999),
    [sym_select] = STATE(615),
    [sym__delete_statement] = STATE(999),
    [sym_delete] = STATE(763),
    [sym__create_statement] = STATE(999),
    [sym_create_table] = STATE(999),
    [sym_create_view] = STATE(999),
    [sym_create_materialized_view] = STATE(999),
    [sym__alter_statement] = STATE(999),
    [sym_alter_table] = STATE(999),
    [sym_alter_view] = STATE(999),
    [sym__drop_statement] = STATE(999),
    [sym_drop_table] = STATE(999),
    [sym_drop_view] = STATE(999),
    [sym__insert_statement] = STATE(999),
    [sym_insert] = STATE(999),
    [sym__update_statement] = STATE(999),
    [sym_update] = STATE(999),
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
    ACTIONS(19), 57,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [71] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      aux_sym_keyword_int_token1,
      aux_sym_keyword_char_token1,
      sym_keyword_json,
      sym_keyword_date,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(23), 57,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [142] = 17,
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
    STATE(343), 1,
      sym_keyword_varchar,
    STATE(352), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(765), 10,
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
  [220] = 17,
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
    STATE(343), 1,
      sym_keyword_varchar,
    STATE(352), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(319), 10,
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
  [298] = 17,
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
    STATE(343), 1,
      sym_keyword_varchar,
    STATE(352), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(807), 10,
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
  [376] = 8,
    ACTIONS(65), 1,
      sym_keyword_as,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(18), 1,
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
    ACTIONS(61), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [426] = 8,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(77), 1,
      sym_keyword_as,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(34), 1,
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
    ACTIONS(73), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [476] = 8,
    ACTIONS(65), 1,
      sym_keyword_as,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(18), 1,
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
    ACTIONS(61), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [526] = 8,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(77), 1,
      sym_keyword_as,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(34), 1,
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
    ACTIONS(73), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [576] = 3,
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
    ACTIONS(25), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [615] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(25), 1,
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
    ACTIONS(85), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [662] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(25), 1,
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
    ACTIONS(85), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [709] = 3,
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
    ACTIONS(21), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [748] = 3,
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
    ACTIONS(25), 17,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [787] = 3,
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
    ACTIONS(21), 17,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [826] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [864] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [900] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(101), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [938] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(103), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [976] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1012] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1050] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1086] = 3,
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
    ACTIONS(115), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1122] = 3,
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
    ACTIONS(119), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1158] = 3,
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
    ACTIONS(123), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1194] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(127), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1232] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(129), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1270] = 3,
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
    ACTIONS(23), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1306] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(131), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1344] = 3,
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
    ACTIONS(19), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1380] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(133), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1418] = 3,
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
    ACTIONS(135), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1454] = 3,
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
    ACTIONS(139), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1490] = 3,
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
    ACTIONS(143), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1526] = 3,
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
    ACTIONS(147), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1562] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(151), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1600] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1638] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1674] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(161), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1710] = 4,
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
    ACTIONS(95), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(163), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1748] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 21,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1784] = 4,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 19,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1821] = 6,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 17,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1862] = 9,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      sym_keyword_in,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [1909] = 11,
    ACTIONS(167), 1,
      sym_keyword_or,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      sym_keyword_in,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1960] = 8,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [2005] = 8,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [2050] = 11,
    ACTIONS(167), 1,
      sym_keyword_or,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [2101] = 9,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [2148] = 4,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 19,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [2185] = 6,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 17,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [2226] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 6,
      sym_keyword_as,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 20,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_desc,
      sym_keyword_asc,
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
  [2261] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(137), 6,
      sym_keyword_as,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 20,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_desc,
      sym_keyword_asc,
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
  [2296] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    STATE(96), 1,
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
  [2340] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(211), 1,
      anon_sym_DOT,
    STATE(85), 1,
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
  [2384] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(85), 1,
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
  [2428] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(96), 1,
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
  [2472] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(96), 1,
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
  [2516] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(85), 1,
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
  [2560] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(93), 1,
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
  [2601] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(223), 1,
      anon_sym_DOT,
    STATE(85), 1,
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
  [2644] = 3,
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
  [2677] = 3,
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
  [2710] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 20,
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
  [2743] = 3,
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
  [2776] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(141), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 20,
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
  [2809] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(93), 1,
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
  [2850] = 3,
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
  [2883] = 3,
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
  [2916] = 3,
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
  [2949] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(93), 1,
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
  [2990] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(96), 1,
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
  [3033] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(161), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 20,
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
  [3066] = 3,
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
  [3099] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(85), 1,
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
  [3142] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(96), 1,
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
  [3185] = 3,
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
  [3218] = 3,
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
  [3251] = 3,
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
  [3283] = 3,
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
  [3315] = 3,
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
  [3347] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    STATE(65), 1,
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
  [3389] = 8,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_as,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(67), 1,
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
  [3431] = 3,
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
  [3463] = 3,
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
  [3495] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(137), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 19,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_offset,
      sym_keyword_as,
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
  [3527] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(93), 1,
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
  [3567] = 3,
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
  [3599] = 3,
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
  [3631] = 8,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_as,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(67), 1,
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
  [3673] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(245), 1,
      anon_sym_DOT,
    STATE(65), 1,
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
  [3715] = 3,
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
  [3747] = 3,
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
  [3779] = 3,
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
  [3811] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 18,
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
  [3843] = 3,
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
  [3875] = 3,
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
  [3907] = 3,
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
  [3939] = 3,
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
  [3971] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 18,
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
  [4003] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(161), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 18,
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
  [4035] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 18,
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
  [4067] = 3,
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
  [4099] = 9,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_as,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
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
    ACTIONS(75), 10,
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
  [4143] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 19,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_offset,
      sym_keyword_as,
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
  [4175] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 18,
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
  [4207] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(93), 1,
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
  [4247] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 18,
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
  [4279] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(78), 1,
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
  [4318] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(78), 1,
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
  [4357] = 3,
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
  [4388] = 3,
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
  [4419] = 6,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(251), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 10,
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
  [4455] = 18,
    ACTIONS(255), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(192), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(724), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(933), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4515] = 18,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(814), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(667), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4575] = 18,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(858), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(667), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4635] = 18,
    ACTIONS(255), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(192), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(724), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(837), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4695] = 17,
    ACTIONS(275), 1,
      sym_keyword_left,
    ACTIONS(277), 1,
      sym_keyword_right,
    ACTIONS(281), 1,
      sym_keyword_join,
    ACTIONS(283), 1,
      sym_keyword_where,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(287), 1,
      sym_keyword_group_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(175), 1,
      sym_index_hint,
    STATE(412), 1,
      sym_where,
    STATE(480), 1,
      sym_group_by,
    STATE(544), 1,
      sym_order_by,
    STATE(706), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(279), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(291), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(293), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(197), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [4753] = 18,
    ACTIONS(255), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(192), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(724), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(953), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4813] = 17,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(295), 1,
      sym_keyword_left,
    ACTIONS(297), 1,
      sym_keyword_right,
    ACTIONS(301), 1,
      sym_keyword_join,
    ACTIONS(303), 1,
      sym_keyword_where,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(191), 1,
      sym_index_hint,
    STATE(403), 1,
      sym_where,
    STATE(482), 1,
      sym_group_by,
    STATE(544), 1,
      sym_order_by,
    STATE(706), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(293), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(299), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(196), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [4871] = 18,
    ACTIONS(255), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(192), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(724), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(957), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4931] = 18,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(1009), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(667), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4991] = 18,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(878), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(667), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5051] = 18,
    ACTIONS(255), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(192), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(724), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(961), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5111] = 18,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(855), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(667), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5171] = 18,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(897), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(667), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5231] = 12,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5278] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(339), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(95), 10,
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
  [5309] = 6,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 12,
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
  [5344] = 4,
    ACTIONS(345), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 14,
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
  [5375] = 17,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(347), 1,
      sym_keyword_distinct,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(992), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5432] = 6,
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
    ACTIONS(167), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 12,
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
  [5467] = 17,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(355), 1,
      sym_keyword_distinct,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(865), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5524] = 9,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
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
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 10,
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
  [5565] = 11,
    ACTIONS(167), 1,
      sym_keyword_or,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
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
    ACTIONS(341), 2,
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
    ACTIONS(165), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [5610] = 8,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
      anon_sym_CARET,
    ACTIONS(359), 1,
      anon_sym_PLUS,
    ACTIONS(361), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 11,
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
  [5649] = 17,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(367), 1,
      sym_keyword_distinct,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(876), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5706] = 6,
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
    ACTIONS(167), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 12,
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
  [5741] = 17,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(369), 1,
      sym_keyword_distinct,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(856), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5798] = 4,
    ACTIONS(335), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 14,
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
  [5829] = 12,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      sym_keyword_in,
    ACTIONS(359), 1,
      anon_sym_PLUS,
    ACTIONS(361), 1,
      anon_sym_DASH,
    ACTIONS(371), 1,
      sym_keyword_and,
    ACTIONS(373), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(341), 2,
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
    ACTIONS(317), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [5876] = 9,
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
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 10,
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
  [5917] = 11,
    ACTIONS(167), 1,
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
    ACTIONS(165), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5962] = 8,
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
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 11,
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
  [6001] = 8,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(375), 1,
      anon_sym_PLUS,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 11,
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
  [6040] = 11,
    ACTIONS(167), 1,
      sym_keyword_or,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(375), 1,
      anon_sym_PLUS,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(379), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(381), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6085] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(95), 10,
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
  [6116] = 9,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(375), 1,
      anon_sym_PLUS,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(379), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 10,
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
  [6157] = 4,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 14,
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
  [6188] = 17,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(387), 1,
      sym_keyword_distinct,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(831), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6245] = 8,
    ACTIONS(391), 1,
      anon_sym_PLUS,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(395), 1,
      anon_sym_SLASH,
    ACTIONS(397), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 10,
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
  [6283] = 16,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(859), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6337] = 6,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(561), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(251), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [6371] = 8,
    ACTIONS(405), 1,
      anon_sym_PLUS,
    ACTIONS(407), 1,
      anon_sym_DASH,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 10,
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
  [6409] = 16,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(836), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6463] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 15,
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
  [6491] = 6,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 11,
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
  [6525] = 11,
    ACTIONS(167), 1,
      sym_keyword_or,
    ACTIONS(391), 1,
      anon_sym_PLUS,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(395), 1,
      anon_sym_SLASH,
    ACTIONS(397), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [6569] = 9,
    ACTIONS(391), 1,
      anon_sym_PLUS,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(395), 1,
      anon_sym_SLASH,
    ACTIONS(397), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6609] = 4,
    ACTIONS(397), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 13,
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
  [6639] = 6,
    ACTIONS(395), 1,
      anon_sym_SLASH,
    ACTIONS(397), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 11,
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
  [6673] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 15,
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
  [6701] = 4,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 13,
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
  [6731] = 16,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(794), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6785] = 3,
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
  [6813] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 15,
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
  [6841] = 9,
    ACTIONS(405), 1,
      anon_sym_PLUS,
    ACTIONS(407), 1,
      anon_sym_DASH,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6881] = 16,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(879), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6935] = 16,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(1015), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6989] = 11,
    ACTIONS(167), 1,
      sym_keyword_or,
    ACTIONS(405), 1,
      anon_sym_PLUS,
    ACTIONS(407), 1,
      anon_sym_DASH,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(429), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(427), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7033] = 16,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(105), 1,
      sym_identifier,
    STATE(206), 1,
      sym_literal,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(209), 2,
      sym_field,
      sym_predicate,
    STATE(943), 2,
      sym_function_call,
      sym__function_param,
    STATE(252), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [7087] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 15,
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
  [7115] = 10,
    ACTIONS(433), 1,
      sym_keyword_in,
    ACTIONS(439), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_DASH,
    ACTIONS(443), 1,
      anon_sym_SLASH,
    ACTIONS(445), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(447), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(435), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7156] = 15,
    ACTIONS(275), 1,
      sym_keyword_left,
    ACTIONS(277), 1,
      sym_keyword_right,
    ACTIONS(281), 1,
      sym_keyword_join,
    ACTIONS(283), 1,
      sym_keyword_where,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(287), 1,
      sym_keyword_group_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(427), 1,
      sym_where,
    STATE(496), 1,
      sym_group_by,
    STATE(500), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(279), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(449), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(190), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7207] = 4,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 13,
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
  [7236] = 6,
    ACTIONS(443), 1,
      anon_sym_SLASH,
    ACTIONS(445), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 11,
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
  [7269] = 4,
    ACTIONS(445), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 13,
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
  [7298] = 8,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 10,
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
  [7335] = 9,
    ACTIONS(433), 1,
      sym_keyword_in,
    ACTIONS(439), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_DASH,
    ACTIONS(443), 1,
      anon_sym_SLASH,
    ACTIONS(445), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7374] = 9,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7413] = 8,
    ACTIONS(439), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_DASH,
    ACTIONS(443), 1,
      anon_sym_SLASH,
    ACTIONS(445), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 10,
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
  [7450] = 17,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(463), 1,
      sym_keyword_distinct,
    ACTIONS(465), 1,
      sym_keyword_count,
    ACTIONS(467), 1,
      anon_sym_STAR,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(351), 1,
      sym_identifier,
    STATE(418), 1,
      sym__count_function,
    STATE(422), 1,
      sym_invocation,
    STATE(517), 1,
      sym_literal,
    STATE(597), 1,
      sym__field_list,
    STATE(600), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(516), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7505] = 17,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(467), 1,
      anon_sym_STAR,
    ACTIONS(473), 1,
      sym_keyword_distinct,
    ACTIONS(475), 1,
      sym_keyword_count,
    ACTIONS(477), 1,
      anon_sym_BQUOTE,
    ACTIONS(479), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(358), 1,
      sym_identifier,
    STATE(415), 1,
      sym__count_function,
    STATE(423), 1,
      sym_invocation,
    STATE(517), 1,
      sym_literal,
    STATE(597), 1,
      sym__field_list,
    STATE(600), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(538), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7560] = 12,
    ACTIONS(405), 1,
      anon_sym_PLUS,
    ACTIONS(407), 1,
      anon_sym_DASH,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      sym_keyword_in,
    ACTIONS(481), 1,
      sym_keyword_and,
    ACTIONS(483), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(429), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(427), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7605] = 17,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(467), 1,
      anon_sym_STAR,
    ACTIONS(475), 1,
      sym_keyword_count,
    ACTIONS(477), 1,
      anon_sym_BQUOTE,
    ACTIONS(479), 1,
      sym__identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(358), 1,
      sym_identifier,
    STATE(415), 1,
      sym__count_function,
    STATE(423), 1,
      sym_invocation,
    STATE(517), 1,
      sym_literal,
    STATE(593), 1,
      sym_select_expression,
    STATE(597), 1,
      sym__field_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(538), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7660] = 6,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(453), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 11,
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
  [7693] = 15,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(295), 1,
      sym_keyword_left,
    ACTIONS(297), 1,
      sym_keyword_right,
    ACTIONS(301), 1,
      sym_keyword_join,
    ACTIONS(303), 1,
      sym_keyword_where,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(421), 1,
      sym_where,
    STATE(498), 1,
      sym_group_by,
    STATE(502), 1,
      sym_order_by,
    STATE(639), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(299), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(487), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(264), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7744] = 8,
    ACTIONS(493), 1,
      sym_keyword_as,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(489), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [7781] = 15,
    ACTIONS(275), 1,
      sym_keyword_left,
    ACTIONS(277), 1,
      sym_keyword_right,
    ACTIONS(281), 1,
      sym_keyword_join,
    ACTIONS(283), 1,
      sym_keyword_where,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(287), 1,
      sym_keyword_group_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(428), 1,
      sym_where,
    STATE(487), 1,
      sym_group_by,
    STATE(502), 1,
      sym_order_by,
    STATE(639), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(279), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(487), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(263), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7832] = 15,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(295), 1,
      sym_keyword_left,
    ACTIONS(297), 1,
      sym_keyword_right,
    ACTIONS(301), 1,
      sym_keyword_join,
    ACTIONS(303), 1,
      sym_keyword_where,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(420), 1,
      sym_where,
    STATE(491), 1,
      sym_group_by,
    STATE(500), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(299), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(449), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(188), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7883] = 6,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [7916] = 17,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(465), 1,
      sym_keyword_count,
    ACTIONS(467), 1,
      anon_sym_STAR,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__literal_string,
    STATE(351), 1,
      sym_identifier,
    STATE(418), 1,
      sym__count_function,
    STATE(422), 1,
      sym_invocation,
    STATE(517), 1,
      sym_literal,
    STATE(593), 1,
      sym_select_expression,
    STATE(597), 1,
      sym__field_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(516), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7971] = 10,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(453), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(507), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(505), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8012] = 8,
    ACTIONS(493), 1,
      sym_keyword_as,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(509), 1,
      anon_sym_DOT,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(489), 10,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [8049] = 15,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(295), 1,
      sym_keyword_left,
    ACTIONS(297), 1,
      sym_keyword_right,
    ACTIONS(301), 1,
      sym_keyword_join,
    ACTIONS(303), 1,
      sym_keyword_where,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(420), 1,
      sym_where,
    STATE(491), 1,
      sym_group_by,
    STATE(500), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(299), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(449), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(264), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [8100] = 15,
    ACTIONS(275), 1,
      sym_keyword_left,
    ACTIONS(277), 1,
      sym_keyword_right,
    ACTIONS(281), 1,
      sym_keyword_join,
    ACTIONS(283), 1,
      sym_keyword_where,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(287), 1,
      sym_keyword_group_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(427), 1,
      sym_where,
    STATE(496), 1,
      sym_group_by,
    STATE(500), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(279), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(449), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(263), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [8151] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 3,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [8180] = 11,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(453), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(507), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(511), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(513), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(505), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8222] = 16,
    ACTIONS(515), 1,
      sym_keyword_count,
    ACTIONS(517), 1,
      anon_sym_STAR,
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
    STATE(54), 1,
      sym__literal_string,
    STATE(328), 1,
      sym_identifier,
    STATE(345), 1,
      sym_invocation,
    STATE(348), 1,
      sym__count_function,
    STATE(443), 1,
      sym__field_list,
    STATE(451), 1,
      sym_literal,
    STATE(583), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(455), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8274] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(533), 1,
      sym_keyword_as,
    STATE(220), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(531), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(529), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8308] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(533), 1,
      sym_keyword_as,
    STATE(220), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(531), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(529), 10,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
  [8342] = 16,
    ACTIONS(517), 1,
      anon_sym_STAR,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(535), 1,
      sym_keyword_count,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(320), 1,
      sym_identifier,
    STATE(346), 1,
      sym__count_function,
    STATE(347), 1,
      sym_invocation,
    STATE(443), 1,
      sym__field_list,
    STATE(451), 1,
      sym_literal,
    STATE(583), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(459), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8394] = 3,
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
    ACTIONS(21), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [8420] = 16,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(467), 1,
      anon_sym_STAR,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(402), 1,
      sym_identifier,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    STATE(597), 1,
      sym__field_list,
    STATE(766), 1,
      sym_literal,
    STATE(867), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(725), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8472] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(501), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [8500] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [8526] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [8552] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(501), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(93), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 11,
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
  [8580] = 3,
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
    ACTIONS(25), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [8606] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [8629] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(20), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8672] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(32), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(549), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8715] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(19), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(551), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8758] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(38), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(553), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8801] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(17), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(555), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8844] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(30), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(557), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8887] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(28), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(559), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8930] = 11,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(453), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(507), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(511), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(505), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8971] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(561), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [8994] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(28), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(559), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9037] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(27), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(563), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9080] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(37), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(565), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9123] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(41), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(567), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9166] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(17), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(555), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9209] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(32), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(549), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9252] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(20), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9295] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(22), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(569), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9338] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(27), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(563), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9381] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(30), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(557), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9424] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(38), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(553), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9467] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(571), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [9490] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(19), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(551), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9533] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(22), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(569), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9576] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(37), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(565), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9619] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(41), 1,
      sym_predicate,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(567), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(241), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9662] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [9685] = 10,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(375), 1,
      anon_sym_PLUS,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(379), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(575), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(381), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9723] = 11,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(62), 1,
      sym_identifier,
    STATE(479), 1,
      sym_where_expression,
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
  [9763] = 11,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(585), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(60), 1,
      sym_identifier,
    STATE(479), 1,
      sym_where_expression,
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
  [9803] = 10,
    ACTIONS(169), 1,
      anon_sym_CARET,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(587), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(589), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(181), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9841] = 11,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(479), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(219), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9881] = 10,
    ACTIONS(405), 1,
      anon_sym_PLUS,
    ACTIONS(407), 1,
      anon_sym_DASH,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(429), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(427), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9919] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 15,
      sym_keyword_from,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [9941] = 11,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(56), 1,
      sym_identifier,
    STATE(479), 1,
      sym_where_expression,
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
  [9981] = 10,
    ACTIONS(433), 1,
      sym_keyword_in,
    ACTIONS(439), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_DASH,
    ACTIONS(443), 1,
      anon_sym_SLASH,
    ACTIONS(445), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(447), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(599), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(435), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10019] = 10,
    ACTIONS(391), 1,
      anon_sym_PLUS,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(395), 1,
      anon_sym_SLASH,
    ACTIONS(397), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(601), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(417), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10057] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(154), 1,
      sym_predicate,
    STATE(676), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10099] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(603), 15,
      sym_keyword_from,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
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
  [10121] = 12,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(114), 1,
      sym_predicate,
    STATE(435), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10163] = 10,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(605), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(607), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(197), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10201] = 10,
    ACTIONS(451), 1,
      anon_sym_CARET,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(457), 1,
      anon_sym_DASH,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(453), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(507), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(511), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(505), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10239] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      anon_sym_BQUOTE,
    ACTIONS(611), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(57), 1,
      sym_identifier,
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
  [10276] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(621), 1,
      anon_sym_BQUOTE,
    ACTIONS(623), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(33), 1,
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
  [10313] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(625), 1,
      anon_sym_BQUOTE,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(91), 1,
      sym_identifier,
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
  [10350] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(585), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(60), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(131), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10387] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
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
  [10424] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(103), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10461] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(625), 1,
      anon_sym_BQUOTE,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(91), 1,
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
  [10498] = 11,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(198), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10537] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(62), 1,
      sym_identifier,
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
  [10574] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(625), 1,
      anon_sym_BQUOTE,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(91), 1,
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
  [10611] = 7,
    ACTIONS(629), 1,
      sym_keyword_left,
    ACTIONS(632), 1,
      sym_keyword_right,
    ACTIONS(638), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(635), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(263), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
    ACTIONS(641), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10642] = 7,
    ACTIONS(643), 1,
      sym_keyword_left,
    ACTIONS(646), 1,
      sym_keyword_right,
    ACTIONS(652), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(264), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
    ACTIONS(641), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10673] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(585), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(60), 1,
      sym_identifier,
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
  [10710] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(585), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(60), 1,
      sym_identifier,
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
  [10747] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(625), 1,
      anon_sym_BQUOTE,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(91), 1,
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
  [10784] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(585), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(60), 1,
      sym_identifier,
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
  [10821] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(62), 1,
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
  [10858] = 11,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(148), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(247), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10897] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(625), 1,
      anon_sym_BQUOTE,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(91), 1,
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
  [10934] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
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
  [10971] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(62), 1,
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
  [11008] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
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
  [11045] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
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
  [11082] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(62), 1,
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
  [11119] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(76), 1,
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
  [11156] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(62), 1,
      sym_identifier,
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
  [11193] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
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
  [11230] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
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
  [11267] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
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
  [11304] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(621), 1,
      anon_sym_BQUOTE,
    ACTIONS(623), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(33), 1,
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
  [11341] = 10,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(625), 1,
      anon_sym_BQUOTE,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(91), 1,
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
  [11378] = 11,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(148), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(243), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11417] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(585), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(60), 1,
      sym_identifier,
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
  [11454] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      anon_sym_BQUOTE,
    ACTIONS(611), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(57), 1,
      sym_identifier,
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
  [11491] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(621), 1,
      anon_sym_BQUOTE,
    ACTIONS(623), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(33), 1,
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
  [11528] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(76), 1,
      sym_identifier,
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
  [11565] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(76), 1,
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
  [11602] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(76), 1,
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
  [11639] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(76), 1,
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
  [11676] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      anon_sym_BQUOTE,
    ACTIONS(611), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(57), 1,
      sym_identifier,
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
  [11713] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      anon_sym_BQUOTE,
    ACTIONS(611), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(57), 1,
      sym_identifier,
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
  [11750] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(103), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11787] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(621), 1,
      anon_sym_BQUOTE,
    ACTIONS(623), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(33), 1,
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
  [11824] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      anon_sym_BQUOTE,
    ACTIONS(611), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(57), 1,
      sym_identifier,
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
  [11861] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      anon_sym_BQUOTE,
    ACTIONS(611), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(103), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11898] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(621), 1,
      anon_sym_BQUOTE,
    ACTIONS(623), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(33), 1,
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
  [11935] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(585), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(60), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(103), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11972] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(33), 1,
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
  [12009] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(33), 1,
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
  [12046] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(33), 1,
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
  [12083] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(33), 1,
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
  [12120] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(33), 1,
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
  [12157] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(33), 1,
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
  [12194] = 10,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym__number,
    ACTIONS(621), 1,
      anon_sym_BQUOTE,
    ACTIONS(623), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(33), 1,
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
  [12231] = 11,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    STATE(87), 1,
      sym__literal_string,
    STATE(129), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12270] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(103), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12307] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(56), 1,
      sym_identifier,
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
  [12344] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(56), 1,
      sym_identifier,
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
  [12381] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(56), 1,
      sym_identifier,
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
  [12418] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(56), 1,
      sym_identifier,
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
  [12455] = 10,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym__number,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(54), 1,
      sym__literal_string,
    STATE(56), 1,
      sym_identifier,
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
  [12492] = 3,
    ACTIONS(665), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(663), 12,
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
  [12514] = 9,
    ACTIONS(667), 1,
      sym_keyword_set,
    ACTIONS(669), 1,
      sym_keyword_alter,
    ACTIONS(671), 1,
      sym_keyword_drop,
    ACTIONS(673), 1,
      sym_keyword_add,
    ACTIONS(675), 1,
      sym_keyword_rename,
    ACTIONS(677), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(716), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(899), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12548] = 9,
    ACTIONS(667), 1,
      sym_keyword_set,
    ACTIONS(669), 1,
      sym_keyword_alter,
    ACTIONS(671), 1,
      sym_keyword_drop,
    ACTIONS(673), 1,
      sym_keyword_add,
    ACTIONS(675), 1,
      sym_keyword_rename,
    ACTIONS(677), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(702), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(819), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12582] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(679), 13,
      sym_keyword_values,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12602] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(681), 13,
      sym_keyword_values,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12622] = 10,
    ACTIONS(685), 1,
      sym_keyword_primary,
    ACTIONS(687), 1,
      sym_keyword_not,
    ACTIONS(689), 1,
      sym_keyword_auto_increment,
    ACTIONS(691), 1,
      sym_keyword_default,
    STATE(484), 1,
      sym__primary_key,
    STATE(642), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(391), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(693), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12658] = 9,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_as,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(697), 1,
      anon_sym_DOT,
    STATE(67), 1,
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
  [12691] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12710] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12729] = 13,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(699), 1,
      sym_keyword_primary,
    ACTIONS(701), 1,
      sym_keyword_key,
    ACTIONS(703), 1,
      sym_keyword_constraint,
    STATE(5), 1,
      sym_identifier,
    STATE(621), 1,
      sym_constraint,
    STATE(761), 1,
      sym__key_constraint,
    STATE(764), 1,
      sym__primary_key_constraint,
    STATE(767), 1,
      sym__constraint_literal,
    STATE(771), 1,
      sym_column_definition,
    STATE(772), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12770] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12789] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12808] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12827] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12846] = 9,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_as,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_DOT,
    STATE(67), 1,
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
  [12879] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12898] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(131), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12917] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12936] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12955] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 12,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12974] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(709), 12,
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
  [12993] = 3,
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
  [13013] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(711), 1,
      anon_sym_DOT,
    STATE(65), 1,
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
  [13043] = 3,
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
  [13063] = 4,
    ACTIONS(715), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(717), 1,
      aux_sym_keyword_timestamp_token2,
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
  [13085] = 3,
    ACTIONS(721), 1,
      aux_sym_keyword_varchar_token2,
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
  [13105] = 3,
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
  [13125] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(723), 1,
      anon_sym_DOT,
    STATE(65), 1,
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
  [13155] = 3,
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
  [13175] = 3,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(725), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13194] = 3,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(729), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13213] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(735), 1,
      sym_keyword_as,
    STATE(397), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(733), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(737), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13240] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(741), 1,
      sym_keyword_as,
    STATE(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(739), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13267] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(735), 1,
      sym_keyword_as,
    STATE(397), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(737), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(733), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13294] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(741), 1,
      sym_keyword_as,
    STATE(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(739), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(743), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13321] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(78), 1,
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
  [13348] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(745), 10,
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
  [13365] = 9,
    ACTIONS(73), 1,
      sym_keyword_from,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(747), 1,
      sym_keyword_as,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13396] = 3,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
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
  [13415] = 3,
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
  [13434] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(78), 1,
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
  [13461] = 3,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
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
  [13480] = 3,
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
  [13499] = 3,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
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
  [13518] = 9,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(747), 1,
      sym_keyword_as,
    ACTIONS(765), 1,
      anon_sym_LPAREN,
    ACTIONS(767), 1,
      anon_sym_DOT,
    STATE(67), 1,
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
  [13549] = 2,
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
  [13566] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(769), 10,
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
  [13583] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13599] = 2,
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
  [13615] = 8,
    ACTIONS(61), 1,
      sym_keyword_from,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(775), 1,
      sym_keyword_as,
    ACTIONS(777), 1,
      anon_sym_DOT,
    STATE(65), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13643] = 3,
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
  [13661] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(779), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13677] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(783), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(781), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13695] = 8,
    ACTIONS(535), 1,
      sym_keyword_count,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(320), 1,
      sym_identifier,
    STATE(346), 1,
      sym__count_function,
    STATE(347), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(426), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [13723] = 3,
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
  [13741] = 8,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(775), 1,
      sym_keyword_as,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(65), 1,
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
  [13769] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(789), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(787), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13787] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(791), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13803] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(795), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(793), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13821] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(797), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13839] = 8,
    ACTIONS(493), 1,
      sym_keyword_as,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(801), 1,
      anon_sym_DOT,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(491), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [13867] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13883] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(805), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13899] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(807), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13915] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(789), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(787), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13933] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(811), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(809), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13951] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(813), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13967] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(797), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13985] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(815), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14001] = 8,
    ACTIONS(465), 1,
      sym_keyword_count,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    STATE(351), 1,
      sym_identifier,
    STATE(418), 1,
      sym__count_function,
    STATE(422), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(426), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [14029] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(811), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(809), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [14047] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(783), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(781), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14065] = 8,
    ACTIONS(257), 1,
      sym_keyword_count,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(402), 1,
      sym_identifier,
    STATE(466), 1,
      sym__count_function,
    STATE(467), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(426), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [14093] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(795), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(793), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [14111] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(817), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14127] = 8,
    ACTIONS(475), 1,
      sym_keyword_count,
    ACTIONS(477), 1,
      anon_sym_BQUOTE,
    ACTIONS(479), 1,
      sym__identifier,
    STATE(358), 1,
      sym_identifier,
    STATE(415), 1,
      sym__count_function,
    STATE(423), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(426), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [14155] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(819), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14171] = 7,
    ACTIONS(685), 1,
      sym_keyword_primary,
    ACTIONS(821), 1,
      sym_keyword_auto_increment,
    STATE(464), 1,
      sym__primary_key,
    STATE(722), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(823), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14197] = 8,
    ACTIONS(515), 1,
      sym_keyword_count,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(328), 1,
      sym_identifier,
    STATE(345), 1,
      sym_invocation,
    STATE(348), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(426), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [14225] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(825), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14241] = 7,
    ACTIONS(493), 1,
      sym_keyword_as,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(827), 1,
      anon_sym_DOT,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [14267] = 6,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(533), 1,
      sym_keyword_as,
    STATE(220), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(529), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [14290] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(533), 1,
      sym_keyword_as,
    STATE(220), 1,
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
  [14315] = 2,
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
  [14330] = 6,
    ACTIONS(685), 1,
      sym_keyword_primary,
    STATE(464), 1,
      sym__primary_key,
    STATE(722), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(823), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14353] = 9,
    ACTIONS(831), 1,
      sym_keyword_table,
    ACTIONS(833), 1,
      sym_keyword_view,
    ACTIONS(835), 1,
      sym_keyword_materialized,
    ACTIONS(837), 1,
      sym_keyword_or,
    ACTIONS(839), 1,
      sym_keyword_temp,
    ACTIONS(841), 1,
      sym_keyword_temporary,
    STATE(768), 1,
      sym__or_replace,
    STATE(937), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14382] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(843), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14397] = 8,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(845), 1,
      sym_keyword_default,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    STATE(944), 1,
      sym_identifier,
    STATE(989), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(447), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14424] = 8,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(849), 1,
      sym_keyword_as,
    ACTIONS(851), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14451] = 8,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(491), 1,
      sym_group_by,
    STATE(500), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14478] = 8,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(845), 1,
      sym_keyword_default,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    STATE(845), 1,
      sym_table_options,
    STATE(944), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(447), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14505] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(855), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14520] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(857), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14535] = 6,
    ACTIONS(685), 1,
      sym_keyword_primary,
    STATE(489), 1,
      sym__primary_key,
    STATE(622), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(859), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14558] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(861), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14573] = 8,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(845), 1,
      sym_keyword_default,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    STATE(889), 1,
      sym_table_options,
    STATE(944), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(447), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14600] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(865), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14615] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(867), 1,
      sym_keyword_as,
    STATE(78), 1,
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
  [14640] = 8,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(287), 1,
      sym_keyword_group_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(496), 1,
      sym_group_by,
    STATE(500), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14667] = 3,
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
  [14684] = 7,
    ACTIONS(85), 1,
      sym_keyword_from,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(867), 1,
      sym_keyword_as,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14709] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(869), 1,
      sym_keyword_as,
    STATE(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(739), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(743), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14734] = 8,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(620), 1,
      sym_table_reference,
    STATE(940), 1,
      sym__table_references,
    STATE(942), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(941), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [14761] = 3,
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
  [14778] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(739), 1,
      sym_keyword_from,
    ACTIONS(869), 1,
      sym_keyword_as,
    STATE(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14803] = 3,
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
  [14820] = 8,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(498), 1,
      sym_group_by,
    STATE(502), 1,
      sym_order_by,
    STATE(639), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14847] = 8,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(473), 1,
      sym_group_by,
    STATE(529), 1,
      sym_order_by,
    STATE(699), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(873), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14874] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(733), 1,
      sym_keyword_from,
    ACTIONS(875), 1,
      sym_keyword_as,
    STATE(397), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(737), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14899] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(875), 1,
      sym_keyword_as,
    STATE(397), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(733), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(737), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14924] = 9,
    ACTIONS(685), 1,
      sym_keyword_primary,
    ACTIONS(877), 1,
      sym_keyword_key,
    ACTIONS(879), 1,
      sym_keyword_constraint,
    STATE(761), 1,
      sym__key_constraint,
    STATE(764), 1,
      sym__primary_key_constraint,
    STATE(767), 1,
      sym__constraint_literal,
    STATE(772), 1,
      sym__primary_key,
    STATE(780), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14953] = 3,
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
  [14970] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(881), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14985] = 8,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(287), 1,
      sym_keyword_group_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(487), 1,
      sym_group_by,
    STATE(502), 1,
      sym_order_by,
    STATE(639), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15012] = 8,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(287), 1,
      sym_keyword_group_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(485), 1,
      sym_group_by,
    STATE(529), 1,
      sym_order_by,
    STATE(699), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(873), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15039] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(789), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(787), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15055] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(461), 1,
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
  [15073] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(787), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(789), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15089] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(797), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(799), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15105] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(795), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(793), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15121] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    STATE(87), 1,
      sym__literal_string,
    STATE(739), 1,
      sym_literal,
    STATE(740), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15147] = 8,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(887), 1,
      sym_keyword_where,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    STATE(536), 1,
      sym_where,
    STATE(742), 1,
      sym_order_by,
    STATE(833), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15173] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    STATE(87), 1,
      sym__literal_string,
    STATE(662), 1,
      sym_select,
    STATE(690), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15199] = 5,
    ACTIONS(667), 1,
      sym_keyword_set,
    ACTIONS(675), 1,
      sym_keyword_rename,
    ACTIONS(677), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(888), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [15219] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(793), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(795), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15235] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(809), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(811), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15251] = 7,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(891), 1,
      sym_keyword_as,
    ACTIONS(893), 1,
      anon_sym_DOT,
    STATE(65), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15275] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(895), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15289] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(897), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15303] = 4,
    STATE(599), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(899), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15321] = 5,
    ACTIONS(667), 1,
      sym_keyword_set,
    ACTIONS(675), 1,
      sym_keyword_rename,
    ACTIONS(677), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(818), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [15341] = 7,
    ACTIONS(901), 1,
      sym_keyword_default,
    ACTIONS(904), 1,
      anon_sym_SEMI,
    ACTIONS(906), 1,
      anon_sym_BQUOTE,
    ACTIONS(909), 1,
      sym__identifier,
    STATE(944), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(445), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [15365] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(781), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(783), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15381] = 7,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(845), 1,
      sym_keyword_default,
    ACTIONS(912), 1,
      anon_sym_SEMI,
    STATE(944), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(445), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [15405] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(797), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15421] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(914), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15435] = 3,
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
  [15451] = 3,
    ACTIONS(918), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(916), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15467] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(783), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(781), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15483] = 4,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    STATE(453), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(881), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15501] = 4,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(453), 1,
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
  [15519] = 4,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(916), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15537] = 3,
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
  [15553] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    STATE(87), 1,
      sym__literal_string,
    STATE(724), 1,
      sym_select,
    STATE(726), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15579] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(811), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(809), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15595] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(916), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15613] = 8,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(887), 1,
      sym_keyword_where,
    ACTIONS(925), 1,
      anon_sym_SEMI,
    STATE(542), 1,
      sym_where,
    STATE(721), 1,
      sym_order_by,
    STATE(932), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15639] = 4,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(881), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15657] = 4,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(930), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [15674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(932), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15687] = 4,
    STATE(622), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(859), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15704] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(934), 1,
      sym_keyword_if,
    STATE(314), 1,
      sym_identifier,
    STATE(568), 1,
      sym__if_not_exists,
    STATE(931), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15727] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(936), 1,
      sym_keyword_as,
    STATE(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15748] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(938), 1,
      sym_keyword_as,
    STATE(397), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(737), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15769] = 4,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [15786] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(943), 1,
      sym_keyword_if,
    STATE(314), 1,
      sym_identifier,
    STATE(444), 1,
      sym_table_reference,
    STATE(575), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15809] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(515), 2,
      sym_invocation,
      sym_subquery,
  [15830] = 4,
    ACTIONS(951), 1,
      sym_keyword_having,
    STATE(511), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(949), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15847] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(524), 2,
      sym_invocation,
      sym_subquery,
  [15868] = 6,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    STATE(535), 1,
      sym_order_by,
    STATE(654), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(953), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15889] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(541), 2,
      sym_invocation,
      sym_subquery,
  [15910] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(510), 2,
      sym_invocation,
      sym_subquery,
  [15931] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(934), 1,
      sym_keyword_if,
    STATE(5), 1,
      sym_identifier,
    STATE(591), 1,
      sym__if_not_exists,
    STATE(787), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15954] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(934), 1,
      sym_keyword_if,
    STATE(314), 1,
      sym_identifier,
    STATE(554), 1,
      sym__if_not_exists,
    STATE(830), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15977] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(955), 1,
      sym_keyword_as,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15998] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(957), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16011] = 6,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(500), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16032] = 5,
    ACTIONS(669), 1,
      sym_keyword_alter,
    ACTIONS(671), 1,
      sym_keyword_drop,
    ACTIONS(673), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(804), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [16051] = 6,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    STATE(500), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16072] = 7,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(934), 1,
      sym_keyword_if,
    STATE(584), 1,
      sym__if_not_exists,
    STATE(727), 1,
      sym_identifier,
    STATE(785), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16095] = 4,
    STATE(722), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(823), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16112] = 6,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(535), 1,
      sym_order_by,
    STATE(654), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(953), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16133] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(934), 1,
      sym_keyword_if,
    STATE(314), 1,
      sym_identifier,
    STATE(582), 1,
      sym__if_not_exists,
    STATE(871), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16156] = 6,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(529), 1,
      sym_order_by,
    STATE(699), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(873), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16177] = 7,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(934), 1,
      sym_keyword_if,
    STATE(577), 1,
      sym__if_not_exists,
    STATE(727), 1,
      sym_identifier,
    STATE(809), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16200] = 4,
    STATE(619), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(959), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16217] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(943), 1,
      sym_keyword_if,
    STATE(314), 1,
      sym_identifier,
    STATE(316), 1,
      sym_table_reference,
    STATE(549), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16240] = 6,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    STATE(502), 1,
      sym_order_by,
    STATE(639), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16261] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(943), 1,
      sym_keyword_if,
    STATE(314), 1,
      sym_identifier,
    STATE(572), 1,
      sym__if_exists,
    STATE(800), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16284] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(508), 2,
      sym_invocation,
      sym_subquery,
  [16305] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(943), 1,
      sym_keyword_if,
    STATE(314), 1,
      sym_identifier,
    STATE(571), 1,
      sym__if_exists,
    STATE(797), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16328] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(507), 2,
      sym_invocation,
      sym_subquery,
  [16349] = 6,
    ACTIONS(285), 1,
      sym_keyword_order_by,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(502), 1,
      sym_order_by,
    STATE(639), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16370] = 7,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(934), 1,
      sym_keyword_if,
    STATE(314), 1,
      sym_identifier,
    STATE(550), 1,
      sym__if_not_exists,
    STATE(844), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16393] = 6,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    STATE(529), 1,
      sym_order_by,
    STATE(699), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(873), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16414] = 4,
    ACTIONS(961), 1,
      sym_keyword_having,
    STATE(511), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(949), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16431] = 4,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(639), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16447] = 6,
    ACTIONS(963), 1,
      sym_keyword_lateral,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    STATE(394), 1,
      sym_identifier,
    STATE(528), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16467] = 4,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(699), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(873), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16483] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(969), 1,
      sym_keyword_lateral,
    STATE(394), 1,
      sym_identifier,
    STATE(509), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16503] = 6,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    STATE(87), 1,
      sym__literal_string,
    STATE(698), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16523] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(971), 1,
      sym_keyword_lateral,
    STATE(394), 1,
      sym_identifier,
    STATE(512), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16543] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(973), 1,
      sym_keyword_lateral,
    STATE(394), 1,
      sym_identifier,
    STATE(513), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16563] = 6,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(975), 1,
      sym_keyword_on,
    ACTIONS(977), 1,
      sym_keyword_as,
    STATE(994), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16583] = 6,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(979), 1,
      sym_keyword_on,
    ACTIONS(981), 1,
      sym_keyword_as,
    STATE(993), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16603] = 5,
    ACTIONS(983), 1,
      sym_keyword_on,
    ACTIONS(985), 1,
      sym_keyword_using,
    STATE(755), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16621] = 6,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(987), 1,
      sym_keyword_on,
    ACTIONS(989), 1,
      sym_keyword_as,
    STATE(990), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16641] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(991), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16653] = 5,
    ACTIONS(993), 1,
      sym_keyword_on,
    ACTIONS(995), 1,
      sym_keyword_using,
    STATE(756), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16671] = 5,
    ACTIONS(997), 1,
      sym_keyword_on,
    ACTIONS(999), 1,
      sym_keyword_using,
    STATE(760), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16689] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1001), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16701] = 6,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(1003), 1,
      sym_keyword_on,
    ACTIONS(1005), 1,
      sym_keyword_as,
    STATE(826), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16721] = 4,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(916), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16737] = 3,
    ACTIONS(1009), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(916), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16751] = 6,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(607), 1,
      sym_table_reference,
    STATE(886), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16771] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(781), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(783), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [16785] = 5,
    ACTIONS(995), 1,
      sym_keyword_using,
    ACTIONS(1011), 1,
      sym_keyword_on,
    STATE(808), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16803] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(1013), 1,
      sym_keyword_lateral,
    STATE(394), 1,
      sym_identifier,
    STATE(522), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16823] = 5,
    ACTIONS(985), 1,
      sym_keyword_using,
    ACTIONS(1015), 1,
      sym_keyword_on,
    STATE(798), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16841] = 4,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(537), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(883), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16857] = 6,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(1017), 1,
      sym_keyword_on,
    ACTIONS(1019), 1,
      sym_keyword_as,
    STATE(866), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16877] = 6,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    STATE(87), 1,
      sym__literal_string,
    STATE(775), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16897] = 4,
    ACTIONS(1021), 1,
      sym_keyword_offset,
    STATE(641), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1023), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16913] = 4,
    STATE(762), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(1025), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16929] = 5,
    ACTIONS(999), 1,
      sym_keyword_using,
    ACTIONS(1027), 1,
      sym_keyword_on,
    STATE(782), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16947] = 4,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(654), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(953), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16963] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(797), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(799), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [16977] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(1029), 1,
      sym_keyword_lateral,
    STATE(394), 1,
      sym_identifier,
    STATE(520), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16997] = 6,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(943), 1,
      sym_keyword_if,
    STATE(665), 1,
      sym__if_exists,
    STATE(812), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17017] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(787), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(789), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [17031] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(809), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(811), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [17045] = 4,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(617), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1031), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17061] = 6,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(1033), 1,
      anon_sym_SEMI,
    STATE(681), 1,
      sym_order_by,
    STATE(843), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17081] = 4,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
    STATE(537), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(881), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17097] = 4,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    STATE(545), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(916), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [17113] = 6,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    STATE(87), 1,
      sym__literal_string,
    STATE(726), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17133] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(793), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(795), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [17147] = 6,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(1040), 1,
      sym_keyword_on,
    ACTIONS(1042), 1,
      sym_keyword_as,
    STATE(1010), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17167] = 6,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    STATE(628), 1,
      sym_order_by,
    STATE(834), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17187] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    STATE(543), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(881), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [17203] = 4,
    ACTIONS(289), 1,
      sym_keyword_limit,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17219] = 4,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    STATE(543), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(883), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [17235] = 6,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym__number,
    STATE(87), 1,
      sym__literal_string,
    STATE(526), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17255] = 6,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 1,
      sym__identifier,
    ACTIONS(1049), 1,
      sym_keyword_column,
    ACTIONS(1051), 1,
      sym_keyword_to,
    STATE(891), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17275] = 4,
    ACTIONS(1053), 1,
      sym_keyword_from,
    STATE(945), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17290] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(315), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17307] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(904), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17324] = 5,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(1055), 1,
      anon_sym_STAR,
    ACTIONS(1057), 1,
      sym__identifier,
    STATE(354), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17341] = 5,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(1059), 1,
      anon_sym_STAR,
    ACTIONS(1061), 1,
      sym__identifier,
    STATE(440), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17358] = 5,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1063), 1,
      sym__identifier,
    STATE(394), 1,
      sym_identifier,
    STATE(509), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17375] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(931), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17392] = 5,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(1057), 1,
      sym__identifier,
    ACTIONS(1059), 1,
      anon_sym_STAR,
    STATE(336), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17409] = 5,
    ACTIONS(477), 1,
      anon_sym_BQUOTE,
    ACTIONS(1059), 1,
      anon_sym_STAR,
    ACTIONS(1065), 1,
      sym__identifier,
    STATE(369), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17426] = 4,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    STATE(557), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [17441] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1070), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17452] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(565), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17469] = 5,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    ACTIONS(1055), 1,
      anon_sym_STAR,
    STATE(414), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17486] = 4,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(557), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(930), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [17501] = 5,
    ACTIONS(477), 1,
      anon_sym_BQUOTE,
    ACTIONS(1055), 1,
      anon_sym_STAR,
    ACTIONS(1065), 1,
      sym__identifier,
    STATE(411), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17518] = 5,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(738), 1,
      sym__column_without_order,
    STATE(751), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17535] = 5,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(1059), 1,
      anon_sym_STAR,
    ACTIONS(1072), 1,
      sym__identifier,
    STATE(341), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17552] = 5,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    STATE(590), 1,
      aux_sym_column_definitions_repeat1,
    STATE(847), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17569] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1078), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1080), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17582] = 5,
    ACTIONS(1082), 1,
      anon_sym_BQUOTE,
    ACTIONS(1084), 1,
      sym__identifier,
    STATE(119), 1,
      sym_table_expression,
    STATE(195), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17599] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(854), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17616] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(771), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17633] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1086), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1088), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17646] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(790), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17663] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(792), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17680] = 5,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(1055), 1,
      anon_sym_STAR,
    ACTIONS(1061), 1,
      sym__identifier,
    STATE(478), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17697] = 5,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(727), 1,
      sym_identifier,
    STATE(861), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17714] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(437), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17731] = 5,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1090), 1,
      sym__identifier,
    STATE(527), 1,
      sym_identifier,
    STATE(652), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17748] = 5,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(727), 1,
      sym_identifier,
    STATE(774), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17765] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [17778] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [17791] = 5,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1063), 1,
      sym__identifier,
    STATE(394), 1,
      sym_identifier,
    STATE(520), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17808] = 5,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(1055), 1,
      anon_sym_STAR,
    ACTIONS(1072), 1,
      sym__identifier,
    STATE(349), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17825] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(844), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17842] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1092), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17853] = 5,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(727), 1,
      sym_identifier,
    STATE(809), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17870] = 3,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [17883] = 5,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(751), 1,
      sym_identifier,
    STATE(773), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17900] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(314), 1,
      sym_identifier,
    STATE(813), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17917] = 5,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    ACTIONS(1059), 1,
      anon_sym_STAR,
    STATE(363), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17934] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1094), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1096), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17947] = 5,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_column_definitions_repeat1,
    STATE(991), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17964] = 5,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(811), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17981] = 4,
    ACTIONS(1100), 1,
      sym_keyword_from,
    STATE(769), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1102), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [17996] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1104), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18007] = 5,
    ACTIONS(1106), 1,
      anon_sym_BQUOTE,
    ACTIONS(1108), 1,
      sym__identifier,
    STATE(374), 1,
      sym_identifier,
    STATE(460), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18024] = 5,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1063), 1,
      sym__identifier,
    STATE(394), 1,
      sym_identifier,
    STATE(522), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18041] = 5,
    ACTIONS(1110), 1,
      anon_sym_BQUOTE,
    ACTIONS(1112), 1,
      sym__identifier,
    STATE(121), 1,
      sym_table_expression,
    STATE(189), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18058] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1114), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18069] = 3,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(787), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [18082] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1116), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18093] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1118), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18104] = 5,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1090), 1,
      sym__identifier,
    STATE(527), 1,
      sym_identifier,
    STATE(759), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18121] = 3,
    ACTIONS(795), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(793), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [18134] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1120), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1122), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [18147] = 5,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1063), 1,
      sym__identifier,
    STATE(394), 1,
      sym_identifier,
    STATE(512), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18164] = 3,
    ACTIONS(105), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [18177] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1124), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1126), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [18190] = 4,
    ACTIONS(1128), 1,
      sym_keyword_values,
    ACTIONS(1130), 1,
      anon_sym_LPAREN,
    STATE(850), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18204] = 4,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1063), 1,
      sym__identifier,
    STATE(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18218] = 4,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    STATE(609), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18232] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(995), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18246] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(994), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18260] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(993), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18274] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(929), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18288] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(471), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18302] = 4,
    ACTIONS(1102), 1,
      anon_sym_SEMI,
    ACTIONS(1137), 1,
      sym_keyword_from,
    STATE(769), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18316] = 4,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    STATE(616), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18330] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1144), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18340] = 4,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    STATE(650), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18354] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1150), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18364] = 4,
    ACTIONS(1152), 1,
      sym_keyword_set,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    STATE(677), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18378] = 4,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(712), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18392] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(959), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18402] = 4,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18416] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(795), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18430] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(803), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18444] = 4,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18458] = 4,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(13), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18472] = 4,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(1160), 1,
      anon_sym_SEMI,
    STATE(893), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18486] = 4,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18500] = 4,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(585), 1,
      sym__identifier,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18514] = 4,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(585), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18528] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18542] = 4,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(111), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18556] = 4,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(634), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18570] = 4,
    ACTIONS(621), 1,
      anon_sym_BQUOTE,
    ACTIONS(623), 1,
      sym__identifier,
    STATE(12), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18584] = 4,
    ACTIONS(621), 1,
      anon_sym_BQUOTE,
    ACTIONS(623), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18598] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(408), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18612] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18626] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(873), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18636] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(406), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1167), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18660] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(823), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18670] = 4,
    ACTIONS(1169), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1171), 1,
      anon_sym_SEMI,
    STATE(770), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18684] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(449), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18698] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18712] = 4,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    STATE(646), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18726] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(334), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18740] = 4,
    ACTIONS(625), 1,
      anon_sym_BQUOTE,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18754] = 4,
    ACTIONS(625), 1,
      anon_sym_BQUOTE,
    ACTIONS(627), 1,
      sym__identifier,
    STATE(92), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18768] = 4,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    ACTIONS(1180), 1,
      anon_sym_COMMA,
    STATE(650), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18782] = 4,
    ACTIONS(1183), 1,
      sym_keyword_select,
    STATE(592), 1,
      sym_select,
    STATE(705), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18796] = 4,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18810] = 4,
    ACTIONS(1187), 1,
      sym_keyword_not,
    ACTIONS(1189), 1,
      sym_keyword_default,
    ACTIONS(1191), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18824] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1031), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18834] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(1010), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18848] = 4,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
    STATE(656), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18862] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1198), 1,
      sym__identifier,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18876] = 4,
    ACTIONS(609), 1,
      anon_sym_BQUOTE,
    ACTIONS(611), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18890] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(840), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18904] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1198), 1,
      sym__identifier,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18918] = 4,
    ACTIONS(609), 1,
      anon_sym_BQUOTE,
    ACTIONS(611), 1,
      sym__identifier,
    STATE(58), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18932] = 4,
    ACTIONS(1137), 1,
      sym_keyword_from,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(862), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18946] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18960] = 4,
    ACTIONS(1082), 1,
      anon_sym_BQUOTE,
    ACTIONS(1084), 1,
      sym__identifier,
    STATE(202), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18974] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(805), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18988] = 4,
    ACTIONS(1202), 1,
      sym_keyword_set,
    ACTIONS(1204), 1,
      sym_keyword_drop,
    ACTIONS(1206), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19002] = 4,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    STATE(730), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19016] = 4,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_SEMI,
    STATE(656), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19030] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1198), 1,
      sym__identifier,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19044] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(615), 1,
      sym_select,
    STATE(883), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19058] = 4,
    ACTIONS(1169), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1216), 1,
      anon_sym_SEMI,
    STATE(778), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19072] = 4,
    ACTIONS(1183), 1,
      sym_keyword_select,
    STATE(592), 1,
      sym_select,
    STATE(643), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19086] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(1004), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19100] = 4,
    ACTIONS(1218), 1,
      anon_sym_BQUOTE,
    ACTIONS(1220), 1,
      sym__identifier,
    STATE(603), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19114] = 4,
    ACTIONS(1222), 1,
      sym_keyword_set,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(675), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19128] = 4,
    ACTIONS(1227), 1,
      sym_keyword_where,
    ACTIONS(1229), 1,
      anon_sym_SEMI,
    STATE(890), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19142] = 4,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      sym_keyword_set,
    STATE(675), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19156] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(849), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19170] = 4,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(1233), 1,
      anon_sym_COMMA,
    STATE(715), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19184] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(1235), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19198] = 4,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(1237), 1,
      anon_sym_SEMI,
    STATE(905), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19212] = 4,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19226] = 4,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    STATE(609), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19240] = 4,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19254] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(902), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19268] = 4,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19282] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(1235), 1,
      sym__identifier,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19296] = 4,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19310] = 4,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19324] = 4,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    STATE(684), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19338] = 4,
    ACTIONS(1137), 1,
      sym_keyword_from,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(839), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19352] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(615), 1,
      sym_select,
    STATE(936), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19366] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(408), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19380] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19390] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(1235), 1,
      sym__identifier,
    STATE(86), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19404] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(866), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19418] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(406), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19432] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1256), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19442] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(953), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19452] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(449), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19466] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19480] = 4,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    ACTIONS(1258), 1,
      anon_sym_SEMI,
    STATE(707), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19494] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(334), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19508] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(499), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19522] = 4,
    ACTIONS(1169), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1260), 1,
      anon_sym_SEMI,
    STATE(754), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19536] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19546] = 4,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    STATE(656), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19560] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(864), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19574] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(232), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19588] = 4,
    ACTIONS(1110), 1,
      anon_sym_BQUOTE,
    ACTIONS(1112), 1,
      sym__identifier,
    STATE(201), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19602] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(860), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19616] = 4,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19630] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(666), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19644] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(857), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19658] = 4,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    STATE(715), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19672] = 4,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    STATE(668), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19686] = 4,
    ACTIONS(469), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19700] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1090), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19714] = 4,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19728] = 4,
    ACTIONS(1183), 1,
      sym_keyword_select,
    STATE(592), 1,
      sym_select,
    STATE(671), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19742] = 4,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    STATE(834), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19756] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(859), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19766] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(615), 1,
      sym_select,
    STATE(851), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19780] = 4,
    ACTIONS(1137), 1,
      sym_keyword_from,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(838), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19794] = 4,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    ACTIONS(1233), 1,
      anon_sym_COMMA,
    STATE(679), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19808] = 4,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19822] = 3,
    ACTIONS(1273), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(663), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [19834] = 4,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19848] = 4,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19862] = 4,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19876] = 4,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(871), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19890] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1090), 1,
      sym__identifier,
    STATE(408), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19904] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1090), 1,
      sym__identifier,
    STATE(406), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19918] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1090), 1,
      sym__identifier,
    STATE(449), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19932] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1090), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19946] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1090), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19960] = 4,
    ACTIONS(595), 1,
      anon_sym_BQUOTE,
    ACTIONS(597), 1,
      sym__identifier,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19974] = 4,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19988] = 4,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(729), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20002] = 4,
    ACTIONS(1137), 1,
      sym_keyword_from,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    STATE(984), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20016] = 4,
    ACTIONS(1106), 1,
      anon_sym_BQUOTE,
    ACTIONS(1108), 1,
      sym__identifier,
    STATE(396), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20030] = 4,
    ACTIONS(289), 1,
      sym_keyword_limit,
    ACTIONS(1033), 1,
      anon_sym_SEMI,
    STATE(843), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20044] = 3,
    ACTIONS(1285), 1,
      anon_sym_LPAREN,
    STATE(757), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20055] = 3,
    ACTIONS(1287), 1,
      sym_keyword_outer,
    ACTIONS(1289), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20066] = 3,
    ACTIONS(1291), 1,
      sym_keyword_outer,
    ACTIONS(1293), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20077] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1295), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [20086] = 3,
    ACTIONS(1297), 1,
      sym_keyword_table,
    ACTIONS(1299), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20097] = 3,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20108] = 3,
    ACTIONS(1305), 1,
      sym_keyword_table,
    ACTIONS(1307), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20119] = 3,
    ACTIONS(1309), 1,
      anon_sym_LPAREN,
    STATE(842), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20130] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1311), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20139] = 3,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20150] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(513), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20159] = 3,
    ACTIONS(1317), 1,
      sym_keyword_no,
    ACTIONS(1319), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20170] = 3,
    ACTIONS(1321), 1,
      sym_keyword_on,
    ACTIONS(1323), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20181] = 3,
    ACTIONS(983), 1,
      sym_keyword_on,
    ACTIONS(985), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20192] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1325), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20201] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1327), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20210] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1178), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20219] = 3,
    ACTIONS(993), 1,
      sym_keyword_on,
    ACTIONS(995), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20230] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1329), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20239] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1331), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20248] = 3,
    ACTIONS(1333), 1,
      sym_keyword_from,
    STATE(930), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20259] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1335), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20268] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1337), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20277] = 3,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    ACTIONS(1339), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20288] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1329), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20297] = 3,
    ACTIONS(1341), 1,
      sym_keyword_view,
    ACTIONS(1343), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20308] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1345), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [20317] = 3,
    ACTIONS(1347), 1,
      sym_keyword_no,
    ACTIONS(1349), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20328] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1139), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20337] = 3,
    ACTIONS(1285), 1,
      anon_sym_LPAREN,
    STATE(777), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20348] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1351), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20357] = 3,
    ACTIONS(1353), 1,
      anon_sym_LPAREN,
    STATE(409), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20368] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1162), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20377] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1355), 2,
      sym_keyword_no,
      sym_keyword_data,
  [20386] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1357), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20395] = 3,
    ACTIONS(1359), 1,
      sym_keyword_no,
    ACTIONS(1361), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20406] = 3,
    ACTIONS(1363), 1,
      sym_keyword_for,
    ACTIONS(1365), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20417] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1173), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20426] = 3,
    ACTIONS(1130), 1,
      anon_sym_LPAREN,
    STATE(329), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20437] = 3,
    ACTIONS(995), 1,
      sym_keyword_using,
    ACTIONS(1011), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20448] = 3,
    ACTIONS(1130), 1,
      anon_sym_LPAREN,
    STATE(324), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20459] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1367), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20468] = 3,
    ACTIONS(1353), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20479] = 3,
    ACTIONS(1369), 1,
      sym_keyword_outer,
    ACTIONS(1371), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20490] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1373), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20499] = 3,
    ACTIONS(1375), 1,
      sym_keyword_outer,
    ACTIONS(1377), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20510] = 3,
    ACTIONS(1130), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20521] = 3,
    ACTIONS(1379), 1,
      sym_keyword_cascade,
    ACTIONS(1381), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20532] = 3,
    ACTIONS(1309), 1,
      anon_sym_LPAREN,
    STATE(1007), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20543] = 3,
    ACTIONS(1383), 1,
      sym_keyword_cascade,
    ACTIONS(1385), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20554] = 3,
    ACTIONS(1130), 1,
      anon_sym_LPAREN,
    STATE(332), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20565] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1387), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20574] = 3,
    ACTIONS(685), 1,
      sym_keyword_primary,
    STATE(743), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20585] = 3,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(691), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20596] = 3,
    ACTIONS(1389), 1,
      sym_keyword_cascade,
    ACTIONS(1391), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20607] = 3,
    ACTIONS(1323), 1,
      sym_keyword_using,
    ACTIONS(1393), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20618] = 3,
    ACTIONS(1187), 1,
      sym_keyword_not,
    ACTIONS(1395), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20629] = 3,
    ACTIONS(1397), 1,
      sym_keyword_cascade,
    ACTIONS(1399), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20640] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1401), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20649] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1403), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [20658] = 3,
    ACTIONS(1285), 1,
      anon_sym_LPAREN,
    STATE(801), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20669] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1196), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20678] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1405), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20687] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1407), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20696] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1409), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20705] = 3,
    ACTIONS(985), 1,
      sym_keyword_using,
    ACTIONS(1015), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20716] = 3,
    ACTIONS(1353), 1,
      anon_sym_LPAREN,
    STATE(404), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20727] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1411), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [20736] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1413), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20745] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1415), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20754] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1222), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [20763] = 2,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20771] = 2,
    ACTIONS(1419), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20779] = 2,
    ACTIONS(1381), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20787] = 2,
    ACTIONS(1385), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20795] = 2,
    ACTIONS(1421), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20803] = 2,
    ACTIONS(1258), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20811] = 2,
    ACTIONS(1423), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20819] = 2,
    ACTIONS(1425), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20827] = 2,
    ACTIONS(1427), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20835] = 2,
    ACTIONS(1429), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20843] = 2,
    ACTIONS(1431), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20851] = 2,
    ACTIONS(1433), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20859] = 2,
    ACTIONS(1435), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20867] = 2,
    ACTIONS(1437), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20875] = 2,
    ACTIONS(1437), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20883] = 2,
    ACTIONS(1439), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20891] = 2,
    ACTIONS(1441), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20899] = 2,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20907] = 2,
    ACTIONS(1445), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20915] = 2,
    ACTIONS(1033), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20923] = 2,
    ACTIONS(1160), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20931] = 2,
    ACTIONS(1447), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20939] = 2,
    ACTIONS(1449), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20947] = 2,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20955] = 2,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20963] = 2,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20971] = 2,
    ACTIONS(1457), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20979] = 2,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20987] = 2,
    ACTIONS(1461), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20995] = 2,
    ACTIONS(1237), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21003] = 2,
    ACTIONS(1463), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21011] = 2,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21019] = 2,
    ACTIONS(1465), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21027] = 2,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21035] = 2,
    ACTIONS(1467), 1,
      aux_sym_double_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21043] = 2,
    ACTIONS(1469), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21051] = 2,
    ACTIONS(1471), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21059] = 2,
    ACTIONS(1473), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21067] = 2,
    ACTIONS(1475), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21075] = 2,
    ACTIONS(1477), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21083] = 2,
    ACTIONS(1479), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21091] = 2,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21099] = 2,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21107] = 2,
    ACTIONS(1485), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21115] = 2,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21123] = 2,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21131] = 2,
    ACTIONS(1491), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21139] = 2,
    ACTIONS(1493), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21147] = 2,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21155] = 2,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21163] = 2,
    ACTIONS(1499), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21171] = 2,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21179] = 2,
    ACTIONS(1503), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21187] = 2,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21195] = 2,
    ACTIONS(1507), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21203] = 2,
    ACTIONS(1509), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21211] = 2,
    ACTIONS(1511), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21219] = 2,
    ACTIONS(1513), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21227] = 2,
    ACTIONS(1515), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21235] = 2,
    ACTIONS(1349), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21243] = 2,
    ACTIONS(1517), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21251] = 2,
    ACTIONS(1377), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21259] = 2,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21267] = 2,
    ACTIONS(1521), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21275] = 2,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21283] = 2,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21291] = 2,
    ACTIONS(1527), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21299] = 2,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21307] = 2,
    ACTIONS(1531), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21315] = 2,
    ACTIONS(1533), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21323] = 2,
    ACTIONS(1535), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21331] = 2,
    ACTIONS(1260), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21339] = 2,
    ACTIONS(1537), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21347] = 2,
    ACTIONS(1539), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21355] = 2,
    ACTIONS(1541), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21363] = 2,
    ACTIONS(1543), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21371] = 2,
    ACTIONS(1545), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21379] = 2,
    ACTIONS(1547), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21387] = 2,
    ACTIONS(1549), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21395] = 2,
    ACTIONS(1551), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21403] = 2,
    ACTIONS(1553), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21411] = 2,
    ACTIONS(1555), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21419] = 2,
    ACTIONS(1557), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21427] = 2,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21435] = 2,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21443] = 2,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21451] = 2,
    ACTIONS(1563), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21459] = 2,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21467] = 2,
    ACTIONS(1567), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21475] = 2,
    ACTIONS(1569), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21483] = 2,
    ACTIONS(1571), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21491] = 2,
    ACTIONS(1573), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21499] = 2,
    ACTIONS(1575), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21507] = 2,
    ACTIONS(1577), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21515] = 2,
    ACTIONS(1579), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21523] = 2,
    ACTIONS(1581), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21531] = 2,
    ACTIONS(1583), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21539] = 2,
    ACTIONS(1585), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21547] = 2,
    ACTIONS(1587), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21555] = 2,
    ACTIONS(1589), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21563] = 2,
    ACTIONS(1591), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21571] = 2,
    ACTIONS(1593), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21579] = 2,
    ACTIONS(1595), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21587] = 2,
    ACTIONS(1597), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21595] = 2,
    ACTIONS(1599), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21603] = 2,
    ACTIONS(1601), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21611] = 2,
    ACTIONS(1603), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21619] = 2,
    ACTIONS(1605), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21627] = 2,
    ACTIONS(1607), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21635] = 2,
    ACTIONS(1609), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21643] = 2,
    ACTIONS(1613), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21651] = 2,
    ACTIONS(1615), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21659] = 2,
    ACTIONS(1617), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21667] = 2,
    ACTIONS(1619), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21675] = 2,
    ACTIONS(1619), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21683] = 2,
    ACTIONS(1621), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21691] = 2,
    ACTIONS(1623), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21699] = 2,
    ACTIONS(1625), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21707] = 2,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21715] = 2,
    ACTIONS(1627), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21723] = 2,
    ACTIONS(1319), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21731] = 2,
    ACTIONS(1629), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21739] = 2,
    ACTIONS(1631), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21747] = 2,
    ACTIONS(1633), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21755] = 2,
    ACTIONS(1635), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21763] = 2,
    ACTIONS(1637), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21771] = 2,
    ACTIONS(1639), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21779] = 2,
    ACTIONS(1641), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21787] = 2,
    ACTIONS(1643), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21795] = 2,
    ACTIONS(1645), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21803] = 2,
    ACTIONS(1647), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21811] = 2,
    ACTIONS(1649), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21819] = 2,
    ACTIONS(1651), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21827] = 2,
    ACTIONS(1653), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21835] = 2,
    ACTIONS(1655), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21843] = 2,
    ACTIONS(1657), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21851] = 2,
    ACTIONS(1659), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21859] = 2,
    ACTIONS(1661), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21867] = 2,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21875] = 2,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21883] = 2,
    ACTIONS(1667), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21891] = 2,
    ACTIONS(1669), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21899] = 2,
    ACTIONS(1671), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21907] = 2,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21915] = 2,
    ACTIONS(1675), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21923] = 2,
    ACTIONS(1677), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21931] = 2,
    ACTIONS(1679), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21939] = 2,
    ACTIONS(1681), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21947] = 2,
    ACTIONS(1683), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21955] = 2,
    ACTIONS(1685), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21963] = 2,
    ACTIONS(1687), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21971] = 2,
    ACTIONS(1689), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21979] = 2,
    ACTIONS(1691), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21987] = 2,
    ACTIONS(1693), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21995] = 2,
    ACTIONS(1695), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22003] = 2,
    ACTIONS(1697), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22011] = 2,
    ACTIONS(1699), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22019] = 2,
    ACTIONS(1701), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22027] = 2,
    ACTIONS(1703), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22035] = 2,
    ACTIONS(1705), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22043] = 2,
    ACTIONS(1707), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22051] = 2,
    ACTIONS(1709), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22059] = 2,
    ACTIONS(1711), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22067] = 2,
    ACTIONS(1713), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22075] = 2,
    ACTIONS(1715), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22083] = 2,
    ACTIONS(1717), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22091] = 2,
    ACTIONS(1719), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22099] = 2,
    ACTIONS(1721), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22107] = 2,
    ACTIONS(1723), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22115] = 2,
    ACTIONS(1725), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22123] = 2,
    ACTIONS(1727), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22131] = 2,
    ACTIONS(1725), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22139] = 2,
    ACTIONS(1729), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22147] = 2,
    ACTIONS(1731), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22155] = 2,
    ACTIONS(1733), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22163] = 2,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22171] = 2,
    ACTIONS(1735), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22179] = 2,
    ACTIONS(1737), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22187] = 2,
    ACTIONS(1739), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22195] = 2,
    ACTIONS(1741), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22203] = 2,
    ACTIONS(1743), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22211] = 2,
    ACTIONS(1745), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22219] = 2,
    ACTIONS(1747), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22227] = 2,
    ACTIONS(1749), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22235] = 2,
    ACTIONS(1751), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22243] = 2,
    ACTIONS(1753), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22251] = 2,
    ACTIONS(1755), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22259] = 2,
    ACTIONS(1757), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22267] = 2,
    ACTIONS(1759), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22275] = 2,
    ACTIONS(1761), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22283] = 2,
    ACTIONS(1763), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22291] = 2,
    ACTIONS(1765), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22299] = 2,
    ACTIONS(1767), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22307] = 2,
    ACTIONS(1769), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22315] = 2,
    ACTIONS(1771), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22323] = 2,
    ACTIONS(1773), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22331] = 2,
    ACTIONS(1775), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22339] = 2,
    ACTIONS(1777), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22347] = 2,
    ACTIONS(1779), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22355] = 2,
    ACTIONS(1781), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22363] = 2,
    ACTIONS(1783), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22371] = 2,
    ACTIONS(1785), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22379] = 2,
    ACTIONS(1787), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22387] = 2,
    ACTIONS(1293), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22395] = 2,
    ACTIONS(1789), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22403] = 2,
    ACTIONS(1791), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 220,
  [SMALL_STATE(6)] = 298,
  [SMALL_STATE(7)] = 376,
  [SMALL_STATE(8)] = 426,
  [SMALL_STATE(9)] = 476,
  [SMALL_STATE(10)] = 526,
  [SMALL_STATE(11)] = 576,
  [SMALL_STATE(12)] = 615,
  [SMALL_STATE(13)] = 662,
  [SMALL_STATE(14)] = 709,
  [SMALL_STATE(15)] = 748,
  [SMALL_STATE(16)] = 787,
  [SMALL_STATE(17)] = 826,
  [SMALL_STATE(18)] = 864,
  [SMALL_STATE(19)] = 900,
  [SMALL_STATE(20)] = 938,
  [SMALL_STATE(21)] = 976,
  [SMALL_STATE(22)] = 1012,
  [SMALL_STATE(23)] = 1050,
  [SMALL_STATE(24)] = 1086,
  [SMALL_STATE(25)] = 1122,
  [SMALL_STATE(26)] = 1158,
  [SMALL_STATE(27)] = 1194,
  [SMALL_STATE(28)] = 1232,
  [SMALL_STATE(29)] = 1270,
  [SMALL_STATE(30)] = 1306,
  [SMALL_STATE(31)] = 1344,
  [SMALL_STATE(32)] = 1380,
  [SMALL_STATE(33)] = 1418,
  [SMALL_STATE(34)] = 1454,
  [SMALL_STATE(35)] = 1490,
  [SMALL_STATE(36)] = 1526,
  [SMALL_STATE(37)] = 1562,
  [SMALL_STATE(38)] = 1600,
  [SMALL_STATE(39)] = 1638,
  [SMALL_STATE(40)] = 1674,
  [SMALL_STATE(41)] = 1710,
  [SMALL_STATE(42)] = 1748,
  [SMALL_STATE(43)] = 1784,
  [SMALL_STATE(44)] = 1821,
  [SMALL_STATE(45)] = 1862,
  [SMALL_STATE(46)] = 1909,
  [SMALL_STATE(47)] = 1960,
  [SMALL_STATE(48)] = 2005,
  [SMALL_STATE(49)] = 2050,
  [SMALL_STATE(50)] = 2101,
  [SMALL_STATE(51)] = 2148,
  [SMALL_STATE(52)] = 2185,
  [SMALL_STATE(53)] = 2226,
  [SMALL_STATE(54)] = 2261,
  [SMALL_STATE(55)] = 2296,
  [SMALL_STATE(56)] = 2340,
  [SMALL_STATE(57)] = 2384,
  [SMALL_STATE(58)] = 2428,
  [SMALL_STATE(59)] = 2472,
  [SMALL_STATE(60)] = 2516,
  [SMALL_STATE(61)] = 2560,
  [SMALL_STATE(62)] = 2601,
  [SMALL_STATE(63)] = 2644,
  [SMALL_STATE(64)] = 2677,
  [SMALL_STATE(65)] = 2710,
  [SMALL_STATE(66)] = 2743,
  [SMALL_STATE(67)] = 2776,
  [SMALL_STATE(68)] = 2809,
  [SMALL_STATE(69)] = 2850,
  [SMALL_STATE(70)] = 2883,
  [SMALL_STATE(71)] = 2916,
  [SMALL_STATE(72)] = 2949,
  [SMALL_STATE(73)] = 2990,
  [SMALL_STATE(74)] = 3033,
  [SMALL_STATE(75)] = 3066,
  [SMALL_STATE(76)] = 3099,
  [SMALL_STATE(77)] = 3142,
  [SMALL_STATE(78)] = 3185,
  [SMALL_STATE(79)] = 3218,
  [SMALL_STATE(80)] = 3251,
  [SMALL_STATE(81)] = 3283,
  [SMALL_STATE(82)] = 3315,
  [SMALL_STATE(83)] = 3347,
  [SMALL_STATE(84)] = 3389,
  [SMALL_STATE(85)] = 3431,
  [SMALL_STATE(86)] = 3463,
  [SMALL_STATE(87)] = 3495,
  [SMALL_STATE(88)] = 3527,
  [SMALL_STATE(89)] = 3567,
  [SMALL_STATE(90)] = 3599,
  [SMALL_STATE(91)] = 3631,
  [SMALL_STATE(92)] = 3673,
  [SMALL_STATE(93)] = 3715,
  [SMALL_STATE(94)] = 3747,
  [SMALL_STATE(95)] = 3779,
  [SMALL_STATE(96)] = 3811,
  [SMALL_STATE(97)] = 3843,
  [SMALL_STATE(98)] = 3875,
  [SMALL_STATE(99)] = 3907,
  [SMALL_STATE(100)] = 3939,
  [SMALL_STATE(101)] = 3971,
  [SMALL_STATE(102)] = 4003,
  [SMALL_STATE(103)] = 4035,
  [SMALL_STATE(104)] = 4067,
  [SMALL_STATE(105)] = 4099,
  [SMALL_STATE(106)] = 4143,
  [SMALL_STATE(107)] = 4175,
  [SMALL_STATE(108)] = 4207,
  [SMALL_STATE(109)] = 4247,
  [SMALL_STATE(110)] = 4279,
  [SMALL_STATE(111)] = 4318,
  [SMALL_STATE(112)] = 4357,
  [SMALL_STATE(113)] = 4388,
  [SMALL_STATE(114)] = 4419,
  [SMALL_STATE(115)] = 4455,
  [SMALL_STATE(116)] = 4515,
  [SMALL_STATE(117)] = 4575,
  [SMALL_STATE(118)] = 4635,
  [SMALL_STATE(119)] = 4695,
  [SMALL_STATE(120)] = 4753,
  [SMALL_STATE(121)] = 4813,
  [SMALL_STATE(122)] = 4871,
  [SMALL_STATE(123)] = 4931,
  [SMALL_STATE(124)] = 4991,
  [SMALL_STATE(125)] = 5051,
  [SMALL_STATE(126)] = 5111,
  [SMALL_STATE(127)] = 5171,
  [SMALL_STATE(128)] = 5231,
  [SMALL_STATE(129)] = 5278,
  [SMALL_STATE(130)] = 5309,
  [SMALL_STATE(131)] = 5344,
  [SMALL_STATE(132)] = 5375,
  [SMALL_STATE(133)] = 5432,
  [SMALL_STATE(134)] = 5467,
  [SMALL_STATE(135)] = 5524,
  [SMALL_STATE(136)] = 5565,
  [SMALL_STATE(137)] = 5610,
  [SMALL_STATE(138)] = 5649,
  [SMALL_STATE(139)] = 5706,
  [SMALL_STATE(140)] = 5741,
  [SMALL_STATE(141)] = 5798,
  [SMALL_STATE(142)] = 5829,
  [SMALL_STATE(143)] = 5876,
  [SMALL_STATE(144)] = 5917,
  [SMALL_STATE(145)] = 5962,
  [SMALL_STATE(146)] = 6001,
  [SMALL_STATE(147)] = 6040,
  [SMALL_STATE(148)] = 6085,
  [SMALL_STATE(149)] = 6116,
  [SMALL_STATE(150)] = 6157,
  [SMALL_STATE(151)] = 6188,
  [SMALL_STATE(152)] = 6245,
  [SMALL_STATE(153)] = 6283,
  [SMALL_STATE(154)] = 6337,
  [SMALL_STATE(155)] = 6371,
  [SMALL_STATE(156)] = 6409,
  [SMALL_STATE(157)] = 6463,
  [SMALL_STATE(158)] = 6491,
  [SMALL_STATE(159)] = 6525,
  [SMALL_STATE(160)] = 6569,
  [SMALL_STATE(161)] = 6609,
  [SMALL_STATE(162)] = 6639,
  [SMALL_STATE(163)] = 6673,
  [SMALL_STATE(164)] = 6701,
  [SMALL_STATE(165)] = 6731,
  [SMALL_STATE(166)] = 6785,
  [SMALL_STATE(167)] = 6813,
  [SMALL_STATE(168)] = 6841,
  [SMALL_STATE(169)] = 6881,
  [SMALL_STATE(170)] = 6935,
  [SMALL_STATE(171)] = 6989,
  [SMALL_STATE(172)] = 7033,
  [SMALL_STATE(173)] = 7087,
  [SMALL_STATE(174)] = 7115,
  [SMALL_STATE(175)] = 7156,
  [SMALL_STATE(176)] = 7207,
  [SMALL_STATE(177)] = 7236,
  [SMALL_STATE(178)] = 7269,
  [SMALL_STATE(179)] = 7298,
  [SMALL_STATE(180)] = 7335,
  [SMALL_STATE(181)] = 7374,
  [SMALL_STATE(182)] = 7413,
  [SMALL_STATE(183)] = 7450,
  [SMALL_STATE(184)] = 7505,
  [SMALL_STATE(185)] = 7560,
  [SMALL_STATE(186)] = 7605,
  [SMALL_STATE(187)] = 7660,
  [SMALL_STATE(188)] = 7693,
  [SMALL_STATE(189)] = 7744,
  [SMALL_STATE(190)] = 7781,
  [SMALL_STATE(191)] = 7832,
  [SMALL_STATE(192)] = 7883,
  [SMALL_STATE(193)] = 7916,
  [SMALL_STATE(194)] = 7971,
  [SMALL_STATE(195)] = 8012,
  [SMALL_STATE(196)] = 8049,
  [SMALL_STATE(197)] = 8100,
  [SMALL_STATE(198)] = 8151,
  [SMALL_STATE(199)] = 8180,
  [SMALL_STATE(200)] = 8222,
  [SMALL_STATE(201)] = 8274,
  [SMALL_STATE(202)] = 8308,
  [SMALL_STATE(203)] = 8342,
  [SMALL_STATE(204)] = 8394,
  [SMALL_STATE(205)] = 8420,
  [SMALL_STATE(206)] = 8472,
  [SMALL_STATE(207)] = 8500,
  [SMALL_STATE(208)] = 8526,
  [SMALL_STATE(209)] = 8552,
  [SMALL_STATE(210)] = 8580,
  [SMALL_STATE(211)] = 8606,
  [SMALL_STATE(212)] = 8629,
  [SMALL_STATE(213)] = 8672,
  [SMALL_STATE(214)] = 8715,
  [SMALL_STATE(215)] = 8758,
  [SMALL_STATE(216)] = 8801,
  [SMALL_STATE(217)] = 8844,
  [SMALL_STATE(218)] = 8887,
  [SMALL_STATE(219)] = 8930,
  [SMALL_STATE(220)] = 8971,
  [SMALL_STATE(221)] = 8994,
  [SMALL_STATE(222)] = 9037,
  [SMALL_STATE(223)] = 9080,
  [SMALL_STATE(224)] = 9123,
  [SMALL_STATE(225)] = 9166,
  [SMALL_STATE(226)] = 9209,
  [SMALL_STATE(227)] = 9252,
  [SMALL_STATE(228)] = 9295,
  [SMALL_STATE(229)] = 9338,
  [SMALL_STATE(230)] = 9381,
  [SMALL_STATE(231)] = 9424,
  [SMALL_STATE(232)] = 9467,
  [SMALL_STATE(233)] = 9490,
  [SMALL_STATE(234)] = 9533,
  [SMALL_STATE(235)] = 9576,
  [SMALL_STATE(236)] = 9619,
  [SMALL_STATE(237)] = 9662,
  [SMALL_STATE(238)] = 9685,
  [SMALL_STATE(239)] = 9723,
  [SMALL_STATE(240)] = 9763,
  [SMALL_STATE(241)] = 9803,
  [SMALL_STATE(242)] = 9841,
  [SMALL_STATE(243)] = 9881,
  [SMALL_STATE(244)] = 9919,
  [SMALL_STATE(245)] = 9941,
  [SMALL_STATE(246)] = 9981,
  [SMALL_STATE(247)] = 10019,
  [SMALL_STATE(248)] = 10057,
  [SMALL_STATE(249)] = 10099,
  [SMALL_STATE(250)] = 10121,
  [SMALL_STATE(251)] = 10163,
  [SMALL_STATE(252)] = 10201,
  [SMALL_STATE(253)] = 10239,
  [SMALL_STATE(254)] = 10276,
  [SMALL_STATE(255)] = 10313,
  [SMALL_STATE(256)] = 10350,
  [SMALL_STATE(257)] = 10387,
  [SMALL_STATE(258)] = 10424,
  [SMALL_STATE(259)] = 10461,
  [SMALL_STATE(260)] = 10498,
  [SMALL_STATE(261)] = 10537,
  [SMALL_STATE(262)] = 10574,
  [SMALL_STATE(263)] = 10611,
  [SMALL_STATE(264)] = 10642,
  [SMALL_STATE(265)] = 10673,
  [SMALL_STATE(266)] = 10710,
  [SMALL_STATE(267)] = 10747,
  [SMALL_STATE(268)] = 10784,
  [SMALL_STATE(269)] = 10821,
  [SMALL_STATE(270)] = 10858,
  [SMALL_STATE(271)] = 10897,
  [SMALL_STATE(272)] = 10934,
  [SMALL_STATE(273)] = 10971,
  [SMALL_STATE(274)] = 11008,
  [SMALL_STATE(275)] = 11045,
  [SMALL_STATE(276)] = 11082,
  [SMALL_STATE(277)] = 11119,
  [SMALL_STATE(278)] = 11156,
  [SMALL_STATE(279)] = 11193,
  [SMALL_STATE(280)] = 11230,
  [SMALL_STATE(281)] = 11267,
  [SMALL_STATE(282)] = 11304,
  [SMALL_STATE(283)] = 11341,
  [SMALL_STATE(284)] = 11378,
  [SMALL_STATE(285)] = 11417,
  [SMALL_STATE(286)] = 11454,
  [SMALL_STATE(287)] = 11491,
  [SMALL_STATE(288)] = 11528,
  [SMALL_STATE(289)] = 11565,
  [SMALL_STATE(290)] = 11602,
  [SMALL_STATE(291)] = 11639,
  [SMALL_STATE(292)] = 11676,
  [SMALL_STATE(293)] = 11713,
  [SMALL_STATE(294)] = 11750,
  [SMALL_STATE(295)] = 11787,
  [SMALL_STATE(296)] = 11824,
  [SMALL_STATE(297)] = 11861,
  [SMALL_STATE(298)] = 11898,
  [SMALL_STATE(299)] = 11935,
  [SMALL_STATE(300)] = 11972,
  [SMALL_STATE(301)] = 12009,
  [SMALL_STATE(302)] = 12046,
  [SMALL_STATE(303)] = 12083,
  [SMALL_STATE(304)] = 12120,
  [SMALL_STATE(305)] = 12157,
  [SMALL_STATE(306)] = 12194,
  [SMALL_STATE(307)] = 12231,
  [SMALL_STATE(308)] = 12270,
  [SMALL_STATE(309)] = 12307,
  [SMALL_STATE(310)] = 12344,
  [SMALL_STATE(311)] = 12381,
  [SMALL_STATE(312)] = 12418,
  [SMALL_STATE(313)] = 12455,
  [SMALL_STATE(314)] = 12492,
  [SMALL_STATE(315)] = 12514,
  [SMALL_STATE(316)] = 12548,
  [SMALL_STATE(317)] = 12582,
  [SMALL_STATE(318)] = 12602,
  [SMALL_STATE(319)] = 12622,
  [SMALL_STATE(320)] = 12658,
  [SMALL_STATE(321)] = 12691,
  [SMALL_STATE(322)] = 12710,
  [SMALL_STATE(323)] = 12729,
  [SMALL_STATE(324)] = 12770,
  [SMALL_STATE(325)] = 12789,
  [SMALL_STATE(326)] = 12808,
  [SMALL_STATE(327)] = 12827,
  [SMALL_STATE(328)] = 12846,
  [SMALL_STATE(329)] = 12879,
  [SMALL_STATE(330)] = 12898,
  [SMALL_STATE(331)] = 12917,
  [SMALL_STATE(332)] = 12936,
  [SMALL_STATE(333)] = 12955,
  [SMALL_STATE(334)] = 12974,
  [SMALL_STATE(335)] = 12993,
  [SMALL_STATE(336)] = 13013,
  [SMALL_STATE(337)] = 13043,
  [SMALL_STATE(338)] = 13063,
  [SMALL_STATE(339)] = 13085,
  [SMALL_STATE(340)] = 13105,
  [SMALL_STATE(341)] = 13125,
  [SMALL_STATE(342)] = 13155,
  [SMALL_STATE(343)] = 13175,
  [SMALL_STATE(344)] = 13194,
  [SMALL_STATE(345)] = 13213,
  [SMALL_STATE(346)] = 13240,
  [SMALL_STATE(347)] = 13267,
  [SMALL_STATE(348)] = 13294,
  [SMALL_STATE(349)] = 13321,
  [SMALL_STATE(350)] = 13348,
  [SMALL_STATE(351)] = 13365,
  [SMALL_STATE(352)] = 13396,
  [SMALL_STATE(353)] = 13415,
  [SMALL_STATE(354)] = 13434,
  [SMALL_STATE(355)] = 13461,
  [SMALL_STATE(356)] = 13480,
  [SMALL_STATE(357)] = 13499,
  [SMALL_STATE(358)] = 13518,
  [SMALL_STATE(359)] = 13549,
  [SMALL_STATE(360)] = 13566,
  [SMALL_STATE(361)] = 13583,
  [SMALL_STATE(362)] = 13599,
  [SMALL_STATE(363)] = 13615,
  [SMALL_STATE(364)] = 13643,
  [SMALL_STATE(365)] = 13661,
  [SMALL_STATE(366)] = 13677,
  [SMALL_STATE(367)] = 13695,
  [SMALL_STATE(368)] = 13723,
  [SMALL_STATE(369)] = 13741,
  [SMALL_STATE(370)] = 13769,
  [SMALL_STATE(371)] = 13787,
  [SMALL_STATE(372)] = 13803,
  [SMALL_STATE(373)] = 13821,
  [SMALL_STATE(374)] = 13839,
  [SMALL_STATE(375)] = 13867,
  [SMALL_STATE(376)] = 13883,
  [SMALL_STATE(377)] = 13899,
  [SMALL_STATE(378)] = 13915,
  [SMALL_STATE(379)] = 13933,
  [SMALL_STATE(380)] = 13951,
  [SMALL_STATE(381)] = 13967,
  [SMALL_STATE(382)] = 13985,
  [SMALL_STATE(383)] = 14001,
  [SMALL_STATE(384)] = 14029,
  [SMALL_STATE(385)] = 14047,
  [SMALL_STATE(386)] = 14065,
  [SMALL_STATE(387)] = 14093,
  [SMALL_STATE(388)] = 14111,
  [SMALL_STATE(389)] = 14127,
  [SMALL_STATE(390)] = 14155,
  [SMALL_STATE(391)] = 14171,
  [SMALL_STATE(392)] = 14197,
  [SMALL_STATE(393)] = 14225,
  [SMALL_STATE(394)] = 14241,
  [SMALL_STATE(395)] = 14267,
  [SMALL_STATE(396)] = 14290,
  [SMALL_STATE(397)] = 14315,
  [SMALL_STATE(398)] = 14330,
  [SMALL_STATE(399)] = 14353,
  [SMALL_STATE(400)] = 14382,
  [SMALL_STATE(401)] = 14397,
  [SMALL_STATE(402)] = 14424,
  [SMALL_STATE(403)] = 14451,
  [SMALL_STATE(404)] = 14478,
  [SMALL_STATE(405)] = 14505,
  [SMALL_STATE(406)] = 14520,
  [SMALL_STATE(407)] = 14535,
  [SMALL_STATE(408)] = 14558,
  [SMALL_STATE(409)] = 14573,
  [SMALL_STATE(410)] = 14600,
  [SMALL_STATE(411)] = 14615,
  [SMALL_STATE(412)] = 14640,
  [SMALL_STATE(413)] = 14667,
  [SMALL_STATE(414)] = 14684,
  [SMALL_STATE(415)] = 14709,
  [SMALL_STATE(416)] = 14734,
  [SMALL_STATE(417)] = 14761,
  [SMALL_STATE(418)] = 14778,
  [SMALL_STATE(419)] = 14803,
  [SMALL_STATE(420)] = 14820,
  [SMALL_STATE(421)] = 14847,
  [SMALL_STATE(422)] = 14874,
  [SMALL_STATE(423)] = 14899,
  [SMALL_STATE(424)] = 14924,
  [SMALL_STATE(425)] = 14953,
  [SMALL_STATE(426)] = 14970,
  [SMALL_STATE(427)] = 14985,
  [SMALL_STATE(428)] = 15012,
  [SMALL_STATE(429)] = 15039,
  [SMALL_STATE(430)] = 15055,
  [SMALL_STATE(431)] = 15073,
  [SMALL_STATE(432)] = 15089,
  [SMALL_STATE(433)] = 15105,
  [SMALL_STATE(434)] = 15121,
  [SMALL_STATE(435)] = 15147,
  [SMALL_STATE(436)] = 15173,
  [SMALL_STATE(437)] = 15199,
  [SMALL_STATE(438)] = 15219,
  [SMALL_STATE(439)] = 15235,
  [SMALL_STATE(440)] = 15251,
  [SMALL_STATE(441)] = 15275,
  [SMALL_STATE(442)] = 15289,
  [SMALL_STATE(443)] = 15303,
  [SMALL_STATE(444)] = 15321,
  [SMALL_STATE(445)] = 15341,
  [SMALL_STATE(446)] = 15365,
  [SMALL_STATE(447)] = 15381,
  [SMALL_STATE(448)] = 15405,
  [SMALL_STATE(449)] = 15421,
  [SMALL_STATE(450)] = 15435,
  [SMALL_STATE(451)] = 15451,
  [SMALL_STATE(452)] = 15467,
  [SMALL_STATE(453)] = 15483,
  [SMALL_STATE(454)] = 15501,
  [SMALL_STATE(455)] = 15519,
  [SMALL_STATE(456)] = 15537,
  [SMALL_STATE(457)] = 15553,
  [SMALL_STATE(458)] = 15579,
  [SMALL_STATE(459)] = 15595,
  [SMALL_STATE(460)] = 15613,
  [SMALL_STATE(461)] = 15639,
  [SMALL_STATE(462)] = 15657,
  [SMALL_STATE(463)] = 15674,
  [SMALL_STATE(464)] = 15687,
  [SMALL_STATE(465)] = 15704,
  [SMALL_STATE(466)] = 15727,
  [SMALL_STATE(467)] = 15748,
  [SMALL_STATE(468)] = 15769,
  [SMALL_STATE(469)] = 15786,
  [SMALL_STATE(470)] = 15809,
  [SMALL_STATE(471)] = 15830,
  [SMALL_STATE(472)] = 15847,
  [SMALL_STATE(473)] = 15868,
  [SMALL_STATE(474)] = 15889,
  [SMALL_STATE(475)] = 15910,
  [SMALL_STATE(476)] = 15931,
  [SMALL_STATE(477)] = 15954,
  [SMALL_STATE(478)] = 15977,
  [SMALL_STATE(479)] = 15998,
  [SMALL_STATE(480)] = 16011,
  [SMALL_STATE(481)] = 16032,
  [SMALL_STATE(482)] = 16051,
  [SMALL_STATE(483)] = 16072,
  [SMALL_STATE(484)] = 16095,
  [SMALL_STATE(485)] = 16112,
  [SMALL_STATE(486)] = 16133,
  [SMALL_STATE(487)] = 16156,
  [SMALL_STATE(488)] = 16177,
  [SMALL_STATE(489)] = 16200,
  [SMALL_STATE(490)] = 16217,
  [SMALL_STATE(491)] = 16240,
  [SMALL_STATE(492)] = 16261,
  [SMALL_STATE(493)] = 16284,
  [SMALL_STATE(494)] = 16305,
  [SMALL_STATE(495)] = 16328,
  [SMALL_STATE(496)] = 16349,
  [SMALL_STATE(497)] = 16370,
  [SMALL_STATE(498)] = 16393,
  [SMALL_STATE(499)] = 16414,
  [SMALL_STATE(500)] = 16431,
  [SMALL_STATE(501)] = 16447,
  [SMALL_STATE(502)] = 16467,
  [SMALL_STATE(503)] = 16483,
  [SMALL_STATE(504)] = 16503,
  [SMALL_STATE(505)] = 16523,
  [SMALL_STATE(506)] = 16543,
  [SMALL_STATE(507)] = 16563,
  [SMALL_STATE(508)] = 16583,
  [SMALL_STATE(509)] = 16603,
  [SMALL_STATE(510)] = 16621,
  [SMALL_STATE(511)] = 16641,
  [SMALL_STATE(512)] = 16653,
  [SMALL_STATE(513)] = 16671,
  [SMALL_STATE(514)] = 16689,
  [SMALL_STATE(515)] = 16701,
  [SMALL_STATE(516)] = 16721,
  [SMALL_STATE(517)] = 16737,
  [SMALL_STATE(518)] = 16751,
  [SMALL_STATE(519)] = 16771,
  [SMALL_STATE(520)] = 16785,
  [SMALL_STATE(521)] = 16803,
  [SMALL_STATE(522)] = 16823,
  [SMALL_STATE(523)] = 16841,
  [SMALL_STATE(524)] = 16857,
  [SMALL_STATE(525)] = 16877,
  [SMALL_STATE(526)] = 16897,
  [SMALL_STATE(527)] = 16913,
  [SMALL_STATE(528)] = 16929,
  [SMALL_STATE(529)] = 16947,
  [SMALL_STATE(530)] = 16963,
  [SMALL_STATE(531)] = 16977,
  [SMALL_STATE(532)] = 16997,
  [SMALL_STATE(533)] = 17017,
  [SMALL_STATE(534)] = 17031,
  [SMALL_STATE(535)] = 17045,
  [SMALL_STATE(536)] = 17061,
  [SMALL_STATE(537)] = 17081,
  [SMALL_STATE(538)] = 17097,
  [SMALL_STATE(539)] = 17113,
  [SMALL_STATE(540)] = 17133,
  [SMALL_STATE(541)] = 17147,
  [SMALL_STATE(542)] = 17167,
  [SMALL_STATE(543)] = 17187,
  [SMALL_STATE(544)] = 17203,
  [SMALL_STATE(545)] = 17219,
  [SMALL_STATE(546)] = 17235,
  [SMALL_STATE(547)] = 17255,
  [SMALL_STATE(548)] = 17275,
  [SMALL_STATE(549)] = 17290,
  [SMALL_STATE(550)] = 17307,
  [SMALL_STATE(551)] = 17324,
  [SMALL_STATE(552)] = 17341,
  [SMALL_STATE(553)] = 17358,
  [SMALL_STATE(554)] = 17375,
  [SMALL_STATE(555)] = 17392,
  [SMALL_STATE(556)] = 17409,
  [SMALL_STATE(557)] = 17426,
  [SMALL_STATE(558)] = 17441,
  [SMALL_STATE(559)] = 17452,
  [SMALL_STATE(560)] = 17469,
  [SMALL_STATE(561)] = 17486,
  [SMALL_STATE(562)] = 17501,
  [SMALL_STATE(563)] = 17518,
  [SMALL_STATE(564)] = 17535,
  [SMALL_STATE(565)] = 17552,
  [SMALL_STATE(566)] = 17569,
  [SMALL_STATE(567)] = 17582,
  [SMALL_STATE(568)] = 17599,
  [SMALL_STATE(569)] = 17616,
  [SMALL_STATE(570)] = 17633,
  [SMALL_STATE(571)] = 17646,
  [SMALL_STATE(572)] = 17663,
  [SMALL_STATE(573)] = 17680,
  [SMALL_STATE(574)] = 17697,
  [SMALL_STATE(575)] = 17714,
  [SMALL_STATE(576)] = 17731,
  [SMALL_STATE(577)] = 17748,
  [SMALL_STATE(578)] = 17765,
  [SMALL_STATE(579)] = 17778,
  [SMALL_STATE(580)] = 17791,
  [SMALL_STATE(581)] = 17808,
  [SMALL_STATE(582)] = 17825,
  [SMALL_STATE(583)] = 17842,
  [SMALL_STATE(584)] = 17853,
  [SMALL_STATE(585)] = 17870,
  [SMALL_STATE(586)] = 17883,
  [SMALL_STATE(587)] = 17900,
  [SMALL_STATE(588)] = 17917,
  [SMALL_STATE(589)] = 17934,
  [SMALL_STATE(590)] = 17947,
  [SMALL_STATE(591)] = 17964,
  [SMALL_STATE(592)] = 17981,
  [SMALL_STATE(593)] = 17996,
  [SMALL_STATE(594)] = 18007,
  [SMALL_STATE(595)] = 18024,
  [SMALL_STATE(596)] = 18041,
  [SMALL_STATE(597)] = 18058,
  [SMALL_STATE(598)] = 18069,
  [SMALL_STATE(599)] = 18082,
  [SMALL_STATE(600)] = 18093,
  [SMALL_STATE(601)] = 18104,
  [SMALL_STATE(602)] = 18121,
  [SMALL_STATE(603)] = 18134,
  [SMALL_STATE(604)] = 18147,
  [SMALL_STATE(605)] = 18164,
  [SMALL_STATE(606)] = 18177,
  [SMALL_STATE(607)] = 18190,
  [SMALL_STATE(608)] = 18204,
  [SMALL_STATE(609)] = 18218,
  [SMALL_STATE(610)] = 18232,
  [SMALL_STATE(611)] = 18246,
  [SMALL_STATE(612)] = 18260,
  [SMALL_STATE(613)] = 18274,
  [SMALL_STATE(614)] = 18288,
  [SMALL_STATE(615)] = 18302,
  [SMALL_STATE(616)] = 18316,
  [SMALL_STATE(617)] = 18330,
  [SMALL_STATE(618)] = 18340,
  [SMALL_STATE(619)] = 18354,
  [SMALL_STATE(620)] = 18364,
  [SMALL_STATE(621)] = 18378,
  [SMALL_STATE(622)] = 18392,
  [SMALL_STATE(623)] = 18402,
  [SMALL_STATE(624)] = 18416,
  [SMALL_STATE(625)] = 18430,
  [SMALL_STATE(626)] = 18444,
  [SMALL_STATE(627)] = 18458,
  [SMALL_STATE(628)] = 18472,
  [SMALL_STATE(629)] = 18486,
  [SMALL_STATE(630)] = 18500,
  [SMALL_STATE(631)] = 18514,
  [SMALL_STATE(632)] = 18528,
  [SMALL_STATE(633)] = 18542,
  [SMALL_STATE(634)] = 18556,
  [SMALL_STATE(635)] = 18570,
  [SMALL_STATE(636)] = 18584,
  [SMALL_STATE(637)] = 18598,
  [SMALL_STATE(638)] = 18612,
  [SMALL_STATE(639)] = 18626,
  [SMALL_STATE(640)] = 18636,
  [SMALL_STATE(641)] = 18650,
  [SMALL_STATE(642)] = 18660,
  [SMALL_STATE(643)] = 18670,
  [SMALL_STATE(644)] = 18684,
  [SMALL_STATE(645)] = 18698,
  [SMALL_STATE(646)] = 18712,
  [SMALL_STATE(647)] = 18726,
  [SMALL_STATE(648)] = 18740,
  [SMALL_STATE(649)] = 18754,
  [SMALL_STATE(650)] = 18768,
  [SMALL_STATE(651)] = 18782,
  [SMALL_STATE(652)] = 18796,
  [SMALL_STATE(653)] = 18810,
  [SMALL_STATE(654)] = 18824,
  [SMALL_STATE(655)] = 18834,
  [SMALL_STATE(656)] = 18848,
  [SMALL_STATE(657)] = 18862,
  [SMALL_STATE(658)] = 18876,
  [SMALL_STATE(659)] = 18890,
  [SMALL_STATE(660)] = 18904,
  [SMALL_STATE(661)] = 18918,
  [SMALL_STATE(662)] = 18932,
  [SMALL_STATE(663)] = 18946,
  [SMALL_STATE(664)] = 18960,
  [SMALL_STATE(665)] = 18974,
  [SMALL_STATE(666)] = 18988,
  [SMALL_STATE(667)] = 19002,
  [SMALL_STATE(668)] = 19016,
  [SMALL_STATE(669)] = 19030,
  [SMALL_STATE(670)] = 19044,
  [SMALL_STATE(671)] = 19058,
  [SMALL_STATE(672)] = 19072,
  [SMALL_STATE(673)] = 19086,
  [SMALL_STATE(674)] = 19100,
  [SMALL_STATE(675)] = 19114,
  [SMALL_STATE(676)] = 19128,
  [SMALL_STATE(677)] = 19142,
  [SMALL_STATE(678)] = 19156,
  [SMALL_STATE(679)] = 19170,
  [SMALL_STATE(680)] = 19184,
  [SMALL_STATE(681)] = 19198,
  [SMALL_STATE(682)] = 19212,
  [SMALL_STATE(683)] = 19226,
  [SMALL_STATE(684)] = 19240,
  [SMALL_STATE(685)] = 19254,
  [SMALL_STATE(686)] = 19268,
  [SMALL_STATE(687)] = 19282,
  [SMALL_STATE(688)] = 19296,
  [SMALL_STATE(689)] = 19310,
  [SMALL_STATE(690)] = 19324,
  [SMALL_STATE(691)] = 19338,
  [SMALL_STATE(692)] = 19352,
  [SMALL_STATE(693)] = 19366,
  [SMALL_STATE(694)] = 19380,
  [SMALL_STATE(695)] = 19390,
  [SMALL_STATE(696)] = 19404,
  [SMALL_STATE(697)] = 19418,
  [SMALL_STATE(698)] = 19432,
  [SMALL_STATE(699)] = 19442,
  [SMALL_STATE(700)] = 19452,
  [SMALL_STATE(701)] = 19466,
  [SMALL_STATE(702)] = 19480,
  [SMALL_STATE(703)] = 19494,
  [SMALL_STATE(704)] = 19508,
  [SMALL_STATE(705)] = 19522,
  [SMALL_STATE(706)] = 19536,
  [SMALL_STATE(707)] = 19546,
  [SMALL_STATE(708)] = 19560,
  [SMALL_STATE(709)] = 19574,
  [SMALL_STATE(710)] = 19588,
  [SMALL_STATE(711)] = 19602,
  [SMALL_STATE(712)] = 19616,
  [SMALL_STATE(713)] = 19630,
  [SMALL_STATE(714)] = 19644,
  [SMALL_STATE(715)] = 19658,
  [SMALL_STATE(716)] = 19672,
  [SMALL_STATE(717)] = 19686,
  [SMALL_STATE(718)] = 19700,
  [SMALL_STATE(719)] = 19714,
  [SMALL_STATE(720)] = 19728,
  [SMALL_STATE(721)] = 19742,
  [SMALL_STATE(722)] = 19756,
  [SMALL_STATE(723)] = 19766,
  [SMALL_STATE(724)] = 19780,
  [SMALL_STATE(725)] = 19794,
  [SMALL_STATE(726)] = 19808,
  [SMALL_STATE(727)] = 19822,
  [SMALL_STATE(728)] = 19834,
  [SMALL_STATE(729)] = 19848,
  [SMALL_STATE(730)] = 19862,
  [SMALL_STATE(731)] = 19876,
  [SMALL_STATE(732)] = 19890,
  [SMALL_STATE(733)] = 19904,
  [SMALL_STATE(734)] = 19918,
  [SMALL_STATE(735)] = 19932,
  [SMALL_STATE(736)] = 19946,
  [SMALL_STATE(737)] = 19960,
  [SMALL_STATE(738)] = 19974,
  [SMALL_STATE(739)] = 19988,
  [SMALL_STATE(740)] = 20002,
  [SMALL_STATE(741)] = 20016,
  [SMALL_STATE(742)] = 20030,
  [SMALL_STATE(743)] = 20044,
  [SMALL_STATE(744)] = 20055,
  [SMALL_STATE(745)] = 20066,
  [SMALL_STATE(746)] = 20077,
  [SMALL_STATE(747)] = 20086,
  [SMALL_STATE(748)] = 20097,
  [SMALL_STATE(749)] = 20108,
  [SMALL_STATE(750)] = 20119,
  [SMALL_STATE(751)] = 20130,
  [SMALL_STATE(752)] = 20139,
  [SMALL_STATE(753)] = 20150,
  [SMALL_STATE(754)] = 20159,
  [SMALL_STATE(755)] = 20170,
  [SMALL_STATE(756)] = 20181,
  [SMALL_STATE(757)] = 20192,
  [SMALL_STATE(758)] = 20201,
  [SMALL_STATE(759)] = 20210,
  [SMALL_STATE(760)] = 20219,
  [SMALL_STATE(761)] = 20230,
  [SMALL_STATE(762)] = 20239,
  [SMALL_STATE(763)] = 20248,
  [SMALL_STATE(764)] = 20259,
  [SMALL_STATE(765)] = 20268,
  [SMALL_STATE(766)] = 20277,
  [SMALL_STATE(767)] = 20288,
  [SMALL_STATE(768)] = 20297,
  [SMALL_STATE(769)] = 20308,
  [SMALL_STATE(770)] = 20317,
  [SMALL_STATE(771)] = 20328,
  [SMALL_STATE(772)] = 20337,
  [SMALL_STATE(773)] = 20348,
  [SMALL_STATE(774)] = 20357,
  [SMALL_STATE(775)] = 20368,
  [SMALL_STATE(776)] = 20377,
  [SMALL_STATE(777)] = 20386,
  [SMALL_STATE(778)] = 20395,
  [SMALL_STATE(779)] = 20406,
  [SMALL_STATE(780)] = 20417,
  [SMALL_STATE(781)] = 20426,
  [SMALL_STATE(782)] = 20437,
  [SMALL_STATE(783)] = 20448,
  [SMALL_STATE(784)] = 20459,
  [SMALL_STATE(785)] = 20468,
  [SMALL_STATE(786)] = 20479,
  [SMALL_STATE(787)] = 20490,
  [SMALL_STATE(788)] = 20499,
  [SMALL_STATE(789)] = 20510,
  [SMALL_STATE(790)] = 20521,
  [SMALL_STATE(791)] = 20532,
  [SMALL_STATE(792)] = 20543,
  [SMALL_STATE(793)] = 20554,
  [SMALL_STATE(794)] = 20565,
  [SMALL_STATE(795)] = 20574,
  [SMALL_STATE(796)] = 20585,
  [SMALL_STATE(797)] = 20596,
  [SMALL_STATE(798)] = 20607,
  [SMALL_STATE(799)] = 20618,
  [SMALL_STATE(800)] = 20629,
  [SMALL_STATE(801)] = 20640,
  [SMALL_STATE(802)] = 20649,
  [SMALL_STATE(803)] = 20658,
  [SMALL_STATE(804)] = 20669,
  [SMALL_STATE(805)] = 20678,
  [SMALL_STATE(806)] = 20687,
  [SMALL_STATE(807)] = 20696,
  [SMALL_STATE(808)] = 20705,
  [SMALL_STATE(809)] = 20716,
  [SMALL_STATE(810)] = 20727,
  [SMALL_STATE(811)] = 20736,
  [SMALL_STATE(812)] = 20745,
  [SMALL_STATE(813)] = 20754,
  [SMALL_STATE(814)] = 20763,
  [SMALL_STATE(815)] = 20771,
  [SMALL_STATE(816)] = 20779,
  [SMALL_STATE(817)] = 20787,
  [SMALL_STATE(818)] = 20795,
  [SMALL_STATE(819)] = 20803,
  [SMALL_STATE(820)] = 20811,
  [SMALL_STATE(821)] = 20819,
  [SMALL_STATE(822)] = 20827,
  [SMALL_STATE(823)] = 20835,
  [SMALL_STATE(824)] = 20843,
  [SMALL_STATE(825)] = 20851,
  [SMALL_STATE(826)] = 20859,
  [SMALL_STATE(827)] = 20867,
  [SMALL_STATE(828)] = 20875,
  [SMALL_STATE(829)] = 20883,
  [SMALL_STATE(830)] = 20891,
  [SMALL_STATE(831)] = 20899,
  [SMALL_STATE(832)] = 20907,
  [SMALL_STATE(833)] = 20915,
  [SMALL_STATE(834)] = 20923,
  [SMALL_STATE(835)] = 20931,
  [SMALL_STATE(836)] = 20939,
  [SMALL_STATE(837)] = 20947,
  [SMALL_STATE(838)] = 20955,
  [SMALL_STATE(839)] = 20963,
  [SMALL_STATE(840)] = 20971,
  [SMALL_STATE(841)] = 20979,
  [SMALL_STATE(842)] = 20987,
  [SMALL_STATE(843)] = 20995,
  [SMALL_STATE(844)] = 21003,
  [SMALL_STATE(845)] = 21011,
  [SMALL_STATE(846)] = 21019,
  [SMALL_STATE(847)] = 21027,
  [SMALL_STATE(848)] = 21035,
  [SMALL_STATE(849)] = 21043,
  [SMALL_STATE(850)] = 21051,
  [SMALL_STATE(851)] = 21059,
  [SMALL_STATE(852)] = 21067,
  [SMALL_STATE(853)] = 21075,
  [SMALL_STATE(854)] = 21083,
  [SMALL_STATE(855)] = 21091,
  [SMALL_STATE(856)] = 21099,
  [SMALL_STATE(857)] = 21107,
  [SMALL_STATE(858)] = 21115,
  [SMALL_STATE(859)] = 21123,
  [SMALL_STATE(860)] = 21131,
  [SMALL_STATE(861)] = 21139,
  [SMALL_STATE(862)] = 21147,
  [SMALL_STATE(863)] = 21155,
  [SMALL_STATE(864)] = 21163,
  [SMALL_STATE(865)] = 21171,
  [SMALL_STATE(866)] = 21179,
  [SMALL_STATE(867)] = 21187,
  [SMALL_STATE(868)] = 21195,
  [SMALL_STATE(869)] = 21203,
  [SMALL_STATE(870)] = 21211,
  [SMALL_STATE(871)] = 21219,
  [SMALL_STATE(872)] = 21227,
  [SMALL_STATE(873)] = 21235,
  [SMALL_STATE(874)] = 21243,
  [SMALL_STATE(875)] = 21251,
  [SMALL_STATE(876)] = 21259,
  [SMALL_STATE(877)] = 21267,
  [SMALL_STATE(878)] = 21275,
  [SMALL_STATE(879)] = 21283,
  [SMALL_STATE(880)] = 21291,
  [SMALL_STATE(881)] = 21299,
  [SMALL_STATE(882)] = 21307,
  [SMALL_STATE(883)] = 21315,
  [SMALL_STATE(884)] = 21323,
  [SMALL_STATE(885)] = 21331,
  [SMALL_STATE(886)] = 21339,
  [SMALL_STATE(887)] = 21347,
  [SMALL_STATE(888)] = 21355,
  [SMALL_STATE(889)] = 21363,
  [SMALL_STATE(890)] = 21371,
  [SMALL_STATE(891)] = 21379,
  [SMALL_STATE(892)] = 21387,
  [SMALL_STATE(893)] = 21395,
  [SMALL_STATE(894)] = 21403,
  [SMALL_STATE(895)] = 21411,
  [SMALL_STATE(896)] = 21419,
  [SMALL_STATE(897)] = 21427,
  [SMALL_STATE(898)] = 21435,
  [SMALL_STATE(899)] = 21443,
  [SMALL_STATE(900)] = 21451,
  [SMALL_STATE(901)] = 21459,
  [SMALL_STATE(902)] = 21467,
  [SMALL_STATE(903)] = 21475,
  [SMALL_STATE(904)] = 21483,
  [SMALL_STATE(905)] = 21491,
  [SMALL_STATE(906)] = 21499,
  [SMALL_STATE(907)] = 21507,
  [SMALL_STATE(908)] = 21515,
  [SMALL_STATE(909)] = 21523,
  [SMALL_STATE(910)] = 21531,
  [SMALL_STATE(911)] = 21539,
  [SMALL_STATE(912)] = 21547,
  [SMALL_STATE(913)] = 21555,
  [SMALL_STATE(914)] = 21563,
  [SMALL_STATE(915)] = 21571,
  [SMALL_STATE(916)] = 21579,
  [SMALL_STATE(917)] = 21587,
  [SMALL_STATE(918)] = 21595,
  [SMALL_STATE(919)] = 21603,
  [SMALL_STATE(920)] = 21611,
  [SMALL_STATE(921)] = 21619,
  [SMALL_STATE(922)] = 21627,
  [SMALL_STATE(923)] = 21635,
  [SMALL_STATE(924)] = 21643,
  [SMALL_STATE(925)] = 21651,
  [SMALL_STATE(926)] = 21659,
  [SMALL_STATE(927)] = 21667,
  [SMALL_STATE(928)] = 21675,
  [SMALL_STATE(929)] = 21683,
  [SMALL_STATE(930)] = 21691,
  [SMALL_STATE(931)] = 21699,
  [SMALL_STATE(932)] = 21707,
  [SMALL_STATE(933)] = 21715,
  [SMALL_STATE(934)] = 21723,
  [SMALL_STATE(935)] = 21731,
  [SMALL_STATE(936)] = 21739,
  [SMALL_STATE(937)] = 21747,
  [SMALL_STATE(938)] = 21755,
  [SMALL_STATE(939)] = 21763,
  [SMALL_STATE(940)] = 21771,
  [SMALL_STATE(941)] = 21779,
  [SMALL_STATE(942)] = 21787,
  [SMALL_STATE(943)] = 21795,
  [SMALL_STATE(944)] = 21803,
  [SMALL_STATE(945)] = 21811,
  [SMALL_STATE(946)] = 21819,
  [SMALL_STATE(947)] = 21827,
  [SMALL_STATE(948)] = 21835,
  [SMALL_STATE(949)] = 21843,
  [SMALL_STATE(950)] = 21851,
  [SMALL_STATE(951)] = 21859,
  [SMALL_STATE(952)] = 21867,
  [SMALL_STATE(953)] = 21875,
  [SMALL_STATE(954)] = 21883,
  [SMALL_STATE(955)] = 21891,
  [SMALL_STATE(956)] = 21899,
  [SMALL_STATE(957)] = 21907,
  [SMALL_STATE(958)] = 21915,
  [SMALL_STATE(959)] = 21923,
  [SMALL_STATE(960)] = 21931,
  [SMALL_STATE(961)] = 21939,
  [SMALL_STATE(962)] = 21947,
  [SMALL_STATE(963)] = 21955,
  [SMALL_STATE(964)] = 21963,
  [SMALL_STATE(965)] = 21971,
  [SMALL_STATE(966)] = 21979,
  [SMALL_STATE(967)] = 21987,
  [SMALL_STATE(968)] = 21995,
  [SMALL_STATE(969)] = 22003,
  [SMALL_STATE(970)] = 22011,
  [SMALL_STATE(971)] = 22019,
  [SMALL_STATE(972)] = 22027,
  [SMALL_STATE(973)] = 22035,
  [SMALL_STATE(974)] = 22043,
  [SMALL_STATE(975)] = 22051,
  [SMALL_STATE(976)] = 22059,
  [SMALL_STATE(977)] = 22067,
  [SMALL_STATE(978)] = 22075,
  [SMALL_STATE(979)] = 22083,
  [SMALL_STATE(980)] = 22091,
  [SMALL_STATE(981)] = 22099,
  [SMALL_STATE(982)] = 22107,
  [SMALL_STATE(983)] = 22115,
  [SMALL_STATE(984)] = 22123,
  [SMALL_STATE(985)] = 22131,
  [SMALL_STATE(986)] = 22139,
  [SMALL_STATE(987)] = 22147,
  [SMALL_STATE(988)] = 22155,
  [SMALL_STATE(989)] = 22163,
  [SMALL_STATE(990)] = 22171,
  [SMALL_STATE(991)] = 22179,
  [SMALL_STATE(992)] = 22187,
  [SMALL_STATE(993)] = 22195,
  [SMALL_STATE(994)] = 22203,
  [SMALL_STATE(995)] = 22211,
  [SMALL_STATE(996)] = 22219,
  [SMALL_STATE(997)] = 22227,
  [SMALL_STATE(998)] = 22235,
  [SMALL_STATE(999)] = 22243,
  [SMALL_STATE(1000)] = 22251,
  [SMALL_STATE(1001)] = 22259,
  [SMALL_STATE(1002)] = 22267,
  [SMALL_STATE(1003)] = 22275,
  [SMALL_STATE(1004)] = 22283,
  [SMALL_STATE(1005)] = 22291,
  [SMALL_STATE(1006)] = 22299,
  [SMALL_STATE(1007)] = 22307,
  [SMALL_STATE(1008)] = 22315,
  [SMALL_STATE(1009)] = 22323,
  [SMALL_STATE(1010)] = 22331,
  [SMALL_STATE(1011)] = 22339,
  [SMALL_STATE(1012)] = 22347,
  [SMALL_STATE(1013)] = 22355,
  [SMALL_STATE(1014)] = 22363,
  [SMALL_STATE(1015)] = 22371,
  [SMALL_STATE(1016)] = 22379,
  [SMALL_STATE(1017)] = 22387,
  [SMALL_STATE(1018)] = 22395,
  [SMALL_STATE(1019)] = 22403,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 12),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 12),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 27),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 27),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 18),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 18),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 9, .production_id = 53),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6, .production_id = 48),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 41),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 41),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 34),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 34),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7, .production_id = 50),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 9),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 9),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 8, .production_id = 52),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 25),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 25),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 22),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 22),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(980),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(981),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(998),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 32),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(996),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 13),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 13),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1000),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 14),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 33),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 20),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 39),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 42),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 28),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(745),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(744),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(1017),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(506),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(788),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(786),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(875),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(501),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 29),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 29),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 30),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 13),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1012),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 2),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 46),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_int, 1),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 40),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 40),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 4, .production_id = 17),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 4, .production_id = 17),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 46),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 3, .production_id = 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 3, .production_id = 3),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 21),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 21),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 46),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 51),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 51),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 15),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 15),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 47),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 4),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 4),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 30),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 47),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 3, .production_id = 11),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 5),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 8),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 30),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 5, .production_id = 26),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1, .production_id = 1),
  [901] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(566),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(956),
  [909] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(353),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 3, .production_id = 7),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(392),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(367),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(877),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(307),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 30),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 3),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(383),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [1046] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(389),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(260),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 19),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 19),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1, .production_id = 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2, .production_id = 1),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 36),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 36),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(586),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(569),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 30),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [1164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(525),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(424),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [1180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(601),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(481),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 1, .production_id = 10),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [1224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(587),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 24),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 24), SHIFT_REPEAT(165),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [1266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(386),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 16),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 3),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 45),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 35),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 3),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 49),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 29),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_with, 1),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 23),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 45),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 37),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 32),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 43),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 32),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 38),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 44),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 31),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1767] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
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
