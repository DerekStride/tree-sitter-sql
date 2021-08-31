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
#define STATE_COUNT 1019
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
      if (eof) ADVANCE(820);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'B') ADVANCE(202);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'D') ADVANCE(64);
      if (lookahead == 'E') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(178);
      if (lookahead == 'J') ADVANCE(292);
      if (lookahead == 'K') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(89);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(287);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(323);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'V') ADVANCE(57);
      if (lookahead == 'W') ADVANCE(194);
      if (lookahead == 'X') ADVANCE(246);
      if (lookahead == 'Z') ADVANCE(298);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'b') ADVANCE(569);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(768);
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead == 'g') ADVANCE(519);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'j') ADVANCE(658);
      if (lookahead == 'k') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(690);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(676);
      if (lookahead == 'v') ADVANCE(424);
      if (lookahead == 'w') ADVANCE(561);
      if (lookahead == 'x') ADVANCE(613);
      if (lookahead == 'z') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(819)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(985);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(458);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(459);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'O') ADVANCE(1109);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'o') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(791)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(272);
      if (lookahead == 'D') ADVANCE(144);
      if (lookahead == 'F') ADVANCE(302);
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'M') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'P') ADVANCE(335);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(194);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'd') ADVANCE(511);
      if (lookahead == 'f') ADVANCE(669);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(670);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == 'v') ADVANCE(450);
      if (lookahead == 'w') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(787)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(271);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == 'G') ADVANCE(326);
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'O') ADVANCE(312);
      if (lookahead == 'W') ADVANCE(195);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead == 'g') ADVANCE(693);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead == 'w') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(792)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1085);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(788)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(789)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(786)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'O') ADVANCE(1109);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'o') ADVANCE(1231);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(793)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1085);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'W') ADVANCE(1062);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'w') ADVANCE(1184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(784)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'W') ADVANCE(1072);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'w') ADVANCE(1194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(785)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'W') ADVANCE(1072);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'w') ADVANCE(1194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(790)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1101);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(795)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1101);
      if (lookahead == 'D') ADVANCE(1071);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1223);
      if (lookahead == 'd') ADVANCE(1193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(802)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1101);
      if (lookahead == 'S') ADVANCE(1043);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1223);
      if (lookahead == 's') ADVANCE(1165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(794)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(1029);
      if (lookahead == 'T') ADVANCE(1116);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'f') ADVANCE(1151);
      if (lookahead == 't') ADVANCE(1238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(799)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'F') ADVANCE(1118);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'f') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(806)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'B') ADVANCE(202);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'F') ADVANCE(301);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'J') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'M') ADVANCE(293);
      if (lookahead == 'N') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(262);
      if (lookahead == 'P') ADVANCE(335);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'S') ADVANCE(125);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == 'W') ADVANCE(195);
      if (lookahead == 'X') ADVANCE(246);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == 'b') ADVANCE(569);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'g') ADVANCE(519);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead == 'j') ADVANCE(658);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(659);
      if (lookahead == 'n') ADVANCE(671);
      if (lookahead == 'o') ADVANCE(629);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead == 'u') ADVANCE(676);
      if (lookahead == 'v') ADVANCE(429);
      if (lookahead == 'w') ADVANCE(562);
      if (lookahead == 'x') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1124);
      if (lookahead == 'D') ADVANCE(1055);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1246);
      if (lookahead == 'd') ADVANCE(1177);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(803)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(810)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'F') ADVANCE(1118);
      if (lookahead == 'W') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'f') ADVANCE(1240);
      if (lookahead == 'w') ADVANCE(1194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(807)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1124);
      if (lookahead == 'D') ADVANCE(1055);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'W') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1246);
      if (lookahead == 'd') ADVANCE(1177);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'w') ADVANCE(1194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1092);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'U') ADVANCE(1128);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(798)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1092);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'U') ADVANCE(1128);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(800)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(990);
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
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1092);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'U') ADVANCE(1128);
      if (lookahead == 'W') ADVANCE(1062);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == 'w') ADVANCE(1184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(808)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'O') ADVANCE(1088);
      if (lookahead == 'U') ADVANCE(1125);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'o') ADVANCE(1210);
      if (lookahead == 'u') ADVANCE(1247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(809)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1092);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'U') ADVANCE(1128);
      if (lookahead == 'W') ADVANCE(1062);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == 'w') ADVANCE(1184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(801)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'D') ADVANCE(1051);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'd') ADVANCE(1173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(811)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(813)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'O') ADVANCE(1088);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'o') ADVANCE(1210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(816)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1105);
      if (lookahead == 'K') ADVANCE(1050);
      if (lookahead == 'P') ADVANCE(1119);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1227);
      if (lookahead == 'k') ADVANCE(1172);
      if (lookahead == 'p') ADVANCE(1241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(804)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1103);
      if (lookahead == 'T') ADVANCE(1099);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1225);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(817)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'O') ADVANCE(1088);
      if (lookahead == 'U') ADVANCE(1125);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'o') ADVANCE(1210);
      if (lookahead == 'u') ADVANCE(1247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(812)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(1058);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'i') ADVANCE(1180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(814)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(818)
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'L') ADVANCE(1034);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'l') ADVANCE(1156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(815)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == '3') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(482);
      if (lookahead == '3') ADVANCE(483);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(1002);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'H') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(231);
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'H') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(232);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(296);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(399);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(389);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'O') ADVANCE(283);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(248);
      if (lookahead == 'I') ADVANCE(251);
      if (lookahead == 'O') ADVANCE(929);
      if (lookahead == 'R') ADVANCE(394);
      if (lookahead == 'Y') ADVANCE(311);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead == 'I') ADVANCE(258);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'I') ADVANCE(127);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(926);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(926);
      if (lookahead == 'E') ADVANCE(967);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(966);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(931);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(242);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(314);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(355);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(347);
      if (lookahead == 'O') ADVANCE(398);
      if (lookahead == 'R') ADVANCE(294);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(355);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(398);
      if (lookahead == 'R') ADVANCE(294);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(395);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(236);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(310);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(235);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(250);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(226);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(227);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(228);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(237);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(324);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(267);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(230);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(319);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(328);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(329);
      if (lookahead == 'I') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(380);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(254);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(381);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(383);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(219);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(387);
      if (lookahead == 'E') ADVANCE(182);
      if (lookahead == 'I') ADVANCE(249);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(388);
      END_STATE();
    case 91:
      if (lookahead == 'B') ADVANCE(408);
      END_STATE();
    case 92:
      if (lookahead == 'B') ADVANCE(409);
      END_STATE();
    case 93:
      if (lookahead == 'B') ADVANCE(238);
      END_STATE();
    case 94:
      if (lookahead == 'B') ADVANCE(240);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(196);
      if (lookahead == 'E') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(854);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(852);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(951);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'F') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(172);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'F') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(199);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == 'Y') ADVANCE(211);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(364);
      END_STATE();
    case 106:
      if (lookahead == 'C') ADVANCE(367);
      END_STATE();
    case 107:
      if (lookahead == 'C') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'C') ADVANCE(206);
      END_STATE();
    case 109:
      if (lookahead == 'C') ADVANCE(333);
      END_STATE();
    case 110:
      if (lookahead == 'C') ADVANCE(391);
      END_STATE();
    case 111:
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(384);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(873);
      if (lookahead == 'U') ADVANCE(374);
      if (lookahead == 'V') ADVANCE(184);
      END_STATE();
    case 112:
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(384);
      if (lookahead == 'S') ADVANCE(872);
      END_STATE();
    case 113:
      if (lookahead == 'D') ADVANCE(864);
      END_STATE();
    case 114:
      if (lookahead == 'D') ADVANCE(893);
      END_STATE();
    case 115:
      if (lookahead == 'D') ADVANCE(980);
      END_STATE();
    case 116:
      if (lookahead == 'D') ADVANCE(981);
      END_STATE();
    case 117:
      if (lookahead == 'D') ADVANCE(867);
      END_STATE();
    case 118:
      if (lookahead == 'D') ADVANCE(141);
      END_STATE();
    case 119:
      if (lookahead == 'D') ADVANCE(148);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(170);
      if (lookahead == 'T') ADVANCE(946);
      END_STATE();
    case 120:
      if (lookahead == 'D') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(404);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(182);
      if (lookahead == 'I') ADVANCE(249);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(189);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(71);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(906);
      if (lookahead == 'I') ADVANCE(273);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(400);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(974);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(937);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(927);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(976);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(939);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(902);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(865);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(847);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(861);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(823);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(953);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(928);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(826);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(918);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(825);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(969);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(973);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(403);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'O') ADVANCE(929);
      if (lookahead == 'Y') ADVANCE(311);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(405);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(402);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead == 'I') ADVANCE(259);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(348);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(288);
      if (lookahead == 'R') ADVANCE(297);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(316);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(346);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(327);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(339);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(317);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(318);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(379);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(363);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(382);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(353);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(256);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(282);
      END_STATE();
    case 176:
      if (lookahead == 'E') ADVANCE(341);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 178:
      if (lookahead == 'F') ADVANCE(912);
      if (lookahead == 'N') ADVANCE(889);
      END_STATE();
    case 179:
      if (lookahead == 'F') ADVANCE(183);
      if (lookahead == 'N') ADVANCE(845);
      if (lookahead == 'R') ADVANCE(897);
      if (lookahead == 'U') ADVANCE(390);
      if (lookahead == 'W') ADVANCE(286);
      END_STATE();
    case 180:
      if (lookahead == 'F') ADVANCE(183);
      if (lookahead == 'R') ADVANCE(895);
      END_STATE();
    case 181:
      if (lookahead == 'F') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 182:
      if (lookahead == 'F') ADVANCE(357);
      END_STATE();
    case 183:
      if (lookahead == 'F') ADVANCE(354);
      END_STATE();
    case 184:
      if (lookahead == 'G') ADVANCE(886);
      END_STATE();
    case 185:
      if (lookahead == 'G') ADVANCE(214);
      END_STATE();
    case 186:
      if (lookahead == 'G') ADVANCE(904);
      END_STATE();
    case 187:
      if (lookahead == 'G') ADVANCE(851);
      END_STATE();
    case 188:
      if (lookahead == 'G') ADVANCE(960);
      END_STATE();
    case 189:
      if (lookahead == 'G') ADVANCE(198);
      END_STATE();
    case 190:
      if (lookahead == 'G') ADVANCE(330);
      if (lookahead == 'M') ADVANCE(167);
      END_STATE();
    case 191:
      if (lookahead == 'G') ADVANCE(171);
      END_STATE();
    case 192:
      if (lookahead == 'H') ADVANCE(920);
      END_STATE();
    case 193:
      if (lookahead == 'H') ADVANCE(919);
      END_STATE();
    case 194:
      if (lookahead == 'H') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(372);
      END_STATE();
    case 195:
      if (lookahead == 'H') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(376);
      END_STATE();
    case 196:
      if (lookahead == 'H') ADVANCE(159);
      END_STATE();
    case 197:
      if (lookahead == 'H') ADVANCE(410);
      END_STATE();
    case 198:
      if (lookahead == 'H') ADVANCE(361);
      END_STATE();
    case 199:
      if (lookahead == 'H') ADVANCE(81);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(414);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(249);
      END_STATE();
    case 202:
      if (lookahead == 'I') ADVANCE(185);
      if (lookahead == 'O') ADVANCE(295);
      if (lookahead == 'Y') ADVANCE(373);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(259);
      END_STATE();
    case 204:
      if (lookahead == 'I') ADVANCE(264);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(260);
      END_STATE();
    case 206:
      if (lookahead == 'I') ADVANCE(350);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(274);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(360);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(285);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(275);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(276);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'S') ADVANCE(176);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(300);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(351);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(255);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'S') ADVANCE(177);
      END_STATE();
    case 219:
      if (lookahead == 'I') ADVANCE(281);
      END_STATE();
    case 220:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 221:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 222:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 223:
      if (lookahead == 'L') ADVANCE(965);
      END_STATE();
    case 224:
      if (lookahead == 'L') ADVANCE(936);
      END_STATE();
    case 225:
      if (lookahead == 'L') ADVANCE(952);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(943);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(950);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(843);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(944);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(942);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'U') ADVANCE(277);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(352);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(213);
      if (lookahead == 'T') ADVANCE(829);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(244);
      END_STATE();
    case 236:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 237:
      if (lookahead == 'L') ADVANCE(200);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(134);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(365);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(138);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(396);
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 242:
      if (lookahead == 'L') ADVANCE(396);
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 243:
      if (lookahead == 'L') ADVANCE(162);
      END_STATE();
    case 244:
      if (lookahead == 'L') ADVANCE(218);
      END_STATE();
    case 245:
      if (lookahead == 'M') ADVANCE(830);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(223);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(306);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(306);
      if (lookahead == 'X') ADVANCE(358);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(209);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(308);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(128);
      END_STATE();
    case 252:
      if (lookahead == 'M') ADVANCE(266);
      END_STATE();
    case 253:
      if (lookahead == 'M') ADVANCE(61);
      END_STATE();
    case 254:
      if (lookahead == 'M') ADVANCE(139);
      END_STATE();
    case 255:
      if (lookahead == 'M') ADVANCE(143);
      END_STATE();
    case 256:
      if (lookahead == 'M') ADVANCE(175);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(173);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(145);
      END_STATE();
    case 259:
      if (lookahead == 'M') ADVANCE(77);
      END_STATE();
    case 260:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 261:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(845);
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'W') ADVANCE(286);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(885);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(841);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(962);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(868);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(941);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(954);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(887);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(96);
      if (lookahead == 'U') ADVANCE(374);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(186);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(187);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(188);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(109);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(359);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(362);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(368);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(369);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(370);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(147);
      END_STATE();
    case 284:
      if (lookahead == 'N') ADVANCE(377);
      END_STATE();
    case 285:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 286:
      if (lookahead == 'N') ADVANCE(166);
      END_STATE();
    case 287:
      if (lookahead == 'O') ADVANCE(924);
      if (lookahead == 'U') ADVANCE(233);
      END_STATE();
    case 288:
      if (lookahead == 'O') ADVANCE(190);
      END_STATE();
    case 289:
      if (lookahead == 'O') ADVANCE(415);
      END_STATE();
    case 290:
      if (lookahead == 'O') ADVANCE(923);
      END_STATE();
    case 291:
      if (lookahead == 'O') ADVANCE(827);
      END_STATE();
    case 292:
      if (lookahead == 'O') ADVANCE(204);
      if (lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 293:
      if (lookahead == 'O') ADVANCE(283);
      END_STATE();
    case 294:
      if (lookahead == 'O') ADVANCE(305);
      END_STATE();
    case 295:
      if (lookahead == 'O') ADVANCE(243);
      if (lookahead == 'X') ADVANCE(47);
      END_STATE();
    case 296:
      if (lookahead == 'O') ADVANCE(245);
      END_STATE();
    case 297:
      if (lookahead == 'O') ADVANCE(392);
      END_STATE();
    case 298:
      if (lookahead == 'O') ADVANCE(278);
      END_STATE();
    case 299:
      if (lookahead == 'O') ADVANCE(265);
      END_STATE();
    case 300:
      if (lookahead == 'O') ADVANCE(268);
      END_STATE();
    case 301:
      if (lookahead == 'O') ADVANCE(336);
      if (lookahead == 'R') ADVANCE(296);
      END_STATE();
    case 302:
      if (lookahead == 'O') ADVANCE(322);
      if (lookahead == 'R') ADVANCE(296);
      END_STATE();
    case 303:
      if (lookahead == 'O') ADVANCE(356);
      END_STATE();
    case 304:
      if (lookahead == 'O') ADVANCE(356);
      if (lookahead == 'U') ADVANCE(261);
      END_STATE();
    case 305:
      if (lookahead == 'P') ADVANCE(863);
      END_STATE();
    case 306:
      if (lookahead == 'P') ADVANCE(933);
      END_STATE();
    case 307:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 308:
      if (lookahead == 'P') ADVANCE(970);
      END_STATE();
    case 309:
      if (lookahead == 'P') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 310:
      if (lookahead == 'P') ADVANCE(197);
      END_STATE();
    case 311:
      if (lookahead == 'P') ADVANCE(130);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(897);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(910);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(956);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(862);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(836);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(838);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(932);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(959);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(958);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(948);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(909);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(149);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(406);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(407);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(297);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(207);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(411);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(412);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(135);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(174);
      END_STATE();
    case 334:
      if (lookahead == 'R') ADVANCE(371);
      END_STATE();
    case 335:
      if (lookahead == 'R') ADVANCE(203);
      END_STATE();
    case 336:
      if (lookahead == 'R') ADVANCE(104);
      END_STATE();
    case 337:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 338:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 339:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 340:
      if (lookahead == 'R') ADVANCE(220);
      END_STATE();
    case 341:
      if (lookahead == 'R') ADVANCE(221);
      END_STATE();
    case 342:
      if (lookahead == 'R') ADVANCE(222);
      END_STATE();
    case 343:
      if (lookahead == 'S') ADVANCE(103);
      END_STATE();
    case 344:
      if (lookahead == 'S') ADVANCE(839);
      END_STATE();
    case 345:
      if (lookahead == 'S') ADVANCE(914);
      END_STATE();
    case 346:
      if (lookahead == 'S') ADVANCE(828);
      END_STATE();
    case 347:
      if (lookahead == 'S') ADVANCE(386);
      END_STATE();
    case 348:
      if (lookahead == 'S') ADVANCE(344);
      END_STATE();
    case 349:
      if (lookahead == 'S') ADVANCE(385);
      END_STATE();
    case 350:
      if (lookahead == 'S') ADVANCE(215);
      END_STATE();
    case 351:
      if (lookahead == 'S') ADVANCE(375);
      END_STATE();
    case 352:
      if (lookahead == 'S') ADVANCE(132);
      END_STATE();
    case 353:
      if (lookahead == 'S') ADVANCE(378);
      END_STATE();
    case 354:
      if (lookahead == 'S') ADVANCE(168);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(901);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(832);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(961);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(882);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(856);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(834);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(949);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(858);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(821);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(916);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(972);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(878);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(945);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(880);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(915);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(824);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(192);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(289);
      END_STATE();
    case 375:
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 376:
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 377:
      if (lookahead == 'T') ADVANCE(291);
      END_STATE();
    case 378:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 379:
      if (lookahead == 'T') ADVANCE(325);
      END_STATE();
    case 380:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 381:
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 382:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 383:
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 384:
      if (lookahead == 'T') ADVANCE(154);
      END_STATE();
    case 385:
      if (lookahead == 'T') ADVANCE(331);
      END_STATE();
    case 386:
      if (lookahead == 'T') ADVANCE(210);
      END_STATE();
    case 387:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 388:
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 389:
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == 'X') ADVANCE(884);
      END_STATE();
    case 390:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 391:
      if (lookahead == 'T') ADVANCE(169);
      END_STATE();
    case 392:
      if (lookahead == 'U') ADVANCE(307);
      END_STATE();
    case 393:
      if (lookahead == 'U') ADVANCE(252);
      END_STATE();
    case 394:
      if (lookahead == 'U') ADVANCE(129);
      END_STATE();
    case 395:
      if (lookahead == 'U') ADVANCE(239);
      END_STATE();
    case 396:
      if (lookahead == 'U') ADVANCE(160);
      END_STATE();
    case 397:
      if (lookahead == 'U') ADVANCE(366);
      END_STATE();
    case 398:
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 399:
      if (lookahead == 'V') ADVANCE(208);
      END_STATE();
    case 400:
      if (lookahead == 'W') ADVANCE(866);
      END_STATE();
    case 401:
      if (lookahead == 'X') ADVANCE(216);
      END_STATE();
    case 402:
      if (lookahead == 'X') ADVANCE(908);
      END_STATE();
    case 403:
      if (lookahead == 'X') ADVANCE(358);
      END_STATE();
    case 404:
      if (lookahead == 'Y') ADVANCE(870);
      END_STATE();
    case 405:
      if (lookahead == 'Y') ADVANCE(955);
      END_STATE();
    case 406:
      if (lookahead == 'Y') ADVANCE(859);
      END_STATE();
    case 407:
      if (lookahead == 'Y') ADVANCE(978);
      END_STATE();
    case 408:
      if (lookahead == 'Y') ADVANCE(850);
      END_STATE();
    case 409:
      if (lookahead == 'Y') ADVANCE(849);
      END_STATE();
    case 410:
      if (lookahead == 'Y') ADVANCE(979);
      END_STATE();
    case 411:
      if (lookahead == 'Y') ADVANCE(935);
      END_STATE();
    case 412:
      if (lookahead == 'Y') ADVANCE(211);
      END_STATE();
    case 413:
      if (lookahead == 'Z') ADVANCE(977);
      END_STATE();
    case 414:
      if (lookahead == 'Z') ADVANCE(157);
      END_STATE();
    case 415:
      if (lookahead == '_') ADVANCE(212);
      END_STATE();
    case 416:
      if (lookahead == '_') ADVANCE(579);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(680);
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead == 'o') ADVANCE(929);
      if (lookahead == 'r') ADVANCE(761);
      if (lookahead == 'y') ADVANCE(678);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(614);
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(926);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(926);
      if (lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(966);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(931);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(592);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(603);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(695);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(747);
      END_STATE();
    case 452:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(748);
      END_STATE();
    case 454:
      if (lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 455:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 456:
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 457:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 458:
      if (lookahead == 'b') ADVANCE(775);
      END_STATE();
    case 459:
      if (lookahead == 'b') ADVANCE(776);
      END_STATE();
    case 460:
      if (lookahead == 'b') ADVANCE(605);
      END_STATE();
    case 461:
      if (lookahead == 'b') ADVANCE(607);
      END_STATE();
    case 462:
      if (lookahead == 'c') ADVANCE(563);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 463:
      if (lookahead == 'c') ADVANCE(854);
      END_STATE();
    case 464:
      if (lookahead == 'c') ADVANCE(852);
      END_STATE();
    case 465:
      if (lookahead == 'c') ADVANCE(951);
      END_STATE();
    case 466:
      if (lookahead == 'c') ADVANCE(572);
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(539);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(572);
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(539);
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 468:
      if (lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 469:
      if (lookahead == 'c') ADVANCE(566);
      if (lookahead == 'y') ADVANCE(578);
      END_STATE();
    case 470:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 471:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 472:
      if (lookahead == 'c') ADVANCE(731);
      END_STATE();
    case 473:
      if (lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 474:
      if (lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 475:
      if (lookahead == 'c') ADVANCE(573);
      END_STATE();
    case 476:
      if (lookahead == 'c') ADVANCE(700);
      END_STATE();
    case 477:
      if (lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 478:
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead == 's') ADVANCE(875);
      if (lookahead == 'u') ADVANCE(741);
      if (lookahead == 'v') ADVANCE(551);
      END_STATE();
    case 479:
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == 's') ADVANCE(872);
      END_STATE();
    case 480:
      if (lookahead == 'd') ADVANCE(864);
      END_STATE();
    case 481:
      if (lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 482:
      if (lookahead == 'd') ADVANCE(980);
      END_STATE();
    case 483:
      if (lookahead == 'd') ADVANCE(981);
      END_STATE();
    case 484:
      if (lookahead == 'd') ADVANCE(867);
      END_STATE();
    case 485:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 486:
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead == 't') ADVANCE(947);
      END_STATE();
    case 487:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 488:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(976);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(975);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(973);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == 'i') ADVANCE(624);
      if (lookahead == 'o') ADVANCE(929);
      if (lookahead == 'y') ADVANCE(678);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 545:
      if (lookahead == 'f') ADVANCE(912);
      if (lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 546:
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == 'w') ADVANCE(653);
      END_STATE();
    case 547:
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(895);
      END_STATE();
    case 548:
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 549:
      if (lookahead == 'f') ADVANCE(724);
      END_STATE();
    case 550:
      if (lookahead == 'f') ADVANCE(721);
      END_STATE();
    case 551:
      if (lookahead == 'g') ADVANCE(886);
      END_STATE();
    case 552:
      if (lookahead == 'g') ADVANCE(581);
      END_STATE();
    case 553:
      if (lookahead == 'g') ADVANCE(904);
      END_STATE();
    case 554:
      if (lookahead == 'g') ADVANCE(851);
      END_STATE();
    case 555:
      if (lookahead == 'g') ADVANCE(960);
      END_STATE();
    case 556:
      if (lookahead == 'g') ADVANCE(565);
      END_STATE();
    case 557:
      if (lookahead == 'g') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(534);
      END_STATE();
    case 558:
      if (lookahead == 'g') ADVANCE(538);
      END_STATE();
    case 559:
      if (lookahead == 'h') ADVANCE(921);
      END_STATE();
    case 560:
      if (lookahead == 'h') ADVANCE(919);
      END_STATE();
    case 561:
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 562:
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead == 'i') ADVANCE(743);
      END_STATE();
    case 563:
      if (lookahead == 'h') ADVANCE(526);
      END_STATE();
    case 564:
      if (lookahead == 'h') ADVANCE(777);
      END_STATE();
    case 565:
      if (lookahead == 'h') ADVANCE(728);
      END_STATE();
    case 566:
      if (lookahead == 'h') ADVANCE(448);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 569:
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(662);
      if (lookahead == 'y') ADVANCE(740);
      END_STATE();
    case 570:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 571:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 572:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 573:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 576:
      if (lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 578:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 579:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 580:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 581:
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead == 's') ADVANCE(543);
      END_STATE();
    case 582:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 583:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 584:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 585:
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 586:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 587:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 588:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 589:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 590:
      if (lookahead == 'l') ADVANCE(965);
      END_STATE();
    case 591:
      if (lookahead == 'l') ADVANCE(936);
      END_STATE();
    case 592:
      if (lookahead == 'l') ADVANCE(952);
      END_STATE();
    case 593:
      if (lookahead == 'l') ADVANCE(943);
      END_STATE();
    case 594:
      if (lookahead == 'l') ADVANCE(950);
      END_STATE();
    case 595:
      if (lookahead == 'l') ADVANCE(843);
      END_STATE();
    case 596:
      if (lookahead == 'l') ADVANCE(944);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(942);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(760);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(719);
      END_STATE();
    case 600:
      if (lookahead == 'l') ADVANCE(591);
      if (lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 601:
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 602:
      if (lookahead == 'l') ADVANCE(611);
      END_STATE();
    case 603:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 604:
      if (lookahead == 'l') ADVANCE(567);
      END_STATE();
    case 605:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 606:
      if (lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 607:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 608:
      if (lookahead == 'l') ADVANCE(763);
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 609:
      if (lookahead == 'l') ADVANCE(763);
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 610:
      if (lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 611:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 612:
      if (lookahead == 'm') ADVANCE(830);
      END_STATE();
    case 613:
      if (lookahead == 'm') ADVANCE(590);
      END_STATE();
    case 614:
      if (lookahead == 'm') ADVANCE(673);
      END_STATE();
    case 615:
      if (lookahead == 'm') ADVANCE(673);
      if (lookahead == 'x') ADVANCE(725);
      END_STATE();
    case 616:
      if (lookahead == 'm') ADVANCE(576);
      END_STATE();
    case 617:
      if (lookahead == 'm') ADVANCE(674);
      END_STATE();
    case 618:
      if (lookahead == 'm') ADVANCE(498);
      END_STATE();
    case 619:
      if (lookahead == 'm') ADVANCE(633);
      END_STATE();
    case 620:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 621:
      if (lookahead == 'm') ADVANCE(506);
      END_STATE();
    case 622:
      if (lookahead == 'm') ADVANCE(510);
      END_STATE();
    case 623:
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 624:
      if (lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(512);
      END_STATE();
    case 626:
      if (lookahead == 'm') ADVANCE(444);
      END_STATE();
    case 627:
      if (lookahead == 'm') ADVANCE(441);
      END_STATE();
    case 628:
      if (lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == 'w') ADVANCE(653);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(885);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(963);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(941);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(954);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(887);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead == 'u') ADVANCE(741);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(554);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(555);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(514);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(925);
      if (lookahead == 'u') ADVANCE(600);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(923);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(827);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(610);
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(759);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(628);
      END_STATE();
    case 672:
      if (lookahead == 'p') ADVANCE(863);
      END_STATE();
    case 673:
      if (lookahead == 'p') ADVANCE(934);
      END_STATE();
    case 674:
      if (lookahead == 'p') ADVANCE(971);
      END_STATE();
    case 675:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 676:
      if (lookahead == 'p') ADVANCE(488);
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 677:
      if (lookahead == 'p') ADVANCE(564);
      END_STATE();
    case 678:
      if (lookahead == 'p') ADVANCE(496);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(899);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(957);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(862);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(838);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(958);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(948);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(909);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(774);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(839);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(914);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(828);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(753);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(752);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(535);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(961);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(882);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(834);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(949);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(821);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(916);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(972);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(878);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(945);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(880);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(915);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(824);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(522);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(712);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(698);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == 'x') ADVANCE(884);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 759:
      if (lookahead == 'u') ADVANCE(675);
      END_STATE();
    case 760:
      if (lookahead == 'u') ADVANCE(619);
      END_STATE();
    case 761:
      if (lookahead == 'u') ADVANCE(495);
      END_STATE();
    case 762:
      if (lookahead == 'u') ADVANCE(606);
      END_STATE();
    case 763:
      if (lookahead == 'u') ADVANCE(527);
      END_STATE();
    case 764:
      if (lookahead == 'u') ADVANCE(733);
      END_STATE();
    case 765:
      if (lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 766:
      if (lookahead == 'v') ADVANCE(575);
      END_STATE();
    case 767:
      if (lookahead == 'w') ADVANCE(866);
      END_STATE();
    case 768:
      if (lookahead == 'x') ADVANCE(583);
      END_STATE();
    case 769:
      if (lookahead == 'x') ADVANCE(908);
      END_STATE();
    case 770:
      if (lookahead == 'x') ADVANCE(725);
      END_STATE();
    case 771:
      if (lookahead == 'y') ADVANCE(870);
      END_STATE();
    case 772:
      if (lookahead == 'y') ADVANCE(955);
      END_STATE();
    case 773:
      if (lookahead == 'y') ADVANCE(859);
      END_STATE();
    case 774:
      if (lookahead == 'y') ADVANCE(978);
      END_STATE();
    case 775:
      if (lookahead == 'y') ADVANCE(850);
      END_STATE();
    case 776:
      if (lookahead == 'y') ADVANCE(849);
      END_STATE();
    case 777:
      if (lookahead == 'y') ADVANCE(979);
      END_STATE();
    case 778:
      if (lookahead == 'y') ADVANCE(935);
      END_STATE();
    case 779:
      if (lookahead == 'y') ADVANCE(578);
      END_STATE();
    case 780:
      if (lookahead == 'z') ADVANCE(977);
      END_STATE();
    case 781:
      if (lookahead == 'z') ADVANCE(524);
      END_STATE();
    case 782:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'B') ADVANCE(202);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'F') ADVANCE(301);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'J') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'M') ADVANCE(293);
      if (lookahead == 'N') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(262);
      if (lookahead == 'P') ADVANCE(335);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'S') ADVANCE(125);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == 'W') ADVANCE(195);
      if (lookahead == 'X') ADVANCE(246);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == 'b') ADVANCE(569);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'g') ADVANCE(519);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead == 'j') ADVANCE(658);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(659);
      if (lookahead == 'n') ADVANCE(671);
      if (lookahead == 'o') ADVANCE(629);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead == 'u') ADVANCE(676);
      if (lookahead == 'v') ADVANCE(429);
      if (lookahead == 'w') ADVANCE(562);
      if (lookahead == 'x') ADVANCE(613);
      END_STATE();
    case 783:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1085);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 784:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(784)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1085);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'W') ADVANCE(1062);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'w') ADVANCE(1184);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 785:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(785)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'W') ADVANCE(1072);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'w') ADVANCE(1194);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 786:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(786)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 787:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(787)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(272);
      if (lookahead == 'D') ADVANCE(144);
      if (lookahead == 'F') ADVANCE(302);
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'M') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'P') ADVANCE(335);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(194);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'd') ADVANCE(511);
      if (lookahead == 'f') ADVANCE(669);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(670);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == 'v') ADVANCE(450);
      if (lookahead == 'w') ADVANCE(561);
      END_STATE();
    case 788:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(788)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 789:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(789)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 790:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(790)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1107);
      if (lookahead == 'W') ADVANCE(1072);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'w') ADVANCE(1194);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 791:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(791)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'O') ADVANCE(1109);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'o') ADVANCE(1231);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 792:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(792)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(271);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == 'G') ADVANCE(326);
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'O') ADVANCE(312);
      if (lookahead == 'W') ADVANCE(195);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead == 'g') ADVANCE(693);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead == 'w') ADVANCE(562);
      END_STATE();
    case 793:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(793)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(1084);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'O') ADVANCE(1109);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'o') ADVANCE(1231);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 794:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(794)
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1101);
      if (lookahead == 'S') ADVANCE(1043);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1223);
      if (lookahead == 's') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 795:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(795)
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1101);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 796:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1101);
      if (lookahead == 'D') ADVANCE(1071);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1223);
      if (lookahead == 'd') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 797:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1092);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'U') ADVANCE(1128);
      if (lookahead == 'W') ADVANCE(1062);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == 'w') ADVANCE(1184);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 798:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(798)
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1092);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'U') ADVANCE(1128);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 799:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(799)
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(1029);
      if (lookahead == 'T') ADVANCE(1116);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'f') ADVANCE(1151);
      if (lookahead == 't') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 800:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(800)
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1092);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'U') ADVANCE(1128);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 801:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(801)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'C') ADVANCE(1110);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'G') ADVANCE(1115);
      if (lookahead == 'I') ADVANCE(1092);
      if (lookahead == 'J') ADVANCE(1100);
      if (lookahead == 'L') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'R') ADVANCE(1067);
      if (lookahead == 'U') ADVANCE(1128);
      if (lookahead == 'W') ADVANCE(1062);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'g') ADVANCE(1237);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'j') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == 'w') ADVANCE(1184);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 802:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(802)
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '`') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 803:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(803)
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1124);
      if (lookahead == 'D') ADVANCE(1055);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1246);
      if (lookahead == 'd') ADVANCE(1177);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 804:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(804)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1105);
      if (lookahead == 'K') ADVANCE(1050);
      if (lookahead == 'P') ADVANCE(1119);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1227);
      if (lookahead == 'k') ADVANCE(1172);
      if (lookahead == 'p') ADVANCE(1241);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 805:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1124);
      if (lookahead == 'D') ADVANCE(1055);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'W') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1246);
      if (lookahead == 'd') ADVANCE(1177);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'w') ADVANCE(1194);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 806:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(806)
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'F') ADVANCE(1118);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'f') ADVANCE(1240);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 807:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(807)
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'F') ADVANCE(1118);
      if (lookahead == 'W') ADVANCE(1072);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'f') ADVANCE(1240);
      if (lookahead == 'w') ADVANCE(1194);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 808:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(808)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 809:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(809)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'O') ADVANCE(1088);
      if (lookahead == 'U') ADVANCE(1125);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'o') ADVANCE(1210);
      if (lookahead == 'u') ADVANCE(1247);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 810:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(810)
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 811:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(811)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'D') ADVANCE(1051);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'd') ADVANCE(1173);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 812:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(812)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(1104);
      if (lookahead == 'O') ADVANCE(1088);
      if (lookahead == 'U') ADVANCE(1125);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'o') ADVANCE(1210);
      if (lookahead == 'u') ADVANCE(1247);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 813:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(813)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == 'L') ADVANCE(1066);
      if (lookahead == 'O') ADVANCE(1111);
      if (lookahead == 'W') ADVANCE(1063);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 814:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(814)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(1058);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'i') ADVANCE(1180);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 815:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(815)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'L') ADVANCE(1034);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'l') ADVANCE(1156);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 816:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(816)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(1122);
      if (lookahead == 'O') ADVANCE(1088);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'o') ADVANCE(1210);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 817:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(817)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1103);
      if (lookahead == 'T') ADVANCE(1099);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'c') ADVANCE(1225);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 818:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(818)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 819:
      if (eof) ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(819)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '%') ADVANCE(998);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '(') ADVANCE(982);
      if (lookahead == ')') ADVANCE(983);
      if (lookahead == '*') ADVANCE(994);
      if (lookahead == '+') ADVANCE(995);
      if (lookahead == ',') ADVANCE(984);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(992);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == ';') ADVANCE(991);
      if (lookahead == '<') ADVANCE(1000);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == '>') ADVANCE(1004);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'B') ADVANCE(202);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'D') ADVANCE(64);
      if (lookahead == 'E') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(178);
      if (lookahead == 'J') ADVANCE(292);
      if (lookahead == 'K') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(89);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(287);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(323);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'V') ADVANCE(57);
      if (lookahead == 'W') ADVANCE(194);
      if (lookahead == 'X') ADVANCE(246);
      if (lookahead == 'Z') ADVANCE(298);
      if (lookahead == '^') ADVANCE(999);
      if (lookahead == '`') ADVANCE(1024);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'b') ADVANCE(569);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(768);
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead == 'g') ADVANCE(519);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'j') ADVANCE(658);
      if (lookahead == 'k') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(690);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(676);
      if (lookahead == 'v') ADVANCE(424);
      if (lookahead == 'w') ADVANCE(561);
      if (lookahead == 'x') ADVANCE(613);
      if (lookahead == 'z') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_keyword_outer);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_keyword_cross);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_keyword_cross);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_keyword_lateral);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_keyword_lateral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_keyword_alter);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_keyword_drop);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_keyword_add);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_keyword_view);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_keyword_materialized);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_keyword_column);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_keyword_column);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(854);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(854);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(156);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(523);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(164);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_keyword_using);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_keyword_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(133);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_keyword_cascade);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'O') ADVANCE(397);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'o') ADVANCE(764);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_keyword_no);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 'T') ADVANCE(901);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_keyword_data);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_keyword_type);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_keyword_rename);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_keyword_to);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_keyword_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_keyword_schema);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_keyword_owner);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'O') ADVANCE(337);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_keyword_temporary);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'E') ADVANCE(191);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_keyword_int_token2);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token2);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(964);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(964);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(217);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(413);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(780);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token2);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 'S') ADVANCE(378);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token4);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_keyword_timestamptz_token1);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_keyword_geometry);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_keyword_geography);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_keyword_box2d);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_keyword_box3d);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1022);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1013);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1008);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(1022);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1001);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1003);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1008);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '/') ADVANCE(988);
      if (lookahead != 0) ADVANCE(1008);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1008);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1009);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(1011);
      if (lookahead == '/') ADVANCE(1006);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1013);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1013);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1012);
      if (lookahead == '-') ADVANCE(1011);
      if (lookahead == '/') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1013);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1013);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(1022);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(1015);
      if (lookahead == '*') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(1022);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1016);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(1022);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '*') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1018);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead == '/') ADVANCE(1015);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1022);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1022);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1021);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead == '/') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1022);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1022);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1057);
      if (lookahead == 'I') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(907);
      if (lookahead == 'I') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1052);
      if (lookahead == 'I') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1039);
      if (lookahead == 'S') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1179);
      if (lookahead == 'i') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(907);
      if (lookahead == 'i') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1174);
      if (lookahead == 'i') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1161);
      if (lookahead == 's') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
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
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 9},
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
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 24},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 18},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 18},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 18},
  [149] = {.lex_state = 18},
  [150] = {.lex_state = 18},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 17},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 17},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 17},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 17},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 29},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 17},
  [199] = {.lex_state = 29},
  [200] = {.lex_state = 29},
  [201] = {.lex_state = 29},
  [202] = {.lex_state = 34},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 34},
  [207] = {.lex_state = 17},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 34},
  [211] = {.lex_state = 21},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 24},
  [214] = {.lex_state = 24},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 24},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 30},
  [219] = {.lex_state = 37},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 21},
  [225] = {.lex_state = 21},
  [226] = {.lex_state = 37},
  [227] = {.lex_state = 21},
  [228] = {.lex_state = 21},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 21},
  [231] = {.lex_state = 21},
  [232] = {.lex_state = 21},
  [233] = {.lex_state = 21},
  [234] = {.lex_state = 21},
  [235] = {.lex_state = 21},
  [236] = {.lex_state = 21},
  [237] = {.lex_state = 24},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 30},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 21},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 19},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 19},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 19},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 7},
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
  [270] = {.lex_state = 0},
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
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 19},
  [309] = {.lex_state = 19},
  [310] = {.lex_state = 19},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 19},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 19},
  [315] = {.lex_state = 19},
  [316] = {.lex_state = 19},
  [317] = {.lex_state = 19},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 24},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 25},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 41},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 24},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 28},
  [339] = {.lex_state = 25},
  [340] = {.lex_state = 25},
  [341] = {.lex_state = 28},
  [342] = {.lex_state = 25},
  [343] = {.lex_state = 28},
  [344] = {.lex_state = 28},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 7},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 28},
  [350] = {.lex_state = 23},
  [351] = {.lex_state = 23},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 28},
  [354] = {.lex_state = 28},
  [355] = {.lex_state = 7},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 27},
  [358] = {.lex_state = 7},
  [359] = {.lex_state = 25},
  [360] = {.lex_state = 23},
  [361] = {.lex_state = 7},
  [362] = {.lex_state = 7},
  [363] = {.lex_state = 25},
  [364] = {.lex_state = 25},
  [365] = {.lex_state = 17},
  [366] = {.lex_state = 17},
  [367] = {.lex_state = 23},
  [368] = {.lex_state = 17},
  [369] = {.lex_state = 7},
  [370] = {.lex_state = 7},
  [371] = {.lex_state = 25},
  [372] = {.lex_state = 28},
  [373] = {.lex_state = 35},
  [374] = {.lex_state = 25},
  [375] = {.lex_state = 25},
  [376] = {.lex_state = 27},
  [377] = {.lex_state = 27},
  [378] = {.lex_state = 17},
  [379] = {.lex_state = 7},
  [380] = {.lex_state = 7},
  [381] = {.lex_state = 27},
  [382] = {.lex_state = 7},
  [383] = {.lex_state = 7},
  [384] = {.lex_state = 36},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 25},
  [387] = {.lex_state = 7},
  [388] = {.lex_state = 7},
  [389] = {.lex_state = 28},
  [390] = {.lex_state = 28},
  [391] = {.lex_state = 7},
  [392] = {.lex_state = 28},
  [393] = {.lex_state = 28},
  [394] = {.lex_state = 7},
  [395] = {.lex_state = 7},
  [396] = {.lex_state = 7},
  [397] = {.lex_state = 25},
  [398] = {.lex_state = 17},
  [399] = {.lex_state = 23},
  [400] = {.lex_state = 26},
  [401] = {.lex_state = 27},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 19},
  [410] = {.lex_state = 36},
  [411] = {.lex_state = 38},
  [412] = {.lex_state = 35},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 36},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 23},
  [417] = {.lex_state = 27},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 27},
  [420] = {.lex_state = 36},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 35},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 35},
  [427] = {.lex_state = 38},
  [428] = {.lex_state = 23},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 38},
  [432] = {.lex_state = 7},
  [433] = {.lex_state = 23},
  [434] = {.lex_state = 23},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 23},
  [437] = {.lex_state = 23},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 38},
  [440] = {.lex_state = 43},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 23},
  [443] = {.lex_state = 38},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 27},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 27},
  [450] = {.lex_state = 26},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 26},
  [456] = {.lex_state = 27},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 26},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 27},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 39},
  [465] = {.lex_state = 39},
  [466] = {.lex_state = 27},
  [467] = {.lex_state = 43},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 44},
  [470] = {.lex_state = 19},
  [471] = {.lex_state = 19},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 19},
  [476] = {.lex_state = 19},
  [477] = {.lex_state = 26},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 44},
  [481] = {.lex_state = 44},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 44},
  [484] = {.lex_state = 44},
  [485] = {.lex_state = 44},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 44},
  [491] = {.lex_state = 44},
  [492] = {.lex_state = 26},
  [493] = {.lex_state = 26},
  [494] = {.lex_state = 44},
  [495] = {.lex_state = 44},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 19},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 44},
  [505] = {.lex_state = 19},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 46},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 46},
  [513] = {.lex_state = 46},
  [514] = {.lex_state = 40},
  [515] = {.lex_state = 24},
  [516] = {.lex_state = 46},
  [517] = {.lex_state = 44},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 40},
  [521] = {.lex_state = 24},
  [522] = {.lex_state = 46},
  [523] = {.lex_state = 40},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 26},
  [526] = {.lex_state = 24},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 40},
  [533] = {.lex_state = 40},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 19},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 24},
  [538] = {.lex_state = 40},
  [539] = {.lex_state = 24},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 42},
  [543] = {.lex_state = 26},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 24},
  [546] = {.lex_state = 46},
  [547] = {.lex_state = 26},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 26},
  [551] = {.lex_state = 26},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 24},
  [554] = {.lex_state = 19},
  [555] = {.lex_state = 38},
  [556] = {.lex_state = 19},
  [557] = {.lex_state = 19},
  [558] = {.lex_state = 40},
  [559] = {.lex_state = 19},
  [560] = {.lex_state = 19},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 19},
  [563] = {.lex_state = 19},
  [564] = {.lex_state = 19},
  [565] = {.lex_state = 19},
  [566] = {.lex_state = 38},
  [567] = {.lex_state = 19},
  [568] = {.lex_state = 19},
  [569] = {.lex_state = 19},
  [570] = {.lex_state = 19},
  [571] = {.lex_state = 19},
  [572] = {.lex_state = 38},
  [573] = {.lex_state = 40},
  [574] = {.lex_state = 19},
  [575] = {.lex_state = 19},
  [576] = {.lex_state = 19},
  [577] = {.lex_state = 38},
  [578] = {.lex_state = 38},
  [579] = {.lex_state = 19},
  [580] = {.lex_state = 19},
  [581] = {.lex_state = 19},
  [582] = {.lex_state = 19},
  [583] = {.lex_state = 19},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 19},
  [586] = {.lex_state = 19},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 38},
  [590] = {.lex_state = 19},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 19},
  [594] = {.lex_state = 19},
  [595] = {.lex_state = 19},
  [596] = {.lex_state = 19},
  [597] = {.lex_state = 19},
  [598] = {.lex_state = 19},
  [599] = {.lex_state = 19},
  [600] = {.lex_state = 19},
  [601] = {.lex_state = 40},
  [602] = {.lex_state = 40},
  [603] = {.lex_state = 19},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 38},
  [607] = {.lex_state = 19},
  [608] = {.lex_state = 19},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 19},
  [615] = {.lex_state = 19},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 19},
  [618] = {.lex_state = 19},
  [619] = {.lex_state = 19},
  [620] = {.lex_state = 19},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 19},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 19},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 19},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 19},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 19},
  [632] = {.lex_state = 19},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 19},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 19},
  [639] = {.lex_state = 19},
  [640] = {.lex_state = 19},
  [641] = {.lex_state = 19},
  [642] = {.lex_state = 19},
  [643] = {.lex_state = 19},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 19},
  [646] = {.lex_state = 19},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 19},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 19},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 19},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 19},
  [657] = {.lex_state = 19},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 19},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 19},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 19},
  [665] = {.lex_state = 19},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 19},
  [668] = {.lex_state = 19},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 19},
  [671] = {.lex_state = 19},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 19},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 19},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 19},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 19},
  [684] = {.lex_state = 19},
  [685] = {.lex_state = 19},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 19},
  [688] = {.lex_state = 19},
  [689] = {.lex_state = 24},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 19},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 19},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 19},
  [697] = {.lex_state = 19},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 19},
  [701] = {.lex_state = 19},
  [702] = {.lex_state = 19},
  [703] = {.lex_state = 19},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 19},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 19},
  [715] = {.lex_state = 19},
  [716] = {.lex_state = 19},
  [717] = {.lex_state = 19},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 19},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 19},
  [722] = {.lex_state = 19},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 19},
  [732] = {.lex_state = 19},
  [733] = {.lex_state = 19},
  [734] = {.lex_state = 19},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 19},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 19},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 19},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 19},
  [744] = {.lex_state = 8},
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
  [762] = {.lex_state = 7},
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
  [774] = {.lex_state = 8},
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
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 8},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 24},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 19},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 8},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 7},
  [821] = {.lex_state = 7},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 24},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 24},
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
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 24},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 45},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 24},
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
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 1010},
  [924] = {.lex_state = 1019},
  [925] = {.lex_state = 19},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 24},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 24},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 1010},
  [946] = {.lex_state = 1019},
  [947] = {.lex_state = 19},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 19},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 19},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 24},
  [960] = {.lex_state = 0},
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
  [973] = {.lex_state = 19},
  [974] = {.lex_state = 19},
  [975] = {.lex_state = 19},
  [976] = {.lex_state = 19},
  [977] = {.lex_state = 19},
  [978] = {.lex_state = 19},
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
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 24},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 19},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 1019},
  [1001] = {.lex_state = 1010},
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
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
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
    [sym_program] = STATE(1008),
    [sym_statement] = STATE(1007),
    [sym__select_statement] = STATE(1006),
    [sym_select] = STATE(625),
    [sym__delete_statement] = STATE(1006),
    [sym_delete] = STATE(756),
    [sym__create_statement] = STATE(1006),
    [sym_create_table] = STATE(1006),
    [sym_create_view] = STATE(1006),
    [sym_create_materialized_view] = STATE(1006),
    [sym__alter_statement] = STATE(1006),
    [sym_alter_table] = STATE(1006),
    [sym_alter_view] = STATE(1006),
    [sym__drop_statement] = STATE(1006),
    [sym_drop_table] = STATE(1006),
    [sym_drop_view] = STATE(1006),
    [sym__insert_statement] = STATE(1006),
    [sym_insert] = STATE(1006),
    [sym__update_statement] = STATE(1006),
    [sym_update] = STATE(1006),
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
    STATE(347), 1,
      sym_keyword_char,
    STATE(352), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(749), 10,
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
    STATE(347), 1,
      sym_keyword_char,
    STATE(352), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(318), 10,
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
    STATE(347), 1,
      sym_keyword_char,
    STATE(352), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(811), 10,
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
    STATE(21), 1,
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
    STATE(19), 1,
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
    STATE(21), 1,
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
    STATE(19), 1,
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
  [615] = 3,
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
  [654] = 3,
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
  [693] = 3,
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
  [732] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(39), 1,
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
  [779] = 7,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(89), 1,
      sym_keyword_as,
    STATE(39), 1,
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
  [900] = 3,
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
    ACTIONS(101), 21,
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
  [936] = 3,
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
  [972] = 3,
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
    ACTIONS(109), 21,
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
  [1008] = 3,
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
  [1044] = 3,
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
    ACTIONS(117), 21,
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
  [1080] = 3,
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
    ACTIONS(121), 21,
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
  [1116] = 3,
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
    ACTIONS(125), 21,
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
  [1152] = 4,
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
  [1190] = 4,
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
  [1228] = 4,
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
  [1266] = 4,
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
    ACTIONS(135), 12,
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
  [1304] = 3,
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
  [1340] = 4,
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
    ACTIONS(137), 12,
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
  [1378] = 4,
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
  [1416] = 4,
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
    ACTIONS(141), 12,
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
  [1454] = 4,
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
    ACTIONS(143), 12,
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
  [1492] = 4,
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
    ACTIONS(145), 12,
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
  [1530] = 3,
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
  [1566] = 3,
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
  [1602] = 3,
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
    ACTIONS(151), 21,
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
  [1710] = 3,
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
    ACTIONS(163), 21,
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
  [1746] = 4,
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
    ACTIONS(167), 12,
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
  [1784] = 6,
    ACTIONS(171), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 17,
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
  [1825] = 8,
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
    ACTIONS(119), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 16,
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
  [1870] = 4,
    ACTIONS(183), 1,
      anon_sym_CARET,
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
    ACTIONS(117), 19,
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
  [1907] = 4,
    ACTIONS(173), 1,
      anon_sym_CARET,
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
    ACTIONS(117), 19,
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
  [1944] = 6,
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
    ACTIONS(119), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 17,
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
  [1985] = 8,
    ACTIONS(171), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 16,
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
  [2030] = 11,
    ACTIONS(119), 1,
      sym_keyword_or,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(189), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
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
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2081] = 9,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(189), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 16,
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
  [2128] = 9,
    ACTIONS(171), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 16,
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
    ACTIONS(119), 1,
      sym_keyword_or,
    ACTIONS(171), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
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
    STATE(83), 1,
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
  [2270] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(211), 1,
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
  [2314] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 21,
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
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(83), 1,
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
  [2392] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(215), 1,
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
  [2436] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(83), 1,
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
  [2480] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 21,
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
  [2514] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(219), 1,
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
  [2558] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(103), 1,
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
  [2599] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 20,
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
  [2632] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(223), 1,
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
  [2675] = 3,
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
  [2708] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(103), 1,
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
  [2749] = 3,
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
  [2782] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(83), 1,
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
  [2825] = 3,
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
  [2858] = 3,
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
  [2891] = 3,
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
  [2924] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(103), 1,
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
  [2965] = 8,
    ACTIONS(201), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(83), 1,
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
  [3008] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 20,
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
  [3041] = 3,
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
  [3074] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 20,
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
  [3107] = 3,
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
  [3140] = 3,
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
  [3173] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(165), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 20,
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
  [3206] = 8,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(229), 1,
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
  [3249] = 9,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
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
  [3293] = 3,
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
  [3325] = 3,
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
  [3357] = 3,
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
  [3389] = 3,
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
  [3421] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(241), 1,
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
  [3463] = 3,
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
  [3495] = 3,
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
  [3527] = 3,
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
  [3559] = 3,
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
  [3591] = 3,
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
  [3623] = 3,
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
  [3655] = 3,
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
  [3687] = 3,
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
  [3719] = 3,
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
  [3751] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(103), 1,
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
  [3791] = 8,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym_keyword_as,
    ACTIONS(245), 1,
      anon_sym_DOT,
    STATE(73), 1,
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
  [3833] = 8,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym_keyword_as,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(73), 1,
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
  [3875] = 7,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(103), 1,
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
  [3915] = 3,
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
  [3947] = 3,
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
  [3979] = 3,
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
  [4011] = 3,
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
  [4043] = 3,
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
  [4075] = 3,
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
  [4107] = 3,
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
  [4139] = 3,
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
  [4171] = 3,
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
  [4203] = 3,
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
  [4235] = 8,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
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
  [4277] = 7,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(75), 1,
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
  [4316] = 3,
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
  [4347] = 3,
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
  [4378] = 7,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(75), 1,
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
  [4417] = 18,
    ACTIONS(251), 1,
      sym_keyword_select,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(197), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(672), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(932), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4477] = 18,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
      anon_sym_RPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(877), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(637), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4537] = 18,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(896), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(637), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4597] = 18,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(853), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(637), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4657] = 18,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(922), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(637), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4717] = 18,
    ACTIONS(251), 1,
      sym_keyword_select,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(197), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(672), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(960), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4777] = 18,
    ACTIONS(251), 1,
      sym_keyword_select,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(197), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(672), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(892), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4837] = 18,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(834), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(637), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [4897] = 6,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(502), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(277), 4,
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
  [4933] = 17,
    ACTIONS(281), 1,
      sym_keyword_left,
    ACTIONS(283), 1,
      sym_keyword_right,
    ACTIONS(287), 1,
      sym_keyword_join,
    ACTIONS(289), 1,
      sym_keyword_where,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(293), 1,
      sym_keyword_group_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(186), 1,
      sym_index_hint,
    STATE(422), 1,
      sym_where,
    STATE(472), 1,
      sym_group_by,
    STATE(508), 1,
      sym_order_by,
    STATE(660), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(297), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(299), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(179), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [4991] = 18,
    ACTIONS(251), 1,
      sym_keyword_select,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(197), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(672), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(956), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5051] = 17,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(301), 1,
      sym_keyword_left,
    ACTIONS(303), 1,
      sym_keyword_right,
    ACTIONS(307), 1,
      sym_keyword_join,
    ACTIONS(309), 1,
      sym_keyword_where,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    ACTIONS(313), 1,
      sym_keyword_group_by,
    STATE(174), 1,
      sym_index_hint,
    STATE(429), 1,
      sym_where,
    STATE(474), 1,
      sym_group_by,
    STATE(508), 1,
      sym_order_by,
    STATE(660), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(299), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    ACTIONS(305), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(195), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5109] = 18,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(1013), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(637), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5169] = 18,
    ACTIONS(251), 1,
      sym_keyword_select,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(197), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(672), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(952), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5229] = 11,
    ACTIONS(119), 1,
      sym_keyword_or,
    ACTIONS(317), 1,
      sym_keyword_in,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(331), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(117), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5274] = 9,
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
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 10,
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
  [5315] = 17,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    ACTIONS(345), 1,
      sym_keyword_distinct,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(1009), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5372] = 8,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 11,
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
  [5411] = 12,
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
    ACTIONS(349), 1,
      sym_keyword_and,
    ACTIONS(351), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 2,
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
    ACTIONS(347), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [5458] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
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
  [5489] = 9,
    ACTIONS(317), 1,
      sym_keyword_in,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 10,
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
  [5530] = 4,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 14,
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
  [5561] = 11,
    ACTIONS(119), 1,
      sym_keyword_or,
    ACTIONS(359), 1,
      sym_keyword_in,
    ACTIONS(365), 1,
      anon_sym_PLUS,
    ACTIONS(367), 1,
      anon_sym_DASH,
    ACTIONS(369), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(373), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(117), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5606] = 6,
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
    ACTIONS(119), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 12,
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
  [5641] = 4,
    ACTIONS(343), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 14,
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
  [5672] = 6,
    ACTIONS(369), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 12,
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
  [5707] = 11,
    ACTIONS(119), 1,
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
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(353), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(117), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [5752] = 8,
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
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 11,
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
  [5791] = 6,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 12,
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
  [5826] = 4,
    ACTIONS(371), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 14,
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
  [5857] = 9,
    ACTIONS(359), 1,
      sym_keyword_in,
    ACTIONS(365), 1,
      anon_sym_PLUS,
    ACTIONS(367), 1,
      anon_sym_DASH,
    ACTIONS(369), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 10,
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
  [5898] = 17,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    ACTIONS(375), 1,
      sym_keyword_distinct,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(832), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [5955] = 8,
    ACTIONS(365), 1,
      anon_sym_PLUS,
    ACTIONS(367), 1,
      anon_sym_DASH,
    ACTIONS(369), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 11,
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
  [5994] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(377), 5,
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
  [6025] = 17,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    ACTIONS(379), 1,
      sym_keyword_distinct,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(875), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6082] = 17,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(927), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6139] = 17,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    ACTIONS(383), 1,
      sym_keyword_distinct,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(851), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6196] = 12,
    ACTIONS(359), 1,
      sym_keyword_in,
    ACTIONS(365), 1,
      anon_sym_PLUS,
    ACTIONS(367), 1,
      anon_sym_DASH,
    ACTIONS(369), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      anon_sym_CARET,
    ACTIONS(385), 1,
      sym_keyword_and,
    ACTIONS(387), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(373), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(347), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6243] = 16,
    ACTIONS(253), 1,
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
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(850), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6297] = 4,
    ACTIONS(391), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 13,
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
  [6327] = 16,
    ACTIONS(253), 1,
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
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(835), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6381] = 6,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(605), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(277), 2,
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
  [6415] = 16,
    ACTIONS(253), 1,
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
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(1015), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6469] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 15,
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
  [6497] = 8,
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
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 10,
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
  [6535] = 3,
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
  [6563] = 11,
    ACTIONS(119), 1,
      sym_keyword_or,
    ACTIONS(401), 1,
      anon_sym_PLUS,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(409), 1,
      sym_keyword_in,
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
    ACTIONS(117), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6607] = 16,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(781), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6661] = 9,
    ACTIONS(401), 1,
      anon_sym_PLUS,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(409), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6701] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(161), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 15,
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
  [6729] = 16,
    ACTIONS(253), 1,
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
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(855), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [6783] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 15,
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
  [6811] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 15,
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
  [6839] = 4,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 13,
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
  [6869] = 6,
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
    ACTIONS(119), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 11,
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
  [6903] = 6,
    ACTIONS(391), 1,
      anon_sym_CARET,
    ACTIONS(419), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 11,
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
  [6937] = 8,
    ACTIONS(391), 1,
      anon_sym_CARET,
    ACTIONS(419), 1,
      anon_sym_SLASH,
    ACTIONS(421), 1,
      anon_sym_PLUS,
    ACTIONS(423), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 10,
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
  [6975] = 11,
    ACTIONS(119), 1,
      sym_keyword_or,
    ACTIONS(391), 1,
      anon_sym_CARET,
    ACTIONS(419), 1,
      anon_sym_SLASH,
    ACTIONS(421), 1,
      anon_sym_PLUS,
    ACTIONS(423), 1,
      anon_sym_DASH,
    ACTIONS(425), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
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
    ACTIONS(117), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [7019] = 16,
    ACTIONS(253), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(80), 1,
      sym_identifier,
    STATE(209), 1,
      sym_literal,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(208), 2,
      sym_field,
      sym_predicate,
    STATE(878), 2,
      sym_function_call,
      sym__function_param,
    STATE(250), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [7073] = 9,
    ACTIONS(391), 1,
      anon_sym_CARET,
    ACTIONS(419), 1,
      anon_sym_SLASH,
    ACTIONS(421), 1,
      anon_sym_PLUS,
    ACTIONS(423), 1,
      anon_sym_DASH,
    ACTIONS(425), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7113] = 15,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(301), 1,
      sym_keyword_left,
    ACTIONS(303), 1,
      sym_keyword_right,
    ACTIONS(307), 1,
      sym_keyword_join,
    ACTIONS(309), 1,
      sym_keyword_where,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    ACTIONS(313), 1,
      sym_keyword_group_by,
    STATE(430), 1,
      sym_where,
    STATE(473), 1,
      sym_group_by,
    STATE(548), 1,
      sym_order_by,
    STATE(705), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(433), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(180), 3,
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
      sym_keyword_distinct,
    ACTIONS(437), 1,
      sym_keyword_count,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(357), 1,
      sym_identifier,
    STATE(417), 1,
      sym_invocation,
    STATE(419), 1,
      sym__count_function,
    STATE(592), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(591), 2,
      sym__field_list,
      sym_literal,
    STATE(549), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7217] = 9,
    ACTIONS(445), 1,
      sym_keyword_in,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(455), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(117), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7256] = 4,
    ACTIONS(455), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 13,
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
  [7285] = 15,
    ACTIONS(281), 1,
      sym_keyword_left,
    ACTIONS(283), 1,
      sym_keyword_right,
    ACTIONS(287), 1,
      sym_keyword_join,
    ACTIONS(289), 1,
      sym_keyword_where,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(293), 1,
      sym_keyword_group_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(425), 1,
      sym_where,
    STATE(479), 1,
      sym_group_by,
    STATE(544), 1,
      sym_order_by,
    STATE(735), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(457), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(270), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7336] = 15,
    ACTIONS(281), 1,
      sym_keyword_left,
    ACTIONS(283), 1,
      sym_keyword_right,
    ACTIONS(287), 1,
      sym_keyword_join,
    ACTIONS(289), 1,
      sym_keyword_where,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(293), 1,
      sym_keyword_group_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(407), 1,
      sym_where,
    STATE(489), 1,
      sym_group_by,
    STATE(548), 1,
      sym_order_by,
    STATE(705), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(270), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7387] = 15,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(301), 1,
      sym_keyword_left,
    ACTIONS(303), 1,
      sym_keyword_right,
    ACTIONS(307), 1,
      sym_keyword_join,
    ACTIONS(309), 1,
      sym_keyword_where,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    ACTIONS(313), 1,
      sym_keyword_group_by,
    STATE(421), 1,
      sym_where,
    STATE(499), 1,
      sym_group_by,
    STATE(544), 1,
      sym_order_by,
    STATE(735), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(457), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(307), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7438] = 8,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(455), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(117), 10,
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
  [7475] = 16,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(459), 1,
      sym_keyword_distinct,
    ACTIONS(461), 1,
      sym_keyword_count,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(350), 1,
      sym_identifier,
    STATE(399), 1,
      sym_invocation,
    STATE(428), 1,
      sym__count_function,
    STATE(592), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(591), 2,
      sym__field_list,
      sym_literal,
    STATE(527), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [7528] = 8,
    ACTIONS(469), 1,
      anon_sym_PLUS,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(473), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(467), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(117), 10,
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
  [7565] = 6,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(455), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 11,
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
  [7598] = 10,
    ACTIONS(469), 1,
      anon_sym_PLUS,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(473), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(467), 2,
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
    ACTIONS(117), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7639] = 15,
    ACTIONS(281), 1,
      sym_keyword_left,
    ACTIONS(283), 1,
      sym_keyword_right,
    ACTIONS(287), 1,
      sym_keyword_join,
    ACTIONS(289), 1,
      sym_keyword_where,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(293), 1,
      sym_keyword_group_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(407), 1,
      sym_where,
    STATE(489), 1,
      sym_group_by,
    STATE(548), 1,
      sym_order_by,
    STATE(705), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(178), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [7690] = 8,
    ACTIONS(487), 1,
      sym_keyword_as,
    ACTIONS(489), 1,
      anon_sym_DOT,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(485), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(483), 10,
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
  [7727] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(377), 3,
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
  [7756] = 9,
    ACTIONS(469), 1,
      anon_sym_PLUS,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(473), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(467), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(117), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7795] = 4,
    ACTIONS(475), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 13,
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
  [7824] = 6,
    ACTIONS(473), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(467), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 11,
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
  [7857] = 8,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(495), 1,
      sym_keyword_as,
    ACTIONS(497), 1,
      anon_sym_DOT,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(485), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(483), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [7894] = 10,
    ACTIONS(445), 1,
      sym_keyword_in,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(455), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(501), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(499), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(117), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7935] = 12,
    ACTIONS(401), 1,
      anon_sym_PLUS,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(409), 1,
      sym_keyword_in,
    ACTIONS(503), 1,
      sym_keyword_and,
    ACTIONS(505), 1,
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
    ACTIONS(347), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(411), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7980] = 15,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(301), 1,
      sym_keyword_left,
    ACTIONS(303), 1,
      sym_keyword_right,
    ACTIONS(307), 1,
      sym_keyword_join,
    ACTIONS(309), 1,
      sym_keyword_where,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    ACTIONS(313), 1,
      sym_keyword_group_by,
    STATE(430), 1,
      sym_where,
    STATE(473), 1,
      sym_group_by,
    STATE(548), 1,
      sym_order_by,
    STATE(705), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(433), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(307), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [8031] = 16,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(437), 1,
      sym_keyword_count,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(357), 1,
      sym_identifier,
    STATE(417), 1,
      sym_invocation,
    STATE(419), 1,
      sym__count_function,
    STATE(561), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(591), 2,
      sym__field_list,
      sym_literal,
    STATE(549), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8084] = 6,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(708), 1,
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
  [8117] = 16,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(461), 1,
      sym_keyword_count,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__literal_string,
    STATE(350), 1,
      sym_identifier,
    STATE(399), 1,
      sym_invocation,
    STATE(428), 1,
      sym__count_function,
    STATE(561), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(591), 2,
      sym__field_list,
      sym_literal,
    STATE(527), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8170] = 3,
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
  [8196] = 3,
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
  [8222] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(517), 1,
      sym_keyword_as,
    STATE(214), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(515), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(513), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8256] = 3,
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
  [8282] = 15,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(439), 1,
      anon_sym_STAR,
    ACTIONS(519), 1,
      anon_sym_BQUOTE,
    ACTIONS(521), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(400), 1,
      sym_identifier,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    STATE(928), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(591), 2,
      sym__field_list,
      sym_literal,
    STATE(726), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8332] = 15,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(523), 1,
      sym_keyword_count,
    ACTIONS(525), 1,
      anon_sym_STAR,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(338), 1,
      sym_identifier,
    STATE(349), 1,
      sym__count_function,
    STATE(353), 1,
      sym_invocation,
    STATE(588), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(451), 2,
      sym__field_list,
      sym_literal,
    STATE(453), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8382] = 11,
    ACTIONS(445), 1,
      sym_keyword_in,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(455), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(501), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(499), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8424] = 3,
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
  [8450] = 15,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(525), 1,
      anon_sym_STAR,
    ACTIONS(535), 1,
      sym_keyword_count,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(325), 1,
      sym_identifier,
    STATE(363), 1,
      sym_invocation,
    STATE(364), 1,
      sym__count_function,
    STATE(588), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(451), 2,
      sym__field_list,
      sym_literal,
    STATE(438), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [8500] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(509), 2,
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
  [8528] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(509), 2,
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
  [8556] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(541), 1,
      sym_keyword_as,
    STATE(214), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(515), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(513), 10,
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
  [8590] = 12,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(543), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8633] = 12,
    ACTIONS(255), 1,
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
    STATE(28), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8676] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 16,
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
  [8699] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(549), 16,
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
  [8722] = 12,
    ACTIONS(255), 1,
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
    STATE(29), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(551), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8765] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(553), 16,
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
  [8788] = 12,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(555), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8831] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(216), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(559), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(557), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8862] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(563), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(561), 10,
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
  [8893] = 12,
    ACTIONS(255), 1,
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
    STATE(33), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(565), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8936] = 12,
    ACTIONS(255), 1,
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
    STATE(28), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8979] = 12,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(543), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9022] = 11,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    ACTIONS(445), 1,
      sym_keyword_in,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(455), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(501), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(499), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9063] = 12,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(567), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9106] = 12,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(567), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9149] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(216), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(559), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(557), 10,
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
  [9180] = 12,
    ACTIONS(255), 1,
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
    STATE(27), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(569), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9223] = 12,
    ACTIONS(255), 1,
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
    STATE(33), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(565), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9266] = 12,
    ACTIONS(255), 1,
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
    STATE(29), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(551), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9309] = 12,
    ACTIONS(255), 1,
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
    STATE(42), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(571), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9352] = 12,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9395] = 12,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9438] = 12,
    ACTIONS(255), 1,
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
    STATE(34), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(575), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9481] = 12,
    ACTIONS(255), 1,
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
    STATE(42), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(571), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9524] = 12,
    ACTIONS(255), 1,
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
    STATE(32), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9567] = 12,
    ACTIONS(255), 1,
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
    STATE(27), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(569), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9610] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(579), 16,
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
  [9633] = 12,
    ACTIONS(255), 1,
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
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(555), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(256), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9676] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(563), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(561), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [9707] = 12,
    ACTIONS(255), 1,
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
    STATE(32), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9750] = 12,
    ACTIONS(255), 1,
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
    STATE(34), 1,
      sym_predicate,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(575), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(255), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9793] = 12,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    STATE(155), 1,
      sym_predicate,
    STATE(653), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(247), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9835] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(583), 15,
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
  [9857] = 10,
    ACTIONS(401), 1,
      anon_sym_PLUS,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(405), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_CARET,
    ACTIONS(409), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(503), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(411), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9895] = 11,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
    STATE(468), 1,
      sym_where_expression,
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
  [9935] = 11,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
    STATE(468), 1,
      sym_where_expression,
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
  [9975] = 10,
    ACTIONS(469), 1,
      anon_sym_PLUS,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(473), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(467), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(481), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(601), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(479), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10013] = 12,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    STATE(122), 1,
      sym_predicate,
    STATE(435), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(254), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10055] = 11,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    STATE(468), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(223), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10095] = 10,
    ACTIONS(445), 1,
      sym_keyword_in,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(455), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(501), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(499), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10133] = 10,
    ACTIONS(391), 1,
      anon_sym_CARET,
    ACTIONS(419), 1,
      anon_sym_SLASH,
    ACTIONS(421), 1,
      anon_sym_PLUS,
    ACTIONS(423), 1,
      anon_sym_DASH,
    ACTIONS(425), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(429), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(603), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(427), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10171] = 11,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
    STATE(468), 1,
      sym_where_expression,
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
  [10211] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(609), 15,
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
  [10233] = 10,
    ACTIONS(317), 1,
      sym_keyword_in,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(331), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(611), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(319), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10271] = 10,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(613), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(615), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(191), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10309] = 10,
    ACTIONS(171), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(617), 1,
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
    ACTIONS(619), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(197), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10347] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(94), 1,
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
  [10384] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(629), 1,
      anon_sym_BQUOTE,
    ACTIONS(631), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(24), 1,
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
  [10421] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(94), 1,
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
  [10458] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(94), 1,
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
  [10495] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(633), 1,
      anon_sym_BQUOTE,
    ACTIONS(635), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    STATE(94), 1,
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
  [10532] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(633), 1,
      anon_sym_BQUOTE,
    ACTIONS(635), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    STATE(94), 1,
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
  [10569] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
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
  [10606] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(637), 1,
      anon_sym_BQUOTE,
    ACTIONS(639), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(24), 1,
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
  [10643] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(94), 1,
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
  [10680] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(94), 1,
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
  [10717] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(633), 1,
      anon_sym_BQUOTE,
    ACTIONS(635), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    STATE(94), 1,
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
  [10754] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(633), 1,
      anon_sym_BQUOTE,
    ACTIONS(635), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
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
  [10791] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(633), 1,
      anon_sym_BQUOTE,
    ACTIONS(635), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(99), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10828] = 7,
    ACTIONS(641), 1,
      sym_keyword_left,
    ACTIONS(644), 1,
      sym_keyword_right,
    ACTIONS(650), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(647), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(270), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
    ACTIONS(653), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10859] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(99), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10896] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
    STATE(94), 1,
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
  [10933] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
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
  [10970] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(94), 1,
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
  [11007] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
    STATE(94), 1,
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
  [11044] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
    STATE(94), 1,
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
  [11081] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(85), 1,
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
  [11118] = 11,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    STATE(133), 1,
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
  [11157] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
    STATE(94), 1,
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
  [11194] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(205), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11231] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
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
  [11268] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
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
  [11305] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
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
  [11342] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
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
  [11379] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(629), 1,
      anon_sym_BQUOTE,
    ACTIONS(631), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(24), 1,
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
  [11416] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
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
  [11453] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(629), 1,
      anon_sym_BQUOTE,
    ACTIONS(631), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(24), 1,
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
  [11490] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(99), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11527] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(191), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11564] = 11,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    STATE(133), 1,
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
  [11603] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(190), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11640] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(85), 1,
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
  [11677] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(85), 1,
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
  [11714] = 10,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(85), 1,
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
  [11751] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(633), 1,
      anon_sym_BQUOTE,
    ACTIONS(635), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    STATE(94), 1,
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
  [11788] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(629), 1,
      anon_sym_BQUOTE,
    ACTIONS(631), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(24), 1,
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
  [11825] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(94), 1,
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
  [11862] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(629), 1,
      anon_sym_BQUOTE,
    ACTIONS(631), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(24), 1,
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
  [11899] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(94), 1,
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
  [11936] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(94), 1,
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
  [11973] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(94), 1,
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
  [12010] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(94), 1,
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
  [12047] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(94), 1,
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
  [12084] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(99), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12121] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(629), 1,
      anon_sym_BQUOTE,
    ACTIONS(631), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(24), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(23), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12158] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(637), 1,
      anon_sym_BQUOTE,
    ACTIONS(639), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(24), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(23), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12195] = 7,
    ACTIONS(663), 1,
      sym_keyword_left,
    ACTIONS(666), 1,
      sym_keyword_right,
    ACTIONS(672), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(669), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(307), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
    ACTIONS(653), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12226] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(94), 1,
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
  [12263] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(637), 1,
      anon_sym_BQUOTE,
    ACTIONS(639), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(24), 1,
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
  [12300] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(637), 1,
      anon_sym_BQUOTE,
    ACTIONS(639), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(24), 1,
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
  [12337] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(637), 1,
      anon_sym_BQUOTE,
    ACTIONS(639), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(24), 1,
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
  [12374] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(94), 1,
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
  [12411] = 10,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym__number,
    ACTIONS(637), 1,
      anon_sym_BQUOTE,
    ACTIONS(639), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(24), 1,
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
  [12448] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(94), 1,
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
  [12485] = 10,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      sym__number,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(94), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(99), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12522] = 11,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    STATE(147), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(254), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12561] = 11,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(59), 1,
      sym__literal_string,
    STATE(109), 1,
      sym_identifier,
    STATE(188), 1,
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
  [12600] = 10,
    ACTIONS(677), 1,
      sym_keyword_primary,
    ACTIONS(679), 1,
      sym_keyword_not,
    ACTIONS(681), 1,
      sym_keyword_auto_increment,
    ACTIONS(683), 1,
      sym_keyword_default,
    STATE(498), 1,
      sym__primary_key,
    STATE(627), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(385), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(685), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12636] = 9,
    ACTIONS(687), 1,
      sym_keyword_set,
    ACTIONS(689), 1,
      sym_keyword_alter,
    ACTIONS(691), 1,
      sym_keyword_drop,
    ACTIONS(693), 1,
      sym_keyword_add,
    ACTIONS(695), 1,
      sym_keyword_rename,
    ACTIONS(697), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(658), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(869), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12670] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(699), 13,
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
  [12690] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(701), 13,
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
  [12710] = 9,
    ACTIONS(687), 1,
      sym_keyword_set,
    ACTIONS(689), 1,
      sym_keyword_alter,
    ACTIONS(691), 1,
      sym_keyword_drop,
    ACTIONS(693), 1,
      sym_keyword_add,
    ACTIONS(695), 1,
      sym_keyword_rename,
    ACTIONS(697), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(699), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(823), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12744] = 3,
    ACTIONS(705), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(703), 12,
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
  [12766] = 2,
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
  [12785] = 9,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    ACTIONS(709), 1,
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
  [12818] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(143), 12,
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
  [12837] = 13,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(711), 1,
      sym_keyword_primary,
    ACTIONS(713), 1,
      sym_keyword_key,
    ACTIONS(715), 1,
      sym_keyword_constraint,
    STATE(5), 1,
      sym_identifier,
    STATE(711), 1,
      sym_constraint,
    STATE(776), 1,
      sym__primary_key,
    STATE(778), 1,
      sym_column_definition,
    STATE(779), 1,
      sym__constraint_literal,
    STATE(780), 1,
      sym__primary_key_constraint,
    STATE(782), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12878] = 2,
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
  [12897] = 2,
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
  [12916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 12,
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
  [12935] = 2,
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
  [12954] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 12,
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
  [12973] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(137), 12,
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
  [12992] = 2,
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
  [13011] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 12,
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
  [13030] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(141), 12,
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
  [13049] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 12,
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
  [13068] = 9,
    ACTIONS(231), 1,
      sym_keyword_as,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
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
  [13101] = 3,
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
  [13121] = 3,
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
  [13141] = 8,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym_keyword_as,
    ACTIONS(723), 1,
      anon_sym_DOT,
    STATE(73), 1,
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
  [13171] = 8,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym_keyword_as,
    ACTIONS(725), 1,
      anon_sym_DOT,
    STATE(73), 1,
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
  [13201] = 3,
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
  [13221] = 3,
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
  [13241] = 3,
    ACTIONS(729), 1,
      aux_sym_keyword_varchar_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 10,
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
  [13261] = 4,
    ACTIONS(733), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(735), 1,
      aux_sym_keyword_timestamp_token2,
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
  [13283] = 3,
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
  [13302] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(741), 10,
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
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(745), 1,
      sym_keyword_as,
    STATE(413), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(747), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(743), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13346] = 9,
    ACTIONS(61), 1,
      sym_keyword_from,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(749), 1,
      sym_keyword_as,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
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
  [13377] = 3,
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
  [13396] = 3,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
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
  [13415] = 7,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(761), 1,
      sym_keyword_as,
    STATE(418), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(763), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(759), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
  [13442] = 7,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(75), 1,
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
  [13469] = 3,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
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
  [13488] = 3,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
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
  [13507] = 9,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(749), 1,
      sym_keyword_as,
    ACTIONS(773), 1,
      anon_sym_LPAREN,
    ACTIONS(775), 1,
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
  [13538] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(777), 10,
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
  [13555] = 7,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(249), 1,
      sym_keyword_as,
    STATE(75), 1,
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
  [13582] = 3,
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
  [13601] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 10,
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
  [13618] = 3,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
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
  [13637] = 7,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(761), 1,
      sym_keyword_as,
    STATE(418), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(759), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(763), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13664] = 7,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(745), 1,
      sym_keyword_as,
    STATE(413), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(747), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13691] = 8,
    ACTIONS(461), 1,
      sym_keyword_count,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    STATE(350), 1,
      sym_identifier,
    STATE(399), 1,
      sym_invocation,
    STATE(428), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [13719] = 8,
    ACTIONS(523), 1,
      sym_keyword_count,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      sym__identifier,
    STATE(338), 1,
      sym_identifier,
    STATE(349), 1,
      sym__count_function,
    STATE(353), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [13747] = 8,
    ACTIONS(73), 1,
      sym_keyword_from,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(783), 1,
      sym_keyword_as,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13775] = 8,
    ACTIONS(535), 1,
      sym_keyword_count,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(325), 1,
      sym_identifier,
    STATE(363), 1,
      sym_invocation,
    STATE(364), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [13803] = 2,
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
  [13819] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(789), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13835] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(793), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(791), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13853] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(793), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(791), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [13871] = 8,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(795), 1,
      sym_keyword_as,
    ACTIONS(797), 1,
      anon_sym_DOT,
    STATE(237), 1,
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
  [13899] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(801), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(799), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13917] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(805), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(803), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [13935] = 3,
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
  [13953] = 3,
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
  [13971] = 8,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(519), 1,
      anon_sym_BQUOTE,
    ACTIONS(521), 1,
      sym__identifier,
    STATE(400), 1,
      sym_identifier,
    STATE(492), 1,
      sym__count_function,
    STATE(493), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [13999] = 2,
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
  [14015] = 2,
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
  [14031] = 8,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(783), 1,
      sym_keyword_as,
    ACTIONS(811), 1,
      anon_sym_DOT,
    STATE(73), 1,
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
  [14059] = 2,
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
  [14075] = 2,
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
  [14091] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(817), 1,
      sym_keyword_as,
    ACTIONS(819), 1,
      anon_sym_DOT,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(483), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [14117] = 7,
    ACTIONS(677), 1,
      sym_keyword_primary,
    ACTIONS(821), 1,
      sym_keyword_auto_increment,
    STATE(482), 1,
      sym__primary_key,
    STATE(666), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(823), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14143] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(827), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(825), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [14161] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(829), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14177] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(831), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14193] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(827), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(825), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14211] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(835), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(833), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14229] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(837), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14245] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(805), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(803), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14263] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(801), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(799), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [14281] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(839), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14297] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(841), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14313] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(843), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14329] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(835), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(833), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [14347] = 8,
    ACTIONS(437), 1,
      sym_keyword_count,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      sym__identifier,
    STATE(357), 1,
      sym_identifier,
    STATE(417), 1,
      sym_invocation,
    STATE(419), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(402), 3,
      sym_field,
      sym_all_fields,
      sym_function_call,
  [14375] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(759), 1,
      sym_keyword_from,
    ACTIONS(845), 1,
      sym_keyword_as,
    STATE(418), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(763), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14400] = 8,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(847), 1,
      sym_keyword_as,
    ACTIONS(849), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14427] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(851), 1,
      sym_keyword_as,
    STATE(75), 1,
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
  [14452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(853), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14467] = 6,
    ACTIONS(677), 1,
      sym_keyword_primary,
    STATE(482), 1,
      sym__primary_key,
    STATE(666), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(823), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14490] = 2,
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
  [14505] = 2,
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
  [14520] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(859), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14535] = 8,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(293), 1,
      sym_keyword_group_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(479), 1,
      sym_group_by,
    STATE(544), 1,
      sym_order_by,
    STATE(735), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14562] = 6,
    ACTIONS(677), 1,
      sym_keyword_primary,
    STATE(486), 1,
      sym__primary_key,
    STATE(644), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(861), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14585] = 8,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(628), 1,
      sym_table_reference,
    STATE(983), 1,
      sym__table_references,
    STATE(986), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(984), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [14612] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(865), 1,
      sym_keyword_as,
    STATE(214), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(513), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [14635] = 8,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(867), 1,
      sym_keyword_default,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    STATE(840), 1,
      sym_identifier,
    STATE(930), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(439), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14662] = 3,
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
  [14679] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(871), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14694] = 3,
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
  [14711] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(873), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14726] = 7,
    ACTIONS(85), 1,
      sym_keyword_from,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(851), 1,
      sym_keyword_as,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14751] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(845), 1,
      sym_keyword_as,
    STATE(418), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(759), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(763), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14776] = 2,
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
  [14791] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(877), 1,
      sym_keyword_as,
    STATE(413), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(747), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14816] = 3,
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
  [14833] = 8,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    ACTIONS(313), 1,
      sym_keyword_group_by,
    STATE(488), 1,
      sym_group_by,
    STATE(519), 1,
      sym_order_by,
    STATE(678), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14860] = 8,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(293), 1,
      sym_keyword_group_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(489), 1,
      sym_group_by,
    STATE(548), 1,
      sym_order_by,
    STATE(705), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14887] = 3,
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
  [14904] = 9,
    ACTIONS(677), 1,
      sym_keyword_primary,
    ACTIONS(881), 1,
      sym_keyword_key,
    ACTIONS(883), 1,
      sym_keyword_constraint,
    STATE(775), 1,
      sym_constraint,
    STATE(776), 1,
      sym__primary_key,
    STATE(779), 1,
      sym__constraint_literal,
    STATE(780), 1,
      sym__primary_key_constraint,
    STATE(782), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14933] = 8,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(293), 1,
      sym_keyword_group_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(503), 1,
      sym_group_by,
    STATE(519), 1,
      sym_order_by,
    STATE(678), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14960] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(885), 1,
      sym_keyword_as,
    STATE(214), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(513), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(515), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [14985] = 8,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(867), 1,
      sym_keyword_default,
    ACTIONS(887), 1,
      anon_sym_SEMI,
    STATE(840), 1,
      sym_identifier,
    STATE(841), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(439), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [15012] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(743), 1,
      sym_keyword_from,
    ACTIONS(877), 1,
      sym_keyword_as,
    STATE(413), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(747), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15037] = 8,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    ACTIONS(313), 1,
      sym_keyword_group_by,
    STATE(473), 1,
      sym_group_by,
    STATE(548), 1,
      sym_order_by,
    STATE(705), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15064] = 8,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    ACTIONS(313), 1,
      sym_keyword_group_by,
    STATE(499), 1,
      sym_group_by,
    STATE(544), 1,
      sym_order_by,
    STATE(735), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15091] = 8,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(867), 1,
      sym_keyword_default,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    STATE(836), 1,
      sym_table_options,
    STATE(840), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(439), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [15118] = 9,
    ACTIONS(891), 1,
      sym_keyword_table,
    ACTIONS(893), 1,
      sym_keyword_view,
    ACTIONS(895), 1,
      sym_keyword_materialized,
    ACTIONS(897), 1,
      sym_keyword_or,
    ACTIONS(899), 1,
      sym_keyword_temp,
    ACTIONS(901), 1,
      sym_keyword_temporary,
    STATE(760), 1,
      sym__or_replace,
    STATE(980), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15147] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(805), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15163] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(801), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15179] = 8,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(903), 1,
      sym_keyword_where,
    ACTIONS(905), 1,
      anon_sym_SEMI,
    STATE(528), 1,
      sym_where,
    STATE(682), 1,
      sym_order_by,
    STATE(843), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15205] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(791), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(793), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15221] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(833), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(835), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15237] = 4,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    STATE(459), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(907), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15255] = 7,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(867), 1,
      sym_keyword_default,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    STATE(840), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(443), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [15279] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(216), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(557), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [15299] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(913), 7,
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
    ACTIONS(825), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(827), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [15329] = 7,
    ACTIONS(915), 1,
      sym_keyword_default,
    ACTIONS(918), 1,
      anon_sym_SEMI,
    ACTIONS(920), 1,
      anon_sym_BQUOTE,
    ACTIONS(923), 1,
      sym__identifier,
    STATE(840), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(443), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [15353] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(926), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15367] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(59), 1,
      sym__literal_string,
    STATE(672), 1,
      sym_select,
    STATE(673), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15393] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(793), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(791), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15409] = 8,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(903), 1,
      sym_keyword_where,
    ACTIONS(928), 1,
      anon_sym_SEMI,
    STATE(511), 1,
      sym_where,
    STATE(663), 1,
      sym_order_by,
    STATE(852), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15435] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(59), 1,
      sym__literal_string,
    STATE(739), 1,
      sym_literal,
    STATE(740), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(827), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(825), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15477] = 3,
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
  [15493] = 4,
    STATE(587), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(930), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15511] = 5,
    ACTIONS(687), 1,
      sym_keyword_set,
    ACTIONS(695), 1,
      sym_keyword_rename,
    ACTIONS(697), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(868), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [15531] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(907), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15549] = 4,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(853), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15567] = 3,
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
  [15583] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(801), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(799), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15599] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(937), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15617] = 7,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(939), 1,
      sym_keyword_as,
    ACTIONS(941), 1,
      anon_sym_DOT,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15641] = 4,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(937), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15659] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(59), 1,
      sym__literal_string,
    STATE(613), 1,
      sym_literal,
    STATE(669), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15685] = 4,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(853), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15703] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(805), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(803), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15719] = 5,
    ACTIONS(687), 1,
      sym_keyword_set,
    ACTIONS(695), 1,
      sym_keyword_rename,
    ACTIONS(697), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(816), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [15739] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(561), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(563), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [15761] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(216), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(557), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(559), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [15783] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(835), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(833), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [15799] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(561), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [15819] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(946), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15832] = 7,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(948), 1,
      sym_keyword_if,
    STATE(570), 1,
      sym__if_not_exists,
    STATE(727), 1,
      sym_identifier,
    STATE(767), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15855] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(889), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(532), 2,
      sym_invocation,
      sym_subquery,
  [15876] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(889), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(533), 2,
      sym_invocation,
      sym_subquery,
  [15897] = 6,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(548), 1,
      sym_order_by,
    STATE(705), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15918] = 6,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    STATE(544), 1,
      sym_order_by,
    STATE(735), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15939] = 6,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    STATE(548), 1,
      sym_order_by,
    STATE(705), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [15960] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(889), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(538), 2,
      sym_invocation,
      sym_subquery,
  [15981] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(889), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(514), 2,
      sym_invocation,
      sym_subquery,
  [16002] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(954), 1,
      sym_keyword_as,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16023] = 4,
    ACTIONS(958), 1,
      sym_keyword_having,
    STATE(530), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(956), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16040] = 6,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(519), 1,
      sym_order_by,
    STATE(678), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16061] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(948), 1,
      sym_keyword_if,
    STATE(323), 1,
      sym_identifier,
    STATE(574), 1,
      sym__if_not_exists,
    STATE(935), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16084] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(960), 1,
      sym_keyword_if,
    STATE(319), 1,
      sym_table_reference,
    STATE(323), 1,
      sym_identifier,
    STATE(554), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16107] = 4,
    STATE(644), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(861), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16124] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(960), 1,
      sym_keyword_if,
    STATE(323), 1,
      sym_identifier,
    STATE(452), 1,
      sym_table_reference,
    STATE(586), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16147] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(960), 1,
      sym_keyword_if,
    STATE(323), 1,
      sym_identifier,
    STATE(590), 1,
      sym__if_exists,
    STATE(770), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16170] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(960), 1,
      sym_keyword_if,
    STATE(323), 1,
      sym_identifier,
    STATE(593), 1,
      sym__if_exists,
    STATE(771), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16193] = 4,
    STATE(630), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(962), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16210] = 4,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    STATE(487), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(377), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [16227] = 6,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    STATE(541), 1,
      sym_order_by,
    STATE(652), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(967), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16248] = 6,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(544), 1,
      sym_order_by,
    STATE(735), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16269] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(948), 1,
      sym_keyword_if,
    STATE(323), 1,
      sym_identifier,
    STATE(583), 1,
      sym__if_not_exists,
    STATE(894), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16292] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(948), 1,
      sym_keyword_if,
    STATE(323), 1,
      sym_identifier,
    STATE(599), 1,
      sym__if_not_exists,
    STATE(831), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16315] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(969), 1,
      sym_keyword_as,
    STATE(413), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(747), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16336] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(971), 1,
      sym_keyword_as,
    STATE(418), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(763), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16357] = 7,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(948), 1,
      sym_keyword_if,
    STATE(580), 1,
      sym__if_not_exists,
    STATE(727), 1,
      sym_identifier,
    STATE(786), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16380] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(948), 1,
      sym_keyword_if,
    STATE(323), 1,
      sym_identifier,
    STATE(579), 1,
      sym__if_not_exists,
    STATE(883), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16403] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(973), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16416] = 4,
    ACTIONS(975), 1,
      sym_keyword_having,
    STATE(530), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(956), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16433] = 4,
    STATE(666), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(823), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16450] = 6,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(311), 1,
      sym_keyword_order_by,
    STATE(519), 1,
      sym_order_by,
    STATE(678), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16471] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(889), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(523), 2,
      sym_invocation,
      sym_subquery,
  [16492] = 5,
    ACTIONS(689), 1,
      sym_keyword_alter,
    ACTIONS(691), 1,
      sym_keyword_drop,
    ACTIONS(693), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(789), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [16511] = 4,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(487), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(977), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [16528] = 6,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(541), 1,
      sym_order_by,
    STATE(652), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(967), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16549] = 7,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(948), 1,
      sym_keyword_if,
    STATE(5), 1,
      sym_identifier,
    STATE(603), 1,
      sym__if_not_exists,
    STATE(753), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16572] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(889), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(520), 2,
      sym_invocation,
      sym_subquery,
  [16593] = 6,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(59), 1,
      sym__literal_string,
    STATE(765), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16613] = 4,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(937), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16629] = 4,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(705), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16645] = 4,
    STATE(763), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(981), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16661] = 6,
    ACTIONS(983), 1,
      sym_keyword_lateral,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(987), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(537), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16681] = 6,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(989), 1,
      anon_sym_SEMI,
    STATE(707), 1,
      sym_order_by,
    STATE(890), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16701] = 6,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(987), 1,
      sym__identifier,
    ACTIONS(991), 1,
      sym_keyword_lateral,
    STATE(384), 1,
      sym_identifier,
    STATE(539), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16721] = 6,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(987), 1,
      sym__identifier,
    ACTIONS(993), 1,
      sym_keyword_lateral,
    STATE(384), 1,
      sym_identifier,
    STATE(515), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16741] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(995), 1,
      sym_keyword_on,
    ACTIONS(997), 1,
      sym_keyword_as,
    STATE(888), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16761] = 5,
    ACTIONS(999), 1,
      sym_keyword_on,
    ACTIONS(1001), 1,
      sym_keyword_using,
    STATE(787), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16779] = 6,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(987), 1,
      sym__identifier,
    ACTIONS(1003), 1,
      sym_keyword_lateral,
    STATE(384), 1,
      sym_identifier,
    STATE(545), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16799] = 6,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      sym__identifier,
    ACTIONS(960), 1,
      sym_keyword_if,
    STATE(696), 1,
      sym__if_exists,
    STATE(754), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16819] = 4,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    STATE(518), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(853), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16835] = 4,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(652), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(967), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16851] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(1008), 1,
      sym_keyword_on,
    ACTIONS(1010), 1,
      sym_keyword_as,
    STATE(907), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16871] = 5,
    ACTIONS(1012), 1,
      sym_keyword_on,
    ACTIONS(1014), 1,
      sym_keyword_using,
    STATE(806), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16889] = 6,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(987), 1,
      sym__identifier,
    ACTIONS(1016), 1,
      sym_keyword_lateral,
    STATE(384), 1,
      sym_identifier,
    STATE(521), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16909] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(1018), 1,
      sym_keyword_on,
    ACTIONS(1020), 1,
      sym_keyword_as,
    STATE(844), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16929] = 4,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(853), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [16945] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(799), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(801), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [16959] = 5,
    ACTIONS(1025), 1,
      sym_keyword_on,
    ACTIONS(1027), 1,
      sym_keyword_using,
    STATE(748), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16977] = 4,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    STATE(552), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(907), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16993] = 6,
    ACTIONS(291), 1,
      sym_keyword_order_by,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    STATE(713), 1,
      sym_order_by,
    STATE(904), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17013] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1033), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17025] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1035), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17037] = 6,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(59), 1,
      sym__literal_string,
    STATE(679), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17057] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(1037), 1,
      sym_keyword_on,
    ACTIONS(1039), 1,
      sym_keyword_as,
    STATE(993), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17077] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(1041), 1,
      sym_keyword_on,
    ACTIONS(1043), 1,
      sym_keyword_as,
    STATE(992), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17097] = 4,
    ACTIONS(1045), 1,
      sym_keyword_offset,
    STATE(737), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1047), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17113] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(633), 1,
      sym_table_reference,
    STATE(940), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17133] = 6,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(59), 1,
      sym__literal_string,
    STATE(673), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17153] = 5,
    ACTIONS(1001), 1,
      sym_keyword_using,
    ACTIONS(1049), 1,
      sym_keyword_on,
    STATE(757), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17171] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(1051), 1,
      sym_keyword_on,
    ACTIONS(1053), 1,
      sym_keyword_as,
    STATE(989), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17191] = 5,
    ACTIONS(1014), 1,
      sym_keyword_using,
    ACTIONS(1055), 1,
      sym_keyword_on,
    STATE(758), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17209] = 6,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym__number,
    STATE(59), 1,
      sym__literal_string,
    STATE(534), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17229] = 4,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(636), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1057), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17245] = 6,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(493), 1,
      sym__identifier,
    ACTIONS(1059), 1,
      sym_keyword_column,
    ACTIONS(1061), 1,
      sym_keyword_to,
    STATE(819), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(803), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(805), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [17279] = 4,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(678), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17295] = 5,
    ACTIONS(1027), 1,
      sym_keyword_using,
    ACTIONS(1063), 1,
      sym_keyword_on,
    STATE(759), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17313] = 6,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(987), 1,
      sym__identifier,
    ACTIONS(1065), 1,
      sym_keyword_lateral,
    STATE(384), 1,
      sym_identifier,
    STATE(526), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17333] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(791), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(793), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [17347] = 4,
    ACTIONS(295), 1,
      sym_keyword_limit,
    STATE(735), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17363] = 4,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(507), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(907), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [17379] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(833), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(835), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [17393] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(825), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(827), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [17407] = 4,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    STATE(518), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(937), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17423] = 4,
    ACTIONS(1067), 1,
      sym_keyword_from,
    STATE(990), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 2,
      sym_keyword_force,
      sym_keyword_use,
  [17438] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(322), 1,
      sym_table_reference,
    STATE(323), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17455] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1069), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1071), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17468] = 5,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(1073), 1,
      anon_sym_STAR,
    ACTIONS(1075), 1,
      sym__identifier,
    STATE(342), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17485] = 5,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(768), 1,
      sym__column_without_order,
    STATE(808), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17502] = 3,
    ACTIONS(827), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(825), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [17515] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(778), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17532] = 5,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1077), 1,
      sym__identifier,
    STATE(509), 1,
      sym_identifier,
    STATE(755), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17549] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1079), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17560] = 5,
    ACTIONS(1081), 1,
      anon_sym_BQUOTE,
    ACTIONS(1083), 1,
      sym__identifier,
    STATE(373), 1,
      sym_identifier,
    STATE(447), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17577] = 5,
    ACTIONS(1085), 1,
      anon_sym_BQUOTE,
    ACTIONS(1087), 1,
      sym__identifier,
    STATE(123), 1,
      sym_table_expression,
    STATE(192), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17594] = 5,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    ACTIONS(1089), 1,
      anon_sym_STAR,
    STATE(416), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17611] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(784), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17628] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1091), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1093), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17641] = 5,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(1075), 1,
      sym__identifier,
    ACTIONS(1089), 1,
      anon_sym_STAR,
    STATE(359), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17658] = 5,
    ACTIONS(1095), 1,
      anon_sym_BQUOTE,
    ACTIONS(1097), 1,
      sym__identifier,
    STATE(125), 1,
      sym_table_expression,
    STATE(187), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17675] = 5,
    ACTIONS(519), 1,
      anon_sym_BQUOTE,
    ACTIONS(1089), 1,
      anon_sym_STAR,
    ACTIONS(1099), 1,
      sym__identifier,
    STATE(477), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17692] = 5,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(727), 1,
      sym_identifier,
    STATE(786), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17709] = 5,
    ACTIONS(519), 1,
      anon_sym_BQUOTE,
    ACTIONS(1073), 1,
      anon_sym_STAR,
    ACTIONS(1099), 1,
      sym__identifier,
    STATE(458), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17726] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1101), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1103), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17739] = 3,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [17752] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(883), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17769] = 5,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(1089), 1,
      anon_sym_STAR,
    ACTIONS(1105), 1,
      sym__identifier,
    STATE(401), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17786] = 5,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(1073), 1,
      anon_sym_STAR,
    ACTIONS(1107), 1,
      sym__identifier,
    STATE(341), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17803] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [17816] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [17829] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(825), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17846] = 5,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(727), 1,
      sym_identifier,
    STATE(802), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17863] = 5,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1077), 1,
      sym__identifier,
    STATE(509), 1,
      sym_identifier,
    STATE(649), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17880] = 5,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    ACTIONS(1073), 1,
      anon_sym_STAR,
    STATE(367), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17897] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(831), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17914] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1109), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17925] = 5,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(680), 1,
      sym__column_without_order,
    STATE(808), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17942] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(463), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17959] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1111), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17970] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1113), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17981] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1115), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1117), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [17994] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(805), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18011] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1119), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18022] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1121), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18033] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(809), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18050] = 5,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(1123), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(515), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18067] = 5,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(1123), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(521), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18084] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(611), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18101] = 5,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(727), 1,
      sym_identifier,
    STATE(1011), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18118] = 5,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(1073), 1,
      anon_sym_STAR,
    ACTIONS(1105), 1,
      sym__identifier,
    STATE(381), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18135] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    STATE(959), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18152] = 5,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(1123), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(539), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18169] = 3,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(791), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [18182] = 3,
    ACTIONS(125), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [18195] = 5,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(796), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18212] = 4,
    ACTIONS(1125), 1,
      sym_keyword_from,
    STATE(761), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1127), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [18227] = 4,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(610), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(977), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [18242] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1129), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(1131), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [18255] = 5,
    ACTIONS(527), 1,
      anon_sym_BQUOTE,
    ACTIONS(1089), 1,
      anon_sym_STAR,
    ACTIONS(1107), 1,
      sym__identifier,
    STATE(354), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18272] = 5,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(1123), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(537), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18289] = 5,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(706), 1,
      aux_sym_column_definitions_repeat1,
    STATE(880), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18306] = 4,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
    STATE(610), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(377), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [18321] = 5,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      aux_sym_column_definitions_repeat1,
    STATE(934), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18338] = 4,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(623), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18352] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18366] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(994), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18380] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18394] = 4,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    STATE(616), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18408] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(332), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18422] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18436] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18450] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(404), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18464] = 4,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    STATE(616), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18478] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(993), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18492] = 4,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    STATE(623), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18506] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(992), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18520] = 4,
    ACTIONS(1127), 1,
      anon_sym_SEMI,
    ACTIONS(1158), 1,
      sym_keyword_from,
    STATE(761), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18534] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(478), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18548] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(823), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18558] = 4,
    ACTIONS(1160), 1,
      sym_keyword_set,
    ACTIONS(1162), 1,
      anon_sym_COMMA,
    STATE(634), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18572] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(404), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18586] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1164), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18596] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18610] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18624] = 4,
    ACTIONS(1166), 1,
      sym_keyword_values,
    ACTIONS(1168), 1,
      anon_sym_LPAREN,
    STATE(891), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18638] = 4,
    ACTIONS(1162), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      sym_keyword_set,
    STATE(651), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18652] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(332), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18666] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1172), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18676] = 4,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    STATE(676), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18690] = 4,
    ACTIONS(633), 1,
      anon_sym_BQUOTE,
    ACTIONS(635), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18704] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(1002), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18718] = 4,
    ACTIONS(633), 1,
      anon_sym_BQUOTE,
    ACTIONS(635), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18732] = 4,
    ACTIONS(629), 1,
      anon_sym_BQUOTE,
    ACTIONS(631), 1,
      sym__identifier,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18746] = 4,
    ACTIONS(629), 1,
      anon_sym_BQUOTE,
    ACTIONS(631), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18760] = 4,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(65), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18774] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(962), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [18784] = 4,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(599), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18798] = 4,
    ACTIONS(637), 1,
      anon_sym_BQUOTE,
    ACTIONS(639), 1,
      sym__identifier,
    STATE(15), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18812] = 4,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    ACTIONS(1180), 1,
      anon_sym_COMMA,
    STATE(647), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18826] = 4,
    ACTIONS(637), 1,
      anon_sym_BQUOTE,
    ACTIONS(639), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18840] = 4,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18854] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(846), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18868] = 4,
    ACTIONS(1185), 1,
      sym_keyword_set,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    STATE(651), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18882] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1057), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18892] = 4,
    ACTIONS(1190), 1,
      sym_keyword_where,
    ACTIONS(1192), 1,
      anon_sym_SEMI,
    STATE(842), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18906] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(907), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18920] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(625), 1,
      sym_select,
    STATE(833), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18934] = 4,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18948] = 4,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
    ACTIONS(657), 1,
      sym__identifier,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18962] = 4,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
    STATE(704), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18976] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(497), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18990] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19000] = 4,
    ACTIONS(1085), 1,
      anon_sym_BQUOTE,
    ACTIONS(1087), 1,
      sym__identifier,
    STATE(201), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19014] = 4,
    ACTIONS(1198), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    STATE(774), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19028] = 4,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(989), 1,
      anon_sym_SEMI,
    STATE(890), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19042] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1202), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19056] = 4,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19070] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(861), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [19080] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1202), 1,
      sym__identifier,
    STATE(41), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19094] = 4,
    ACTIONS(659), 1,
      anon_sym_BQUOTE,
    ACTIONS(661), 1,
      sym__identifier,
    STATE(58), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19108] = 4,
    ACTIONS(1158), 1,
      sym_keyword_from,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(859), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19122] = 4,
    ACTIONS(1095), 1,
      anon_sym_BQUOTE,
    ACTIONS(1097), 1,
      sym__identifier,
    STATE(210), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19136] = 4,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(1202), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19150] = 4,
    ACTIONS(1158), 1,
      sym_keyword_from,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    STATE(1004), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19164] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    STATE(708), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19178] = 4,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    STATE(647), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19192] = 4,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19206] = 4,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(709), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19220] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19234] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(967), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1216), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19254] = 4,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    STATE(712), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19268] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(888), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19282] = 4,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    STATE(904), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19296] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(1222), 1,
      sym__identifier,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19310] = 4,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19324] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(916), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19338] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(723), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19352] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(1222), 1,
      sym__identifier,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19366] = 4,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19380] = 4,
    ACTIONS(1226), 1,
      sym_keyword_not,
    ACTIONS(1228), 1,
      sym_keyword_default,
    ACTIONS(1230), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19394] = 4,
    ACTIONS(1232), 1,
      sym_keyword_select,
    STATE(604), 1,
      sym_select,
    STATE(662), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19408] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19422] = 4,
    ACTIONS(1158), 1,
      sym_keyword_from,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    STATE(838), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19436] = 4,
    ACTIONS(985), 1,
      anon_sym_BQUOTE,
    ACTIONS(1123), 1,
      sym__identifier,
    STATE(410), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19450] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(625), 1,
      sym_select,
    STATE(938), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19464] = 4,
    ACTIONS(1198), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1236), 1,
      anon_sym_SEMI,
    STATE(790), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19478] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(794), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19492] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(1222), 1,
      sym__identifier,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19506] = 4,
    ACTIONS(1232), 1,
      sym_keyword_select,
    STATE(604), 1,
      sym_select,
    STATE(724), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19520] = 4,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_SEMI,
    STATE(729), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19534] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(988), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19548] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(730), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19562] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(1010), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19576] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(1014), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19590] = 4,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_SEMI,
    STATE(742), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19604] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [19614] = 4,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    ACTIONS(1242), 1,
      anon_sym_COMMA,
    STATE(706), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19628] = 4,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(1245), 1,
      anon_sym_SEMI,
    STATE(942), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19642] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(723), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19656] = 4,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    STATE(709), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19670] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(939), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19684] = 4,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(674), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19698] = 4,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(718), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19712] = 4,
    ACTIONS(295), 1,
      sym_keyword_limit,
    ACTIONS(1258), 1,
      anon_sym_SEMI,
    STATE(926), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19726] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(792), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19740] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(791), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19754] = 4,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1077), 1,
      sym__identifier,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19768] = 4,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19782] = 4,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    STATE(718), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19796] = 4,
    ACTIONS(1265), 1,
      anon_sym_BQUOTE,
    ACTIONS(1267), 1,
      sym__identifier,
    STATE(589), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19810] = 4,
    ACTIONS(1232), 1,
      sym_keyword_select,
    STATE(604), 1,
      sym_select,
    STATE(695), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19824] = 4,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__identifier,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19838] = 4,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(581), 1,
      sym__identifier,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19852] = 4,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    STATE(723), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19866] = 4,
    ACTIONS(1198), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1274), 1,
      anon_sym_SEMI,
    STATE(744), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19880] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(625), 1,
      sym_select,
    STATE(837), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19894] = 4,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    STATE(621), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19908] = 3,
    ACTIONS(1276), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(703), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [19920] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    STATE(723), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19934] = 4,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1280), 1,
      anon_sym_SEMI,
    STATE(742), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19948] = 4,
    ACTIONS(1282), 1,
      sym_keyword_set,
    ACTIONS(1284), 1,
      sym_keyword_drop,
    ACTIONS(1286), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19962] = 4,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1077), 1,
      sym__identifier,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19976] = 4,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1077), 1,
      sym__identifier,
    STATE(404), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19990] = 4,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1077), 1,
      sym__identifier,
    STATE(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20004] = 4,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1077), 1,
      sym__identifier,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20018] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [20028] = 4,
    ACTIONS(593), 1,
      anon_sym_BQUOTE,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20042] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1288), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [20052] = 4,
    ACTIONS(463), 1,
      anon_sym_BQUOTE,
    ACTIONS(952), 1,
      sym__identifier,
    STATE(881), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20066] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(728), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20080] = 4,
    ACTIONS(1158), 1,
      sym_keyword_from,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(955), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20094] = 4,
    ACTIONS(1081), 1,
      anon_sym_BQUOTE,
    ACTIONS(1083), 1,
      sym__identifier,
    STATE(426), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20108] = 4,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_SEMI,
    STATE(742), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20122] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1299), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [20131] = 3,
    ACTIONS(1301), 1,
      sym_keyword_no,
    ACTIONS(1303), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20142] = 3,
    ACTIONS(1305), 1,
      sym_keyword_outer,
    ACTIONS(1307), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20153] = 3,
    ACTIONS(1309), 1,
      sym_keyword_outer,
    ACTIONS(1311), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20164] = 3,
    ACTIONS(1168), 1,
      anon_sym_LPAREN,
    STATE(324), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20175] = 3,
    ACTIONS(1012), 1,
      sym_keyword_on,
    ACTIONS(1014), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20186] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1313), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20195] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1315), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20204] = 3,
    ACTIONS(1317), 1,
      sym_keyword_table,
    ACTIONS(1319), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20215] = 3,
    ACTIONS(1321), 1,
      sym_keyword_table,
    ACTIONS(1323), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20226] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1325), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20235] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1327), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1153), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20253] = 3,
    ACTIONS(1329), 1,
      sym_keyword_from,
    STATE(954), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20264] = 3,
    ACTIONS(1331), 1,
      sym_keyword_on,
    ACTIONS(1333), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20275] = 3,
    ACTIONS(1001), 1,
      sym_keyword_using,
    ACTIONS(1049), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20286] = 3,
    ACTIONS(1014), 1,
      sym_keyword_using,
    ACTIONS(1055), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20297] = 3,
    ACTIONS(1335), 1,
      sym_keyword_view,
    ACTIONS(1337), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20308] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1339), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [20317] = 3,
    ACTIONS(1341), 1,
      sym_keyword_for,
    ACTIONS(1343), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20328] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1345), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20337] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1347), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20346] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1269), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20355] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1349), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20364] = 3,
    ACTIONS(1351), 1,
      anon_sym_LPAREN,
    STATE(427), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20375] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1353), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20384] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1355), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [20393] = 3,
    ACTIONS(1357), 1,
      sym_keyword_cascade,
    ACTIONS(1359), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20404] = 3,
    ACTIONS(1361), 1,
      sym_keyword_cascade,
    ACTIONS(1363), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20415] = 3,
    ACTIONS(1168), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20426] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20435] = 3,
    ACTIONS(1365), 1,
      sym_keyword_no,
    ACTIONS(1367), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1178), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20455] = 3,
    ACTIONS(1369), 1,
      anon_sym_LPAREN,
    STATE(795), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20466] = 3,
    ACTIONS(1369), 1,
      anon_sym_LPAREN,
    STATE(766), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20477] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1240), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20486] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1371), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20495] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1373), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20504] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1375), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20513] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1371), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20522] = 3,
    ACTIONS(1377), 1,
      anon_sym_LPAREN,
    STATE(845), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20533] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1185), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [20542] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1379), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20551] = 3,
    ACTIONS(1351), 1,
      anon_sym_LPAREN,
    STATE(411), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20562] = 3,
    ACTIONS(1333), 1,
      sym_keyword_using,
    ACTIONS(1381), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20573] = 3,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(692), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20584] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1297), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20593] = 3,
    ACTIONS(1383), 1,
      sym_keyword_no,
    ACTIONS(1385), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20604] = 3,
    ACTIONS(1369), 1,
      anon_sym_LPAREN,
    STATE(785), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20615] = 3,
    ACTIONS(677), 1,
      sym_keyword_primary,
    STATE(777), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20626] = 3,
    ACTIONS(1226), 1,
      sym_keyword_not,
    ACTIONS(1387), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20637] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1389), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20646] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1391), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20655] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1393), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20664] = 3,
    ACTIONS(1395), 1,
      sym_keyword_outer,
    ACTIONS(1397), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20675] = 3,
    ACTIONS(1168), 1,
      anon_sym_LPAREN,
    STATE(329), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20686] = 3,
    ACTIONS(1168), 1,
      anon_sym_LPAREN,
    STATE(328), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20697] = 3,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20708] = 3,
    ACTIONS(1403), 1,
      sym_keyword_outer,
    ACTIONS(1405), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20719] = 3,
    ACTIONS(1351), 1,
      anon_sym_LPAREN,
    STATE(431), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1407), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [20739] = 3,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20750] = 3,
    ACTIONS(1413), 1,
      sym_keyword_cascade,
    ACTIONS(1415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20761] = 3,
    ACTIONS(999), 1,
      sym_keyword_on,
    ACTIONS(1001), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20772] = 3,
    ACTIONS(1377), 1,
      anon_sym_LPAREN,
    STATE(897), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20783] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1417), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20792] = 3,
    ACTIONS(1419), 1,
      sym_keyword_cascade,
    ACTIONS(1421), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20803] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1423), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20812] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1425), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [20821] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1427), 2,
      sym_keyword_no,
      sym_keyword_data,
  [20830] = 2,
    ACTIONS(1429), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20838] = 2,
    ACTIONS(1431), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20846] = 2,
    ACTIONS(1433), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20854] = 2,
    ACTIONS(1435), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20862] = 2,
    ACTIONS(1437), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20870] = 2,
    ACTIONS(1439), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20878] = 2,
    ACTIONS(1441), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20886] = 2,
    ACTIONS(1443), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20894] = 2,
    ACTIONS(1445), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20902] = 2,
    ACTIONS(1447), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20910] = 2,
    ACTIONS(1238), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20918] = 2,
    ACTIONS(1449), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20926] = 2,
    ACTIONS(1451), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20934] = 2,
    ACTIONS(1453), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20942] = 2,
    ACTIONS(1455), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20950] = 2,
    ACTIONS(1455), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20958] = 2,
    ACTIONS(1457), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20966] = 2,
    ACTIONS(1459), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20974] = 2,
    ACTIONS(1461), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20982] = 2,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20990] = 2,
    ACTIONS(1465), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20998] = 2,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21006] = 2,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21014] = 2,
    ACTIONS(1471), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21022] = 2,
    ACTIONS(1473), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21030] = 2,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21038] = 2,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21046] = 2,
    ACTIONS(1479), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21054] = 2,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21062] = 2,
    ACTIONS(1481), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21070] = 2,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21078] = 2,
    ACTIONS(1483), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21086] = 2,
    ACTIONS(1485), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21094] = 2,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21102] = 2,
    ACTIONS(1489), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21110] = 2,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21118] = 2,
    ACTIONS(1493), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21126] = 2,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21134] = 2,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21142] = 2,
    ACTIONS(989), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21150] = 2,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21158] = 2,
    ACTIONS(1501), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21166] = 2,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21174] = 2,
    ACTIONS(1505), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21182] = 2,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21190] = 2,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21198] = 2,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21206] = 2,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21214] = 2,
    ACTIONS(1385), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21222] = 2,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21230] = 2,
    ACTIONS(1515), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21238] = 2,
    ACTIONS(1517), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21246] = 2,
    ACTIONS(1405), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21254] = 2,
    ACTIONS(1421), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21262] = 2,
    ACTIONS(1415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21270] = 2,
    ACTIONS(1519), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21278] = 2,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21286] = 2,
    ACTIONS(1521), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21294] = 2,
    ACTIONS(1523), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21302] = 2,
    ACTIONS(1525), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21310] = 2,
    ACTIONS(1527), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21318] = 2,
    ACTIONS(1529), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21326] = 2,
    ACTIONS(1531), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21334] = 2,
    ACTIONS(1533), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21342] = 2,
    ACTIONS(1535), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21350] = 2,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21358] = 2,
    ACTIONS(1539), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21366] = 2,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21374] = 2,
    ACTIONS(1543), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21382] = 2,
    ACTIONS(1545), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21390] = 2,
    ACTIONS(1547), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21398] = 2,
    ACTIONS(1549), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21406] = 2,
    ACTIONS(1551), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21414] = 2,
    ACTIONS(1553), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21422] = 2,
    ACTIONS(1555), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21430] = 2,
    ACTIONS(1557), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21438] = 2,
    ACTIONS(1559), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21446] = 2,
    ACTIONS(1245), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21454] = 2,
    ACTIONS(1561), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21462] = 2,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21470] = 2,
    ACTIONS(1565), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21478] = 2,
    ACTIONS(1567), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21486] = 2,
    ACTIONS(1569), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21494] = 2,
    ACTIONS(1571), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21502] = 2,
    ACTIONS(1573), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21510] = 2,
    ACTIONS(1575), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21518] = 2,
    ACTIONS(1577), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21526] = 2,
    ACTIONS(1579), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21534] = 2,
    ACTIONS(1367), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21542] = 2,
    ACTIONS(1581), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21550] = 2,
    ACTIONS(1583), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21558] = 2,
    ACTIONS(1258), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21566] = 2,
    ACTIONS(1585), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21574] = 2,
    ACTIONS(1587), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21582] = 2,
    ACTIONS(1589), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21590] = 2,
    ACTIONS(1591), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21598] = 2,
    ACTIONS(1593), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21606] = 2,
    ACTIONS(1595), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21614] = 2,
    ACTIONS(1597), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21622] = 2,
    ACTIONS(1599), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21630] = 2,
    ACTIONS(1601), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21638] = 2,
    ACTIONS(1603), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21646] = 2,
    ACTIONS(1605), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21654] = 2,
    ACTIONS(1607), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21662] = 2,
    ACTIONS(1609), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21670] = 2,
    ACTIONS(1611), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21678] = 2,
    ACTIONS(1613), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21686] = 2,
    ACTIONS(1615), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21694] = 2,
    ACTIONS(1617), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21702] = 2,
    ACTIONS(1619), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21710] = 2,
    ACTIONS(1623), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1621), 2,
      sym_comment,
      sym_marginalia,
  [21718] = 2,
    ACTIONS(1625), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1621), 2,
      sym_comment,
      sym_marginalia,
  [21726] = 2,
    ACTIONS(1627), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21734] = 2,
    ACTIONS(1629), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21742] = 2,
    ACTIONS(1631), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21750] = 2,
    ACTIONS(1633), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21758] = 2,
    ACTIONS(1635), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21766] = 2,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21774] = 2,
    ACTIONS(1637), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21782] = 2,
    ACTIONS(1639), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21790] = 2,
    ACTIONS(1641), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21798] = 2,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21806] = 2,
    ACTIONS(1643), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21814] = 2,
    ACTIONS(1645), 1,
      aux_sym_double_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21822] = 2,
    ACTIONS(1647), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21830] = 2,
    ACTIONS(1649), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21838] = 2,
    ACTIONS(1651), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21846] = 2,
    ACTIONS(1653), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21854] = 2,
    ACTIONS(1655), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21862] = 2,
    ACTIONS(1657), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21870] = 2,
    ACTIONS(1659), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21878] = 2,
    ACTIONS(1661), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21886] = 2,
    ACTIONS(1663), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1621), 2,
      sym_comment,
      sym_marginalia,
  [21894] = 2,
    ACTIONS(1665), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1621), 2,
      sym_comment,
      sym_marginalia,
  [21902] = 2,
    ACTIONS(1667), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21910] = 2,
    ACTIONS(1669), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21918] = 2,
    ACTIONS(1671), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21926] = 2,
    ACTIONS(1673), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21934] = 2,
    ACTIONS(1673), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21942] = 2,
    ACTIONS(1675), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21950] = 2,
    ACTIONS(1677), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21958] = 2,
    ACTIONS(1679), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21966] = 2,
    ACTIONS(1681), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21974] = 2,
    ACTIONS(1683), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21982] = 2,
    ACTIONS(1685), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21990] = 2,
    ACTIONS(1687), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [21998] = 2,
    ACTIONS(1689), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22006] = 2,
    ACTIONS(1691), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22014] = 2,
    ACTIONS(1693), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22022] = 2,
    ACTIONS(1695), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22030] = 2,
    ACTIONS(1697), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22038] = 2,
    ACTIONS(1699), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22046] = 2,
    ACTIONS(1701), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22054] = 2,
    ACTIONS(1703), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22062] = 2,
    ACTIONS(1705), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22070] = 2,
    ACTIONS(1707), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22078] = 2,
    ACTIONS(1709), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22086] = 2,
    ACTIONS(1711), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22094] = 2,
    ACTIONS(1713), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22102] = 2,
    ACTIONS(1715), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22110] = 2,
    ACTIONS(1717), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22118] = 2,
    ACTIONS(1719), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22126] = 2,
    ACTIONS(1721), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22134] = 2,
    ACTIONS(1723), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22142] = 2,
    ACTIONS(1725), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22150] = 2,
    ACTIONS(1727), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22158] = 2,
    ACTIONS(1729), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22166] = 2,
    ACTIONS(1731), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22174] = 2,
    ACTIONS(1733), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22182] = 2,
    ACTIONS(1735), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22190] = 2,
    ACTIONS(1737), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22198] = 2,
    ACTIONS(1739), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22206] = 2,
    ACTIONS(1741), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22214] = 2,
    ACTIONS(1743), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22222] = 2,
    ACTIONS(1745), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22230] = 2,
    ACTIONS(1747), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22238] = 2,
    ACTIONS(1749), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22246] = 2,
    ACTIONS(1751), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22254] = 2,
    ACTIONS(1429), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22262] = 2,
    ACTIONS(1753), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22270] = 2,
    ACTIONS(1755), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22278] = 2,
    ACTIONS(1757), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22286] = 2,
    ACTIONS(1759), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22294] = 2,
    ACTIONS(1761), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22302] = 2,
    ACTIONS(1763), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22310] = 2,
    ACTIONS(1765), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22318] = 2,
    ACTIONS(1767), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22326] = 2,
    ACTIONS(1769), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1621), 2,
      sym_comment,
      sym_marginalia,
  [22334] = 2,
    ACTIONS(1771), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1621), 2,
      sym_comment,
      sym_marginalia,
  [22342] = 2,
    ACTIONS(1773), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22350] = 2,
    ACTIONS(1775), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22358] = 2,
    ACTIONS(1777), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22366] = 2,
    ACTIONS(1779), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22374] = 2,
    ACTIONS(1781), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22382] = 2,
    ACTIONS(1783), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22390] = 2,
    ACTIONS(1785), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22398] = 2,
    ACTIONS(1787), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22406] = 2,
    ACTIONS(1789), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22414] = 2,
    ACTIONS(1791), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22422] = 2,
    ACTIONS(1793), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22430] = 2,
    ACTIONS(1795), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22438] = 2,
    ACTIONS(1797), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22446] = 2,
    ACTIONS(1799), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22454] = 2,
    ACTIONS(1311), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22462] = 2,
    ACTIONS(1801), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [22470] = 2,
    ACTIONS(1803), 1,
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
  [SMALL_STATE(13)] = 654,
  [SMALL_STATE(14)] = 693,
  [SMALL_STATE(15)] = 732,
  [SMALL_STATE(16)] = 779,
  [SMALL_STATE(17)] = 826,
  [SMALL_STATE(18)] = 864,
  [SMALL_STATE(19)] = 900,
  [SMALL_STATE(20)] = 936,
  [SMALL_STATE(21)] = 972,
  [SMALL_STATE(22)] = 1008,
  [SMALL_STATE(23)] = 1044,
  [SMALL_STATE(24)] = 1080,
  [SMALL_STATE(25)] = 1116,
  [SMALL_STATE(26)] = 1152,
  [SMALL_STATE(27)] = 1190,
  [SMALL_STATE(28)] = 1228,
  [SMALL_STATE(29)] = 1266,
  [SMALL_STATE(30)] = 1304,
  [SMALL_STATE(31)] = 1340,
  [SMALL_STATE(32)] = 1378,
  [SMALL_STATE(33)] = 1416,
  [SMALL_STATE(34)] = 1454,
  [SMALL_STATE(35)] = 1492,
  [SMALL_STATE(36)] = 1530,
  [SMALL_STATE(37)] = 1566,
  [SMALL_STATE(38)] = 1602,
  [SMALL_STATE(39)] = 1638,
  [SMALL_STATE(40)] = 1674,
  [SMALL_STATE(41)] = 1710,
  [SMALL_STATE(42)] = 1746,
  [SMALL_STATE(43)] = 1784,
  [SMALL_STATE(44)] = 1825,
  [SMALL_STATE(45)] = 1870,
  [SMALL_STATE(46)] = 1907,
  [SMALL_STATE(47)] = 1944,
  [SMALL_STATE(48)] = 1985,
  [SMALL_STATE(49)] = 2030,
  [SMALL_STATE(50)] = 2081,
  [SMALL_STATE(51)] = 2128,
  [SMALL_STATE(52)] = 2175,
  [SMALL_STATE(53)] = 2226,
  [SMALL_STATE(54)] = 2270,
  [SMALL_STATE(55)] = 2314,
  [SMALL_STATE(56)] = 2348,
  [SMALL_STATE(57)] = 2392,
  [SMALL_STATE(58)] = 2436,
  [SMALL_STATE(59)] = 2480,
  [SMALL_STATE(60)] = 2514,
  [SMALL_STATE(61)] = 2558,
  [SMALL_STATE(62)] = 2599,
  [SMALL_STATE(63)] = 2632,
  [SMALL_STATE(64)] = 2675,
  [SMALL_STATE(65)] = 2708,
  [SMALL_STATE(66)] = 2749,
  [SMALL_STATE(67)] = 2782,
  [SMALL_STATE(68)] = 2825,
  [SMALL_STATE(69)] = 2858,
  [SMALL_STATE(70)] = 2891,
  [SMALL_STATE(71)] = 2924,
  [SMALL_STATE(72)] = 2965,
  [SMALL_STATE(73)] = 3008,
  [SMALL_STATE(74)] = 3041,
  [SMALL_STATE(75)] = 3074,
  [SMALL_STATE(76)] = 3107,
  [SMALL_STATE(77)] = 3140,
  [SMALL_STATE(78)] = 3173,
  [SMALL_STATE(79)] = 3206,
  [SMALL_STATE(80)] = 3249,
  [SMALL_STATE(81)] = 3293,
  [SMALL_STATE(82)] = 3325,
  [SMALL_STATE(83)] = 3357,
  [SMALL_STATE(84)] = 3389,
  [SMALL_STATE(85)] = 3421,
  [SMALL_STATE(86)] = 3463,
  [SMALL_STATE(87)] = 3495,
  [SMALL_STATE(88)] = 3527,
  [SMALL_STATE(89)] = 3559,
  [SMALL_STATE(90)] = 3591,
  [SMALL_STATE(91)] = 3623,
  [SMALL_STATE(92)] = 3655,
  [SMALL_STATE(93)] = 3687,
  [SMALL_STATE(94)] = 3719,
  [SMALL_STATE(95)] = 3751,
  [SMALL_STATE(96)] = 3791,
  [SMALL_STATE(97)] = 3833,
  [SMALL_STATE(98)] = 3875,
  [SMALL_STATE(99)] = 3915,
  [SMALL_STATE(100)] = 3947,
  [SMALL_STATE(101)] = 3979,
  [SMALL_STATE(102)] = 4011,
  [SMALL_STATE(103)] = 4043,
  [SMALL_STATE(104)] = 4075,
  [SMALL_STATE(105)] = 4107,
  [SMALL_STATE(106)] = 4139,
  [SMALL_STATE(107)] = 4171,
  [SMALL_STATE(108)] = 4203,
  [SMALL_STATE(109)] = 4235,
  [SMALL_STATE(110)] = 4277,
  [SMALL_STATE(111)] = 4316,
  [SMALL_STATE(112)] = 4347,
  [SMALL_STATE(113)] = 4378,
  [SMALL_STATE(114)] = 4417,
  [SMALL_STATE(115)] = 4477,
  [SMALL_STATE(116)] = 4537,
  [SMALL_STATE(117)] = 4597,
  [SMALL_STATE(118)] = 4657,
  [SMALL_STATE(119)] = 4717,
  [SMALL_STATE(120)] = 4777,
  [SMALL_STATE(121)] = 4837,
  [SMALL_STATE(122)] = 4897,
  [SMALL_STATE(123)] = 4933,
  [SMALL_STATE(124)] = 4991,
  [SMALL_STATE(125)] = 5051,
  [SMALL_STATE(126)] = 5109,
  [SMALL_STATE(127)] = 5169,
  [SMALL_STATE(128)] = 5229,
  [SMALL_STATE(129)] = 5274,
  [SMALL_STATE(130)] = 5315,
  [SMALL_STATE(131)] = 5372,
  [SMALL_STATE(132)] = 5411,
  [SMALL_STATE(133)] = 5458,
  [SMALL_STATE(134)] = 5489,
  [SMALL_STATE(135)] = 5530,
  [SMALL_STATE(136)] = 5561,
  [SMALL_STATE(137)] = 5606,
  [SMALL_STATE(138)] = 5641,
  [SMALL_STATE(139)] = 5672,
  [SMALL_STATE(140)] = 5707,
  [SMALL_STATE(141)] = 5752,
  [SMALL_STATE(142)] = 5791,
  [SMALL_STATE(143)] = 5826,
  [SMALL_STATE(144)] = 5857,
  [SMALL_STATE(145)] = 5898,
  [SMALL_STATE(146)] = 5955,
  [SMALL_STATE(147)] = 5994,
  [SMALL_STATE(148)] = 6025,
  [SMALL_STATE(149)] = 6082,
  [SMALL_STATE(150)] = 6139,
  [SMALL_STATE(151)] = 6196,
  [SMALL_STATE(152)] = 6243,
  [SMALL_STATE(153)] = 6297,
  [SMALL_STATE(154)] = 6327,
  [SMALL_STATE(155)] = 6381,
  [SMALL_STATE(156)] = 6415,
  [SMALL_STATE(157)] = 6469,
  [SMALL_STATE(158)] = 6497,
  [SMALL_STATE(159)] = 6535,
  [SMALL_STATE(160)] = 6563,
  [SMALL_STATE(161)] = 6607,
  [SMALL_STATE(162)] = 6661,
  [SMALL_STATE(163)] = 6701,
  [SMALL_STATE(164)] = 6729,
  [SMALL_STATE(165)] = 6783,
  [SMALL_STATE(166)] = 6811,
  [SMALL_STATE(167)] = 6839,
  [SMALL_STATE(168)] = 6869,
  [SMALL_STATE(169)] = 6903,
  [SMALL_STATE(170)] = 6937,
  [SMALL_STATE(171)] = 6975,
  [SMALL_STATE(172)] = 7019,
  [SMALL_STATE(173)] = 7073,
  [SMALL_STATE(174)] = 7113,
  [SMALL_STATE(175)] = 7164,
  [SMALL_STATE(176)] = 7217,
  [SMALL_STATE(177)] = 7256,
  [SMALL_STATE(178)] = 7285,
  [SMALL_STATE(179)] = 7336,
  [SMALL_STATE(180)] = 7387,
  [SMALL_STATE(181)] = 7438,
  [SMALL_STATE(182)] = 7475,
  [SMALL_STATE(183)] = 7528,
  [SMALL_STATE(184)] = 7565,
  [SMALL_STATE(185)] = 7598,
  [SMALL_STATE(186)] = 7639,
  [SMALL_STATE(187)] = 7690,
  [SMALL_STATE(188)] = 7727,
  [SMALL_STATE(189)] = 7756,
  [SMALL_STATE(190)] = 7795,
  [SMALL_STATE(191)] = 7824,
  [SMALL_STATE(192)] = 7857,
  [SMALL_STATE(193)] = 7894,
  [SMALL_STATE(194)] = 7935,
  [SMALL_STATE(195)] = 7980,
  [SMALL_STATE(196)] = 8031,
  [SMALL_STATE(197)] = 8084,
  [SMALL_STATE(198)] = 8117,
  [SMALL_STATE(199)] = 8170,
  [SMALL_STATE(200)] = 8196,
  [SMALL_STATE(201)] = 8222,
  [SMALL_STATE(202)] = 8256,
  [SMALL_STATE(203)] = 8282,
  [SMALL_STATE(204)] = 8332,
  [SMALL_STATE(205)] = 8382,
  [SMALL_STATE(206)] = 8424,
  [SMALL_STATE(207)] = 8450,
  [SMALL_STATE(208)] = 8500,
  [SMALL_STATE(209)] = 8528,
  [SMALL_STATE(210)] = 8556,
  [SMALL_STATE(211)] = 8590,
  [SMALL_STATE(212)] = 8633,
  [SMALL_STATE(213)] = 8676,
  [SMALL_STATE(214)] = 8699,
  [SMALL_STATE(215)] = 8722,
  [SMALL_STATE(216)] = 8765,
  [SMALL_STATE(217)] = 8788,
  [SMALL_STATE(218)] = 8831,
  [SMALL_STATE(219)] = 8862,
  [SMALL_STATE(220)] = 8893,
  [SMALL_STATE(221)] = 8936,
  [SMALL_STATE(222)] = 8979,
  [SMALL_STATE(223)] = 9022,
  [SMALL_STATE(224)] = 9063,
  [SMALL_STATE(225)] = 9106,
  [SMALL_STATE(226)] = 9149,
  [SMALL_STATE(227)] = 9180,
  [SMALL_STATE(228)] = 9223,
  [SMALL_STATE(229)] = 9266,
  [SMALL_STATE(230)] = 9309,
  [SMALL_STATE(231)] = 9352,
  [SMALL_STATE(232)] = 9395,
  [SMALL_STATE(233)] = 9438,
  [SMALL_STATE(234)] = 9481,
  [SMALL_STATE(235)] = 9524,
  [SMALL_STATE(236)] = 9567,
  [SMALL_STATE(237)] = 9610,
  [SMALL_STATE(238)] = 9633,
  [SMALL_STATE(239)] = 9676,
  [SMALL_STATE(240)] = 9707,
  [SMALL_STATE(241)] = 9750,
  [SMALL_STATE(242)] = 9793,
  [SMALL_STATE(243)] = 9835,
  [SMALL_STATE(244)] = 9857,
  [SMALL_STATE(245)] = 9895,
  [SMALL_STATE(246)] = 9935,
  [SMALL_STATE(247)] = 9975,
  [SMALL_STATE(248)] = 10013,
  [SMALL_STATE(249)] = 10055,
  [SMALL_STATE(250)] = 10095,
  [SMALL_STATE(251)] = 10133,
  [SMALL_STATE(252)] = 10171,
  [SMALL_STATE(253)] = 10211,
  [SMALL_STATE(254)] = 10233,
  [SMALL_STATE(255)] = 10271,
  [SMALL_STATE(256)] = 10309,
  [SMALL_STATE(257)] = 10347,
  [SMALL_STATE(258)] = 10384,
  [SMALL_STATE(259)] = 10421,
  [SMALL_STATE(260)] = 10458,
  [SMALL_STATE(261)] = 10495,
  [SMALL_STATE(262)] = 10532,
  [SMALL_STATE(263)] = 10569,
  [SMALL_STATE(264)] = 10606,
  [SMALL_STATE(265)] = 10643,
  [SMALL_STATE(266)] = 10680,
  [SMALL_STATE(267)] = 10717,
  [SMALL_STATE(268)] = 10754,
  [SMALL_STATE(269)] = 10791,
  [SMALL_STATE(270)] = 10828,
  [SMALL_STATE(271)] = 10859,
  [SMALL_STATE(272)] = 10896,
  [SMALL_STATE(273)] = 10933,
  [SMALL_STATE(274)] = 10970,
  [SMALL_STATE(275)] = 11007,
  [SMALL_STATE(276)] = 11044,
  [SMALL_STATE(277)] = 11081,
  [SMALL_STATE(278)] = 11118,
  [SMALL_STATE(279)] = 11157,
  [SMALL_STATE(280)] = 11194,
  [SMALL_STATE(281)] = 11231,
  [SMALL_STATE(282)] = 11268,
  [SMALL_STATE(283)] = 11305,
  [SMALL_STATE(284)] = 11342,
  [SMALL_STATE(285)] = 11379,
  [SMALL_STATE(286)] = 11416,
  [SMALL_STATE(287)] = 11453,
  [SMALL_STATE(288)] = 11490,
  [SMALL_STATE(289)] = 11527,
  [SMALL_STATE(290)] = 11564,
  [SMALL_STATE(291)] = 11603,
  [SMALL_STATE(292)] = 11640,
  [SMALL_STATE(293)] = 11677,
  [SMALL_STATE(294)] = 11714,
  [SMALL_STATE(295)] = 11751,
  [SMALL_STATE(296)] = 11788,
  [SMALL_STATE(297)] = 11825,
  [SMALL_STATE(298)] = 11862,
  [SMALL_STATE(299)] = 11899,
  [SMALL_STATE(300)] = 11936,
  [SMALL_STATE(301)] = 11973,
  [SMALL_STATE(302)] = 12010,
  [SMALL_STATE(303)] = 12047,
  [SMALL_STATE(304)] = 12084,
  [SMALL_STATE(305)] = 12121,
  [SMALL_STATE(306)] = 12158,
  [SMALL_STATE(307)] = 12195,
  [SMALL_STATE(308)] = 12226,
  [SMALL_STATE(309)] = 12263,
  [SMALL_STATE(310)] = 12300,
  [SMALL_STATE(311)] = 12337,
  [SMALL_STATE(312)] = 12374,
  [SMALL_STATE(313)] = 12411,
  [SMALL_STATE(314)] = 12448,
  [SMALL_STATE(315)] = 12485,
  [SMALL_STATE(316)] = 12522,
  [SMALL_STATE(317)] = 12561,
  [SMALL_STATE(318)] = 12600,
  [SMALL_STATE(319)] = 12636,
  [SMALL_STATE(320)] = 12670,
  [SMALL_STATE(321)] = 12690,
  [SMALL_STATE(322)] = 12710,
  [SMALL_STATE(323)] = 12744,
  [SMALL_STATE(324)] = 12766,
  [SMALL_STATE(325)] = 12785,
  [SMALL_STATE(326)] = 12818,
  [SMALL_STATE(327)] = 12837,
  [SMALL_STATE(328)] = 12878,
  [SMALL_STATE(329)] = 12897,
  [SMALL_STATE(330)] = 12916,
  [SMALL_STATE(331)] = 12935,
  [SMALL_STATE(332)] = 12954,
  [SMALL_STATE(333)] = 12973,
  [SMALL_STATE(334)] = 12992,
  [SMALL_STATE(335)] = 13011,
  [SMALL_STATE(336)] = 13030,
  [SMALL_STATE(337)] = 13049,
  [SMALL_STATE(338)] = 13068,
  [SMALL_STATE(339)] = 13101,
  [SMALL_STATE(340)] = 13121,
  [SMALL_STATE(341)] = 13141,
  [SMALL_STATE(342)] = 13171,
  [SMALL_STATE(343)] = 13201,
  [SMALL_STATE(344)] = 13221,
  [SMALL_STATE(345)] = 13241,
  [SMALL_STATE(346)] = 13261,
  [SMALL_STATE(347)] = 13283,
  [SMALL_STATE(348)] = 13302,
  [SMALL_STATE(349)] = 13319,
  [SMALL_STATE(350)] = 13346,
  [SMALL_STATE(351)] = 13377,
  [SMALL_STATE(352)] = 13396,
  [SMALL_STATE(353)] = 13415,
  [SMALL_STATE(354)] = 13442,
  [SMALL_STATE(355)] = 13469,
  [SMALL_STATE(356)] = 13488,
  [SMALL_STATE(357)] = 13507,
  [SMALL_STATE(358)] = 13538,
  [SMALL_STATE(359)] = 13555,
  [SMALL_STATE(360)] = 13582,
  [SMALL_STATE(361)] = 13601,
  [SMALL_STATE(362)] = 13618,
  [SMALL_STATE(363)] = 13637,
  [SMALL_STATE(364)] = 13664,
  [SMALL_STATE(365)] = 13691,
  [SMALL_STATE(366)] = 13719,
  [SMALL_STATE(367)] = 13747,
  [SMALL_STATE(368)] = 13775,
  [SMALL_STATE(369)] = 13803,
  [SMALL_STATE(370)] = 13819,
  [SMALL_STATE(371)] = 13835,
  [SMALL_STATE(372)] = 13853,
  [SMALL_STATE(373)] = 13871,
  [SMALL_STATE(374)] = 13899,
  [SMALL_STATE(375)] = 13917,
  [SMALL_STATE(376)] = 13935,
  [SMALL_STATE(377)] = 13953,
  [SMALL_STATE(378)] = 13971,
  [SMALL_STATE(379)] = 13999,
  [SMALL_STATE(380)] = 14015,
  [SMALL_STATE(381)] = 14031,
  [SMALL_STATE(382)] = 14059,
  [SMALL_STATE(383)] = 14075,
  [SMALL_STATE(384)] = 14091,
  [SMALL_STATE(385)] = 14117,
  [SMALL_STATE(386)] = 14143,
  [SMALL_STATE(387)] = 14161,
  [SMALL_STATE(388)] = 14177,
  [SMALL_STATE(389)] = 14193,
  [SMALL_STATE(390)] = 14211,
  [SMALL_STATE(391)] = 14229,
  [SMALL_STATE(392)] = 14245,
  [SMALL_STATE(393)] = 14263,
  [SMALL_STATE(394)] = 14281,
  [SMALL_STATE(395)] = 14297,
  [SMALL_STATE(396)] = 14313,
  [SMALL_STATE(397)] = 14329,
  [SMALL_STATE(398)] = 14347,
  [SMALL_STATE(399)] = 14375,
  [SMALL_STATE(400)] = 14400,
  [SMALL_STATE(401)] = 14427,
  [SMALL_STATE(402)] = 14452,
  [SMALL_STATE(403)] = 14467,
  [SMALL_STATE(404)] = 14490,
  [SMALL_STATE(405)] = 14505,
  [SMALL_STATE(406)] = 14520,
  [SMALL_STATE(407)] = 14535,
  [SMALL_STATE(408)] = 14562,
  [SMALL_STATE(409)] = 14585,
  [SMALL_STATE(410)] = 14612,
  [SMALL_STATE(411)] = 14635,
  [SMALL_STATE(412)] = 14662,
  [SMALL_STATE(413)] = 14679,
  [SMALL_STATE(414)] = 14694,
  [SMALL_STATE(415)] = 14711,
  [SMALL_STATE(416)] = 14726,
  [SMALL_STATE(417)] = 14751,
  [SMALL_STATE(418)] = 14776,
  [SMALL_STATE(419)] = 14791,
  [SMALL_STATE(420)] = 14816,
  [SMALL_STATE(421)] = 14833,
  [SMALL_STATE(422)] = 14860,
  [SMALL_STATE(423)] = 14887,
  [SMALL_STATE(424)] = 14904,
  [SMALL_STATE(425)] = 14933,
  [SMALL_STATE(426)] = 14960,
  [SMALL_STATE(427)] = 14985,
  [SMALL_STATE(428)] = 15012,
  [SMALL_STATE(429)] = 15037,
  [SMALL_STATE(430)] = 15064,
  [SMALL_STATE(431)] = 15091,
  [SMALL_STATE(432)] = 15118,
  [SMALL_STATE(433)] = 15147,
  [SMALL_STATE(434)] = 15163,
  [SMALL_STATE(435)] = 15179,
  [SMALL_STATE(436)] = 15205,
  [SMALL_STATE(437)] = 15221,
  [SMALL_STATE(438)] = 15237,
  [SMALL_STATE(439)] = 15255,
  [SMALL_STATE(440)] = 15279,
  [SMALL_STATE(441)] = 15299,
  [SMALL_STATE(442)] = 15313,
  [SMALL_STATE(443)] = 15329,
  [SMALL_STATE(444)] = 15353,
  [SMALL_STATE(445)] = 15367,
  [SMALL_STATE(446)] = 15393,
  [SMALL_STATE(447)] = 15409,
  [SMALL_STATE(448)] = 15435,
  [SMALL_STATE(449)] = 15461,
  [SMALL_STATE(450)] = 15477,
  [SMALL_STATE(451)] = 15493,
  [SMALL_STATE(452)] = 15511,
  [SMALL_STATE(453)] = 15531,
  [SMALL_STATE(454)] = 15549,
  [SMALL_STATE(455)] = 15567,
  [SMALL_STATE(456)] = 15583,
  [SMALL_STATE(457)] = 15599,
  [SMALL_STATE(458)] = 15617,
  [SMALL_STATE(459)] = 15641,
  [SMALL_STATE(460)] = 15659,
  [SMALL_STATE(461)] = 15685,
  [SMALL_STATE(462)] = 15703,
  [SMALL_STATE(463)] = 15719,
  [SMALL_STATE(464)] = 15739,
  [SMALL_STATE(465)] = 15761,
  [SMALL_STATE(466)] = 15783,
  [SMALL_STATE(467)] = 15799,
  [SMALL_STATE(468)] = 15819,
  [SMALL_STATE(469)] = 15832,
  [SMALL_STATE(470)] = 15855,
  [SMALL_STATE(471)] = 15876,
  [SMALL_STATE(472)] = 15897,
  [SMALL_STATE(473)] = 15918,
  [SMALL_STATE(474)] = 15939,
  [SMALL_STATE(475)] = 15960,
  [SMALL_STATE(476)] = 15981,
  [SMALL_STATE(477)] = 16002,
  [SMALL_STATE(478)] = 16023,
  [SMALL_STATE(479)] = 16040,
  [SMALL_STATE(480)] = 16061,
  [SMALL_STATE(481)] = 16084,
  [SMALL_STATE(482)] = 16107,
  [SMALL_STATE(483)] = 16124,
  [SMALL_STATE(484)] = 16147,
  [SMALL_STATE(485)] = 16170,
  [SMALL_STATE(486)] = 16193,
  [SMALL_STATE(487)] = 16210,
  [SMALL_STATE(488)] = 16227,
  [SMALL_STATE(489)] = 16248,
  [SMALL_STATE(490)] = 16269,
  [SMALL_STATE(491)] = 16292,
  [SMALL_STATE(492)] = 16315,
  [SMALL_STATE(493)] = 16336,
  [SMALL_STATE(494)] = 16357,
  [SMALL_STATE(495)] = 16380,
  [SMALL_STATE(496)] = 16403,
  [SMALL_STATE(497)] = 16416,
  [SMALL_STATE(498)] = 16433,
  [SMALL_STATE(499)] = 16450,
  [SMALL_STATE(500)] = 16471,
  [SMALL_STATE(501)] = 16492,
  [SMALL_STATE(502)] = 16511,
  [SMALL_STATE(503)] = 16528,
  [SMALL_STATE(504)] = 16549,
  [SMALL_STATE(505)] = 16572,
  [SMALL_STATE(506)] = 16593,
  [SMALL_STATE(507)] = 16613,
  [SMALL_STATE(508)] = 16629,
  [SMALL_STATE(509)] = 16645,
  [SMALL_STATE(510)] = 16661,
  [SMALL_STATE(511)] = 16681,
  [SMALL_STATE(512)] = 16701,
  [SMALL_STATE(513)] = 16721,
  [SMALL_STATE(514)] = 16741,
  [SMALL_STATE(515)] = 16761,
  [SMALL_STATE(516)] = 16779,
  [SMALL_STATE(517)] = 16799,
  [SMALL_STATE(518)] = 16819,
  [SMALL_STATE(519)] = 16835,
  [SMALL_STATE(520)] = 16851,
  [SMALL_STATE(521)] = 16871,
  [SMALL_STATE(522)] = 16889,
  [SMALL_STATE(523)] = 16909,
  [SMALL_STATE(524)] = 16929,
  [SMALL_STATE(525)] = 16945,
  [SMALL_STATE(526)] = 16959,
  [SMALL_STATE(527)] = 16977,
  [SMALL_STATE(528)] = 16993,
  [SMALL_STATE(529)] = 17013,
  [SMALL_STATE(530)] = 17025,
  [SMALL_STATE(531)] = 17037,
  [SMALL_STATE(532)] = 17057,
  [SMALL_STATE(533)] = 17077,
  [SMALL_STATE(534)] = 17097,
  [SMALL_STATE(535)] = 17113,
  [SMALL_STATE(536)] = 17133,
  [SMALL_STATE(537)] = 17153,
  [SMALL_STATE(538)] = 17171,
  [SMALL_STATE(539)] = 17191,
  [SMALL_STATE(540)] = 17209,
  [SMALL_STATE(541)] = 17229,
  [SMALL_STATE(542)] = 17245,
  [SMALL_STATE(543)] = 17265,
  [SMALL_STATE(544)] = 17279,
  [SMALL_STATE(545)] = 17295,
  [SMALL_STATE(546)] = 17313,
  [SMALL_STATE(547)] = 17333,
  [SMALL_STATE(548)] = 17347,
  [SMALL_STATE(549)] = 17363,
  [SMALL_STATE(550)] = 17379,
  [SMALL_STATE(551)] = 17393,
  [SMALL_STATE(552)] = 17407,
  [SMALL_STATE(553)] = 17423,
  [SMALL_STATE(554)] = 17438,
  [SMALL_STATE(555)] = 17455,
  [SMALL_STATE(556)] = 17468,
  [SMALL_STATE(557)] = 17485,
  [SMALL_STATE(558)] = 17502,
  [SMALL_STATE(559)] = 17515,
  [SMALL_STATE(560)] = 17532,
  [SMALL_STATE(561)] = 17549,
  [SMALL_STATE(562)] = 17560,
  [SMALL_STATE(563)] = 17577,
  [SMALL_STATE(564)] = 17594,
  [SMALL_STATE(565)] = 17611,
  [SMALL_STATE(566)] = 17628,
  [SMALL_STATE(567)] = 17641,
  [SMALL_STATE(568)] = 17658,
  [SMALL_STATE(569)] = 17675,
  [SMALL_STATE(570)] = 17692,
  [SMALL_STATE(571)] = 17709,
  [SMALL_STATE(572)] = 17726,
  [SMALL_STATE(573)] = 17739,
  [SMALL_STATE(574)] = 17752,
  [SMALL_STATE(575)] = 17769,
  [SMALL_STATE(576)] = 17786,
  [SMALL_STATE(577)] = 17803,
  [SMALL_STATE(578)] = 17816,
  [SMALL_STATE(579)] = 17829,
  [SMALL_STATE(580)] = 17846,
  [SMALL_STATE(581)] = 17863,
  [SMALL_STATE(582)] = 17880,
  [SMALL_STATE(583)] = 17897,
  [SMALL_STATE(584)] = 17914,
  [SMALL_STATE(585)] = 17925,
  [SMALL_STATE(586)] = 17942,
  [SMALL_STATE(587)] = 17959,
  [SMALL_STATE(588)] = 17970,
  [SMALL_STATE(589)] = 17981,
  [SMALL_STATE(590)] = 17994,
  [SMALL_STATE(591)] = 18011,
  [SMALL_STATE(592)] = 18022,
  [SMALL_STATE(593)] = 18033,
  [SMALL_STATE(594)] = 18050,
  [SMALL_STATE(595)] = 18067,
  [SMALL_STATE(596)] = 18084,
  [SMALL_STATE(597)] = 18101,
  [SMALL_STATE(598)] = 18118,
  [SMALL_STATE(599)] = 18135,
  [SMALL_STATE(600)] = 18152,
  [SMALL_STATE(601)] = 18169,
  [SMALL_STATE(602)] = 18182,
  [SMALL_STATE(603)] = 18195,
  [SMALL_STATE(604)] = 18212,
  [SMALL_STATE(605)] = 18227,
  [SMALL_STATE(606)] = 18242,
  [SMALL_STATE(607)] = 18255,
  [SMALL_STATE(608)] = 18272,
  [SMALL_STATE(609)] = 18289,
  [SMALL_STATE(610)] = 18306,
  [SMALL_STATE(611)] = 18321,
  [SMALL_STATE(612)] = 18338,
  [SMALL_STATE(613)] = 18352,
  [SMALL_STATE(614)] = 18366,
  [SMALL_STATE(615)] = 18380,
  [SMALL_STATE(616)] = 18394,
  [SMALL_STATE(617)] = 18408,
  [SMALL_STATE(618)] = 18422,
  [SMALL_STATE(619)] = 18436,
  [SMALL_STATE(620)] = 18450,
  [SMALL_STATE(621)] = 18464,
  [SMALL_STATE(622)] = 18478,
  [SMALL_STATE(623)] = 18492,
  [SMALL_STATE(624)] = 18506,
  [SMALL_STATE(625)] = 18520,
  [SMALL_STATE(626)] = 18534,
  [SMALL_STATE(627)] = 18548,
  [SMALL_STATE(628)] = 18558,
  [SMALL_STATE(629)] = 18572,
  [SMALL_STATE(630)] = 18586,
  [SMALL_STATE(631)] = 18596,
  [SMALL_STATE(632)] = 18610,
  [SMALL_STATE(633)] = 18624,
  [SMALL_STATE(634)] = 18638,
  [SMALL_STATE(635)] = 18652,
  [SMALL_STATE(636)] = 18666,
  [SMALL_STATE(637)] = 18676,
  [SMALL_STATE(638)] = 18690,
  [SMALL_STATE(639)] = 18704,
  [SMALL_STATE(640)] = 18718,
  [SMALL_STATE(641)] = 18732,
  [SMALL_STATE(642)] = 18746,
  [SMALL_STATE(643)] = 18760,
  [SMALL_STATE(644)] = 18774,
  [SMALL_STATE(645)] = 18784,
  [SMALL_STATE(646)] = 18798,
  [SMALL_STATE(647)] = 18812,
  [SMALL_STATE(648)] = 18826,
  [SMALL_STATE(649)] = 18840,
  [SMALL_STATE(650)] = 18854,
  [SMALL_STATE(651)] = 18868,
  [SMALL_STATE(652)] = 18882,
  [SMALL_STATE(653)] = 18892,
  [SMALL_STATE(654)] = 18906,
  [SMALL_STATE(655)] = 18920,
  [SMALL_STATE(656)] = 18934,
  [SMALL_STATE(657)] = 18948,
  [SMALL_STATE(658)] = 18962,
  [SMALL_STATE(659)] = 18976,
  [SMALL_STATE(660)] = 18990,
  [SMALL_STATE(661)] = 19000,
  [SMALL_STATE(662)] = 19014,
  [SMALL_STATE(663)] = 19028,
  [SMALL_STATE(664)] = 19042,
  [SMALL_STATE(665)] = 19056,
  [SMALL_STATE(666)] = 19070,
  [SMALL_STATE(667)] = 19080,
  [SMALL_STATE(668)] = 19094,
  [SMALL_STATE(669)] = 19108,
  [SMALL_STATE(670)] = 19122,
  [SMALL_STATE(671)] = 19136,
  [SMALL_STATE(672)] = 19150,
  [SMALL_STATE(673)] = 19164,
  [SMALL_STATE(674)] = 19178,
  [SMALL_STATE(675)] = 19192,
  [SMALL_STATE(676)] = 19206,
  [SMALL_STATE(677)] = 19220,
  [SMALL_STATE(678)] = 19234,
  [SMALL_STATE(679)] = 19244,
  [SMALL_STATE(680)] = 19254,
  [SMALL_STATE(681)] = 19268,
  [SMALL_STATE(682)] = 19282,
  [SMALL_STATE(683)] = 19296,
  [SMALL_STATE(684)] = 19310,
  [SMALL_STATE(685)] = 19324,
  [SMALL_STATE(686)] = 19338,
  [SMALL_STATE(687)] = 19352,
  [SMALL_STATE(688)] = 19366,
  [SMALL_STATE(689)] = 19380,
  [SMALL_STATE(690)] = 19394,
  [SMALL_STATE(691)] = 19408,
  [SMALL_STATE(692)] = 19422,
  [SMALL_STATE(693)] = 19436,
  [SMALL_STATE(694)] = 19450,
  [SMALL_STATE(695)] = 19464,
  [SMALL_STATE(696)] = 19478,
  [SMALL_STATE(697)] = 19492,
  [SMALL_STATE(698)] = 19506,
  [SMALL_STATE(699)] = 19520,
  [SMALL_STATE(700)] = 19534,
  [SMALL_STATE(701)] = 19548,
  [SMALL_STATE(702)] = 19562,
  [SMALL_STATE(703)] = 19576,
  [SMALL_STATE(704)] = 19590,
  [SMALL_STATE(705)] = 19604,
  [SMALL_STATE(706)] = 19614,
  [SMALL_STATE(707)] = 19628,
  [SMALL_STATE(708)] = 19642,
  [SMALL_STATE(709)] = 19656,
  [SMALL_STATE(710)] = 19670,
  [SMALL_STATE(711)] = 19684,
  [SMALL_STATE(712)] = 19698,
  [SMALL_STATE(713)] = 19712,
  [SMALL_STATE(714)] = 19726,
  [SMALL_STATE(715)] = 19740,
  [SMALL_STATE(716)] = 19754,
  [SMALL_STATE(717)] = 19768,
  [SMALL_STATE(718)] = 19782,
  [SMALL_STATE(719)] = 19796,
  [SMALL_STATE(720)] = 19810,
  [SMALL_STATE(721)] = 19824,
  [SMALL_STATE(722)] = 19838,
  [SMALL_STATE(723)] = 19852,
  [SMALL_STATE(724)] = 19866,
  [SMALL_STATE(725)] = 19880,
  [SMALL_STATE(726)] = 19894,
  [SMALL_STATE(727)] = 19908,
  [SMALL_STATE(728)] = 19920,
  [SMALL_STATE(729)] = 19934,
  [SMALL_STATE(730)] = 19948,
  [SMALL_STATE(731)] = 19962,
  [SMALL_STATE(732)] = 19976,
  [SMALL_STATE(733)] = 19990,
  [SMALL_STATE(734)] = 20004,
  [SMALL_STATE(735)] = 20018,
  [SMALL_STATE(736)] = 20028,
  [SMALL_STATE(737)] = 20042,
  [SMALL_STATE(738)] = 20052,
  [SMALL_STATE(739)] = 20066,
  [SMALL_STATE(740)] = 20080,
  [SMALL_STATE(741)] = 20094,
  [SMALL_STATE(742)] = 20108,
  [SMALL_STATE(743)] = 20122,
  [SMALL_STATE(744)] = 20131,
  [SMALL_STATE(745)] = 20142,
  [SMALL_STATE(746)] = 20153,
  [SMALL_STATE(747)] = 20164,
  [SMALL_STATE(748)] = 20175,
  [SMALL_STATE(749)] = 20186,
  [SMALL_STATE(750)] = 20195,
  [SMALL_STATE(751)] = 20204,
  [SMALL_STATE(752)] = 20215,
  [SMALL_STATE(753)] = 20226,
  [SMALL_STATE(754)] = 20235,
  [SMALL_STATE(755)] = 20244,
  [SMALL_STATE(756)] = 20253,
  [SMALL_STATE(757)] = 20264,
  [SMALL_STATE(758)] = 20275,
  [SMALL_STATE(759)] = 20286,
  [SMALL_STATE(760)] = 20297,
  [SMALL_STATE(761)] = 20308,
  [SMALL_STATE(762)] = 20317,
  [SMALL_STATE(763)] = 20328,
  [SMALL_STATE(764)] = 20337,
  [SMALL_STATE(765)] = 20346,
  [SMALL_STATE(766)] = 20355,
  [SMALL_STATE(767)] = 20364,
  [SMALL_STATE(768)] = 20375,
  [SMALL_STATE(769)] = 20384,
  [SMALL_STATE(770)] = 20393,
  [SMALL_STATE(771)] = 20404,
  [SMALL_STATE(772)] = 20415,
  [SMALL_STATE(773)] = 20426,
  [SMALL_STATE(774)] = 20435,
  [SMALL_STATE(775)] = 20446,
  [SMALL_STATE(776)] = 20455,
  [SMALL_STATE(777)] = 20466,
  [SMALL_STATE(778)] = 20477,
  [SMALL_STATE(779)] = 20486,
  [SMALL_STATE(780)] = 20495,
  [SMALL_STATE(781)] = 20504,
  [SMALL_STATE(782)] = 20513,
  [SMALL_STATE(783)] = 20522,
  [SMALL_STATE(784)] = 20533,
  [SMALL_STATE(785)] = 20542,
  [SMALL_STATE(786)] = 20551,
  [SMALL_STATE(787)] = 20562,
  [SMALL_STATE(788)] = 20573,
  [SMALL_STATE(789)] = 20584,
  [SMALL_STATE(790)] = 20593,
  [SMALL_STATE(791)] = 20604,
  [SMALL_STATE(792)] = 20615,
  [SMALL_STATE(793)] = 20626,
  [SMALL_STATE(794)] = 20637,
  [SMALL_STATE(795)] = 20646,
  [SMALL_STATE(796)] = 20655,
  [SMALL_STATE(797)] = 20664,
  [SMALL_STATE(798)] = 20675,
  [SMALL_STATE(799)] = 20686,
  [SMALL_STATE(800)] = 20697,
  [SMALL_STATE(801)] = 20708,
  [SMALL_STATE(802)] = 20719,
  [SMALL_STATE(803)] = 20730,
  [SMALL_STATE(804)] = 20739,
  [SMALL_STATE(805)] = 20750,
  [SMALL_STATE(806)] = 20761,
  [SMALL_STATE(807)] = 20772,
  [SMALL_STATE(808)] = 20783,
  [SMALL_STATE(809)] = 20792,
  [SMALL_STATE(810)] = 20803,
  [SMALL_STATE(811)] = 20812,
  [SMALL_STATE(812)] = 20821,
  [SMALL_STATE(813)] = 20830,
  [SMALL_STATE(814)] = 20838,
  [SMALL_STATE(815)] = 20846,
  [SMALL_STATE(816)] = 20854,
  [SMALL_STATE(817)] = 20862,
  [SMALL_STATE(818)] = 20870,
  [SMALL_STATE(819)] = 20878,
  [SMALL_STATE(820)] = 20886,
  [SMALL_STATE(821)] = 20894,
  [SMALL_STATE(822)] = 20902,
  [SMALL_STATE(823)] = 20910,
  [SMALL_STATE(824)] = 20918,
  [SMALL_STATE(825)] = 20926,
  [SMALL_STATE(826)] = 20934,
  [SMALL_STATE(827)] = 20942,
  [SMALL_STATE(828)] = 20950,
  [SMALL_STATE(829)] = 20958,
  [SMALL_STATE(830)] = 20966,
  [SMALL_STATE(831)] = 20974,
  [SMALL_STATE(832)] = 20982,
  [SMALL_STATE(833)] = 20990,
  [SMALL_STATE(834)] = 20998,
  [SMALL_STATE(835)] = 21006,
  [SMALL_STATE(836)] = 21014,
  [SMALL_STATE(837)] = 21022,
  [SMALL_STATE(838)] = 21030,
  [SMALL_STATE(839)] = 21038,
  [SMALL_STATE(840)] = 21046,
  [SMALL_STATE(841)] = 21054,
  [SMALL_STATE(842)] = 21062,
  [SMALL_STATE(843)] = 21070,
  [SMALL_STATE(844)] = 21078,
  [SMALL_STATE(845)] = 21086,
  [SMALL_STATE(846)] = 21094,
  [SMALL_STATE(847)] = 21102,
  [SMALL_STATE(848)] = 21110,
  [SMALL_STATE(849)] = 21118,
  [SMALL_STATE(850)] = 21126,
  [SMALL_STATE(851)] = 21134,
  [SMALL_STATE(852)] = 21142,
  [SMALL_STATE(853)] = 21150,
  [SMALL_STATE(854)] = 21158,
  [SMALL_STATE(855)] = 21166,
  [SMALL_STATE(856)] = 21174,
  [SMALL_STATE(857)] = 21182,
  [SMALL_STATE(858)] = 21190,
  [SMALL_STATE(859)] = 21198,
  [SMALL_STATE(860)] = 21206,
  [SMALL_STATE(861)] = 21214,
  [SMALL_STATE(862)] = 21222,
  [SMALL_STATE(863)] = 21230,
  [SMALL_STATE(864)] = 21238,
  [SMALL_STATE(865)] = 21246,
  [SMALL_STATE(866)] = 21254,
  [SMALL_STATE(867)] = 21262,
  [SMALL_STATE(868)] = 21270,
  [SMALL_STATE(869)] = 21278,
  [SMALL_STATE(870)] = 21286,
  [SMALL_STATE(871)] = 21294,
  [SMALL_STATE(872)] = 21302,
  [SMALL_STATE(873)] = 21310,
  [SMALL_STATE(874)] = 21318,
  [SMALL_STATE(875)] = 21326,
  [SMALL_STATE(876)] = 21334,
  [SMALL_STATE(877)] = 21342,
  [SMALL_STATE(878)] = 21350,
  [SMALL_STATE(879)] = 21358,
  [SMALL_STATE(880)] = 21366,
  [SMALL_STATE(881)] = 21374,
  [SMALL_STATE(882)] = 21382,
  [SMALL_STATE(883)] = 21390,
  [SMALL_STATE(884)] = 21398,
  [SMALL_STATE(885)] = 21406,
  [SMALL_STATE(886)] = 21414,
  [SMALL_STATE(887)] = 21422,
  [SMALL_STATE(888)] = 21430,
  [SMALL_STATE(889)] = 21438,
  [SMALL_STATE(890)] = 21446,
  [SMALL_STATE(891)] = 21454,
  [SMALL_STATE(892)] = 21462,
  [SMALL_STATE(893)] = 21470,
  [SMALL_STATE(894)] = 21478,
  [SMALL_STATE(895)] = 21486,
  [SMALL_STATE(896)] = 21494,
  [SMALL_STATE(897)] = 21502,
  [SMALL_STATE(898)] = 21510,
  [SMALL_STATE(899)] = 21518,
  [SMALL_STATE(900)] = 21526,
  [SMALL_STATE(901)] = 21534,
  [SMALL_STATE(902)] = 21542,
  [SMALL_STATE(903)] = 21550,
  [SMALL_STATE(904)] = 21558,
  [SMALL_STATE(905)] = 21566,
  [SMALL_STATE(906)] = 21574,
  [SMALL_STATE(907)] = 21582,
  [SMALL_STATE(908)] = 21590,
  [SMALL_STATE(909)] = 21598,
  [SMALL_STATE(910)] = 21606,
  [SMALL_STATE(911)] = 21614,
  [SMALL_STATE(912)] = 21622,
  [SMALL_STATE(913)] = 21630,
  [SMALL_STATE(914)] = 21638,
  [SMALL_STATE(915)] = 21646,
  [SMALL_STATE(916)] = 21654,
  [SMALL_STATE(917)] = 21662,
  [SMALL_STATE(918)] = 21670,
  [SMALL_STATE(919)] = 21678,
  [SMALL_STATE(920)] = 21686,
  [SMALL_STATE(921)] = 21694,
  [SMALL_STATE(922)] = 21702,
  [SMALL_STATE(923)] = 21710,
  [SMALL_STATE(924)] = 21718,
  [SMALL_STATE(925)] = 21726,
  [SMALL_STATE(926)] = 21734,
  [SMALL_STATE(927)] = 21742,
  [SMALL_STATE(928)] = 21750,
  [SMALL_STATE(929)] = 21758,
  [SMALL_STATE(930)] = 21766,
  [SMALL_STATE(931)] = 21774,
  [SMALL_STATE(932)] = 21782,
  [SMALL_STATE(933)] = 21790,
  [SMALL_STATE(934)] = 21798,
  [SMALL_STATE(935)] = 21806,
  [SMALL_STATE(936)] = 21814,
  [SMALL_STATE(937)] = 21822,
  [SMALL_STATE(938)] = 21830,
  [SMALL_STATE(939)] = 21838,
  [SMALL_STATE(940)] = 21846,
  [SMALL_STATE(941)] = 21854,
  [SMALL_STATE(942)] = 21862,
  [SMALL_STATE(943)] = 21870,
  [SMALL_STATE(944)] = 21878,
  [SMALL_STATE(945)] = 21886,
  [SMALL_STATE(946)] = 21894,
  [SMALL_STATE(947)] = 21902,
  [SMALL_STATE(948)] = 21910,
  [SMALL_STATE(949)] = 21918,
  [SMALL_STATE(950)] = 21926,
  [SMALL_STATE(951)] = 21934,
  [SMALL_STATE(952)] = 21942,
  [SMALL_STATE(953)] = 21950,
  [SMALL_STATE(954)] = 21958,
  [SMALL_STATE(955)] = 21966,
  [SMALL_STATE(956)] = 21974,
  [SMALL_STATE(957)] = 21982,
  [SMALL_STATE(958)] = 21990,
  [SMALL_STATE(959)] = 21998,
  [SMALL_STATE(960)] = 22006,
  [SMALL_STATE(961)] = 22014,
  [SMALL_STATE(962)] = 22022,
  [SMALL_STATE(963)] = 22030,
  [SMALL_STATE(964)] = 22038,
  [SMALL_STATE(965)] = 22046,
  [SMALL_STATE(966)] = 22054,
  [SMALL_STATE(967)] = 22062,
  [SMALL_STATE(968)] = 22070,
  [SMALL_STATE(969)] = 22078,
  [SMALL_STATE(970)] = 22086,
  [SMALL_STATE(971)] = 22094,
  [SMALL_STATE(972)] = 22102,
  [SMALL_STATE(973)] = 22110,
  [SMALL_STATE(974)] = 22118,
  [SMALL_STATE(975)] = 22126,
  [SMALL_STATE(976)] = 22134,
  [SMALL_STATE(977)] = 22142,
  [SMALL_STATE(978)] = 22150,
  [SMALL_STATE(979)] = 22158,
  [SMALL_STATE(980)] = 22166,
  [SMALL_STATE(981)] = 22174,
  [SMALL_STATE(982)] = 22182,
  [SMALL_STATE(983)] = 22190,
  [SMALL_STATE(984)] = 22198,
  [SMALL_STATE(985)] = 22206,
  [SMALL_STATE(986)] = 22214,
  [SMALL_STATE(987)] = 22222,
  [SMALL_STATE(988)] = 22230,
  [SMALL_STATE(989)] = 22238,
  [SMALL_STATE(990)] = 22246,
  [SMALL_STATE(991)] = 22254,
  [SMALL_STATE(992)] = 22262,
  [SMALL_STATE(993)] = 22270,
  [SMALL_STATE(994)] = 22278,
  [SMALL_STATE(995)] = 22286,
  [SMALL_STATE(996)] = 22294,
  [SMALL_STATE(997)] = 22302,
  [SMALL_STATE(998)] = 22310,
  [SMALL_STATE(999)] = 22318,
  [SMALL_STATE(1000)] = 22326,
  [SMALL_STATE(1001)] = 22334,
  [SMALL_STATE(1002)] = 22342,
  [SMALL_STATE(1003)] = 22350,
  [SMALL_STATE(1004)] = 22358,
  [SMALL_STATE(1005)] = 22366,
  [SMALL_STATE(1006)] = 22374,
  [SMALL_STATE(1007)] = 22382,
  [SMALL_STATE(1008)] = 22390,
  [SMALL_STATE(1009)] = 22398,
  [SMALL_STATE(1010)] = 22406,
  [SMALL_STATE(1011)] = 22414,
  [SMALL_STATE(1012)] = 22422,
  [SMALL_STATE(1013)] = 22430,
  [SMALL_STATE(1014)] = 22438,
  [SMALL_STATE(1015)] = 22446,
  [SMALL_STATE(1016)] = 22454,
  [SMALL_STATE(1017)] = 22462,
  [SMALL_STATE(1018)] = 22470,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 26),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 26),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 17),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 17),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 21),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 21),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 8, .production_id = 51),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 9, .production_id = 52),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7, .production_id = 49),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6, .production_id = 47),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 40),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 40),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 8),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 33),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 33),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 24),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 24),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(979),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(997),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1003),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 12),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 12),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(999),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 31),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(995),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 19),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 32),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 38),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 12),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 12),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 13),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 27),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 41),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(801),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(797),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(865),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(546),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(746),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(745),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(1016),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(516),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 29),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 28),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 28),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 12),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 45),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 4),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 4, .production_id = 16),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 4, .production_id = 16),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 20),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 20),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 45),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 4),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 45),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 29),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 3, .production_id = 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 3, .production_id = 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 50),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 50),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 14),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 14),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 46),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 46),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_int, 1),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 3, .production_id = 10),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 29),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 5, .production_id = 25),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(980),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(606),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(998),
  [923] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(360),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(368),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(366),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 29),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(316),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 2),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(365),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(398),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1091] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 35),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 35),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 18),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 18),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(317),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(378),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [1155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(560),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 29),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 1, .production_id = 9),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(424),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [1187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(565),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 15),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [1242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(559),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 23),
  [1251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 23), SHIFT_REPEAT(161),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [1262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(557),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [1271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(506),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(501),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 48),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 31),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 2),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 44),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 28),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 34),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 44),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 36),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 2),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 31),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 42),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_with, 1),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 37),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 43),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(991),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [1665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 30),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(950),
  [1771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(951),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1785] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
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
