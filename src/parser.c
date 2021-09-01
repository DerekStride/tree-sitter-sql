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
#define STATE_COUNT 1013
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 240
#define ALIAS_COUNT 0
#define TOKEN_COUNT 130
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 53

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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 2, .length = 1},
  [19] = {.index = 32, .length = 2},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 3},
  [22] = {.index = 39, .length = 1},
  [23] = {.index = 40, .length = 2},
  [24] = {.index = 42, .length = 3},
  [25] = {.index = 45, .length = 2},
  [26] = {.index = 47, .length = 3},
  [27] = {.index = 50, .length = 1},
  [28] = {.index = 51, .length = 1},
  [29] = {.index = 52, .length = 2},
  [30] = {.index = 54, .length = 1},
  [31] = {.index = 55, .length = 1},
  [32] = {.index = 56, .length = 3},
  [33] = {.index = 59, .length = 4},
  [34] = {.index = 63, .length = 1},
  [35] = {.index = 64, .length = 2},
  [36] = {.index = 66, .length = 1},
  [37] = {.index = 67, .length = 2},
  [38] = {.index = 69, .length = 3},
  [39] = {.index = 72, .length = 2},
  [40] = {.index = 74, .length = 4},
  [41] = {.index = 78, .length = 1},
  [42] = {.index = 79, .length = 2},
  [43] = {.index = 81, .length = 2},
  [44] = {.index = 83, .length = 1},
  [45] = {.index = 84, .length = 1},
  [46] = {.index = 85, .length = 1},
  [47] = {.index = 86, .length = 1},
  [48] = {.index = 87, .length = 2},
  [49] = {.index = 89, .length = 1},
  [50] = {.index = 90, .length = 2},
  [51] = {.index = 92, .length = 1},
  [52] = {.index = 93, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [2] =
    {field_name, 0},
  [3] =
    {field_alias, 1},
  [4] =
    {field_alias, 1},
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [7] =
    {field_alias, 1},
    {field_name, 0},
  [9] =
    {field_alias, 2},
  [10] =
    {field_alias, 2},
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [13] =
    {field_alias, 2},
    {field_name, 0},
  [15] =
    {field_parameter, 0},
  [16] =
    {field_table_alias, 0},
  [17] =
    {field_name, 2},
    {field_table_alias, 0},
  [19] =
    {field_name, 2},
    {field_schema, 0},
  [21] =
    {field_name, 0},
    {field_table_alias, 1},
  [23] =
    {field_name, 0},
    {field_parameter, 2},
  [25] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [27] =
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [29] =
    {field_alias, 3},
    {field_name, 2},
    {field_table_alias, 0},
  [32] =
    {field_name, 0},
    {field_table_alias, 2},
  [34] =
    {field_name, 0},
    {field_parameter, 3},
  [36] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [39] =
    {field_parameter, 1},
  [40] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [42] =
    {field_alias, 4},
    {field_name, 2},
    {field_table_alias, 0},
  [45] =
    {field_schema, 0},
    {field_table_alias, 2},
  [47] =
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [50] =
    {field_index_name, 3},
  [51] =
    {field_name, 1, .inherited = true},
  [52] =
    {field_name, 0},
    {field_type, 1},
  [54] =
    {field_schema, 2},
  [55] =
    {field_name, 2},
  [56] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 3},
  [59] =
    {field_alias, 5},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [63] =
    {field_name, 0, .inherited = true},
  [64] =
    {field_name, 0},
    {field_value, 2},
  [66] =
    {field_name, 3},
  [67] =
    {field_new_name, 3},
    {field_old_name, 1},
  [69] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 4},
  [72] =
    {field_name, 0},
    {field_parameter, 4},
  [74] =
    {field_alias, 6},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [78] =
    {field_index_name, 5},
  [79] =
    {field_name, 2},
    {field_type, 4},
  [81] =
    {field_new_name, 4},
    {field_old_name, 2},
  [83] =
    {field_name, 1},
  [84] =
    {field_size, 2},
  [85] =
    {field_precision, 2},
  [86] =
    {field_alias, 3},
  [87] =
    {field_name, 2},
    {field_type, 6},
  [89] =
    {field_alias, 4},
  [90] =
    {field_precision, 2},
    {field_scale, 4},
  [92] =
    {field_alias, 5},
  [93] =
    {field_alias, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [18] = {
    [0] = sym_identifier,
  },
  [45] = {
    [2] = sym_literal,
  },
  [46] = {
    [2] = sym_literal,
  },
  [50] = {
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
      if (eof) ADVANCE(812);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'B') ADVANCE(198);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(174);
      if (lookahead == 'J') ADVANCE(288);
      if (lookahead == 'K') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(283);
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(305);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(190);
      if (lookahead == 'X') ADVANCE(242);
      if (lookahead == 'Z') ADVANCE(294);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead == 'f') ADVANCE(415);
      if (lookahead == 'g') ADVANCE(515);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == 'j') ADVANCE(654);
      if (lookahead == 'k') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'v') ADVANCE(420);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == 'x') ADVANCE(609);
      if (lookahead == 'z') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(811)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(977);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(454);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(455);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'O') ADVANCE(1101);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'o') ADVANCE(1223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(788)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(268);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(298);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == 'M') ADVANCE(86);
      if (lookahead == 'N') ADVANCE(299);
      if (lookahead == 'O') ADVANCE(176);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == 'W') ADVANCE(190);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'f') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead == 'm') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == 'p') ADVANCE(699);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == 'v') ADVANCE(446);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'G') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == 'N') ADVANCE(286);
      if (lookahead == 'O') ADVANCE(308);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == 'g') ADVANCE(689);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead == 'n') ADVANCE(652);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(787)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'C') ADVANCE(1102);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1077);
      if (lookahead == 'J') ADVANCE(1092);
      if (lookahead == 'L') ADVANCE(1033);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'R') ADVANCE(1059);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'c') ADVANCE(1224);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1199);
      if (lookahead == 'j') ADVANCE(1214);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(779)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(781)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(785)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'O') ADVANCE(1101);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'o') ADVANCE(1223);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(789)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'C') ADVANCE(1102);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1077);
      if (lookahead == 'J') ADVANCE(1092);
      if (lookahead == 'L') ADVANCE(1033);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'R') ADVANCE(1059);
      if (lookahead == 'W') ADVANCE(1054);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'c') ADVANCE(1224);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1199);
      if (lookahead == 'j') ADVANCE(1214);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == 'w') ADVANCE(1176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(780)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'W') ADVANCE(1064);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'w') ADVANCE(1186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(784)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'W') ADVANCE(1064);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'w') ADVANCE(1186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(786)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1093);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(790)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1093);
      if (lookahead == 'D') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1215);
      if (lookahead == 'd') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(792)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1093);
      if (lookahead == 'S') ADVANCE(1035);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1215);
      if (lookahead == 's') ADVANCE(1157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(791)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(1021);
      if (lookahead == 'T') ADVANCE(1108);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'f') ADVANCE(1143);
      if (lookahead == 't') ADVANCE(1230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(795)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(800)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(198);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(297);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(265);
      if (lookahead == 'J') ADVANCE(288);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'N') ADVANCE(300);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(121);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == 'U') ADVANCE(305);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == 'X') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead == 'f') ADVANCE(664);
      if (lookahead == 'g') ADVANCE(515);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'j') ADVANCE(654);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead == 'm') ADVANCE(655);
      if (lookahead == 'n') ADVANCE(667);
      if (lookahead == 'o') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(699);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'v') ADVANCE(425);
      if (lookahead == 'w') ADVANCE(558);
      if (lookahead == 'x') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(778)
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1116);
      if (lookahead == 'D') ADVANCE(1047);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1238);
      if (lookahead == 'd') ADVANCE(1169);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(799)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == 'W') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == 'w') ADVANCE(1186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(801)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1116);
      if (lookahead == 'D') ADVANCE(1047);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1238);
      if (lookahead == 'd') ADVANCE(1169);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'w') ADVANCE(1186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'C') ADVANCE(1102);
      if (lookahead == 'F') ADVANCE(1096);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1084);
      if (lookahead == 'J') ADVANCE(1092);
      if (lookahead == 'L') ADVANCE(1033);
      if (lookahead == 'O') ADVANCE(1103);
      if (lookahead == 'R') ADVANCE(1059);
      if (lookahead == 'U') ADVANCE(1120);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'c') ADVANCE(1224);
      if (lookahead == 'f') ADVANCE(1218);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1206);
      if (lookahead == 'j') ADVANCE(1214);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == 'u') ADVANCE(1242);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(793)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(982);
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
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'C') ADVANCE(1102);
      if (lookahead == 'F') ADVANCE(1096);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1084);
      if (lookahead == 'J') ADVANCE(1092);
      if (lookahead == 'L') ADVANCE(1033);
      if (lookahead == 'O') ADVANCE(1103);
      if (lookahead == 'R') ADVANCE(1059);
      if (lookahead == 'U') ADVANCE(1120);
      if (lookahead == 'W') ADVANCE(1054);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'c') ADVANCE(1224);
      if (lookahead == 'f') ADVANCE(1218);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1206);
      if (lookahead == 'j') ADVANCE(1214);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == 'u') ADVANCE(1242);
      if (lookahead == 'w') ADVANCE(1176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(794)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1103);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(802)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'F') ADVANCE(1096);
      if (lookahead == 'O') ADVANCE(1080);
      if (lookahead == 'U') ADVANCE(1117);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'f') ADVANCE(1218);
      if (lookahead == 'o') ADVANCE(1202);
      if (lookahead == 'u') ADVANCE(1239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(803)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'D') ADVANCE(1043);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'd') ADVANCE(1165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(804)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'O') ADVANCE(1080);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'o') ADVANCE(1202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(808)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1097);
      if (lookahead == 'K') ADVANCE(1042);
      if (lookahead == 'P') ADVANCE(1111);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1219);
      if (lookahead == 'k') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(798)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1095);
      if (lookahead == 'T') ADVANCE(1091);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1217);
      if (lookahead == 't') ADVANCE(1213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(809)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(1050);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'i') ADVANCE(1172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(806)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(810)
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'L') ADVANCE(1026);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'l') ADVANCE(1148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(807)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(111);
      if (lookahead == '3') ADVANCE(112);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(478);
      if (lookahead == '3') ADVANCE(479);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(994);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(339);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'O') ADVANCE(227);
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(339);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(228);
      if (lookahead == 'O') ADVANCE(309);
      if (lookahead == 'R') ADVANCE(292);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(395);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(385);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'O') ADVANCE(279);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(247);
      if (lookahead == 'O') ADVANCE(921);
      if (lookahead == 'R') ADVANCE(390);
      if (lookahead == 'Y') ADVANCE(307);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'E') ADVANCE(243);
      if (lookahead == 'I') ADVANCE(254);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(237);
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(918);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(918);
      if (lookahead == 'E') ADVANCE(959);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(958);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(923);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(238);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(310);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(351);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(394);
      if (lookahead == 'R') ADVANCE(290);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(351);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(394);
      if (lookahead == 'R') ADVANCE(290);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(391);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(221);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead == 'P') ADVANCE(232);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(306);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(231);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(246);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(222);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(223);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(224);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(233);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(320);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(225);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(263);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(226);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(315);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(324);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(376);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(250);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(377);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(379);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(215);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead == 'I') ADVANCE(245);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(384);
      END_STATE();
    case 87:
      if (lookahead == 'B') ADVANCE(404);
      END_STATE();
    case 88:
      if (lookahead == 'B') ADVANCE(405);
      END_STATE();
    case 89:
      if (lookahead == 'B') ADVANCE(234);
      END_STATE();
    case 90:
      if (lookahead == 'B') ADVANCE(236);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(192);
      if (lookahead == 'E') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(846);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(844);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(943);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'F') ADVANCE(62);
      if (lookahead == 'L') ADVANCE(168);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'F') ADVANCE(62);
      if (lookahead == 'L') ADVANCE(168);
      if (lookahead == 'S') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(195);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(195);
      if (lookahead == 'Y') ADVANCE(207);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(360);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(363);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(138);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(202);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(329);
      END_STATE();
    case 106:
      if (lookahead == 'C') ADVANCE(387);
      END_STATE();
    case 107:
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(865);
      if (lookahead == 'U') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(180);
      END_STATE();
    case 108:
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(864);
      END_STATE();
    case 109:
      if (lookahead == 'D') ADVANCE(856);
      END_STATE();
    case 110:
      if (lookahead == 'D') ADVANCE(885);
      END_STATE();
    case 111:
      if (lookahead == 'D') ADVANCE(972);
      END_STATE();
    case 112:
      if (lookahead == 'D') ADVANCE(973);
      END_STATE();
    case 113:
      if (lookahead == 'D') ADVANCE(859);
      END_STATE();
    case 114:
      if (lookahead == 'D') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'D') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(166);
      if (lookahead == 'T') ADVANCE(938);
      END_STATE();
    case 116:
      if (lookahead == 'D') ADVANCE(160);
      END_STATE();
    case 117:
      if (lookahead == 'D') ADVANCE(83);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(400);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead == 'I') ADVANCE(245);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(63);
      if (lookahead == 'I') ADVANCE(185);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(898);
      if (lookahead == 'I') ADVANCE(269);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(966);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(929);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(919);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(968);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(931);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(894);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(857);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(839);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(853);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(815);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(945);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(920);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(818);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(910);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(817);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(961);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(177);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(965);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(399);
      if (lookahead == 'I') ADVANCE(253);
      if (lookahead == 'O') ADVANCE(921);
      if (lookahead == 'Y') ADVANCE(307);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(401);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(398);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == 'I') ADVANCE(255);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(344);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(293);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(311);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(312);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(249);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(313);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(314);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(375);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(359);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(316);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(330);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(317);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(378);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(349);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(278);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 174:
      if (lookahead == 'F') ADVANCE(904);
      if (lookahead == 'N') ADVANCE(881);
      END_STATE();
    case 175:
      if (lookahead == 'F') ADVANCE(179);
      if (lookahead == 'N') ADVANCE(837);
      if (lookahead == 'R') ADVANCE(889);
      if (lookahead == 'U') ADVANCE(386);
      if (lookahead == 'W') ADVANCE(282);
      END_STATE();
    case 176:
      if (lookahead == 'F') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(887);
      END_STATE();
    case 177:
      if (lookahead == 'F') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(93);
      END_STATE();
    case 178:
      if (lookahead == 'F') ADVANCE(353);
      END_STATE();
    case 179:
      if (lookahead == 'F') ADVANCE(350);
      END_STATE();
    case 180:
      if (lookahead == 'G') ADVANCE(878);
      END_STATE();
    case 181:
      if (lookahead == 'G') ADVANCE(210);
      END_STATE();
    case 182:
      if (lookahead == 'G') ADVANCE(896);
      END_STATE();
    case 183:
      if (lookahead == 'G') ADVANCE(843);
      END_STATE();
    case 184:
      if (lookahead == 'G') ADVANCE(952);
      END_STATE();
    case 185:
      if (lookahead == 'G') ADVANCE(194);
      END_STATE();
    case 186:
      if (lookahead == 'G') ADVANCE(326);
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 187:
      if (lookahead == 'G') ADVANCE(167);
      END_STATE();
    case 188:
      if (lookahead == 'H') ADVANCE(912);
      END_STATE();
    case 189:
      if (lookahead == 'H') ADVANCE(911);
      END_STATE();
    case 190:
      if (lookahead == 'H') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(368);
      END_STATE();
    case 191:
      if (lookahead == 'H') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(372);
      END_STATE();
    case 192:
      if (lookahead == 'H') ADVANCE(155);
      END_STATE();
    case 193:
      if (lookahead == 'H') ADVANCE(406);
      END_STATE();
    case 194:
      if (lookahead == 'H') ADVANCE(357);
      END_STATE();
    case 195:
      if (lookahead == 'H') ADVANCE(77);
      END_STATE();
    case 196:
      if (lookahead == 'I') ADVANCE(410);
      END_STATE();
    case 197:
      if (lookahead == 'I') ADVANCE(245);
      END_STATE();
    case 198:
      if (lookahead == 'I') ADVANCE(181);
      if (lookahead == 'O') ADVANCE(291);
      if (lookahead == 'Y') ADVANCE(369);
      END_STATE();
    case 199:
      if (lookahead == 'I') ADVANCE(255);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(260);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(256);
      END_STATE();
    case 202:
      if (lookahead == 'I') ADVANCE(346);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 204:
      if (lookahead == 'I') ADVANCE(270);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(356);
      END_STATE();
    case 206:
      if (lookahead == 'I') ADVANCE(281);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(271);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(272);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == 'S') ADVANCE(172);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(296);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(347);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(277);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 219:
      if (lookahead == 'L') ADVANCE(957);
      END_STATE();
    case 220:
      if (lookahead == 'L') ADVANCE(928);
      END_STATE();
    case 221:
      if (lookahead == 'L') ADVANCE(944);
      END_STATE();
    case 222:
      if (lookahead == 'L') ADVANCE(935);
      END_STATE();
    case 223:
      if (lookahead == 'L') ADVANCE(942);
      END_STATE();
    case 224:
      if (lookahead == 'L') ADVANCE(835);
      END_STATE();
    case 225:
      if (lookahead == 'L') ADVANCE(936);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(934);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(389);
      if (lookahead == 'N') ADVANCE(345);
      if (lookahead == 'U') ADVANCE(273);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(348);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(220);
      if (lookahead == 'M') ADVANCE(159);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(149);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == 'T') ADVANCE(821);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(240);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(196);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(361);
      END_STATE();
    case 236:
      if (lookahead == 'L') ADVANCE(134);
      END_STATE();
    case 237:
      if (lookahead == 'L') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(158);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(214);
      END_STATE();
    case 241:
      if (lookahead == 'M') ADVANCE(822);
      END_STATE();
    case 242:
      if (lookahead == 'M') ADVANCE(219);
      END_STATE();
    case 243:
      if (lookahead == 'M') ADVANCE(302);
      END_STATE();
    case 244:
      if (lookahead == 'M') ADVANCE(302);
      if (lookahead == 'X') ADVANCE(354);
      END_STATE();
    case 245:
      if (lookahead == 'M') ADVANCE(205);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(304);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(124);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(262);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(135);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(139);
      END_STATE();
    case 252:
      if (lookahead == 'M') ADVANCE(171);
      END_STATE();
    case 253:
      if (lookahead == 'M') ADVANCE(169);
      END_STATE();
    case 254:
      if (lookahead == 'M') ADVANCE(141);
      END_STATE();
    case 255:
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 256:
      if (lookahead == 'M') ADVANCE(70);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(159);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(837);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'W') ADVANCE(282);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(877);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(833);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(954);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(860);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(933);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(946);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(879);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(370);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(182);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(183);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(184);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(355);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(127);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(358);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(364);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(365);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(366);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(143);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(373);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(162);
      END_STATE();
    case 283:
      if (lookahead == 'O') ADVANCE(916);
      if (lookahead == 'U') ADVANCE(229);
      END_STATE();
    case 284:
      if (lookahead == 'O') ADVANCE(186);
      END_STATE();
    case 285:
      if (lookahead == 'O') ADVANCE(411);
      END_STATE();
    case 286:
      if (lookahead == 'O') ADVANCE(915);
      END_STATE();
    case 287:
      if (lookahead == 'O') ADVANCE(819);
      END_STATE();
    case 288:
      if (lookahead == 'O') ADVANCE(200);
      if (lookahead == 'S') ADVANCE(295);
      END_STATE();
    case 289:
      if (lookahead == 'O') ADVANCE(279);
      END_STATE();
    case 290:
      if (lookahead == 'O') ADVANCE(301);
      END_STATE();
    case 291:
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead == 'X') ADVANCE(43);
      END_STATE();
    case 292:
      if (lookahead == 'O') ADVANCE(241);
      END_STATE();
    case 293:
      if (lookahead == 'O') ADVANCE(388);
      END_STATE();
    case 294:
      if (lookahead == 'O') ADVANCE(274);
      END_STATE();
    case 295:
      if (lookahead == 'O') ADVANCE(261);
      END_STATE();
    case 296:
      if (lookahead == 'O') ADVANCE(264);
      END_STATE();
    case 297:
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == 'R') ADVANCE(292);
      END_STATE();
    case 298:
      if (lookahead == 'O') ADVANCE(318);
      if (lookahead == 'R') ADVANCE(292);
      END_STATE();
    case 299:
      if (lookahead == 'O') ADVANCE(352);
      END_STATE();
    case 300:
      if (lookahead == 'O') ADVANCE(352);
      if (lookahead == 'U') ADVANCE(257);
      END_STATE();
    case 301:
      if (lookahead == 'P') ADVANCE(855);
      END_STATE();
    case 302:
      if (lookahead == 'P') ADVANCE(925);
      END_STATE();
    case 303:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 304:
      if (lookahead == 'P') ADVANCE(962);
      END_STATE();
    case 305:
      if (lookahead == 'P') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(122);
      END_STATE();
    case 306:
      if (lookahead == 'P') ADVANCE(193);
      END_STATE();
    case 307:
      if (lookahead == 'P') ADVANCE(126);
      END_STATE();
    case 308:
      if (lookahead == 'R') ADVANCE(889);
      END_STATE();
    case 309:
      if (lookahead == 'R') ADVANCE(902);
      END_STATE();
    case 310:
      if (lookahead == 'R') ADVANCE(948);
      END_STATE();
    case 311:
      if (lookahead == 'R') ADVANCE(854);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(828);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(830);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(924);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(951);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(950);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(940);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(901);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(145);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(402);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(403);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(293);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(203);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(407);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(408);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(131);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(170);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(367);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(199);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 334:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 335:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 336:
      if (lookahead == 'R') ADVANCE(216);
      END_STATE();
    case 337:
      if (lookahead == 'R') ADVANCE(217);
      END_STATE();
    case 338:
      if (lookahead == 'R') ADVANCE(218);
      END_STATE();
    case 339:
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 340:
      if (lookahead == 'S') ADVANCE(831);
      END_STATE();
    case 341:
      if (lookahead == 'S') ADVANCE(906);
      END_STATE();
    case 342:
      if (lookahead == 'S') ADVANCE(820);
      END_STATE();
    case 343:
      if (lookahead == 'S') ADVANCE(382);
      END_STATE();
    case 344:
      if (lookahead == 'S') ADVANCE(340);
      END_STATE();
    case 345:
      if (lookahead == 'S') ADVANCE(381);
      END_STATE();
    case 346:
      if (lookahead == 'S') ADVANCE(211);
      END_STATE();
    case 347:
      if (lookahead == 'S') ADVANCE(371);
      END_STATE();
    case 348:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 349:
      if (lookahead == 'S') ADVANCE(374);
      END_STATE();
    case 350:
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 352:
      if (lookahead == 'T') ADVANCE(893);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(824);
      END_STATE();
    case 354:
      if (lookahead == 'T') ADVANCE(953);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(874);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(848);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(826);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(941);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(850);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(813);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(908);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(964);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(870);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(937);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(872);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(907);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(816);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(188);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(285);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(341);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(189);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(287);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 375:
      if (lookahead == 'T') ADVANCE(321);
      END_STATE();
    case 376:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 377:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 378:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 379:
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 380:
      if (lookahead == 'T') ADVANCE(150);
      END_STATE();
    case 381:
      if (lookahead == 'T') ADVANCE(327);
      END_STATE();
    case 382:
      if (lookahead == 'T') ADVANCE(206);
      END_STATE();
    case 383:
      if (lookahead == 'T') ADVANCE(154);
      END_STATE();
    case 384:
      if (lookahead == 'T') ADVANCE(157);
      END_STATE();
    case 385:
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == 'X') ADVANCE(876);
      END_STATE();
    case 386:
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 387:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 388:
      if (lookahead == 'U') ADVANCE(303);
      END_STATE();
    case 389:
      if (lookahead == 'U') ADVANCE(248);
      END_STATE();
    case 390:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 391:
      if (lookahead == 'U') ADVANCE(235);
      END_STATE();
    case 392:
      if (lookahead == 'U') ADVANCE(156);
      END_STATE();
    case 393:
      if (lookahead == 'U') ADVANCE(362);
      END_STATE();
    case 394:
      if (lookahead == 'U') ADVANCE(90);
      END_STATE();
    case 395:
      if (lookahead == 'V') ADVANCE(204);
      END_STATE();
    case 396:
      if (lookahead == 'W') ADVANCE(858);
      END_STATE();
    case 397:
      if (lookahead == 'X') ADVANCE(212);
      END_STATE();
    case 398:
      if (lookahead == 'X') ADVANCE(900);
      END_STATE();
    case 399:
      if (lookahead == 'X') ADVANCE(354);
      END_STATE();
    case 400:
      if (lookahead == 'Y') ADVANCE(862);
      END_STATE();
    case 401:
      if (lookahead == 'Y') ADVANCE(947);
      END_STATE();
    case 402:
      if (lookahead == 'Y') ADVANCE(851);
      END_STATE();
    case 403:
      if (lookahead == 'Y') ADVANCE(970);
      END_STATE();
    case 404:
      if (lookahead == 'Y') ADVANCE(842);
      END_STATE();
    case 405:
      if (lookahead == 'Y') ADVANCE(841);
      END_STATE();
    case 406:
      if (lookahead == 'Y') ADVANCE(971);
      END_STATE();
    case 407:
      if (lookahead == 'Y') ADVANCE(927);
      END_STATE();
    case 408:
      if (lookahead == 'Y') ADVANCE(207);
      END_STATE();
    case 409:
      if (lookahead == 'Z') ADVANCE(969);
      END_STATE();
    case 410:
      if (lookahead == 'Z') ADVANCE(153);
      END_STATE();
    case 411:
      if (lookahead == '_') ADVANCE(208);
      END_STATE();
    case 412:
      if (lookahead == '_') ADVANCE(575);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(594);
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(595);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead == 'o') ADVANCE(921);
      if (lookahead == 'r') ADVANCE(757);
      if (lookahead == 'y') ADVANCE(674);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(918);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(918);
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(958);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(923);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'i') ADVANCE(710);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead == 'p') ADVANCE(599);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(744);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 452:
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 454:
      if (lookahead == 'b') ADVANCE(771);
      END_STATE();
    case 455:
      if (lookahead == 'b') ADVANCE(772);
      END_STATE();
    case 456:
      if (lookahead == 'b') ADVANCE(601);
      END_STATE();
    case 457:
      if (lookahead == 'b') ADVANCE(603);
      END_STATE();
    case 458:
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 459:
      if (lookahead == 'c') ADVANCE(846);
      END_STATE();
    case 460:
      if (lookahead == 'c') ADVANCE(844);
      END_STATE();
    case 461:
      if (lookahead == 'c') ADVANCE(943);
      END_STATE();
    case 462:
      if (lookahead == 'c') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(429);
      if (lookahead == 'l') ADVANCE(535);
      END_STATE();
    case 463:
      if (lookahead == 'c') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(429);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 464:
      if (lookahead == 'c') ADVANCE(562);
      END_STATE();
    case 465:
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'y') ADVANCE(574);
      END_STATE();
    case 466:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(496);
      END_STATE();
    case 468:
      if (lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 469:
      if (lookahead == 'c') ADVANCE(730);
      END_STATE();
    case 470:
      if (lookahead == 'c') ADVANCE(505);
      END_STATE();
    case 471:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 472:
      if (lookahead == 'c') ADVANCE(696);
      END_STATE();
    case 473:
      if (lookahead == 'c') ADVANCE(754);
      END_STATE();
    case 474:
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == 's') ADVANCE(867);
      if (lookahead == 'u') ADVANCE(737);
      if (lookahead == 'v') ADVANCE(547);
      END_STATE();
    case 475:
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(747);
      if (lookahead == 's') ADVANCE(864);
      END_STATE();
    case 476:
      if (lookahead == 'd') ADVANCE(856);
      END_STATE();
    case 477:
      if (lookahead == 'd') ADVANCE(885);
      END_STATE();
    case 478:
      if (lookahead == 'd') ADVANCE(972);
      END_STATE();
    case 479:
      if (lookahead == 'd') ADVANCE(973);
      END_STATE();
    case 480:
      if (lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 481:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 482:
      if (lookahead == 'd') ADVANCE(511);
      if (lookahead == 'n') ADVANCE(519);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 't') ADVANCE(939);
      END_STATE();
    case 483:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 484:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(920);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(961);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(766);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'o') ADVANCE(921);
      if (lookahead == 'y') ADVANCE(674);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 541:
      if (lookahead == 'f') ADVANCE(904);
      if (lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 542:
      if (lookahead == 'f') ADVANCE(546);
      if (lookahead == 'n') ADVANCE(837);
      if (lookahead == 'r') ADVANCE(891);
      if (lookahead == 'u') ADVANCE(753);
      if (lookahead == 'w') ADVANCE(649);
      END_STATE();
    case 543:
      if (lookahead == 'f') ADVANCE(546);
      if (lookahead == 'r') ADVANCE(887);
      END_STATE();
    case 544:
      if (lookahead == 'f') ADVANCE(429);
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 545:
      if (lookahead == 'f') ADVANCE(720);
      END_STATE();
    case 546:
      if (lookahead == 'f') ADVANCE(717);
      END_STATE();
    case 547:
      if (lookahead == 'g') ADVANCE(878);
      END_STATE();
    case 548:
      if (lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 549:
      if (lookahead == 'g') ADVANCE(896);
      END_STATE();
    case 550:
      if (lookahead == 'g') ADVANCE(843);
      END_STATE();
    case 551:
      if (lookahead == 'g') ADVANCE(952);
      END_STATE();
    case 552:
      if (lookahead == 'g') ADVANCE(561);
      END_STATE();
    case 553:
      if (lookahead == 'g') ADVANCE(693);
      if (lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 554:
      if (lookahead == 'g') ADVANCE(534);
      END_STATE();
    case 555:
      if (lookahead == 'h') ADVANCE(913);
      END_STATE();
    case 556:
      if (lookahead == 'h') ADVANCE(911);
      END_STATE();
    case 557:
      if (lookahead == 'h') ADVANCE(514);
      if (lookahead == 'i') ADVANCE(735);
      END_STATE();
    case 558:
      if (lookahead == 'h') ADVANCE(514);
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 559:
      if (lookahead == 'h') ADVANCE(522);
      END_STATE();
    case 560:
      if (lookahead == 'h') ADVANCE(773);
      END_STATE();
    case 561:
      if (lookahead == 'h') ADVANCE(724);
      END_STATE();
    case 562:
      if (lookahead == 'h') ADVANCE(444);
      END_STATE();
    case 563:
      if (lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead == 'y') ADVANCE(736);
      END_STATE();
    case 566:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 569:
      if (lookahead == 'i') ADVANCE(713);
      END_STATE();
    case 570:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 571:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 572:
      if (lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 573:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(638);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 576:
      if (lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 578:
      if (lookahead == 'i') ADVANCE(663);
      END_STATE();
    case 579:
      if (lookahead == 'i') ADVANCE(714);
      END_STATE();
    case 580:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 581:
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 's') ADVANCE(540);
      END_STATE();
    case 582:
      if (lookahead == 'i') ADVANCE(644);
      END_STATE();
    case 583:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 584:
      if (lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 585:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 586:
      if (lookahead == 'l') ADVANCE(957);
      END_STATE();
    case 587:
      if (lookahead == 'l') ADVANCE(928);
      END_STATE();
    case 588:
      if (lookahead == 'l') ADVANCE(944);
      END_STATE();
    case 589:
      if (lookahead == 'l') ADVANCE(935);
      END_STATE();
    case 590:
      if (lookahead == 'l') ADVANCE(942);
      END_STATE();
    case 591:
      if (lookahead == 'l') ADVANCE(835);
      END_STATE();
    case 592:
      if (lookahead == 'l') ADVANCE(936);
      END_STATE();
    case 593:
      if (lookahead == 'l') ADVANCE(934);
      END_STATE();
    case 594:
      if (lookahead == 'l') ADVANCE(756);
      if (lookahead == 'n') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(640);
      END_STATE();
    case 595:
      if (lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 596:
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead == 't') ADVANCE(821);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 600:
      if (lookahead == 'l') ADVANCE(563);
      END_STATE();
    case 601:
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 602:
      if (lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 603:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 604:
      if (lookahead == 'l') ADVANCE(759);
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 605:
      if (lookahead == 'l') ADVANCE(759);
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 606:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 607:
      if (lookahead == 'l') ADVANCE(581);
      END_STATE();
    case 608:
      if (lookahead == 'm') ADVANCE(822);
      END_STATE();
    case 609:
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 610:
      if (lookahead == 'm') ADVANCE(669);
      END_STATE();
    case 611:
      if (lookahead == 'm') ADVANCE(669);
      if (lookahead == 'x') ADVANCE(721);
      END_STATE();
    case 612:
      if (lookahead == 'm') ADVANCE(572);
      END_STATE();
    case 613:
      if (lookahead == 'm') ADVANCE(670);
      END_STATE();
    case 614:
      if (lookahead == 'm') ADVANCE(494);
      END_STATE();
    case 615:
      if (lookahead == 'm') ADVANCE(629);
      END_STATE();
    case 616:
      if (lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 617:
      if (lookahead == 'm') ADVANCE(502);
      END_STATE();
    case 618:
      if (lookahead == 'm') ADVANCE(506);
      END_STATE();
    case 619:
      if (lookahead == 'm') ADVANCE(538);
      END_STATE();
    case 620:
      if (lookahead == 'm') ADVANCE(536);
      END_STATE();
    case 621:
      if (lookahead == 'm') ADVANCE(508);
      END_STATE();
    case 622:
      if (lookahead == 'm') ADVANCE(440);
      END_STATE();
    case 623:
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 624:
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 625:
      if (lookahead == 'n') ADVANCE(837);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 'w') ADVANCE(649);
      END_STATE();
    case 626:
      if (lookahead == 'n') ADVANCE(877);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(955);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(860);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(933);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(946);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(879);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(737);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(549);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(917);
      if (lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(819);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(567);
      if (lookahead == 's') ADVANCE(662);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(718);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(718);
      if (lookahead == 'u') ADVANCE(624);
      END_STATE();
    case 668:
      if (lookahead == 'p') ADVANCE(855);
      END_STATE();
    case 669:
      if (lookahead == 'p') ADVANCE(926);
      END_STATE();
    case 670:
      if (lookahead == 'p') ADVANCE(963);
      END_STATE();
    case 671:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 672:
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 673:
      if (lookahead == 'p') ADVANCE(560);
      END_STATE();
    case 674:
      if (lookahead == 'p') ADVANCE(492);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(854);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(830);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(950);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(940);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(901);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(774);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(831);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(906);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(749);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(707);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(824);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(953);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(848);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(826);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(941);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(813);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(908);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(964);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(937);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(872);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(816);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(688);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(694);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == 'x') ADVANCE(876);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 755:
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 756:
      if (lookahead == 'u') ADVANCE(615);
      END_STATE();
    case 757:
      if (lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 758:
      if (lookahead == 'u') ADVANCE(602);
      END_STATE();
    case 759:
      if (lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 760:
      if (lookahead == 'u') ADVANCE(729);
      END_STATE();
    case 761:
      if (lookahead == 'u') ADVANCE(457);
      END_STATE();
    case 762:
      if (lookahead == 'v') ADVANCE(571);
      END_STATE();
    case 763:
      if (lookahead == 'w') ADVANCE(858);
      END_STATE();
    case 764:
      if (lookahead == 'x') ADVANCE(579);
      END_STATE();
    case 765:
      if (lookahead == 'x') ADVANCE(900);
      END_STATE();
    case 766:
      if (lookahead == 'x') ADVANCE(721);
      END_STATE();
    case 767:
      if (lookahead == 'y') ADVANCE(862);
      END_STATE();
    case 768:
      if (lookahead == 'y') ADVANCE(947);
      END_STATE();
    case 769:
      if (lookahead == 'y') ADVANCE(851);
      END_STATE();
    case 770:
      if (lookahead == 'y') ADVANCE(970);
      END_STATE();
    case 771:
      if (lookahead == 'y') ADVANCE(842);
      END_STATE();
    case 772:
      if (lookahead == 'y') ADVANCE(841);
      END_STATE();
    case 773:
      if (lookahead == 'y') ADVANCE(971);
      END_STATE();
    case 774:
      if (lookahead == 'y') ADVANCE(927);
      END_STATE();
    case 775:
      if (lookahead == 'y') ADVANCE(574);
      END_STATE();
    case 776:
      if (lookahead == 'z') ADVANCE(969);
      END_STATE();
    case 777:
      if (lookahead == 'z') ADVANCE(520);
      END_STATE();
    case 778:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(778)
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(198);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(297);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(265);
      if (lookahead == 'J') ADVANCE(288);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'N') ADVANCE(300);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(121);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == 'U') ADVANCE(305);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == 'X') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead == 'f') ADVANCE(664);
      if (lookahead == 'g') ADVANCE(515);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'j') ADVANCE(654);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead == 'm') ADVANCE(655);
      if (lookahead == 'n') ADVANCE(667);
      if (lookahead == 'o') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(699);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'v') ADVANCE(425);
      if (lookahead == 'w') ADVANCE(558);
      if (lookahead == 'x') ADVANCE(609);
      END_STATE();
    case 779:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(779)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'C') ADVANCE(1102);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1077);
      if (lookahead == 'J') ADVANCE(1092);
      if (lookahead == 'L') ADVANCE(1033);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'R') ADVANCE(1059);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'c') ADVANCE(1224);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1199);
      if (lookahead == 'j') ADVANCE(1214);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 780:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(780)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'C') ADVANCE(1102);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1077);
      if (lookahead == 'J') ADVANCE(1092);
      if (lookahead == 'L') ADVANCE(1033);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'R') ADVANCE(1059);
      if (lookahead == 'W') ADVANCE(1054);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'c') ADVANCE(1224);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1199);
      if (lookahead == 'j') ADVANCE(1214);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == 'w') ADVANCE(1176);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 781:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(781)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 782:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 783:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(268);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(298);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == 'M') ADVANCE(86);
      if (lookahead == 'N') ADVANCE(299);
      if (lookahead == 'O') ADVANCE(176);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == 'W') ADVANCE(190);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'f') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead == 'm') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == 'p') ADVANCE(699);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == 'v') ADVANCE(446);
      if (lookahead == 'w') ADVANCE(557);
      END_STATE();
    case 784:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(784)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'W') ADVANCE(1064);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'w') ADVANCE(1186);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 785:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(785)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 786:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(786)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1099);
      if (lookahead == 'W') ADVANCE(1064);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'w') ADVANCE(1186);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 787:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(787)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'G') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == 'N') ADVANCE(286);
      if (lookahead == 'O') ADVANCE(308);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == 'g') ADVANCE(689);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead == 'n') ADVANCE(652);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead == 'w') ADVANCE(558);
      END_STATE();
    case 788:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(788)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'O') ADVANCE(1101);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'o') ADVANCE(1223);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 789:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(789)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1079);
      if (lookahead == 'O') ADVANCE(1101);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'o') ADVANCE(1223);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 790:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(790)
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1093);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 791:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(791)
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1093);
      if (lookahead == 'S') ADVANCE(1035);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1215);
      if (lookahead == 's') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 792:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(792)
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1093);
      if (lookahead == 'D') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1215);
      if (lookahead == 'd') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 793:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(793)
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'C') ADVANCE(1102);
      if (lookahead == 'F') ADVANCE(1096);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1084);
      if (lookahead == 'J') ADVANCE(1092);
      if (lookahead == 'L') ADVANCE(1033);
      if (lookahead == 'O') ADVANCE(1103);
      if (lookahead == 'R') ADVANCE(1059);
      if (lookahead == 'U') ADVANCE(1120);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'c') ADVANCE(1224);
      if (lookahead == 'f') ADVANCE(1218);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1206);
      if (lookahead == 'j') ADVANCE(1214);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == 'u') ADVANCE(1242);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 794:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(794)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'C') ADVANCE(1102);
      if (lookahead == 'F') ADVANCE(1096);
      if (lookahead == 'G') ADVANCE(1107);
      if (lookahead == 'I') ADVANCE(1084);
      if (lookahead == 'J') ADVANCE(1092);
      if (lookahead == 'L') ADVANCE(1033);
      if (lookahead == 'O') ADVANCE(1103);
      if (lookahead == 'R') ADVANCE(1059);
      if (lookahead == 'U') ADVANCE(1120);
      if (lookahead == 'W') ADVANCE(1054);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'c') ADVANCE(1224);
      if (lookahead == 'f') ADVANCE(1218);
      if (lookahead == 'g') ADVANCE(1229);
      if (lookahead == 'i') ADVANCE(1206);
      if (lookahead == 'j') ADVANCE(1214);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == 'u') ADVANCE(1242);
      if (lookahead == 'w') ADVANCE(1176);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 795:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(795)
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(1021);
      if (lookahead == 'T') ADVANCE(1108);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'f') ADVANCE(1143);
      if (lookahead == 't') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 796:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '`') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 797:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1116);
      if (lookahead == 'D') ADVANCE(1047);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'W') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1238);
      if (lookahead == 'd') ADVANCE(1169);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'w') ADVANCE(1186);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 798:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(798)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1097);
      if (lookahead == 'K') ADVANCE(1042);
      if (lookahead == 'P') ADVANCE(1111);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1219);
      if (lookahead == 'k') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1233);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 799:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(799)
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1116);
      if (lookahead == 'D') ADVANCE(1047);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1238);
      if (lookahead == 'd') ADVANCE(1169);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 800:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(800)
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 801:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(801)
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'F') ADVANCE(1110);
      if (lookahead == 'W') ADVANCE(1064);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead == 'w') ADVANCE(1186);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 802:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(802)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'L') ADVANCE(1058);
      if (lookahead == 'O') ADVANCE(1103);
      if (lookahead == 'W') ADVANCE(1055);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead == 'w') ADVANCE(1177);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 803:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(803)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'F') ADVANCE(1096);
      if (lookahead == 'O') ADVANCE(1080);
      if (lookahead == 'U') ADVANCE(1117);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'f') ADVANCE(1218);
      if (lookahead == 'o') ADVANCE(1202);
      if (lookahead == 'u') ADVANCE(1239);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 804:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(804)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == 'D') ADVANCE(1043);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'd') ADVANCE(1165);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 805:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 806:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(806)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(1050);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'i') ADVANCE(1172);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 807:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(807)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'L') ADVANCE(1026);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'l') ADVANCE(1148);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 808:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(808)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'O') ADVANCE(1080);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(1236);
      if (lookahead == 'o') ADVANCE(1202);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 809:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(809)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1095);
      if (lookahead == 'T') ADVANCE(1091);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'c') ADVANCE(1217);
      if (lookahead == 't') ADVANCE(1213);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 810:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(810)
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(647);
      END_STATE();
    case 811:
      if (eof) ADVANCE(812);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(811)
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '%') ADVANCE(990);
      if (lookahead == '\'') ADVANCE(997);
      if (lookahead == '(') ADVANCE(974);
      if (lookahead == ')') ADVANCE(975);
      if (lookahead == '*') ADVANCE(986);
      if (lookahead == '+') ADVANCE(987);
      if (lookahead == ',') ADVANCE(976);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(984);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == ';') ADVANCE(983);
      if (lookahead == '<') ADVANCE(992);
      if (lookahead == '=') ADVANCE(985);
      if (lookahead == '>') ADVANCE(996);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'B') ADVANCE(198);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(174);
      if (lookahead == 'J') ADVANCE(288);
      if (lookahead == 'K') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(283);
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(305);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(190);
      if (lookahead == 'X') ADVANCE(242);
      if (lookahead == 'Z') ADVANCE(294);
      if (lookahead == '^') ADVANCE(991);
      if (lookahead == '`') ADVANCE(1016);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead == 'f') ADVANCE(415);
      if (lookahead == 'g') ADVANCE(515);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == 'j') ADVANCE(654);
      if (lookahead == 'k') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'v') ADVANCE(420);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == 'x') ADVANCE(609);
      if (lookahead == 'z') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_keyword_outer);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keyword_cross);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_keyword_cross);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_keyword_lateral);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_keyword_lateral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_keyword_alter);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_keyword_drop);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_keyword_add);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_keyword_view);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_keyword_materialized);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_keyword_column);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_keyword_column);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(846);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(846);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(160);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_keyword_using);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_keyword_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(496);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_keyword_cascade);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'O') ADVANCE(393);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'o') ADVANCE(760);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_keyword_no);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 'T') ADVANCE(893);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_keyword_data);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_keyword_type);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_keyword_rename);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_keyword_to);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_keyword_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_keyword_schema);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_keyword_owner);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'O') ADVANCE(333);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_keyword_temporary);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'E') ADVANCE(187);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_keyword_int_token2);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token2);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(956);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(956);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(213);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(409);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token2);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 'S') ADVANCE(374);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token4);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_keyword_timestamptz_token1);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_keyword_geometry);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_keyword_geography);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_keyword_box2d);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_keyword_box3d);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1014);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1005);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(1005);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(999);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(1014);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '*') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(1009);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(993);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(995);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(1005);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(999);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(1005);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(999);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(1005);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(999);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1001);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(1003);
      if (lookahead == '/') ADVANCE(998);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1005);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1005);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1004);
      if (lookahead == '-') ADVANCE(1003);
      if (lookahead == '/') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1005);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1005);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(1014);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(1007);
      if (lookahead == '*') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(1009);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(1014);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '*') ADVANCE(1008);
      if (lookahead == '/') ADVANCE(981);
      if (lookahead != 0) ADVANCE(1009);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(1014);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '*') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(1009);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(978);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1010);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(1012);
      if (lookahead == '/') ADVANCE(1007);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1014);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1014);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead == '-') ADVANCE(1012);
      if (lookahead == '/') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1014);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1014);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1049);
      if (lookahead == 'I') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(899);
      if (lookahead == 'I') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1044);
      if (lookahead == 'I') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1031);
      if (lookahead == 'S') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(899);
      if (lookahead == 'i') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1153);
      if (lookahead == 's') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 14},
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
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 24},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 24},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 18},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 18},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 18},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 17},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 17},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 17},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 17},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 33},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 33},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 29},
  [202] = {.lex_state = 29},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 17},
  [207] = {.lex_state = 33},
  [208] = {.lex_state = 33},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 29},
  [211] = {.lex_state = 21},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 21},
  [214] = {.lex_state = 21},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 21},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 21},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 24},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 21},
  [224] = {.lex_state = 24},
  [225] = {.lex_state = 24},
  [226] = {.lex_state = 21},
  [227] = {.lex_state = 21},
  [228] = {.lex_state = 21},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 21},
  [232] = {.lex_state = 21},
  [233] = {.lex_state = 21},
  [234] = {.lex_state = 24},
  [235] = {.lex_state = 21},
  [236] = {.lex_state = 21},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 19},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 19},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 19},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 19},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 19},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 19},
  [259] = {.lex_state = 19},
  [260] = {.lex_state = 19},
  [261] = {.lex_state = 19},
  [262] = {.lex_state = 19},
  [263] = {.lex_state = 19},
  [264] = {.lex_state = 19},
  [265] = {.lex_state = 19},
  [266] = {.lex_state = 19},
  [267] = {.lex_state = 19},
  [268] = {.lex_state = 19},
  [269] = {.lex_state = 19},
  [270] = {.lex_state = 19},
  [271] = {.lex_state = 19},
  [272] = {.lex_state = 19},
  [273] = {.lex_state = 19},
  [274] = {.lex_state = 19},
  [275] = {.lex_state = 19},
  [276] = {.lex_state = 19},
  [277] = {.lex_state = 19},
  [278] = {.lex_state = 19},
  [279] = {.lex_state = 19},
  [280] = {.lex_state = 19},
  [281] = {.lex_state = 19},
  [282] = {.lex_state = 19},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 19},
  [285] = {.lex_state = 19},
  [286] = {.lex_state = 19},
  [287] = {.lex_state = 19},
  [288] = {.lex_state = 19},
  [289] = {.lex_state = 19},
  [290] = {.lex_state = 19},
  [291] = {.lex_state = 19},
  [292] = {.lex_state = 19},
  [293] = {.lex_state = 19},
  [294] = {.lex_state = 19},
  [295] = {.lex_state = 19},
  [296] = {.lex_state = 19},
  [297] = {.lex_state = 19},
  [298] = {.lex_state = 19},
  [299] = {.lex_state = 19},
  [300] = {.lex_state = 19},
  [301] = {.lex_state = 19},
  [302] = {.lex_state = 19},
  [303] = {.lex_state = 19},
  [304] = {.lex_state = 19},
  [305] = {.lex_state = 19},
  [306] = {.lex_state = 19},
  [307] = {.lex_state = 19},
  [308] = {.lex_state = 19},
  [309] = {.lex_state = 19},
  [310] = {.lex_state = 19},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 19},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 24},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 28},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 38},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 25},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 24},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 25},
  [336] = {.lex_state = 28},
  [337] = {.lex_state = 25},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 25},
  [340] = {.lex_state = 7},
  [341] = {.lex_state = 28},
  [342] = {.lex_state = 28},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 23},
  [346] = {.lex_state = 23},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 27},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 28},
  [352] = {.lex_state = 28},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 28},
  [355] = {.lex_state = 23},
  [356] = {.lex_state = 25},
  [357] = {.lex_state = 25},
  [358] = {.lex_state = 25},
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 7},
  [361] = {.lex_state = 25},
  [362] = {.lex_state = 25},
  [363] = {.lex_state = 7},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 28},
  [366] = {.lex_state = 28},
  [367] = {.lex_state = 28},
  [368] = {.lex_state = 7},
  [369] = {.lex_state = 28},
  [370] = {.lex_state = 7},
  [371] = {.lex_state = 28},
  [372] = {.lex_state = 7},
  [373] = {.lex_state = 23},
  [374] = {.lex_state = 7},
  [375] = {.lex_state = 7},
  [376] = {.lex_state = 7},
  [377] = {.lex_state = 27},
  [378] = {.lex_state = 27},
  [379] = {.lex_state = 7},
  [380] = {.lex_state = 7},
  [381] = {.lex_state = 17},
  [382] = {.lex_state = 34},
  [383] = {.lex_state = 17},
  [384] = {.lex_state = 7},
  [385] = {.lex_state = 27},
  [386] = {.lex_state = 7},
  [387] = {.lex_state = 17},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 17},
  [391] = {.lex_state = 25},
  [392] = {.lex_state = 35},
  [393] = {.lex_state = 25},
  [394] = {.lex_state = 25},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 34},
  [398] = {.lex_state = 7},
  [399] = {.lex_state = 35},
  [400] = {.lex_state = 36},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 35},
  [405] = {.lex_state = 19},
  [406] = {.lex_state = 23},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 27},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 35},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 23},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 36},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 27},
  [420] = {.lex_state = 36},
  [421] = {.lex_state = 34},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 23},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 34},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 26},
  [428] = {.lex_state = 27},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 26},
  [431] = {.lex_state = 27},
  [432] = {.lex_state = 27},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 27},
  [436] = {.lex_state = 36},
  [437] = {.lex_state = 26},
  [438] = {.lex_state = 23},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 23},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 23},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 26},
  [450] = {.lex_state = 23},
  [451] = {.lex_state = 23},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 27},
  [454] = {.lex_state = 36},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 27},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 19},
  [462] = {.lex_state = 19},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 19},
  [465] = {.lex_state = 19},
  [466] = {.lex_state = 19},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 40},
  [469] = {.lex_state = 26},
  [470] = {.lex_state = 40},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 40},
  [475] = {.lex_state = 40},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 40},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 40},
  [482] = {.lex_state = 26},
  [483] = {.lex_state = 26},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 40},
  [487] = {.lex_state = 40},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 40},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 40},
  [493] = {.lex_state = 40},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 19},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 24},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 19},
  [502] = {.lex_state = 42},
  [503] = {.lex_state = 37},
  [504] = {.lex_state = 24},
  [505] = {.lex_state = 42},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 42},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 42},
  [512] = {.lex_state = 26},
  [513] = {.lex_state = 39},
  [514] = {.lex_state = 42},
  [515] = {.lex_state = 37},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 37},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 37},
  [520] = {.lex_state = 40},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 26},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 24},
  [528] = {.lex_state = 26},
  [529] = {.lex_state = 37},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 42},
  [532] = {.lex_state = 24},
  [533] = {.lex_state = 26},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 26},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 24},
  [541] = {.lex_state = 24},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 37},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 19},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 36},
  [550] = {.lex_state = 19},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 19},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 19},
  [555] = {.lex_state = 19},
  [556] = {.lex_state = 19},
  [557] = {.lex_state = 19},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 19},
  [560] = {.lex_state = 19},
  [561] = {.lex_state = 19},
  [562] = {.lex_state = 19},
  [563] = {.lex_state = 19},
  [564] = {.lex_state = 19},
  [565] = {.lex_state = 19},
  [566] = {.lex_state = 19},
  [567] = {.lex_state = 19},
  [568] = {.lex_state = 19},
  [569] = {.lex_state = 19},
  [570] = {.lex_state = 19},
  [571] = {.lex_state = 19},
  [572] = {.lex_state = 36},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 19},
  [575] = {.lex_state = 37},
  [576] = {.lex_state = 36},
  [577] = {.lex_state = 19},
  [578] = {.lex_state = 19},
  [579] = {.lex_state = 19},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 19},
  [582] = {.lex_state = 19},
  [583] = {.lex_state = 19},
  [584] = {.lex_state = 19},
  [585] = {.lex_state = 19},
  [586] = {.lex_state = 36},
  [587] = {.lex_state = 19},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 19},
  [590] = {.lex_state = 37},
  [591] = {.lex_state = 37},
  [592] = {.lex_state = 19},
  [593] = {.lex_state = 36},
  [594] = {.lex_state = 19},
  [595] = {.lex_state = 36},
  [596] = {.lex_state = 36},
  [597] = {.lex_state = 19},
  [598] = {.lex_state = 37},
  [599] = {.lex_state = 19},
  [600] = {.lex_state = 24},
  [601] = {.lex_state = 19},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 19},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 19},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 19},
  [609] = {.lex_state = 19},
  [610] = {.lex_state = 19},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 19},
  [614] = {.lex_state = 19},
  [615] = {.lex_state = 24},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 19},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 19},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 19},
  [629] = {.lex_state = 19},
  [630] = {.lex_state = 19},
  [631] = {.lex_state = 19},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 19},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 19},
  [637] = {.lex_state = 19},
  [638] = {.lex_state = 19},
  [639] = {.lex_state = 19},
  [640] = {.lex_state = 19},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 19},
  [643] = {.lex_state = 19},
  [644] = {.lex_state = 19},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 19},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 19},
  [652] = {.lex_state = 19},
  [653] = {.lex_state = 19},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 19},
  [656] = {.lex_state = 19},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 19},
  [659] = {.lex_state = 19},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 19},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 19},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 19},
  [668] = {.lex_state = 19},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 19},
  [671] = {.lex_state = 19},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 19},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 19},
  [676] = {.lex_state = 19},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 19},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 19},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 19},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 19},
  [689] = {.lex_state = 19},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 19},
  [692] = {.lex_state = 19},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 19},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 19},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 19},
  [705] = {.lex_state = 19},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 19},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 19},
  [710] = {.lex_state = 19},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 19},
  [713] = {.lex_state = 19},
  [714] = {.lex_state = 19},
  [715] = {.lex_state = 19},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 19},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 19},
  [723] = {.lex_state = 19},
  [724] = {.lex_state = 19},
  [725] = {.lex_state = 19},
  [726] = {.lex_state = 19},
  [727] = {.lex_state = 19},
  [728] = {.lex_state = 19},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 19},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 19},
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
  [747] = {.lex_state = 24},
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
  [775] = {.lex_state = 8},
  [776] = {.lex_state = 8},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 8},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 19},
  [785] = {.lex_state = 7},
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
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 19},
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
  [813] = {.lex_state = 24},
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
  [824] = {.lex_state = 24},
  [825] = {.lex_state = 24},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 24},
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
  [858] = {.lex_state = 7},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 7},
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
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 24},
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
  [904] = {.lex_state = 0},
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
  [917] = {.lex_state = 1002},
  [918] = {.lex_state = 1011},
  [919] = {.lex_state = 19},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 24},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 19},
  [937] = {.lex_state = 1011},
  [938] = {.lex_state = 1002},
  [939] = {.lex_state = 1002},
  [940] = {.lex_state = 1011},
  [941] = {.lex_state = 19},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 19},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 19},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 19},
  [956] = {.lex_state = 19},
  [957] = {.lex_state = 19},
  [958] = {.lex_state = 19},
  [959] = {.lex_state = 19},
  [960] = {.lex_state = 19},
  [961] = {.lex_state = 19},
  [962] = {.lex_state = 19},
  [963] = {.lex_state = 19},
  [964] = {.lex_state = 19},
  [965] = {.lex_state = 19},
  [966] = {.lex_state = 19},
  [967] = {.lex_state = 19},
  [968] = {.lex_state = 19},
  [969] = {.lex_state = 19},
  [970] = {.lex_state = 19},
  [971] = {.lex_state = 19},
  [972] = {.lex_state = 19},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 24},
  [976] = {.lex_state = 24},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
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
  [994] = {.lex_state = 41},
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
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
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
    [sym_program] = STATE(952),
    [sym_statement] = STATE(949),
    [sym__select_statement] = STATE(948),
    [sym_select] = STATE(621),
    [sym__delete_statement] = STATE(948),
    [sym_delete] = STATE(768),
    [sym__create_statement] = STATE(948),
    [sym_create_table] = STATE(948),
    [sym_create_view] = STATE(948),
    [sym_create_materialized_view] = STATE(948),
    [sym__alter_statement] = STATE(948),
    [sym_alter_table] = STATE(948),
    [sym_alter_view] = STATE(948),
    [sym__drop_statement] = STATE(948),
    [sym_drop_table] = STATE(948),
    [sym_drop_view] = STATE(948),
    [sym__insert_statement] = STATE(948),
    [sym_insert] = STATE(948),
    [sym__update_statement] = STATE(948),
    [sym_update] = STATE(948),
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
    STATE(359), 1,
      sym_keyword_varchar,
    STATE(360), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(746), 10,
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
    STATE(359), 1,
      sym_keyword_varchar,
    STATE(360), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(792), 10,
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
    STATE(359), 1,
      sym_keyword_varchar,
    STATE(360), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(315), 10,
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
    STATE(41), 1,
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
    STATE(33), 1,
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
  [476] = 8,
    ACTIONS(65), 1,
      sym_keyword_as,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(41), 1,
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
    STATE(33), 1,
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
  [576] = 3,
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
  [615] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(18), 1,
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
  [662] = 3,
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
  [701] = 3,
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
  [740] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(18), 1,
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
  [976] = 4,
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
    ACTIONS(105), 12,
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
  [1014] = 4,
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
    ACTIONS(107), 12,
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
  [1052] = 4,
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
  [1090] = 4,
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
    ACTIONS(111), 12,
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
  [1128] = 3,
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
    ACTIONS(113), 21,
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
  [1164] = 4,
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
    ACTIONS(117), 12,
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
  [1202] = 3,
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
  [1238] = 3,
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
  [1274] = 3,
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
  [1310] = 4,
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
    ACTIONS(123), 12,
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
  [1348] = 4,
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
    ACTIONS(125), 12,
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
  [1386] = 3,
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
    ACTIONS(127), 21,
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
  [1422] = 3,
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
    ACTIONS(131), 21,
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
  [1458] = 3,
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
  [1494] = 4,
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
    ACTIONS(139), 12,
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
  [1532] = 3,
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
    ACTIONS(141), 21,
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
  [1568] = 3,
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
    ACTIONS(145), 21,
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
  [1604] = 3,
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
    ACTIONS(149), 21,
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
  [1640] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(155), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 21,
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
  [1676] = 3,
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
    ACTIONS(157), 21,
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
  [1712] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 21,
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
  [1784] = 8,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(177), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 16,
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
  [1829] = 6,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(177), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 17,
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
  [1870] = 4,
    ACTIONS(177), 1,
      anon_sym_CARET,
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
    ACTIONS(119), 19,
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
  [1907] = 8,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 16,
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
  [1952] = 11,
    ACTIONS(121), 1,
      sym_keyword_or,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(189), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 12,
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
  [2003] = 9,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(189), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 16,
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
  [2050] = 4,
    ACTIONS(187), 1,
      anon_sym_CARET,
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
    ACTIONS(119), 19,
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
  [2087] = 6,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 17,
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
  [2128] = 9,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(177), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 16,
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
  [2175] = 11,
    ACTIONS(121), 1,
      sym_keyword_or,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(177), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
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
    ACTIONS(119), 12,
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
  [2226] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    STATE(98), 1,
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
  [2270] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(98), 1,
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
  [2314] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 21,
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
  [2348] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(86), 1,
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
  [2392] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 21,
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
  [2426] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(86), 1,
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
  [2470] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(98), 1,
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
  [2514] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(86), 1,
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
  [2558] = 3,
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
  [2591] = 3,
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
  [2624] = 3,
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
  [2657] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(86), 1,
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
  [2700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 20,
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
  [2733] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(223), 1,
      anon_sym_DOT,
    STATE(98), 1,
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
  [2776] = 3,
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
  [2809] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(102), 1,
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
  [2850] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(98), 1,
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
  [2893] = 3,
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
  [2926] = 3,
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
  [2959] = 3,
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
  [2992] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_as,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(86), 1,
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
  [3035] = 3,
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
  [3068] = 3,
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
  [3101] = 3,
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
  [3134] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(102), 1,
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
  [3175] = 3,
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
  [3208] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(102), 1,
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
  [3249] = 3,
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
  [3281] = 3,
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
  [3313] = 3,
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
  [3345] = 3,
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
  [3377] = 3,
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
  [3409] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(155), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 18,
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
  [3441] = 3,
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
  [3473] = 3,
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
  [3505] = 3,
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
  [3537] = 3,
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
  [3569] = 3,
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
  [3601] = 3,
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
  [3633] = 3,
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
  [3665] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(102), 1,
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
  [3705] = 3,
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
  [3737] = 3,
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
  [3769] = 3,
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
  [3801] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(102), 1,
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
  [3841] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 18,
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
  [3873] = 3,
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
  [3905] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    STATE(61), 1,
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
  [3947] = 3,
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
  [3979] = 3,
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
  [4011] = 9,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_as,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_DOT,
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
  [4055] = 3,
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
  [4087] = 3,
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
  [4119] = 3,
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
  [4151] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(245), 1,
      anon_sym_DOT,
    STATE(61), 1,
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
  [4193] = 8,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_as,
    ACTIONS(243), 1,
      anon_sym_DOT,
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
  [4235] = 8,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_as,
    ACTIONS(247), 1,
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
  [4277] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(70), 1,
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
  [4316] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(70), 1,
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
  [4355] = 3,
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
  [4386] = 3,
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
  [4417] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(809), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(699), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4477] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(267), 1,
      sym_keyword_select,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(664), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(926), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4537] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(267), 1,
      sym_keyword_select,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(664), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(954), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4597] = 17,
    ACTIONS(269), 1,
      sym_keyword_left,
    ACTIONS(271), 1,
      sym_keyword_right,
    ACTIONS(275), 1,
      sym_keyword_join,
    ACTIONS(277), 1,
      sym_keyword_where,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(281), 1,
      sym_keyword_group_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(176), 1,
      sym_index_hint,
    STATE(408), 1,
      sym_where,
    STATE(463), 1,
      sym_group_by,
    STATE(507), 1,
      sym_order_by,
    STATE(607), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(273), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(285), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(287), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(178), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [4655] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(871), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(699), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4715] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(890), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(699), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4775] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(807), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(699), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4835] = 17,
    ACTIONS(283), 1,
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
    STATE(188), 1,
      sym_index_hint,
    STATE(407), 1,
      sym_where,
    STATE(477), 1,
      sym_group_by,
    STATE(507), 1,
      sym_order_by,
    STATE(607), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(287), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    ACTIONS(299), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(189), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [4893] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(847), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(699), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4953] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(267), 1,
      sym_keyword_select,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(664), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(950), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5013] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(267), 1,
      sym_keyword_select,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(664), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(946), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5073] = 6,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(495), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(311), 4,
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
  [5109] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(267), 1,
      sym_keyword_select,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(179), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(664), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(944), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5169] = 18,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(1008), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(699), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5229] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
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
  [5260] = 4,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 14,
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
  [5291] = 11,
    ACTIONS(121), 1,
      sym_keyword_or,
    ACTIONS(321), 1,
      sym_keyword_in,
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
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(323), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [5336] = 8,
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
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 11,
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
  [5375] = 17,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(337), 1,
      sym_keyword_distinct,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(869), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5432] = 11,
    ACTIONS(121), 1,
      sym_keyword_or,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(339), 1,
      sym_keyword_in,
    ACTIONS(345), 1,
      anon_sym_PLUS,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(341), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5477] = 6,
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
    ACTIONS(121), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 12,
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
  [5512] = 17,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(353), 1,
      sym_keyword_distinct,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(846), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5569] = 12,
    ACTIONS(321), 1,
      sym_keyword_in,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(329), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      sym_keyword_and,
    ACTIONS(359), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(323), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(355), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [5616] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 5,
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
  [5647] = 17,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(363), 1,
      sym_keyword_distinct,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(820), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5704] = 9,
    ACTIONS(321), 1,
      sym_keyword_in,
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
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 10,
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
  [5745] = 8,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 11,
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
  [5784] = 9,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(339), 1,
      sym_keyword_in,
    ACTIONS(345), 1,
      anon_sym_PLUS,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 10,
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
  [5825] = 11,
    ACTIONS(121), 1,
      sym_keyword_or,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_CARET,
    ACTIONS(375), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
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
    ACTIONS(119), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5870] = 9,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_CARET,
    ACTIONS(375), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 10,
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
  [5911] = 6,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(349), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 12,
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
  [5946] = 4,
    ACTIONS(373), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 14,
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
  [5977] = 17,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(381), 1,
      sym_keyword_distinct,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(1003), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6034] = 6,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 12,
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
  [6069] = 12,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_CARET,
    ACTIONS(375), 1,
      sym_keyword_in,
    ACTIONS(383), 1,
      sym_keyword_and,
    ACTIONS(385), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 2,
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
    ACTIONS(355), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6116] = 4,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 14,
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
  [6147] = 8,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_PLUS,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 11,
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
  [6186] = 17,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(387), 1,
      sym_keyword_distinct,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(930), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6243] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 15,
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
  [6271] = 11,
    ACTIONS(121), 1,
      sym_keyword_or,
    ACTIONS(389), 1,
      sym_keyword_in,
    ACTIONS(395), 1,
      anon_sym_PLUS,
    ACTIONS(397), 1,
      anon_sym_DASH,
    ACTIONS(399), 1,
      anon_sym_SLASH,
    ACTIONS(401), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(403), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6315] = 16,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(781), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6369] = 9,
    ACTIONS(389), 1,
      sym_keyword_in,
    ACTIONS(395), 1,
      anon_sym_PLUS,
    ACTIONS(397), 1,
      anon_sym_DASH,
    ACTIONS(399), 1,
      anon_sym_SLASH,
    ACTIONS(401), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6409] = 8,
    ACTIONS(395), 1,
      anon_sym_PLUS,
    ACTIONS(397), 1,
      anon_sym_DASH,
    ACTIONS(399), 1,
      anon_sym_SLASH,
    ACTIONS(401), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 10,
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
  [6447] = 4,
    ACTIONS(401), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 13,
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
  [6477] = 6,
    ACTIONS(399), 1,
      anon_sym_SLASH,
    ACTIONS(401), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 11,
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
  [6511] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(155), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 15,
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
  [6539] = 16,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(1009), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6593] = 6,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(551), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(311), 2,
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
  [6627] = 8,
    ACTIONS(411), 1,
      anon_sym_PLUS,
    ACTIONS(413), 1,
      anon_sym_DASH,
    ACTIONS(415), 1,
      anon_sym_SLASH,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(409), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 10,
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
  [6665] = 16,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(823), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6719] = 16,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(848), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6773] = 16,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(872), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6827] = 11,
    ACTIONS(121), 1,
      sym_keyword_or,
    ACTIONS(411), 1,
      anon_sym_PLUS,
    ACTIONS(413), 1,
      anon_sym_DASH,
    ACTIONS(415), 1,
      anon_sym_SLASH,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(425), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(409), 2,
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
    ACTIONS(119), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [6871] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(143), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 15,
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
  [6899] = 6,
    ACTIONS(415), 1,
      anon_sym_SLASH,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(409), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 11,
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
  [6933] = 3,
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
  [6961] = 9,
    ACTIONS(411), 1,
      anon_sym_PLUS,
    ACTIONS(413), 1,
      anon_sym_DASH,
    ACTIONS(415), 1,
      anon_sym_SLASH,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(425), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(409), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7001] = 4,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 13,
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
  [7031] = 3,
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
  [7059] = 16,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__literal_string,
    STATE(103), 1,
      sym_identifier,
    STATE(205), 1,
      sym_literal,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(203), 2,
      sym_field,
      sym_predicate,
    STATE(832), 2,
      sym_function_call,
      sym__function_param,
    STATE(247), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [7113] = 15,
    ACTIONS(269), 1,
      sym_keyword_left,
    ACTIONS(271), 1,
      sym_keyword_right,
    ACTIONS(275), 1,
      sym_keyword_join,
    ACTIONS(277), 1,
      sym_keyword_where,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(281), 1,
      sym_keyword_group_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(403), 1,
      sym_where,
    STATE(472), 1,
      sym_group_by,
    STATE(526), 1,
      sym_order_by,
    STATE(706), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(273), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(253), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7164] = 16,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(435), 1,
      sym_keyword_count,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(355), 1,
      sym_identifier,
    STATE(406), 1,
      sym_invocation,
    STATE(414), 1,
      sym__count_function,
    STATE(580), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(553), 2,
      sym__field_list,
      sym_literal,
    STATE(539), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7217] = 15,
    ACTIONS(269), 1,
      sym_keyword_left,
    ACTIONS(271), 1,
      sym_keyword_right,
    ACTIONS(275), 1,
      sym_keyword_join,
    ACTIONS(277), 1,
      sym_keyword_where,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(281), 1,
      sym_keyword_group_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(396), 1,
      sym_where,
    STATE(490), 1,
      sym_group_by,
    STATE(506), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(273), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(445), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(174), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7268] = 8,
    ACTIONS(451), 1,
      sym_keyword_as,
    ACTIONS(453), 1,
      anon_sym_DOT,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    STATE(224), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(447), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [7305] = 15,
    ACTIONS(269), 1,
      sym_keyword_left,
    ACTIONS(271), 1,
      sym_keyword_right,
    ACTIONS(275), 1,
      sym_keyword_join,
    ACTIONS(277), 1,
      sym_keyword_where,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(281), 1,
      sym_keyword_group_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(396), 1,
      sym_where,
    STATE(490), 1,
      sym_group_by,
    STATE(506), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(273), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(445), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(253), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7356] = 6,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(625), 1,
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
  [7389] = 8,
    ACTIONS(465), 1,
      anon_sym_PLUS,
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(471), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 10,
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
  [7426] = 10,
    ACTIONS(465), 1,
      anon_sym_PLUS,
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(471), 1,
      anon_sym_CARET,
    ACTIONS(473), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
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
    ACTIONS(119), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7467] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 3,
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
  [7496] = 16,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(479), 1,
      sym_keyword_distinct,
    ACTIONS(481), 1,
      sym_keyword_count,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(349), 1,
      sym_identifier,
    STATE(419), 1,
      sym__count_function,
    STATE(428), 1,
      sym_invocation,
    STATE(548), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(553), 2,
      sym__field_list,
      sym_literal,
    STATE(516), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7549] = 9,
    ACTIONS(465), 1,
      anon_sym_PLUS,
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(471), 1,
      anon_sym_CARET,
    ACTIONS(473), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7588] = 4,
    ACTIONS(471), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 13,
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
  [7617] = 6,
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(471), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 11,
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
  [7650] = 16,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(435), 1,
      sym_keyword_count,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(487), 1,
      sym_keyword_distinct,
    STATE(55), 1,
      sym__literal_string,
    STATE(355), 1,
      sym_identifier,
    STATE(406), 1,
      sym_invocation,
    STATE(414), 1,
      sym__count_function,
    STATE(548), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(553), 2,
      sym__field_list,
      sym_literal,
    STATE(539), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7703] = 15,
    ACTIONS(283), 1,
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
    STATE(395), 1,
      sym_where,
    STATE(480), 1,
      sym_group_by,
    STATE(506), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(299), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(445), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(190), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7754] = 15,
    ACTIONS(283), 1,
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
    STATE(395), 1,
      sym_where,
    STATE(480), 1,
      sym_group_by,
    STATE(506), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(299), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(445), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(255), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7805] = 15,
    ACTIONS(283), 1,
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
    STATE(410), 1,
      sym_where,
    STATE(484), 1,
      sym_group_by,
    STATE(526), 1,
      sym_order_by,
    STATE(706), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(299), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(433), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(255), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7856] = 16,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(481), 1,
      sym_keyword_count,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(349), 1,
      sym_identifier,
    STATE(419), 1,
      sym__count_function,
    STATE(428), 1,
      sym_invocation,
    STATE(580), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(553), 2,
      sym__field_list,
      sym_literal,
    STATE(516), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7909] = 8,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 10,
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
  [7946] = 8,
    ACTIONS(451), 1,
      sym_keyword_as,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(499), 1,
      anon_sym_DOT,
    STATE(224), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(447), 10,
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
  [7983] = 10,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_CARET,
    ACTIONS(501), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(505), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(503), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8024] = 9,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_CARET,
    ACTIONS(501), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8063] = 4,
    ACTIONS(497), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 13,
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
  [8092] = 12,
    ACTIONS(389), 1,
      sym_keyword_in,
    ACTIONS(395), 1,
      anon_sym_PLUS,
    ACTIONS(397), 1,
      anon_sym_DASH,
    ACTIONS(399), 1,
      anon_sym_SLASH,
    ACTIONS(401), 1,
      anon_sym_CARET,
    ACTIONS(507), 1,
      sym_keyword_and,
    ACTIONS(509), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(403), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(355), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(391), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8137] = 6,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 11,
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
  [8170] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(515), 1,
      sym_keyword_as,
    STATE(234), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(513), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(511), 10,
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
  [8204] = 11,
    ACTIONS(465), 1,
      anon_sym_PLUS,
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(471), 1,
      anon_sym_CARET,
    ACTIONS(473), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(477), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(517), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(519), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(475), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8246] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(515), 1,
      sym_keyword_as,
    STATE(234), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(513), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(511), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8280] = 3,
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
  [8306] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(459), 2,
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
  [8334] = 15,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(521), 1,
      sym_keyword_count,
    ACTIONS(523), 1,
      anon_sym_STAR,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(330), 1,
      sym_identifier,
    STATE(356), 1,
      sym_invocation,
    STATE(358), 1,
      sym__count_function,
    STATE(602), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(440), 2,
      sym__field_list,
      sym_literal,
    STATE(446), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8384] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(459), 2,
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
  [8412] = 15,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(427), 1,
      sym_identifier,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    STATE(945), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(553), 2,
      sym__field_list,
      sym_literal,
    STATE(720), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8462] = 3,
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
  [8488] = 3,
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
  [8514] = 15,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(523), 1,
      anon_sym_STAR,
    ACTIONS(533), 1,
      sym_keyword_count,
    ACTIONS(535), 1,
      anon_sym_BQUOTE,
    ACTIONS(537), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(322), 1,
      sym_identifier,
    STATE(351), 1,
      sym_invocation,
    STATE(352), 1,
      sym__count_function,
    STATE(602), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(440), 2,
      sym__field_list,
      sym_literal,
    STATE(439), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8564] = 3,
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
  [8590] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(19), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(539), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8633] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(31), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(541), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8676] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(21), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(543), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8719] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(35), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8762] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(23), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8805] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(24), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(549), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8848] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(30), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(551), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8891] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(17), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(553), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8934] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(22), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(555), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8977] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(557), 16,
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
  [9000] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(26), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(559), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9043] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(30), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(551), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9086] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(26), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(559), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9129] = 2,
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
  [9152] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(563), 16,
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
  [9175] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(17), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(553), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9218] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(21), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(543), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9261] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(31), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(541), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9304] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(35), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9347] = 11,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    ACTIONS(465), 1,
      anon_sym_PLUS,
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(471), 1,
      anon_sym_CARET,
    ACTIONS(473), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(477), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(517), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(475), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9388] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(24), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(549), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9431] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(20), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(565), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9474] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(23), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9517] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(567), 16,
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
  [9540] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(22), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(555), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9583] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(20), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(565), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(238), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9626] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(19), 1,
      sym_predicate,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(539), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(246), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9669] = 10,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(569), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(571), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(191), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9707] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 15,
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
  [9729] = 10,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(339), 1,
      sym_keyword_in,
    ACTIONS(345), 1,
      anon_sym_PLUS,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(575), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(341), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9767] = 11,
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
    STATE(59), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
    STATE(494), 1,
      sym_where_expression,
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
  [9807] = 11,
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
    STATE(66), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
    STATE(494), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(197), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9847] = 11,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
    STATE(494), 1,
      sym_where_expression,
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
  [9887] = 10,
    ACTIONS(411), 1,
      anon_sym_PLUS,
    ACTIONS(413), 1,
      anon_sym_DASH,
    ACTIONS(415), 1,
      anon_sym_SLASH,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(425), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(409), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(429), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(597), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(427), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9925] = 11,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    STATE(494), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(230), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9965] = 10,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(177), 1,
      anon_sym_CARET,
    ACTIONS(601), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(603), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(197), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10003] = 10,
    ACTIONS(465), 1,
      anon_sym_PLUS,
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(471), 1,
      anon_sym_CARET,
    ACTIONS(473), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(477), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(517), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(475), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10041] = 10,
    ACTIONS(389), 1,
      sym_keyword_in,
    ACTIONS(395), 1,
      anon_sym_PLUS,
    ACTIONS(397), 1,
      anon_sym_DASH,
    ACTIONS(399), 1,
      anon_sym_SLASH,
    ACTIONS(401), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(403), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(507), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(391), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10079] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    STATE(125), 1,
      sym_predicate,
    STATE(455), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(240), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10121] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(605), 15,
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
  [10143] = 10,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_CARET,
    ACTIONS(501), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(505), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(607), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(503), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10181] = 12,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    STATE(161), 1,
      sym_predicate,
    STATE(679), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10223] = 7,
    ACTIONS(609), 1,
      sym_keyword_left,
    ACTIONS(612), 1,
      sym_keyword_right,
    ACTIONS(618), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(615), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(253), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
    ACTIONS(621), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10254] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(623), 1,
      anon_sym_BQUOTE,
    ACTIONS(625), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(109), 1,
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
  [10291] = 7,
    ACTIONS(627), 1,
      sym_keyword_left,
    ACTIONS(630), 1,
      sym_keyword_right,
    ACTIONS(636), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(633), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(255), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
    ACTIONS(621), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10322] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(649), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(40), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(28), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10359] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(649), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(40), 1,
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
  [10396] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(200), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10433] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(649), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(40), 1,
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
  [10470] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(649), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(40), 1,
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
  [10507] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(649), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(40), 1,
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
  [10544] = 11,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    STATE(128), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(248), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10583] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(649), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(40), 1,
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
  [10620] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(623), 1,
      anon_sym_BQUOTE,
    ACTIONS(625), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(192), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10657] = 11,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    STATE(128), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(244), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10696] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(623), 1,
      anon_sym_BQUOTE,
    ACTIONS(625), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(109), 1,
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
  [10733] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(623), 1,
      anon_sym_BQUOTE,
    ACTIONS(625), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(195), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10770] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(651), 1,
      anon_sym_BQUOTE,
    ACTIONS(653), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(83), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10807] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(623), 1,
      anon_sym_BQUOTE,
    ACTIONS(625), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(196), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10844] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(651), 1,
      anon_sym_BQUOTE,
    ACTIONS(653), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(104), 1,
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
  [10881] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(651), 1,
      anon_sym_BQUOTE,
    ACTIONS(653), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
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
  [10918] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(651), 1,
      anon_sym_BQUOTE,
    ACTIONS(653), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
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
  [10955] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(651), 1,
      anon_sym_BQUOTE,
    ACTIONS(653), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
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
  [10992] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(651), 1,
      anon_sym_BQUOTE,
    ACTIONS(653), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
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
  [11029] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(623), 1,
      anon_sym_BQUOTE,
    ACTIONS(625), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(198), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11066] = 10,
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
    STATE(59), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(83), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11103] = 11,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    STATE(137), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(240), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11142] = 11,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
      sym_identifier,
    STATE(182), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(251), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11181] = 10,
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
    STATE(59), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11218] = 10,
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
    STATE(59), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11255] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
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
  [11292] = 10,
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
    STATE(59), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11329] = 10,
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
    STATE(59), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11366] = 10,
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
    STATE(59), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
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
  [11403] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11440] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11477] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11514] = 10,
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
    STATE(66), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(83), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11551] = 10,
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
    STATE(66), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11588] = 10,
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
    STATE(66), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11625] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11662] = 10,
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
    STATE(66), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11699] = 10,
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
    STATE(66), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11736] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(129), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11773] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11810] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11847] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11884] = 10,
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
    STATE(66), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11921] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(104), 1,
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
  [11958] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(83), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11995] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(40), 1,
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
  [12032] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(40), 1,
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
  [12069] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(104), 1,
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
  [12106] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(40), 1,
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
  [12143] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(40), 1,
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
  [12180] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(40), 1,
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
  [12217] = 10,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(104), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(83), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12254] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
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
  [12291] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
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
  [12328] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
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
  [12365] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
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
  [12402] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(55), 1,
      sym__literal_string,
    STATE(108), 1,
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
  [12439] = 10,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(40), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(28), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12476] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(663), 13,
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
  [12496] = 10,
    ACTIONS(667), 1,
      sym_keyword_primary,
    ACTIONS(669), 1,
      sym_keyword_not,
    ACTIONS(671), 1,
      sym_keyword_auto_increment,
    ACTIONS(673), 1,
      sym_keyword_default,
    STATE(467), 1,
      sym__primary_key,
    STATE(634), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(388), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(675), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12532] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(677), 13,
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
  [12552] = 9,
    ACTIONS(679), 1,
      sym_keyword_set,
    ACTIONS(681), 1,
      sym_keyword_alter,
    ACTIONS(683), 1,
      sym_keyword_drop,
    ACTIONS(685), 1,
      sym_keyword_add,
    ACTIONS(687), 1,
      sym_keyword_rename,
    ACTIONS(689), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(619), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(995), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12586] = 9,
    ACTIONS(679), 1,
      sym_keyword_set,
    ACTIONS(681), 1,
      sym_keyword_alter,
    ACTIONS(683), 1,
      sym_keyword_drop,
    ACTIONS(685), 1,
      sym_keyword_add,
    ACTIONS(687), 1,
      sym_keyword_rename,
    ACTIONS(689), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(635), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(898), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12620] = 3,
    ACTIONS(693), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(691), 12,
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
  [12642] = 2,
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
  [12661] = 2,
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
  [12680] = 9,
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
  [12713] = 2,
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
  [12732] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 12,
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
  [12751] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 12,
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
  [12770] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 12,
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
  [12789] = 13,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(699), 1,
      sym_keyword_primary,
    ACTIONS(701), 1,
      sym_keyword_key,
    ACTIONS(703), 1,
      sym_keyword_constraint,
    STATE(6), 1,
      sym_identifier,
    STATE(661), 1,
      sym_constraint,
    STATE(791), 1,
      sym__constraint_literal,
    STATE(799), 1,
      sym__primary_key,
    STATE(800), 1,
      sym__primary_key_constraint,
    STATE(804), 1,
      sym__key_constraint,
    STATE(806), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12830] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 12,
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
  [12849] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 12,
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
  [12868] = 9,
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
  [12901] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 12,
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
  [12920] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(105), 12,
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
  [12939] = 2,
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
  [12958] = 2,
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
  [12977] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(711), 1,
      anon_sym_DOT,
    STATE(61), 1,
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
  [13007] = 3,
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
  [13027] = 3,
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
  [13047] = 3,
    ACTIONS(715), 1,
      aux_sym_keyword_varchar_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(713), 10,
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
  [13067] = 3,
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
  [13087] = 4,
    ACTIONS(719), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(721), 1,
      aux_sym_keyword_timestamp_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13109] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(723), 1,
      anon_sym_DOT,
    STATE(61), 1,
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
  [13139] = 3,
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
  [13159] = 3,
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
  [13178] = 3,
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
  [13197] = 3,
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
  [13216] = 3,
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
  [13235] = 3,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
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
  [13254] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(737), 10,
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
  [13271] = 9,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(739), 1,
      sym_keyword_as,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
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
  [13302] = 2,
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
  [13319] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(749), 1,
      sym_keyword_as,
    STATE(417), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(751), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(747), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13346] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(755), 1,
      sym_keyword_as,
    STATE(415), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(753), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13373] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(713), 10,
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
  [13390] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(70), 1,
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
  [13417] = 9,
    ACTIONS(61), 1,
      sym_keyword_from,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(739), 1,
      sym_keyword_as,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    ACTIONS(761), 1,
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
  [13448] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(749), 1,
      sym_keyword_as,
    STATE(417), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(747), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(751), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13475] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(70), 1,
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
  [13502] = 7,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(755), 1,
      sym_keyword_as,
    STATE(415), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(753), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(757), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13529] = 3,
    ACTIONS(765), 1,
      anon_sym_LPAREN,
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
  [13548] = 3,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
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
  [13567] = 3,
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
  [13585] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(777), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(775), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13603] = 2,
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
  [13619] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(781), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13635] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(783), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13653] = 3,
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
  [13671] = 3,
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
  [13689] = 2,
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
  [13705] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(777), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(775), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13723] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(793), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13739] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(797), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(795), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13757] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13773] = 8,
    ACTIONS(73), 1,
      sym_keyword_from,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(801), 1,
      sym_keyword_as,
    ACTIONS(803), 1,
      anon_sym_DOT,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13801] = 2,
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
  [13817] = 2,
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
  [13833] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(809), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13849] = 3,
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
  [13867] = 3,
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
  [13885] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(811), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13901] = 2,
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
  [13917] = 8,
    ACTIONS(251), 1,
      sym_keyword_count,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(427), 1,
      sym_identifier,
    STATE(482), 1,
      sym__count_function,
    STATE(483), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [13945] = 8,
    ACTIONS(451), 1,
      sym_keyword_as,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(815), 1,
      anon_sym_DOT,
    STATE(224), 1,
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
  [13973] = 8,
    ACTIONS(533), 1,
      sym_keyword_count,
    ACTIONS(535), 1,
      anon_sym_BQUOTE,
    ACTIONS(537), 1,
      sym__identifier,
    STATE(322), 1,
      sym_identifier,
    STATE(351), 1,
      sym_invocation,
    STATE(352), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [14001] = 2,
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
  [14017] = 8,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(801), 1,
      sym_keyword_as,
    ACTIONS(819), 1,
      anon_sym_DOT,
    STATE(61), 1,
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
  [14045] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(821), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14061] = 8,
    ACTIONS(481), 1,
      sym_keyword_count,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 1,
      sym__identifier,
    STATE(349), 1,
      sym_identifier,
    STATE(419), 1,
      sym__count_function,
    STATE(428), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [14089] = 7,
    ACTIONS(667), 1,
      sym_keyword_primary,
    ACTIONS(823), 1,
      sym_keyword_auto_increment,
    STATE(460), 1,
      sym__primary_key,
    STATE(663), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(825), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14115] = 8,
    ACTIONS(435), 1,
      sym_keyword_count,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    STATE(355), 1,
      sym_identifier,
    STATE(406), 1,
      sym_invocation,
    STATE(414), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [14143] = 8,
    ACTIONS(521), 1,
      sym_keyword_count,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(330), 1,
      sym_identifier,
    STATE(356), 1,
      sym_invocation,
    STATE(358), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [14171] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(797), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(795), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [14189] = 7,
    ACTIONS(451), 1,
      sym_keyword_as,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(827), 1,
      anon_sym_DOT,
    STATE(224), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [14215] = 3,
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
  [14233] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(783), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [14251] = 8,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(484), 1,
      sym_group_by,
    STATE(526), 1,
      sym_order_by,
    STATE(706), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14278] = 8,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(281), 1,
      sym_keyword_group_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(472), 1,
      sym_group_by,
    STATE(526), 1,
      sym_order_by,
    STATE(706), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14305] = 3,
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
  [14322] = 9,
    ACTIONS(829), 1,
      sym_keyword_table,
    ACTIONS(831), 1,
      sym_keyword_view,
    ACTIONS(833), 1,
      sym_keyword_materialized,
    ACTIONS(835), 1,
      sym_keyword_or,
    ACTIONS(837), 1,
      sym_keyword_temp,
    ACTIONS(839), 1,
      sym_keyword_temporary,
    STATE(783), 1,
      sym__or_replace,
    STATE(882), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14351] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(515), 1,
      sym_keyword_as,
    STATE(234), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(511), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [14374] = 8,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_default,
    ACTIONS(843), 1,
      anon_sym_SEMI,
    STATE(864), 1,
      sym_table_options,
    STATE(865), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(454), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14401] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(845), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14416] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(847), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14431] = 8,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(281), 1,
      sym_keyword_group_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(471), 1,
      sym_group_by,
    STATE(499), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14458] = 3,
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
  [14475] = 8,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(626), 1,
      sym_table_reference,
    STATE(889), 1,
      sym__table_references,
    STATE(921), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(920), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [14502] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(747), 1,
      sym_keyword_from,
    ACTIONS(853), 1,
      sym_keyword_as,
    STATE(417), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(751), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14527] = 8,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(480), 1,
      sym_group_by,
    STATE(506), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14554] = 8,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(281), 1,
      sym_keyword_group_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(490), 1,
      sym_group_by,
    STATE(506), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14581] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(855), 1,
      sym_keyword_as,
    STATE(70), 1,
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
  [14606] = 8,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    ACTIONS(307), 1,
      sym_keyword_group_by,
    STATE(485), 1,
      sym_group_by,
    STATE(499), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14633] = 3,
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
  [14650] = 9,
    ACTIONS(667), 1,
      sym_keyword_primary,
    ACTIONS(857), 1,
      sym_keyword_key,
    ACTIONS(859), 1,
      sym_keyword_constraint,
    STATE(772), 1,
      sym_constraint,
    STATE(791), 1,
      sym__constraint_literal,
    STATE(799), 1,
      sym__primary_key,
    STATE(800), 1,
      sym__primary_key_constraint,
    STATE(804), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14679] = 2,
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
  [14694] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(753), 1,
      sym_keyword_from,
    ACTIONS(863), 1,
      sym_keyword_as,
    STATE(415), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14719] = 2,
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
  [14734] = 8,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_default,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    STATE(835), 1,
      sym_table_options,
    STATE(865), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(454), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14761] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(869), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14776] = 6,
    ACTIONS(667), 1,
      sym_keyword_primary,
    STATE(491), 1,
      sym__primary_key,
    STATE(627), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(871), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14799] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(863), 1,
      sym_keyword_as,
    STATE(415), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(753), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(757), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14824] = 8,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_default,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    STATE(837), 1,
      sym_table_options,
    STATE(865), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(454), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14851] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(515), 1,
      sym_keyword_as,
    STATE(234), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(511), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(513), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [14876] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(875), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14891] = 7,
    ACTIONS(85), 1,
      sym_keyword_from,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(855), 1,
      sym_keyword_as,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(877), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14931] = 3,
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
  [14948] = 6,
    ACTIONS(667), 1,
      sym_keyword_primary,
    STATE(460), 1,
      sym__primary_key,
    STATE(663), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(825), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14971] = 8,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(879), 1,
      sym_keyword_as,
    ACTIONS(881), 1,
      anon_sym_DOT,
    STATE(65), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14998] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(853), 1,
      sym_keyword_as,
    STATE(417), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(747), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(751), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15023] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(434), 1,
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
  [15041] = 7,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(887), 1,
      sym_keyword_as,
    ACTIONS(889), 1,
      anon_sym_DOT,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15065] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(777), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(775), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15081] = 3,
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
  [15097] = 5,
    ACTIONS(679), 1,
      sym_keyword_set,
    ACTIONS(687), 1,
      sym_keyword_rename,
    ACTIONS(689), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(910), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [15117] = 4,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(847), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15135] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(797), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(795), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15151] = 7,
    ACTIONS(894), 1,
      sym_keyword_default,
    ACTIONS(897), 1,
      anon_sym_SEMI,
    ACTIONS(899), 1,
      anon_sym_BQUOTE,
    ACTIONS(902), 1,
      sym__identifier,
    STATE(865), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(436), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [15175] = 3,
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
  [15191] = 3,
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
  [15207] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(905), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15225] = 4,
    STATE(573), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(907), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15243] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(909), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15257] = 3,
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
  [15273] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(55), 1,
      sym__literal_string,
    STATE(731), 1,
      sym_literal,
    STATE(732), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15299] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(911), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15313] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(783), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(785), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15329] = 4,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(905), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15347] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(847), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15365] = 4,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    STATE(447), 1,
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
  [15383] = 3,
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
  [15399] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(775), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(777), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15415] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(795), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(797), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15431] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(55), 1,
      sym__literal_string,
    STATE(605), 1,
      sym_literal,
    STATE(657), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15457] = 3,
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
  [15473] = 7,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_default,
    ACTIONS(918), 1,
      anon_sym_SEMI,
    STATE(865), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(436), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [15497] = 8,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(920), 1,
      sym_keyword_where,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    STATE(537), 1,
      sym_where,
    STATE(716), 1,
      sym_order_by,
    STATE(974), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15523] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(785), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(783), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15539] = 5,
    ACTIONS(679), 1,
      sym_keyword_set,
    ACTIONS(687), 1,
      sym_keyword_rename,
    ACTIONS(689), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(916), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [15559] = 8,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(920), 1,
      sym_keyword_where,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    STATE(510), 1,
      sym_where,
    STATE(641), 1,
      sym_order_by,
    STATE(922), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15585] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(55), 1,
      sym__literal_string,
    STATE(664), 1,
      sym_select,
    STATE(666), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15611] = 4,
    STATE(627), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(871), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15628] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(998), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(503), 2,
      sym_invocation,
      sym_subquery,
  [15649] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(998), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(517), 2,
      sym_invocation,
      sym_subquery,
  [15670] = 6,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(506), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15691] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(998), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(519), 2,
      sym_invocation,
      sym_subquery,
  [15712] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(998), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(515), 2,
      sym_invocation,
      sym_subquery,
  [15733] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(998), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(529), 2,
      sym_invocation,
      sym_subquery,
  [15754] = 4,
    STATE(663), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(825), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15771] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(930), 1,
      sym_keyword_if,
    STATE(319), 1,
      sym_identifier,
    STATE(552), 1,
      sym__if_not_exists,
    STATE(880), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15794] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(932), 1,
      sym_keyword_as,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15815] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(930), 1,
      sym_keyword_if,
    STATE(6), 1,
      sym_identifier,
    STATE(567), 1,
      sym__if_not_exists,
    STATE(779), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15838] = 6,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(542), 1,
      sym_order_by,
    STATE(622), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(934), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15859] = 6,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(499), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15880] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(936), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15893] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(930), 1,
      sym_keyword_if,
    STATE(319), 1,
      sym_identifier,
    STATE(584), 1,
      sym__if_not_exists,
    STATE(825), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15916] = 7,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(930), 1,
      sym_keyword_if,
    STATE(582), 1,
      sym__if_not_exists,
    STATE(721), 1,
      sym_identifier,
    STATE(737), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15939] = 4,
    ACTIONS(940), 1,
      sym_keyword_having,
    STATE(534), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(938), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15956] = 6,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    STATE(506), 1,
      sym_order_by,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15977] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(930), 1,
      sym_keyword_if,
    STATE(319), 1,
      sym_identifier,
    STATE(581), 1,
      sym__if_not_exists,
    STATE(830), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16000] = 5,
    ACTIONS(681), 1,
      sym_keyword_alter,
    ACTIONS(683), 1,
      sym_keyword_drop,
    ACTIONS(685), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(774), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [16019] = 6,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    STATE(526), 1,
      sym_order_by,
    STATE(706), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16040] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(942), 1,
      sym_keyword_if,
    STATE(318), 1,
      sym_table_reference,
    STATE(319), 1,
      sym_identifier,
    STATE(557), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16063] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(944), 1,
      sym_keyword_as,
    STATE(415), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16084] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(946), 1,
      sym_keyword_as,
    STATE(417), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(751), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16105] = 6,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    STATE(499), 1,
      sym_order_by,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16126] = 6,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      sym_keyword_order_by,
    STATE(542), 1,
      sym_order_by,
    STATE(622), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(934), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16147] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(942), 1,
      sym_keyword_if,
    STATE(319), 1,
      sym_identifier,
    STATE(457), 1,
      sym_table_reference,
    STATE(560), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16170] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(942), 1,
      sym_keyword_if,
    STATE(319), 1,
      sym_identifier,
    STATE(563), 1,
      sym__if_exists,
    STATE(762), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16193] = 4,
    ACTIONS(948), 1,
      sym_keyword_having,
    STATE(534), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(938), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16210] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(942), 1,
      sym_keyword_if,
    STATE(319), 1,
      sym_identifier,
    STATE(565), 1,
      sym__if_exists,
    STATE(767), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16233] = 6,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(526), 1,
      sym_order_by,
    STATE(706), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16254] = 4,
    STATE(660), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(950), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16271] = 7,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(930), 1,
      sym_keyword_if,
    STATE(556), 1,
      sym__if_not_exists,
    STATE(721), 1,
      sym_identifier,
    STATE(759), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16294] = 7,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(930), 1,
      sym_keyword_if,
    STATE(319), 1,
      sym_identifier,
    STATE(554), 1,
      sym__if_not_exists,
    STATE(824), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16317] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(952), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16330] = 4,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(497), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(954), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [16347] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(998), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(544), 2,
      sym_invocation,
      sym_subquery,
  [16368] = 4,
    ACTIONS(956), 1,
      anon_sym_COMMA,
    STATE(497), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [16385] = 5,
    ACTIONS(959), 1,
      sym_keyword_on,
    ACTIONS(961), 1,
      sym_keyword_using,
    STATE(744), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16403] = 4,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(622), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(934), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16419] = 6,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(55), 1,
      sym__literal_string,
    STATE(788), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16439] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(700), 1,
      sym_table_reference,
    STATE(877), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16459] = 6,
    ACTIONS(963), 1,
      sym_keyword_lateral,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    STATE(392), 1,
      sym_identifier,
    STATE(527), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16479] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(969), 1,
      sym_keyword_on,
    ACTIONS(971), 1,
      sym_keyword_as,
    STATE(977), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16499] = 5,
    ACTIONS(973), 1,
      sym_keyword_on,
    ACTIONS(975), 1,
      sym_keyword_using,
    STATE(753), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16517] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(977), 1,
      sym_keyword_lateral,
    STATE(392), 1,
      sym_identifier,
    STATE(498), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16537] = 4,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(706), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16553] = 4,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(612), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16569] = 6,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(55), 1,
      sym__literal_string,
    STATE(538), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16589] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(979), 1,
      sym_keyword_lateral,
    STATE(392), 1,
      sym_identifier,
    STATE(540), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16609] = 6,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(981), 1,
      anon_sym_SEMI,
    STATE(617), 1,
      sym_order_by,
    STATE(990), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16629] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(983), 1,
      sym_keyword_lateral,
    STATE(392), 1,
      sym_identifier,
    STATE(532), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16649] = 3,
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
  [16663] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(985), 1,
      sym_keyword_column,
    ACTIONS(987), 1,
      sym_keyword_to,
    STATE(1006), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16683] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(989), 1,
      sym_keyword_lateral,
    STATE(392), 1,
      sym_identifier,
    STATE(541), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16703] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(991), 1,
      sym_keyword_on,
    ACTIONS(993), 1,
      sym_keyword_as,
    STATE(876), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16723] = 4,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(905), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16739] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(997), 1,
      sym_keyword_on,
    ACTIONS(999), 1,
      sym_keyword_as,
    STATE(987), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16759] = 4,
    STATE(798), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(1001), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16775] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(1003), 1,
      sym_keyword_on,
    ACTIONS(1005), 1,
      sym_keyword_as,
    STATE(986), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16795] = 6,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(942), 1,
      sym_keyword_if,
    STATE(698), 1,
      sym__if_exists,
    STATE(787), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16815] = 4,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(521), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(847), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16831] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(775), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(777), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [16845] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(847), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16861] = 4,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    STATE(521), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(883), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16877] = 4,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(883), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16893] = 4,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(694), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16909] = 5,
    ACTIONS(975), 1,
      sym_keyword_using,
    ACTIONS(1015), 1,
      sym_keyword_on,
    STATE(749), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16927] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(783), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(785), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [16941] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(1017), 1,
      sym_keyword_on,
    ACTIONS(1019), 1,
      sym_keyword_as,
    STATE(983), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16961] = 6,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(55), 1,
      sym__literal_string,
    STATE(687), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16981] = 6,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(967), 1,
      sym__identifier,
    ACTIONS(1021), 1,
      sym_keyword_lateral,
    STATE(392), 1,
      sym_identifier,
    STATE(504), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17001] = 5,
    ACTIONS(1023), 1,
      sym_keyword_on,
    ACTIONS(1025), 1,
      sym_keyword_using,
    STATE(777), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(795), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(797), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [17033] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1027), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17045] = 6,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(55), 1,
      sym__literal_string,
    STATE(666), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17065] = 3,
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
  [17079] = 6,
    ACTIONS(279), 1,
      sym_keyword_order_by,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(1029), 1,
      anon_sym_SEMI,
    STATE(650), 1,
      sym_order_by,
    STATE(857), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17099] = 4,
    ACTIONS(1031), 1,
      sym_keyword_offset,
    STATE(711), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1033), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17115] = 4,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    STATE(525), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(905), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17131] = 5,
    ACTIONS(1025), 1,
      sym_keyword_using,
    ACTIONS(1035), 1,
      sym_keyword_on,
    STATE(752), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17149] = 5,
    ACTIONS(961), 1,
      sym_keyword_using,
    ACTIONS(1037), 1,
      sym_keyword_on,
    STATE(754), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17167] = 4,
    ACTIONS(283), 1,
      sym_keyword_limit,
    STATE(646), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1039), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17183] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1041), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17195] = 6,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(457), 1,
      sym__identifier,
    ACTIONS(1043), 1,
      sym_keyword_on,
    ACTIONS(1045), 1,
      sym_keyword_as,
    STATE(828), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17215] = 5,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(654), 1,
      aux_sym_column_definitions_repeat1,
    STATE(849), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17232] = 5,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(545), 1,
      aux_sym_column_definitions_repeat1,
    STATE(836), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17249] = 5,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1053), 1,
      sym__identifier,
    STATE(392), 1,
      sym_identifier,
    STATE(504), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17266] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1055), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17277] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1057), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1059), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17290] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(806), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17307] = 4,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(558), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(954), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [17322] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(813), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17339] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1061), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17350] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(825), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17367] = 5,
    ACTIONS(1063), 1,
      anon_sym_BQUOTE,
    ACTIONS(1065), 1,
      sym__identifier,
    STATE(121), 1,
      sym_table_expression,
    STATE(193), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17384] = 5,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(721), 1,
      sym_identifier,
    STATE(737), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17401] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(317), 1,
      sym_table_reference,
    STATE(319), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17418] = 4,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    STATE(558), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [17433] = 5,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1053), 1,
      sym__identifier,
    STATE(392), 1,
      sym_identifier,
    STATE(527), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17450] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(433), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17467] = 5,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1070), 1,
      sym__identifier,
    STATE(518), 1,
      sym_identifier,
    STATE(623), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17484] = 5,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(1072), 1,
      anon_sym_STAR,
    ACTIONS(1074), 1,
      sym__identifier,
    STATE(335), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17501] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(773), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17518] = 5,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(1074), 1,
      sym__identifier,
    ACTIONS(1076), 1,
      anon_sym_STAR,
    STATE(357), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17535] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(771), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17552] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(797), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17569] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(742), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17586] = 5,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(1076), 1,
      anon_sym_STAR,
    ACTIONS(1078), 1,
      sym__identifier,
    STATE(469), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17603] = 5,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    ACTIONS(1076), 1,
      anon_sym_STAR,
    STATE(423), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17620] = 5,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    ACTIONS(1072), 1,
      anon_sym_STAR,
    STATE(373), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17637] = 5,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(1072), 1,
      anon_sym_STAR,
    ACTIONS(1080), 1,
      sym__identifier,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17654] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [17667] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1082), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17678] = 5,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(1072), 1,
      anon_sym_STAR,
    ACTIONS(1078), 1,
      sym__identifier,
    STATE(430), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17695] = 3,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [17708] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1084), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1086), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17721] = 5,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(735), 1,
      sym__column_without_order,
    STATE(738), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17738] = 5,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(1076), 1,
      anon_sym_STAR,
    ACTIONS(1080), 1,
      sym__identifier,
    STATE(409), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17755] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(546), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17772] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1088), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17783] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(880), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17800] = 5,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(721), 1,
      sym_identifier,
    STATE(758), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17817] = 5,
    ACTIONS(1090), 1,
      anon_sym_BQUOTE,
    ACTIONS(1092), 1,
      sym__identifier,
    STATE(382), 1,
      sym_identifier,
    STATE(458), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17834] = 5,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(976), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17851] = 5,
    ACTIONS(535), 1,
      anon_sym_BQUOTE,
    ACTIONS(1072), 1,
      anon_sym_STAR,
    ACTIONS(1094), 1,
      sym__identifier,
    STATE(341), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17868] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1096), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1098), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17881] = 5,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1070), 1,
      sym__identifier,
    STATE(518), 1,
      sym_identifier,
    STATE(786), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17898] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1100), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17909] = 5,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(738), 1,
      sym_identifier,
    STATE(801), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17926] = 3,
    ACTIONS(785), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(783), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [17939] = 3,
    ACTIONS(773), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(771), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [17952] = 5,
    ACTIONS(535), 1,
      anon_sym_BQUOTE,
    ACTIONS(1076), 1,
      anon_sym_STAR,
    ACTIONS(1094), 1,
      sym__identifier,
    STATE(354), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17969] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1102), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1104), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17982] = 5,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(721), 1,
      sym_identifier,
    STATE(897), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17999] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1106), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1108), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [18012] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [18025] = 5,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1053), 1,
      sym__identifier,
    STATE(392), 1,
      sym_identifier,
    STATE(540), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18042] = 3,
    ACTIONS(153), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(155), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [18055] = 5,
    ACTIONS(1110), 1,
      anon_sym_BQUOTE,
    ACTIONS(1112), 1,
      sym__identifier,
    STATE(117), 1,
      sym_table_expression,
    STATE(177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18072] = 4,
    ACTIONS(1114), 1,
      sym_keyword_from,
    STATE(925), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_force,
      sym_keyword_use,
  [18087] = 5,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1053), 1,
      sym__identifier,
    STATE(392), 1,
      sym_identifier,
    STATE(532), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18104] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1116), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18115] = 4,
    ACTIONS(1118), 1,
      sym_keyword_from,
    STATE(796), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1120), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [18130] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(220), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18144] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(669), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18158] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(988), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18172] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18182] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(987), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18196] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(986), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18210] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(997), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18224] = 4,
    ACTIONS(1124), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    STATE(778), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18238] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18248] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(928), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18262] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(476), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18276] = 4,
    ACTIONS(1128), 1,
      sym_keyword_not,
    ACTIONS(1130), 1,
      sym_keyword_default,
    ACTIONS(1132), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18290] = 4,
    ACTIONS(1134), 1,
      sym_keyword_select,
    STATE(603), 1,
      sym_select,
    STATE(611), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18304] = 4,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(1136), 1,
      anon_sym_SEMI,
    STATE(870), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18318] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(488), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18332] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
    STATE(690), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18346] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(876), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18360] = 4,
    ACTIONS(1120), 1,
      anon_sym_SEMI,
    ACTIONS(1142), 1,
      sym_keyword_from,
    STATE(796), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18374] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1039), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18384] = 4,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    STATE(648), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18398] = 4,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    STATE(624), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18412] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18426] = 4,
    ACTIONS(1155), 1,
      sym_keyword_set,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
    STATE(701), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18440] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(950), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18450] = 4,
    ACTIONS(651), 1,
      anon_sym_BQUOTE,
    ACTIONS(653), 1,
      sym__identifier,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18464] = 4,
    ACTIONS(651), 1,
      anon_sym_BQUOTE,
    ACTIONS(653), 1,
      sym__identifier,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18478] = 4,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(12), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18492] = 4,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18506] = 4,
    ACTIONS(1124), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    STATE(741), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18520] = 4,
    ACTIONS(1110), 1,
      anon_sym_BQUOTE,
    ACTIONS(1112), 1,
      sym__identifier,
    STATE(201), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18534] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(825), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18544] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
    STATE(697), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18558] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18572] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(977), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18586] = 4,
    ACTIONS(585), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18600] = 4,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(649), 1,
      sym__identifier,
    STATE(15), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18614] = 4,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(649), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18628] = 4,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(981), 1,
      anon_sym_SEMI,
    STATE(990), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18642] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18656] = 4,
    ACTIONS(623), 1,
      anon_sym_BQUOTE,
    ACTIONS(625), 1,
      sym__identifier,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18670] = 4,
    ACTIONS(623), 1,
      anon_sym_BQUOTE,
    ACTIONS(625), 1,
      sym__identifier,
    STATE(107), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18684] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(621), 1,
      sym_select,
    STATE(831), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18698] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1163), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18708] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(815), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18722] = 4,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    STATE(702), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18736] = 4,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    STATE(680), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18750] = 4,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(1171), 1,
      anon_sym_SEMI,
    STATE(819), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18764] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1173), 1,
      sym__identifier,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18778] = 4,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18792] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1173), 1,
      sym__identifier,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18806] = 4,
    ACTIONS(1175), 1,
      anon_sym_RPAREN,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    STATE(654), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18820] = 4,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18834] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18848] = 4,
    ACTIONS(1142), 1,
      sym_keyword_from,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(851), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18862] = 4,
    ACTIONS(1063), 1,
      anon_sym_BQUOTE,
    ACTIONS(1065), 1,
      sym__identifier,
    STATE(199), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18876] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1173), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18890] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1182), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18900] = 4,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(733), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18914] = 4,
    ACTIONS(1188), 1,
      anon_sym_BQUOTE,
    ACTIONS(1190), 1,
      sym__identifier,
    STATE(595), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18928] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(871), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18938] = 4,
    ACTIONS(1142), 1,
      sym_keyword_from,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    STATE(931), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18952] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(1194), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18966] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18980] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(757), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18994] = 4,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19008] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19022] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(760), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19036] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(1194), 1,
      sym__identifier,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19050] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(621), 1,
      sym_select,
    STATE(879), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19064] = 4,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19078] = 4,
    ACTIONS(1142), 1,
      sym_keyword_from,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(827), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19092] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(895), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19106] = 4,
    ACTIONS(965), 1,
      anon_sym_BQUOTE,
    ACTIONS(1053), 1,
      sym__identifier,
    STATE(399), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19120] = 4,
    ACTIONS(1134), 1,
      sym_keyword_select,
    STATE(603), 1,
      sym_select,
    STATE(632), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19134] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(401), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19148] = 4,
    ACTIONS(1202), 1,
      sym_keyword_where,
    ACTIONS(1204), 1,
      anon_sym_SEMI,
    STATE(812), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19162] = 4,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(680), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19176] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(1194), 1,
      sym__identifier,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19190] = 4,
    ACTIONS(1211), 1,
      sym_keyword_set,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    STATE(682), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19204] = 4,
    ACTIONS(1124), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1216), 1,
      anon_sym_SEMI,
    STATE(775), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19218] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(621), 1,
      sym_select,
    STATE(992), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19232] = 4,
    ACTIONS(1134), 1,
      sym_keyword_select,
    STATE(603), 1,
      sym_select,
    STATE(683), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19246] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(424), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19260] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1218), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19270] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19284] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(982), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19298] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_SEMI,
    STATE(708), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19312] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19326] = 4,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(111), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19340] = 4,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(693), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19354] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(934), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19364] = 4,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19378] = 4,
    ACTIONS(1227), 1,
      sym_keyword_set,
    ACTIONS(1229), 1,
      sym_keyword_drop,
    ACTIONS(1231), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19392] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
    STATE(708), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19406] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(743), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19420] = 4,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    STATE(703), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19434] = 4,
    ACTIONS(1237), 1,
      sym_keyword_values,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
    STATE(814), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19448] = 4,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
    ACTIONS(1241), 1,
      sym_keyword_set,
    STATE(682), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19462] = 4,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    ACTIONS(1245), 1,
      anon_sym_COMMA,
    STATE(702), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19476] = 4,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    STATE(729), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19490] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(1005), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19504] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(225), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19518] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19528] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(696), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19542] = 4,
    ACTIONS(1250), 1,
      anon_sym_COMMA,
    ACTIONS(1253), 1,
      anon_sym_SEMI,
    STATE(708), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19556] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19570] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1070), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19584] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1255), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19594] = 4,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19608] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19622] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(333), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19636] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(810), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19650] = 4,
    ACTIONS(283), 1,
      sym_keyword_limit,
    ACTIONS(1029), 1,
      anon_sym_SEMI,
    STATE(857), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19664] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19678] = 4,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    STATE(736), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19692] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(401), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19706] = 4,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    STATE(718), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19720] = 3,
    ACTIONS(1261), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(691), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [19732] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(424), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19746] = 4,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    ACTIONS(851), 1,
      sym__identifier,
    STATE(833), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19760] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1070), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19774] = 4,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(58), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19788] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1070), 1,
      sym__identifier,
    STATE(401), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19802] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1070), 1,
      sym__identifier,
    STATE(424), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19816] = 4,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(1070), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19830] = 4,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    STATE(729), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19844] = 4,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(333), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19858] = 4,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    STATE(717), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19872] = 4,
    ACTIONS(1142), 1,
      sym_keyword_from,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(979), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19886] = 4,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19900] = 4,
    ACTIONS(1090), 1,
      anon_sym_BQUOTE,
    ACTIONS(1092), 1,
      sym__identifier,
    STATE(421), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19914] = 4,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19928] = 4,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    ACTIONS(1276), 1,
      anon_sym_COMMA,
    STATE(736), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19942] = 3,
    ACTIONS(1279), 1,
      anon_sym_LPAREN,
    STATE(420), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19953] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1281), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19962] = 3,
    ACTIONS(1283), 1,
      sym_keyword_outer,
    ACTIONS(1285), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19973] = 3,
    ACTIONS(1287), 1,
      sym_keyword_outer,
    ACTIONS(1289), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19984] = 3,
    ACTIONS(1291), 1,
      sym_keyword_no,
    ACTIONS(1293), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19995] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1295), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20004] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1297), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20013] = 3,
    ACTIONS(1023), 1,
      sym_keyword_on,
    ACTIONS(1025), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20024] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1299), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20033] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1301), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20042] = 3,
    ACTIONS(1128), 1,
      sym_keyword_not,
    ACTIONS(1303), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20053] = 3,
    ACTIONS(1305), 1,
      anon_sym_LPAREN,
    STATE(859), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20064] = 3,
    ACTIONS(1307), 1,
      sym_keyword_on,
    ACTIONS(1309), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20075] = 3,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
    STATE(328), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20086] = 3,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(674), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20097] = 3,
    ACTIONS(975), 1,
      sym_keyword_using,
    ACTIONS(1015), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20108] = 3,
    ACTIONS(1309), 1,
      sym_keyword_using,
    ACTIONS(1311), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20119] = 3,
    ACTIONS(1025), 1,
      sym_keyword_using,
    ACTIONS(1035), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20130] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1313), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20139] = 3,
    ACTIONS(1315), 1,
      sym_keyword_outer,
    ACTIONS(1317), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20150] = 3,
    ACTIONS(667), 1,
      sym_keyword_primary,
    STATE(770), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20161] = 3,
    ACTIONS(1279), 1,
      anon_sym_LPAREN,
    STATE(416), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20172] = 3,
    ACTIONS(1279), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20183] = 3,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    STATE(769), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20194] = 3,
    ACTIONS(1321), 1,
      sym_keyword_table,
    ACTIONS(1323), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20205] = 3,
    ACTIONS(1325), 1,
      sym_keyword_cascade,
    ACTIONS(1327), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20216] = 3,
    ACTIONS(1329), 1,
      sym_keyword_table,
    ACTIONS(1331), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20227] = 3,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    ACTIONS(1335), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20238] = 3,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20249] = 3,
    ACTIONS(1341), 1,
      sym_keyword_outer,
    ACTIONS(1343), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20260] = 3,
    ACTIONS(1345), 1,
      sym_keyword_cascade,
    ACTIONS(1347), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20271] = 3,
    ACTIONS(1349), 1,
      sym_keyword_from,
    STATE(843), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20282] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1351), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20291] = 3,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    STATE(795), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20302] = 3,
    ACTIONS(1353), 1,
      sym_keyword_cascade,
    ACTIONS(1355), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20313] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1148), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20322] = 3,
    ACTIONS(1357), 1,
      sym_keyword_cascade,
    ACTIONS(1359), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20333] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1253), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20342] = 3,
    ACTIONS(1361), 1,
      sym_keyword_no,
    ACTIONS(1363), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20353] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1365), 2,
      sym_keyword_no,
      sym_keyword_data,
  [20362] = 3,
    ACTIONS(973), 1,
      sym_keyword_on,
    ACTIONS(975), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20373] = 3,
    ACTIONS(1367), 1,
      sym_keyword_no,
    ACTIONS(1369), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20384] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1371), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20393] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(519), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20402] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1373), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20411] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1375), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20420] = 3,
    ACTIONS(1377), 1,
      sym_keyword_view,
    ACTIONS(1379), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20431] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1381), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [20440] = 3,
    ACTIONS(1383), 1,
      sym_keyword_for,
    ACTIONS(1385), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20451] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1243), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20460] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1387), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20469] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20478] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1389), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20487] = 3,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
    STATE(326), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20498] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1391), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20507] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1393), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20516] = 3,
    ACTIONS(1305), 1,
      anon_sym_LPAREN,
    STATE(885), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20527] = 3,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20538] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1395), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20547] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1397), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [20556] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1211), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [20565] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1399), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20574] = 3,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    STATE(755), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20585] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1401), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20594] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1403), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20603] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1405), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [20612] = 3,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1391), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20632] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1407), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [20641] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1175), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20650] = 2,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20658] = 2,
    ACTIONS(1411), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20666] = 2,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20674] = 2,
    ACTIONS(1415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20682] = 2,
    ACTIONS(1417), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20690] = 2,
    ACTIONS(1419), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20698] = 2,
    ACTIONS(1421), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20706] = 2,
    ACTIONS(1423), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20714] = 2,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20722] = 2,
    ACTIONS(1427), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20730] = 2,
    ACTIONS(1427), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20738] = 2,
    ACTIONS(1429), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20746] = 2,
    ACTIONS(1431), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20754] = 2,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20762] = 2,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20770] = 2,
    ACTIONS(1437), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20778] = 2,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20786] = 2,
    ACTIONS(1441), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20794] = 2,
    ACTIONS(1443), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20802] = 2,
    ACTIONS(1445), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20810] = 2,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20818] = 2,
    ACTIONS(1449), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20826] = 2,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20834] = 2,
    ACTIONS(1453), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20842] = 2,
    ACTIONS(1455), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20850] = 2,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20858] = 2,
    ACTIONS(1459), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20866] = 2,
    ACTIONS(1461), 1,
      aux_sym_double_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20874] = 2,
    ACTIONS(1463), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20882] = 2,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20890] = 2,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20898] = 2,
    ACTIONS(1465), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20906] = 2,
    ACTIONS(1467), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20914] = 2,
    ACTIONS(1469), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20922] = 2,
    ACTIONS(1469), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20930] = 2,
    ACTIONS(1471), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20938] = 2,
    ACTIONS(1473), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20946] = 2,
    ACTIONS(1475), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20954] = 2,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20962] = 2,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20970] = 2,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20978] = 2,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20986] = 2,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20994] = 2,
    ACTIONS(1487), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21002] = 2,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21010] = 2,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21018] = 2,
    ACTIONS(1493), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21026] = 2,
    ACTIONS(1495), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21034] = 2,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21042] = 2,
    ACTIONS(1499), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21050] = 2,
    ACTIONS(1171), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21058] = 2,
    ACTIONS(1501), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21066] = 2,
    ACTIONS(1503), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21074] = 2,
    ACTIONS(1505), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21082] = 2,
    ACTIONS(1507), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21090] = 2,
    ACTIONS(1509), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21098] = 2,
    ACTIONS(1511), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21106] = 2,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21114] = 2,
    ACTIONS(1513), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21122] = 2,
    ACTIONS(1515), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21130] = 2,
    ACTIONS(1517), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21138] = 2,
    ACTIONS(1519), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21146] = 2,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21154] = 2,
    ACTIONS(1523), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21162] = 2,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21170] = 2,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21178] = 2,
    ACTIONS(1529), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21186] = 2,
    ACTIONS(1531), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21194] = 2,
    ACTIONS(1533), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21202] = 2,
    ACTIONS(1535), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21210] = 2,
    ACTIONS(1537), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21218] = 2,
    ACTIONS(1293), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21226] = 2,
    ACTIONS(1539), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21234] = 2,
    ACTIONS(1541), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21242] = 2,
    ACTIONS(1543), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21250] = 2,
    ACTIONS(1545), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21258] = 2,
    ACTIONS(1547), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21266] = 2,
    ACTIONS(1549), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21274] = 2,
    ACTIONS(1551), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21282] = 2,
    ACTIONS(1553), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21290] = 2,
    ACTIONS(1555), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21298] = 2,
    ACTIONS(1369), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21306] = 2,
    ACTIONS(1557), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21314] = 2,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21322] = 2,
    ACTIONS(1561), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21330] = 2,
    ACTIONS(1563), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21338] = 2,
    ACTIONS(1565), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21346] = 2,
    ACTIONS(1567), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21354] = 2,
    ACTIONS(1569), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21362] = 2,
    ACTIONS(1571), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21370] = 2,
    ACTIONS(1573), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21378] = 2,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21386] = 2,
    ACTIONS(1575), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21394] = 2,
    ACTIONS(1577), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21402] = 2,
    ACTIONS(1579), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21410] = 2,
    ACTIONS(1581), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21418] = 2,
    ACTIONS(1583), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21426] = 2,
    ACTIONS(1585), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21434] = 2,
    ACTIONS(1587), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21442] = 2,
    ACTIONS(1589), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21450] = 2,
    ACTIONS(1591), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21458] = 2,
    ACTIONS(1593), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21466] = 2,
    ACTIONS(1595), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21474] = 2,
    ACTIONS(1597), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21482] = 2,
    ACTIONS(1599), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21490] = 2,
    ACTIONS(1601), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21498] = 2,
    ACTIONS(1603), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21506] = 2,
    ACTIONS(1605), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21514] = 2,
    ACTIONS(1607), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21522] = 2,
    ACTIONS(1609), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21530] = 2,
    ACTIONS(1613), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21538] = 2,
    ACTIONS(1615), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21546] = 2,
    ACTIONS(1617), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21554] = 2,
    ACTIONS(1619), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21562] = 2,
    ACTIONS(1621), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21570] = 2,
    ACTIONS(981), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21578] = 2,
    ACTIONS(1623), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21586] = 2,
    ACTIONS(1625), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21594] = 2,
    ACTIONS(1627), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21602] = 2,
    ACTIONS(1629), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21610] = 2,
    ACTIONS(1631), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21618] = 2,
    ACTIONS(1633), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21626] = 2,
    ACTIONS(1359), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21634] = 2,
    ACTIONS(1635), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21642] = 2,
    ACTIONS(1637), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21650] = 2,
    ACTIONS(1639), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21658] = 2,
    ACTIONS(1641), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21666] = 2,
    ACTIONS(1643), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21674] = 2,
    ACTIONS(1355), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21682] = 2,
    ACTIONS(1645), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21690] = 2,
    ACTIONS(1647), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21698] = 2,
    ACTIONS(1649), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21706] = 2,
    ACTIONS(1651), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21714] = 2,
    ACTIONS(1653), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1611), 2,
      sym_comment,
      sym_marginalia,
  [21722] = 2,
    ACTIONS(1655), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21730] = 2,
    ACTIONS(1657), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21738] = 2,
    ACTIONS(1659), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21746] = 2,
    ACTIONS(1661), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21754] = 2,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21762] = 2,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21770] = 2,
    ACTIONS(1667), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21778] = 2,
    ACTIONS(1669), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21786] = 2,
    ACTIONS(1671), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21794] = 2,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21802] = 2,
    ACTIONS(1675), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21810] = 2,
    ACTIONS(1677), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21818] = 2,
    ACTIONS(1679), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21826] = 2,
    ACTIONS(1681), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21834] = 2,
    ACTIONS(1683), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21842] = 2,
    ACTIONS(1685), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21850] = 2,
    ACTIONS(1687), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21858] = 2,
    ACTIONS(1689), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21866] = 2,
    ACTIONS(1691), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21874] = 2,
    ACTIONS(1693), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21882] = 2,
    ACTIONS(1695), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21890] = 2,
    ACTIONS(1697), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21898] = 2,
    ACTIONS(1699), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21906] = 2,
    ACTIONS(1701), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21914] = 2,
    ACTIONS(1703), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21922] = 2,
    ACTIONS(1705), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21930] = 2,
    ACTIONS(1707), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21938] = 2,
    ACTIONS(1709), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21946] = 2,
    ACTIONS(1711), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21954] = 2,
    ACTIONS(1713), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21962] = 2,
    ACTIONS(1715), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21970] = 2,
    ACTIONS(1717), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21978] = 2,
    ACTIONS(1719), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21986] = 2,
    ACTIONS(1029), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21994] = 2,
    ACTIONS(1721), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22002] = 2,
    ACTIONS(1723), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22010] = 2,
    ACTIONS(1725), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22018] = 2,
    ACTIONS(1727), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22026] = 2,
    ACTIONS(1729), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22034] = 2,
    ACTIONS(1343), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22042] = 2,
    ACTIONS(1731), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22050] = 2,
    ACTIONS(1733), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22058] = 2,
    ACTIONS(1735), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22066] = 2,
    ACTIONS(1737), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22074] = 2,
    ACTIONS(1737), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22082] = 2,
    ACTIONS(1739), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22090] = 2,
    ACTIONS(1741), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22098] = 2,
    ACTIONS(1743), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22106] = 2,
    ACTIONS(1745), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22114] = 2,
    ACTIONS(1136), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22122] = 2,
    ACTIONS(1747), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22130] = 2,
    ACTIONS(1749), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22138] = 2,
    ACTIONS(1751), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22146] = 2,
    ACTIONS(1753), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22154] = 2,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22162] = 2,
    ACTIONS(1755), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22170] = 2,
    ACTIONS(1757), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22178] = 2,
    ACTIONS(1759), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22186] = 2,
    ACTIONS(1761), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22194] = 2,
    ACTIONS(1763), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22202] = 2,
    ACTIONS(1765), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22210] = 2,
    ACTIONS(1767), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22218] = 2,
    ACTIONS(1769), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22226] = 2,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22234] = 2,
    ACTIONS(1771), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22242] = 2,
    ACTIONS(1773), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22250] = 2,
    ACTIONS(1775), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22258] = 2,
    ACTIONS(1777), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22266] = 2,
    ACTIONS(1779), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22274] = 2,
    ACTIONS(1289), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22282] = 2,
    ACTIONS(1781), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22290] = 2,
    ACTIONS(1783), 1,
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
  [SMALL_STATE(14)] = 701,
  [SMALL_STATE(15)] = 740,
  [SMALL_STATE(16)] = 787,
  [SMALL_STATE(17)] = 826,
  [SMALL_STATE(18)] = 864,
  [SMALL_STATE(19)] = 900,
  [SMALL_STATE(20)] = 938,
  [SMALL_STATE(21)] = 976,
  [SMALL_STATE(22)] = 1014,
  [SMALL_STATE(23)] = 1052,
  [SMALL_STATE(24)] = 1090,
  [SMALL_STATE(25)] = 1128,
  [SMALL_STATE(26)] = 1164,
  [SMALL_STATE(27)] = 1202,
  [SMALL_STATE(28)] = 1238,
  [SMALL_STATE(29)] = 1274,
  [SMALL_STATE(30)] = 1310,
  [SMALL_STATE(31)] = 1348,
  [SMALL_STATE(32)] = 1386,
  [SMALL_STATE(33)] = 1422,
  [SMALL_STATE(34)] = 1458,
  [SMALL_STATE(35)] = 1494,
  [SMALL_STATE(36)] = 1532,
  [SMALL_STATE(37)] = 1568,
  [SMALL_STATE(38)] = 1604,
  [SMALL_STATE(39)] = 1640,
  [SMALL_STATE(40)] = 1676,
  [SMALL_STATE(41)] = 1712,
  [SMALL_STATE(42)] = 1748,
  [SMALL_STATE(43)] = 1784,
  [SMALL_STATE(44)] = 1829,
  [SMALL_STATE(45)] = 1870,
  [SMALL_STATE(46)] = 1907,
  [SMALL_STATE(47)] = 1952,
  [SMALL_STATE(48)] = 2003,
  [SMALL_STATE(49)] = 2050,
  [SMALL_STATE(50)] = 2087,
  [SMALL_STATE(51)] = 2128,
  [SMALL_STATE(52)] = 2175,
  [SMALL_STATE(53)] = 2226,
  [SMALL_STATE(54)] = 2270,
  [SMALL_STATE(55)] = 2314,
  [SMALL_STATE(56)] = 2348,
  [SMALL_STATE(57)] = 2392,
  [SMALL_STATE(58)] = 2426,
  [SMALL_STATE(59)] = 2470,
  [SMALL_STATE(60)] = 2514,
  [SMALL_STATE(61)] = 2558,
  [SMALL_STATE(62)] = 2591,
  [SMALL_STATE(63)] = 2624,
  [SMALL_STATE(64)] = 2657,
  [SMALL_STATE(65)] = 2700,
  [SMALL_STATE(66)] = 2733,
  [SMALL_STATE(67)] = 2776,
  [SMALL_STATE(68)] = 2809,
  [SMALL_STATE(69)] = 2850,
  [SMALL_STATE(70)] = 2893,
  [SMALL_STATE(71)] = 2926,
  [SMALL_STATE(72)] = 2959,
  [SMALL_STATE(73)] = 2992,
  [SMALL_STATE(74)] = 3035,
  [SMALL_STATE(75)] = 3068,
  [SMALL_STATE(76)] = 3101,
  [SMALL_STATE(77)] = 3134,
  [SMALL_STATE(78)] = 3175,
  [SMALL_STATE(79)] = 3208,
  [SMALL_STATE(80)] = 3249,
  [SMALL_STATE(81)] = 3281,
  [SMALL_STATE(82)] = 3313,
  [SMALL_STATE(83)] = 3345,
  [SMALL_STATE(84)] = 3377,
  [SMALL_STATE(85)] = 3409,
  [SMALL_STATE(86)] = 3441,
  [SMALL_STATE(87)] = 3473,
  [SMALL_STATE(88)] = 3505,
  [SMALL_STATE(89)] = 3537,
  [SMALL_STATE(90)] = 3569,
  [SMALL_STATE(91)] = 3601,
  [SMALL_STATE(92)] = 3633,
  [SMALL_STATE(93)] = 3665,
  [SMALL_STATE(94)] = 3705,
  [SMALL_STATE(95)] = 3737,
  [SMALL_STATE(96)] = 3769,
  [SMALL_STATE(97)] = 3801,
  [SMALL_STATE(98)] = 3841,
  [SMALL_STATE(99)] = 3873,
  [SMALL_STATE(100)] = 3905,
  [SMALL_STATE(101)] = 3947,
  [SMALL_STATE(102)] = 3979,
  [SMALL_STATE(103)] = 4011,
  [SMALL_STATE(104)] = 4055,
  [SMALL_STATE(105)] = 4087,
  [SMALL_STATE(106)] = 4119,
  [SMALL_STATE(107)] = 4151,
  [SMALL_STATE(108)] = 4193,
  [SMALL_STATE(109)] = 4235,
  [SMALL_STATE(110)] = 4277,
  [SMALL_STATE(111)] = 4316,
  [SMALL_STATE(112)] = 4355,
  [SMALL_STATE(113)] = 4386,
  [SMALL_STATE(114)] = 4417,
  [SMALL_STATE(115)] = 4477,
  [SMALL_STATE(116)] = 4537,
  [SMALL_STATE(117)] = 4597,
  [SMALL_STATE(118)] = 4655,
  [SMALL_STATE(119)] = 4715,
  [SMALL_STATE(120)] = 4775,
  [SMALL_STATE(121)] = 4835,
  [SMALL_STATE(122)] = 4893,
  [SMALL_STATE(123)] = 4953,
  [SMALL_STATE(124)] = 5013,
  [SMALL_STATE(125)] = 5073,
  [SMALL_STATE(126)] = 5109,
  [SMALL_STATE(127)] = 5169,
  [SMALL_STATE(128)] = 5229,
  [SMALL_STATE(129)] = 5260,
  [SMALL_STATE(130)] = 5291,
  [SMALL_STATE(131)] = 5336,
  [SMALL_STATE(132)] = 5375,
  [SMALL_STATE(133)] = 5432,
  [SMALL_STATE(134)] = 5477,
  [SMALL_STATE(135)] = 5512,
  [SMALL_STATE(136)] = 5569,
  [SMALL_STATE(137)] = 5616,
  [SMALL_STATE(138)] = 5647,
  [SMALL_STATE(139)] = 5704,
  [SMALL_STATE(140)] = 5745,
  [SMALL_STATE(141)] = 5784,
  [SMALL_STATE(142)] = 5825,
  [SMALL_STATE(143)] = 5870,
  [SMALL_STATE(144)] = 5911,
  [SMALL_STATE(145)] = 5946,
  [SMALL_STATE(146)] = 5977,
  [SMALL_STATE(147)] = 6034,
  [SMALL_STATE(148)] = 6069,
  [SMALL_STATE(149)] = 6116,
  [SMALL_STATE(150)] = 6147,
  [SMALL_STATE(151)] = 6186,
  [SMALL_STATE(152)] = 6243,
  [SMALL_STATE(153)] = 6271,
  [SMALL_STATE(154)] = 6315,
  [SMALL_STATE(155)] = 6369,
  [SMALL_STATE(156)] = 6409,
  [SMALL_STATE(157)] = 6447,
  [SMALL_STATE(158)] = 6477,
  [SMALL_STATE(159)] = 6511,
  [SMALL_STATE(160)] = 6539,
  [SMALL_STATE(161)] = 6593,
  [SMALL_STATE(162)] = 6627,
  [SMALL_STATE(163)] = 6665,
  [SMALL_STATE(164)] = 6719,
  [SMALL_STATE(165)] = 6773,
  [SMALL_STATE(166)] = 6827,
  [SMALL_STATE(167)] = 6871,
  [SMALL_STATE(168)] = 6899,
  [SMALL_STATE(169)] = 6933,
  [SMALL_STATE(170)] = 6961,
  [SMALL_STATE(171)] = 7001,
  [SMALL_STATE(172)] = 7031,
  [SMALL_STATE(173)] = 7059,
  [SMALL_STATE(174)] = 7113,
  [SMALL_STATE(175)] = 7164,
  [SMALL_STATE(176)] = 7217,
  [SMALL_STATE(177)] = 7268,
  [SMALL_STATE(178)] = 7305,
  [SMALL_STATE(179)] = 7356,
  [SMALL_STATE(180)] = 7389,
  [SMALL_STATE(181)] = 7426,
  [SMALL_STATE(182)] = 7467,
  [SMALL_STATE(183)] = 7496,
  [SMALL_STATE(184)] = 7549,
  [SMALL_STATE(185)] = 7588,
  [SMALL_STATE(186)] = 7617,
  [SMALL_STATE(187)] = 7650,
  [SMALL_STATE(188)] = 7703,
  [SMALL_STATE(189)] = 7754,
  [SMALL_STATE(190)] = 7805,
  [SMALL_STATE(191)] = 7856,
  [SMALL_STATE(192)] = 7909,
  [SMALL_STATE(193)] = 7946,
  [SMALL_STATE(194)] = 7983,
  [SMALL_STATE(195)] = 8024,
  [SMALL_STATE(196)] = 8063,
  [SMALL_STATE(197)] = 8092,
  [SMALL_STATE(198)] = 8137,
  [SMALL_STATE(199)] = 8170,
  [SMALL_STATE(200)] = 8204,
  [SMALL_STATE(201)] = 8246,
  [SMALL_STATE(202)] = 8280,
  [SMALL_STATE(203)] = 8306,
  [SMALL_STATE(204)] = 8334,
  [SMALL_STATE(205)] = 8384,
  [SMALL_STATE(206)] = 8412,
  [SMALL_STATE(207)] = 8462,
  [SMALL_STATE(208)] = 8488,
  [SMALL_STATE(209)] = 8514,
  [SMALL_STATE(210)] = 8564,
  [SMALL_STATE(211)] = 8590,
  [SMALL_STATE(212)] = 8633,
  [SMALL_STATE(213)] = 8676,
  [SMALL_STATE(214)] = 8719,
  [SMALL_STATE(215)] = 8762,
  [SMALL_STATE(216)] = 8805,
  [SMALL_STATE(217)] = 8848,
  [SMALL_STATE(218)] = 8891,
  [SMALL_STATE(219)] = 8934,
  [SMALL_STATE(220)] = 8977,
  [SMALL_STATE(221)] = 9000,
  [SMALL_STATE(222)] = 9043,
  [SMALL_STATE(223)] = 9086,
  [SMALL_STATE(224)] = 9129,
  [SMALL_STATE(225)] = 9152,
  [SMALL_STATE(226)] = 9175,
  [SMALL_STATE(227)] = 9218,
  [SMALL_STATE(228)] = 9261,
  [SMALL_STATE(229)] = 9304,
  [SMALL_STATE(230)] = 9347,
  [SMALL_STATE(231)] = 9388,
  [SMALL_STATE(232)] = 9431,
  [SMALL_STATE(233)] = 9474,
  [SMALL_STATE(234)] = 9517,
  [SMALL_STATE(235)] = 9540,
  [SMALL_STATE(236)] = 9583,
  [SMALL_STATE(237)] = 9626,
  [SMALL_STATE(238)] = 9669,
  [SMALL_STATE(239)] = 9707,
  [SMALL_STATE(240)] = 9729,
  [SMALL_STATE(241)] = 9767,
  [SMALL_STATE(242)] = 9807,
  [SMALL_STATE(243)] = 9847,
  [SMALL_STATE(244)] = 9887,
  [SMALL_STATE(245)] = 9925,
  [SMALL_STATE(246)] = 9965,
  [SMALL_STATE(247)] = 10003,
  [SMALL_STATE(248)] = 10041,
  [SMALL_STATE(249)] = 10079,
  [SMALL_STATE(250)] = 10121,
  [SMALL_STATE(251)] = 10143,
  [SMALL_STATE(252)] = 10181,
  [SMALL_STATE(253)] = 10223,
  [SMALL_STATE(254)] = 10254,
  [SMALL_STATE(255)] = 10291,
  [SMALL_STATE(256)] = 10322,
  [SMALL_STATE(257)] = 10359,
  [SMALL_STATE(258)] = 10396,
  [SMALL_STATE(259)] = 10433,
  [SMALL_STATE(260)] = 10470,
  [SMALL_STATE(261)] = 10507,
  [SMALL_STATE(262)] = 10544,
  [SMALL_STATE(263)] = 10583,
  [SMALL_STATE(264)] = 10620,
  [SMALL_STATE(265)] = 10657,
  [SMALL_STATE(266)] = 10696,
  [SMALL_STATE(267)] = 10733,
  [SMALL_STATE(268)] = 10770,
  [SMALL_STATE(269)] = 10807,
  [SMALL_STATE(270)] = 10844,
  [SMALL_STATE(271)] = 10881,
  [SMALL_STATE(272)] = 10918,
  [SMALL_STATE(273)] = 10955,
  [SMALL_STATE(274)] = 10992,
  [SMALL_STATE(275)] = 11029,
  [SMALL_STATE(276)] = 11066,
  [SMALL_STATE(277)] = 11103,
  [SMALL_STATE(278)] = 11142,
  [SMALL_STATE(279)] = 11181,
  [SMALL_STATE(280)] = 11218,
  [SMALL_STATE(281)] = 11255,
  [SMALL_STATE(282)] = 11292,
  [SMALL_STATE(283)] = 11329,
  [SMALL_STATE(284)] = 11366,
  [SMALL_STATE(285)] = 11403,
  [SMALL_STATE(286)] = 11440,
  [SMALL_STATE(287)] = 11477,
  [SMALL_STATE(288)] = 11514,
  [SMALL_STATE(289)] = 11551,
  [SMALL_STATE(290)] = 11588,
  [SMALL_STATE(291)] = 11625,
  [SMALL_STATE(292)] = 11662,
  [SMALL_STATE(293)] = 11699,
  [SMALL_STATE(294)] = 11736,
  [SMALL_STATE(295)] = 11773,
  [SMALL_STATE(296)] = 11810,
  [SMALL_STATE(297)] = 11847,
  [SMALL_STATE(298)] = 11884,
  [SMALL_STATE(299)] = 11921,
  [SMALL_STATE(300)] = 11958,
  [SMALL_STATE(301)] = 11995,
  [SMALL_STATE(302)] = 12032,
  [SMALL_STATE(303)] = 12069,
  [SMALL_STATE(304)] = 12106,
  [SMALL_STATE(305)] = 12143,
  [SMALL_STATE(306)] = 12180,
  [SMALL_STATE(307)] = 12217,
  [SMALL_STATE(308)] = 12254,
  [SMALL_STATE(309)] = 12291,
  [SMALL_STATE(310)] = 12328,
  [SMALL_STATE(311)] = 12365,
  [SMALL_STATE(312)] = 12402,
  [SMALL_STATE(313)] = 12439,
  [SMALL_STATE(314)] = 12476,
  [SMALL_STATE(315)] = 12496,
  [SMALL_STATE(316)] = 12532,
  [SMALL_STATE(317)] = 12552,
  [SMALL_STATE(318)] = 12586,
  [SMALL_STATE(319)] = 12620,
  [SMALL_STATE(320)] = 12642,
  [SMALL_STATE(321)] = 12661,
  [SMALL_STATE(322)] = 12680,
  [SMALL_STATE(323)] = 12713,
  [SMALL_STATE(324)] = 12732,
  [SMALL_STATE(325)] = 12751,
  [SMALL_STATE(326)] = 12770,
  [SMALL_STATE(327)] = 12789,
  [SMALL_STATE(328)] = 12830,
  [SMALL_STATE(329)] = 12849,
  [SMALL_STATE(330)] = 12868,
  [SMALL_STATE(331)] = 12901,
  [SMALL_STATE(332)] = 12920,
  [SMALL_STATE(333)] = 12939,
  [SMALL_STATE(334)] = 12958,
  [SMALL_STATE(335)] = 12977,
  [SMALL_STATE(336)] = 13007,
  [SMALL_STATE(337)] = 13027,
  [SMALL_STATE(338)] = 13047,
  [SMALL_STATE(339)] = 13067,
  [SMALL_STATE(340)] = 13087,
  [SMALL_STATE(341)] = 13109,
  [SMALL_STATE(342)] = 13139,
  [SMALL_STATE(343)] = 13159,
  [SMALL_STATE(344)] = 13178,
  [SMALL_STATE(345)] = 13197,
  [SMALL_STATE(346)] = 13216,
  [SMALL_STATE(347)] = 13235,
  [SMALL_STATE(348)] = 13254,
  [SMALL_STATE(349)] = 13271,
  [SMALL_STATE(350)] = 13302,
  [SMALL_STATE(351)] = 13319,
  [SMALL_STATE(352)] = 13346,
  [SMALL_STATE(353)] = 13373,
  [SMALL_STATE(354)] = 13390,
  [SMALL_STATE(355)] = 13417,
  [SMALL_STATE(356)] = 13448,
  [SMALL_STATE(357)] = 13475,
  [SMALL_STATE(358)] = 13502,
  [SMALL_STATE(359)] = 13529,
  [SMALL_STATE(360)] = 13548,
  [SMALL_STATE(361)] = 13567,
  [SMALL_STATE(362)] = 13585,
  [SMALL_STATE(363)] = 13603,
  [SMALL_STATE(364)] = 13619,
  [SMALL_STATE(365)] = 13635,
  [SMALL_STATE(366)] = 13653,
  [SMALL_STATE(367)] = 13671,
  [SMALL_STATE(368)] = 13689,
  [SMALL_STATE(369)] = 13705,
  [SMALL_STATE(370)] = 13723,
  [SMALL_STATE(371)] = 13739,
  [SMALL_STATE(372)] = 13757,
  [SMALL_STATE(373)] = 13773,
  [SMALL_STATE(374)] = 13801,
  [SMALL_STATE(375)] = 13817,
  [SMALL_STATE(376)] = 13833,
  [SMALL_STATE(377)] = 13849,
  [SMALL_STATE(378)] = 13867,
  [SMALL_STATE(379)] = 13885,
  [SMALL_STATE(380)] = 13901,
  [SMALL_STATE(381)] = 13917,
  [SMALL_STATE(382)] = 13945,
  [SMALL_STATE(383)] = 13973,
  [SMALL_STATE(384)] = 14001,
  [SMALL_STATE(385)] = 14017,
  [SMALL_STATE(386)] = 14045,
  [SMALL_STATE(387)] = 14061,
  [SMALL_STATE(388)] = 14089,
  [SMALL_STATE(389)] = 14115,
  [SMALL_STATE(390)] = 14143,
  [SMALL_STATE(391)] = 14171,
  [SMALL_STATE(392)] = 14189,
  [SMALL_STATE(393)] = 14215,
  [SMALL_STATE(394)] = 14233,
  [SMALL_STATE(395)] = 14251,
  [SMALL_STATE(396)] = 14278,
  [SMALL_STATE(397)] = 14305,
  [SMALL_STATE(398)] = 14322,
  [SMALL_STATE(399)] = 14351,
  [SMALL_STATE(400)] = 14374,
  [SMALL_STATE(401)] = 14401,
  [SMALL_STATE(402)] = 14416,
  [SMALL_STATE(403)] = 14431,
  [SMALL_STATE(404)] = 14458,
  [SMALL_STATE(405)] = 14475,
  [SMALL_STATE(406)] = 14502,
  [SMALL_STATE(407)] = 14527,
  [SMALL_STATE(408)] = 14554,
  [SMALL_STATE(409)] = 14581,
  [SMALL_STATE(410)] = 14606,
  [SMALL_STATE(411)] = 14633,
  [SMALL_STATE(412)] = 14650,
  [SMALL_STATE(413)] = 14679,
  [SMALL_STATE(414)] = 14694,
  [SMALL_STATE(415)] = 14719,
  [SMALL_STATE(416)] = 14734,
  [SMALL_STATE(417)] = 14761,
  [SMALL_STATE(418)] = 14776,
  [SMALL_STATE(419)] = 14799,
  [SMALL_STATE(420)] = 14824,
  [SMALL_STATE(421)] = 14851,
  [SMALL_STATE(422)] = 14876,
  [SMALL_STATE(423)] = 14891,
  [SMALL_STATE(424)] = 14916,
  [SMALL_STATE(425)] = 14931,
  [SMALL_STATE(426)] = 14948,
  [SMALL_STATE(427)] = 14971,
  [SMALL_STATE(428)] = 14998,
  [SMALL_STATE(429)] = 15023,
  [SMALL_STATE(430)] = 15041,
  [SMALL_STATE(431)] = 15065,
  [SMALL_STATE(432)] = 15081,
  [SMALL_STATE(433)] = 15097,
  [SMALL_STATE(434)] = 15117,
  [SMALL_STATE(435)] = 15135,
  [SMALL_STATE(436)] = 15151,
  [SMALL_STATE(437)] = 15175,
  [SMALL_STATE(438)] = 15191,
  [SMALL_STATE(439)] = 15207,
  [SMALL_STATE(440)] = 15225,
  [SMALL_STATE(441)] = 15243,
  [SMALL_STATE(442)] = 15257,
  [SMALL_STATE(443)] = 15273,
  [SMALL_STATE(444)] = 15299,
  [SMALL_STATE(445)] = 15313,
  [SMALL_STATE(446)] = 15329,
  [SMALL_STATE(447)] = 15347,
  [SMALL_STATE(448)] = 15365,
  [SMALL_STATE(449)] = 15383,
  [SMALL_STATE(450)] = 15399,
  [SMALL_STATE(451)] = 15415,
  [SMALL_STATE(452)] = 15431,
  [SMALL_STATE(453)] = 15457,
  [SMALL_STATE(454)] = 15473,
  [SMALL_STATE(455)] = 15497,
  [SMALL_STATE(456)] = 15523,
  [SMALL_STATE(457)] = 15539,
  [SMALL_STATE(458)] = 15559,
  [SMALL_STATE(459)] = 15585,
  [SMALL_STATE(460)] = 15611,
  [SMALL_STATE(461)] = 15628,
  [SMALL_STATE(462)] = 15649,
  [SMALL_STATE(463)] = 15670,
  [SMALL_STATE(464)] = 15691,
  [SMALL_STATE(465)] = 15712,
  [SMALL_STATE(466)] = 15733,
  [SMALL_STATE(467)] = 15754,
  [SMALL_STATE(468)] = 15771,
  [SMALL_STATE(469)] = 15794,
  [SMALL_STATE(470)] = 15815,
  [SMALL_STATE(471)] = 15838,
  [SMALL_STATE(472)] = 15859,
  [SMALL_STATE(473)] = 15880,
  [SMALL_STATE(474)] = 15893,
  [SMALL_STATE(475)] = 15916,
  [SMALL_STATE(476)] = 15939,
  [SMALL_STATE(477)] = 15956,
  [SMALL_STATE(478)] = 15977,
  [SMALL_STATE(479)] = 16000,
  [SMALL_STATE(480)] = 16019,
  [SMALL_STATE(481)] = 16040,
  [SMALL_STATE(482)] = 16063,
  [SMALL_STATE(483)] = 16084,
  [SMALL_STATE(484)] = 16105,
  [SMALL_STATE(485)] = 16126,
  [SMALL_STATE(486)] = 16147,
  [SMALL_STATE(487)] = 16170,
  [SMALL_STATE(488)] = 16193,
  [SMALL_STATE(489)] = 16210,
  [SMALL_STATE(490)] = 16233,
  [SMALL_STATE(491)] = 16254,
  [SMALL_STATE(492)] = 16271,
  [SMALL_STATE(493)] = 16294,
  [SMALL_STATE(494)] = 16317,
  [SMALL_STATE(495)] = 16330,
  [SMALL_STATE(496)] = 16347,
  [SMALL_STATE(497)] = 16368,
  [SMALL_STATE(498)] = 16385,
  [SMALL_STATE(499)] = 16403,
  [SMALL_STATE(500)] = 16419,
  [SMALL_STATE(501)] = 16439,
  [SMALL_STATE(502)] = 16459,
  [SMALL_STATE(503)] = 16479,
  [SMALL_STATE(504)] = 16499,
  [SMALL_STATE(505)] = 16517,
  [SMALL_STATE(506)] = 16537,
  [SMALL_STATE(507)] = 16553,
  [SMALL_STATE(508)] = 16569,
  [SMALL_STATE(509)] = 16589,
  [SMALL_STATE(510)] = 16609,
  [SMALL_STATE(511)] = 16629,
  [SMALL_STATE(512)] = 16649,
  [SMALL_STATE(513)] = 16663,
  [SMALL_STATE(514)] = 16683,
  [SMALL_STATE(515)] = 16703,
  [SMALL_STATE(516)] = 16723,
  [SMALL_STATE(517)] = 16739,
  [SMALL_STATE(518)] = 16759,
  [SMALL_STATE(519)] = 16775,
  [SMALL_STATE(520)] = 16795,
  [SMALL_STATE(521)] = 16815,
  [SMALL_STATE(522)] = 16831,
  [SMALL_STATE(523)] = 16845,
  [SMALL_STATE(524)] = 16861,
  [SMALL_STATE(525)] = 16877,
  [SMALL_STATE(526)] = 16893,
  [SMALL_STATE(527)] = 16909,
  [SMALL_STATE(528)] = 16927,
  [SMALL_STATE(529)] = 16941,
  [SMALL_STATE(530)] = 16961,
  [SMALL_STATE(531)] = 16981,
  [SMALL_STATE(532)] = 17001,
  [SMALL_STATE(533)] = 17019,
  [SMALL_STATE(534)] = 17033,
  [SMALL_STATE(535)] = 17045,
  [SMALL_STATE(536)] = 17065,
  [SMALL_STATE(537)] = 17079,
  [SMALL_STATE(538)] = 17099,
  [SMALL_STATE(539)] = 17115,
  [SMALL_STATE(540)] = 17131,
  [SMALL_STATE(541)] = 17149,
  [SMALL_STATE(542)] = 17167,
  [SMALL_STATE(543)] = 17183,
  [SMALL_STATE(544)] = 17195,
  [SMALL_STATE(545)] = 17215,
  [SMALL_STATE(546)] = 17232,
  [SMALL_STATE(547)] = 17249,
  [SMALL_STATE(548)] = 17266,
  [SMALL_STATE(549)] = 17277,
  [SMALL_STATE(550)] = 17290,
  [SMALL_STATE(551)] = 17307,
  [SMALL_STATE(552)] = 17322,
  [SMALL_STATE(553)] = 17339,
  [SMALL_STATE(554)] = 17350,
  [SMALL_STATE(555)] = 17367,
  [SMALL_STATE(556)] = 17384,
  [SMALL_STATE(557)] = 17401,
  [SMALL_STATE(558)] = 17418,
  [SMALL_STATE(559)] = 17433,
  [SMALL_STATE(560)] = 17450,
  [SMALL_STATE(561)] = 17467,
  [SMALL_STATE(562)] = 17484,
  [SMALL_STATE(563)] = 17501,
  [SMALL_STATE(564)] = 17518,
  [SMALL_STATE(565)] = 17535,
  [SMALL_STATE(566)] = 17552,
  [SMALL_STATE(567)] = 17569,
  [SMALL_STATE(568)] = 17586,
  [SMALL_STATE(569)] = 17603,
  [SMALL_STATE(570)] = 17620,
  [SMALL_STATE(571)] = 17637,
  [SMALL_STATE(572)] = 17654,
  [SMALL_STATE(573)] = 17667,
  [SMALL_STATE(574)] = 17678,
  [SMALL_STATE(575)] = 17695,
  [SMALL_STATE(576)] = 17708,
  [SMALL_STATE(577)] = 17721,
  [SMALL_STATE(578)] = 17738,
  [SMALL_STATE(579)] = 17755,
  [SMALL_STATE(580)] = 17772,
  [SMALL_STATE(581)] = 17783,
  [SMALL_STATE(582)] = 17800,
  [SMALL_STATE(583)] = 17817,
  [SMALL_STATE(584)] = 17834,
  [SMALL_STATE(585)] = 17851,
  [SMALL_STATE(586)] = 17868,
  [SMALL_STATE(587)] = 17881,
  [SMALL_STATE(588)] = 17898,
  [SMALL_STATE(589)] = 17909,
  [SMALL_STATE(590)] = 17926,
  [SMALL_STATE(591)] = 17939,
  [SMALL_STATE(592)] = 17952,
  [SMALL_STATE(593)] = 17969,
  [SMALL_STATE(594)] = 17982,
  [SMALL_STATE(595)] = 17999,
  [SMALL_STATE(596)] = 18012,
  [SMALL_STATE(597)] = 18025,
  [SMALL_STATE(598)] = 18042,
  [SMALL_STATE(599)] = 18055,
  [SMALL_STATE(600)] = 18072,
  [SMALL_STATE(601)] = 18087,
  [SMALL_STATE(602)] = 18104,
  [SMALL_STATE(603)] = 18115,
  [SMALL_STATE(604)] = 18130,
  [SMALL_STATE(605)] = 18144,
  [SMALL_STATE(606)] = 18158,
  [SMALL_STATE(607)] = 18172,
  [SMALL_STATE(608)] = 18182,
  [SMALL_STATE(609)] = 18196,
  [SMALL_STATE(610)] = 18210,
  [SMALL_STATE(611)] = 18224,
  [SMALL_STATE(612)] = 18238,
  [SMALL_STATE(613)] = 18248,
  [SMALL_STATE(614)] = 18262,
  [SMALL_STATE(615)] = 18276,
  [SMALL_STATE(616)] = 18290,
  [SMALL_STATE(617)] = 18304,
  [SMALL_STATE(618)] = 18318,
  [SMALL_STATE(619)] = 18332,
  [SMALL_STATE(620)] = 18346,
  [SMALL_STATE(621)] = 18360,
  [SMALL_STATE(622)] = 18374,
  [SMALL_STATE(623)] = 18384,
  [SMALL_STATE(624)] = 18398,
  [SMALL_STATE(625)] = 18412,
  [SMALL_STATE(626)] = 18426,
  [SMALL_STATE(627)] = 18440,
  [SMALL_STATE(628)] = 18450,
  [SMALL_STATE(629)] = 18464,
  [SMALL_STATE(630)] = 18478,
  [SMALL_STATE(631)] = 18492,
  [SMALL_STATE(632)] = 18506,
  [SMALL_STATE(633)] = 18520,
  [SMALL_STATE(634)] = 18534,
  [SMALL_STATE(635)] = 18544,
  [SMALL_STATE(636)] = 18558,
  [SMALL_STATE(637)] = 18572,
  [SMALL_STATE(638)] = 18586,
  [SMALL_STATE(639)] = 18600,
  [SMALL_STATE(640)] = 18614,
  [SMALL_STATE(641)] = 18628,
  [SMALL_STATE(642)] = 18642,
  [SMALL_STATE(643)] = 18656,
  [SMALL_STATE(644)] = 18670,
  [SMALL_STATE(645)] = 18684,
  [SMALL_STATE(646)] = 18698,
  [SMALL_STATE(647)] = 18708,
  [SMALL_STATE(648)] = 18722,
  [SMALL_STATE(649)] = 18736,
  [SMALL_STATE(650)] = 18750,
  [SMALL_STATE(651)] = 18764,
  [SMALL_STATE(652)] = 18778,
  [SMALL_STATE(653)] = 18792,
  [SMALL_STATE(654)] = 18806,
  [SMALL_STATE(655)] = 18820,
  [SMALL_STATE(656)] = 18834,
  [SMALL_STATE(657)] = 18848,
  [SMALL_STATE(658)] = 18862,
  [SMALL_STATE(659)] = 18876,
  [SMALL_STATE(660)] = 18890,
  [SMALL_STATE(661)] = 18900,
  [SMALL_STATE(662)] = 18914,
  [SMALL_STATE(663)] = 18928,
  [SMALL_STATE(664)] = 18938,
  [SMALL_STATE(665)] = 18952,
  [SMALL_STATE(666)] = 18966,
  [SMALL_STATE(667)] = 18980,
  [SMALL_STATE(668)] = 18994,
  [SMALL_STATE(669)] = 19008,
  [SMALL_STATE(670)] = 19022,
  [SMALL_STATE(671)] = 19036,
  [SMALL_STATE(672)] = 19050,
  [SMALL_STATE(673)] = 19064,
  [SMALL_STATE(674)] = 19078,
  [SMALL_STATE(675)] = 19092,
  [SMALL_STATE(676)] = 19106,
  [SMALL_STATE(677)] = 19120,
  [SMALL_STATE(678)] = 19134,
  [SMALL_STATE(679)] = 19148,
  [SMALL_STATE(680)] = 19162,
  [SMALL_STATE(681)] = 19176,
  [SMALL_STATE(682)] = 19190,
  [SMALL_STATE(683)] = 19204,
  [SMALL_STATE(684)] = 19218,
  [SMALL_STATE(685)] = 19232,
  [SMALL_STATE(686)] = 19246,
  [SMALL_STATE(687)] = 19260,
  [SMALL_STATE(688)] = 19270,
  [SMALL_STATE(689)] = 19284,
  [SMALL_STATE(690)] = 19298,
  [SMALL_STATE(691)] = 19312,
  [SMALL_STATE(692)] = 19326,
  [SMALL_STATE(693)] = 19340,
  [SMALL_STATE(694)] = 19354,
  [SMALL_STATE(695)] = 19364,
  [SMALL_STATE(696)] = 19378,
  [SMALL_STATE(697)] = 19392,
  [SMALL_STATE(698)] = 19406,
  [SMALL_STATE(699)] = 19420,
  [SMALL_STATE(700)] = 19434,
  [SMALL_STATE(701)] = 19448,
  [SMALL_STATE(702)] = 19462,
  [SMALL_STATE(703)] = 19476,
  [SMALL_STATE(704)] = 19490,
  [SMALL_STATE(705)] = 19504,
  [SMALL_STATE(706)] = 19518,
  [SMALL_STATE(707)] = 19528,
  [SMALL_STATE(708)] = 19542,
  [SMALL_STATE(709)] = 19556,
  [SMALL_STATE(710)] = 19570,
  [SMALL_STATE(711)] = 19584,
  [SMALL_STATE(712)] = 19594,
  [SMALL_STATE(713)] = 19608,
  [SMALL_STATE(714)] = 19622,
  [SMALL_STATE(715)] = 19636,
  [SMALL_STATE(716)] = 19650,
  [SMALL_STATE(717)] = 19664,
  [SMALL_STATE(718)] = 19678,
  [SMALL_STATE(719)] = 19692,
  [SMALL_STATE(720)] = 19706,
  [SMALL_STATE(721)] = 19720,
  [SMALL_STATE(722)] = 19732,
  [SMALL_STATE(723)] = 19746,
  [SMALL_STATE(724)] = 19760,
  [SMALL_STATE(725)] = 19774,
  [SMALL_STATE(726)] = 19788,
  [SMALL_STATE(727)] = 19802,
  [SMALL_STATE(728)] = 19816,
  [SMALL_STATE(729)] = 19830,
  [SMALL_STATE(730)] = 19844,
  [SMALL_STATE(731)] = 19858,
  [SMALL_STATE(732)] = 19872,
  [SMALL_STATE(733)] = 19886,
  [SMALL_STATE(734)] = 19900,
  [SMALL_STATE(735)] = 19914,
  [SMALL_STATE(736)] = 19928,
  [SMALL_STATE(737)] = 19942,
  [SMALL_STATE(738)] = 19953,
  [SMALL_STATE(739)] = 19962,
  [SMALL_STATE(740)] = 19973,
  [SMALL_STATE(741)] = 19984,
  [SMALL_STATE(742)] = 19995,
  [SMALL_STATE(743)] = 20004,
  [SMALL_STATE(744)] = 20013,
  [SMALL_STATE(745)] = 20024,
  [SMALL_STATE(746)] = 20033,
  [SMALL_STATE(747)] = 20042,
  [SMALL_STATE(748)] = 20053,
  [SMALL_STATE(749)] = 20064,
  [SMALL_STATE(750)] = 20075,
  [SMALL_STATE(751)] = 20086,
  [SMALL_STATE(752)] = 20097,
  [SMALL_STATE(753)] = 20108,
  [SMALL_STATE(754)] = 20119,
  [SMALL_STATE(755)] = 20130,
  [SMALL_STATE(756)] = 20139,
  [SMALL_STATE(757)] = 20150,
  [SMALL_STATE(758)] = 20161,
  [SMALL_STATE(759)] = 20172,
  [SMALL_STATE(760)] = 20183,
  [SMALL_STATE(761)] = 20194,
  [SMALL_STATE(762)] = 20205,
  [SMALL_STATE(763)] = 20216,
  [SMALL_STATE(764)] = 20227,
  [SMALL_STATE(765)] = 20238,
  [SMALL_STATE(766)] = 20249,
  [SMALL_STATE(767)] = 20260,
  [SMALL_STATE(768)] = 20271,
  [SMALL_STATE(769)] = 20282,
  [SMALL_STATE(770)] = 20291,
  [SMALL_STATE(771)] = 20302,
  [SMALL_STATE(772)] = 20313,
  [SMALL_STATE(773)] = 20322,
  [SMALL_STATE(774)] = 20333,
  [SMALL_STATE(775)] = 20342,
  [SMALL_STATE(776)] = 20353,
  [SMALL_STATE(777)] = 20362,
  [SMALL_STATE(778)] = 20373,
  [SMALL_STATE(779)] = 20384,
  [SMALL_STATE(780)] = 20393,
  [SMALL_STATE(781)] = 20402,
  [SMALL_STATE(782)] = 20411,
  [SMALL_STATE(783)] = 20420,
  [SMALL_STATE(784)] = 20431,
  [SMALL_STATE(785)] = 20440,
  [SMALL_STATE(786)] = 20451,
  [SMALL_STATE(787)] = 20460,
  [SMALL_STATE(788)] = 20469,
  [SMALL_STATE(789)] = 20478,
  [SMALL_STATE(790)] = 20487,
  [SMALL_STATE(791)] = 20498,
  [SMALL_STATE(792)] = 20507,
  [SMALL_STATE(793)] = 20516,
  [SMALL_STATE(794)] = 20527,
  [SMALL_STATE(795)] = 20538,
  [SMALL_STATE(796)] = 20547,
  [SMALL_STATE(797)] = 20556,
  [SMALL_STATE(798)] = 20565,
  [SMALL_STATE(799)] = 20574,
  [SMALL_STATE(800)] = 20585,
  [SMALL_STATE(801)] = 20594,
  [SMALL_STATE(802)] = 20603,
  [SMALL_STATE(803)] = 20612,
  [SMALL_STATE(804)] = 20623,
  [SMALL_STATE(805)] = 20632,
  [SMALL_STATE(806)] = 20641,
  [SMALL_STATE(807)] = 20650,
  [SMALL_STATE(808)] = 20658,
  [SMALL_STATE(809)] = 20666,
  [SMALL_STATE(810)] = 20674,
  [SMALL_STATE(811)] = 20682,
  [SMALL_STATE(812)] = 20690,
  [SMALL_STATE(813)] = 20698,
  [SMALL_STATE(814)] = 20706,
  [SMALL_STATE(815)] = 20714,
  [SMALL_STATE(816)] = 20722,
  [SMALL_STATE(817)] = 20730,
  [SMALL_STATE(818)] = 20738,
  [SMALL_STATE(819)] = 20746,
  [SMALL_STATE(820)] = 20754,
  [SMALL_STATE(821)] = 20762,
  [SMALL_STATE(822)] = 20770,
  [SMALL_STATE(823)] = 20778,
  [SMALL_STATE(824)] = 20786,
  [SMALL_STATE(825)] = 20794,
  [SMALL_STATE(826)] = 20802,
  [SMALL_STATE(827)] = 20810,
  [SMALL_STATE(828)] = 20818,
  [SMALL_STATE(829)] = 20826,
  [SMALL_STATE(830)] = 20834,
  [SMALL_STATE(831)] = 20842,
  [SMALL_STATE(832)] = 20850,
  [SMALL_STATE(833)] = 20858,
  [SMALL_STATE(834)] = 20866,
  [SMALL_STATE(835)] = 20874,
  [SMALL_STATE(836)] = 20882,
  [SMALL_STATE(837)] = 20890,
  [SMALL_STATE(838)] = 20898,
  [SMALL_STATE(839)] = 20906,
  [SMALL_STATE(840)] = 20914,
  [SMALL_STATE(841)] = 20922,
  [SMALL_STATE(842)] = 20930,
  [SMALL_STATE(843)] = 20938,
  [SMALL_STATE(844)] = 20946,
  [SMALL_STATE(845)] = 20954,
  [SMALL_STATE(846)] = 20962,
  [SMALL_STATE(847)] = 20970,
  [SMALL_STATE(848)] = 20978,
  [SMALL_STATE(849)] = 20986,
  [SMALL_STATE(850)] = 20994,
  [SMALL_STATE(851)] = 21002,
  [SMALL_STATE(852)] = 21010,
  [SMALL_STATE(853)] = 21018,
  [SMALL_STATE(854)] = 21026,
  [SMALL_STATE(855)] = 21034,
  [SMALL_STATE(856)] = 21042,
  [SMALL_STATE(857)] = 21050,
  [SMALL_STATE(858)] = 21058,
  [SMALL_STATE(859)] = 21066,
  [SMALL_STATE(860)] = 21074,
  [SMALL_STATE(861)] = 21082,
  [SMALL_STATE(862)] = 21090,
  [SMALL_STATE(863)] = 21098,
  [SMALL_STATE(864)] = 21106,
  [SMALL_STATE(865)] = 21114,
  [SMALL_STATE(866)] = 21122,
  [SMALL_STATE(867)] = 21130,
  [SMALL_STATE(868)] = 21138,
  [SMALL_STATE(869)] = 21146,
  [SMALL_STATE(870)] = 21154,
  [SMALL_STATE(871)] = 21162,
  [SMALL_STATE(872)] = 21170,
  [SMALL_STATE(873)] = 21178,
  [SMALL_STATE(874)] = 21186,
  [SMALL_STATE(875)] = 21194,
  [SMALL_STATE(876)] = 21202,
  [SMALL_STATE(877)] = 21210,
  [SMALL_STATE(878)] = 21218,
  [SMALL_STATE(879)] = 21226,
  [SMALL_STATE(880)] = 21234,
  [SMALL_STATE(881)] = 21242,
  [SMALL_STATE(882)] = 21250,
  [SMALL_STATE(883)] = 21258,
  [SMALL_STATE(884)] = 21266,
  [SMALL_STATE(885)] = 21274,
  [SMALL_STATE(886)] = 21282,
  [SMALL_STATE(887)] = 21290,
  [SMALL_STATE(888)] = 21298,
  [SMALL_STATE(889)] = 21306,
  [SMALL_STATE(890)] = 21314,
  [SMALL_STATE(891)] = 21322,
  [SMALL_STATE(892)] = 21330,
  [SMALL_STATE(893)] = 21338,
  [SMALL_STATE(894)] = 21346,
  [SMALL_STATE(895)] = 21354,
  [SMALL_STATE(896)] = 21362,
  [SMALL_STATE(897)] = 21370,
  [SMALL_STATE(898)] = 21378,
  [SMALL_STATE(899)] = 21386,
  [SMALL_STATE(900)] = 21394,
  [SMALL_STATE(901)] = 21402,
  [SMALL_STATE(902)] = 21410,
  [SMALL_STATE(903)] = 21418,
  [SMALL_STATE(904)] = 21426,
  [SMALL_STATE(905)] = 21434,
  [SMALL_STATE(906)] = 21442,
  [SMALL_STATE(907)] = 21450,
  [SMALL_STATE(908)] = 21458,
  [SMALL_STATE(909)] = 21466,
  [SMALL_STATE(910)] = 21474,
  [SMALL_STATE(911)] = 21482,
  [SMALL_STATE(912)] = 21490,
  [SMALL_STATE(913)] = 21498,
  [SMALL_STATE(914)] = 21506,
  [SMALL_STATE(915)] = 21514,
  [SMALL_STATE(916)] = 21522,
  [SMALL_STATE(917)] = 21530,
  [SMALL_STATE(918)] = 21538,
  [SMALL_STATE(919)] = 21546,
  [SMALL_STATE(920)] = 21554,
  [SMALL_STATE(921)] = 21562,
  [SMALL_STATE(922)] = 21570,
  [SMALL_STATE(923)] = 21578,
  [SMALL_STATE(924)] = 21586,
  [SMALL_STATE(925)] = 21594,
  [SMALL_STATE(926)] = 21602,
  [SMALL_STATE(927)] = 21610,
  [SMALL_STATE(928)] = 21618,
  [SMALL_STATE(929)] = 21626,
  [SMALL_STATE(930)] = 21634,
  [SMALL_STATE(931)] = 21642,
  [SMALL_STATE(932)] = 21650,
  [SMALL_STATE(933)] = 21658,
  [SMALL_STATE(934)] = 21666,
  [SMALL_STATE(935)] = 21674,
  [SMALL_STATE(936)] = 21682,
  [SMALL_STATE(937)] = 21690,
  [SMALL_STATE(938)] = 21698,
  [SMALL_STATE(939)] = 21706,
  [SMALL_STATE(940)] = 21714,
  [SMALL_STATE(941)] = 21722,
  [SMALL_STATE(942)] = 21730,
  [SMALL_STATE(943)] = 21738,
  [SMALL_STATE(944)] = 21746,
  [SMALL_STATE(945)] = 21754,
  [SMALL_STATE(946)] = 21762,
  [SMALL_STATE(947)] = 21770,
  [SMALL_STATE(948)] = 21778,
  [SMALL_STATE(949)] = 21786,
  [SMALL_STATE(950)] = 21794,
  [SMALL_STATE(951)] = 21802,
  [SMALL_STATE(952)] = 21810,
  [SMALL_STATE(953)] = 21818,
  [SMALL_STATE(954)] = 21826,
  [SMALL_STATE(955)] = 21834,
  [SMALL_STATE(956)] = 21842,
  [SMALL_STATE(957)] = 21850,
  [SMALL_STATE(958)] = 21858,
  [SMALL_STATE(959)] = 21866,
  [SMALL_STATE(960)] = 21874,
  [SMALL_STATE(961)] = 21882,
  [SMALL_STATE(962)] = 21890,
  [SMALL_STATE(963)] = 21898,
  [SMALL_STATE(964)] = 21906,
  [SMALL_STATE(965)] = 21914,
  [SMALL_STATE(966)] = 21922,
  [SMALL_STATE(967)] = 21930,
  [SMALL_STATE(968)] = 21938,
  [SMALL_STATE(969)] = 21946,
  [SMALL_STATE(970)] = 21954,
  [SMALL_STATE(971)] = 21962,
  [SMALL_STATE(972)] = 21970,
  [SMALL_STATE(973)] = 21978,
  [SMALL_STATE(974)] = 21986,
  [SMALL_STATE(975)] = 21994,
  [SMALL_STATE(976)] = 22002,
  [SMALL_STATE(977)] = 22010,
  [SMALL_STATE(978)] = 22018,
  [SMALL_STATE(979)] = 22026,
  [SMALL_STATE(980)] = 22034,
  [SMALL_STATE(981)] = 22042,
  [SMALL_STATE(982)] = 22050,
  [SMALL_STATE(983)] = 22058,
  [SMALL_STATE(984)] = 22066,
  [SMALL_STATE(985)] = 22074,
  [SMALL_STATE(986)] = 22082,
  [SMALL_STATE(987)] = 22090,
  [SMALL_STATE(988)] = 22098,
  [SMALL_STATE(989)] = 22106,
  [SMALL_STATE(990)] = 22114,
  [SMALL_STATE(991)] = 22122,
  [SMALL_STATE(992)] = 22130,
  [SMALL_STATE(993)] = 22138,
  [SMALL_STATE(994)] = 22146,
  [SMALL_STATE(995)] = 22154,
  [SMALL_STATE(996)] = 22162,
  [SMALL_STATE(997)] = 22170,
  [SMALL_STATE(998)] = 22178,
  [SMALL_STATE(999)] = 22186,
  [SMALL_STATE(1000)] = 22194,
  [SMALL_STATE(1001)] = 22202,
  [SMALL_STATE(1002)] = 22210,
  [SMALL_STATE(1003)] = 22218,
  [SMALL_STATE(1004)] = 22226,
  [SMALL_STATE(1005)] = 22234,
  [SMALL_STATE(1006)] = 22242,
  [SMALL_STATE(1007)] = 22250,
  [SMALL_STATE(1008)] = 22258,
  [SMALL_STATE(1009)] = 22266,
  [SMALL_STATE(1010)] = 22274,
  [SMALL_STATE(1011)] = 22282,
  [SMALL_STATE(1012)] = 22290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 26),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 26),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6, .production_id = 47),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 33),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 33),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7, .production_id = 49),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 8, .production_id = 51),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 9, .production_id = 52),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 40),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 40),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 21),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 21),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 17),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 17),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 24),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 24),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 8),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(973),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(942),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(991),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 12),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 12),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 31),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(989),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(993),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 19),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 13),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 38),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 32),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 27),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 41),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(766),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(756),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(980),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(505),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(740),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(739),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(1010),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(514),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 28),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 29),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 28),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 12),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 3, .production_id = 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 3, .production_id = 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 20),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 20),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 45),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 45),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 4, .production_id = 16),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 4, .production_id = 16),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 4),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 4),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 14),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 14),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 46),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 46),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 45),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 50),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 50),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_int, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 29),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(882),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 3, .production_id = 10),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 29),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 5, .production_id = 25),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(383),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(593),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(936),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(345),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(390),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(975),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1000),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 29),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(277),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 2),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(387),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(389),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(278),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 18),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 18),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 35),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 35),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(412),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [1177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(550),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 29),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [1208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(589),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(566),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [1224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(500),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 1, .production_id = 9),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [1245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(587),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 15),
  [1250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(479),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 23),
  [1265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 23), SHIFT_REPEAT(154),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(381),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 2),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 36),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 31),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 42),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 44),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_with, 1),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 31),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 34),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 48),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 44),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 2),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 28),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 30),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(984),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1677] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 43),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 37),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
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
