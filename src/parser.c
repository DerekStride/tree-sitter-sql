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
#define STATE_COUNT 810
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
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == 'J') ADVANCE(284);
      if (lookahead == 'K') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(279);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(315);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(300);
      if (lookahead == 'V') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(182);
      if (lookahead == 'X') ADVANCE(236);
      if (lookahead == 'Z') ADVANCE(290);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == 'd') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'j') ADVANCE(657);
      if (lookahead == 'k') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 'p') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'u') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(417);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(610);
      if (lookahead == 'z') ADVANCE(664);
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
      if (lookahead == 'F') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead == 'O') ADVANCE(252);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(339);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'f') ADVANCE(667);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(626);
      if (lookahead == 'p') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(713);
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
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(263);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'F') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(168);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'f') ADVANCE(669);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(542);
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
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(262);
      if (lookahead == 'G') ADVANCE(318);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(303);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(692);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(677);
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
      if (lookahead == 'N') ADVANCE(1112);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1227);
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
      if (lookahead == 'N') ADVANCE(1112);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'd') ADVANCE(1155);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1227);
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
      if (lookahead == 'N') ADVANCE(1112);
      if (lookahead == 'S') ADVANCE(1023);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1227);
      if (lookahead == 's') ADVANCE(1138);
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
    case 12:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(979);
      if (lookahead == '(') ADVANCE(956);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1112);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1227);
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
      if (lookahead == 'F') ADVANCE(293);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'J') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'M') ADVANCE(285);
      if (lookahead == 'N') ADVANCE(294);
      if (lookahead == 'O') ADVANCE(253);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'R') ADVANCE(128);
      if (lookahead == 'S') ADVANCE(132);
      if (lookahead == 'T') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(300);
      if (lookahead == 'V') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(182);
      if (lookahead == 'X') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == 'f') ADVANCE(667);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == 'j') ADVANCE(657);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead == 'o') ADVANCE(627);
      if (lookahead == 'p') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(444);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(610);
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
      if (lookahead == 'U') ADVANCE(1095);
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
      if (lookahead == 'u') ADVANCE(1210);
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
      if (lookahead == 'U') ADVANCE(1095);
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
      if (lookahead == 'u') ADVANCE(1210);
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
      if (lookahead == 'U') ADVANCE(1092);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead == 'u') ADVANCE(1207);
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
          lookahead == ' ') SKIP(801)
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
          lookahead == ' ') SKIP(803)
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
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(650);
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
          lookahead == ' ') SKIP(802)
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
      if (lookahead == 'A') ADVANCE(334);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(334);
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(135);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(221);
      if (lookahead == 'O') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(288);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(393);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'I') ADVANCE(254);
      if (lookahead == 'O') ADVANCE(275);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(238);
      if (lookahead == 'I') ADVANCE(241);
      if (lookahead == 'O') ADVANCE(902);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'Y') ADVANCE(302);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(237);
      if (lookahead == 'I') ADVANCE(248);
      if (lookahead == 'O') ADVANCE(902);
      if (lookahead == 'Y') ADVANCE(302);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(232);
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
      if (lookahead == 'A') ADVANCE(306);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(348);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(340);
      if (lookahead == 'O') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(286);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(348);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(286);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(389);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'N') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(226);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'P') ADVANCE(226);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(301);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(225);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(240);
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
      if (lookahead == 'A') ADVANCE(227);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(316);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(218);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(258);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(219);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(231);
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(311);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(320);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(305);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead == 'R') ADVANCE(286);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(244);
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
      if (lookahead == 'I') ADVANCE(239);
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
      if (lookahead == 'B') ADVANCE(228);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(230);
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
      if (lookahead == 'C') ADVANCE(325);
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
      if (lookahead == 'D') ADVANCE(133);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'S') ADVANCE(156);
      if (lookahead == 'T') ADVANCE(920);
      END_STATE();
    case 105:
      if (lookahead == 'D') ADVANCE(149);
      END_STATE();
    case 106:
      if (lookahead == 'D') ADVANCE(74);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(398);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(239);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(176);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(879);
      if (lookahead == 'I') ADVANCE(264);
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
      if (lookahead == 'E') ADVANCE(947);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'I') ADVANCE(247);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(399);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(223);
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'I') ADVANCE(249);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(341);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(280);
      if (lookahead == 'R') ADVANCE(289);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(329);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(331);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(319);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(330);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(309);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(374);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(357);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(266);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(312);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(324);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(313);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(350);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(376);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(346);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(246);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(274);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(333);
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
      if (lookahead == 'W') ADVANCE(278);
      END_STATE();
    case 168:
      if (lookahead == 'F') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(871);
      END_STATE();
    case 169:
      if (lookahead == 'F') ADVANCE(351);
      END_STATE();
    case 170:
      if (lookahead == 'F') ADVANCE(347);
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
      if (lookahead == 'G') ADVANCE(321);
      if (lookahead == 'M') ADVANCE(152);
      END_STATE();
    case 178:
      if (lookahead == 'G') ADVANCE(157);
      END_STATE();
    case 179:
      if (lookahead == 'H') ADVANCE(893);
      END_STATE();
    case 180:
      if (lookahead == 'H') ADVANCE(892);
      END_STATE();
    case 181:
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(135);
      END_STATE();
    case 182:
      if (lookahead == 'H') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(366);
      END_STATE();
    case 183:
      if (lookahead == 'H') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(370);
      END_STATE();
    case 184:
      if (lookahead == 'H') ADVANCE(144);
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
      if (lookahead == 'I') ADVANCE(239);
      END_STATE();
    case 190:
      if (lookahead == 'I') ADVANCE(172);
      if (lookahead == 'O') ADVANCE(287);
      if (lookahead == 'Y') ADVANCE(367);
      END_STATE();
    case 191:
      if (lookahead == 'I') ADVANCE(249);
      END_STATE();
    case 192:
      if (lookahead == 'I') ADVANCE(255);
      END_STATE();
    case 193:
      if (lookahead == 'I') ADVANCE(250);
      END_STATE();
    case 194:
      if (lookahead == 'I') ADVANCE(343);
      END_STATE();
    case 195:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 196:
      if (lookahead == 'I') ADVANCE(265);
      END_STATE();
    case 197:
      if (lookahead == 'I') ADVANCE(354);
      END_STATE();
    case 198:
      if (lookahead == 'I') ADVANCE(277);
      END_STATE();
    case 199:
      if (lookahead == 'I') ADVANCE(267);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(268);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 202:
      if (lookahead == 'I') ADVANCE(271);
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(292);
      END_STATE();
    case 204:
      if (lookahead == 'I') ADVANCE(344);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(245);
      END_STATE();
    case 206:
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'S') ADVANCE(165);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(273);
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
      if (lookahead == 'N') ADVANCE(342);
      if (lookahead == 'U') ADVANCE(269);
      END_STATE();
    case 221:
      if (lookahead == 'L') ADVANCE(345);
      END_STATE();
    case 222:
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(148);
      END_STATE();
    case 223:
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(201);
      END_STATE();
    case 224:
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(201);
      if (lookahead == 'T') ADVANCE(815);
      END_STATE();
    case 225:
      if (lookahead == 'L') ADVANCE(234);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(188);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(359);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(122);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(390);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(390);
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(147);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(206);
      END_STATE();
    case 235:
      if (lookahead == 'M') ADVANCE(816);
      END_STATE();
    case 236:
      if (lookahead == 'M') ADVANCE(212);
      END_STATE();
    case 237:
      if (lookahead == 'M') ADVANCE(297);
      END_STATE();
    case 238:
      if (lookahead == 'M') ADVANCE(297);
      if (lookahead == 'X') ADVANCE(352);
      END_STATE();
    case 239:
      if (lookahead == 'M') ADVANCE(197);
      END_STATE();
    case 240:
      if (lookahead == 'M') ADVANCE(299);
      END_STATE();
    case 241:
      if (lookahead == 'M') ADVANCE(112);
      END_STATE();
    case 242:
      if (lookahead == 'M') ADVANCE(257);
      END_STATE();
    case 243:
      if (lookahead == 'M') ADVANCE(47);
      END_STATE();
    case 244:
      if (lookahead == 'M') ADVANCE(123);
      END_STATE();
    case 245:
      if (lookahead == 'M') ADVANCE(127);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(161);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(129);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(148);
      END_STATE();
    case 252:
      if (lookahead == 'N') ADVANCE(831);
      if (lookahead == 'R') ADVANCE(871);
      if (lookahead == 'W') ADVANCE(278);
      END_STATE();
    case 253:
      if (lookahead == 'N') ADVANCE(831);
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 254:
      if (lookahead == 'N') ADVANCE(865);
      END_STATE();
    case 255:
      if (lookahead == 'N') ADVANCE(827);
      END_STATE();
    case 256:
      if (lookahead == 'N') ADVANCE(936);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(852);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(915);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(928);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(867);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(174);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(175);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(353);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(356);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(362);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(363);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(364);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(371);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 279:
      if (lookahead == 'O') ADVANCE(897);
      if (lookahead == 'U') ADVANCE(222);
      END_STATE();
    case 280:
      if (lookahead == 'O') ADVANCE(177);
      END_STATE();
    case 281:
      if (lookahead == 'O') ADVANCE(408);
      END_STATE();
    case 282:
      if (lookahead == 'O') ADVANCE(896);
      END_STATE();
    case 283:
      if (lookahead == 'O') ADVANCE(813);
      END_STATE();
    case 284:
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(291);
      END_STATE();
    case 285:
      if (lookahead == 'O') ADVANCE(275);
      END_STATE();
    case 286:
      if (lookahead == 'O') ADVANCE(296);
      END_STATE();
    case 287:
      if (lookahead == 'O') ADVANCE(233);
      if (lookahead == 'X') ADVANCE(33);
      END_STATE();
    case 288:
      if (lookahead == 'O') ADVANCE(235);
      END_STATE();
    case 289:
      if (lookahead == 'O') ADVANCE(386);
      END_STATE();
    case 290:
      if (lookahead == 'O') ADVANCE(270);
      END_STATE();
    case 291:
      if (lookahead == 'O') ADVANCE(256);
      END_STATE();
    case 292:
      if (lookahead == 'O') ADVANCE(259);
      END_STATE();
    case 293:
      if (lookahead == 'O') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(288);
      END_STATE();
    case 294:
      if (lookahead == 'O') ADVANCE(349);
      if (lookahead == 'U') ADVANCE(251);
      END_STATE();
    case 295:
      if (lookahead == 'O') ADVANCE(314);
      END_STATE();
    case 296:
      if (lookahead == 'P') ADVANCE(847);
      END_STATE();
    case 297:
      if (lookahead == 'P') ADVANCE(906);
      END_STATE();
    case 298:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 299:
      if (lookahead == 'P') ADVANCE(944);
      END_STATE();
    case 300:
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 301:
      if (lookahead == 'P') ADVANCE(185);
      END_STATE();
    case 302:
      if (lookahead == 'P') ADVANCE(114);
      END_STATE();
    case 303:
      if (lookahead == 'R') ADVANCE(872);
      END_STATE();
    case 304:
      if (lookahead == 'R') ADVANCE(883);
      END_STATE();
    case 305:
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 306:
      if (lookahead == 'R') ADVANCE(930);
      END_STATE();
    case 307:
      if (lookahead == 'R') ADVANCE(846);
      END_STATE();
    case 308:
      if (lookahead == 'R') ADVANCE(822);
      END_STATE();
    case 309:
      if (lookahead == 'R') ADVANCE(824);
      END_STATE();
    case 310:
      if (lookahead == 'R') ADVANCE(905);
      END_STATE();
    case 311:
      if (lookahead == 'R') ADVANCE(933);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(932);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(922);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(882);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(400);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(401);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(289);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(195);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(405);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(365);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(191);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(208);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(209);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(210);
      END_STATE();
    case 334:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 335:
      if (lookahead == 'S') ADVANCE(825);
      END_STATE();
    case 336:
      if (lookahead == 'S') ADVANCE(887);
      END_STATE();
    case 337:
      if (lookahead == 'S') ADVANCE(814);
      END_STATE();
    case 338:
      if (lookahead == 'S') ADVANCE(83);
      END_STATE();
    case 339:
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 340:
      if (lookahead == 'S') ADVANCE(380);
      END_STATE();
    case 341:
      if (lookahead == 'S') ADVANCE(335);
      END_STATE();
    case 342:
      if (lookahead == 'S') ADVANCE(379);
      END_STATE();
    case 343:
      if (lookahead == 'S') ADVANCE(203);
      END_STATE();
    case 344:
      if (lookahead == 'S') ADVANCE(369);
      END_STATE();
    case 345:
      if (lookahead == 'S') ADVANCE(116);
      END_STATE();
    case 346:
      if (lookahead == 'S') ADVANCE(372);
      END_STATE();
    case 347:
      if (lookahead == 'S') ADVANCE(153);
      END_STATE();
    case 348:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 349:
      if (lookahead == 'T') ADVANCE(874);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(815);
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
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(281);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(336);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(283);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(317);
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
      if (lookahead == 'T') ADVANCE(139);
      END_STATE();
    case 379:
      if (lookahead == 'T') ADVANCE(322);
      END_STATE();
    case 380:
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 381:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 382:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 383:
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead == 'X') ADVANCE(864);
      END_STATE();
    case 384:
      if (lookahead == 'T') ADVANCE(150);
      END_STATE();
    case 385:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 386:
      if (lookahead == 'U') ADVANCE(298);
      END_STATE();
    case 387:
      if (lookahead == 'U') ADVANCE(242);
      END_STATE();
    case 388:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 389:
      if (lookahead == 'U') ADVANCE(229);
      END_STATE();
    case 390:
      if (lookahead == 'U') ADVANCE(145);
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
      if (lookahead == 'Z') ADVANCE(142);
      END_STATE();
    case 408:
      if (lookahead == '_') ADVANCE(200);
      END_STATE();
    case 409:
      if (lookahead == '_') ADVANCE(574);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'h') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(594);
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(595);
      if (lookahead == 'o') ADVANCE(678);
      if (lookahead == 'r') ADVANCE(662);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead == 'o') ADVANCE(902);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead == 'y') ADVANCE(676);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead == 'o') ADVANCE(902);
      if (lookahead == 'y') ADVANCE(676);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(606);
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
      if (lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(600);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(600);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(614);
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
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(618);
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
      if (lookahead == 'i') ADVANCE(613);
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
      if (lookahead == 'b') ADVANCE(602);
      END_STATE();
    case 455:
      if (lookahead == 'b') ADVANCE(604);
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
      if (lookahead == 'c') ADVANCE(699);
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
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(515);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 479:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 480:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'i') ADVANCE(638);
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
      if (lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(771);
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(707);
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
      if (lookahead == 'w') ADVANCE(652);
      END_STATE();
    case 542:
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 543:
      if (lookahead == 'f') ADVANCE(725);
      END_STATE();
    case 544:
      if (lookahead == 'f') ADVANCE(721);
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
      if (lookahead == 'g') ADVANCE(695);
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 552:
      if (lookahead == 'g') ADVANCE(531);
      END_STATE();
    case 553:
      if (lookahead == 'h') ADVANCE(894);
      END_STATE();
    case 554:
      if (lookahead == 'h') ADVANCE(892);
      END_STATE();
    case 555:
      if (lookahead == 'h') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 556:
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 557:
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(744);
      END_STATE();
    case 558:
      if (lookahead == 'h') ADVANCE(518);
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
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 566:
      if (lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 569:
      if (lookahead == 'i') ADVANCE(458);
      END_STATE();
    case 570:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 571:
      if (lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 572:
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 573:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 576:
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead == 's') ADVANCE(538);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 578:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 579:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 580:
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 581:
      if (lookahead == 'i') ADVANCE(647);
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
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead == 'u') ADVANCE(643);
      END_STATE();
    case 595:
      if (lookahead == 'l') ADVANCE(719);
      END_STATE();
    case 596:
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 600:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 601:
      if (lookahead == 'l') ADVANCE(562);
      END_STATE();
    case 602:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 603:
      if (lookahead == 'l') ADVANCE(733);
      END_STATE();
    case 604:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 605:
      if (lookahead == 'l') ADVANCE(764);
      END_STATE();
    case 606:
      if (lookahead == 'l') ADVANCE(764);
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 607:
      if (lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 608:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 609:
      if (lookahead == 'm') ADVANCE(816);
      END_STATE();
    case 610:
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 611:
      if (lookahead == 'm') ADVANCE(671);
      END_STATE();
    case 612:
      if (lookahead == 'm') ADVANCE(671);
      if (lookahead == 'x') ADVANCE(726);
      END_STATE();
    case 613:
      if (lookahead == 'm') ADVANCE(571);
      END_STATE();
    case 614:
      if (lookahead == 'm') ADVANCE(672);
      END_STATE();
    case 615:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 616:
      if (lookahead == 'm') ADVANCE(631);
      END_STATE();
    case 617:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 618:
      if (lookahead == 'm') ADVANCE(497);
      END_STATE();
    case 619:
      if (lookahead == 'm') ADVANCE(501);
      END_STATE();
    case 620:
      if (lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 621:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 622:
      if (lookahead == 'm') ADVANCE(503);
      END_STATE();
    case 623:
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 624:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 626:
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(871);
      if (lookahead == 'w') ADVANCE(652);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(937);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(915);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(928);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(867);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(547);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(549);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(727);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(505);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(898);
      if (lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(566);
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(760);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(662);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(625);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 670:
      if (lookahead == 'p') ADVANCE(847);
      END_STATE();
    case 671:
      if (lookahead == 'p') ADVANCE(907);
      END_STATE();
    case 672:
      if (lookahead == 'p') ADVANCE(945);
      END_STATE();
    case 673:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 674:
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 675:
      if (lookahead == 'p') ADVANCE(559);
      END_STATE();
    case 676:
      if (lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(884);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(822);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(824);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(905);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(774);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(825);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(887);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(709);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(753);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(746);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(815);
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
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(660);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(710);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(691);
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
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == 'x') ADVANCE(864);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 760:
      if (lookahead == 'u') ADVANCE(673);
      END_STATE();
    case 761:
      if (lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 762:
      if (lookahead == 'u') ADVANCE(486);
      END_STATE();
    case 763:
      if (lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 764:
      if (lookahead == 'u') ADVANCE(519);
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
      if (lookahead == 'z') ADVANCE(516);
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
      if (lookahead == 'F') ADVANCE(293);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'J') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'M') ADVANCE(285);
      if (lookahead == 'N') ADVANCE(294);
      if (lookahead == 'O') ADVANCE(253);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'R') ADVANCE(128);
      if (lookahead == 'S') ADVANCE(132);
      if (lookahead == 'T') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(300);
      if (lookahead == 'V') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(182);
      if (lookahead == 'X') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == 'f') ADVANCE(667);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == 'j') ADVANCE(657);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead == 'o') ADVANCE(627);
      if (lookahead == 'p') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(444);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(610);
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
      if (lookahead == 'F') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead == 'O') ADVANCE(252);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(339);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'f') ADVANCE(667);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(626);
      if (lookahead == 'p') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(713);
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
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1068);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1112);
      if (lookahead == 'S') ADVANCE(1023);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1227);
      if (lookahead == 's') ADVANCE(1138);
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
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(263);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'F') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(168);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'f') ADVANCE(669);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(542);
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
      if (lookahead == ')') ADVANCE(957);
      if (lookahead == '*') ADVANCE(968);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(1068);
      if (lookahead == 'F') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(1112);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1227);
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
      if (lookahead == '.') ADVANCE(966);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead == ';') ADVANCE(965);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '=') ADVANCE(967);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == 'A') ADVANCE(262);
      if (lookahead == 'G') ADVANCE(318);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(303);
      if (lookahead == 'W') ADVANCE(183);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(692);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(677);
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
      if (lookahead == 'N') ADVANCE(1112);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead == 'd') ADVANCE(1155);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1227);
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
      if (lookahead == 'N') ADVANCE(1112);
      if (lookahead == 'T') ADVANCE(1082);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'f') ADVANCE(1118);
      if (lookahead == 'n') ADVANCE(1227);
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
      if (lookahead == 'U') ADVANCE(1095);
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
      if (lookahead == 'u') ADVANCE(1210);
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
      if (lookahead == 'U') ADVANCE(1095);
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
      if (lookahead == 'u') ADVANCE(1210);
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
      if (lookahead == 'U') ADVANCE(1092);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1188);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead == 'u') ADVANCE(1207);
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
      if (lookahead == 'A') ADVANCE(1090);
      if (lookahead == 'O') ADVANCE(1059);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 802:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(802)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(1007);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(1122);
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
      if (lookahead == 'C') ADVANCE(1075);
      if (lookahead == 'T') ADVANCE(1067);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1190);
      if (lookahead == 't') ADVANCE(1182);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 804:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(804)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(650);
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
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == 'J') ADVANCE(284);
      if (lookahead == 'K') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(279);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(315);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(300);
      if (lookahead == 'V') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(182);
      if (lookahead == 'X') ADVANCE(236);
      if (lookahead == 'Z') ADVANCE(290);
      if (lookahead == '^') ADVANCE(973);
      if (lookahead == '`') ADVANCE(998);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == 'd') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'j') ADVANCE(657);
      if (lookahead == 'k') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 'p') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'u') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(417);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(610);
      if (lookahead == 'z') ADVANCE(664);
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
      if (lookahead == 'N') ADVANCE(141);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(149);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(523);
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
      if (lookahead == 'O') ADVANCE(328);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'o') ADVANCE(703);
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
      if (lookahead == 'E') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(914);
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
      if (lookahead == 'E') ADVANCE(1049);
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
      if (lookahead == 'I') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(1093);
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
      if (lookahead == 'I') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1094);
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
      if (lookahead == 'L') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(1047);
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
      if (lookahead == 'N') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(1025);
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
      if (lookahead == 'O') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(1096);
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
      if (lookahead == 'O') ADVANCE(1065);
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
      if (lookahead == 'R') ADVANCE(1113);
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
      if (lookahead == 'S') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1091);
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
      if (lookahead == 'U') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(1014);
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
      if (lookahead == 'e') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(914);
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
      if (lookahead == 'e') ADVANCE(1164);
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
      if (lookahead == 'i') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1208);
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
      if (lookahead == 'i') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1209);
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
      if (lookahead == 'l') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1162);
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
      if (lookahead == 'n') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1140);
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
      if (lookahead == 'o') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1211);
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
      if (lookahead == 'o') ADVANCE(1180);
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
      if (lookahead == 'r') ADVANCE(1228);
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
      if (lookahead == 's') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1206);
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
      if (lookahead == 'u') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1128);
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
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 19},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 28},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 15},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 15},
  [204] = {.lex_state = 15},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 18},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 15},
  [216] = {.lex_state = 24},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 18},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 25},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 15},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 15},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 15},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 24},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 24},
  [243] = {.lex_state = 15},
  [244] = {.lex_state = 14},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 25},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 24},
  [249] = {.lex_state = 15},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 25},
  [252] = {.lex_state = 15},
  [253] = {.lex_state = 26},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 15},
  [256] = {.lex_state = 26},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 26},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 17},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 15},
  [268] = {.lex_state = 18},
  [269] = {.lex_state = 15},
  [270] = {.lex_state = 15},
  [271] = {.lex_state = 16},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 15},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 16},
  [280] = {.lex_state = 15},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 15},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 15},
  [285] = {.lex_state = 14},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 14},
  [288] = {.lex_state = 14},
  [289] = {.lex_state = 18},
  [290] = {.lex_state = 18},
  [291] = {.lex_state = 18},
  [292] = {.lex_state = 14},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 15},
  [297] = {.lex_state = 15},
  [298] = {.lex_state = 15},
  [299] = {.lex_state = 26},
  [300] = {.lex_state = 15},
  [301] = {.lex_state = 18},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 26},
  [304] = {.lex_state = 18},
  [305] = {.lex_state = 14},
  [306] = {.lex_state = 15},
  [307] = {.lex_state = 18},
  [308] = {.lex_state = 18},
  [309] = {.lex_state = 18},
  [310] = {.lex_state = 18},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 14},
  [313] = {.lex_state = 18},
  [314] = {.lex_state = 16},
  [315] = {.lex_state = 18},
  [316] = {.lex_state = 18},
  [317] = {.lex_state = 15},
  [318] = {.lex_state = 30},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 30},
  [321] = {.lex_state = 30},
  [322] = {.lex_state = 30},
  [323] = {.lex_state = 16},
  [324] = {.lex_state = 17},
  [325] = {.lex_state = 30},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 30},
  [328] = {.lex_state = 15},
  [329] = {.lex_state = 30},
  [330] = {.lex_state = 30},
  [331] = {.lex_state = 30},
  [332] = {.lex_state = 30},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 15},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 30},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 15},
  [343] = {.lex_state = 17},
  [344] = {.lex_state = 15},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 17},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 16},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 16},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 16},
  [360] = {.lex_state = 27},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 16},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 27},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 15},
  [373] = {.lex_state = 32},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 16},
  [379] = {.lex_state = 30},
  [380] = {.lex_state = 32},
  [381] = {.lex_state = 16},
  [382] = {.lex_state = 17},
  [383] = {.lex_state = 29},
  [384] = {.lex_state = 32},
  [385] = {.lex_state = 15},
  [386] = {.lex_state = 16},
  [387] = {.lex_state = 16},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 16},
  [390] = {.lex_state = 16},
  [391] = {.lex_state = 16},
  [392] = {.lex_state = 27},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 16},
  [395] = {.lex_state = 16},
  [396] = {.lex_state = 17},
  [397] = {.lex_state = 26},
  [398] = {.lex_state = 26},
  [399] = {.lex_state = 27},
  [400] = {.lex_state = 17},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 17},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 26},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 17},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 17},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 17},
  [419] = {.lex_state = 26},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 17},
  [422] = {.lex_state = 17},
  [423] = {.lex_state = 17},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 17},
  [426] = {.lex_state = 17},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 17},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 26},
  [431] = {.lex_state = 17},
  [432] = {.lex_state = 17},
  [433] = {.lex_state = 17},
  [434] = {.lex_state = 27},
  [435] = {.lex_state = 17},
  [436] = {.lex_state = 17},
  [437] = {.lex_state = 17},
  [438] = {.lex_state = 17},
  [439] = {.lex_state = 17},
  [440] = {.lex_state = 17},
  [441] = {.lex_state = 17},
  [442] = {.lex_state = 26},
  [443] = {.lex_state = 17},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 17},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 26},
  [448] = {.lex_state = 17},
  [449] = {.lex_state = 17},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 17},
  [452] = {.lex_state = 17},
  [453] = {.lex_state = 17},
  [454] = {.lex_state = 17},
  [455] = {.lex_state = 17},
  [456] = {.lex_state = 17},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 27},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 27},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 17},
  [466] = {.lex_state = 17},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 17},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 17},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 17},
  [474] = {.lex_state = 17},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 17},
  [477] = {.lex_state = 17},
  [478] = {.lex_state = 17},
  [479] = {.lex_state = 17},
  [480] = {.lex_state = 17},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 17},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 17},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 17},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 17},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 17},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 17},
  [516] = {.lex_state = 17},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 17},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 17},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 17},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 17},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 17},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 17},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 17},
  [538] = {.lex_state = 17},
  [539] = {.lex_state = 17},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 17},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 17},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 17},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 15},
  [551] = {.lex_state = 17},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 17},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 17},
  [560] = {.lex_state = 17},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 17},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 6},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 7},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 6},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 17},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 6},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
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
  [614] = {.lex_state = 15},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 6},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 6},
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
  [639] = {.lex_state = 6},
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
  [661] = {.lex_state = 0},
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
  [714] = {.lex_state = 31},
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
  [753] = {.lex_state = 984},
  [754] = {.lex_state = 993},
  [755] = {.lex_state = 17},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 15},
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
  [776] = {.lex_state = 15},
  [777] = {.lex_state = 984},
  [778] = {.lex_state = 993},
  [779] = {.lex_state = 17},
  [780] = {.lex_state = 17},
  [781] = {.lex_state = 993},
  [782] = {.lex_state = 984},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 984},
  [786] = {.lex_state = 993},
  [787] = {.lex_state = 17},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 984},
  [792] = {.lex_state = 993},
  [793] = {.lex_state = 17},
  [794] = {.lex_state = 984},
  [795] = {.lex_state = 993},
  [796] = {.lex_state = 17},
  [797] = {.lex_state = 17},
  [798] = {.lex_state = 17},
  [799] = {.lex_state = 17},
  [800] = {.lex_state = 17},
  [801] = {.lex_state = 17},
  [802] = {.lex_state = 17},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
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
    [sym_statement] = STATE(804),
    [sym__select_statement] = STATE(789),
    [sym_select] = STATE(561),
    [sym__delete_statement] = STATE(789),
    [sym_delete] = STATE(570),
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
    STATE(203), 1,
      sym_keyword_char,
    STATE(204), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(591), 10,
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
    STATE(203), 1,
      sym_keyword_char,
    STATE(204), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(568), 10,
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
    STATE(203), 1,
      sym_keyword_char,
    STATE(204), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      sym_keyword_json,
      sym_keyword_date,
    STATE(185), 10,
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
    ACTIONS(25), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 35,
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
  [398] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 35,
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
  [446] = 4,
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
  [485] = 4,
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
  [524] = 3,
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
  [561] = 3,
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
  [598] = 3,
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
    ACTIONS(73), 21,
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
  [634] = 4,
    ACTIONS(77), 1,
      anon_sym_CARET,
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
    ACTIONS(73), 20,
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
  [672] = 4,
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
    ACTIONS(83), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 12,
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
  [710] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 12,
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
  [748] = 4,
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
    ACTIONS(83), 9,
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
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
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
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
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
  [862] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(93), 12,
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
  [900] = 4,
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
    ACTIONS(83), 9,
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
  [938] = 3,
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
    ACTIONS(95), 21,
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
  [974] = 8,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(75), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 17,
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
  [1020] = 11,
    ACTIONS(75), 1,
      sym_keyword_or,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 13,
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
  [1072] = 9,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(75), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 17,
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
  [1120] = 6,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(75), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 18,
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
  [1162] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(113), 12,
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
  [1200] = 3,
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
  [1236] = 4,
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
    ACTIONS(83), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(113), 12,
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
  [1274] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
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
  [1312] = 3,
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
  [1348] = 4,
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
    ACTIONS(83), 9,
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
  [1386] = 4,
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
    ACTIONS(83), 9,
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
  [1424] = 3,
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
  [1460] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
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
  [1498] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
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
  [1536] = 4,
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
    ACTIONS(83), 9,
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
  [1574] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
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
  [1612] = 4,
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
    ACTIONS(83), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(93), 12,
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
  [1650] = 3,
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
    ACTIONS(83), 21,
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
  [1686] = 4,
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
    ACTIONS(83), 9,
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
  [1724] = 4,
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
    ACTIONS(83), 9,
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
  [1762] = 3,
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
    ACTIONS(137), 21,
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
  [1798] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
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
  [1836] = 4,
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
    ACTIONS(83), 9,
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
  [1874] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 9,
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
  [1912] = 3,
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
  [1948] = 19,
    ACTIONS(147), 1,
      sym_keyword_select,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(118), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(509), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(784), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2013] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 20,
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
  [2046] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 20,
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
  [2079] = 19,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
      anon_sym_RPAREN,
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(709), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(463), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2144] = 4,
    ACTIONS(167), 1,
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
  [2179] = 4,
    ACTIONS(169), 1,
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
  [2214] = 19,
    ACTIONS(147), 1,
      sym_keyword_select,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(118), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(509), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(790), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2279] = 19,
    ACTIONS(147), 1,
      sym_keyword_select,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(118), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(509), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(770), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2344] = 19,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(732), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(463), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2409] = 19,
    ACTIONS(147), 1,
      sym_keyword_select,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(118), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(509), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(664), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2474] = 3,
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
  [2507] = 19,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(681), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(463), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2572] = 3,
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
  [2605] = 19,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(742), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(463), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2670] = 19,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(724), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(463), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2735] = 8,
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
    ACTIONS(75), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 14,
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
  [2777] = 3,
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
  [2809] = 11,
    ACTIONS(75), 1,
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
    ACTIONS(73), 9,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2857] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 18,
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
  [2889] = 18,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(725), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2951] = 18,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(731), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3013] = 3,
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
  [3045] = 6,
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
    ACTIONS(75), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 15,
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
  [3083] = 3,
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
  [3115] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 19,
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
  [3147] = 3,
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
  [3179] = 3,
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
  [3211] = 18,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(680), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3273] = 18,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(708), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3335] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 18,
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
  [3367] = 3,
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
  [3399] = 4,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 17,
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
  [3433] = 9,
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
    ACTIONS(75), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 13,
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
  [3477] = 17,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(618), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3536] = 17,
    ACTIONS(149), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(689), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3595] = 17,
    ACTIONS(149), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(685), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3654] = 17,
    ACTIONS(149), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(711), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3713] = 17,
    ACTIONS(149), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(101), 1,
      sym_identifier,
    STATE(157), 1,
      sym_literal,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(162), 2,
      sym_field,
      sym_predicate,
    STATE(734), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3772] = 17,
    ACTIONS(211), 1,
      sym_keyword_left,
    ACTIONS(213), 1,
      sym_keyword_right,
    ACTIONS(217), 1,
      sym_keyword_join,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(117), 1,
      sym_index_hint,
    STATE(259), 1,
      sym_where,
    STATE(352), 1,
      sym_group_by,
    STATE(401), 1,
      sym_order_by,
    STATE(541), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(227), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(128), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [3830] = 16,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_STAR,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      sym__number,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(278), 1,
      sym__literal_string,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(429), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(231), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(209), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [3886] = 6,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(247), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(85), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 10,
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
  [3922] = 16,
    ACTIONS(251), 1,
      sym_keyword_distinct,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__number,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      sym__identifier,
    STATE(213), 1,
      sym_identifier,
    STATE(268), 1,
      sym__count_function,
    STATE(308), 1,
      sym_invocation,
    STATE(315), 1,
      sym__literal_string,
    STATE(408), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(207), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [3978] = 17,
    ACTIONS(211), 1,
      sym_keyword_left,
    ACTIONS(213), 1,
      sym_keyword_right,
    ACTIONS(217), 1,
      sym_keyword_join,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(122), 1,
      sym_index_hint,
    STATE(262), 1,
      sym_where,
    STATE(319), 1,
      sym_group_by,
    STATE(427), 1,
      sym_order_by,
    STATE(541), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(227), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(229), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(121), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [4036] = 16,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(235), 1,
      anon_sym_STAR,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      sym__number,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(271), 1,
      sym_keyword_distinct,
    STATE(218), 1,
      sym_identifier,
    STATE(278), 1,
      sym__literal_string,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    STATE(408), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(231), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(209), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4092] = 16,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__number,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      sym__identifier,
    STATE(213), 1,
      sym_identifier,
    STATE(268), 1,
      sym__count_function,
    STATE(308), 1,
      sym_invocation,
    STATE(315), 1,
      sym__literal_string,
    STATE(429), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(207), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4148] = 12,
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
    ACTIONS(275), 1,
      sym_keyword_and,
    ACTIONS(277), 1,
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
    ACTIONS(191), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(273), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4196] = 4,
    ACTIONS(279), 1,
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
  [4227] = 15,
    ACTIONS(281), 1,
      sym_keyword_count,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SQUOTE,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      sym__number,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    STATE(279), 1,
      sym_identifier,
    STATE(389), 1,
      sym__literal_string,
    STATE(390), 1,
      sym_invocation,
    STATE(391), 1,
      sym__count_function,
    STATE(726), 1,
      sym_select_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(283), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(261), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4280] = 4,
    ACTIONS(297), 1,
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
  [4311] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(87), 10,
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
  [4342] = 15,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(301), 1,
      sym_keyword_count,
    ACTIONS(305), 1,
      anon_sym_STAR,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
      sym__identifier,
    STATE(50), 1,
      sym__literal_string,
    STATE(224), 1,
      sym_identifier,
    STATE(270), 1,
      sym__count_function,
    STATE(282), 1,
      sym_invocation,
    STATE(411), 1,
      sym_order_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(303), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(212), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4395] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(87), 10,
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
  [4426] = 4,
    ACTIONS(313), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 14,
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
  [4456] = 5,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
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
  [4488] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 15,
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
  [4516] = 3,
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
  [4544] = 8,
    ACTIONS(313), 1,
      anon_sym_CARET,
    ACTIONS(319), 1,
      anon_sym_PLUS,
    ACTIONS(321), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(73), 11,
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
  [4582] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 15,
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
  [4610] = 9,
    ACTIONS(313), 1,
      anon_sym_CARET,
    ACTIONS(319), 1,
      anon_sym_PLUS,
    ACTIONS(321), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(73), 10,
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
  [4650] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 15,
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
  [4678] = 14,
    ACTIONS(281), 1,
      sym_keyword_count,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SQUOTE,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      sym__number,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      sym__identifier,
    STATE(279), 1,
      sym_identifier,
    STATE(389), 1,
      sym__literal_string,
    STATE(390), 1,
      sym_invocation,
    STATE(391), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(283), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(271), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4728] = 10,
    ACTIONS(313), 1,
      anon_sym_CARET,
    ACTIONS(319), 1,
      anon_sym_PLUS,
    ACTIONS(321), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(317), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(329), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 6,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4770] = 6,
    ACTIONS(313), 1,
      anon_sym_CARET,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(317), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 12,
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
  [4804] = 6,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(247), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(85), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 11,
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
  [4838] = 14,
    ACTIONS(253), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__number,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      sym__identifier,
    STATE(213), 1,
      sym_identifier,
    STATE(268), 1,
      sym__count_function,
    STATE(308), 1,
      sym_invocation,
    STATE(315), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(255), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(229), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4888] = 3,
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
  [4916] = 14,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__number,
    ACTIONS(301), 1,
      sym_keyword_count,
    ACTIONS(305), 1,
      anon_sym_STAR,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
      sym__identifier,
    STATE(50), 1,
      sym__literal_string,
    STATE(224), 1,
      sym_identifier,
    STATE(270), 1,
      sym__count_function,
    STATE(282), 1,
      sym_invocation,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(303), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(252), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [4966] = 14,
    ACTIONS(149), 1,
      sym_keyword_count,
    ACTIONS(235), 1,
      anon_sym_STAR,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      sym__number,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(278), 1,
      sym__literal_string,
    STATE(288), 1,
      sym_invocation,
    STATE(292), 1,
      sym__count_function,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(231), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(226), 5,
      sym__field,
      sym_all_fields,
      sym_field,
      sym_function_call,
      sym_literal,
  [5016] = 13,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(88), 1,
      sym_predicate,
    STATE(94), 1,
      sym_identifier,
    STATE(283), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5063] = 15,
    ACTIONS(211), 1,
      sym_keyword_left,
    ACTIONS(213), 1,
      sym_keyword_right,
    ACTIONS(217), 1,
      sym_keyword_join,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(245), 1,
      sym_where,
    STATE(350), 1,
      sym_group_by,
    STATE(403), 1,
      sym_order_by,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(119), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5114] = 6,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 11,
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
  [5147] = 15,
    ACTIONS(211), 1,
      sym_keyword_left,
    ACTIONS(213), 1,
      sym_keyword_right,
    ACTIONS(217), 1,
      sym_keyword_join,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(254), 1,
      sym_where,
    STATE(337), 1,
      sym_group_by,
    STATE(450), 1,
      sym_order_by,
    STATE(462), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(339), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(180), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5198] = 15,
    ACTIONS(211), 1,
      sym_keyword_left,
    ACTIONS(213), 1,
      sym_keyword_right,
    ACTIONS(217), 1,
      sym_keyword_join,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(240), 1,
      sym_where,
    STATE(335), 1,
      sym_group_by,
    STATE(416), 1,
      sym_order_by,
    STATE(462), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(339), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(180), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5249] = 15,
    ACTIONS(211), 1,
      sym_keyword_left,
    ACTIONS(213), 1,
      sym_keyword_right,
    ACTIONS(217), 1,
      sym_keyword_join,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(235), 1,
      sym_where,
    STATE(326), 1,
      sym_group_by,
    STATE(420), 1,
      sym_order_by,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(333), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(180), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5300] = 15,
    ACTIONS(211), 1,
      sym_keyword_left,
    ACTIONS(213), 1,
      sym_keyword_right,
    ACTIONS(217), 1,
      sym_keyword_join,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(235), 1,
      sym_where,
    STATE(326), 1,
      sym_group_by,
    STATE(420), 1,
      sym_order_by,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(333), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
    STATE(120), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5351] = 13,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    STATE(111), 1,
      sym_predicate,
    STATE(486), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5398] = 12,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    STATE(345), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(174), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5443] = 8,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
      sym__identifier,
    ACTIONS(345), 1,
      sym_keyword_as,
    ACTIONS(347), 1,
      anon_sym_DOT,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(341), 10,
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
  [5480] = 12,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      sym__number,
    ACTIONS(359), 1,
      anon_sym_BQUOTE,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(66), 1,
      sym__literal_string,
    STATE(345), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(93), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5525] = 8,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
      sym__identifier,
    ACTIONS(345), 1,
      sym_keyword_as,
    ACTIONS(363), 1,
      anon_sym_DOT,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(341), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_cross,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [5562] = 15,
    ACTIONS(211), 1,
      sym_keyword_left,
    ACTIONS(213), 1,
      sym_keyword_right,
    ACTIONS(217), 1,
      sym_keyword_join,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(245), 1,
      sym_where,
    STATE(350), 1,
      sym_group_by,
    STATE(403), 1,
      sym_order_by,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(180), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
  [5613] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(299), 3,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(85), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 11,
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
  [5642] = 11,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      sym__number,
    ACTIONS(359), 1,
      anon_sym_BQUOTE,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(66), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(63), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5684] = 11,
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
    STATE(40), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5726] = 11,
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
    STATE(40), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5768] = 11,
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
    STATE(40), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(24), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5810] = 11,
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
    STATE(40), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(13), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5852] = 11,
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
    STATE(40), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(365), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(23), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5894] = 7,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
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
  [5928] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(385), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5974] = 3,
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
  [6000] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(27), 1,
      sym_predicate,
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(387), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6046] = 3,
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
  [6072] = 3,
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
  [6098] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6144] = 11,
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
    STATE(40), 1,
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
  [6186] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(391), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6232] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(19), 1,
      sym_predicate,
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6278] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(44), 1,
      sym_predicate,
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6324] = 12,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    STATE(99), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6368] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(397), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6414] = 11,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(161), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6456] = 12,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    STATE(97), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(178), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6500] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(46), 1,
      sym_predicate,
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6546] = 7,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
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
  [6580] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(401), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6626] = 11,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
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
  [6668] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6714] = 12,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    STATE(129), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(181), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6758] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(85), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 11,
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
  [6786] = 11,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      sym__number,
    ACTIONS(359), 1,
      anon_sym_BQUOTE,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(66), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(77), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6828] = 11,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      sym__number,
    ACTIONS(359), 1,
      anon_sym_BQUOTE,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(66), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 3,
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
  [6870] = 13,
    ACTIONS(151), 1,
      sym_keyword_null,
    ACTIONS(153), 1,
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
    STATE(16), 1,
      sym_predicate,
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(405), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(177), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6916] = 11,
    ACTIONS(313), 1,
      anon_sym_CARET,
    ACTIONS(319), 1,
      anon_sym_PLUS,
    ACTIONS(321), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(317), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(329), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(327), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6958] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(335), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(85), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 11,
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
  [6986] = 11,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      sym__number,
    ACTIONS(359), 1,
      anon_sym_BQUOTE,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(66), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 3,
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
  [7028] = 3,
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
  [7054] = 11,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(110), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7096] = 11,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(100), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7138] = 11,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
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
  [7180] = 11,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
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
  [7222] = 11,
    ACTIONS(153), 1,
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
    STATE(50), 1,
      sym__literal_string,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(104), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7264] = 11,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      sym__number,
    ACTIONS(359), 1,
      anon_sym_BQUOTE,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(66), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 3,
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
  [7306] = 11,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      sym__number,
    ACTIONS(359), 1,
      anon_sym_BQUOTE,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(66), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 3,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
    STATE(79), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7348] = 2,
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
  [7371] = 2,
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
  [7394] = 11,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(313), 1,
      anon_sym_CARET,
    ACTIONS(319), 1,
      anon_sym_PLUS,
    ACTIONS(321), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(317), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(329), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(327), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7435] = 2,
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
  [7458] = 2,
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
  [7481] = 10,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(109), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7519] = 10,
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
    ACTIONS(275), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(191), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7557] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(423), 15,
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
  [7579] = 7,
    ACTIONS(425), 1,
      sym_keyword_left,
    ACTIONS(428), 1,
      sym_keyword_right,
    ACTIONS(434), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(431), 2,
      sym_keyword_inner,
      sym_keyword_cross,
    STATE(180), 3,
      sym_join,
      sym_lateral_join,
      aux_sym_from_repeat1,
    ACTIONS(437), 7,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7611] = 10,
    ACTIONS(313), 1,
      anon_sym_CARET,
    ACTIONS(319), 1,
      anon_sym_PLUS,
    ACTIONS(321), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(317), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(329), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(327), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7649] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(439), 15,
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
  [7671] = 3,
    ACTIONS(443), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(441), 12,
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
  [7693] = 9,
    ACTIONS(445), 1,
      sym_keyword_set,
    ACTIONS(447), 1,
      sym_keyword_alter,
    ACTIONS(449), 1,
      sym_keyword_drop,
    ACTIONS(451), 1,
      sym_keyword_add,
    ACTIONS(453), 1,
      sym_keyword_rename,
    ACTIONS(455), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(533), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(701), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [7727] = 10,
    ACTIONS(459), 1,
      sym_keyword_primary,
    ACTIONS(461), 1,
      sym_keyword_not,
    ACTIONS(463), 1,
      sym_keyword_auto_increment,
    ACTIONS(465), 1,
      sym_keyword_default,
    STATE(344), 1,
      sym__primary_key,
    STATE(518), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(215), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(467), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7763] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(469), 13,
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
  [7783] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 13,
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
  [7803] = 9,
    ACTIONS(445), 1,
      sym_keyword_set,
    ACTIONS(447), 1,
      sym_keyword_alter,
    ACTIONS(449), 1,
      sym_keyword_drop,
    ACTIONS(451), 1,
      sym_keyword_add,
    ACTIONS(453), 1,
      sym_keyword_rename,
    ACTIONS(455), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(483), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(672), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [7837] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 12,
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
  [7856] = 2,
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
  [7875] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 12,
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
  [7894] = 2,
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
  [7913] = 2,
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
  [7932] = 13,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
      sym__identifier,
    ACTIONS(475), 1,
      sym_keyword_primary,
    ACTIONS(477), 1,
      sym_keyword_key,
    ACTIONS(479), 1,
      sym_keyword_constraint,
    STATE(6), 1,
      sym_identifier,
    STATE(496), 1,
      sym_constraint,
    STATE(601), 1,
      sym__key_constraint,
    STATE(604), 1,
      sym__primary_key_constraint,
    STATE(608), 1,
      sym__constraint_literal,
    STATE(611), 1,
      sym_column_definition,
    STATE(615), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7973] = 3,
    ACTIONS(483), 1,
      aux_sym_keyword_varchar_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 10,
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
  [7993] = 4,
    ACTIONS(487), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(489), 1,
      aux_sym_keyword_timestamp_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(485), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8015] = 3,
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
  [8034] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 10,
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
  [8051] = 3,
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
  [8070] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(499), 10,
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
  [8087] = 3,
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
  [8106] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym__literal_string,
    STATE(491), 1,
      sym_select,
    STATE(497), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8135] = 3,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(501), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8154] = 3,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(505), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8173] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym__literal_string,
    STATE(509), 1,
      sym_select,
    STATE(553), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8202] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(509), 10,
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
  [8219] = 10,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(513), 1,
      sym_keyword_as,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_SEMI,
    STATE(363), 1,
      sym__alias,
    STATE(364), 1,
      aux_sym_select_expression_repeat1,
    STATE(376), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(511), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
  [8252] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym__literal_string,
    STATE(472), 1,
      sym_select,
    STATE(484), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8281] = 10,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(511), 1,
      sym_keyword_from,
    ACTIONS(513), 1,
      sym_keyword_as,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_select_expression_repeat1,
    STATE(376), 1,
      sym_identifier,
    STATE(377), 1,
      sym__alias,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(517), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8314] = 3,
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
  [8333] = 3,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(521), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8352] = 6,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      sym_direction,
    STATE(334), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(525), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8376] = 5,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
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
  [8398] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(533), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8414] = 7,
    ACTIONS(459), 1,
      sym_keyword_primary,
    ACTIONS(535), 1,
      sym_keyword_auto_increment,
    STATE(328), 1,
      sym__primary_key,
    STATE(498), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(537), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8440] = 8,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
      sym__identifier,
    ACTIONS(345), 1,
      sym_keyword_as,
    ACTIONS(539), 1,
      anon_sym_DOT,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(341), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(343), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [8468] = 2,
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
  [8484] = 5,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
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
  [8506] = 3,
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
  [8524] = 3,
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
  [8542] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8558] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(547), 1,
      sym_keyword_as,
    ACTIONS(549), 1,
      anon_sym_DOT,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(341), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_using,
      sym_keyword_use,
  [8584] = 2,
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
  [8600] = 4,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
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
  [8620] = 2,
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
  [8636] = 8,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(513), 1,
      sym_keyword_as,
    ACTIONS(559), 1,
      sym_keyword_from,
    STATE(374), 1,
      sym__alias,
    STATE(376), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(561), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8664] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(563), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8680] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(565), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8696] = 8,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(513), 1,
      sym_keyword_as,
    STATE(374), 1,
      sym__alias,
    STATE(376), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(559), 2,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
    ACTIONS(561), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8724] = 2,
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
  [8740] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(569), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8756] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(571), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8772] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8788] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(575), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8804] = 8,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(335), 1,
      sym_group_by,
    STATE(416), 1,
      sym_order_by,
    STATE(462), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [8831] = 4,
    ACTIONS(577), 1,
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
  [8850] = 9,
    ACTIONS(459), 1,
      sym_keyword_primary,
    ACTIONS(579), 1,
      sym_keyword_key,
    ACTIONS(581), 1,
      sym_keyword_constraint,
    STATE(584), 1,
      sym_constraint,
    STATE(601), 1,
      sym__key_constraint,
    STATE(604), 1,
      sym__primary_key_constraint,
    STATE(608), 1,
      sym__constraint_literal,
    STATE(615), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8879] = 7,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
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
  [8904] = 3,
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
  [8921] = 8,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(340), 1,
      sym_group_by,
    STATE(414), 1,
      sym_order_by,
    STATE(527), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(583), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [8948] = 6,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym__literal_string,
    STATE(530), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [8971] = 3,
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
  [8988] = 3,
    ACTIONS(585), 1,
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
  [9005] = 4,
    ACTIONS(587), 1,
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
  [9024] = 8,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(337), 1,
      sym_group_by,
    STATE(450), 1,
      sym_order_by,
    STATE(462), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9051] = 3,
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
  [9068] = 6,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym__literal_string,
    STATE(553), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [9091] = 3,
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
  [9108] = 6,
    ACTIONS(459), 1,
      sym_keyword_primary,
    STATE(336), 1,
      sym__primary_key,
    STATE(485), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(589), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9131] = 6,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym__literal_string,
    STATE(404), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [9154] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(591), 1,
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
  [9177] = 4,
    STATE(365), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(593), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9196] = 8,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(595), 1,
      sym_keyword_default,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    STATE(659), 1,
      sym_table_options,
    STATE(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(299), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9223] = 8,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(346), 1,
      sym_group_by,
    STATE(417), 1,
      sym_order_by,
    STATE(527), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(583), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9250] = 6,
    ACTIONS(459), 1,
      sym_keyword_primary,
    STATE(328), 1,
      sym__primary_key,
    STATE(498), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(537), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9273] = 8,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(595), 1,
      sym_keyword_default,
    ACTIONS(599), 1,
      anon_sym_SEMI,
    STATE(679), 1,
      sym_identifier,
    STATE(682), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(299), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9300] = 6,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym__literal_string,
    STATE(530), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [9323] = 8,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(595), 1,
      sym_keyword_default,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    STATE(634), 1,
      sym_table_options,
    STATE(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(299), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9350] = 8,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(350), 1,
      sym_group_by,
    STATE(403), 1,
      sym_order_by,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9377] = 6,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym__literal_string,
    STATE(622), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [9400] = 9,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(603), 1,
      sym_keyword_as,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      sym_identifier,
    STATE(548), 1,
      sym__alias,
    STATE(549), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9429] = 8,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(223), 1,
      sym_keyword_group_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(326), 1,
      sym_group_by,
    STATE(420), 1,
      sym_order_by,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [9456] = 8,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(531), 1,
      sym_table_reference,
    STATE(772), 1,
      sym__table_references,
    STATE(774), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(773), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [9483] = 6,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym__literal_string,
    STATE(406), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [9506] = 9,
    ACTIONS(609), 1,
      sym_keyword_table,
    ACTIONS(611), 1,
      sym_keyword_view,
    ACTIONS(613), 1,
      sym_keyword_materialized,
    ACTIONS(615), 1,
      sym_keyword_or,
    ACTIONS(617), 1,
      sym_keyword_temp,
    ACTIONS(619), 1,
      sym_keyword_temporary,
    STATE(571), 1,
      sym__or_replace,
    STATE(768), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9535] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(621), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(623), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9551] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9565] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(627), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(625), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9581] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(629), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9595] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(627), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9609] = 7,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(603), 1,
      sym_keyword_as,
    STATE(374), 1,
      sym__alias,
    STATE(376), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(561), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9633] = 3,
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
  [9649] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(121), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9665] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(83), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9681] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(635), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(637), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9697] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(637), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9711] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(639), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(641), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(83), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9743] = 5,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(645), 1,
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
  [9763] = 2,
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
  [9777] = 5,
    ACTIONS(445), 1,
      sym_keyword_set,
    ACTIONS(453), 1,
      sym_keyword_rename,
    ACTIONS(455), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(670), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [9797] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9811] = 8,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(354), 1,
      sym_where,
    STATE(470), 1,
      sym_order_by,
    STATE(662), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9837] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(641), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9851] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(653), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(655), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9867] = 4,
    ACTIONS(659), 1,
      sym_keyword_having,
    STATE(361), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(657), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9885] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(661), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(663), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9901] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(649), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9917] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(655), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(653), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9933] = 3,
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
  [9949] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(81), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [9965] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(625), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(627), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9981] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(127), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [9997] = 8,
    ACTIONS(219), 1,
      sym_keyword_where,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    STATE(388), 1,
      sym_where,
    STATE(517), 1,
      sym_order_by,
    STATE(690), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10023] = 5,
    ACTIONS(445), 1,
      sym_keyword_set,
    ACTIONS(453), 1,
      sym_keyword_rename,
    ACTIONS(455), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(699), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [10043] = 2,
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
  [10057] = 2,
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
  [10071] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(655), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10085] = 7,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(595), 1,
      sym_keyword_default,
    ACTIONS(673), 1,
      anon_sym_SEMI,
    STATE(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(303), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [10109] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(663), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10123] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(637), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(635), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10139] = 3,
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
  [10155] = 7,
    ACTIONS(675), 1,
      sym_keyword_default,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    ACTIONS(680), 1,
      anon_sym_BQUOTE,
    ACTIONS(683), 1,
      sym__identifier,
    STATE(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(303), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [10179] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(123), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10195] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(686), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(647), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10211] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(688), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10225] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(641), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(639), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10241] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(665), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10257] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(647), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(686), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10273] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(663), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(661), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10289] = 3,
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
  [10305] = 3,
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
  [10321] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(129), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10337] = 3,
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
  [10353] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(81), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10369] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(621), 4,
      sym_keyword_from,
      sym_keyword_as,
      aux_sym_keyword_with_token1,
      sym__identifier,
  [10385] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10399] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(690), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(184), 1,
      sym_table_reference,
    STATE(448), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10422] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(420), 1,
      sym_order_by,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10443] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(690), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(453), 1,
      sym__if_exists,
    STATE(583), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10466] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(690), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(295), 1,
      sym_table_reference,
    STATE(451), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10489] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(690), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(452), 1,
      sym__if_exists,
    STATE(582), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10512] = 4,
    ACTIONS(692), 1,
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
  [10529] = 6,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(650), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(392), 2,
      sym_invocation,
      sym_subquery,
  [10550] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(698), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(435), 1,
      sym__if_not_exists,
    STATE(674), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10573] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(416), 1,
      sym_order_by,
    STATE(462), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10594] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(698), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(436), 1,
      sym__if_not_exists,
    STATE(684), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10617] = 4,
    STATE(485), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(589), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10634] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(698), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(443), 1,
      sym__if_not_exists,
    STATE(756), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10657] = 7,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(698), 1,
      sym_keyword_if,
    STATE(438), 1,
      sym__if_not_exists,
    STATE(493), 1,
      sym_identifier,
    STATE(593), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10680] = 7,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(698), 1,
      sym_keyword_if,
    STATE(183), 1,
      sym_identifier,
    STATE(437), 1,
      sym__if_not_exists,
    STATE(715), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10703] = 7,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(698), 1,
      sym_keyword_if,
    STATE(441), 1,
      sym__if_not_exists,
    STATE(493), 1,
      sym_identifier,
    STATE(580), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10726] = 4,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(700), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10743] = 4,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(700), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10760] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(414), 1,
      sym_order_by,
    STATE(527), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(583), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10781] = 4,
    STATE(514), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(702), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10798] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(417), 1,
      sym_order_by,
    STATE(527), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(583), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10819] = 7,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
      sym__identifier,
    ACTIONS(698), 1,
      sym_keyword_if,
    STATE(6), 1,
      sym_identifier,
    STATE(421), 1,
      sym__if_not_exists,
    STATE(624), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10842] = 5,
    ACTIONS(447), 1,
      sym_keyword_alter,
    ACTIONS(449), 1,
      sym_keyword_drop,
    ACTIONS(451), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(616), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [10861] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(407), 1,
      sym_order_by,
    STATE(468), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(704), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [10882] = 4,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(706), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [10899] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(708), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10912] = 6,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(650), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(369), 2,
      sym_invocation,
      sym_subquery,
  [10933] = 4,
    STATE(498), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(537), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10950] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(710), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10963] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(459), 1,
      sym_order_by,
    STATE(468), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(704), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10984] = 4,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(593), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11001] = 4,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_order_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(715), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11018] = 4,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(299), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [11035] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(450), 1,
      sym_order_by,
    STATE(462), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11056] = 6,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(650), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(360), 2,
      sym_invocation,
      sym_subquery,
  [11077] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(403), 1,
      sym_order_by,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11098] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(686), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(647), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11112] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    STATE(545), 1,
      sym_order_by,
    STATE(660), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11132] = 3,
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
  [11146] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(722), 5,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11158] = 4,
    STATE(573), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(457), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(724), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11174] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(726), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11186] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(621), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(623), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11200] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(728), 1,
      sym_keyword_on,
    ACTIONS(730), 1,
      sym_keyword_as,
    STATE(765), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11220] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(732), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11232] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(121), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11246] = 4,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(734), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11262] = 4,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(734), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11278] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(736), 5,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11290] = 4,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(738), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11306] = 4,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(740), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11322] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(653), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(655), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11336] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(745), 1,
      sym_keyword_on,
    ACTIONS(747), 1,
      sym_keyword_as,
    STATE(631), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11356] = 4,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(734), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11372] = 4,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(738), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11388] = 5,
    ACTIONS(749), 1,
      sym_keyword_on,
    ACTIONS(751), 1,
      sym_keyword_using,
    STATE(609), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(227), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11406] = 6,
    ACTIONS(753), 1,
      sym_keyword_lateral,
    ACTIONS(755), 1,
      anon_sym_BQUOTE,
    ACTIONS(757), 1,
      sym__identifier,
    STATE(222), 1,
      sym_identifier,
    STATE(393), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11426] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(759), 5,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11438] = 4,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(740), 3,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11454] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(764), 5,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11466] = 4,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(734), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11482] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(635), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(637), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11496] = 6,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(690), 1,
      sym_keyword_if,
    STATE(519), 1,
      sym__if_exists,
    STATE(563), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11516] = 6,
    ACTIONS(755), 1,
      anon_sym_BQUOTE,
    ACTIONS(757), 1,
      sym__identifier,
    ACTIONS(766), 1,
      sym_keyword_lateral,
    STATE(222), 1,
      sym_identifier,
    STATE(385), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11536] = 3,
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
  [11550] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(502), 1,
      sym_table_reference,
    STATE(759), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11570] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(768), 1,
      sym_keyword_column,
    ACTIONS(770), 1,
      sym_keyword_to,
    STATE(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11590] = 6,
    ACTIONS(755), 1,
      anon_sym_BQUOTE,
    ACTIONS(757), 1,
      sym__identifier,
    ACTIONS(772), 1,
      sym_keyword_lateral,
    STATE(222), 1,
      sym_identifier,
    STATE(372), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11610] = 5,
    ACTIONS(774), 1,
      sym_keyword_on,
    ACTIONS(776), 1,
      sym_keyword_using,
    STATE(625), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(227), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11628] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(83), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11642] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(639), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(641), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11656] = 6,
    ACTIONS(221), 1,
      sym_keyword_order_by,
    ACTIONS(225), 1,
      sym_keyword_limit,
    ACTIONS(778), 1,
      anon_sym_SEMI,
    STATE(554), 1,
      sym_order_by,
    STATE(665), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11676] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(83), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11690] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(665), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(649), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11704] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(625), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(627), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11718] = 6,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(780), 1,
      sym_keyword_on,
    ACTIONS(782), 1,
      sym_keyword_as,
    STATE(730), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11738] = 5,
    ACTIONS(784), 1,
      sym_keyword_on,
    ACTIONS(786), 1,
      sym_keyword_using,
    STATE(588), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(227), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11756] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(127), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11770] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(661), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(663), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [11784] = 5,
    ACTIONS(788), 1,
      anon_sym_BQUOTE,
    ACTIONS(790), 1,
      sym__identifier,
    STATE(90), 1,
      sym_table_expression,
    STATE(125), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11801] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(792), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(794), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [11814] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [11827] = 3,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(145), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [11840] = 5,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(620), 1,
      sym__column_without_order,
    STATE(621), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11857] = 4,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11872] = 5,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(796), 1,
      anon_sym_STAR,
    ACTIONS(798), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11889] = 4,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(462), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11904] = 4,
    ACTIONS(800), 1,
      sym_keyword_offset,
    STATE(488), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(802), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11919] = 4,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(706), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [11934] = 4,
    ACTIONS(804), 1,
      sym_keyword_offset,
    STATE(488), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(802), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11949] = 4,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(506), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(806), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [11964] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(808), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11975] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(810), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(812), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [11988] = 4,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(299), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [12003] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(817), 4,
      sym_keyword_limit,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12014] = 5,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      aux_sym_column_definitions_repeat1,
    STATE(644), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12031] = 5,
    ACTIONS(755), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(222), 1,
      sym_identifier,
    STATE(372), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12048] = 4,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(468), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(704), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12063] = 5,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(493), 1,
      sym_identifier,
    STATE(652), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12080] = 4,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(527), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(583), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12095] = 4,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(468), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(704), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12110] = 5,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(798), 1,
      sym__identifier,
    ACTIONS(825), 1,
      anon_sym_STAR,
    STATE(362), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12127] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(827), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(829), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [12140] = 4,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(462), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12155] = 5,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(612), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12172] = 5,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    ACTIONS(833), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12189] = 5,
    ACTIONS(835), 1,
      anon_sym_BQUOTE,
    ACTIONS(837), 1,
      sym__identifier,
    STATE(86), 1,
      sym_table_expression,
    STATE(127), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12206] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(839), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12217] = 5,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    ACTIONS(841), 1,
      anon_sym_STAR,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12234] = 5,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    STATE(357), 1,
      sym_identifier,
    STATE(511), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12251] = 4,
    ACTIONS(269), 1,
      sym_keyword_limit,
    STATE(547), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12266] = 5,
    ACTIONS(843), 1,
      anon_sym_BQUOTE,
    ACTIONS(845), 1,
      sym__identifier,
    STATE(216), 1,
      sym_identifier,
    STATE(294), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12283] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(847), 4,
      sym_keyword_from,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12294] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(851), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [12307] = 5,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(611), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12324] = 5,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    STATE(357), 1,
      sym_identifier,
    STATE(566), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12341] = 5,
    ACTIONS(755), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(222), 1,
      sym_identifier,
    STATE(393), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12358] = 3,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [12371] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(655), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12388] = 5,
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
  [12405] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(673), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12422] = 5,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(493), 1,
      sym_identifier,
    STATE(623), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12439] = 5,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    ACTIONS(853), 1,
      anon_sym_STAR,
    STATE(244), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12456] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(590), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12473] = 5,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(493), 1,
      sym_identifier,
    STATE(593), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12490] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(855), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(857), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [12503] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(715), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12520] = 4,
    ACTIONS(859), 1,
      sym_keyword_from,
    STATE(775), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(227), 2,
      sym_keyword_force,
      sym_keyword_use,
  [12535] = 5,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    ACTIONS(861), 1,
      anon_sym_STAR,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12552] = 4,
    ACTIONS(863), 1,
      sym_keyword_from,
    STATE(572), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(865), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [12567] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [12580] = 5,
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
  [12597] = 5,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(457), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12614] = 4,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(527), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(583), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12629] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(281), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12646] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(595), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12663] = 5,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(596), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12680] = 5,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      anon_sym_STAR,
    ACTIONS(869), 1,
      sym__identifier,
    STATE(304), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12697] = 5,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(869), 1,
      sym__identifier,
    ACTIONS(871), 1,
      anon_sym_STAR,
    STATE(236), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12714] = 5,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(482), 1,
      sym__column_without_order,
    STATE(621), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12731] = 5,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_column_definitions_repeat1,
    STATE(658), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12748] = 3,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(686), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [12761] = 4,
    ACTIONS(225), 1,
      sym_keyword_limit,
    STATE(506), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(806), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12776] = 3,
    ACTIONS(663), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(661), 3,
      sym_keyword_on,
      sym_keyword_as,
      sym__identifier,
  [12789] = 4,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12803] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(583), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12813] = 4,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(503), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12827] = 4,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(464), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12841] = 4,
    ACTIONS(843), 1,
      anon_sym_BQUOTE,
    ACTIONS(845), 1,
      sym__identifier,
    STATE(238), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12855] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12869] = 4,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    STATE(467), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12883] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(806), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12893] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(765), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12907] = 4,
    ACTIONS(225), 1,
      sym_keyword_limit,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    STATE(660), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12921] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12935] = 4,
    ACTIONS(893), 1,
      sym_keyword_from,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12949] = 4,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(897), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12963] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(687), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12977] = 4,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    ACTIONS(901), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12991] = 4,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    STATE(172), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13005] = 4,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(897), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13019] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(607), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13033] = 4,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    STATE(286), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13047] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(606), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13061] = 4,
    ACTIONS(904), 1,
      sym_keyword_set,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    STATE(481), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13075] = 4,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(552), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13089] = 4,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    STATE(521), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13103] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13117] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(702), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13127] = 4,
    ACTIONS(919), 1,
      sym_keyword_where,
    ACTIONS(921), 1,
      anon_sym_SEMI,
    STATE(683), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13141] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(561), 1,
      sym_select,
    STATE(675), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13155] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(923), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13165] = 4,
    ACTIONS(925), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    STATE(579), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13179] = 4,
    ACTIONS(788), 1,
      anon_sym_BQUOTE,
    ACTIONS(790), 1,
      sym__identifier,
    STATE(152), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13193] = 4,
    ACTIONS(893), 1,
      sym_keyword_from,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(736), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13207] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(561), 1,
      sym_select,
    STATE(656), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13221] = 3,
    ACTIONS(931), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(441), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [13233] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(809), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13247] = 4,
    ACTIONS(933), 1,
      sym_keyword_select,
    STATE(446), 1,
      sym_select,
    STATE(524), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13261] = 4,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13275] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13289] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(589), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13299] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(189), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13313] = 4,
    ACTIONS(939), 1,
      sym_keyword_set,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(481), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13327] = 4,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13341] = 4,
    ACTIONS(948), 1,
      sym_keyword_values,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    STATE(719), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13355] = 4,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13369] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13383] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13397] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(956), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13407] = 4,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_SEMI,
    STATE(507), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13421] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(356), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13435] = 4,
    ACTIONS(893), 1,
      sym_keyword_from,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13449] = 4,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13463] = 4,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13477] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13491] = 4,
    ACTIONS(973), 1,
      sym_keyword_set,
    ACTIONS(975), 1,
      sym_keyword_drop,
    ACTIONS(977), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13505] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(979), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13515] = 4,
    ACTIONS(755), 1,
      anon_sym_BQUOTE,
    ACTIONS(823), 1,
      sym__identifier,
    STATE(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13529] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(632), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13543] = 4,
    ACTIONS(225), 1,
      sym_keyword_limit,
    ACTIONS(778), 1,
      anon_sym_SEMI,
    STATE(665), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13557] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(537), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13567] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(613), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13581] = 4,
    ACTIONS(893), 1,
      sym_keyword_from,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(721), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13595] = 4,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      anon_sym_SEMI,
    STATE(507), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13609] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(561), 1,
      sym_select,
    STATE(633), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13623] = 4,
    ACTIONS(359), 1,
      anon_sym_BQUOTE,
    ACTIONS(985), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13637] = 4,
    ACTIONS(925), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(987), 1,
      anon_sym_SEMI,
    STATE(617), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13651] = 4,
    ACTIONS(933), 1,
      sym_keyword_select,
    STATE(446), 1,
      sym_select,
    STATE(534), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13665] = 4,
    ACTIONS(989), 1,
      anon_sym_BQUOTE,
    ACTIONS(991), 1,
      sym__identifier,
    STATE(419), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13679] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(704), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13689] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(513), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13703] = 4,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13717] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(998), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13727] = 4,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    ACTIONS(1000), 1,
      sym_keyword_set,
    STATE(500), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13741] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(653), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13755] = 4,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_SEMI,
    STATE(536), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13769] = 4,
    ACTIONS(925), 1,
      aux_sym_keyword_with_token1,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
    STATE(597), 1,
      sym_keyword_with,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13783] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(651), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13797] = 4,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    STATE(507), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13811] = 4,
    ACTIONS(835), 1,
      anon_sym_BQUOTE,
    ACTIONS(837), 1,
      sym__identifier,
    STATE(136), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13825] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(172), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13839] = 4,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__identifier,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13853] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13867] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(333), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13877] = 4,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      sym__identifier,
    STATE(730), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13891] = 4,
    ACTIONS(933), 1,
      sym_keyword_select,
    STATE(446), 1,
      sym_select,
    STATE(489), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13905] = 4,
    ACTIONS(359), 1,
      anon_sym_BQUOTE,
    ACTIONS(985), 1,
      sym__identifier,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13919] = 4,
    ACTIONS(225), 1,
      sym_keyword_limit,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13933] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(356), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13947] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 3,
      aux_sym_keyword_with_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13957] = 4,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13971] = 4,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13985] = 4,
    ACTIONS(1010), 1,
      sym_keyword_not,
    ACTIONS(1012), 1,
      sym_keyword_default,
    ACTIONS(1014), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13999] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(189), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14013] = 4,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(464), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14027] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14041] = 4,
    ACTIONS(225), 1,
      sym_keyword_limit,
    ACTIONS(1020), 1,
      anon_sym_SEMI,
    STATE(649), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14055] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(647), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14069] = 4,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14083] = 4,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    STATE(557), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14097] = 4,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    STATE(558), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14111] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14125] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      sym__identifier,
    STATE(654), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14139] = 4,
    ACTIONS(865), 1,
      anon_sym_SEMI,
    ACTIONS(893), 1,
      sym_keyword_from,
    STATE(572), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14153] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1030), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [14162] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1032), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14171] = 3,
    ACTIONS(1034), 1,
      sym_keyword_table,
    ACTIONS(1036), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14182] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1038), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14191] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(993), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14200] = 3,
    ACTIONS(1040), 1,
      sym_keyword_table,
    ACTIONS(1042), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14211] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1044), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14220] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1046), 2,
      sym_keyword_no,
      sym_keyword_data,
  [14229] = 3,
    ACTIONS(1048), 1,
      sym_keyword_from,
    STATE(764), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14240] = 3,
    ACTIONS(1050), 1,
      sym_keyword_view,
    ACTIONS(1052), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14251] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1054), 2,
      aux_sym_keyword_with_token1,
      anon_sym_SEMI,
  [14260] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1056), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14269] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1058), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14278] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1060), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14287] = 3,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14298] = 3,
    ACTIONS(1062), 1,
      sym_keyword_for,
    ACTIONS(1064), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14309] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14318] = 3,
    ACTIONS(1066), 1,
      sym_keyword_no,
    ACTIONS(1068), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14329] = 3,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14340] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1072), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [14349] = 3,
    ACTIONS(1074), 1,
      sym_keyword_cascade,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14360] = 3,
    ACTIONS(1078), 1,
      sym_keyword_cascade,
    ACTIONS(1080), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14371] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(899), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14380] = 3,
    ACTIONS(1082), 1,
      anon_sym_LPAREN,
    STATE(575), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14391] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1084), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14400] = 3,
    ACTIONS(1086), 1,
      anon_sym_LPAREN,
    STATE(686), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14411] = 3,
    ACTIONS(1088), 1,
      sym_keyword_on,
    ACTIONS(1090), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14422] = 3,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14433] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(904), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [14442] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1092), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14451] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1094), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14460] = 3,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
    STATE(253), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14471] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1096), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [14480] = 3,
    ACTIONS(1098), 1,
      sym_keyword_cascade,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14491] = 3,
    ACTIONS(1102), 1,
      sym_keyword_cascade,
    ACTIONS(1104), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14502] = 3,
    ACTIONS(1106), 1,
      sym_keyword_no,
    ACTIONS(1108), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14513] = 3,
    ACTIONS(1110), 1,
      sym_keyword_outer,
    ACTIONS(1112), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14524] = 3,
    ACTIONS(1114), 1,
      sym_keyword_outer,
    ACTIONS(1116), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14535] = 3,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(520), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14546] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1118), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14555] = 3,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14566] = 3,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14577] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1128), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14586] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1130), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14595] = 3,
    ACTIONS(459), 1,
      sym_keyword_primary,
    STATE(585), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14606] = 3,
    ACTIONS(1082), 1,
      anon_sym_LPAREN,
    STATE(586), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14617] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1118), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14626] = 3,
    ACTIONS(784), 1,
      sym_keyword_on,
    ACTIONS(786), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14637] = 3,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14648] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(943), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14657] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1132), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14666] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1134), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14675] = 3,
    ACTIONS(1010), 1,
      sym_keyword_not,
    ACTIONS(1136), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14686] = 3,
    ACTIONS(1082), 1,
      anon_sym_LPAREN,
    STATE(605), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14697] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(961), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14706] = 3,
    ACTIONS(1138), 1,
      sym_keyword_no,
    ACTIONS(1140), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14717] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1142), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14726] = 3,
    ACTIONS(1086), 1,
      anon_sym_LPAREN,
    STATE(661), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14737] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1144), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14746] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1146), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14755] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(888), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14764] = 3,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
    STATE(258), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14775] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1148), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14784] = 3,
    ACTIONS(749), 1,
      sym_keyword_on,
    ACTIONS(751), 1,
      sym_keyword_using,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14795] = 3,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14806] = 2,
    ACTIONS(1150), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14814] = 2,
    ACTIONS(1152), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14822] = 2,
    ACTIONS(1154), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14830] = 2,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14838] = 2,
    ACTIONS(1158), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14846] = 2,
    ACTIONS(1160), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14854] = 2,
    ACTIONS(1162), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14862] = 2,
    ACTIONS(1164), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14870] = 2,
    ACTIONS(1166), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14878] = 2,
    ACTIONS(1168), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14886] = 2,
    ACTIONS(1170), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14894] = 2,
    ACTIONS(1172), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14902] = 2,
    ACTIONS(1174), 1,
      aux_sym_keyword_timestamp_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14910] = 2,
    ACTIONS(1176), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14918] = 2,
    ACTIONS(1178), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14926] = 2,
    ACTIONS(1180), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14934] = 2,
    ACTIONS(1182), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14942] = 2,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14950] = 2,
    ACTIONS(1186), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14958] = 2,
    ACTIONS(1188), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14966] = 2,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14974] = 2,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14982] = 2,
    ACTIONS(1194), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14990] = 2,
    ACTIONS(1196), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14998] = 2,
    ACTIONS(1198), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15006] = 2,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15014] = 2,
    ACTIONS(1202), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15022] = 2,
    ACTIONS(1204), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15030] = 2,
    ACTIONS(1206), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15038] = 2,
    ACTIONS(1208), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15046] = 2,
    ACTIONS(1210), 1,
      aux_sym_double_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15054] = 2,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15062] = 2,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15070] = 2,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15078] = 2,
    ACTIONS(1212), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15086] = 2,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15094] = 2,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15102] = 2,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15110] = 2,
    ACTIONS(1020), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15118] = 2,
    ACTIONS(1218), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15126] = 2,
    ACTIONS(1220), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15134] = 2,
    ACTIONS(1222), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15142] = 2,
    ACTIONS(1224), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15150] = 2,
    ACTIONS(1226), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15158] = 2,
    ACTIONS(1228), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15166] = 2,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15174] = 2,
    ACTIONS(1230), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15182] = 2,
    ACTIONS(1232), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15190] = 2,
    ACTIONS(1234), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15198] = 2,
    ACTIONS(1236), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15206] = 2,
    ACTIONS(1236), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15214] = 2,
    ACTIONS(1238), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15222] = 2,
    ACTIONS(1240), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15230] = 2,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15238] = 2,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15246] = 2,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15254] = 2,
    ACTIONS(1246), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15262] = 2,
    ACTIONS(1248), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15270] = 2,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15278] = 2,
    ACTIONS(1252), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15286] = 2,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15294] = 2,
    ACTIONS(1256), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15302] = 2,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15310] = 2,
    ACTIONS(778), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15318] = 2,
    ACTIONS(1112), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15326] = 2,
    ACTIONS(1260), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15334] = 2,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15342] = 2,
    ACTIONS(1104), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15350] = 2,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15358] = 2,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15366] = 2,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15374] = 2,
    ACTIONS(1108), 1,
      sym_keyword_data,
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
    ACTIONS(1002), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15406] = 2,
    ACTIONS(1272), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15414] = 2,
    ACTIONS(1274), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15422] = 2,
    ACTIONS(1276), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15430] = 2,
    ACTIONS(1276), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15438] = 2,
    ACTIONS(1278), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15446] = 2,
    ACTIONS(1280), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15454] = 2,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15462] = 2,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15470] = 2,
    ACTIONS(1286), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15478] = 2,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15486] = 2,
    ACTIONS(1290), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15494] = 2,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15502] = 2,
    ACTIONS(1292), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15510] = 2,
    ACTIONS(1294), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15518] = 2,
    ACTIONS(1296), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15526] = 2,
    ACTIONS(1298), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15534] = 2,
    ACTIONS(1300), 1,
      aux_sym_keyword_timestamp_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15542] = 2,
    ACTIONS(1302), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15550] = 2,
    ACTIONS(1304), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15558] = 2,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15566] = 2,
    ACTIONS(1308), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15574] = 2,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15582] = 2,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15590] = 2,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15598] = 2,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15606] = 2,
    ACTIONS(1318), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15614] = 2,
    ACTIONS(1318), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15622] = 2,
    ACTIONS(1320), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15630] = 2,
    ACTIONS(1322), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15638] = 2,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15646] = 2,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15654] = 2,
    ACTIONS(1328), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15662] = 2,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15670] = 2,
    ACTIONS(1332), 1,
      sym_keyword_exists,
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
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15694] = 2,
    ACTIONS(1338), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15702] = 2,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15710] = 2,
    ACTIONS(1340), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15718] = 2,
    ACTIONS(1342), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15726] = 2,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15734] = 2,
    ACTIONS(1346), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15742] = 2,
    ACTIONS(1346), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15750] = 2,
    ACTIONS(1348), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15758] = 2,
    ACTIONS(1350), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15766] = 2,
    ACTIONS(1352), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15774] = 2,
    ACTIONS(1354), 1,
      anon_sym_BQUOTE,
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
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15814] = 2,
    ACTIONS(1366), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [15822] = 2,
    ACTIONS(1368), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [15830] = 2,
    ACTIONS(1370), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15838] = 2,
    ACTIONS(1372), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15846] = 2,
    ACTIONS(1068), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15854] = 2,
    ACTIONS(1374), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15862] = 2,
    ACTIONS(1376), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15870] = 2,
    ACTIONS(1378), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15878] = 2,
    ACTIONS(1380), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15886] = 2,
    ACTIONS(1382), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15894] = 2,
    ACTIONS(1382), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15902] = 2,
    ACTIONS(1384), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15910] = 2,
    ACTIONS(1386), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15918] = 2,
    ACTIONS(1388), 1,
      ts_builtin_sym_end,
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
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15942] = 2,
    ACTIONS(1394), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15950] = 2,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15958] = 2,
    ACTIONS(1398), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15966] = 2,
    ACTIONS(1400), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15974] = 2,
    ACTIONS(1402), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15982] = 2,
    ACTIONS(1404), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15990] = 2,
    ACTIONS(1406), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15998] = 2,
    ACTIONS(1408), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16006] = 2,
    ACTIONS(1410), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16014] = 2,
    ACTIONS(1412), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16022] = 2,
    ACTIONS(1414), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16030] = 2,
    ACTIONS(1416), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16038] = 2,
    ACTIONS(1418), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16046] = 2,
    ACTIONS(1420), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16054] = 2,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16062] = 2,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16070] = 2,
    ACTIONS(1426), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16078] = 2,
    ACTIONS(1428), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16086] = 2,
    ACTIONS(1430), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16094] = 2,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16102] = 2,
    ACTIONS(1434), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16110] = 2,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16118] = 2,
    ACTIONS(1438), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16126] = 2,
    ACTIONS(1440), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16134] = 2,
    ACTIONS(1442), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16142] = 2,
    ACTIONS(1444), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16150] = 2,
    ACTIONS(1446), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1364), 2,
      sym_comment,
      sym_marginalia,
  [16158] = 2,
    ACTIONS(1448), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16166] = 2,
    ACTIONS(1450), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16174] = 2,
    ACTIONS(1452), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16182] = 2,
    ACTIONS(1454), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16190] = 2,
    ACTIONS(1456), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16198] = 2,
    ACTIONS(1458), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16206] = 2,
    ACTIONS(1460), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16214] = 2,
    ACTIONS(1462), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16222] = 2,
    ACTIONS(1464), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16230] = 2,
    ACTIONS(1466), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16238] = 2,
    ACTIONS(1468), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16246] = 2,
    ACTIONS(1470), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16254] = 2,
    ACTIONS(1472), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16262] = 2,
    ACTIONS(1474), 1,
      sym_keyword_on,
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
  [SMALL_STATE(8)] = 398,
  [SMALL_STATE(9)] = 446,
  [SMALL_STATE(10)] = 485,
  [SMALL_STATE(11)] = 524,
  [SMALL_STATE(12)] = 561,
  [SMALL_STATE(13)] = 598,
  [SMALL_STATE(14)] = 634,
  [SMALL_STATE(15)] = 672,
  [SMALL_STATE(16)] = 710,
  [SMALL_STATE(17)] = 748,
  [SMALL_STATE(18)] = 786,
  [SMALL_STATE(19)] = 824,
  [SMALL_STATE(20)] = 862,
  [SMALL_STATE(21)] = 900,
  [SMALL_STATE(22)] = 938,
  [SMALL_STATE(23)] = 974,
  [SMALL_STATE(24)] = 1020,
  [SMALL_STATE(25)] = 1072,
  [SMALL_STATE(26)] = 1120,
  [SMALL_STATE(27)] = 1162,
  [SMALL_STATE(28)] = 1200,
  [SMALL_STATE(29)] = 1236,
  [SMALL_STATE(30)] = 1274,
  [SMALL_STATE(31)] = 1312,
  [SMALL_STATE(32)] = 1348,
  [SMALL_STATE(33)] = 1386,
  [SMALL_STATE(34)] = 1424,
  [SMALL_STATE(35)] = 1460,
  [SMALL_STATE(36)] = 1498,
  [SMALL_STATE(37)] = 1536,
  [SMALL_STATE(38)] = 1574,
  [SMALL_STATE(39)] = 1612,
  [SMALL_STATE(40)] = 1650,
  [SMALL_STATE(41)] = 1686,
  [SMALL_STATE(42)] = 1724,
  [SMALL_STATE(43)] = 1762,
  [SMALL_STATE(44)] = 1798,
  [SMALL_STATE(45)] = 1836,
  [SMALL_STATE(46)] = 1874,
  [SMALL_STATE(47)] = 1912,
  [SMALL_STATE(48)] = 1948,
  [SMALL_STATE(49)] = 2013,
  [SMALL_STATE(50)] = 2046,
  [SMALL_STATE(51)] = 2079,
  [SMALL_STATE(52)] = 2144,
  [SMALL_STATE(53)] = 2179,
  [SMALL_STATE(54)] = 2214,
  [SMALL_STATE(55)] = 2279,
  [SMALL_STATE(56)] = 2344,
  [SMALL_STATE(57)] = 2409,
  [SMALL_STATE(58)] = 2474,
  [SMALL_STATE(59)] = 2507,
  [SMALL_STATE(60)] = 2572,
  [SMALL_STATE(61)] = 2605,
  [SMALL_STATE(62)] = 2670,
  [SMALL_STATE(63)] = 2735,
  [SMALL_STATE(64)] = 2777,
  [SMALL_STATE(65)] = 2809,
  [SMALL_STATE(66)] = 2857,
  [SMALL_STATE(67)] = 2889,
  [SMALL_STATE(68)] = 2951,
  [SMALL_STATE(69)] = 3013,
  [SMALL_STATE(70)] = 3045,
  [SMALL_STATE(71)] = 3083,
  [SMALL_STATE(72)] = 3115,
  [SMALL_STATE(73)] = 3147,
  [SMALL_STATE(74)] = 3179,
  [SMALL_STATE(75)] = 3211,
  [SMALL_STATE(76)] = 3273,
  [SMALL_STATE(77)] = 3335,
  [SMALL_STATE(78)] = 3367,
  [SMALL_STATE(79)] = 3399,
  [SMALL_STATE(80)] = 3433,
  [SMALL_STATE(81)] = 3477,
  [SMALL_STATE(82)] = 3536,
  [SMALL_STATE(83)] = 3595,
  [SMALL_STATE(84)] = 3654,
  [SMALL_STATE(85)] = 3713,
  [SMALL_STATE(86)] = 3772,
  [SMALL_STATE(87)] = 3830,
  [SMALL_STATE(88)] = 3886,
  [SMALL_STATE(89)] = 3922,
  [SMALL_STATE(90)] = 3978,
  [SMALL_STATE(91)] = 4036,
  [SMALL_STATE(92)] = 4092,
  [SMALL_STATE(93)] = 4148,
  [SMALL_STATE(94)] = 4196,
  [SMALL_STATE(95)] = 4227,
  [SMALL_STATE(96)] = 4280,
  [SMALL_STATE(97)] = 4311,
  [SMALL_STATE(98)] = 4342,
  [SMALL_STATE(99)] = 4395,
  [SMALL_STATE(100)] = 4426,
  [SMALL_STATE(101)] = 4456,
  [SMALL_STATE(102)] = 4488,
  [SMALL_STATE(103)] = 4516,
  [SMALL_STATE(104)] = 4544,
  [SMALL_STATE(105)] = 4582,
  [SMALL_STATE(106)] = 4610,
  [SMALL_STATE(107)] = 4650,
  [SMALL_STATE(108)] = 4678,
  [SMALL_STATE(109)] = 4728,
  [SMALL_STATE(110)] = 4770,
  [SMALL_STATE(111)] = 4804,
  [SMALL_STATE(112)] = 4838,
  [SMALL_STATE(113)] = 4888,
  [SMALL_STATE(114)] = 4916,
  [SMALL_STATE(115)] = 4966,
  [SMALL_STATE(116)] = 5016,
  [SMALL_STATE(117)] = 5063,
  [SMALL_STATE(118)] = 5114,
  [SMALL_STATE(119)] = 5147,
  [SMALL_STATE(120)] = 5198,
  [SMALL_STATE(121)] = 5249,
  [SMALL_STATE(122)] = 5300,
  [SMALL_STATE(123)] = 5351,
  [SMALL_STATE(124)] = 5398,
  [SMALL_STATE(125)] = 5443,
  [SMALL_STATE(126)] = 5480,
  [SMALL_STATE(127)] = 5525,
  [SMALL_STATE(128)] = 5562,
  [SMALL_STATE(129)] = 5613,
  [SMALL_STATE(130)] = 5642,
  [SMALL_STATE(131)] = 5684,
  [SMALL_STATE(132)] = 5726,
  [SMALL_STATE(133)] = 5768,
  [SMALL_STATE(134)] = 5810,
  [SMALL_STATE(135)] = 5852,
  [SMALL_STATE(136)] = 5894,
  [SMALL_STATE(137)] = 5928,
  [SMALL_STATE(138)] = 5974,
  [SMALL_STATE(139)] = 6000,
  [SMALL_STATE(140)] = 6046,
  [SMALL_STATE(141)] = 6072,
  [SMALL_STATE(142)] = 6098,
  [SMALL_STATE(143)] = 6144,
  [SMALL_STATE(144)] = 6186,
  [SMALL_STATE(145)] = 6232,
  [SMALL_STATE(146)] = 6278,
  [SMALL_STATE(147)] = 6324,
  [SMALL_STATE(148)] = 6368,
  [SMALL_STATE(149)] = 6414,
  [SMALL_STATE(150)] = 6456,
  [SMALL_STATE(151)] = 6500,
  [SMALL_STATE(152)] = 6546,
  [SMALL_STATE(153)] = 6580,
  [SMALL_STATE(154)] = 6626,
  [SMALL_STATE(155)] = 6668,
  [SMALL_STATE(156)] = 6714,
  [SMALL_STATE(157)] = 6758,
  [SMALL_STATE(158)] = 6786,
  [SMALL_STATE(159)] = 6828,
  [SMALL_STATE(160)] = 6870,
  [SMALL_STATE(161)] = 6916,
  [SMALL_STATE(162)] = 6958,
  [SMALL_STATE(163)] = 6986,
  [SMALL_STATE(164)] = 7028,
  [SMALL_STATE(165)] = 7054,
  [SMALL_STATE(166)] = 7096,
  [SMALL_STATE(167)] = 7138,
  [SMALL_STATE(168)] = 7180,
  [SMALL_STATE(169)] = 7222,
  [SMALL_STATE(170)] = 7264,
  [SMALL_STATE(171)] = 7306,
  [SMALL_STATE(172)] = 7348,
  [SMALL_STATE(173)] = 7371,
  [SMALL_STATE(174)] = 7394,
  [SMALL_STATE(175)] = 7435,
  [SMALL_STATE(176)] = 7458,
  [SMALL_STATE(177)] = 7481,
  [SMALL_STATE(178)] = 7519,
  [SMALL_STATE(179)] = 7557,
  [SMALL_STATE(180)] = 7579,
  [SMALL_STATE(181)] = 7611,
  [SMALL_STATE(182)] = 7649,
  [SMALL_STATE(183)] = 7671,
  [SMALL_STATE(184)] = 7693,
  [SMALL_STATE(185)] = 7727,
  [SMALL_STATE(186)] = 7763,
  [SMALL_STATE(187)] = 7783,
  [SMALL_STATE(188)] = 7803,
  [SMALL_STATE(189)] = 7837,
  [SMALL_STATE(190)] = 7856,
  [SMALL_STATE(191)] = 7875,
  [SMALL_STATE(192)] = 7894,
  [SMALL_STATE(193)] = 7913,
  [SMALL_STATE(194)] = 7932,
  [SMALL_STATE(195)] = 7973,
  [SMALL_STATE(196)] = 7993,
  [SMALL_STATE(197)] = 8015,
  [SMALL_STATE(198)] = 8034,
  [SMALL_STATE(199)] = 8051,
  [SMALL_STATE(200)] = 8070,
  [SMALL_STATE(201)] = 8087,
  [SMALL_STATE(202)] = 8106,
  [SMALL_STATE(203)] = 8135,
  [SMALL_STATE(204)] = 8154,
  [SMALL_STATE(205)] = 8173,
  [SMALL_STATE(206)] = 8202,
  [SMALL_STATE(207)] = 8219,
  [SMALL_STATE(208)] = 8252,
  [SMALL_STATE(209)] = 8281,
  [SMALL_STATE(210)] = 8314,
  [SMALL_STATE(211)] = 8333,
  [SMALL_STATE(212)] = 8352,
  [SMALL_STATE(213)] = 8376,
  [SMALL_STATE(214)] = 8398,
  [SMALL_STATE(215)] = 8414,
  [SMALL_STATE(216)] = 8440,
  [SMALL_STATE(217)] = 8468,
  [SMALL_STATE(218)] = 8484,
  [SMALL_STATE(219)] = 8506,
  [SMALL_STATE(220)] = 8524,
  [SMALL_STATE(221)] = 8542,
  [SMALL_STATE(222)] = 8558,
  [SMALL_STATE(223)] = 8584,
  [SMALL_STATE(224)] = 8600,
  [SMALL_STATE(225)] = 8620,
  [SMALL_STATE(226)] = 8636,
  [SMALL_STATE(227)] = 8664,
  [SMALL_STATE(228)] = 8680,
  [SMALL_STATE(229)] = 8696,
  [SMALL_STATE(230)] = 8724,
  [SMALL_STATE(231)] = 8740,
  [SMALL_STATE(232)] = 8756,
  [SMALL_STATE(233)] = 8772,
  [SMALL_STATE(234)] = 8788,
  [SMALL_STATE(235)] = 8804,
  [SMALL_STATE(236)] = 8831,
  [SMALL_STATE(237)] = 8850,
  [SMALL_STATE(238)] = 8879,
  [SMALL_STATE(239)] = 8904,
  [SMALL_STATE(240)] = 8921,
  [SMALL_STATE(241)] = 8948,
  [SMALL_STATE(242)] = 8971,
  [SMALL_STATE(243)] = 8988,
  [SMALL_STATE(244)] = 9005,
  [SMALL_STATE(245)] = 9024,
  [SMALL_STATE(246)] = 9051,
  [SMALL_STATE(247)] = 9068,
  [SMALL_STATE(248)] = 9091,
  [SMALL_STATE(249)] = 9108,
  [SMALL_STATE(250)] = 9131,
  [SMALL_STATE(251)] = 9154,
  [SMALL_STATE(252)] = 9177,
  [SMALL_STATE(253)] = 9196,
  [SMALL_STATE(254)] = 9223,
  [SMALL_STATE(255)] = 9250,
  [SMALL_STATE(256)] = 9273,
  [SMALL_STATE(257)] = 9300,
  [SMALL_STATE(258)] = 9323,
  [SMALL_STATE(259)] = 9350,
  [SMALL_STATE(260)] = 9377,
  [SMALL_STATE(261)] = 9400,
  [SMALL_STATE(262)] = 9429,
  [SMALL_STATE(263)] = 9456,
  [SMALL_STATE(264)] = 9483,
  [SMALL_STATE(265)] = 9506,
  [SMALL_STATE(266)] = 9535,
  [SMALL_STATE(267)] = 9551,
  [SMALL_STATE(268)] = 9565,
  [SMALL_STATE(269)] = 9581,
  [SMALL_STATE(270)] = 9595,
  [SMALL_STATE(271)] = 9609,
  [SMALL_STATE(272)] = 9633,
  [SMALL_STATE(273)] = 9649,
  [SMALL_STATE(274)] = 9665,
  [SMALL_STATE(275)] = 9681,
  [SMALL_STATE(276)] = 9697,
  [SMALL_STATE(277)] = 9711,
  [SMALL_STATE(278)] = 9727,
  [SMALL_STATE(279)] = 9743,
  [SMALL_STATE(280)] = 9763,
  [SMALL_STATE(281)] = 9777,
  [SMALL_STATE(282)] = 9797,
  [SMALL_STATE(283)] = 9811,
  [SMALL_STATE(284)] = 9837,
  [SMALL_STATE(285)] = 9851,
  [SMALL_STATE(286)] = 9867,
  [SMALL_STATE(287)] = 9885,
  [SMALL_STATE(288)] = 9901,
  [SMALL_STATE(289)] = 9917,
  [SMALL_STATE(290)] = 9933,
  [SMALL_STATE(291)] = 9949,
  [SMALL_STATE(292)] = 9965,
  [SMALL_STATE(293)] = 9981,
  [SMALL_STATE(294)] = 9997,
  [SMALL_STATE(295)] = 10023,
  [SMALL_STATE(296)] = 10043,
  [SMALL_STATE(297)] = 10057,
  [SMALL_STATE(298)] = 10071,
  [SMALL_STATE(299)] = 10085,
  [SMALL_STATE(300)] = 10109,
  [SMALL_STATE(301)] = 10123,
  [SMALL_STATE(302)] = 10139,
  [SMALL_STATE(303)] = 10155,
  [SMALL_STATE(304)] = 10179,
  [SMALL_STATE(305)] = 10195,
  [SMALL_STATE(306)] = 10211,
  [SMALL_STATE(307)] = 10225,
  [SMALL_STATE(308)] = 10241,
  [SMALL_STATE(309)] = 10257,
  [SMALL_STATE(310)] = 10273,
  [SMALL_STATE(311)] = 10289,
  [SMALL_STATE(312)] = 10305,
  [SMALL_STATE(313)] = 10321,
  [SMALL_STATE(314)] = 10337,
  [SMALL_STATE(315)] = 10353,
  [SMALL_STATE(316)] = 10369,
  [SMALL_STATE(317)] = 10385,
  [SMALL_STATE(318)] = 10399,
  [SMALL_STATE(319)] = 10422,
  [SMALL_STATE(320)] = 10443,
  [SMALL_STATE(321)] = 10466,
  [SMALL_STATE(322)] = 10489,
  [SMALL_STATE(323)] = 10512,
  [SMALL_STATE(324)] = 10529,
  [SMALL_STATE(325)] = 10550,
  [SMALL_STATE(326)] = 10573,
  [SMALL_STATE(327)] = 10594,
  [SMALL_STATE(328)] = 10617,
  [SMALL_STATE(329)] = 10634,
  [SMALL_STATE(330)] = 10657,
  [SMALL_STATE(331)] = 10680,
  [SMALL_STATE(332)] = 10703,
  [SMALL_STATE(333)] = 10726,
  [SMALL_STATE(334)] = 10743,
  [SMALL_STATE(335)] = 10760,
  [SMALL_STATE(336)] = 10781,
  [SMALL_STATE(337)] = 10798,
  [SMALL_STATE(338)] = 10819,
  [SMALL_STATE(339)] = 10842,
  [SMALL_STATE(340)] = 10861,
  [SMALL_STATE(341)] = 10882,
  [SMALL_STATE(342)] = 10899,
  [SMALL_STATE(343)] = 10912,
  [SMALL_STATE(344)] = 10933,
  [SMALL_STATE(345)] = 10950,
  [SMALL_STATE(346)] = 10963,
  [SMALL_STATE(347)] = 10984,
  [SMALL_STATE(348)] = 11001,
  [SMALL_STATE(349)] = 11018,
  [SMALL_STATE(350)] = 11035,
  [SMALL_STATE(351)] = 11056,
  [SMALL_STATE(352)] = 11077,
  [SMALL_STATE(353)] = 11098,
  [SMALL_STATE(354)] = 11112,
  [SMALL_STATE(355)] = 11132,
  [SMALL_STATE(356)] = 11146,
  [SMALL_STATE(357)] = 11158,
  [SMALL_STATE(358)] = 11174,
  [SMALL_STATE(359)] = 11186,
  [SMALL_STATE(360)] = 11200,
  [SMALL_STATE(361)] = 11220,
  [SMALL_STATE(362)] = 11232,
  [SMALL_STATE(363)] = 11246,
  [SMALL_STATE(364)] = 11262,
  [SMALL_STATE(365)] = 11278,
  [SMALL_STATE(366)] = 11290,
  [SMALL_STATE(367)] = 11306,
  [SMALL_STATE(368)] = 11322,
  [SMALL_STATE(369)] = 11336,
  [SMALL_STATE(370)] = 11356,
  [SMALL_STATE(371)] = 11372,
  [SMALL_STATE(372)] = 11388,
  [SMALL_STATE(373)] = 11406,
  [SMALL_STATE(374)] = 11426,
  [SMALL_STATE(375)] = 11438,
  [SMALL_STATE(376)] = 11454,
  [SMALL_STATE(377)] = 11466,
  [SMALL_STATE(378)] = 11482,
  [SMALL_STATE(379)] = 11496,
  [SMALL_STATE(380)] = 11516,
  [SMALL_STATE(381)] = 11536,
  [SMALL_STATE(382)] = 11550,
  [SMALL_STATE(383)] = 11570,
  [SMALL_STATE(384)] = 11590,
  [SMALL_STATE(385)] = 11610,
  [SMALL_STATE(386)] = 11628,
  [SMALL_STATE(387)] = 11642,
  [SMALL_STATE(388)] = 11656,
  [SMALL_STATE(389)] = 11676,
  [SMALL_STATE(390)] = 11690,
  [SMALL_STATE(391)] = 11704,
  [SMALL_STATE(392)] = 11718,
  [SMALL_STATE(393)] = 11738,
  [SMALL_STATE(394)] = 11756,
  [SMALL_STATE(395)] = 11770,
  [SMALL_STATE(396)] = 11784,
  [SMALL_STATE(397)] = 11801,
  [SMALL_STATE(398)] = 11814,
  [SMALL_STATE(399)] = 11827,
  [SMALL_STATE(400)] = 11840,
  [SMALL_STATE(401)] = 11857,
  [SMALL_STATE(402)] = 11872,
  [SMALL_STATE(403)] = 11889,
  [SMALL_STATE(404)] = 11904,
  [SMALL_STATE(405)] = 11919,
  [SMALL_STATE(406)] = 11934,
  [SMALL_STATE(407)] = 11949,
  [SMALL_STATE(408)] = 11964,
  [SMALL_STATE(409)] = 11975,
  [SMALL_STATE(410)] = 11988,
  [SMALL_STATE(411)] = 12003,
  [SMALL_STATE(412)] = 12014,
  [SMALL_STATE(413)] = 12031,
  [SMALL_STATE(414)] = 12048,
  [SMALL_STATE(415)] = 12063,
  [SMALL_STATE(416)] = 12080,
  [SMALL_STATE(417)] = 12095,
  [SMALL_STATE(418)] = 12110,
  [SMALL_STATE(419)] = 12127,
  [SMALL_STATE(420)] = 12140,
  [SMALL_STATE(421)] = 12155,
  [SMALL_STATE(422)] = 12172,
  [SMALL_STATE(423)] = 12189,
  [SMALL_STATE(424)] = 12206,
  [SMALL_STATE(425)] = 12217,
  [SMALL_STATE(426)] = 12234,
  [SMALL_STATE(427)] = 12251,
  [SMALL_STATE(428)] = 12266,
  [SMALL_STATE(429)] = 12283,
  [SMALL_STATE(430)] = 12294,
  [SMALL_STATE(431)] = 12307,
  [SMALL_STATE(432)] = 12324,
  [SMALL_STATE(433)] = 12341,
  [SMALL_STATE(434)] = 12358,
  [SMALL_STATE(435)] = 12371,
  [SMALL_STATE(436)] = 12388,
  [SMALL_STATE(437)] = 12405,
  [SMALL_STATE(438)] = 12422,
  [SMALL_STATE(439)] = 12439,
  [SMALL_STATE(440)] = 12456,
  [SMALL_STATE(441)] = 12473,
  [SMALL_STATE(442)] = 12490,
  [SMALL_STATE(443)] = 12503,
  [SMALL_STATE(444)] = 12520,
  [SMALL_STATE(445)] = 12535,
  [SMALL_STATE(446)] = 12552,
  [SMALL_STATE(447)] = 12567,
  [SMALL_STATE(448)] = 12580,
  [SMALL_STATE(449)] = 12597,
  [SMALL_STATE(450)] = 12614,
  [SMALL_STATE(451)] = 12629,
  [SMALL_STATE(452)] = 12646,
  [SMALL_STATE(453)] = 12663,
  [SMALL_STATE(454)] = 12680,
  [SMALL_STATE(455)] = 12697,
  [SMALL_STATE(456)] = 12714,
  [SMALL_STATE(457)] = 12731,
  [SMALL_STATE(458)] = 12748,
  [SMALL_STATE(459)] = 12761,
  [SMALL_STATE(460)] = 12776,
  [SMALL_STATE(461)] = 12789,
  [SMALL_STATE(462)] = 12803,
  [SMALL_STATE(463)] = 12813,
  [SMALL_STATE(464)] = 12827,
  [SMALL_STATE(465)] = 12841,
  [SMALL_STATE(466)] = 12855,
  [SMALL_STATE(467)] = 12869,
  [SMALL_STATE(468)] = 12883,
  [SMALL_STATE(469)] = 12893,
  [SMALL_STATE(470)] = 12907,
  [SMALL_STATE(471)] = 12921,
  [SMALL_STATE(472)] = 12935,
  [SMALL_STATE(473)] = 12949,
  [SMALL_STATE(474)] = 12963,
  [SMALL_STATE(475)] = 12977,
  [SMALL_STATE(476)] = 12991,
  [SMALL_STATE(477)] = 13005,
  [SMALL_STATE(478)] = 13019,
  [SMALL_STATE(479)] = 13033,
  [SMALL_STATE(480)] = 13047,
  [SMALL_STATE(481)] = 13061,
  [SMALL_STATE(482)] = 13075,
  [SMALL_STATE(483)] = 13089,
  [SMALL_STATE(484)] = 13103,
  [SMALL_STATE(485)] = 13117,
  [SMALL_STATE(486)] = 13127,
  [SMALL_STATE(487)] = 13141,
  [SMALL_STATE(488)] = 13155,
  [SMALL_STATE(489)] = 13165,
  [SMALL_STATE(490)] = 13179,
  [SMALL_STATE(491)] = 13193,
  [SMALL_STATE(492)] = 13207,
  [SMALL_STATE(493)] = 13221,
  [SMALL_STATE(494)] = 13233,
  [SMALL_STATE(495)] = 13247,
  [SMALL_STATE(496)] = 13261,
  [SMALL_STATE(497)] = 13275,
  [SMALL_STATE(498)] = 13289,
  [SMALL_STATE(499)] = 13299,
  [SMALL_STATE(500)] = 13313,
  [SMALL_STATE(501)] = 13327,
  [SMALL_STATE(502)] = 13341,
  [SMALL_STATE(503)] = 13355,
  [SMALL_STATE(504)] = 13369,
  [SMALL_STATE(505)] = 13383,
  [SMALL_STATE(506)] = 13397,
  [SMALL_STATE(507)] = 13407,
  [SMALL_STATE(508)] = 13421,
  [SMALL_STATE(509)] = 13435,
  [SMALL_STATE(510)] = 13449,
  [SMALL_STATE(511)] = 13463,
  [SMALL_STATE(512)] = 13477,
  [SMALL_STATE(513)] = 13491,
  [SMALL_STATE(514)] = 13505,
  [SMALL_STATE(515)] = 13515,
  [SMALL_STATE(516)] = 13529,
  [SMALL_STATE(517)] = 13543,
  [SMALL_STATE(518)] = 13557,
  [SMALL_STATE(519)] = 13567,
  [SMALL_STATE(520)] = 13581,
  [SMALL_STATE(521)] = 13595,
  [SMALL_STATE(522)] = 13609,
  [SMALL_STATE(523)] = 13623,
  [SMALL_STATE(524)] = 13637,
  [SMALL_STATE(525)] = 13651,
  [SMALL_STATE(526)] = 13665,
  [SMALL_STATE(527)] = 13679,
  [SMALL_STATE(528)] = 13689,
  [SMALL_STATE(529)] = 13703,
  [SMALL_STATE(530)] = 13717,
  [SMALL_STATE(531)] = 13727,
  [SMALL_STATE(532)] = 13741,
  [SMALL_STATE(533)] = 13755,
  [SMALL_STATE(534)] = 13769,
  [SMALL_STATE(535)] = 13783,
  [SMALL_STATE(536)] = 13797,
  [SMALL_STATE(537)] = 13811,
  [SMALL_STATE(538)] = 13825,
  [SMALL_STATE(539)] = 13839,
  [SMALL_STATE(540)] = 13853,
  [SMALL_STATE(541)] = 13867,
  [SMALL_STATE(542)] = 13877,
  [SMALL_STATE(543)] = 13891,
  [SMALL_STATE(544)] = 13905,
  [SMALL_STATE(545)] = 13919,
  [SMALL_STATE(546)] = 13933,
  [SMALL_STATE(547)] = 13947,
  [SMALL_STATE(548)] = 13957,
  [SMALL_STATE(549)] = 13971,
  [SMALL_STATE(550)] = 13985,
  [SMALL_STATE(551)] = 13999,
  [SMALL_STATE(552)] = 14013,
  [SMALL_STATE(553)] = 14027,
  [SMALL_STATE(554)] = 14041,
  [SMALL_STATE(555)] = 14055,
  [SMALL_STATE(556)] = 14069,
  [SMALL_STATE(557)] = 14083,
  [SMALL_STATE(558)] = 14097,
  [SMALL_STATE(559)] = 14111,
  [SMALL_STATE(560)] = 14125,
  [SMALL_STATE(561)] = 14139,
  [SMALL_STATE(562)] = 14153,
  [SMALL_STATE(563)] = 14162,
  [SMALL_STATE(564)] = 14171,
  [SMALL_STATE(565)] = 14182,
  [SMALL_STATE(566)] = 14191,
  [SMALL_STATE(567)] = 14200,
  [SMALL_STATE(568)] = 14211,
  [SMALL_STATE(569)] = 14220,
  [SMALL_STATE(570)] = 14229,
  [SMALL_STATE(571)] = 14240,
  [SMALL_STATE(572)] = 14251,
  [SMALL_STATE(573)] = 14260,
  [SMALL_STATE(574)] = 14269,
  [SMALL_STATE(575)] = 14278,
  [SMALL_STATE(576)] = 14287,
  [SMALL_STATE(577)] = 14298,
  [SMALL_STATE(578)] = 14309,
  [SMALL_STATE(579)] = 14318,
  [SMALL_STATE(580)] = 14329,
  [SMALL_STATE(581)] = 14340,
  [SMALL_STATE(582)] = 14349,
  [SMALL_STATE(583)] = 14360,
  [SMALL_STATE(584)] = 14371,
  [SMALL_STATE(585)] = 14380,
  [SMALL_STATE(586)] = 14391,
  [SMALL_STATE(587)] = 14400,
  [SMALL_STATE(588)] = 14411,
  [SMALL_STATE(589)] = 14422,
  [SMALL_STATE(590)] = 14433,
  [SMALL_STATE(591)] = 14442,
  [SMALL_STATE(592)] = 14451,
  [SMALL_STATE(593)] = 14460,
  [SMALL_STATE(594)] = 14471,
  [SMALL_STATE(595)] = 14480,
  [SMALL_STATE(596)] = 14491,
  [SMALL_STATE(597)] = 14502,
  [SMALL_STATE(598)] = 14513,
  [SMALL_STATE(599)] = 14524,
  [SMALL_STATE(600)] = 14535,
  [SMALL_STATE(601)] = 14546,
  [SMALL_STATE(602)] = 14555,
  [SMALL_STATE(603)] = 14566,
  [SMALL_STATE(604)] = 14577,
  [SMALL_STATE(605)] = 14586,
  [SMALL_STATE(606)] = 14595,
  [SMALL_STATE(607)] = 14606,
  [SMALL_STATE(608)] = 14617,
  [SMALL_STATE(609)] = 14626,
  [SMALL_STATE(610)] = 14637,
  [SMALL_STATE(611)] = 14648,
  [SMALL_STATE(612)] = 14657,
  [SMALL_STATE(613)] = 14666,
  [SMALL_STATE(614)] = 14675,
  [SMALL_STATE(615)] = 14686,
  [SMALL_STATE(616)] = 14697,
  [SMALL_STATE(617)] = 14706,
  [SMALL_STATE(618)] = 14717,
  [SMALL_STATE(619)] = 14726,
  [SMALL_STATE(620)] = 14737,
  [SMALL_STATE(621)] = 14746,
  [SMALL_STATE(622)] = 14755,
  [SMALL_STATE(623)] = 14764,
  [SMALL_STATE(624)] = 14775,
  [SMALL_STATE(625)] = 14784,
  [SMALL_STATE(626)] = 14795,
  [SMALL_STATE(627)] = 14806,
  [SMALL_STATE(628)] = 14814,
  [SMALL_STATE(629)] = 14822,
  [SMALL_STATE(630)] = 14830,
  [SMALL_STATE(631)] = 14838,
  [SMALL_STATE(632)] = 14846,
  [SMALL_STATE(633)] = 14854,
  [SMALL_STATE(634)] = 14862,
  [SMALL_STATE(635)] = 14870,
  [SMALL_STATE(636)] = 14878,
  [SMALL_STATE(637)] = 14886,
  [SMALL_STATE(638)] = 14894,
  [SMALL_STATE(639)] = 14902,
  [SMALL_STATE(640)] = 14910,
  [SMALL_STATE(641)] = 14918,
  [SMALL_STATE(642)] = 14926,
  [SMALL_STATE(643)] = 14934,
  [SMALL_STATE(644)] = 14942,
  [SMALL_STATE(645)] = 14950,
  [SMALL_STATE(646)] = 14958,
  [SMALL_STATE(647)] = 14966,
  [SMALL_STATE(648)] = 14974,
  [SMALL_STATE(649)] = 14982,
  [SMALL_STATE(650)] = 14990,
  [SMALL_STATE(651)] = 14998,
  [SMALL_STATE(652)] = 15006,
  [SMALL_STATE(653)] = 15014,
  [SMALL_STATE(654)] = 15022,
  [SMALL_STATE(655)] = 15030,
  [SMALL_STATE(656)] = 15038,
  [SMALL_STATE(657)] = 15046,
  [SMALL_STATE(658)] = 15054,
  [SMALL_STATE(659)] = 15062,
  [SMALL_STATE(660)] = 15070,
  [SMALL_STATE(661)] = 15078,
  [SMALL_STATE(662)] = 15086,
  [SMALL_STATE(663)] = 15094,
  [SMALL_STATE(664)] = 15102,
  [SMALL_STATE(665)] = 15110,
  [SMALL_STATE(666)] = 15118,
  [SMALL_STATE(667)] = 15126,
  [SMALL_STATE(668)] = 15134,
  [SMALL_STATE(669)] = 15142,
  [SMALL_STATE(670)] = 15150,
  [SMALL_STATE(671)] = 15158,
  [SMALL_STATE(672)] = 15166,
  [SMALL_STATE(673)] = 15174,
  [SMALL_STATE(674)] = 15182,
  [SMALL_STATE(675)] = 15190,
  [SMALL_STATE(676)] = 15198,
  [SMALL_STATE(677)] = 15206,
  [SMALL_STATE(678)] = 15214,
  [SMALL_STATE(679)] = 15222,
  [SMALL_STATE(680)] = 15230,
  [SMALL_STATE(681)] = 15238,
  [SMALL_STATE(682)] = 15246,
  [SMALL_STATE(683)] = 15254,
  [SMALL_STATE(684)] = 15262,
  [SMALL_STATE(685)] = 15270,
  [SMALL_STATE(686)] = 15278,
  [SMALL_STATE(687)] = 15286,
  [SMALL_STATE(688)] = 15294,
  [SMALL_STATE(689)] = 15302,
  [SMALL_STATE(690)] = 15310,
  [SMALL_STATE(691)] = 15318,
  [SMALL_STATE(692)] = 15326,
  [SMALL_STATE(693)] = 15334,
  [SMALL_STATE(694)] = 15342,
  [SMALL_STATE(695)] = 15350,
  [SMALL_STATE(696)] = 15358,
  [SMALL_STATE(697)] = 15366,
  [SMALL_STATE(698)] = 15374,
  [SMALL_STATE(699)] = 15382,
  [SMALL_STATE(700)] = 15390,
  [SMALL_STATE(701)] = 15398,
  [SMALL_STATE(702)] = 15406,
  [SMALL_STATE(703)] = 15414,
  [SMALL_STATE(704)] = 15422,
  [SMALL_STATE(705)] = 15430,
  [SMALL_STATE(706)] = 15438,
  [SMALL_STATE(707)] = 15446,
  [SMALL_STATE(708)] = 15454,
  [SMALL_STATE(709)] = 15462,
  [SMALL_STATE(710)] = 15470,
  [SMALL_STATE(711)] = 15478,
  [SMALL_STATE(712)] = 15486,
  [SMALL_STATE(713)] = 15494,
  [SMALL_STATE(714)] = 15502,
  [SMALL_STATE(715)] = 15510,
  [SMALL_STATE(716)] = 15518,
  [SMALL_STATE(717)] = 15526,
  [SMALL_STATE(718)] = 15534,
  [SMALL_STATE(719)] = 15542,
  [SMALL_STATE(720)] = 15550,
  [SMALL_STATE(721)] = 15558,
  [SMALL_STATE(722)] = 15566,
  [SMALL_STATE(723)] = 15574,
  [SMALL_STATE(724)] = 15582,
  [SMALL_STATE(725)] = 15590,
  [SMALL_STATE(726)] = 15598,
  [SMALL_STATE(727)] = 15606,
  [SMALL_STATE(728)] = 15614,
  [SMALL_STATE(729)] = 15622,
  [SMALL_STATE(730)] = 15630,
  [SMALL_STATE(731)] = 15638,
  [SMALL_STATE(732)] = 15646,
  [SMALL_STATE(733)] = 15654,
  [SMALL_STATE(734)] = 15662,
  [SMALL_STATE(735)] = 15670,
  [SMALL_STATE(736)] = 15678,
  [SMALL_STATE(737)] = 15686,
  [SMALL_STATE(738)] = 15694,
  [SMALL_STATE(739)] = 15702,
  [SMALL_STATE(740)] = 15710,
  [SMALL_STATE(741)] = 15718,
  [SMALL_STATE(742)] = 15726,
  [SMALL_STATE(743)] = 15734,
  [SMALL_STATE(744)] = 15742,
  [SMALL_STATE(745)] = 15750,
  [SMALL_STATE(746)] = 15758,
  [SMALL_STATE(747)] = 15766,
  [SMALL_STATE(748)] = 15774,
  [SMALL_STATE(749)] = 15782,
  [SMALL_STATE(750)] = 15790,
  [SMALL_STATE(751)] = 15798,
  [SMALL_STATE(752)] = 15806,
  [SMALL_STATE(753)] = 15814,
  [SMALL_STATE(754)] = 15822,
  [SMALL_STATE(755)] = 15830,
  [SMALL_STATE(756)] = 15838,
  [SMALL_STATE(757)] = 15846,
  [SMALL_STATE(758)] = 15854,
  [SMALL_STATE(759)] = 15862,
  [SMALL_STATE(760)] = 15870,
  [SMALL_STATE(761)] = 15878,
  [SMALL_STATE(762)] = 15886,
  [SMALL_STATE(763)] = 15894,
  [SMALL_STATE(764)] = 15902,
  [SMALL_STATE(765)] = 15910,
  [SMALL_STATE(766)] = 15918,
  [SMALL_STATE(767)] = 15926,
  [SMALL_STATE(768)] = 15934,
  [SMALL_STATE(769)] = 15942,
  [SMALL_STATE(770)] = 15950,
  [SMALL_STATE(771)] = 15958,
  [SMALL_STATE(772)] = 15966,
  [SMALL_STATE(773)] = 15974,
  [SMALL_STATE(774)] = 15982,
  [SMALL_STATE(775)] = 15990,
  [SMALL_STATE(776)] = 15998,
  [SMALL_STATE(777)] = 16006,
  [SMALL_STATE(778)] = 16014,
  [SMALL_STATE(779)] = 16022,
  [SMALL_STATE(780)] = 16030,
  [SMALL_STATE(781)] = 16038,
  [SMALL_STATE(782)] = 16046,
  [SMALL_STATE(783)] = 16054,
  [SMALL_STATE(784)] = 16062,
  [SMALL_STATE(785)] = 16070,
  [SMALL_STATE(786)] = 16078,
  [SMALL_STATE(787)] = 16086,
  [SMALL_STATE(788)] = 16094,
  [SMALL_STATE(789)] = 16102,
  [SMALL_STATE(790)] = 16110,
  [SMALL_STATE(791)] = 16118,
  [SMALL_STATE(792)] = 16126,
  [SMALL_STATE(793)] = 16134,
  [SMALL_STATE(794)] = 16142,
  [SMALL_STATE(795)] = 16150,
  [SMALL_STATE(796)] = 16158,
  [SMALL_STATE(797)] = 16166,
  [SMALL_STATE(798)] = 16174,
  [SMALL_STATE(799)] = 16182,
  [SMALL_STATE(800)] = 16190,
  [SMALL_STATE(801)] = 16198,
  [SMALL_STATE(802)] = 16206,
  [SMALL_STATE(803)] = 16214,
  [SMALL_STATE(804)] = 16222,
  [SMALL_STATE(805)] = 16230,
  [SMALL_STATE(806)] = 16238,
  [SMALL_STATE(807)] = 16246,
  [SMALL_STATE(808)] = 16254,
  [SMALL_STATE(809)] = 16262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 20),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 20),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 9, .production_id = 48),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 8, .production_id = 47),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 24),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 24),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7, .production_id = 45),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 6, .production_id = 43),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lateral_join, 7),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 11),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 11),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 29),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 35),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 12),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 18),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 30),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 25),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(598),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(599),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(691),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(380),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 37),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 27),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 26),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 26),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 11),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_expression, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 27),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 41),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 42),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 42),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_expression_repeat1, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 41),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 41),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 46),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 46),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_int, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 27),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_expression_repeat1, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 36),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 36),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_all_fields, 5, .production_id = 23),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 5, .production_id = 23),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 19),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 19),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_all_fields, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 4, .production_id = 16),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_all_fields, 3, .production_id = 9),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_fields, 3, .production_id = 9),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 3, .production_id = 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 3, .production_id = 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 13),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 13),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(397),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(780),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(210),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 4, .production_id = 16),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 27),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_expression_repeat1, 2), SHIFT_REPEAT(114),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(150),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 2, .production_id = 5),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 2, .production_id = 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_expression_repeat1, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 3, .production_id = 6),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2, .production_id = 7),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(115),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 3, .production_id = 14),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(112),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 1, .production_id = 4),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 17),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 17),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(156),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 32),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 32),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 1, .production_id = 8),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(400),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(260),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(237),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(440),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(431),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 15),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(339),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 27),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(432),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(108),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 22), SHIFT_REPEAT(81),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 29),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 44),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_with, 1),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 2),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 40),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 40),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 38),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 29),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 31),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 33),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 21),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 26),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 34),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 28),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 39),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1466] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
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
