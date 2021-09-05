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
#define STATE_COUNT 811
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 242
#define ALIAS_COUNT 0
#define TOKEN_COUNT 130
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
  sym__field = 200,
  sym_all_fields = 201,
  sym_field = 202,
  sym_function_call = 203,
  sym_invocation = 204,
  sym__count_function = 205,
  sym__function_param = 206,
  sym__function_params = 207,
  sym__alias = 208,
  sym_from = 209,
  sym_table_expression = 210,
  sym_index_hint = 211,
  sym_join = 212,
  sym_lateral_join = 213,
  sym_where = 214,
  sym_group_by = 215,
  sym__having = 216,
  sym_order_by = 217,
  sym_order_expression = 218,
  sym_limit = 219,
  sym_offset = 220,
  sym_where_expression = 221,
  sym_predicate = 222,
  sym__expression = 223,
  sym_subquery = 224,
  sym_list = 225,
  sym_literal = 226,
  sym__literal_string = 227,
  sym_identifier = 228,
  aux_sym_select_expression_repeat1 = 229,
  aux_sym_alter_table_repeat1 = 230,
  aux_sym__column_list_without_order_repeat1 = 231,
  aux_sym__table_references_repeat1 = 232,
  aux_sym_assignment_list_repeat1 = 233,
  aux_sym_table_options_repeat1 = 234,
  aux_sym_column_definitions_repeat1 = 235,
  aux_sym_constraints_repeat1 = 236,
  aux_sym_column_list_repeat1 = 237,
  aux_sym__function_params_repeat1 = 238,
  aux_sym_from_repeat1 = 239,
  aux_sym_order_expression_repeat1 = 240,
  aux_sym_list_repeat1 = 241,
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
  [sym__field] = "_field",
  [sym_all_fields] = "all_fields",
  [sym_field] = "field",
  [sym_function_call] = "function_call",
  [sym_invocation] = "invocation",
  [sym__count_function] = "_count_function",
  [sym__function_param] = "_function_param",
  [sym__function_params] = "_function_params",
  [sym__alias] = "_alias",
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
  [aux_sym_select_expression_repeat1] = "select_expression_repeat1",
  [aux_sym_alter_table_repeat1] = "alter_table_repeat1",
  [aux_sym__column_list_without_order_repeat1] = "_column_list_without_order_repeat1",
  [aux_sym__table_references_repeat1] = "_table_references_repeat1",
  [aux_sym_assignment_list_repeat1] = "assignment_list_repeat1",
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
  [aux_sym_column_definitions_repeat1] = "column_definitions_repeat1",
  [aux_sym_constraints_repeat1] = "constraints_repeat1",
  [aux_sym_column_list_repeat1] = "column_list_repeat1",
  [aux_sym__function_params_repeat1] = "_function_params_repeat1",
  [aux_sym_from_repeat1] = "from_repeat1",
  [aux_sym_order_expression_repeat1] = "order_expression_repeat1",
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
  [sym__field] = sym__field,
  [sym_all_fields] = sym_all_fields,
  [sym_field] = sym_field,
  [sym_function_call] = sym_function_call,
  [sym_invocation] = sym_invocation,
  [sym__count_function] = sym__count_function,
  [sym__function_param] = sym__function_param,
  [sym__function_params] = sym__function_params,
  [sym__alias] = sym__alias,
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
  [aux_sym_select_expression_repeat1] = aux_sym_select_expression_repeat1,
  [aux_sym_alter_table_repeat1] = aux_sym_alter_table_repeat1,
  [aux_sym__column_list_without_order_repeat1] = aux_sym__column_list_without_order_repeat1,
  [aux_sym__table_references_repeat1] = aux_sym__table_references_repeat1,
  [aux_sym_assignment_list_repeat1] = aux_sym_assignment_list_repeat1,
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
  [aux_sym_column_definitions_repeat1] = aux_sym_column_definitions_repeat1,
  [aux_sym_constraints_repeat1] = aux_sym_constraints_repeat1,
  [aux_sym_column_list_repeat1] = aux_sym_column_list_repeat1,
  [aux_sym__function_params_repeat1] = aux_sym__function_params_repeat1,
  [aux_sym_from_repeat1] = aux_sym_from_repeat1,
  [aux_sym_order_expression_repeat1] = aux_sym_order_expression_repeat1,
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
  [sym__field] = {
    .visible = false,
    .named = true,
  },
  [sym_all_fields] = {
    .visible = true,
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
  [sym__alias] = {
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
  [aux_sym_select_expression_repeat1] = {
    .visible = false,
    .named = false,
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
  [aux_sym__function_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_expression_repeat1] = {
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
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 2, .length = 1},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 3},
  [21] = {.index = 32, .length = 1},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 3},
  [25] = {.index = 40, .length = 1},
  [26] = {.index = 41, .length = 1},
  [27] = {.index = 42, .length = 2},
  [28] = {.index = 44, .length = 1},
  [29] = {.index = 45, .length = 1},
  [30] = {.index = 46, .length = 3},
  [31] = {.index = 49, .length = 1},
  [32] = {.index = 50, .length = 2},
  [33] = {.index = 52, .length = 1},
  [34] = {.index = 53, .length = 2},
  [35] = {.index = 55, .length = 3},
  [36] = {.index = 58, .length = 2},
  [37] = {.index = 60, .length = 1},
  [38] = {.index = 61, .length = 2},
  [39] = {.index = 63, .length = 2},
  [40] = {.index = 65, .length = 1},
  [41] = {.index = 66, .length = 1},
  [42] = {.index = 67, .length = 1},
  [43] = {.index = 68, .length = 1},
  [44] = {.index = 69, .length = 2},
  [45] = {.index = 71, .length = 1},
  [46] = {.index = 72, .length = 2},
  [47] = {.index = 74, .length = 1},
  [48] = {.index = 75, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [2] =
    {field_name, 0},
  [3] =
    {field_alias, 1, .inherited = true},
  [4] =
    {field_alias, 0},
  [5] =
    {field_alias, 1},
  [6] =
    {field_alias, 1, .inherited = true},
    {field_alias, 2, .inherited = true},
  [8] =
    {field_alias, 0, .inherited = true},
    {field_alias, 1, .inherited = true},
  [10] =
    {field_parameter, 0},
  [11] =
    {field_table_alias, 0},
  [12] =
    {field_name, 2},
    {field_table_alias, 0},
  [14] =
    {field_name, 2},
    {field_schema, 0},
  [16] =
    {field_name, 0},
    {field_table_alias, 1},
  [18] =
    {field_name, 0},
    {field_parameter, 2},
  [20] =
    {field_alias, 2, .inherited = true},
  [21] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [23] =
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [25] =
    {field_name, 0},
    {field_table_alias, 2},
  [27] =
    {field_name, 0},
    {field_parameter, 3},
  [29] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [32] =
    {field_parameter, 1},
  [33] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [35] =
    {field_schema, 0},
    {field_table_alias, 2},
  [37] =
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [40] =
    {field_index_name, 3},
  [41] =
    {field_name, 1, .inherited = true},
  [42] =
    {field_name, 0},
    {field_type, 1},
  [44] =
    {field_schema, 2},
  [45] =
    {field_name, 2},
  [46] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 3},
  [49] =
    {field_name, 0, .inherited = true},
  [50] =
    {field_name, 0},
    {field_value, 2},
  [52] =
    {field_name, 3},
  [53] =
    {field_new_name, 3},
    {field_old_name, 1},
  [55] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 4},
  [58] =
    {field_name, 0},
    {field_parameter, 4},
  [60] =
    {field_index_name, 5},
  [61] =
    {field_name, 2},
    {field_type, 4},
  [63] =
    {field_new_name, 4},
    {field_old_name, 2},
  [65] =
    {field_name, 1},
  [66] =
    {field_size, 2},
  [67] =
    {field_precision, 2},
  [68] =
    {field_alias, 3},
  [69] =
    {field_name, 2},
    {field_type, 6},
  [71] =
    {field_alias, 4},
  [72] =
    {field_precision, 2},
    {field_scale, 4},
  [74] =
    {field_alias, 5},
  [75] =
    {field_alias, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [17] = {
    [0] = sym_identifier,
  },
  [41] = {
    [2] = sym_literal,
  },
  [42] = {
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
      if (eof) ADVANCE(806);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '%') ADVANCE(972);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '+') ADVANCE(969);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(190);
      if (lookahead == 'C') ADVANCE(37);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'E') ADVANCE(395);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == 'G') ADVANCE(138);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == 'J') ADVANCE(285);
      if (lookahead == 'K') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(280);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(316);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(182);
      if (lookahead == 'X') ADVANCE(237);
      if (lookahead == 'Z') ADVANCE(291);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == 'd') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'j') ADVANCE(658);
      if (lookahead == 'k') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 'p') ADVANCE(690);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'u') ADVANCE(675);
      if (lookahead == 'v') ADVANCE(417);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(611);
      if (lookahead == 'z') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(959);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(452);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(453);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(972);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '+') ADVANCE(969);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(294);
      if (lookahead == 'I') ADVANCE(262);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(283);
      if (lookahead == 'O') ADVANCE(253);
      if (lookahead == 'P') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(340);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == 'n') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(627);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(972);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '+') ADVANCE(969);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(263);
      if (lookahead == 'F') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(319);
      if (lookahead == 'I') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(304);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(670);
      if (lookahead == 'g') ADVANCE(693);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(678);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(785)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(972);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '+') ADVANCE(969);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(264);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'I') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(168);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(787)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1068);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1113);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == 't') ADVANCE(1197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(784)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1068);
      if (lookahead == 'D') ADVANCE(1040);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1113);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'd') ADVANCE(1155);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == 't') ADVANCE(1197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(788)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1068);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1113);
      if (lookahead == 'S') ADVANCE(1023);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == 's') ADVANCE(1138);
      if (lookahead == 't') ADVANCE(1197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(786)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1113);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == 't') ADVANCE(1197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(789)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'F') ADVANCE(1084);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(793)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(211);
      if (lookahead == 'B') ADVANCE(190);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(294);
      if (lookahead == 'G') ADVANCE(138);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'J') ADVANCE(285);
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'M') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(254);
      if (lookahead == 'P') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(128);
      if (lookahead == 'S') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(182);
      if (lookahead == 'X') ADVANCE(237);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'j') ADVANCE(658);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(659);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == 'u') ADVANCE(675);
      if (lookahead == 'v') ADVANCE(444);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(798)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(799)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'F') ADVANCE(1084);
      if (lookahead == 'W') ADVANCE(1043);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1199);
      if (lookahead == 'w') ADVANCE(1158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(794)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'C') ADVANCE(1083);
      if (lookahead == 'F') ADVANCE(1073);
      if (lookahead == 'G') ADVANCE(1087);
      if (lookahead == 'I') ADVANCE(1062);
      if (lookahead == 'J') ADVANCE(1072);
      if (lookahead == 'L') ADVANCE(1016);
      if (lookahead == 'O') ADVANCE(1077);
      if (lookahead == 'R') ADVANCE(1038);
      if (lookahead == 'U') ADVANCE(1096);
      if (lookahead == 'W') ADVANCE(1035);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'c') ADVANCE(1198);
      if (lookahead == 'f') ADVANCE(1188);
      if (lookahead == 'g') ADVANCE(1202);
      if (lookahead == 'i') ADVANCE(1177);
      if (lookahead == 'j') ADVANCE(1187);
      if (lookahead == 'l') ADVANCE(1131);
      if (lookahead == 'o') ADVANCE(1192);
      if (lookahead == 'r') ADVANCE(1153);
      if (lookahead == 'u') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(791)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'C') ADVANCE(1083);
      if (lookahead == 'F') ADVANCE(1073);
      if (lookahead == 'G') ADVANCE(1087);
      if (lookahead == 'I') ADVANCE(1062);
      if (lookahead == 'J') ADVANCE(1072);
      if (lookahead == 'L') ADVANCE(1016);
      if (lookahead == 'O') ADVANCE(1077);
      if (lookahead == 'R') ADVANCE(1038);
      if (lookahead == 'U') ADVANCE(1096);
      if (lookahead == 'W') ADVANCE(1034);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'c') ADVANCE(1198);
      if (lookahead == 'f') ADVANCE(1188);
      if (lookahead == 'g') ADVANCE(1202);
      if (lookahead == 'i') ADVANCE(1177);
      if (lookahead == 'j') ADVANCE(1187);
      if (lookahead == 'l') ADVANCE(1131);
      if (lookahead == 'o') ADVANCE(1192);
      if (lookahead == 'r') ADVANCE(1153);
      if (lookahead == 'u') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(790)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'L') ADVANCE(1037);
      if (lookahead == 'O') ADVANCE(1077);
      if (lookahead == 'W') ADVANCE(1035);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'l') ADVANCE(1152);
      if (lookahead == 'o') ADVANCE(1192);
      if (lookahead == 'w') ADVANCE(1150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(795)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'F') ADVANCE(1073);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'U') ADVANCE(1093);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead == 'u') ADVANCE(1208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'D') ADVANCE(1022);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'd') ADVANCE(1137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(803)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1074);
      if (lookahead == 'K') ADVANCE(1021);
      if (lookahead == 'P') ADVANCE(1085);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1189);
      if (lookahead == 'k') ADVANCE(1136);
      if (lookahead == 'p') ADVANCE(1200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(792)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1075);
      if (lookahead == 'T') ADVANCE(1067);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1190);
      if (lookahead == 't') ADVANCE(1182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(802)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'I') ADVANCE(1028);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(800)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'I') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(804)
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(1007);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(801)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(100);
      if (lookahead == '3') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(474);
      if (lookahead == '3') ADVANCE(475);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(976);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(335);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(335);
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(136);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(221);
      if (lookahead == 'O') ADVANCE(305);
      if (lookahead == 'R') ADVANCE(289);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(393);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'I') ADVANCE(255);
      if (lookahead == 'O') ADVANCE(276);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(239);
      if (lookahead == 'I') ADVANCE(242);
      if (lookahead == 'O') ADVANCE(902);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'Y') ADVANCE(303);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(238);
      if (lookahead == 'I') ADVANCE(249);
      if (lookahead == 'O') ADVANCE(902);
      if (lookahead == 'Y') ADVANCE(303);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(233);
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(899);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(899);
      if (lookahead == 'E') ADVANCE(941);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(940);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(904);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(307);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(349);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(341);
      if (lookahead == 'O') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(287);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(349);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(287);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(389);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'N') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(227);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'P') ADVANCE(227);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(302);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(226);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(241);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(215);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(216);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(217);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(228);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(317);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(218);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(259);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(219);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(312);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(321);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(306);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead == 'R') ADVANCE(287);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(245);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(375);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(377);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(207);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(381);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(240);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(382);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(402);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(403);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(229);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(231);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(184);
      if (lookahead == 'E') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(838);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(925);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(839);
      END_STATE();
    case 86:
      if (lookahead == 'C') ADVANCE(193);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'L') ADVANCE(160);
      if (lookahead == 'S') ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == 'C') ADVANCE(187);
      if (lookahead == 'Y') ADVANCE(199);
      END_STATE();
    case 88:
      if (lookahead == 'C') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(358);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(361);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(126);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(194);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(326);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(385);
      END_STATE();
    case 96:
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(856);
      END_STATE();
    case 97:
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(856);
      if (lookahead == 'U') ADVANCE(368);
      if (lookahead == 'V') ADVANCE(171);
      END_STATE();
    case 98:
      if (lookahead == 'D') ADVANCE(848);
      END_STATE();
    case 99:
      if (lookahead == 'D') ADVANCE(870);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(954);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(955);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(851);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(125);
      END_STATE();
    case 104:
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'N') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(157);
      if (lookahead == 'T') ADVANCE(920);
      END_STATE();
    case 105:
      if (lookahead == 'D') ADVANCE(150);
      END_STATE();
    case 106:
      if (lookahead == 'D') ADVANCE(74);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(398);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(240);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(176);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(879);
      if (lookahead == 'I') ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(394);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(948);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(911);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(900);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(950);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(913);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(875);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(849);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(833);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(845);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(809);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(927);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(901);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(812);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(891);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(811);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(943);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(176);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(225);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(947);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(399);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(223);
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'I') ADVANCE(250);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(342);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(324);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead == 'R') ADVANCE(290);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(309);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(330);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(244);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(331);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(311);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(374);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(357);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(267);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(313);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(325);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(314);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(339);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(376);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(347);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(247);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(275);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(333);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 166:
      if (lookahead == 'F') ADVANCE(885);
      if (lookahead == 'N') ADVANCE(868);
      END_STATE();
    case 167:
      if (lookahead == 'F') ADVANCE(170);
      if (lookahead == 'N') ADVANCE(831);
      if (lookahead == 'R') ADVANCE(872);
      if (lookahead == 'U') ADVANCE(384);
      if (lookahead == 'W') ADVANCE(279);
      END_STATE();
    case 168:
      if (lookahead == 'F') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(871);
      END_STATE();
    case 169:
      if (lookahead == 'F') ADVANCE(351);
      END_STATE();
    case 170:
      if (lookahead == 'F') ADVANCE(348);
      END_STATE();
    case 171:
      if (lookahead == 'G') ADVANCE(866);
      END_STATE();
    case 172:
      if (lookahead == 'G') ADVANCE(202);
      END_STATE();
    case 173:
      if (lookahead == 'G') ADVANCE(877);
      END_STATE();
    case 174:
      if (lookahead == 'G') ADVANCE(837);
      END_STATE();
    case 175:
      if (lookahead == 'G') ADVANCE(934);
      END_STATE();
    case 176:
      if (lookahead == 'G') ADVANCE(186);
      END_STATE();
    case 177:
      if (lookahead == 'G') ADVANCE(322);
      if (lookahead == 'M') ADVANCE(153);
      END_STATE();
    case 178:
      if (lookahead == 'G') ADVANCE(158);
      END_STATE();
    case 179:
      if (lookahead == 'H') ADVANCE(893);
      END_STATE();
    case 180:
      if (lookahead == 'H') ADVANCE(892);
      END_STATE();
    case 181:
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(136);
      END_STATE();
    case 182:
      if (lookahead == 'H') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(366);
      END_STATE();
    case 183:
      if (lookahead == 'H') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(370);
      END_STATE();
    case 184:
      if (lookahead == 'H') ADVANCE(145);
      END_STATE();
    case 185:
      if (lookahead == 'H') ADVANCE(404);
      END_STATE();
    case 186:
      if (lookahead == 'H') ADVANCE(355);
      END_STATE();
    case 187:
      if (lookahead == 'H') ADVANCE(68);
      END_STATE();
    case 188:
      if (lookahead == 'I') ADVANCE(407);
      END_STATE();
    case 189:
      if (lookahead == 'I') ADVANCE(240);
      END_STATE();
    case 190:
      if (lookahead == 'I') ADVANCE(172);
      if (lookahead == 'O') ADVANCE(288);
      if (lookahead == 'Y') ADVANCE(367);
      END_STATE();
    case 191:
      if (lookahead == 'I') ADVANCE(250);
      END_STATE();
    case 192:
      if (lookahead == 'I') ADVANCE(256);
      END_STATE();
    case 193:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 194:
      if (lookahead == 'I') ADVANCE(344);
      END_STATE();
    case 195:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 196:
      if (lookahead == 'I') ADVANCE(266);
      END_STATE();
    case 197:
      if (lookahead == 'I') ADVANCE(354);
      END_STATE();
    case 198:
      if (lookahead == 'I') ADVANCE(278);
      END_STATE();
    case 199:
      if (lookahead == 'I') ADVANCE(268);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(269);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 202:
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(293);
      END_STATE();
    case 204:
      if (lookahead == 'I') ADVANCE(345);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(246);
      END_STATE();
    case 206:
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead == 'S') ADVANCE(165);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(274);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(64);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 211:
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'U') ADVANCE(368);
      END_STATE();
    case 212:
      if (lookahead == 'L') ADVANCE(939);
      END_STATE();
    case 213:
      if (lookahead == 'L') ADVANCE(909);
      END_STATE();
    case 214:
      if (lookahead == 'L') ADVANCE(926);
      END_STATE();
    case 215:
      if (lookahead == 'L') ADVANCE(917);
      END_STATE();
    case 216:
      if (lookahead == 'L') ADVANCE(924);
      END_STATE();
    case 217:
      if (lookahead == 'L') ADVANCE(829);
      END_STATE();
    case 218:
      if (lookahead == 'L') ADVANCE(918);
      END_STATE();
    case 219:
      if (lookahead == 'L') ADVANCE(916);
      END_STATE();
    case 220:
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'U') ADVANCE(270);
      END_STATE();
    case 221:
      if (lookahead == 'L') ADVANCE(346);
      END_STATE();
    case 222:
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(149);
      END_STATE();
    case 223:
      if (lookahead == 'L') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(201);
      END_STATE();
    case 224:
      if (lookahead == 'L') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(201);
      if (lookahead == 'T') ADVANCE(815);
      END_STATE();
    case 225:
      if (lookahead == 'L') ADVANCE(139);
      if (lookahead == 'T') ADVANCE(815);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(235);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(188);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(359);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(122);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(390);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(390);
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(148);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(206);
      END_STATE();
    case 236:
      if (lookahead == 'M') ADVANCE(816);
      END_STATE();
    case 237:
      if (lookahead == 'M') ADVANCE(212);
      END_STATE();
    case 238:
      if (lookahead == 'M') ADVANCE(298);
      END_STATE();
    case 239:
      if (lookahead == 'M') ADVANCE(298);
      if (lookahead == 'X') ADVANCE(352);
      END_STATE();
    case 240:
      if (lookahead == 'M') ADVANCE(197);
      END_STATE();
    case 241:
      if (lookahead == 'M') ADVANCE(300);
      END_STATE();
    case 242:
      if (lookahead == 'M') ADVANCE(112);
      END_STATE();
    case 243:
      if (lookahead == 'M') ADVANCE(258);
      END_STATE();
    case 244:
      if (lookahead == 'M') ADVANCE(47);
      END_STATE();
    case 245:
      if (lookahead == 'M') ADVANCE(123);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(127);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(161);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(130);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 252:
      if (lookahead == 'M') ADVANCE(149);
      END_STATE();
    case 253:
      if (lookahead == 'N') ADVANCE(831);
      if (lookahead == 'R') ADVANCE(871);
      if (lookahead == 'W') ADVANCE(279);
      END_STATE();
    case 254:
      if (lookahead == 'N') ADVANCE(831);
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 255:
      if (lookahead == 'N') ADVANCE(865);
      END_STATE();
    case 256:
      if (lookahead == 'N') ADVANCE(827);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(936);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(852);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(915);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(928);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(867);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(174);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(175);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(353);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(356);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(362);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(363);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(364);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(371);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 280:
      if (lookahead == 'O') ADVANCE(897);
      if (lookahead == 'U') ADVANCE(222);
      END_STATE();
    case 281:
      if (lookahead == 'O') ADVANCE(177);
      END_STATE();
    case 282:
      if (lookahead == 'O') ADVANCE(408);
      END_STATE();
    case 283:
      if (lookahead == 'O') ADVANCE(896);
      END_STATE();
    case 284:
      if (lookahead == 'O') ADVANCE(813);
      END_STATE();
    case 285:
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(292);
      END_STATE();
    case 286:
      if (lookahead == 'O') ADVANCE(276);
      END_STATE();
    case 287:
      if (lookahead == 'O') ADVANCE(297);
      END_STATE();
    case 288:
      if (lookahead == 'O') ADVANCE(234);
      if (lookahead == 'X') ADVANCE(33);
      END_STATE();
    case 289:
      if (lookahead == 'O') ADVANCE(236);
      END_STATE();
    case 290:
      if (lookahead == 'O') ADVANCE(386);
      END_STATE();
    case 291:
      if (lookahead == 'O') ADVANCE(271);
      END_STATE();
    case 292:
      if (lookahead == 'O') ADVANCE(257);
      END_STATE();
    case 293:
      if (lookahead == 'O') ADVANCE(260);
      END_STATE();
    case 294:
      if (lookahead == 'O') ADVANCE(328);
      if (lookahead == 'R') ADVANCE(289);
      END_STATE();
    case 295:
      if (lookahead == 'O') ADVANCE(350);
      if (lookahead == 'U') ADVANCE(252);
      END_STATE();
    case 296:
      if (lookahead == 'O') ADVANCE(315);
      END_STATE();
    case 297:
      if (lookahead == 'P') ADVANCE(847);
      END_STATE();
    case 298:
      if (lookahead == 'P') ADVANCE(906);
      END_STATE();
    case 299:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 300:
      if (lookahead == 'P') ADVANCE(944);
      END_STATE();
    case 301:
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 302:
      if (lookahead == 'P') ADVANCE(185);
      END_STATE();
    case 303:
      if (lookahead == 'P') ADVANCE(114);
      END_STATE();
    case 304:
      if (lookahead == 'R') ADVANCE(872);
      END_STATE();
    case 305:
      if (lookahead == 'R') ADVANCE(883);
      END_STATE();
    case 306:
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 307:
      if (lookahead == 'R') ADVANCE(930);
      END_STATE();
    case 308:
      if (lookahead == 'R') ADVANCE(846);
      END_STATE();
    case 309:
      if (lookahead == 'R') ADVANCE(822);
      END_STATE();
    case 310:
      if (lookahead == 'R') ADVANCE(824);
      END_STATE();
    case 311:
      if (lookahead == 'R') ADVANCE(905);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(933);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(932);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(922);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(882);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(135);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(400);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(401);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(290);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(195);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(405);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(365);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(191);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(208);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(209);
      END_STATE();
    case 334:
      if (lookahead == 'R') ADVANCE(210);
      END_STATE();
    case 335:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 336:
      if (lookahead == 'S') ADVANCE(825);
      END_STATE();
    case 337:
      if (lookahead == 'S') ADVANCE(887);
      END_STATE();
    case 338:
      if (lookahead == 'S') ADVANCE(814);
      END_STATE();
    case 339:
      if (lookahead == 'S') ADVANCE(83);
      END_STATE();
    case 340:
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 341:
      if (lookahead == 'S') ADVANCE(380);
      END_STATE();
    case 342:
      if (lookahead == 'S') ADVANCE(336);
      END_STATE();
    case 343:
      if (lookahead == 'S') ADVANCE(379);
      END_STATE();
    case 344:
      if (lookahead == 'S') ADVANCE(203);
      END_STATE();
    case 345:
      if (lookahead == 'S') ADVANCE(369);
      END_STATE();
    case 346:
      if (lookahead == 'S') ADVANCE(116);
      END_STATE();
    case 347:
      if (lookahead == 'S') ADVANCE(372);
      END_STATE();
    case 348:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 349:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(874);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(818);
      END_STATE();
    case 352:
      if (lookahead == 'T') ADVANCE(935);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(862);
      END_STATE();
    case 354:
      if (lookahead == 'T') ADVANCE(840);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(820);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(923);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(842);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(807);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(889);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(946);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(858);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(919);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(860);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(888);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(810);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(179);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(282);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(337);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(284);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(318);
      END_STATE();
    case 375:
      if (lookahead == 'T') ADVANCE(120);
      END_STATE();
    case 376:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 377:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 378:
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 379:
      if (lookahead == 'T') ADVANCE(323);
      END_STATE();
    case 380:
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 381:
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 382:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 383:
      if (lookahead == 'T') ADVANCE(147);
      if (lookahead == 'X') ADVANCE(864);
      END_STATE();
    case 384:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 385:
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 386:
      if (lookahead == 'U') ADVANCE(299);
      END_STATE();
    case 387:
      if (lookahead == 'U') ADVANCE(243);
      END_STATE();
    case 388:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 389:
      if (lookahead == 'U') ADVANCE(230);
      END_STATE();
    case 390:
      if (lookahead == 'U') ADVANCE(146);
      END_STATE();
    case 391:
      if (lookahead == 'U') ADVANCE(360);
      END_STATE();
    case 392:
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 393:
      if (lookahead == 'V') ADVANCE(196);
      END_STATE();
    case 394:
      if (lookahead == 'W') ADVANCE(850);
      END_STATE();
    case 395:
      if (lookahead == 'X') ADVANCE(204);
      END_STATE();
    case 396:
      if (lookahead == 'X') ADVANCE(881);
      END_STATE();
    case 397:
      if (lookahead == 'X') ADVANCE(352);
      END_STATE();
    case 398:
      if (lookahead == 'Y') ADVANCE(854);
      END_STATE();
    case 399:
      if (lookahead == 'Y') ADVANCE(929);
      END_STATE();
    case 400:
      if (lookahead == 'Y') ADVANCE(843);
      END_STATE();
    case 401:
      if (lookahead == 'Y') ADVANCE(952);
      END_STATE();
    case 402:
      if (lookahead == 'Y') ADVANCE(836);
      END_STATE();
    case 403:
      if (lookahead == 'Y') ADVANCE(835);
      END_STATE();
    case 404:
      if (lookahead == 'Y') ADVANCE(953);
      END_STATE();
    case 405:
      if (lookahead == 'Y') ADVANCE(908);
      END_STATE();
    case 406:
      if (lookahead == 'Z') ADVANCE(951);
      END_STATE();
    case 407:
      if (lookahead == 'Z') ADVANCE(143);
      END_STATE();
    case 408:
      if (lookahead == '_') ADVANCE(200);
      END_STATE();
    case 409:
      if (lookahead == '_') ADVANCE(574);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead == 'h') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(594);
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(595);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(613);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead == 'o') ADVANCE(902);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead == 'y') ADVANCE(677);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead == 'o') ADVANCE(902);
      if (lookahead == 'y') ADVANCE(677);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(899);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(899);
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(940);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(904);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(715);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(601);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(601);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(695);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(749);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 452:
      if (lookahead == 'b') ADVANCE(776);
      END_STATE();
    case 453:
      if (lookahead == 'b') ADVANCE(777);
      END_STATE();
    case 454:
      if (lookahead == 'b') ADVANCE(603);
      END_STATE();
    case 455:
      if (lookahead == 'b') ADVANCE(605);
      END_STATE();
    case 456:
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 457:
      if (lookahead == 'c') ADVANCE(838);
      END_STATE();
    case 458:
      if (lookahead == 'c') ADVANCE(925);
      END_STATE();
    case 459:
      if (lookahead == 'c') ADVANCE(839);
      END_STATE();
    case 460:
      if (lookahead == 'c') ADVANCE(567);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 461:
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == 'y') ADVANCE(573);
      END_STATE();
    case 462:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 463:
      if (lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 464:
      if (lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 465:
      if (lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 466:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(568);
      END_STATE();
    case 468:
      if (lookahead == 'c') ADVANCE(700);
      END_STATE();
    case 469:
      if (lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 470:
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 's') ADVANCE(856);
      END_STATE();
    case 471:
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 's') ADVANCE(856);
      if (lookahead == 'u') ADVANCE(742);
      if (lookahead == 'v') ADVANCE(545);
      END_STATE();
    case 472:
      if (lookahead == 'd') ADVANCE(848);
      END_STATE();
    case 473:
      if (lookahead == 'd') ADVANCE(870);
      END_STATE();
    case 474:
      if (lookahead == 'd') ADVANCE(954);
      END_STATE();
    case 475:
      if (lookahead == 'd') ADVANCE(955);
      END_STATE();
    case 476:
      if (lookahead == 'd') ADVANCE(851);
      END_STATE();
    case 477:
      if (lookahead == 'd') ADVANCE(499);
      END_STATE();
    case 478:
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 479:
      if (lookahead == 'd') ADVANCE(524);
      END_STATE();
    case 480:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(943);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(771);
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 540:
      if (lookahead == 'f') ADVANCE(885);
      if (lookahead == 'n') ADVANCE(869);
      END_STATE();
    case 541:
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(873);
      if (lookahead == 'u') ADVANCE(758);
      if (lookahead == 'w') ADVANCE(653);
      END_STATE();
    case 542:
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 543:
      if (lookahead == 'f') ADVANCE(725);
      END_STATE();
    case 544:
      if (lookahead == 'f') ADVANCE(722);
      END_STATE();
    case 545:
      if (lookahead == 'g') ADVANCE(866);
      END_STATE();
    case 546:
      if (lookahead == 'g') ADVANCE(576);
      END_STATE();
    case 547:
      if (lookahead == 'g') ADVANCE(877);
      END_STATE();
    case 548:
      if (lookahead == 'g') ADVANCE(837);
      END_STATE();
    case 549:
      if (lookahead == 'g') ADVANCE(934);
      END_STATE();
    case 550:
      if (lookahead == 'g') ADVANCE(560);
      END_STATE();
    case 551:
      if (lookahead == 'g') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 552:
      if (lookahead == 'g') ADVANCE(532);
      END_STATE();
    case 553:
      if (lookahead == 'h') ADVANCE(894);
      END_STATE();
    case 554:
      if (lookahead == 'h') ADVANCE(892);
      END_STATE();
    case 555:
      if (lookahead == 'h') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 556:
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 557:
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(744);
      END_STATE();
    case 558:
      if (lookahead == 'h') ADVANCE(519);
      END_STATE();
    case 559:
      if (lookahead == 'h') ADVANCE(778);
      END_STATE();
    case 560:
      if (lookahead == 'h') ADVANCE(729);
      END_STATE();
    case 561:
      if (lookahead == 'h') ADVANCE(442);
      END_STATE();
    case 562:
      if (lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 563:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 'o') ADVANCE(662);
      if (lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 566:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 569:
      if (lookahead == 'i') ADVANCE(458);
      END_STATE();
    case 570:
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 571:
      if (lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 572:
      if (lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 573:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 576:
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead == 's') ADVANCE(538);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 578:
      if (lookahead == 'i') ADVANCE(719);
      END_STATE();
    case 579:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 580:
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 581:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 582:
      if (lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 583:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 584:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 585:
      if (lookahead == 'l') ADVANCE(752);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(742);
      END_STATE();
    case 586:
      if (lookahead == 'l') ADVANCE(939);
      END_STATE();
    case 587:
      if (lookahead == 'l') ADVANCE(909);
      END_STATE();
    case 588:
      if (lookahead == 'l') ADVANCE(926);
      END_STATE();
    case 589:
      if (lookahead == 'l') ADVANCE(917);
      END_STATE();
    case 590:
      if (lookahead == 'l') ADVANCE(924);
      END_STATE();
    case 591:
      if (lookahead == 'l') ADVANCE(829);
      END_STATE();
    case 592:
      if (lookahead == 'l') ADVANCE(918);
      END_STATE();
    case 593:
      if (lookahead == 'l') ADVANCE(916);
      END_STATE();
    case 594:
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 595:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 596:
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 600:
      if (lookahead == 'l') ADVANCE(609);
      END_STATE();
    case 601:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 602:
      if (lookahead == 'l') ADVANCE(562);
      END_STATE();
    case 603:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 604:
      if (lookahead == 'l') ADVANCE(733);
      END_STATE();
    case 605:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 606:
      if (lookahead == 'l') ADVANCE(764);
      END_STATE();
    case 607:
      if (lookahead == 'l') ADVANCE(764);
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 608:
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 609:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 610:
      if (lookahead == 'm') ADVANCE(816);
      END_STATE();
    case 611:
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 612:
      if (lookahead == 'm') ADVANCE(672);
      END_STATE();
    case 613:
      if (lookahead == 'm') ADVANCE(672);
      if (lookahead == 'x') ADVANCE(726);
      END_STATE();
    case 614:
      if (lookahead == 'm') ADVANCE(571);
      END_STATE();
    case 615:
      if (lookahead == 'm') ADVANCE(673);
      END_STATE();
    case 616:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 617:
      if (lookahead == 'm') ADVANCE(632);
      END_STATE();
    case 618:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 619:
      if (lookahead == 'm') ADVANCE(497);
      END_STATE();
    case 620:
      if (lookahead == 'm') ADVANCE(501);
      END_STATE();
    case 621:
      if (lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 622:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 623:
      if (lookahead == 'm') ADVANCE(504);
      END_STATE();
    case 624:
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 626:
      if (lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(871);
      if (lookahead == 'w') ADVANCE(653);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(937);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(915);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(928);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(867);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(547);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(549);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(727);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(898);
      if (lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(566);
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(760);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(723);
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 671:
      if (lookahead == 'p') ADVANCE(847);
      END_STATE();
    case 672:
      if (lookahead == 'p') ADVANCE(907);
      END_STATE();
    case 673:
      if (lookahead == 'p') ADVANCE(945);
      END_STATE();
    case 674:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 675:
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 676:
      if (lookahead == 'p') ADVANCE(559);
      END_STATE();
    case 677:
      if (lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(884);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(822);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(824);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(905);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(774);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(825);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(887);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(753);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(746);
      END_STATE();
    case 722:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(935);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(862);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(820);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(923);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(842);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(807);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(889);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(946);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(919);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(860);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(810);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(711);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == 'x') ADVANCE(864);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 760:
      if (lookahead == 'u') ADVANCE(674);
      END_STATE();
    case 761:
      if (lookahead == 'u') ADVANCE(617);
      END_STATE();
    case 762:
      if (lookahead == 'u') ADVANCE(486);
      END_STATE();
    case 763:
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 764:
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 765:
      if (lookahead == 'u') ADVANCE(734);
      END_STATE();
    case 766:
      if (lookahead == 'u') ADVANCE(455);
      END_STATE();
    case 767:
      if (lookahead == 'v') ADVANCE(570);
      END_STATE();
    case 768:
      if (lookahead == 'w') ADVANCE(850);
      END_STATE();
    case 769:
      if (lookahead == 'x') ADVANCE(578);
      END_STATE();
    case 770:
      if (lookahead == 'x') ADVANCE(881);
      END_STATE();
    case 771:
      if (lookahead == 'x') ADVANCE(726);
      END_STATE();
    case 772:
      if (lookahead == 'y') ADVANCE(854);
      END_STATE();
    case 773:
      if (lookahead == 'y') ADVANCE(929);
      END_STATE();
    case 774:
      if (lookahead == 'y') ADVANCE(843);
      END_STATE();
    case 775:
      if (lookahead == 'y') ADVANCE(952);
      END_STATE();
    case 776:
      if (lookahead == 'y') ADVANCE(836);
      END_STATE();
    case 777:
      if (lookahead == 'y') ADVANCE(835);
      END_STATE();
    case 778:
      if (lookahead == 'y') ADVANCE(953);
      END_STATE();
    case 779:
      if (lookahead == 'y') ADVANCE(908);
      END_STATE();
    case 780:
      if (lookahead == 'z') ADVANCE(951);
      END_STATE();
    case 781:
      if (lookahead == 'z') ADVANCE(517);
      END_STATE();
    case 782:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(211);
      if (lookahead == 'B') ADVANCE(190);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(294);
      if (lookahead == 'G') ADVANCE(138);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'J') ADVANCE(285);
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'M') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(254);
      if (lookahead == 'P') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(128);
      if (lookahead == 'S') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(182);
      if (lookahead == 'X') ADVANCE(237);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'j') ADVANCE(658);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(659);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == 'u') ADVANCE(675);
      if (lookahead == 'v') ADVANCE(444);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(611);
      END_STATE();
    case 783:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(783)
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(972);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '+') ADVANCE(969);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(294);
      if (lookahead == 'I') ADVANCE(262);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(283);
      if (lookahead == 'O') ADVANCE(253);
      if (lookahead == 'P') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(340);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == 'n') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(627);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == 'w') ADVANCE(557);
      END_STATE();
    case 784:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(784)
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1068);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1113);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == 't') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 785:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(785)
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(972);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '+') ADVANCE(969);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(263);
      if (lookahead == 'F') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(319);
      if (lookahead == 'I') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(304);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(670);
      if (lookahead == 'g') ADVANCE(693);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(678);
      if (lookahead == 'w') ADVANCE(557);
      END_STATE();
    case 786:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(786)
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1068);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1113);
      if (lookahead == 'S') ADVANCE(1023);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == 's') ADVANCE(1138);
      if (lookahead == 't') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 787:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(787)
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(972);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '+') ADVANCE(969);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(264);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'I') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(168);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == 'w') ADVANCE(557);
      END_STATE();
    case 788:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(788)
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1068);
      if (lookahead == 'D') ADVANCE(1040);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1113);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'd') ADVANCE(1155);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == 't') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 789:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(789)
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1113);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == 't') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 790:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(790)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'C') ADVANCE(1083);
      if (lookahead == 'F') ADVANCE(1073);
      if (lookahead == 'G') ADVANCE(1087);
      if (lookahead == 'I') ADVANCE(1062);
      if (lookahead == 'J') ADVANCE(1072);
      if (lookahead == 'L') ADVANCE(1016);
      if (lookahead == 'O') ADVANCE(1077);
      if (lookahead == 'R') ADVANCE(1038);
      if (lookahead == 'U') ADVANCE(1096);
      if (lookahead == 'W') ADVANCE(1034);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'c') ADVANCE(1198);
      if (lookahead == 'f') ADVANCE(1188);
      if (lookahead == 'g') ADVANCE(1202);
      if (lookahead == 'i') ADVANCE(1177);
      if (lookahead == 'j') ADVANCE(1187);
      if (lookahead == 'l') ADVANCE(1131);
      if (lookahead == 'o') ADVANCE(1192);
      if (lookahead == 'r') ADVANCE(1153);
      if (lookahead == 'u') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1149);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 791:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(791)
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'C') ADVANCE(1083);
      if (lookahead == 'F') ADVANCE(1073);
      if (lookahead == 'G') ADVANCE(1087);
      if (lookahead == 'I') ADVANCE(1062);
      if (lookahead == 'J') ADVANCE(1072);
      if (lookahead == 'L') ADVANCE(1016);
      if (lookahead == 'O') ADVANCE(1077);
      if (lookahead == 'R') ADVANCE(1038);
      if (lookahead == 'U') ADVANCE(1096);
      if (lookahead == 'W') ADVANCE(1035);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'c') ADVANCE(1198);
      if (lookahead == 'f') ADVANCE(1188);
      if (lookahead == 'g') ADVANCE(1202);
      if (lookahead == 'i') ADVANCE(1177);
      if (lookahead == 'j') ADVANCE(1187);
      if (lookahead == 'l') ADVANCE(1131);
      if (lookahead == 'o') ADVANCE(1192);
      if (lookahead == 'r') ADVANCE(1153);
      if (lookahead == 'u') ADVANCE(1211);
      if (lookahead == 'w') ADVANCE(1150);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 792:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(792)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1074);
      if (lookahead == 'K') ADVANCE(1021);
      if (lookahead == 'P') ADVANCE(1085);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1189);
      if (lookahead == 'k') ADVANCE(1136);
      if (lookahead == 'p') ADVANCE(1200);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 793:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(793)
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'F') ADVANCE(1084);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1199);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 794:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(794)
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'F') ADVANCE(1084);
      if (lookahead == 'W') ADVANCE(1043);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1199);
      if (lookahead == 'w') ADVANCE(1158);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 795:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(795)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'L') ADVANCE(1037);
      if (lookahead == 'O') ADVANCE(1077);
      if (lookahead == 'W') ADVANCE(1035);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'l') ADVANCE(1152);
      if (lookahead == 'o') ADVANCE(1192);
      if (lookahead == 'w') ADVANCE(1150);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 796:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'F') ADVANCE(1073);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == 'U') ADVANCE(1093);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead == 'u') ADVANCE(1208);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 797:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == 'D') ADVANCE(1022);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'd') ADVANCE(1137);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 798:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(798)
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 799:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(799)
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 800:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(800)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'I') ADVANCE(1028);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 801:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(801)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(1007);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(1122);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 802:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(802)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1075);
      if (lookahead == 'T') ADVANCE(1067);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1190);
      if (lookahead == 't') ADVANCE(1182);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 803:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(803)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 804:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(804)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'I') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 805:
      if (eof) ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '%') ADVANCE(972);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '+') ADVANCE(969);
      if (lookahead == ',') ADVANCE(958);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(190);
      if (lookahead == 'C') ADVANCE(37);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'E') ADVANCE(395);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == 'G') ADVANCE(138);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == 'J') ADVANCE(285);
      if (lookahead == 'K') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(280);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(316);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(182);
      if (lookahead == 'X') ADVANCE(237);
      if (lookahead == 'Z') ADVANCE(291);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == 'd') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'j') ADVANCE(658);
      if (lookahead == 'k') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 'p') ADVANCE(690);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'u') ADVANCE(675);
      if (lookahead == 'v') ADVANCE(417);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(611);
      if (lookahead == 'z') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_keyword_outer);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_keyword_cross);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_keyword_cross);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_keyword_lateral);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_keyword_lateral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_keyword_alter);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_keyword_drop);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_keyword_add);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_keyword_view);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_keyword_materialized);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_keyword_column);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_keyword_column);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(150);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(524);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_keyword_using);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_keyword_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_keyword_cascade);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'O') ADVANCE(391);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_keyword_with_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_keyword_no);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 'T') ADVANCE(874);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_keyword_data);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_keyword_type);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_keyword_rename);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_keyword_to);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_keyword_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_keyword_schema);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_keyword_owner);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'O') ADVANCE(329);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_keyword_temporary);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_keyword_int_token1);
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_keyword_int_token2);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token2);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(938);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(938);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(205);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(406);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(780);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token2);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 'S') ADVANCE(372);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token3);
      if (lookahead == 's') ADVANCE(746);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token4);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_keyword_timestamptz_token1);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_keyword_geometry);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_keyword_geography);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_keyword_box2d);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_keyword_box3d);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(996);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(987);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(981);
      if (lookahead != 0) ADVANCE(982);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(996);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(990);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(975);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(977);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(981);
      if (lookahead != 0) ADVANCE(982);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(981);
      if (lookahead == '/') ADVANCE(962);
      if (lookahead != 0) ADVANCE(982);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(981);
      if (lookahead != 0) ADVANCE(982);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(983);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(985);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(987);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(987);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead == '-') ADVANCE(985);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(987);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(987);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(996);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(989);
      if (lookahead == '*') ADVANCE(990);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(996);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(990);
      if (lookahead == '/') ADVANCE(963);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(996);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(990);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(960);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(992);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(996);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(996);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(995);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead == '/') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(996);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(996);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(997);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1030);
      if (lookahead == 'I') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(880);
      if (lookahead == 'I') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1024);
      if (lookahead == 'I') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(880);
      if (lookahead == 'i') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1139);
      if (lookahead == 'i') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
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
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 19},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 28},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 15},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 18},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 15},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 24},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 15},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 14},
  [224] = {.lex_state = 15},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 18},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 15},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 15},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 15},
  [234] = {.lex_state = 25},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 15},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 26},
  [244] = {.lex_state = 24},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 15},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 15},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 25},
  [253] = {.lex_state = 17},
  [254] = {.lex_state = 26},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 25},
  [258] = {.lex_state = 25},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 24},
  [262] = {.lex_state = 24},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 18},
  [265] = {.lex_state = 26},
  [266] = {.lex_state = 15},
  [267] = {.lex_state = 16},
  [268] = {.lex_state = 18},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 18},
  [272] = {.lex_state = 15},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 15},
  [276] = {.lex_state = 26},
  [277] = {.lex_state = 18},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 18},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 18},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 18},
  [287] = {.lex_state = 18},
  [288] = {.lex_state = 16},
  [289] = {.lex_state = 18},
  [290] = {.lex_state = 16},
  [291] = {.lex_state = 18},
  [292] = {.lex_state = 18},
  [293] = {.lex_state = 18},
  [294] = {.lex_state = 18},
  [295] = {.lex_state = 14},
  [296] = {.lex_state = 18},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 18},
  [299] = {.lex_state = 15},
  [300] = {.lex_state = 15},
  [301] = {.lex_state = 15},
  [302] = {.lex_state = 15},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 26},
  [305] = {.lex_state = 15},
  [306] = {.lex_state = 15},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 14},
  [310] = {.lex_state = 15},
  [311] = {.lex_state = 14},
  [312] = {.lex_state = 15},
  [313] = {.lex_state = 15},
  [314] = {.lex_state = 15},
  [315] = {.lex_state = 14},
  [316] = {.lex_state = 14},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 30},
  [326] = {.lex_state = 30},
  [327] = {.lex_state = 30},
  [328] = {.lex_state = 30},
  [329] = {.lex_state = 30},
  [330] = {.lex_state = 30},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 17},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 30},
  [336] = {.lex_state = 30},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 17},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 30},
  [341] = {.lex_state = 15},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 15},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 30},
  [346] = {.lex_state = 17},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 15},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 30},
  [353] = {.lex_state = 16},
  [354] = {.lex_state = 32},
  [355] = {.lex_state = 30},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 32},
  [358] = {.lex_state = 16},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 16},
  [361] = {.lex_state = 16},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 16},
  [364] = {.lex_state = 16},
  [365] = {.lex_state = 16},
  [366] = {.lex_state = 17},
  [367] = {.lex_state = 16},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 16},
  [370] = {.lex_state = 16},
  [371] = {.lex_state = 16},
  [372] = {.lex_state = 16},
  [373] = {.lex_state = 16},
  [374] = {.lex_state = 16},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 32},
  [379] = {.lex_state = 29},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 15},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 15},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 27},
  [389] = {.lex_state = 27},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 27},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 26},
  [400] = {.lex_state = 17},
  [401] = {.lex_state = 17},
  [402] = {.lex_state = 17},
  [403] = {.lex_state = 17},
  [404] = {.lex_state = 17},
  [405] = {.lex_state = 17},
  [406] = {.lex_state = 17},
  [407] = {.lex_state = 27},
  [408] = {.lex_state = 27},
  [409] = {.lex_state = 17},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 27},
  [412] = {.lex_state = 17},
  [413] = {.lex_state = 17},
  [414] = {.lex_state = 17},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 17},
  [418] = {.lex_state = 26},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 27},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 17},
  [427] = {.lex_state = 17},
  [428] = {.lex_state = 17},
  [429] = {.lex_state = 17},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 26},
  [433] = {.lex_state = 17},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 26},
  [436] = {.lex_state = 17},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 26},
  [439] = {.lex_state = 17},
  [440] = {.lex_state = 17},
  [441] = {.lex_state = 17},
  [442] = {.lex_state = 17},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 17},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 17},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 26},
  [450] = {.lex_state = 17},
  [451] = {.lex_state = 17},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 17},
  [454] = {.lex_state = 17},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 26},
  [457] = {.lex_state = 17},
  [458] = {.lex_state = 17},
  [459] = {.lex_state = 17},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 17},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 17},
  [465] = {.lex_state = 17},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 17},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 17},
  [478] = {.lex_state = 17},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 17},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 17},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 17},
  [491] = {.lex_state = 17},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 17},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 17},
  [499] = {.lex_state = 17},
  [500] = {.lex_state = 17},
  [501] = {.lex_state = 17},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 17},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 17},
  [507] = {.lex_state = 17},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 17},
  [520] = {.lex_state = 17},
  [521] = {.lex_state = 17},
  [522] = {.lex_state = 17},
  [523] = {.lex_state = 17},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 17},
  [528] = {.lex_state = 17},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 17},
  [533] = {.lex_state = 17},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 17},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 17},
  [542] = {.lex_state = 17},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 17},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 17},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 17},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 17},
  [561] = {.lex_state = 17},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 6},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 17},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 7},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 6},
  [591] = {.lex_state = 6},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 17},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 6},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 15},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 15},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
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
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
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
  [703] = {.lex_state = 6},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 6},
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
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 984},
  [755] = {.lex_state = 993},
  [756] = {.lex_state = 17},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 15},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 17},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 993},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 984},
  [779] = {.lex_state = 993},
  [780] = {.lex_state = 17},
  [781] = {.lex_state = 984},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 984},
  [787] = {.lex_state = 993},
  [788] = {.lex_state = 17},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 984},
  [793] = {.lex_state = 993},
  [794] = {.lex_state = 17},
  [795] = {.lex_state = 984},
  [796] = {.lex_state = 993},
  [797] = {.lex_state = 17},
  [798] = {.lex_state = 17},
  [799] = {.lex_state = 17},
  [800] = {.lex_state = 17},
  [801] = {.lex_state = 17},
  [802] = {.lex_state = 17},
  [803] = {.lex_state = 17},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 31},
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
    [sym_program] = STATE(805),
    [sym_statement] = STATE(790),
    [sym__select_statement] = STATE(789),
    [sym_select] = STATE(488),
    [sym__delete_statement] = STATE(789),
    [sym_delete] = STATE(599),
    [sym__create_statement] = STATE(789),
    [sym_create_table] = STATE(789),
    [sym_create_view] = STATE(789),
    [sym_create_materialized_view] = STATE(789),
    [sym__alter_statement] = STATE(789),
    [sym_alter_table] = STATE(789),
    [sym_alter_view] = STATE(789),
    [sym__drop_statement] = STATE(789),
    [sym_drop_table] = STATE(789),
    [sym_drop_view] = STATE(789),
    [sym__insert_statement] = STATE(789),
    [sym_insert] = STATE(789),
    [sym__update_statement] = STATE(789),
    [sym_update] = STATE(789),
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
    ACTIONS(19), 44,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
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
  [58] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      aux_sym_keyword_int_token1,
      aux_sym_keyword_char_token1,
      sym_keyword_json,
      sym_keyword_date,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(23), 44,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      aux_sym_keyword_with_token1,
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
  [116] = 17,
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
    STATE(198), 1,
      sym_keyword_varchar,
    STATE(199), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(589), 10,
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
  [194] = 17,
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
    STATE(198), 1,
      sym_keyword_varchar,
    STATE(199), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(621), 10,
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
  [272] = 17,
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
    STATE(198), 1,
      sym_keyword_varchar,
    STATE(199), 1,
      sym_keyword_char,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(189), 10,
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
  [350] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 36,
      sym_keyword_select,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_primary,
      sym_keyword_alter,
      sym_keyword_drop,
      sym_keyword_add,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
      sym_keyword_cascade,
      aux_sym_keyword_with_token1,
      sym_keyword_type,
      sym_keyword_rename,
      sym_keyword_to,
      sym_keyword_owner,
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
  [399] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 36,
      sym_keyword_select,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_primary,
      sym_keyword_alter,
      sym_keyword_drop,
      sym_keyword_add,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
      sym_keyword_cascade,
      aux_sym_keyword_with_token1,
      sym_keyword_type,
      sym_keyword_rename,
      sym_keyword_to,
      sym_keyword_owner,
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
  [448] = 4,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 21,
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
  [487] = 3,
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
    ACTIONS(23), 22,
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
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [524] = 4,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 21,
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
  [563] = 3,
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
    ACTIONS(19), 22,
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
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [600] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 12,
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
  [638] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 21,
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
  [674] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(83), 12,
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
  [712] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 21,
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
  [748] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 12,
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
  [786] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 12,
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
  [824] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 12,
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
  [862] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 12,
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
  [900] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 21,
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
  [936] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 12,
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
  [974] = 3,
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
  [1010] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
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
  [1048] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
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
  [1086] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
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
  [1124] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(83), 12,
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
  [1162] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
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
  [1200] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
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
  [1238] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
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
  [1276] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
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
  [1314] = 3,
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
  [1350] = 3,
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
  [1386] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
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
  [1424] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
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
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1462] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
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
  [1500] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 12,
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
  [1538] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 12,
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
  [1576] = 3,
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
  [1612] = 8,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 17,
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
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1658] = 11,
    ACTIONS(81), 1,
      sym_keyword_or,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_CARET,
    ACTIONS(137), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 13,
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
  [1710] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
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
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1748] = 3,
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
  [1784] = 6,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 18,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1826] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 9,
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
  [1864] = 4,
    ACTIONS(135), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 20,
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
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1902] = 9,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_CARET,
    ACTIONS(137), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 17,
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
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1950] = 19,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(634), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(485), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2015] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 19,
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
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2048] = 19,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(165), 1,
      sym_keyword_select,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(119), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(545), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(791), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2113] = 19,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(710), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(485), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2178] = 19,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(165), 1,
      sym_keyword_select,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(119), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(545), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(785), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2243] = 19,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(165), 1,
      sym_keyword_select,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(119), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(545), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(771), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2308] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 20,
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
  [2341] = 19,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(680), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(485), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2406] = 4,
    ACTIONS(171), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 18,
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
  [2441] = 19,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(743), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(485), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2506] = 19,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(165), 1,
      sym_keyword_select,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(119), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(545), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(726), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2571] = 19,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(733), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(485), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2636] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 20,
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
  [2669] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 19,
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
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2702] = 4,
    ACTIONS(177), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 18,
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
  [2737] = 3,
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
  [2769] = 6,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 15,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2807] = 11,
    ACTIONS(81), 1,
      sym_keyword_or,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 9,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2855] = 8,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 14,
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
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2897] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 18,
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
  [2929] = 3,
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
  [2961] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 18,
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
  [2993] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 18,
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
  [3025] = 18,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(195), 1,
      sym_keyword_distinct,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(679), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3087] = 3,
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
  [3119] = 3,
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
  [3151] = 9,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 13,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3195] = 18,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(197), 1,
      sym_keyword_distinct,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(641), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3257] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 19,
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
  [3289] = 18,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(199), 1,
      sym_keyword_distinct,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(709), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3351] = 3,
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
  [3383] = 18,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(201), 1,
      sym_keyword_distinct,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(732), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3445] = 4,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 17,
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
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3479] = 17,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(735), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3538] = 17,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(712), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3597] = 17,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(639), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3656] = 17,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(684), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3715] = 17,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(100), 1,
      sym_identifier,
    STATE(132), 1,
      sym_literal,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_predicate,
    STATE(624), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3774] = 16,
    ACTIONS(211), 1,
      sym_keyword_distinct,
    ACTIONS(213), 1,
      sym_keyword_count,
    ACTIONS(217), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym__number,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(230), 1,
      sym_identifier,
    STATE(268), 1,
      sym__count_function,
    STATE(287), 1,
      sym__literal_string,
    STATE(291), 1,
      sym_invocation,
    STATE(434), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(210), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [3830] = 16,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_STAR,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      sym__number,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(311), 1,
      sym__literal_string,
    STATE(397), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(200), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [3886] = 12,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(247), 1,
      sym_keyword_and,
    ACTIONS(249), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(245), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3934] = 17,
    ACTIONS(251), 1,
      sym_keyword_left,
    ACTIONS(253), 1,
      sym_keyword_right,
    ACTIONS(257), 1,
      sym_keyword_join,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(127), 1,
      sym_index_hint,
    STATE(256), 1,
      sym_where,
    STATE(319), 1,
      sym_group_by,
    STATE(424), 1,
      sym_order_by,
    STATE(537), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(267), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(269), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(124), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [3992] = 16,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(233), 1,
      anon_sym_STAR,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      sym__number,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(271), 1,
      sym_keyword_distinct,
    STATE(218), 1,
      sym_identifier,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(311), 1,
      sym__literal_string,
    STATE(434), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(200), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4048] = 17,
    ACTIONS(251), 1,
      sym_keyword_left,
    ACTIONS(253), 1,
      sym_keyword_right,
    ACTIONS(257), 1,
      sym_keyword_join,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(122), 1,
      sym_index_hint,
    STATE(250), 1,
      sym_where,
    STATE(323), 1,
      sym_group_by,
    STATE(437), 1,
      sym_order_by,
    STATE(537), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(267), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(269), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(121), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [4106] = 6,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(275), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 10,
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
  [4142] = 16,
    ACTIONS(213), 1,
      sym_keyword_count,
    ACTIONS(217), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym__number,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_identifier,
    STATE(268), 1,
      sym__count_function,
    STATE(287), 1,
      sym__literal_string,
    STATE(291), 1,
      sym_invocation,
    STATE(397), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(210), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4198] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(77), 10,
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
  [4229] = 15,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(281), 1,
      sym_keyword_count,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(233), 1,
      sym_identifier,
    STATE(310), 1,
      sym__count_function,
    STATE(312), 1,
      sym_invocation,
    STATE(462), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(283), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(231), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4282] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(77), 10,
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
  [4313] = 15,
    ACTIONS(293), 1,
      sym_keyword_count,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym__number,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(307), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(370), 1,
      sym__count_function,
    STATE(371), 1,
      sym_invocation,
    STATE(372), 1,
      sym__literal_string,
    STATE(642), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(295), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(248), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4366] = 4,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 15,
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
  [4397] = 4,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 15,
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
  [4428] = 5,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 13,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
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
  [4460] = 14,
    ACTIONS(213), 1,
      sym_keyword_count,
    ACTIONS(217), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym__number,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(230), 1,
      sym_identifier,
    STATE(268), 1,
      sym__count_function,
    STATE(287), 1,
      sym__literal_string,
    STATE(291), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(226), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4510] = 3,
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
  [4538] = 14,
    ACTIONS(147), 1,
      sym_keyword_count,
    ACTIONS(233), 1,
      anon_sym_STAR,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      sym__number,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(303), 1,
      sym__count_function,
    STATE(309), 1,
      sym_invocation,
    STATE(311), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(223), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4588] = 14,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(281), 1,
      sym_keyword_count,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(233), 1,
      sym_identifier,
    STATE(310), 1,
      sym__count_function,
    STATE(312), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(283), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(259), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4638] = 14,
    ACTIONS(293), 1,
      sym_keyword_count,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym__number,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(307), 1,
      sym__identifier,
    STATE(297), 1,
      sym_identifier,
    STATE(370), 1,
      sym__count_function,
    STATE(371), 1,
      sym_invocation,
    STATE(372), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(295), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(290), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4688] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 15,
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
  [4716] = 6,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(315), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 12,
      sym_keyword_where,
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
  [4750] = 4,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 14,
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
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4780] = 9,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(321), 1,
      sym_keyword_in,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(315), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(79), 10,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4820] = 6,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(275), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
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
  [4854] = 10,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(321), 1,
      sym_keyword_in,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(315), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(331), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(329), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 6,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4896] = 8,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(315), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(79), 11,
      sym_keyword_where,
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
  [4934] = 3,
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
  [4962] = 3,
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
  [4990] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 15,
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
  [5018] = 12,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    STATE(344), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(175), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5063] = 15,
    ACTIONS(251), 1,
      sym_keyword_left,
    ACTIONS(253), 1,
      sym_keyword_right,
    ACTIONS(257), 1,
      sym_keyword_join,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(245), 1,
      sym_where,
    STATE(351), 1,
      sym_group_by,
    STATE(422), 1,
      sym_order_by,
    STATE(518), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(182), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5114] = 8,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(339), 1,
      sym_keyword_as,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(172), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(337), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(335), 10,
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
  [5151] = 6,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(473), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
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
  [5184] = 15,
    ACTIONS(251), 1,
      sym_keyword_left,
    ACTIONS(253), 1,
      sym_keyword_right,
    ACTIONS(257), 1,
      sym_keyword_join,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(241), 1,
      sym_where,
    STATE(321), 1,
      sym_group_by,
    STATE(423), 1,
      sym_order_by,
    STATE(518), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(333), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(182), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5235] = 15,
    ACTIONS(251), 1,
      sym_keyword_left,
    ACTIONS(253), 1,
      sym_keyword_right,
    ACTIONS(257), 1,
      sym_keyword_join,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(242), 1,
      sym_where,
    STATE(322), 1,
      sym_group_by,
    STATE(430), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(347), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(182), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5286] = 15,
    ACTIONS(251), 1,
      sym_keyword_left,
    ACTIONS(253), 1,
      sym_keyword_right,
    ACTIONS(257), 1,
      sym_keyword_join,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(242), 1,
      sym_where,
    STATE(322), 1,
      sym_group_by,
    STATE(430), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(347), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(120), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5337] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 3,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
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
  [5366] = 15,
    ACTIONS(251), 1,
      sym_keyword_left,
    ACTIONS(253), 1,
      sym_keyword_right,
    ACTIONS(257), 1,
      sym_keyword_join,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(247), 1,
      sym_where,
    STATE(342), 1,
      sym_group_by,
    STATE(448), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(347), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(182), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5417] = 13,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(92), 1,
      sym_predicate,
    STATE(99), 1,
      sym_identifier,
    STATE(284), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5464] = 8,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(339), 1,
      sym_keyword_as,
    ACTIONS(349), 1,
      anon_sym_DOT,
    STATE(172), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(337), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(335), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [5501] = 15,
    ACTIONS(251), 1,
      sym_keyword_left,
    ACTIONS(253), 1,
      sym_keyword_right,
    ACTIONS(257), 1,
      sym_keyword_join,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(247), 1,
      sym_where,
    STATE(342), 1,
      sym_group_by,
    STATE(448), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(347), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(117), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5552] = 12,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym__number,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(363), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      sym__literal_string,
    STATE(344), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(88), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5597] = 13,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    STATE(110), 1,
      sym_predicate,
    STATE(497), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5644] = 11,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(47), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5686] = 11,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym__number,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(363), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(65), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5728] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
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
  [5756] = 7,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(383), 1,
      sym_keyword_as,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(379), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [5790] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(20), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(385), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5836] = 12,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_predicate,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5880] = 7,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(383), 1,
      sym_keyword_as,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(379), 10,
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
  [5914] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
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
  [5942] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(13), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(387), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5988] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(38), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6034] = 12,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(96), 1,
      sym_predicate,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6078] = 11,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(14), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6120] = 11,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(44), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6162] = 11,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(46), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6204] = 11,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(151), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6246] = 11,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(41), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6288] = 11,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(106), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6330] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(15), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(391), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6376] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(35), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6422] = 11,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(107), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6464] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(29), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6510] = 11,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(321), 1,
      sym_keyword_in,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(315), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(331), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(397), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(329), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6552] = 3,
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
  [6578] = 11,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(108), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6620] = 11,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(109), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6662] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(30), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(401), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6708] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(31), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6754] = 11,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(111), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6796] = 11,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(112), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6838] = 11,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(40), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6880] = 3,
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
  [6906] = 12,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    STATE(123), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(180), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6950] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(24), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(405), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6996] = 11,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym__number,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(363), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(70), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7038] = 3,
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
  [7064] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(36), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(407), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7110] = 11,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym__number,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(363), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(64), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7152] = 3,
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
  [7178] = 11,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym__number,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(363), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(66), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7220] = 11,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym__number,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(363), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(80), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7262] = 13,
    ACTIONS(149), 1,
      sym_keyword_null,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    STATE(18), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(409), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7308] = 11,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym__number,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(363), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(74), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7350] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 16,
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
  [7373] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(413), 16,
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
  [7396] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 16,
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
  [7419] = 11,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(321), 1,
      sym_keyword_in,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(315), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(331), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(397), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(329), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7460] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 16,
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
  [7483] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(419), 15,
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
  [7505] = 10,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7543] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(425), 15,
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
  [7565] = 10,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_CARET,
    ACTIONS(321), 1,
      sym_keyword_in,
    ACTIONS(323), 1,
      anon_sym_PLUS,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(315), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(331), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(397), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(329), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7603] = 10,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7641] = 7,
    ACTIONS(427), 1,
      sym_keyword_left,
    ACTIONS(430), 1,
      sym_keyword_right,
    ACTIONS(436), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(182), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
    ACTIONS(439), 7,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7673] = 3,
    ACTIONS(443), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(441), 13,
      sym_keyword_select,
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
  [7696] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 14,
      sym_keyword_select,
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
  [7717] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 14,
      sym_keyword_select,
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
  [7738] = 9,
    ACTIONS(449), 1,
      sym_keyword_set,
    ACTIONS(451), 1,
      sym_keyword_alter,
    ACTIONS(453), 1,
      sym_keyword_drop,
    ACTIONS(455), 1,
      sym_keyword_add,
    ACTIONS(457), 1,
      sym_keyword_rename,
    ACTIONS(459), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(513), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(659), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [7772] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(461), 13,
      sym_keyword_select,
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
  [7792] = 9,
    ACTIONS(449), 1,
      sym_keyword_set,
    ACTIONS(451), 1,
      sym_keyword_alter,
    ACTIONS(453), 1,
      sym_keyword_drop,
    ACTIONS(455), 1,
      sym_keyword_add,
    ACTIONS(457), 1,
      sym_keyword_rename,
    ACTIONS(459), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(524), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(673), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [7826] = 10,
    ACTIONS(465), 1,
      sym_keyword_primary,
    ACTIONS(467), 1,
      sym_keyword_not,
    ACTIONS(469), 1,
      sym_keyword_auto_increment,
    ACTIONS(471), 1,
      sym_keyword_default,
    STATE(343), 1,
      sym__primary_key,
    STATE(482), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(216), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(473), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7862] = 13,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(475), 1,
      sym_keyword_primary,
    ACTIONS(477), 1,
      sym_keyword_key,
    ACTIONS(479), 1,
      sym_keyword_constraint,
    STATE(6), 1,
      sym_identifier,
    STATE(559), 1,
      sym_constraint,
    STATE(564), 1,
      sym__key_constraint,
    STATE(565), 1,
      sym_column_definition,
    STATE(569), 1,
      sym__constraint_literal,
    STATE(571), 1,
      sym__primary_key_constraint,
    STATE(596), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7903] = 2,
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
  [7922] = 2,
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
  [7941] = 2,
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
  [7960] = 2,
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
  [7979] = 4,
    ACTIONS(483), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(485), 1,
      aux_sym_keyword_timestamp_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8001] = 3,
    ACTIONS(489), 1,
      aux_sym_keyword_varchar_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 10,
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
  [8021] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      sym__literal_string,
    STATE(516), 1,
      sym_literal,
    STATE(517), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8050] = 3,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8069] = 3,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(495), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8088] = 10,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(499), 1,
      sym_keyword_from,
    ACTIONS(501), 1,
      sym_keyword_as,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      aux_sym_select_expression_repeat1,
    STATE(395), 1,
      sym_identifier,
    STATE(396), 1,
      sym__alias,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(503), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8121] = 3,
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
  [8140] = 3,
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
  [8159] = 3,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(507), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8178] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      sym__literal_string,
    STATE(545), 1,
      sym_select,
    STATE(547), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8207] = 3,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(511), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8226] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(515), 10,
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
  [8243] = 3,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(517), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8262] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 10,
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
  [8279] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      sym__literal_string,
    STATE(467), 1,
      sym_select,
    STATE(493), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8308] = 10,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(501), 1,
      sym_keyword_as,
    ACTIONS(503), 1,
      anon_sym_SEMI,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      sym__alias,
    STATE(375), 1,
      aux_sym_select_expression_repeat1,
    STATE(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(499), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
  [8341] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(523), 10,
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
  [8358] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(525), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8374] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(527), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8390] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(529), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8406] = 8,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(339), 1,
      sym_keyword_as,
    ACTIONS(531), 1,
      anon_sym_DOT,
    STATE(172), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(337), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [8434] = 7,
    ACTIONS(465), 1,
      sym_keyword_primary,
    ACTIONS(533), 1,
      sym_keyword_auto_increment,
    STATE(337), 1,
      sym__primary_key,
    STATE(525), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(535), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8460] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(537), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8476] = 5,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(61), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [8498] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(541), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8514] = 3,
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
  [8532] = 3,
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
  [8550] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(543), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8566] = 8,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(501), 1,
      sym_keyword_as,
    ACTIONS(545), 1,
      sym_keyword_from,
    STATE(362), 1,
      sym__alias,
    STATE(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8594] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(549), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8610] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(551), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8626] = 8,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(501), 1,
      sym_keyword_as,
    STATE(362), 1,
      sym__alias,
    STATE(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(547), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8654] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(553), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8670] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(555), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8686] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(557), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8702] = 5,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(63), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [8724] = 6,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      sym_direction,
    STATE(348), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(563), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8748] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(567), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8764] = 4,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8784] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(573), 1,
      sym_keyword_as,
    ACTIONS(575), 1,
      anon_sym_DOT,
    STATE(172), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [8810] = 4,
    ACTIONS(577), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(67), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [8829] = 6,
    ACTIONS(465), 1,
      sym_keyword_primary,
    STATE(349), 1,
      sym__primary_key,
    STATE(495), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(579), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8852] = 9,
    ACTIONS(581), 1,
      sym_keyword_table,
    ACTIONS(583), 1,
      sym_keyword_view,
    ACTIONS(585), 1,
      sym_keyword_materialized,
    ACTIONS(587), 1,
      sym_keyword_or,
    ACTIONS(589), 1,
      sym_keyword_temp,
    ACTIONS(591), 1,
      sym_keyword_temporary,
    STATE(608), 1,
      sym__or_replace,
    STATE(719), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8881] = 6,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      sym__literal_string,
    STATE(508), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8904] = 6,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      sym__literal_string,
    STATE(547), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8927] = 6,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym__literal_string,
    STATE(460), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8950] = 8,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(320), 1,
      sym_group_by,
    STATE(419), 1,
      sym_order_by,
    STATE(511), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [8977] = 8,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(321), 1,
      sym_group_by,
    STATE(423), 1,
      sym_order_by,
    STATE(518), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [9004] = 8,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(595), 1,
      sym_keyword_default,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    STATE(668), 1,
      sym_identifier,
    STATE(682), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(276), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9031] = 7,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(383), 1,
      sym_keyword_as,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(381), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [9056] = 8,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(324), 1,
      sym_group_by,
    STATE(421), 1,
      sym_order_by,
    STATE(511), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9083] = 6,
    ACTIONS(465), 1,
      sym_keyword_primary,
    STATE(337), 1,
      sym__primary_key,
    STATE(525), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(535), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9106] = 8,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(351), 1,
      sym_group_by,
    STATE(422), 1,
      sym_order_by,
    STATE(518), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9133] = 9,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(599), 1,
      sym_keyword_as,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    STATE(395), 1,
      sym_identifier,
    STATE(549), 1,
      sym__alias,
    STATE(550), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9162] = 3,
    ACTIONS(603), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(67), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9179] = 8,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(322), 1,
      sym_group_by,
    STATE(430), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(347), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [9206] = 6,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym__literal_string,
    STATE(398), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [9229] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(605), 1,
      sym_keyword_as,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [9252] = 8,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(538), 1,
      sym_table_reference,
    STATE(758), 1,
      sym__table_references,
    STATE(760), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(759), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [9279] = 8,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(595), 1,
      sym_keyword_default,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    STATE(667), 1,
      sym_table_options,
    STATE(668), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(276), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9306] = 6,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym__literal_string,
    STATE(508), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [9329] = 8,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(263), 1,
      sym_keyword_group_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(342), 1,
      sym_group_by,
    STATE(448), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(347), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9356] = 3,
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
  [9373] = 3,
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
  [9390] = 4,
    STATE(384), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(611), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9409] = 9,
    ACTIONS(465), 1,
      sym_keyword_primary,
    ACTIONS(613), 1,
      sym_keyword_key,
    ACTIONS(615), 1,
      sym_keyword_constraint,
    STATE(564), 1,
      sym__key_constraint,
    STATE(569), 1,
      sym__constraint_literal,
    STATE(571), 1,
      sym__primary_key_constraint,
    STATE(596), 1,
      sym__primary_key,
    STATE(609), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9438] = 3,
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
  [9455] = 3,
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
  [9472] = 6,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      sym__literal_string,
    STATE(583), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [9495] = 4,
    ACTIONS(617), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(67), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(69), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9514] = 8,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(595), 1,
      sym_keyword_default,
    ACTIONS(619), 1,
      anon_sym_SEMI,
    STATE(668), 1,
      sym_identifier,
    STATE(776), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(276), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9541] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(621), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9555] = 3,
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
  [9571] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(625), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(623), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9587] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(627), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(629), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9603] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(631), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(633), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9619] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(629), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(627), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9635] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(635), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9649] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(637), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(639), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9665] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(113), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9681] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(641), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9695] = 7,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(595), 1,
      sym_keyword_default,
    ACTIONS(643), 1,
      anon_sym_SEMI,
    STATE(668), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(304), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9719] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(647), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(645), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9735] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(651), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9751] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(109), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9767] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(653), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(621), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9783] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(657), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(655), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9799] = 8,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    ACTIONS(659), 1,
      anon_sym_SEMI,
    STATE(359), 1,
      sym_where,
    STATE(543), 1,
      sym_order_by,
    STATE(657), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9825] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(639), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(637), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9841] = 8,
    ACTIONS(259), 1,
      sym_keyword_where,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    ACTIONS(661), 1,
      anon_sym_SEMI,
    STATE(387), 1,
      sym_where,
    STATE(553), 1,
      sym_order_by,
    STATE(663), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9867] = 5,
    ACTIONS(449), 1,
      sym_keyword_set,
    ACTIONS(457), 1,
      sym_keyword_rename,
    ACTIONS(459), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(628), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [9887] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(621), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(653), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9903] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(91), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9919] = 3,
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
  [9935] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(111), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9951] = 7,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(599), 1,
      sym_keyword_as,
    STATE(362), 1,
      sym__alias,
    STATE(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9975] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(663), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9991] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(633), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(631), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10007] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(651), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(649), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10023] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(115), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10039] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(655), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(657), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10055] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(669), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(667), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10071] = 5,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(673), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(61), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [10091] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(91), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10107] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(657), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10121] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(639), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10135] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(651), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10149] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(647), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10163] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(625), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10179] = 7,
    ACTIONS(675), 1,
      sym_keyword_default,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    ACTIONS(680), 1,
      anon_sym_BQUOTE,
    ACTIONS(683), 1,
      sym__identifier,
    STATE(668), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(304), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [10203] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(629), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10217] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(633), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10231] = 4,
    ACTIONS(688), 1,
      sym_keyword_having,
    STATE(380), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(686), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10249] = 5,
    ACTIONS(449), 1,
      sym_keyword_set,
    ACTIONS(457), 1,
      sym_keyword_rename,
    ACTIONS(459), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(696), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [10269] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(663), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(665), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10285] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(625), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10299] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(93), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10315] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10329] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(669), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10343] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(93), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10357] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(667), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(669), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10373] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(93), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10389] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(645), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(647), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10405] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(690), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [10422] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(448), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(347), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10443] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(415), 1,
      sym_order_by,
    STATE(483), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(692), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10464] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(419), 1,
      sym_order_by,
    STATE(511), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10485] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(423), 1,
      sym_order_by,
    STATE(518), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10506] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(430), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(347), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10527] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(452), 1,
      sym_order_by,
    STATE(483), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(692), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10548] = 7,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(694), 1,
      sym_keyword_if,
    STATE(400), 1,
      sym__if_not_exists,
    STATE(526), 1,
      sym_identifier,
    STATE(625), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10571] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(694), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(401), 1,
      sym__if_not_exists,
    STATE(655), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10594] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(696), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(186), 1,
      sym_table_reference,
    STATE(403), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10617] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(696), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(285), 1,
      sym_table_reference,
    STATE(404), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10640] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(696), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(405), 1,
      sym__if_exists,
    STATE(616), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10663] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(696), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(406), 1,
      sym__if_exists,
    STATE(614), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10686] = 4,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [10703] = 6,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(640), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(388), 2,
      sym_invocation,
      sym_subquery,
  [10724] = 4,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(611), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10741] = 7,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(708), 1,
      sym_keyword_values,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(410), 1,
      sym__column_list_without_order,
    STATE(488), 1,
      sym_select,
    STATE(629), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10764] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(694), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(413), 1,
      sym__if_not_exists,
    STATE(646), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10787] = 7,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(694), 1,
      sym_keyword_if,
    STATE(414), 1,
      sym__if_not_exists,
    STATE(526), 1,
      sym_identifier,
    STATE(601), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10810] = 4,
    STATE(495), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(579), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10827] = 6,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(640), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(394), 2,
      sym_invocation,
      sym_subquery,
  [10848] = 4,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(712), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10865] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(694), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(417), 1,
      sym__if_not_exists,
    STATE(651), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10888] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(714), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10901] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(422), 1,
      sym_order_by,
    STATE(518), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10922] = 4,
    STATE(525), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(535), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10939] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(716), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10952] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(694), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(440), 1,
      sym__if_not_exists,
    STATE(662), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10975] = 6,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(640), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(389), 2,
      sym_invocation,
      sym_subquery,
  [10996] = 4,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(718), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11013] = 4,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(718), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11030] = 4,
    STATE(515), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(720), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11047] = 5,
    ACTIONS(451), 1,
      sym_keyword_alter,
    ACTIONS(453), 1,
      sym_keyword_drop,
    ACTIONS(455), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(579), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [11066] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(421), 1,
      sym_order_by,
    STATE(511), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11087] = 7,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(694), 1,
      sym_keyword_if,
    STATE(6), 1,
      sym_identifier,
    STATE(447), 1,
      sym__if_not_exists,
    STATE(603), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11110] = 4,
    ACTIONS(722), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(67), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11127] = 6,
    ACTIONS(724), 1,
      sym_keyword_lateral,
    ACTIONS(726), 1,
      anon_sym_BQUOTE,
    ACTIONS(728), 1,
      sym__identifier,
    STATE(234), 1,
      sym_identifier,
    STATE(393), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11147] = 6,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(696), 1,
      sym_keyword_if,
    STATE(465), 1,
      sym__if_exists,
    STATE(606), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11167] = 4,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(730), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11183] = 6,
    ACTIONS(726), 1,
      anon_sym_BQUOTE,
    ACTIONS(728), 1,
      sym__identifier,
    ACTIONS(732), 1,
      sym_keyword_lateral,
    STATE(234), 1,
      sym_identifier,
    STATE(381), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11203] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(653), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(621), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11217] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    STATE(480), 1,
      sym_order_by,
    STATE(725), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11237] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(113), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11251] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(637), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(639), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11265] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(736), 5,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11277] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(655), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(657), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11291] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(651), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11305] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(645), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(647), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11319] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(334), 1,
      sym_table_reference,
    STATE(665), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11339] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(627), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(629), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11353] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(631), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(633), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11367] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(109), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11381] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(625), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11395] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(663), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(665), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11409] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(93), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11423] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(667), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(669), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11437] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(91), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(93), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11451] = 4,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(730), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11467] = 4,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(738), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11483] = 4,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(740), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11499] = 6,
    ACTIONS(726), 1,
      anon_sym_BQUOTE,
    ACTIONS(728), 1,
      sym__identifier,
    ACTIONS(745), 1,
      sym_keyword_lateral,
    STATE(234), 1,
      sym_identifier,
    STATE(391), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11519] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(747), 1,
      sym_keyword_column,
    ACTIONS(749), 1,
      sym_keyword_to,
    STATE(693), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11539] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(751), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11551] = 5,
    ACTIONS(753), 1,
      sym_keyword_on,
    ACTIONS(755), 1,
      sym_keyword_using,
    STATE(611), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(267), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11569] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11581] = 4,
    STATE(592), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(759), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11597] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(761), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11609] = 4,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(740), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11625] = 4,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(738), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11641] = 6,
    ACTIONS(261), 1,
      sym_keyword_order_by,
    ACTIONS(265), 1,
      sym_keyword_limit,
    ACTIONS(766), 1,
      anon_sym_SEMI,
    STATE(512), 1,
      sym_order_by,
    STATE(775), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11661] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(768), 1,
      sym_keyword_on,
    ACTIONS(770), 1,
      sym_keyword_as,
    STATE(699), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11681] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(772), 1,
      sym_keyword_on,
    ACTIONS(774), 1,
      sym_keyword_as,
    STATE(783), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11701] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(776), 5,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11713] = 5,
    ACTIONS(778), 1,
      sym_keyword_on,
    ACTIONS(780), 1,
      sym_keyword_using,
    STATE(600), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(267), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11731] = 4,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(730), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11747] = 5,
    ACTIONS(782), 1,
      sym_keyword_on,
    ACTIONS(784), 1,
      sym_keyword_using,
    STATE(618), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(267), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11765] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(786), 1,
      sym_keyword_on,
    ACTIONS(788), 1,
      sym_keyword_as,
    STATE(727), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11785] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(790), 5,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11797] = 4,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(730), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11813] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(792), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11824] = 4,
    ACTIONS(794), 1,
      sym_keyword_offset,
    STATE(510), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(796), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11839] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [11852] = 5,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(526), 1,
      sym_identifier,
    STATE(601), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11869] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(651), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11886] = 5,
    ACTIONS(726), 1,
      anon_sym_BQUOTE,
    ACTIONS(798), 1,
      sym__identifier,
    STATE(234), 1,
      sym_identifier,
    STATE(393), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11903] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(188), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11920] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(308), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11937] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(587), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11954] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(586), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11971] = 3,
    ACTIONS(651), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [11984] = 3,
    ACTIONS(633), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(631), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [11997] = 5,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(562), 1,
      sym__column_without_order,
    STATE(576), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12014] = 5,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(800), 1,
      sym_keyword_values,
    STATE(488), 1,
      sym_select,
    STATE(637), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12031] = 3,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [12044] = 5,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(431), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12061] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(662), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12078] = 5,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(526), 1,
      sym_identifier,
    STATE(588), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12095] = 4,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(509), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(804), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12110] = 5,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_column_definitions_repeat1,
    STATE(666), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12127] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(674), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12144] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(810), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(812), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [12157] = 4,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(483), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(692), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12172] = 3,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [12185] = 4,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(483), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(692), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12200] = 4,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(511), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12215] = 4,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(511), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12230] = 4,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(347), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12245] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(814), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12256] = 5,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    ACTIONS(816), 1,
      anon_sym_STAR,
    STATE(274), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12273] = 5,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(818), 1,
      anon_sym_STAR,
    ACTIONS(820), 1,
      sym__identifier,
    STATE(360), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12290] = 5,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    STATE(383), 1,
      sym_identifier,
    STATE(486), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12307] = 5,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(820), 1,
      sym__identifier,
    ACTIONS(822), 1,
      anon_sym_STAR,
    STATE(353), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12324] = 4,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(518), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12339] = 5,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      aux_sym_column_definitions_repeat1,
    STATE(777), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12356] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(826), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(828), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [12369] = 5,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(565), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12386] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(830), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12397] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(832), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(834), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [12410] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(604), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12427] = 4,
    ACTIONS(273), 1,
      sym_keyword_limit,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(347), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12442] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(836), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(838), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [12455] = 5,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    ACTIONS(840), 1,
      anon_sym_STAR,
    STATE(235), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12472] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(768), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12489] = 5,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(574), 1,
      sym__column_without_order,
    STATE(576), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12506] = 5,
    ACTIONS(842), 1,
      anon_sym_BQUOTE,
    ACTIONS(844), 1,
      sym__identifier,
    STATE(91), 1,
      sym_table_expression,
    STATE(118), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12523] = 4,
    ACTIONS(846), 1,
      sym_keyword_from,
    STATE(763), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(267), 2,
      sym_keyword_force,
      sym_keyword_use,
  [12538] = 5,
    ACTIONS(848), 1,
      anon_sym_BQUOTE,
    ACTIONS(850), 1,
      sym__identifier,
    STATE(215), 1,
      sym_identifier,
    STATE(282), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12555] = 4,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(690), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [12570] = 4,
    ACTIONS(852), 1,
      sym_keyword_from,
    STATE(573), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(854), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12585] = 5,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(615), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12602] = 4,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(518), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12617] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(856), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(858), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [12630] = 5,
    ACTIONS(860), 1,
      anon_sym_BQUOTE,
    ACTIONS(862), 1,
      sym__identifier,
    STATE(89), 1,
      sym_table_expression,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12647] = 5,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(526), 1,
      sym_identifier,
    STATE(671), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12664] = 4,
    ACTIONS(265), 1,
      sym_keyword_limit,
    STATE(509), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(804), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12679] = 5,
    ACTIONS(726), 1,
      anon_sym_BQUOTE,
    ACTIONS(798), 1,
      sym__identifier,
    STATE(234), 1,
      sym_identifier,
    STATE(391), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12696] = 5,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(864), 1,
      anon_sym_STAR,
    ACTIONS(866), 1,
      sym__identifier,
    STATE(294), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12713] = 4,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [12728] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [12741] = 5,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    STATE(383), 1,
      sym_identifier,
    STATE(582), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12758] = 5,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    ACTIONS(871), 1,
      anon_sym_STAR,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12775] = 5,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    ACTIONS(873), 1,
      anon_sym_STAR,
    STATE(249), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12792] = 4,
    ACTIONS(875), 1,
      sym_keyword_offset,
    STATE(510), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(796), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12807] = 5,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(866), 1,
      sym__identifier,
    ACTIONS(877), 1,
      anon_sym_STAR,
    STATE(264), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12824] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(879), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12835] = 4,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12849] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(390), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12863] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(617), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12877] = 4,
    ACTIONS(885), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(887), 1,
      anon_sym_SEMI,
    STATE(602), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12891] = 4,
    ACTIONS(889), 1,
      sym_keyword_from,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(737), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12905] = 4,
    ACTIONS(893), 1,
      sym_keyword_select,
    STATE(446), 1,
      sym_select,
    STATE(466), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12919] = 4,
    ACTIONS(842), 1,
      anon_sym_BQUOTE,
    ACTIONS(844), 1,
      sym__identifier,
    STATE(136), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12933] = 4,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    STATE(470), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12947] = 4,
    ACTIONS(900), 1,
      sym_keyword_not,
    ACTIONS(902), 1,
      sym_keyword_default,
    ACTIONS(904), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12961] = 4,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12975] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12989] = 4,
    ACTIONS(893), 1,
      sym_keyword_select,
    STATE(446), 1,
      sym_select,
    STATE(476), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13003] = 4,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(544), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13017] = 4,
    ACTIONS(885), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(917), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13031] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(699), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13045] = 4,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(919), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13059] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13073] = 4,
    ACTIONS(265), 1,
      sym_keyword_limit,
    ACTIONS(923), 1,
      anon_sym_SEMI,
    STATE(644), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13087] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13097] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(535), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13107] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(804), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13117] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(734), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13131] = 4,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    STATE(556), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13145] = 4,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13159] = 4,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(919), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13173] = 4,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    ACTIONS(889), 1,
      sym_keyword_from,
    STATE(573), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13187] = 4,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    STATE(489), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13201] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(647), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13215] = 4,
    ACTIONS(936), 1,
      anon_sym_BQUOTE,
    ACTIONS(938), 1,
      sym__identifier,
    STATE(449), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13229] = 4,
    ACTIONS(940), 1,
      sym_keyword_set,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13243] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(479), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13257] = 4,
    ACTIONS(889), 1,
      sym_keyword_from,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(722), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13271] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(720), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13281] = 4,
    ACTIONS(726), 1,
      anon_sym_BQUOTE,
    ACTIONS(798), 1,
      sym__identifier,
    STATE(252), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13295] = 4,
    ACTIONS(949), 1,
      sym_keyword_where,
    ACTIONS(951), 1,
      anon_sym_SEMI,
    STATE(664), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13309] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(727), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13323] = 4,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(953), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13337] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13351] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(683), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13365] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13379] = 4,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_SEMI,
    STATE(470), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13393] = 4,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(953), 1,
      sym__identifier,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13407] = 4,
    ACTIONS(885), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(961), 1,
      anon_sym_SEMI,
    STATE(591), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13421] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(669), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13435] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(708), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13449] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(963), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13459] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(965), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13469] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(967), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13479] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(692), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13489] = 4,
    ACTIONS(265), 1,
      sym_keyword_limit,
    ACTIONS(969), 1,
      anon_sym_SEMI,
    STATE(653), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13503] = 4,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_SEMI,
    STATE(503), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13517] = 4,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    ACTIONS(975), 1,
      anon_sym_COMMA,
    STATE(514), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13531] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(978), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13541] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13555] = 4,
    ACTIONS(889), 1,
      sym_keyword_from,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(697), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13569] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13579] = 4,
    ACTIONS(848), 1,
      anon_sym_BQUOTE,
    ACTIONS(850), 1,
      sym__identifier,
    STATE(244), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13593] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(534), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13607] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13621] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(762), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13635] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(660), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13649] = 4,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_SEMI,
    STATE(540), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13663] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(579), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13673] = 3,
    ACTIONS(984), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(441), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [13685] = 4,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13699] = 4,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    STATE(307), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13713] = 4,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13727] = 4,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13741] = 4,
    ACTIONS(893), 1,
      sym_keyword_select,
    STATE(446), 1,
      sym_select,
    STATE(505), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13755] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(390), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13769] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(806), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13783] = 4,
    ACTIONS(996), 1,
      sym_keyword_set,
    ACTIONS(998), 1,
      sym_keyword_drop,
    ACTIONS(1000), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13797] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(488), 1,
      sym_select,
    STATE(688), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13811] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(488), 1,
      sym_select,
    STATE(808), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13825] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(347), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13835] = 4,
    ACTIONS(1002), 1,
      sym_keyword_set,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    STATE(546), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13849] = 4,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(802), 1,
      sym__identifier,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13863] = 4,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_SEMI,
    STATE(470), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13877] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13891] = 4,
    ACTIONS(860), 1,
      anon_sym_BQUOTE,
    ACTIONS(862), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13905] = 4,
    ACTIONS(265), 1,
      sym_keyword_limit,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    STATE(725), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13919] = 4,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    STATE(544), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13933] = 4,
    ACTIONS(889), 1,
      sym_keyword_from,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(772), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13947] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      sym_keyword_set,
    STATE(492), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13961] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13975] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(187), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13989] = 4,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14003] = 4,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14017] = 4,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(489), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14031] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(187), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14045] = 4,
    ACTIONS(265), 1,
      sym_keyword_limit,
    ACTIONS(766), 1,
      anon_sym_SEMI,
    STATE(775), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14059] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14073] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(488), 1,
      sym_select,
    STATE(670), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14087] = 4,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(514), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14101] = 4,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14115] = 4,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    STATE(558), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14129] = 4,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(551), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14143] = 4,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    ACTIONS(703), 1,
      sym__identifier,
    STATE(572), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14157] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(567), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14171] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14185] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1032), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14194] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1034), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14203] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(906), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14212] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1036), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14221] = 3,
    ACTIONS(465), 1,
      sym_keyword_primary,
    STATE(610), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14232] = 3,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14243] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1034), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14252] = 3,
    ACTIONS(1038), 1,
      sym_keyword_no,
    ACTIONS(1040), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14263] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1042), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14272] = 3,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
    STATE(613), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14283] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1046), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14292] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1048), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14301] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1050), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [14310] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1052), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14319] = 3,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14330] = 3,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(494), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14341] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(898), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14350] = 3,
    ACTIONS(1058), 1,
      sym_keyword_for,
    ACTIONS(1060), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14361] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1062), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14370] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(991), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14379] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(986), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14388] = 3,
    ACTIONS(1064), 1,
      sym_keyword_outer,
    ACTIONS(1066), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14399] = 3,
    ACTIONS(1068), 1,
      sym_keyword_outer,
    ACTIONS(1070), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14410] = 3,
    ACTIONS(1072), 1,
      sym_keyword_cascade,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14421] = 3,
    ACTIONS(1076), 1,
      sym_keyword_cascade,
    ACTIONS(1078), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14432] = 3,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
    STATE(243), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14443] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1082), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1084), 2,
      sym_keyword_no,
      sym_keyword_data,
  [14461] = 3,
    ACTIONS(1086), 1,
      sym_keyword_no,
    ACTIONS(1088), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14472] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1090), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14481] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1092), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14490] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1094), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [14499] = 3,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14510] = 3,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
    STATE(566), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14521] = 3,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
    STATE(773), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14532] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14541] = 3,
    ACTIONS(1102), 1,
      sym_keyword_from,
    STATE(689), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14552] = 3,
    ACTIONS(782), 1,
      sym_keyword_on,
    ACTIONS(784), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14563] = 3,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14574] = 3,
    ACTIONS(1104), 1,
      sym_keyword_no,
    ACTIONS(1106), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14585] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1108), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14594] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(940), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [14603] = 3,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14614] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1110), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14623] = 3,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
    STATE(637), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14634] = 3,
    ACTIONS(1112), 1,
      sym_keyword_view,
    ACTIONS(1114), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14645] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(931), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14654] = 3,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
    STATE(563), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14665] = 3,
    ACTIONS(778), 1,
      sym_keyword_on,
    ACTIONS(780), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14676] = 3,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14687] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1116), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14696] = 3,
    ACTIONS(1118), 1,
      sym_keyword_cascade,
    ACTIONS(1120), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14707] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1122), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14716] = 3,
    ACTIONS(1124), 1,
      sym_keyword_cascade,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14727] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1128), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14736] = 3,
    ACTIONS(1130), 1,
      sym_keyword_on,
    ACTIONS(1132), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14747] = 3,
    ACTIONS(900), 1,
      sym_keyword_not,
    ACTIONS(1134), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14758] = 3,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14769] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1136), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14778] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1138), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [14787] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1140), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14796] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1142), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14805] = 3,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
    STATE(254), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14816] = 3,
    ACTIONS(1144), 1,
      sym_keyword_table,
    ACTIONS(1146), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14827] = 3,
    ACTIONS(1148), 1,
      sym_keyword_table,
    ACTIONS(1150), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14838] = 2,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14846] = 2,
    ACTIONS(1154), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14854] = 2,
    ACTIONS(1156), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14862] = 2,
    ACTIONS(1070), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14870] = 2,
    ACTIONS(1158), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14878] = 2,
    ACTIONS(1160), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14886] = 2,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14894] = 2,
    ACTIONS(1164), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14902] = 2,
    ACTIONS(1166), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14910] = 2,
    ACTIONS(1168), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14918] = 2,
    ACTIONS(1170), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14926] = 2,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14934] = 2,
    ACTIONS(1174), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14942] = 2,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14950] = 2,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14958] = 2,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14966] = 2,
    ACTIONS(1182), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14974] = 2,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14982] = 2,
    ACTIONS(1184), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14990] = 2,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14998] = 2,
    ACTIONS(1188), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15006] = 2,
    ACTIONS(1190), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15014] = 2,
    ACTIONS(1192), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15022] = 2,
    ACTIONS(1194), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15030] = 2,
    ACTIONS(1078), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15038] = 2,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15046] = 2,
    ACTIONS(1198), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15054] = 2,
    ACTIONS(1200), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15062] = 2,
    ACTIONS(1202), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15070] = 2,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15078] = 2,
    ACTIONS(1204), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15086] = 2,
    ACTIONS(971), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15094] = 2,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15102] = 2,
    ACTIONS(1208), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15110] = 2,
    ACTIONS(1210), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15118] = 2,
    ACTIONS(766), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15126] = 2,
    ACTIONS(1212), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15134] = 2,
    ACTIONS(1214), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15142] = 2,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15150] = 2,
    ACTIONS(619), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15158] = 2,
    ACTIONS(1218), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15166] = 2,
    ACTIONS(1220), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15174] = 2,
    ACTIONS(1222), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15182] = 2,
    ACTIONS(1224), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15190] = 2,
    ACTIONS(1226), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15198] = 2,
    ACTIONS(959), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15206] = 2,
    ACTIONS(1228), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15214] = 2,
    ACTIONS(1230), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15222] = 2,
    ACTIONS(1230), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15230] = 2,
    ACTIONS(1232), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15238] = 2,
    ACTIONS(1234), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15246] = 2,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15254] = 2,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15262] = 2,
    ACTIONS(1188), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15270] = 2,
    ACTIONS(1240), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15278] = 2,
    ACTIONS(1242), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15286] = 2,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15294] = 2,
    ACTIONS(1246), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15302] = 2,
    ACTIONS(1248), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15310] = 2,
    ACTIONS(1250), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15318] = 2,
    ACTIONS(1252), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15326] = 2,
    ACTIONS(1254), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15334] = 2,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15342] = 2,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15350] = 2,
    ACTIONS(1260), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15358] = 2,
    ACTIONS(1262), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15366] = 2,
    ACTIONS(1264), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15374] = 2,
    ACTIONS(1266), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15382] = 2,
    ACTIONS(1268), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15390] = 2,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15398] = 2,
    ACTIONS(1272), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15406] = 2,
    ACTIONS(1274), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15414] = 2,
    ACTIONS(1276), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15422] = 2,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15430] = 2,
    ACTIONS(1280), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15438] = 2,
    ACTIONS(1282), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15446] = 2,
    ACTIONS(1284), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15454] = 2,
    ACTIONS(1286), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15462] = 2,
    ACTIONS(1286), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15470] = 2,
    ACTIONS(1288), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15478] = 2,
    ACTIONS(1290), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15486] = 2,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15494] = 2,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15502] = 2,
    ACTIONS(1106), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15510] = 2,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15518] = 2,
    ACTIONS(1298), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15526] = 2,
    ACTIONS(1300), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15534] = 2,
    ACTIONS(1302), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15542] = 2,
    ACTIONS(1304), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15550] = 2,
    ACTIONS(1306), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15558] = 2,
    ACTIONS(1308), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15566] = 2,
    ACTIONS(1310), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15574] = 2,
    ACTIONS(1312), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15582] = 2,
    ACTIONS(1314), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15590] = 2,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15598] = 2,
    ACTIONS(1318), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15606] = 2,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15614] = 2,
    ACTIONS(923), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15622] = 2,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15630] = 2,
    ACTIONS(1324), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15638] = 2,
    ACTIONS(1326), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15646] = 2,
    ACTIONS(1326), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15654] = 2,
    ACTIONS(1328), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15662] = 2,
    ACTIONS(1330), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15670] = 2,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15678] = 2,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15686] = 2,
    ACTIONS(1336), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15694] = 2,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15702] = 2,
    ACTIONS(1340), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15710] = 2,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15718] = 2,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15726] = 2,
    ACTIONS(1346), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15734] = 2,
    ACTIONS(1346), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15742] = 2,
    ACTIONS(1348), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15750] = 2,
    ACTIONS(1350), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15758] = 2,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15766] = 2,
    ACTIONS(1354), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15774] = 2,
    ACTIONS(1354), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15782] = 2,
    ACTIONS(1356), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15790] = 2,
    ACTIONS(1358), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15798] = 2,
    ACTIONS(1360), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15806] = 2,
    ACTIONS(1362), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15814] = 2,
    ACTIONS(1364), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15822] = 2,
    ACTIONS(1366), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15830] = 2,
    ACTIONS(1368), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15838] = 2,
    ACTIONS(887), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15846] = 2,
    ACTIONS(1372), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [15854] = 2,
    ACTIONS(1374), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [15862] = 2,
    ACTIONS(1376), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15870] = 2,
    ACTIONS(1040), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15878] = 2,
    ACTIONS(1378), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15886] = 2,
    ACTIONS(1380), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15894] = 2,
    ACTIONS(1382), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15902] = 2,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15910] = 2,
    ACTIONS(1386), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15918] = 2,
    ACTIONS(1388), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15926] = 2,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15934] = 2,
    ACTIONS(1392), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15942] = 2,
    ACTIONS(1394), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15950] = 2,
    ACTIONS(1396), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15958] = 2,
    ACTIONS(1398), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15966] = 2,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15974] = 2,
    ACTIONS(1402), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15982] = 2,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15990] = 2,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15998] = 2,
    ACTIONS(1408), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16006] = 2,
    ACTIONS(1410), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16014] = 2,
    ACTIONS(969), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16022] = 2,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16030] = 2,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16038] = 2,
    ACTIONS(1412), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16046] = 2,
    ACTIONS(1414), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16054] = 2,
    ACTIONS(1416), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16062] = 2,
    ACTIONS(1418), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16070] = 2,
    ACTIONS(1420), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16078] = 2,
    ACTIONS(1422), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16086] = 2,
    ACTIONS(1424), 1,
      aux_sym_double_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16094] = 2,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16102] = 2,
    ACTIONS(1428), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16110] = 2,
    ACTIONS(1430), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16118] = 2,
    ACTIONS(1432), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16126] = 2,
    ACTIONS(1434), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16134] = 2,
    ACTIONS(1436), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16142] = 2,
    ACTIONS(1438), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16150] = 2,
    ACTIONS(1440), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16158] = 2,
    ACTIONS(1442), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16166] = 2,
    ACTIONS(1444), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16174] = 2,
    ACTIONS(1446), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16182] = 2,
    ACTIONS(1448), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1370), 2,
      sym_comment,
      sym_marginalia,
  [16190] = 2,
    ACTIONS(1450), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16198] = 2,
    ACTIONS(1452), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16206] = 2,
    ACTIONS(1454), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16214] = 2,
    ACTIONS(1456), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16222] = 2,
    ACTIONS(1458), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16230] = 2,
    ACTIONS(1460), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16238] = 2,
    ACTIONS(1462), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16246] = 2,
    ACTIONS(1464), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16254] = 2,
    ACTIONS(1466), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16262] = 2,
    ACTIONS(1468), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16270] = 2,
    ACTIONS(1470), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16278] = 2,
    ACTIONS(1472), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16286] = 2,
    ACTIONS(1474), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16294] = 2,
    ACTIONS(1476), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 194,
  [SMALL_STATE(6)] = 272,
  [SMALL_STATE(7)] = 350,
  [SMALL_STATE(8)] = 399,
  [SMALL_STATE(9)] = 448,
  [SMALL_STATE(10)] = 487,
  [SMALL_STATE(11)] = 524,
  [SMALL_STATE(12)] = 563,
  [SMALL_STATE(13)] = 600,
  [SMALL_STATE(14)] = 638,
  [SMALL_STATE(15)] = 674,
  [SMALL_STATE(16)] = 712,
  [SMALL_STATE(17)] = 748,
  [SMALL_STATE(18)] = 786,
  [SMALL_STATE(19)] = 824,
  [SMALL_STATE(20)] = 862,
  [SMALL_STATE(21)] = 900,
  [SMALL_STATE(22)] = 936,
  [SMALL_STATE(23)] = 974,
  [SMALL_STATE(24)] = 1010,
  [SMALL_STATE(25)] = 1048,
  [SMALL_STATE(26)] = 1086,
  [SMALL_STATE(27)] = 1124,
  [SMALL_STATE(28)] = 1162,
  [SMALL_STATE(29)] = 1200,
  [SMALL_STATE(30)] = 1238,
  [SMALL_STATE(31)] = 1276,
  [SMALL_STATE(32)] = 1314,
  [SMALL_STATE(33)] = 1350,
  [SMALL_STATE(34)] = 1386,
  [SMALL_STATE(35)] = 1424,
  [SMALL_STATE(36)] = 1462,
  [SMALL_STATE(37)] = 1500,
  [SMALL_STATE(38)] = 1538,
  [SMALL_STATE(39)] = 1576,
  [SMALL_STATE(40)] = 1612,
  [SMALL_STATE(41)] = 1658,
  [SMALL_STATE(42)] = 1710,
  [SMALL_STATE(43)] = 1748,
  [SMALL_STATE(44)] = 1784,
  [SMALL_STATE(45)] = 1826,
  [SMALL_STATE(46)] = 1864,
  [SMALL_STATE(47)] = 1902,
  [SMALL_STATE(48)] = 1950,
  [SMALL_STATE(49)] = 2015,
  [SMALL_STATE(50)] = 2048,
  [SMALL_STATE(51)] = 2113,
  [SMALL_STATE(52)] = 2178,
  [SMALL_STATE(53)] = 2243,
  [SMALL_STATE(54)] = 2308,
  [SMALL_STATE(55)] = 2341,
  [SMALL_STATE(56)] = 2406,
  [SMALL_STATE(57)] = 2441,
  [SMALL_STATE(58)] = 2506,
  [SMALL_STATE(59)] = 2571,
  [SMALL_STATE(60)] = 2636,
  [SMALL_STATE(61)] = 2669,
  [SMALL_STATE(62)] = 2702,
  [SMALL_STATE(63)] = 2737,
  [SMALL_STATE(64)] = 2769,
  [SMALL_STATE(65)] = 2807,
  [SMALL_STATE(66)] = 2855,
  [SMALL_STATE(67)] = 2897,
  [SMALL_STATE(68)] = 2929,
  [SMALL_STATE(69)] = 2961,
  [SMALL_STATE(70)] = 2993,
  [SMALL_STATE(71)] = 3025,
  [SMALL_STATE(72)] = 3087,
  [SMALL_STATE(73)] = 3119,
  [SMALL_STATE(74)] = 3151,
  [SMALL_STATE(75)] = 3195,
  [SMALL_STATE(76)] = 3257,
  [SMALL_STATE(77)] = 3289,
  [SMALL_STATE(78)] = 3351,
  [SMALL_STATE(79)] = 3383,
  [SMALL_STATE(80)] = 3445,
  [SMALL_STATE(81)] = 3479,
  [SMALL_STATE(82)] = 3538,
  [SMALL_STATE(83)] = 3597,
  [SMALL_STATE(84)] = 3656,
  [SMALL_STATE(85)] = 3715,
  [SMALL_STATE(86)] = 3774,
  [SMALL_STATE(87)] = 3830,
  [SMALL_STATE(88)] = 3886,
  [SMALL_STATE(89)] = 3934,
  [SMALL_STATE(90)] = 3992,
  [SMALL_STATE(91)] = 4048,
  [SMALL_STATE(92)] = 4106,
  [SMALL_STATE(93)] = 4142,
  [SMALL_STATE(94)] = 4198,
  [SMALL_STATE(95)] = 4229,
  [SMALL_STATE(96)] = 4282,
  [SMALL_STATE(97)] = 4313,
  [SMALL_STATE(98)] = 4366,
  [SMALL_STATE(99)] = 4397,
  [SMALL_STATE(100)] = 4428,
  [SMALL_STATE(101)] = 4460,
  [SMALL_STATE(102)] = 4510,
  [SMALL_STATE(103)] = 4538,
  [SMALL_STATE(104)] = 4588,
  [SMALL_STATE(105)] = 4638,
  [SMALL_STATE(106)] = 4688,
  [SMALL_STATE(107)] = 4716,
  [SMALL_STATE(108)] = 4750,
  [SMALL_STATE(109)] = 4780,
  [SMALL_STATE(110)] = 4820,
  [SMALL_STATE(111)] = 4854,
  [SMALL_STATE(112)] = 4896,
  [SMALL_STATE(113)] = 4934,
  [SMALL_STATE(114)] = 4962,
  [SMALL_STATE(115)] = 4990,
  [SMALL_STATE(116)] = 5018,
  [SMALL_STATE(117)] = 5063,
  [SMALL_STATE(118)] = 5114,
  [SMALL_STATE(119)] = 5151,
  [SMALL_STATE(120)] = 5184,
  [SMALL_STATE(121)] = 5235,
  [SMALL_STATE(122)] = 5286,
  [SMALL_STATE(123)] = 5337,
  [SMALL_STATE(124)] = 5366,
  [SMALL_STATE(125)] = 5417,
  [SMALL_STATE(126)] = 5464,
  [SMALL_STATE(127)] = 5501,
  [SMALL_STATE(128)] = 5552,
  [SMALL_STATE(129)] = 5597,
  [SMALL_STATE(130)] = 5644,
  [SMALL_STATE(131)] = 5686,
  [SMALL_STATE(132)] = 5728,
  [SMALL_STATE(133)] = 5756,
  [SMALL_STATE(134)] = 5790,
  [SMALL_STATE(135)] = 5836,
  [SMALL_STATE(136)] = 5880,
  [SMALL_STATE(137)] = 5914,
  [SMALL_STATE(138)] = 5942,
  [SMALL_STATE(139)] = 5988,
  [SMALL_STATE(140)] = 6034,
  [SMALL_STATE(141)] = 6078,
  [SMALL_STATE(142)] = 6120,
  [SMALL_STATE(143)] = 6162,
  [SMALL_STATE(144)] = 6204,
  [SMALL_STATE(145)] = 6246,
  [SMALL_STATE(146)] = 6288,
  [SMALL_STATE(147)] = 6330,
  [SMALL_STATE(148)] = 6376,
  [SMALL_STATE(149)] = 6422,
  [SMALL_STATE(150)] = 6464,
  [SMALL_STATE(151)] = 6510,
  [SMALL_STATE(152)] = 6552,
  [SMALL_STATE(153)] = 6578,
  [SMALL_STATE(154)] = 6620,
  [SMALL_STATE(155)] = 6662,
  [SMALL_STATE(156)] = 6708,
  [SMALL_STATE(157)] = 6754,
  [SMALL_STATE(158)] = 6796,
  [SMALL_STATE(159)] = 6838,
  [SMALL_STATE(160)] = 6880,
  [SMALL_STATE(161)] = 6906,
  [SMALL_STATE(162)] = 6950,
  [SMALL_STATE(163)] = 6996,
  [SMALL_STATE(164)] = 7038,
  [SMALL_STATE(165)] = 7064,
  [SMALL_STATE(166)] = 7110,
  [SMALL_STATE(167)] = 7152,
  [SMALL_STATE(168)] = 7178,
  [SMALL_STATE(169)] = 7220,
  [SMALL_STATE(170)] = 7262,
  [SMALL_STATE(171)] = 7308,
  [SMALL_STATE(172)] = 7350,
  [SMALL_STATE(173)] = 7373,
  [SMALL_STATE(174)] = 7396,
  [SMALL_STATE(175)] = 7419,
  [SMALL_STATE(176)] = 7460,
  [SMALL_STATE(177)] = 7483,
  [SMALL_STATE(178)] = 7505,
  [SMALL_STATE(179)] = 7543,
  [SMALL_STATE(180)] = 7565,
  [SMALL_STATE(181)] = 7603,
  [SMALL_STATE(182)] = 7641,
  [SMALL_STATE(183)] = 7673,
  [SMALL_STATE(184)] = 7696,
  [SMALL_STATE(185)] = 7717,
  [SMALL_STATE(186)] = 7738,
  [SMALL_STATE(187)] = 7772,
  [SMALL_STATE(188)] = 7792,
  [SMALL_STATE(189)] = 7826,
  [SMALL_STATE(190)] = 7862,
  [SMALL_STATE(191)] = 7903,
  [SMALL_STATE(192)] = 7922,
  [SMALL_STATE(193)] = 7941,
  [SMALL_STATE(194)] = 7960,
  [SMALL_STATE(195)] = 7979,
  [SMALL_STATE(196)] = 8001,
  [SMALL_STATE(197)] = 8021,
  [SMALL_STATE(198)] = 8050,
  [SMALL_STATE(199)] = 8069,
  [SMALL_STATE(200)] = 8088,
  [SMALL_STATE(201)] = 8121,
  [SMALL_STATE(202)] = 8140,
  [SMALL_STATE(203)] = 8159,
  [SMALL_STATE(204)] = 8178,
  [SMALL_STATE(205)] = 8207,
  [SMALL_STATE(206)] = 8226,
  [SMALL_STATE(207)] = 8243,
  [SMALL_STATE(208)] = 8262,
  [SMALL_STATE(209)] = 8279,
  [SMALL_STATE(210)] = 8308,
  [SMALL_STATE(211)] = 8341,
  [SMALL_STATE(212)] = 8358,
  [SMALL_STATE(213)] = 8374,
  [SMALL_STATE(214)] = 8390,
  [SMALL_STATE(215)] = 8406,
  [SMALL_STATE(216)] = 8434,
  [SMALL_STATE(217)] = 8460,
  [SMALL_STATE(218)] = 8476,
  [SMALL_STATE(219)] = 8498,
  [SMALL_STATE(220)] = 8514,
  [SMALL_STATE(221)] = 8532,
  [SMALL_STATE(222)] = 8550,
  [SMALL_STATE(223)] = 8566,
  [SMALL_STATE(224)] = 8594,
  [SMALL_STATE(225)] = 8610,
  [SMALL_STATE(226)] = 8626,
  [SMALL_STATE(227)] = 8654,
  [SMALL_STATE(228)] = 8670,
  [SMALL_STATE(229)] = 8686,
  [SMALL_STATE(230)] = 8702,
  [SMALL_STATE(231)] = 8724,
  [SMALL_STATE(232)] = 8748,
  [SMALL_STATE(233)] = 8764,
  [SMALL_STATE(234)] = 8784,
  [SMALL_STATE(235)] = 8810,
  [SMALL_STATE(236)] = 8829,
  [SMALL_STATE(237)] = 8852,
  [SMALL_STATE(238)] = 8881,
  [SMALL_STATE(239)] = 8904,
  [SMALL_STATE(240)] = 8927,
  [SMALL_STATE(241)] = 8950,
  [SMALL_STATE(242)] = 8977,
  [SMALL_STATE(243)] = 9004,
  [SMALL_STATE(244)] = 9031,
  [SMALL_STATE(245)] = 9056,
  [SMALL_STATE(246)] = 9083,
  [SMALL_STATE(247)] = 9106,
  [SMALL_STATE(248)] = 9133,
  [SMALL_STATE(249)] = 9162,
  [SMALL_STATE(250)] = 9179,
  [SMALL_STATE(251)] = 9206,
  [SMALL_STATE(252)] = 9229,
  [SMALL_STATE(253)] = 9252,
  [SMALL_STATE(254)] = 9279,
  [SMALL_STATE(255)] = 9306,
  [SMALL_STATE(256)] = 9329,
  [SMALL_STATE(257)] = 9356,
  [SMALL_STATE(258)] = 9373,
  [SMALL_STATE(259)] = 9390,
  [SMALL_STATE(260)] = 9409,
  [SMALL_STATE(261)] = 9438,
  [SMALL_STATE(262)] = 9455,
  [SMALL_STATE(263)] = 9472,
  [SMALL_STATE(264)] = 9495,
  [SMALL_STATE(265)] = 9514,
  [SMALL_STATE(266)] = 9541,
  [SMALL_STATE(267)] = 9555,
  [SMALL_STATE(268)] = 9571,
  [SMALL_STATE(269)] = 9587,
  [SMALL_STATE(270)] = 9603,
  [SMALL_STATE(271)] = 9619,
  [SMALL_STATE(272)] = 9635,
  [SMALL_STATE(273)] = 9649,
  [SMALL_STATE(274)] = 9665,
  [SMALL_STATE(275)] = 9681,
  [SMALL_STATE(276)] = 9695,
  [SMALL_STATE(277)] = 9719,
  [SMALL_STATE(278)] = 9735,
  [SMALL_STATE(279)] = 9751,
  [SMALL_STATE(280)] = 9767,
  [SMALL_STATE(281)] = 9783,
  [SMALL_STATE(282)] = 9799,
  [SMALL_STATE(283)] = 9825,
  [SMALL_STATE(284)] = 9841,
  [SMALL_STATE(285)] = 9867,
  [SMALL_STATE(286)] = 9887,
  [SMALL_STATE(287)] = 9903,
  [SMALL_STATE(288)] = 9919,
  [SMALL_STATE(289)] = 9935,
  [SMALL_STATE(290)] = 9951,
  [SMALL_STATE(291)] = 9975,
  [SMALL_STATE(292)] = 9991,
  [SMALL_STATE(293)] = 10007,
  [SMALL_STATE(294)] = 10023,
  [SMALL_STATE(295)] = 10039,
  [SMALL_STATE(296)] = 10055,
  [SMALL_STATE(297)] = 10071,
  [SMALL_STATE(298)] = 10091,
  [SMALL_STATE(299)] = 10107,
  [SMALL_STATE(300)] = 10121,
  [SMALL_STATE(301)] = 10135,
  [SMALL_STATE(302)] = 10149,
  [SMALL_STATE(303)] = 10163,
  [SMALL_STATE(304)] = 10179,
  [SMALL_STATE(305)] = 10203,
  [SMALL_STATE(306)] = 10217,
  [SMALL_STATE(307)] = 10231,
  [SMALL_STATE(308)] = 10249,
  [SMALL_STATE(309)] = 10269,
  [SMALL_STATE(310)] = 10285,
  [SMALL_STATE(311)] = 10299,
  [SMALL_STATE(312)] = 10315,
  [SMALL_STATE(313)] = 10329,
  [SMALL_STATE(314)] = 10343,
  [SMALL_STATE(315)] = 10357,
  [SMALL_STATE(316)] = 10373,
  [SMALL_STATE(317)] = 10389,
  [SMALL_STATE(318)] = 10405,
  [SMALL_STATE(319)] = 10422,
  [SMALL_STATE(320)] = 10443,
  [SMALL_STATE(321)] = 10464,
  [SMALL_STATE(322)] = 10485,
  [SMALL_STATE(323)] = 10506,
  [SMALL_STATE(324)] = 10527,
  [SMALL_STATE(325)] = 10548,
  [SMALL_STATE(326)] = 10571,
  [SMALL_STATE(327)] = 10594,
  [SMALL_STATE(328)] = 10617,
  [SMALL_STATE(329)] = 10640,
  [SMALL_STATE(330)] = 10663,
  [SMALL_STATE(331)] = 10686,
  [SMALL_STATE(332)] = 10703,
  [SMALL_STATE(333)] = 10724,
  [SMALL_STATE(334)] = 10741,
  [SMALL_STATE(335)] = 10764,
  [SMALL_STATE(336)] = 10787,
  [SMALL_STATE(337)] = 10810,
  [SMALL_STATE(338)] = 10827,
  [SMALL_STATE(339)] = 10848,
  [SMALL_STATE(340)] = 10865,
  [SMALL_STATE(341)] = 10888,
  [SMALL_STATE(342)] = 10901,
  [SMALL_STATE(343)] = 10922,
  [SMALL_STATE(344)] = 10939,
  [SMALL_STATE(345)] = 10952,
  [SMALL_STATE(346)] = 10975,
  [SMALL_STATE(347)] = 10996,
  [SMALL_STATE(348)] = 11013,
  [SMALL_STATE(349)] = 11030,
  [SMALL_STATE(350)] = 11047,
  [SMALL_STATE(351)] = 11066,
  [SMALL_STATE(352)] = 11087,
  [SMALL_STATE(353)] = 11110,
  [SMALL_STATE(354)] = 11127,
  [SMALL_STATE(355)] = 11147,
  [SMALL_STATE(356)] = 11167,
  [SMALL_STATE(357)] = 11183,
  [SMALL_STATE(358)] = 11203,
  [SMALL_STATE(359)] = 11217,
  [SMALL_STATE(360)] = 11237,
  [SMALL_STATE(361)] = 11251,
  [SMALL_STATE(362)] = 11265,
  [SMALL_STATE(363)] = 11277,
  [SMALL_STATE(364)] = 11291,
  [SMALL_STATE(365)] = 11305,
  [SMALL_STATE(366)] = 11319,
  [SMALL_STATE(367)] = 11339,
  [SMALL_STATE(368)] = 11353,
  [SMALL_STATE(369)] = 11367,
  [SMALL_STATE(370)] = 11381,
  [SMALL_STATE(371)] = 11395,
  [SMALL_STATE(372)] = 11409,
  [SMALL_STATE(373)] = 11423,
  [SMALL_STATE(374)] = 11437,
  [SMALL_STATE(375)] = 11451,
  [SMALL_STATE(376)] = 11467,
  [SMALL_STATE(377)] = 11483,
  [SMALL_STATE(378)] = 11499,
  [SMALL_STATE(379)] = 11519,
  [SMALL_STATE(380)] = 11539,
  [SMALL_STATE(381)] = 11551,
  [SMALL_STATE(382)] = 11569,
  [SMALL_STATE(383)] = 11581,
  [SMALL_STATE(384)] = 11597,
  [SMALL_STATE(385)] = 11609,
  [SMALL_STATE(386)] = 11625,
  [SMALL_STATE(387)] = 11641,
  [SMALL_STATE(388)] = 11661,
  [SMALL_STATE(389)] = 11681,
  [SMALL_STATE(390)] = 11701,
  [SMALL_STATE(391)] = 11713,
  [SMALL_STATE(392)] = 11731,
  [SMALL_STATE(393)] = 11747,
  [SMALL_STATE(394)] = 11765,
  [SMALL_STATE(395)] = 11785,
  [SMALL_STATE(396)] = 11797,
  [SMALL_STATE(397)] = 11813,
  [SMALL_STATE(398)] = 11824,
  [SMALL_STATE(399)] = 11839,
  [SMALL_STATE(400)] = 11852,
  [SMALL_STATE(401)] = 11869,
  [SMALL_STATE(402)] = 11886,
  [SMALL_STATE(403)] = 11903,
  [SMALL_STATE(404)] = 11920,
  [SMALL_STATE(405)] = 11937,
  [SMALL_STATE(406)] = 11954,
  [SMALL_STATE(407)] = 11971,
  [SMALL_STATE(408)] = 11984,
  [SMALL_STATE(409)] = 11997,
  [SMALL_STATE(410)] = 12014,
  [SMALL_STATE(411)] = 12031,
  [SMALL_STATE(412)] = 12044,
  [SMALL_STATE(413)] = 12061,
  [SMALL_STATE(414)] = 12078,
  [SMALL_STATE(415)] = 12095,
  [SMALL_STATE(416)] = 12110,
  [SMALL_STATE(417)] = 12127,
  [SMALL_STATE(418)] = 12144,
  [SMALL_STATE(419)] = 12157,
  [SMALL_STATE(420)] = 12172,
  [SMALL_STATE(421)] = 12185,
  [SMALL_STATE(422)] = 12200,
  [SMALL_STATE(423)] = 12215,
  [SMALL_STATE(424)] = 12230,
  [SMALL_STATE(425)] = 12245,
  [SMALL_STATE(426)] = 12256,
  [SMALL_STATE(427)] = 12273,
  [SMALL_STATE(428)] = 12290,
  [SMALL_STATE(429)] = 12307,
  [SMALL_STATE(430)] = 12324,
  [SMALL_STATE(431)] = 12339,
  [SMALL_STATE(432)] = 12356,
  [SMALL_STATE(433)] = 12369,
  [SMALL_STATE(434)] = 12386,
  [SMALL_STATE(435)] = 12397,
  [SMALL_STATE(436)] = 12410,
  [SMALL_STATE(437)] = 12427,
  [SMALL_STATE(438)] = 12442,
  [SMALL_STATE(439)] = 12455,
  [SMALL_STATE(440)] = 12472,
  [SMALL_STATE(441)] = 12489,
  [SMALL_STATE(442)] = 12506,
  [SMALL_STATE(443)] = 12523,
  [SMALL_STATE(444)] = 12538,
  [SMALL_STATE(445)] = 12555,
  [SMALL_STATE(446)] = 12570,
  [SMALL_STATE(447)] = 12585,
  [SMALL_STATE(448)] = 12602,
  [SMALL_STATE(449)] = 12617,
  [SMALL_STATE(450)] = 12630,
  [SMALL_STATE(451)] = 12647,
  [SMALL_STATE(452)] = 12664,
  [SMALL_STATE(453)] = 12679,
  [SMALL_STATE(454)] = 12696,
  [SMALL_STATE(455)] = 12713,
  [SMALL_STATE(456)] = 12728,
  [SMALL_STATE(457)] = 12741,
  [SMALL_STATE(458)] = 12758,
  [SMALL_STATE(459)] = 12775,
  [SMALL_STATE(460)] = 12792,
  [SMALL_STATE(461)] = 12807,
  [SMALL_STATE(462)] = 12824,
  [SMALL_STATE(463)] = 12835,
  [SMALL_STATE(464)] = 12849,
  [SMALL_STATE(465)] = 12863,
  [SMALL_STATE(466)] = 12877,
  [SMALL_STATE(467)] = 12891,
  [SMALL_STATE(468)] = 12905,
  [SMALL_STATE(469)] = 12919,
  [SMALL_STATE(470)] = 12933,
  [SMALL_STATE(471)] = 12947,
  [SMALL_STATE(472)] = 12961,
  [SMALL_STATE(473)] = 12975,
  [SMALL_STATE(474)] = 12989,
  [SMALL_STATE(475)] = 13003,
  [SMALL_STATE(476)] = 13017,
  [SMALL_STATE(477)] = 13031,
  [SMALL_STATE(478)] = 13045,
  [SMALL_STATE(479)] = 13059,
  [SMALL_STATE(480)] = 13073,
  [SMALL_STATE(481)] = 13087,
  [SMALL_STATE(482)] = 13097,
  [SMALL_STATE(483)] = 13107,
  [SMALL_STATE(484)] = 13117,
  [SMALL_STATE(485)] = 13131,
  [SMALL_STATE(486)] = 13145,
  [SMALL_STATE(487)] = 13159,
  [SMALL_STATE(488)] = 13173,
  [SMALL_STATE(489)] = 13187,
  [SMALL_STATE(490)] = 13201,
  [SMALL_STATE(491)] = 13215,
  [SMALL_STATE(492)] = 13229,
  [SMALL_STATE(493)] = 13243,
  [SMALL_STATE(494)] = 13257,
  [SMALL_STATE(495)] = 13271,
  [SMALL_STATE(496)] = 13281,
  [SMALL_STATE(497)] = 13295,
  [SMALL_STATE(498)] = 13309,
  [SMALL_STATE(499)] = 13323,
  [SMALL_STATE(500)] = 13337,
  [SMALL_STATE(501)] = 13351,
  [SMALL_STATE(502)] = 13365,
  [SMALL_STATE(503)] = 13379,
  [SMALL_STATE(504)] = 13393,
  [SMALL_STATE(505)] = 13407,
  [SMALL_STATE(506)] = 13421,
  [SMALL_STATE(507)] = 13435,
  [SMALL_STATE(508)] = 13449,
  [SMALL_STATE(509)] = 13459,
  [SMALL_STATE(510)] = 13469,
  [SMALL_STATE(511)] = 13479,
  [SMALL_STATE(512)] = 13489,
  [SMALL_STATE(513)] = 13503,
  [SMALL_STATE(514)] = 13517,
  [SMALL_STATE(515)] = 13531,
  [SMALL_STATE(516)] = 13541,
  [SMALL_STATE(517)] = 13555,
  [SMALL_STATE(518)] = 13569,
  [SMALL_STATE(519)] = 13579,
  [SMALL_STATE(520)] = 13593,
  [SMALL_STATE(521)] = 13607,
  [SMALL_STATE(522)] = 13621,
  [SMALL_STATE(523)] = 13635,
  [SMALL_STATE(524)] = 13649,
  [SMALL_STATE(525)] = 13663,
  [SMALL_STATE(526)] = 13673,
  [SMALL_STATE(527)] = 13685,
  [SMALL_STATE(528)] = 13699,
  [SMALL_STATE(529)] = 13713,
  [SMALL_STATE(530)] = 13727,
  [SMALL_STATE(531)] = 13741,
  [SMALL_STATE(532)] = 13755,
  [SMALL_STATE(533)] = 13769,
  [SMALL_STATE(534)] = 13783,
  [SMALL_STATE(535)] = 13797,
  [SMALL_STATE(536)] = 13811,
  [SMALL_STATE(537)] = 13825,
  [SMALL_STATE(538)] = 13835,
  [SMALL_STATE(539)] = 13849,
  [SMALL_STATE(540)] = 13863,
  [SMALL_STATE(541)] = 13877,
  [SMALL_STATE(542)] = 13891,
  [SMALL_STATE(543)] = 13905,
  [SMALL_STATE(544)] = 13919,
  [SMALL_STATE(545)] = 13933,
  [SMALL_STATE(546)] = 13947,
  [SMALL_STATE(547)] = 13961,
  [SMALL_STATE(548)] = 13975,
  [SMALL_STATE(549)] = 13989,
  [SMALL_STATE(550)] = 14003,
  [SMALL_STATE(551)] = 14017,
  [SMALL_STATE(552)] = 14031,
  [SMALL_STATE(553)] = 14045,
  [SMALL_STATE(554)] = 14059,
  [SMALL_STATE(555)] = 14073,
  [SMALL_STATE(556)] = 14087,
  [SMALL_STATE(557)] = 14101,
  [SMALL_STATE(558)] = 14115,
  [SMALL_STATE(559)] = 14129,
  [SMALL_STATE(560)] = 14143,
  [SMALL_STATE(561)] = 14157,
  [SMALL_STATE(562)] = 14171,
  [SMALL_STATE(563)] = 14185,
  [SMALL_STATE(564)] = 14194,
  [SMALL_STATE(565)] = 14203,
  [SMALL_STATE(566)] = 14212,
  [SMALL_STATE(567)] = 14221,
  [SMALL_STATE(568)] = 14232,
  [SMALL_STATE(569)] = 14243,
  [SMALL_STATE(570)] = 14252,
  [SMALL_STATE(571)] = 14263,
  [SMALL_STATE(572)] = 14272,
  [SMALL_STATE(573)] = 14283,
  [SMALL_STATE(574)] = 14292,
  [SMALL_STATE(575)] = 14301,
  [SMALL_STATE(576)] = 14310,
  [SMALL_STATE(577)] = 14319,
  [SMALL_STATE(578)] = 14330,
  [SMALL_STATE(579)] = 14341,
  [SMALL_STATE(580)] = 14350,
  [SMALL_STATE(581)] = 14361,
  [SMALL_STATE(582)] = 14370,
  [SMALL_STATE(583)] = 14379,
  [SMALL_STATE(584)] = 14388,
  [SMALL_STATE(585)] = 14399,
  [SMALL_STATE(586)] = 14410,
  [SMALL_STATE(587)] = 14421,
  [SMALL_STATE(588)] = 14432,
  [SMALL_STATE(589)] = 14443,
  [SMALL_STATE(590)] = 14452,
  [SMALL_STATE(591)] = 14461,
  [SMALL_STATE(592)] = 14472,
  [SMALL_STATE(593)] = 14481,
  [SMALL_STATE(594)] = 14490,
  [SMALL_STATE(595)] = 14499,
  [SMALL_STATE(596)] = 14510,
  [SMALL_STATE(597)] = 14521,
  [SMALL_STATE(598)] = 14532,
  [SMALL_STATE(599)] = 14541,
  [SMALL_STATE(600)] = 14552,
  [SMALL_STATE(601)] = 14563,
  [SMALL_STATE(602)] = 14574,
  [SMALL_STATE(603)] = 14585,
  [SMALL_STATE(604)] = 14594,
  [SMALL_STATE(605)] = 14603,
  [SMALL_STATE(606)] = 14614,
  [SMALL_STATE(607)] = 14623,
  [SMALL_STATE(608)] = 14634,
  [SMALL_STATE(609)] = 14645,
  [SMALL_STATE(610)] = 14654,
  [SMALL_STATE(611)] = 14665,
  [SMALL_STATE(612)] = 14676,
  [SMALL_STATE(613)] = 14687,
  [SMALL_STATE(614)] = 14696,
  [SMALL_STATE(615)] = 14707,
  [SMALL_STATE(616)] = 14716,
  [SMALL_STATE(617)] = 14727,
  [SMALL_STATE(618)] = 14736,
  [SMALL_STATE(619)] = 14747,
  [SMALL_STATE(620)] = 14758,
  [SMALL_STATE(621)] = 14769,
  [SMALL_STATE(622)] = 14778,
  [SMALL_STATE(623)] = 14787,
  [SMALL_STATE(624)] = 14796,
  [SMALL_STATE(625)] = 14805,
  [SMALL_STATE(626)] = 14816,
  [SMALL_STATE(627)] = 14827,
  [SMALL_STATE(628)] = 14838,
  [SMALL_STATE(629)] = 14846,
  [SMALL_STATE(630)] = 14854,
  [SMALL_STATE(631)] = 14862,
  [SMALL_STATE(632)] = 14870,
  [SMALL_STATE(633)] = 14878,
  [SMALL_STATE(634)] = 14886,
  [SMALL_STATE(635)] = 14894,
  [SMALL_STATE(636)] = 14902,
  [SMALL_STATE(637)] = 14910,
  [SMALL_STATE(638)] = 14918,
  [SMALL_STATE(639)] = 14926,
  [SMALL_STATE(640)] = 14934,
  [SMALL_STATE(641)] = 14942,
  [SMALL_STATE(642)] = 14950,
  [SMALL_STATE(643)] = 14958,
  [SMALL_STATE(644)] = 14966,
  [SMALL_STATE(645)] = 14974,
  [SMALL_STATE(646)] = 14982,
  [SMALL_STATE(647)] = 14990,
  [SMALL_STATE(648)] = 14998,
  [SMALL_STATE(649)] = 15006,
  [SMALL_STATE(650)] = 15014,
  [SMALL_STATE(651)] = 15022,
  [SMALL_STATE(652)] = 15030,
  [SMALL_STATE(653)] = 15038,
  [SMALL_STATE(654)] = 15046,
  [SMALL_STATE(655)] = 15054,
  [SMALL_STATE(656)] = 15062,
  [SMALL_STATE(657)] = 15070,
  [SMALL_STATE(658)] = 15078,
  [SMALL_STATE(659)] = 15086,
  [SMALL_STATE(660)] = 15094,
  [SMALL_STATE(661)] = 15102,
  [SMALL_STATE(662)] = 15110,
  [SMALL_STATE(663)] = 15118,
  [SMALL_STATE(664)] = 15126,
  [SMALL_STATE(665)] = 15134,
  [SMALL_STATE(666)] = 15142,
  [SMALL_STATE(667)] = 15150,
  [SMALL_STATE(668)] = 15158,
  [SMALL_STATE(669)] = 15166,
  [SMALL_STATE(670)] = 15174,
  [SMALL_STATE(671)] = 15182,
  [SMALL_STATE(672)] = 15190,
  [SMALL_STATE(673)] = 15198,
  [SMALL_STATE(674)] = 15206,
  [SMALL_STATE(675)] = 15214,
  [SMALL_STATE(676)] = 15222,
  [SMALL_STATE(677)] = 15230,
  [SMALL_STATE(678)] = 15238,
  [SMALL_STATE(679)] = 15246,
  [SMALL_STATE(680)] = 15254,
  [SMALL_STATE(681)] = 15262,
  [SMALL_STATE(682)] = 15270,
  [SMALL_STATE(683)] = 15278,
  [SMALL_STATE(684)] = 15286,
  [SMALL_STATE(685)] = 15294,
  [SMALL_STATE(686)] = 15302,
  [SMALL_STATE(687)] = 15310,
  [SMALL_STATE(688)] = 15318,
  [SMALL_STATE(689)] = 15326,
  [SMALL_STATE(690)] = 15334,
  [SMALL_STATE(691)] = 15342,
  [SMALL_STATE(692)] = 15350,
  [SMALL_STATE(693)] = 15358,
  [SMALL_STATE(694)] = 15366,
  [SMALL_STATE(695)] = 15374,
  [SMALL_STATE(696)] = 15382,
  [SMALL_STATE(697)] = 15390,
  [SMALL_STATE(698)] = 15398,
  [SMALL_STATE(699)] = 15406,
  [SMALL_STATE(700)] = 15414,
  [SMALL_STATE(701)] = 15422,
  [SMALL_STATE(702)] = 15430,
  [SMALL_STATE(703)] = 15438,
  [SMALL_STATE(704)] = 15446,
  [SMALL_STATE(705)] = 15454,
  [SMALL_STATE(706)] = 15462,
  [SMALL_STATE(707)] = 15470,
  [SMALL_STATE(708)] = 15478,
  [SMALL_STATE(709)] = 15486,
  [SMALL_STATE(710)] = 15494,
  [SMALL_STATE(711)] = 15502,
  [SMALL_STATE(712)] = 15510,
  [SMALL_STATE(713)] = 15518,
  [SMALL_STATE(714)] = 15526,
  [SMALL_STATE(715)] = 15534,
  [SMALL_STATE(716)] = 15542,
  [SMALL_STATE(717)] = 15550,
  [SMALL_STATE(718)] = 15558,
  [SMALL_STATE(719)] = 15566,
  [SMALL_STATE(720)] = 15574,
  [SMALL_STATE(721)] = 15582,
  [SMALL_STATE(722)] = 15590,
  [SMALL_STATE(723)] = 15598,
  [SMALL_STATE(724)] = 15606,
  [SMALL_STATE(725)] = 15614,
  [SMALL_STATE(726)] = 15622,
  [SMALL_STATE(727)] = 15630,
  [SMALL_STATE(728)] = 15638,
  [SMALL_STATE(729)] = 15646,
  [SMALL_STATE(730)] = 15654,
  [SMALL_STATE(731)] = 15662,
  [SMALL_STATE(732)] = 15670,
  [SMALL_STATE(733)] = 15678,
  [SMALL_STATE(734)] = 15686,
  [SMALL_STATE(735)] = 15694,
  [SMALL_STATE(736)] = 15702,
  [SMALL_STATE(737)] = 15710,
  [SMALL_STATE(738)] = 15718,
  [SMALL_STATE(739)] = 15726,
  [SMALL_STATE(740)] = 15734,
  [SMALL_STATE(741)] = 15742,
  [SMALL_STATE(742)] = 15750,
  [SMALL_STATE(743)] = 15758,
  [SMALL_STATE(744)] = 15766,
  [SMALL_STATE(745)] = 15774,
  [SMALL_STATE(746)] = 15782,
  [SMALL_STATE(747)] = 15790,
  [SMALL_STATE(748)] = 15798,
  [SMALL_STATE(749)] = 15806,
  [SMALL_STATE(750)] = 15814,
  [SMALL_STATE(751)] = 15822,
  [SMALL_STATE(752)] = 15830,
  [SMALL_STATE(753)] = 15838,
  [SMALL_STATE(754)] = 15846,
  [SMALL_STATE(755)] = 15854,
  [SMALL_STATE(756)] = 15862,
  [SMALL_STATE(757)] = 15870,
  [SMALL_STATE(758)] = 15878,
  [SMALL_STATE(759)] = 15886,
  [SMALL_STATE(760)] = 15894,
  [SMALL_STATE(761)] = 15902,
  [SMALL_STATE(762)] = 15910,
  [SMALL_STATE(763)] = 15918,
  [SMALL_STATE(764)] = 15926,
  [SMALL_STATE(765)] = 15934,
  [SMALL_STATE(766)] = 15942,
  [SMALL_STATE(767)] = 15950,
  [SMALL_STATE(768)] = 15958,
  [SMALL_STATE(769)] = 15966,
  [SMALL_STATE(770)] = 15974,
  [SMALL_STATE(771)] = 15982,
  [SMALL_STATE(772)] = 15990,
  [SMALL_STATE(773)] = 15998,
  [SMALL_STATE(774)] = 16006,
  [SMALL_STATE(775)] = 16014,
  [SMALL_STATE(776)] = 16022,
  [SMALL_STATE(777)] = 16030,
  [SMALL_STATE(778)] = 16038,
  [SMALL_STATE(779)] = 16046,
  [SMALL_STATE(780)] = 16054,
  [SMALL_STATE(781)] = 16062,
  [SMALL_STATE(782)] = 16070,
  [SMALL_STATE(783)] = 16078,
  [SMALL_STATE(784)] = 16086,
  [SMALL_STATE(785)] = 16094,
  [SMALL_STATE(786)] = 16102,
  [SMALL_STATE(787)] = 16110,
  [SMALL_STATE(788)] = 16118,
  [SMALL_STATE(789)] = 16126,
  [SMALL_STATE(790)] = 16134,
  [SMALL_STATE(791)] = 16142,
  [SMALL_STATE(792)] = 16150,
  [SMALL_STATE(793)] = 16158,
  [SMALL_STATE(794)] = 16166,
  [SMALL_STATE(795)] = 16174,
  [SMALL_STATE(796)] = 16182,
  [SMALL_STATE(797)] = 16190,
  [SMALL_STATE(798)] = 16198,
  [SMALL_STATE(799)] = 16206,
  [SMALL_STATE(800)] = 16214,
  [SMALL_STATE(801)] = 16222,
  [SMALL_STATE(802)] = 16230,
  [SMALL_STATE(803)] = 16238,
  [SMALL_STATE(804)] = 16246,
  [SMALL_STATE(805)] = 16254,
  [SMALL_STATE(806)] = 16262,
  [SMALL_STATE(807)] = 16270,
  [SMALL_STATE(808)] = 16278,
  [SMALL_STATE(809)] = 16286,
  [SMALL_STATE(810)] = 16294,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 9, .production_id = 48),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 20),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7, .production_id = 45),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 8, .production_id = 47),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 24),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 24),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6, .production_id = 43),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 11),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 11),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 29),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 12),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 35),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 18),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 30),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 37),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 25),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(585),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(584),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(631),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(357),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 26),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 26),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 11),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 27),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_expression, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 41),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 46),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 27),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_int, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_expression_repeat1, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 46),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 41),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 42),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 42),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 41),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 27),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_expression_repeat1, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 36),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_all_fields, 3, .production_id = 9),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 3, .production_id = 9),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 3, .production_id = 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 3, .production_id = 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_all_fields, 5, .production_id = 23),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 5, .production_id = 23),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 13),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 13),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 4, .production_id = 16),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 4, .production_id = 16),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 36),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 19),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 19),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_all_fields, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(438),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(770),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(202),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(140),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_expression_repeat1, 2), SHIFT_REPEAT(104),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 27),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 2, .production_id = 3),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 3, .production_id = 14),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 3, .production_id = 6),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2, .production_id = 7),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(101),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_expression_repeat1, 3),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(103),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 2, .production_id = 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 1, .production_id = 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 17),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 17),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 32),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 32),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(161),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(350),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(433),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 1, .production_id = 8),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(260),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(436),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22), SHIFT_REPEAT(85),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 27),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(263),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(457),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(441),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 15),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(105),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 40),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 31),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 26),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 44),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_with, 1),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 2),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 29),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 40),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 33),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 38),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 29),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 21),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 2),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 39),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 28),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1466] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 34),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
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
