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
#define STATE_COUNT 932
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 198
#define ALIAS_COUNT 1
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
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
  sym_keyword_with = 54,
  sym_keyword_no = 55,
  sym_keyword_data = 56,
  sym_keyword_type = 57,
  sym_keyword_rename = 58,
  sym_keyword_to = 59,
  sym_keyword_schema = 60,
  sym_keyword_owner = 61,
  sym_keyword_temp = 62,
  sym_keyword_temporary = 63,
  sym_keyword_bigint = 64,
  sym_keyword_null = 65,
  sym_keyword_date = 66,
  sym_keyword_datetime = 67,
  sym_keyword_char = 68,
  sym_keyword_varchar = 69,
  anon_sym_LPAREN = 70,
  anon_sym_RPAREN = 71,
  sym_comment = 72,
  sym_marginalia = 73,
  anon_sym_SEMI = 74,
  anon_sym_COMMA = 75,
  anon_sym_DOT = 76,
  anon_sym_EQ = 77,
  anon_sym_STAR = 78,
  anon_sym_PLUS = 79,
  anon_sym_DASH = 80,
  anon_sym_SLASH = 81,
  anon_sym_PERCENT = 82,
  anon_sym_CARET = 83,
  anon_sym_LT = 84,
  anon_sym_LT_EQ = 85,
  anon_sym_BANG_EQ = 86,
  anon_sym_GT_EQ = 87,
  anon_sym_GT = 88,
  anon_sym_SQUOTE = 89,
  aux_sym__literal_string_token1 = 90,
  anon_sym_DQUOTE = 91,
  aux_sym__literal_string_token2 = 92,
  sym__number = 93,
  anon_sym_BQUOTE = 94,
  sym__identifier = 95,
  sym_program = 96,
  sym__temporary = 97,
  sym__not_null = 98,
  sym__primary_key = 99,
  sym__if_exists = 100,
  sym__if_not_exists = 101,
  sym__or_replace = 102,
  sym__default_null = 103,
  sym_direction = 104,
  sym__type = 105,
  sym_bigint = 106,
  sym_char = 107,
  sym_varchar = 108,
  sym_statement = 109,
  sym__select_statement = 110,
  sym_select = 111,
  sym_select_expression = 112,
  sym__delete_statement = 113,
  sym__delete_from = 114,
  sym_delete = 115,
  sym__create_statement = 116,
  sym_create_table = 117,
  sym_create_view = 118,
  sym_create_materialized_view = 119,
  sym__alter_statement = 120,
  sym_alter_table = 121,
  sym_add_column = 122,
  sym_alter_column = 123,
  sym_drop_column = 124,
  sym_rename_column = 125,
  sym_alter_view = 126,
  sym__drop_statement = 127,
  sym_drop_table = 128,
  sym_drop_view = 129,
  sym_rename_object = 130,
  sym_set_schema = 131,
  sym_change_ownership = 132,
  sym_table_reference = 133,
  sym__insert_statement = 134,
  sym_insert = 135,
  sym_insert_expression = 136,
  sym__column_list_without_order = 137,
  sym__column_without_order = 138,
  sym__update_statement = 139,
  sym_update = 140,
  sym_update_expression = 141,
  sym__single_table_update = 142,
  sym__multi_table_update = 143,
  sym__table_references = 144,
  sym_assignment_list = 145,
  sym_table_options = 146,
  sym_table_option = 147,
  sym_column_definitions = 148,
  sym_column_definition = 149,
  sym_constraints = 150,
  sym_constraint = 151,
  sym__constraint_literal = 152,
  sym__primary_key_constraint = 153,
  sym__key_constraint = 154,
  sym_column_list = 155,
  sym_column = 156,
  sym__field_list = 157,
  sym_field = 158,
  sym_function_call = 159,
  sym__unary_function = 160,
  sym__count_function = 161,
  sym__multi_param_function = 162,
  sym__function_param = 163,
  sym__function_params = 164,
  sym__unary_function_name = 165,
  sym__function_name = 166,
  sym_from = 167,
  sym_table_expression = 168,
  sym_index_hint = 169,
  sym_join = 170,
  sym_where = 171,
  sym_group_by = 172,
  sym__having = 173,
  sym_order_by = 174,
  sym_order_expression = 175,
  sym_limit = 176,
  sym_offset = 177,
  sym_where_expression = 178,
  sym_predicate = 179,
  sym__expression = 180,
  sym_subquery = 181,
  sym_list = 182,
  sym_literal = 183,
  sym__literal_string = 184,
  sym_identifier = 185,
  aux_sym_alter_table_repeat1 = 186,
  aux_sym__column_list_without_order_repeat1 = 187,
  aux_sym__table_references_repeat1 = 188,
  aux_sym_assignment_list_repeat1 = 189,
  aux_sym_table_options_repeat1 = 190,
  aux_sym_column_definitions_repeat1 = 191,
  aux_sym_constraints_repeat1 = 192,
  aux_sym_column_list_repeat1 = 193,
  aux_sym__field_list_repeat1 = 194,
  aux_sym__function_params_repeat1 = 195,
  aux_sym_from_repeat1 = 196,
  aux_sym_list_repeat1 = 197,
  anon_alias_sym_if = 198,
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
  [sym_keyword_with] = "keyword_with",
  [sym_keyword_no] = "keyword_no",
  [sym_keyword_data] = "keyword_data",
  [sym_keyword_type] = "keyword_type",
  [sym_keyword_rename] = "keyword_rename",
  [sym_keyword_to] = "keyword_to",
  [sym_keyword_schema] = "keyword_schema",
  [sym_keyword_owner] = "keyword_owner",
  [sym_keyword_temp] = "keyword_temp",
  [sym_keyword_temporary] = "keyword_temporary",
  [sym_keyword_bigint] = "keyword_bigint",
  [sym_keyword_null] = "keyword_null",
  [sym_keyword_date] = "keyword_date",
  [sym_keyword_datetime] = "keyword_datetime",
  [sym_keyword_char] = "keyword_char",
  [sym_keyword_varchar] = "keyword_varchar",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [sym_marginalia] = "marginalia",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
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
  [sym__temporary] = "_temporary",
  [sym__not_null] = "_not_null",
  [sym__primary_key] = "_primary_key",
  [sym__if_exists] = "_if_exists",
  [sym__if_not_exists] = "_if_not_exists",
  [sym__or_replace] = "_or_replace",
  [sym__default_null] = "_default_null",
  [sym_direction] = "direction",
  [sym__type] = "_type",
  [sym_bigint] = "bigint",
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
  [sym_keyword_with] = sym_keyword_with,
  [sym_keyword_no] = sym_keyword_no,
  [sym_keyword_data] = sym_keyword_data,
  [sym_keyword_type] = sym_keyword_type,
  [sym_keyword_rename] = sym_keyword_rename,
  [sym_keyword_to] = sym_keyword_to,
  [sym_keyword_schema] = sym_keyword_schema,
  [sym_keyword_owner] = sym_keyword_owner,
  [sym_keyword_temp] = sym_keyword_temp,
  [sym_keyword_temporary] = sym_keyword_temporary,
  [sym_keyword_bigint] = sym_keyword_bigint,
  [sym_keyword_null] = sym_keyword_null,
  [sym_keyword_date] = sym_keyword_date,
  [sym_keyword_datetime] = sym_keyword_datetime,
  [sym_keyword_char] = sym_keyword_char,
  [sym_keyword_varchar] = sym_keyword_varchar,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [sym_marginalia] = sym_marginalia,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__temporary] = sym__temporary,
  [sym__not_null] = sym__not_null,
  [sym__primary_key] = sym__primary_key,
  [sym__if_exists] = sym__if_exists,
  [sym__if_not_exists] = sym__if_not_exists,
  [sym__or_replace] = sym__or_replace,
  [sym__default_null] = sym__default_null,
  [sym_direction] = sym_direction,
  [sym__type] = sym__type,
  [sym_bigint] = sym_bigint,
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
  [sym_keyword_with] = {
    .visible = true,
    .named = true,
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
  [sym_keyword_bigint] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_null] = {
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
  [sym_keyword_char] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_varchar] = {
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
  [anon_sym_COMMA] = {
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
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_bigint] = {
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
  field_right = 9,
  field_schema = 10,
  field_size = 11,
  field_table_alias = 12,
  field_type = 13,
  field_value = 14,
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
  [field_right] = "right",
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
  [47] = {.index = 95, .length = 3},
  [48] = {.index = 98, .length = 2},
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
    {field_alias, 8},
    {field_name, 0},
    {field_parameter, 4},
  [98] =
    {field_name, 2},
    {field_type, 6},
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
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(582);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(288);
      if (lookahead == 'F') ADVANCE(214);
      if (lookahead == 'G') ADVANCE(235);
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'K') ADVANCE(97);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(206);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(222);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'f') ADVANCE(466);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(465);
      if (lookahead == 'k') ADVANCE(349);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == 'w') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(581)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(702);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(327);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'F') ADVANCE(216);
      if (lookahead == 'G') ADVANCE(235);
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(186);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(210);
      if (lookahead == 'O') ADVANCE(187);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(248);
      if (lookahead == 'V') ADVANCE(52);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == 'j') ADVANCE(465);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(500);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 'w') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(548)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(217);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(155);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == 'v') ADVANCE(407);
      if (lookahead == 'w') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(555)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'O') ADVANCE(818);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(561)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'G') ADVANCE(235);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'O') ADVANCE(224);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == 'w') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(560)
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(795);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(901);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(549)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(554)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(559)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(557)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'O') ADVANCE(818);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(562)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(795);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'W') ADVANCE(774);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(901);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'w') ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(550)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'W') ADVANCE(784);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'w') ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(556)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'W') ADVANCE(784);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'w') ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(558)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'C') ADVANCE(810);
      if (lookahead == 'D') ADVANCE(780);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'M') ADVANCE(747);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead == 'd') ADVANCE(886);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == 'm') ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(553)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'C') ADVANCE(810);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'M') ADVANCE(747);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == 'm') ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(552)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'C') ADVANCE(810);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'M') ADVANCE(747);
      if (lookahead == 'S') ADVANCE(759);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == 'm') ADVANCE(853);
      if (lookahead == 's') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(551)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(566)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(825);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(931);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(571)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(216);
      if (lookahead == 'G') ADVANCE(235);
      if (lookahead == 'I') ADVANCE(192);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == 'O') ADVANCE(188);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(222);
      if (lookahead == 'V') ADVANCE(65);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == 'j') ADVANCE(465);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == 'w') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(547)
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(829);
      if (lookahead == 'D') ADVANCE(768);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(935);
      if (lookahead == 'd') ADVANCE(874);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(569)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(577)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(563)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(567)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(825);
      if (lookahead == 'W') ADVANCE(784);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(931);
      if (lookahead == 'w') ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(572)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 32:
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(829);
      if (lookahead == 'D') ADVANCE(768);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'W') ADVANCE(784);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(935);
      if (lookahead == 'd') ADVANCE(874);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'w') ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(570)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == 'W') ADVANCE(774);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(564)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(573)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'O') ADVANCE(799);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'o') ADVANCE(905);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(575)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'D') ADVANCE(765);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'd') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(574)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == 'W') ADVANCE(774);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(565)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(576)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(814);
      if (lookahead == 'K') ADVANCE(763);
      if (lookahead == 'P') ADVANCE(826);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'c') ADVANCE(920);
      if (lookahead == 'k') ADVANCE(869);
      if (lookahead == 'p') ADVANCE(932);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(568)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(812);
      if (lookahead == 'T') ADVANCE(808);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'c') ADVANCE(918);
      if (lookahead == 't') ADVANCE(914);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(580)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'O') ADVANCE(799);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'o') ADVANCE(905);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(579)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(578)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(720);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'H') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(285);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(189);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == 'Y') ADVANCE(223);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(171);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(683);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(683);
      if (lookahead == 'E') ADVANCE(695);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(688);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(253);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'I') ADVANCE(249);
      if (lookahead == 'R') ADVANCE(211);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(253);
      if (lookahead == 'R') ADVANCE(211);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(226);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(283);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(182);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(172);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(170);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(233);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(231);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(236);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(276);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(211);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(277);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(279);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(272);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(166);
      END_STATE();
    case 74:
      if (lookahead == 'B') ADVANCE(291);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(292);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(176);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(612);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(610);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(151);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(60);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(262);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(104);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(264);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'C') ADVANCE(241);
      END_STATE();
    case 87:
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'N') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(631);
      if (lookahead == 'U') ADVANCE(270);
      if (lookahead == 'V') ADVANCE(143);
      END_STATE();
    case 88:
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'N') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(630);
      END_STATE();
    case 89:
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'S') ADVANCE(630);
      END_STATE();
    case 90:
      if (lookahead == 'D') ADVANCE(622);
      END_STATE();
    case 91:
      if (lookahead == 'D') ADVANCE(654);
      END_STATE();
    case 92:
      if (lookahead == 'D') ADVANCE(625);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(124);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == 'T') ADVANCE(209);
      END_STATE();
    case 96:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'I') ADVANCE(179);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(665);
      END_STATE();
    case 102:
      if (lookahead == 'E') ADVANCE(286);
      END_STATE();
    case 103:
      if (lookahead == 'E') ADVANCE(684);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(663);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(623);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(605);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(619);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(585);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(685);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(588);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(677);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(587);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(697);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(287);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(239);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(247);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(227);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(228);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(244);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(229);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(230);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(197);
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(255);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(237);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(278);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 135:
      if (lookahead == 'F') ADVANCE(671);
      if (lookahead == 'N') ADVANCE(649);
      END_STATE();
    case 136:
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'N') ADVANCE(603);
      if (lookahead == 'R') ADVANCE(657);
      if (lookahead == 'U') ADVANCE(275);
      if (lookahead == 'W') ADVANCE(201);
      END_STATE();
    case 137:
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(656);
      END_STATE();
    case 138:
      if (lookahead == 'F') ADVANCE(252);
      END_STATE();
    case 139:
      if (lookahead == 'F') ADVANCE(61);
      if (lookahead == 'L') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'F') ADVANCE(61);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 141:
      if (lookahead == 'F') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 142:
      if (lookahead == 'F') ADVANCE(256);
      END_STATE();
    case 143:
      if (lookahead == 'G') ADVANCE(646);
      END_STATE();
    case 144:
      if (lookahead == 'G') ADVANCE(609);
      END_STATE();
    case 145:
      if (lookahead == 'G') ADVANCE(149);
      END_STATE();
    case 146:
      if (lookahead == 'G') ADVANCE(163);
      END_STATE();
    case 147:
      if (lookahead == 'H') ADVANCE(678);
      END_STATE();
    case 148:
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(268);
      END_STATE();
    case 149:
      if (lookahead == 'H') ADVANCE(259);
      END_STATE();
    case 150:
      if (lookahead == 'H') ADVANCE(123);
      END_STATE();
    case 151:
      if (lookahead == 'H') ADVANCE(67);
      END_STATE();
    case 152:
      if (lookahead == 'I') ADVANCE(179);
      END_STATE();
    case 153:
      if (lookahead == 'I') ADVANCE(294);
      END_STATE();
    case 154:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 155:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 156:
      if (lookahead == 'I') ADVANCE(185);
      END_STATE();
    case 157:
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 158:
      if (lookahead == 'I') ADVANCE(196);
      END_STATE();
    case 159:
      if (lookahead == 'I') ADVANCE(205);
      END_STATE();
    case 160:
      if (lookahead == 'I') ADVANCE(199);
      END_STATE();
    case 161:
      if (lookahead == 'I') ADVANCE(64);
      END_STATE();
    case 162:
      if (lookahead == 'I') ADVANCE(258);
      END_STATE();
    case 163:
      if (lookahead == 'I') ADVANCE(202);
      END_STATE();
    case 164:
      if (lookahead == 'I') ADVANCE(183);
      END_STATE();
    case 165:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 166:
      if (lookahead == 'I') ADVANCE(203);
      END_STATE();
    case 167:
      if (lookahead == 'L') ADVANCE(282);
      if (lookahead == 'N') ADVANCE(250);
      if (lookahead == 'U') ADVANCE(200);
      END_STATE();
    case 168:
      if (lookahead == 'L') ADVANCE(694);
      END_STATE();
    case 169:
      if (lookahead == 'L') ADVANCE(168);
      END_STATE();
    case 170:
      if (lookahead == 'L') ADVANCE(284);
      END_STATE();
    case 171:
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 172:
      if (lookahead == 'L') ADVANCE(153);
      END_STATE();
    case 173:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 174:
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'T') ADVANCE(591);
      END_STATE();
    case 175:
      if (lookahead == 'L') ADVANCE(263);
      END_STATE();
    case 176:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 177:
      if (lookahead == 'M') ADVANCE(592);
      END_STATE();
    case 178:
      if (lookahead == 'M') ADVANCE(220);
      END_STATE();
    case 179:
      if (lookahead == 'M') ADVANCE(162);
      END_STATE();
    case 180:
      if (lookahead == 'M') ADVANCE(191);
      END_STATE();
    case 181:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 182:
      if (lookahead == 'M') ADVANCE(109);
      END_STATE();
    case 183:
      if (lookahead == 'M') ADVANCE(113);
      END_STATE();
    case 184:
      if (lookahead == 'M') ADVANCE(134);
      END_STATE();
    case 185:
      if (lookahead == 'M') ADVANCE(66);
      END_STATE();
    case 186:
      if (lookahead == 'N') ADVANCE(649);
      END_STATE();
    case 187:
      if (lookahead == 'N') ADVANCE(603);
      if (lookahead == 'R') ADVANCE(657);
      if (lookahead == 'W') ADVANCE(201);
      END_STATE();
    case 188:
      if (lookahead == 'N') ADVANCE(603);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(201);
      END_STATE();
    case 189:
      if (lookahead == 'N') ADVANCE(644);
      END_STATE();
    case 190:
      if (lookahead == 'N') ADVANCE(601);
      END_STATE();
    case 191:
      if (lookahead == 'N') ADVANCE(626);
      END_STATE();
    case 192:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 193:
      if (lookahead == 'N') ADVANCE(648);
      END_STATE();
    case 194:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 195:
      if (lookahead == 'N') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'U') ADVANCE(270);
      END_STATE();
    case 196:
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 197:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 198:
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == 'P') ADVANCE(173);
      END_STATE();
    case 199:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 200:
      if (lookahead == 'N') ADVANCE(257);
      END_STATE();
    case 201:
      if (lookahead == 'N') ADVANCE(126);
      END_STATE();
    case 202:
      if (lookahead == 'N') ADVANCE(260);
      END_STATE();
    case 203:
      if (lookahead == 'N') ADVANCE(265);
      END_STATE();
    case 204:
      if (lookahead == 'N') ADVANCE(266);
      END_STATE();
    case 205:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 206:
      if (lookahead == 'O') ADVANCE(681);
      if (lookahead == 'U') ADVANCE(169);
      END_STATE();
    case 207:
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == 'Y') ADVANCE(223);
      END_STATE();
    case 208:
      if (lookahead == 'O') ADVANCE(295);
      END_STATE();
    case 209:
      if (lookahead == 'O') ADVANCE(589);
      END_STATE();
    case 210:
      if (lookahead == 'O') ADVANCE(680);
      END_STATE();
    case 211:
      if (lookahead == 'O') ADVANCE(219);
      END_STATE();
    case 212:
      if (lookahead == 'O') ADVANCE(281);
      END_STATE();
    case 213:
      if (lookahead == 'O') ADVANCE(157);
      END_STATE();
    case 214:
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == 'R') ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'O') ADVANCE(177);
      END_STATE();
    case 216:
      if (lookahead == 'O') ADVANCE(242);
      if (lookahead == 'R') ADVANCE(215);
      END_STATE();
    case 217:
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == 'R') ADVANCE(215);
      END_STATE();
    case 218:
      if (lookahead == 'O') ADVANCE(254);
      END_STATE();
    case 219:
      if (lookahead == 'P') ADVANCE(621);
      END_STATE();
    case 220:
      if (lookahead == 'P') ADVANCE(690);
      END_STATE();
    case 221:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 222:
      if (lookahead == 'P') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(101);
      END_STATE();
    case 223:
      if (lookahead == 'P') ADVANCE(103);
      END_STATE();
    case 224:
      if (lookahead == 'R') ADVANCE(657);
      END_STATE();
    case 225:
      if (lookahead == 'R') ADVANCE(669);
      END_STATE();
    case 226:
      if (lookahead == 'R') ADVANCE(698);
      END_STATE();
    case 227:
      if (lookahead == 'R') ADVANCE(620);
      END_STATE();
    case 228:
      if (lookahead == 'R') ADVANCE(598);
      END_STATE();
    case 229:
      if (lookahead == 'R') ADVANCE(600);
      END_STATE();
    case 230:
      if (lookahead == 'R') ADVANCE(689);
      END_STATE();
    case 231:
      if (lookahead == 'R') ADVANCE(699);
      END_STATE();
    case 232:
      if (lookahead == 'R') ADVANCE(668);
      END_STATE();
    case 233:
      if (lookahead == 'R') ADVANCE(290);
      END_STATE();
    case 234:
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 235:
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 236:
      if (lookahead == 'R') ADVANCE(293);
      END_STATE();
    case 237:
      if (lookahead == 'R') ADVANCE(161);
      END_STATE();
    case 238:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 239:
      if (lookahead == 'R') ADVANCE(106);
      END_STATE();
    case 240:
      if (lookahead == 'R') ADVANCE(267);
      END_STATE();
    case 241:
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 242:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 243:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 244:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 245:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 246:
      if (lookahead == 'S') ADVANCE(673);
      END_STATE();
    case 247:
      if (lookahead == 'S') ADVANCE(590);
      END_STATE();
    case 248:
      if (lookahead == 'S') ADVANCE(101);
      END_STATE();
    case 249:
      if (lookahead == 'S') ADVANCE(280);
      END_STATE();
    case 250:
      if (lookahead == 'S') ADVANCE(274);
      END_STATE();
    case 251:
      if (lookahead == 'S') ADVANCE(269);
      END_STATE();
    case 252:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 253:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 254:
      if (lookahead == 'T') ADVANCE(662);
      END_STATE();
    case 255:
      if (lookahead == 'T') ADVANCE(591);
      END_STATE();
    case 256:
      if (lookahead == 'T') ADVANCE(594);
      END_STATE();
    case 257:
      if (lookahead == 'T') ADVANCE(640);
      END_STATE();
    case 258:
      if (lookahead == 'T') ADVANCE(614);
      END_STATE();
    case 259:
      if (lookahead == 'T') ADVANCE(596);
      END_STATE();
    case 260:
      if (lookahead == 'T') ADVANCE(693);
      END_STATE();
    case 261:
      if (lookahead == 'T') ADVANCE(616);
      END_STATE();
    case 262:
      if (lookahead == 'T') ADVANCE(583);
      END_STATE();
    case 263:
      if (lookahead == 'T') ADVANCE(675);
      END_STATE();
    case 264:
      if (lookahead == 'T') ADVANCE(636);
      END_STATE();
    case 265:
      if (lookahead == 'T') ADVANCE(638);
      END_STATE();
    case 266:
      if (lookahead == 'T') ADVANCE(674);
      END_STATE();
    case 267:
      if (lookahead == 'T') ADVANCE(586);
      END_STATE();
    case 268:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 269:
      if (lookahead == 'T') ADVANCE(246);
      END_STATE();
    case 270:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 271:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 272:
      if (lookahead == 'T') ADVANCE(131);
      END_STATE();
    case 273:
      if (lookahead == 'T') ADVANCE(131);
      if (lookahead == 'X') ADVANCE(642);
      END_STATE();
    case 274:
      if (lookahead == 'T') ADVANCE(238);
      END_STATE();
    case 275:
      if (lookahead == 'T') ADVANCE(125);
      END_STATE();
    case 276:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 277:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 278:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 279:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 280:
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 281:
      if (lookahead == 'U') ADVANCE(221);
      END_STATE();
    case 282:
      if (lookahead == 'U') ADVANCE(180);
      END_STATE();
    case 283:
      if (lookahead == 'U') ADVANCE(175);
      END_STATE();
    case 284:
      if (lookahead == 'U') ADVANCE(120);
      END_STATE();
    case 285:
      if (lookahead == 'V') ADVANCE(158);
      END_STATE();
    case 286:
      if (lookahead == 'W') ADVANCE(624);
      END_STATE();
    case 287:
      if (lookahead == 'X') ADVANCE(667);
      END_STATE();
    case 288:
      if (lookahead == 'X') ADVANCE(165);
      END_STATE();
    case 289:
      if (lookahead == 'Y') ADVANCE(628);
      END_STATE();
    case 290:
      if (lookahead == 'Y') ADVANCE(617);
      END_STATE();
    case 291:
      if (lookahead == 'Y') ADVANCE(608);
      END_STATE();
    case 292:
      if (lookahead == 'Y') ADVANCE(607);
      END_STATE();
    case 293:
      if (lookahead == 'Y') ADVANCE(692);
      END_STATE();
    case 294:
      if (lookahead == 'Z') ADVANCE(119);
      END_STATE();
    case 295:
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 296:
      if (lookahead == '_') ADVANCE(412);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(311);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(686);
      if (lookahead == 'y') ADVANCE(475);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 326:
      if (lookahead == 'b') ADVANCE(543);
      END_STATE();
    case 327:
      if (lookahead == 'b') ADVANCE(544);
      END_STATE();
    case 328:
      if (lookahead == 'b') ADVANCE(428);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(612);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(514);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(493);
      END_STATE();
    case 339:
      if (lookahead == 'd') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == 's') ADVANCE(633);
      if (lookahead == 'u') ADVANCE(522);
      if (lookahead == 'v') ADVANCE(395);
      END_STATE();
    case 340:
      if (lookahead == 'd') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 341:
      if (lookahead == 'd') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 342:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 343:
      if (lookahead == 'd') ADVANCE(654);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 345:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 346:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == 's') ADVANCE(381);
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 348:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 387:
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 388:
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead == 'r') ADVANCE(659);
      if (lookahead == 'u') ADVANCE(527);
      if (lookahead == 'w') ADVANCE(453);
      END_STATE();
    case 389:
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 390:
      if (lookahead == 'f') ADVANCE(504);
      END_STATE();
    case 391:
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 392:
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 393:
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 394:
      if (lookahead == 'f') ADVANCE(508);
      END_STATE();
    case 395:
      if (lookahead == 'g') ADVANCE(646);
      END_STATE();
    case 396:
      if (lookahead == 'g') ADVANCE(609);
      END_STATE();
    case 397:
      if (lookahead == 'g') ADVANCE(401);
      END_STATE();
    case 398:
      if (lookahead == 'g') ADVANCE(415);
      END_STATE();
    case 399:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 400:
      if (lookahead == 'h') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 401:
      if (lookahead == 'h') ADVANCE(511);
      END_STATE();
    case 402:
      if (lookahead == 'h') ADVANCE(375);
      END_STATE();
    case 403:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(437);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(694);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 424:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 426:
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 427:
      if (lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 429:
      if (lookahead == 'm') ADVANCE(592);
      END_STATE();
    case 430:
      if (lookahead == 'm') ADVANCE(472);
      END_STATE();
    case 431:
      if (lookahead == 'm') ADVANCE(414);
      END_STATE();
    case 432:
      if (lookahead == 'm') ADVANCE(443);
      END_STATE();
    case 433:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 434:
      if (lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 435:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 436:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 437:
      if (lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead == 'r') ADVANCE(659);
      if (lookahead == 'w') ADVANCE(453);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == 'w') ADVANCE(453);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(686);
      if (lookahead == 'y') ADVANCE(475);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(421);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 471:
      if (lookahead == 'p') ADVANCE(621);
      END_STATE();
    case 472:
      if (lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 473:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 474:
      if (lookahead == 'p') ADVANCE(348);
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 475:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 478:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 480:
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 481:
      if (lookahead == 'r') ADVANCE(600);
      END_STATE();
    case 482:
      if (lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 483:
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 484:
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 485:
      if (lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 486:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 487:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 489:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 491:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(590);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(380);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(642);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 533:
      if (lookahead == 'u') ADVANCE(473);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 535:
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 536:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 537:
      if (lookahead == 'v') ADVANCE(410);
      END_STATE();
    case 538:
      if (lookahead == 'w') ADVANCE(624);
      END_STATE();
    case 539:
      if (lookahead == 'x') ADVANCE(667);
      END_STATE();
    case 540:
      if (lookahead == 'x') ADVANCE(417);
      END_STATE();
    case 541:
      if (lookahead == 'y') ADVANCE(628);
      END_STATE();
    case 542:
      if (lookahead == 'y') ADVANCE(617);
      END_STATE();
    case 543:
      if (lookahead == 'y') ADVANCE(608);
      END_STATE();
    case 544:
      if (lookahead == 'y') ADVANCE(607);
      END_STATE();
    case 545:
      if (lookahead == 'y') ADVANCE(692);
      END_STATE();
    case 546:
      if (lookahead == 'z') ADVANCE(371);
      END_STATE();
    case 547:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(547)
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(216);
      if (lookahead == 'G') ADVANCE(235);
      if (lookahead == 'I') ADVANCE(192);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == 'O') ADVANCE(188);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(222);
      if (lookahead == 'V') ADVANCE(65);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == 'j') ADVANCE(465);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == 'w') ADVANCE(400);
      END_STATE();
    case 548:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(548)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'F') ADVANCE(216);
      if (lookahead == 'G') ADVANCE(235);
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(186);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(210);
      if (lookahead == 'O') ADVANCE(187);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(248);
      if (lookahead == 'V') ADVANCE(52);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == 'j') ADVANCE(465);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(500);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 'w') ADVANCE(400);
      END_STATE();
    case 549:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(549)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(795);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(901);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 550:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(550)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(795);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'W') ADVANCE(774);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(901);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'w') ADVANCE(880);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 551:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(551)
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'C') ADVANCE(810);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'M') ADVANCE(747);
      if (lookahead == 'S') ADVANCE(759);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == 'm') ADVANCE(853);
      if (lookahead == 's') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 552:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(552)
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'C') ADVANCE(810);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'M') ADVANCE(747);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == 'm') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 553:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(553)
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'C') ADVANCE(810);
      if (lookahead == 'D') ADVANCE(780);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'M') ADVANCE(747);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead == 'd') ADVANCE(886);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == 'm') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 554:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(554)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 555:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(555)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(217);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(155);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == 'v') ADVANCE(407);
      if (lookahead == 'w') ADVANCE(400);
      END_STATE();
    case 556:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(556)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'W') ADVANCE(784);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'w') ADVANCE(890);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 557:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(557)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 558:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(558)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == 'W') ADVANCE(784);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'w') ADVANCE(890);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 559:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(559)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(816);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 560:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(560)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'G') ADVANCE(235);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'O') ADVANCE(224);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == 'w') ADVANCE(400);
      END_STATE();
    case 561:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(561)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'O') ADVANCE(818);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 562:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(562)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead == 'O') ADVANCE(818);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 563:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(563)
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 564:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(564)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == 'W') ADVANCE(774);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(880);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 565:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(565)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == 'W') ADVANCE(774);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(880);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 566:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(566)
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '`') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 567:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(567)
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'G') ADVANCE(819);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'J') ADVANCE(809);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'j') ADVANCE(915);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 568:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(568)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(814);
      if (lookahead == 'K') ADVANCE(763);
      if (lookahead == 'P') ADVANCE(826);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'c') ADVANCE(920);
      if (lookahead == 'k') ADVANCE(869);
      if (lookahead == 'p') ADVANCE(932);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 569:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(569)
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(829);
      if (lookahead == 'D') ADVANCE(768);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(935);
      if (lookahead == 'd') ADVANCE(874);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 570:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(570)
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(829);
      if (lookahead == 'D') ADVANCE(768);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'W') ADVANCE(784);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(935);
      if (lookahead == 'd') ADVANCE(874);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'w') ADVANCE(890);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 571:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(571)
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(825);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(931);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 572:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(572)
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(825);
      if (lookahead == 'W') ADVANCE(784);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(931);
      if (lookahead == 'w') ADVANCE(890);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 573:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(573)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 574:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(574)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'D') ADVANCE(765);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'd') ADVANCE(871);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 575:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(575)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'O') ADVANCE(799);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'o') ADVANCE(905);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 576:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(576)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == 'L') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(820);
      if (lookahead == 'W') ADVANCE(775);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 577:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(577)
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 578:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(578)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 579:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(579)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(813);
      if (lookahead == 'O') ADVANCE(799);
      if (lookahead == 'U') ADVANCE(831);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'o') ADVANCE(905);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 580:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(580)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(812);
      if (lookahead == 'T') ADVANCE(808);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'c') ADVANCE(918);
      if (lookahead == 't') ADVANCE(914);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 581:
      if (eof) ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(581)
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '%') ADVANCE(716);
      if (lookahead == '\'') ADVANCE(723);
      if (lookahead == '(') ADVANCE(700);
      if (lookahead == ')') ADVANCE(701);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '+') ADVANCE(713);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == ';') ADVANCE(708);
      if (lookahead == '<') ADVANCE(718);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(722);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(288);
      if (lookahead == 'F') ADVANCE(214);
      if (lookahead == 'G') ADVANCE(235);
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'K') ADVANCE(97);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(206);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(222);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '^') ADVANCE(717);
      if (lookahead == '`') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'f') ADVANCE(466);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(465);
      if (lookahead == 'k') ADVANCE(349);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == 'w') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_keyword_outer);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_keyword_alter);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_keyword_drop);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_keyword_add);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_keyword_view);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_keyword_materialized);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_keyword_column);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_keyword_column);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(612);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(612);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(124);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(104);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_keyword_cascade);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_keyword_with);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_keyword_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_keyword_no);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 'T') ADVANCE(662);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_keyword_data);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_keyword_type);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_keyword_rename);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_keyword_to);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_keyword_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_keyword_schema);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_keyword_owner);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'O') ADVANCE(243);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_keyword_temp);
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_keyword_temporary);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(164);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_keyword_char);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_keyword_varchar);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(740);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(731);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(731);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '*') ADVANCE(725);
      if (lookahead != 0) ADVANCE(726);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead != 0) ADVANCE(735);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(721);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(731);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(725);
      if (lookahead != 0) ADVANCE(726);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(731);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '*') ADVANCE(725);
      if (lookahead == '/') ADVANCE(705);
      if (lookahead != 0) ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(731);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '*') ADVANCE(725);
      if (lookahead != 0) ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(704);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(727);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead == '/') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(731);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(731);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead == '/') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(733);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead != 0) ADVANCE(735);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead != 0) ADVANCE(735);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead != 0) ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(703);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(738);
      if (lookahead == '/') ADVANCE(733);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(740);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(740);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(739);
      if (lookahead == '-') ADVANCE(738);
      if (lookahead == '/') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(740);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(850);
      if (lookahead == 'I') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(769);
      if (lookahead == 'I') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(764);
      if (lookahead == 'I') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'S') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(956);
      if (lookahead == 'i') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(875);
      if (lookahead == 'i') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(870);
      if (lookahead == 'i') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 24},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 27},
  [186] = {.lex_state = 34},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 27},
  [191] = {.lex_state = 27},
  [192] = {.lex_state = 34},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 34},
  [198] = {.lex_state = 27},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 34},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 38},
  [204] = {.lex_state = 21},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 38},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 19},
  [213] = {.lex_state = 19},
  [214] = {.lex_state = 28},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 19},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 19},
  [224] = {.lex_state = 28},
  [225] = {.lex_state = 21},
  [226] = {.lex_state = 21},
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
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 21},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 21},
  [242] = {.lex_state = 21},
  [243] = {.lex_state = 21},
  [244] = {.lex_state = 21},
  [245] = {.lex_state = 21},
  [246] = {.lex_state = 21},
  [247] = {.lex_state = 21},
  [248] = {.lex_state = 24},
  [249] = {.lex_state = 21},
  [250] = {.lex_state = 21},
  [251] = {.lex_state = 21},
  [252] = {.lex_state = 24},
  [253] = {.lex_state = 21},
  [254] = {.lex_state = 21},
  [255] = {.lex_state = 21},
  [256] = {.lex_state = 21},
  [257] = {.lex_state = 21},
  [258] = {.lex_state = 21},
  [259] = {.lex_state = 21},
  [260] = {.lex_state = 21},
  [261] = {.lex_state = 21},
  [262] = {.lex_state = 21},
  [263] = {.lex_state = 21},
  [264] = {.lex_state = 21},
  [265] = {.lex_state = 21},
  [266] = {.lex_state = 21},
  [267] = {.lex_state = 24},
  [268] = {.lex_state = 21},
  [269] = {.lex_state = 21},
  [270] = {.lex_state = 21},
  [271] = {.lex_state = 21},
  [272] = {.lex_state = 21},
  [273] = {.lex_state = 21},
  [274] = {.lex_state = 21},
  [275] = {.lex_state = 21},
  [276] = {.lex_state = 24},
  [277] = {.lex_state = 21},
  [278] = {.lex_state = 21},
  [279] = {.lex_state = 21},
  [280] = {.lex_state = 21},
  [281] = {.lex_state = 21},
  [282] = {.lex_state = 21},
  [283] = {.lex_state = 21},
  [284] = {.lex_state = 21},
  [285] = {.lex_state = 21},
  [286] = {.lex_state = 21},
  [287] = {.lex_state = 21},
  [288] = {.lex_state = 21},
  [289] = {.lex_state = 21},
  [290] = {.lex_state = 21},
  [291] = {.lex_state = 21},
  [292] = {.lex_state = 21},
  [293] = {.lex_state = 21},
  [294] = {.lex_state = 21},
  [295] = {.lex_state = 21},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 24},
  [301] = {.lex_state = 7},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 40},
  [306] = {.lex_state = 25},
  [307] = {.lex_state = 32},
  [308] = {.lex_state = 25},
  [309] = {.lex_state = 32},
  [310] = {.lex_state = 25},
  [311] = {.lex_state = 25},
  [312] = {.lex_state = 32},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 32},
  [316] = {.lex_state = 32},
  [317] = {.lex_state = 25},
  [318] = {.lex_state = 32},
  [319] = {.lex_state = 32},
  [320] = {.lex_state = 32},
  [321] = {.lex_state = 32},
  [322] = {.lex_state = 23},
  [323] = {.lex_state = 25},
  [324] = {.lex_state = 32},
  [325] = {.lex_state = 25},
  [326] = {.lex_state = 25},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 25},
  [329] = {.lex_state = 25},
  [330] = {.lex_state = 23},
  [331] = {.lex_state = 31},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 7},
  [335] = {.lex_state = 35},
  [336] = {.lex_state = 31},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 23},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 23},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 37},
  [347] = {.lex_state = 23},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 31},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 35},
  [356] = {.lex_state = 35},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 31},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 31},
  [362] = {.lex_state = 31},
  [363] = {.lex_state = 31},
  [364] = {.lex_state = 31},
  [365] = {.lex_state = 23},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 31},
  [370] = {.lex_state = 35},
  [371] = {.lex_state = 31},
  [372] = {.lex_state = 23},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 23},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 23},
  [378] = {.lex_state = 23},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 36},
  [385] = {.lex_state = 37},
  [386] = {.lex_state = 7},
  [387] = {.lex_state = 37},
  [388] = {.lex_state = 21},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 39},
  [393] = {.lex_state = 37},
  [394] = {.lex_state = 37},
  [395] = {.lex_state = 36},
  [396] = {.lex_state = 36},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 39},
  [400] = {.lex_state = 26},
  [401] = {.lex_state = 36},
  [402] = {.lex_state = 26},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 26},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 26},
  [422] = {.lex_state = 43},
  [423] = {.lex_state = 26},
  [424] = {.lex_state = 26},
  [425] = {.lex_state = 43},
  [426] = {.lex_state = 43},
  [427] = {.lex_state = 43},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 43},
  [432] = {.lex_state = 26},
  [433] = {.lex_state = 43},
  [434] = {.lex_state = 43},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 26},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 26},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 26},
  [441] = {.lex_state = 43},
  [442] = {.lex_state = 43},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 43},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 43},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 42},
  [451] = {.lex_state = 42},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 41},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 43},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 21},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 37},
  [478] = {.lex_state = 21},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 37},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 24},
  [483] = {.lex_state = 21},
  [484] = {.lex_state = 24},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 21},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 21},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 21},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 21},
  [494] = {.lex_state = 21},
  [495] = {.lex_state = 21},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 21},
  [499] = {.lex_state = 21},
  [500] = {.lex_state = 37},
  [501] = {.lex_state = 21},
  [502] = {.lex_state = 21},
  [503] = {.lex_state = 21},
  [504] = {.lex_state = 21},
  [505] = {.lex_state = 21},
  [506] = {.lex_state = 37},
  [507] = {.lex_state = 21},
  [508] = {.lex_state = 24},
  [509] = {.lex_state = 21},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 21},
  [512] = {.lex_state = 24},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 37},
  [515] = {.lex_state = 21},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 21},
  [518] = {.lex_state = 24},
  [519] = {.lex_state = 37},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 24},
  [522] = {.lex_state = 24},
  [523] = {.lex_state = 21},
  [524] = {.lex_state = 21},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 37},
  [527] = {.lex_state = 21},
  [528] = {.lex_state = 21},
  [529] = {.lex_state = 21},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 21},
  [533] = {.lex_state = 21},
  [534] = {.lex_state = 21},
  [535] = {.lex_state = 21},
  [536] = {.lex_state = 21},
  [537] = {.lex_state = 21},
  [538] = {.lex_state = 21},
  [539] = {.lex_state = 21},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 21},
  [542] = {.lex_state = 21},
  [543] = {.lex_state = 21},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 21},
  [549] = {.lex_state = 21},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 21},
  [555] = {.lex_state = 21},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 21},
  [558] = {.lex_state = 21},
  [559] = {.lex_state = 21},
  [560] = {.lex_state = 21},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 21},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 21},
  [566] = {.lex_state = 21},
  [567] = {.lex_state = 21},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 21},
  [570] = {.lex_state = 21},
  [571] = {.lex_state = 21},
  [572] = {.lex_state = 21},
  [573] = {.lex_state = 21},
  [574] = {.lex_state = 21},
  [575] = {.lex_state = 21},
  [576] = {.lex_state = 21},
  [577] = {.lex_state = 21},
  [578] = {.lex_state = 21},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 21},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 21},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 21},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 21},
  [589] = {.lex_state = 21},
  [590] = {.lex_state = 21},
  [591] = {.lex_state = 21},
  [592] = {.lex_state = 21},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 21},
  [595] = {.lex_state = 24},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 21},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 21},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 21},
  [603] = {.lex_state = 21},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 21},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 21},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 21},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 21},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 21},
  [616] = {.lex_state = 21},
  [617] = {.lex_state = 21},
  [618] = {.lex_state = 21},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 21},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 21},
  [626] = {.lex_state = 21},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 21},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 21},
  [634] = {.lex_state = 21},
  [635] = {.lex_state = 21},
  [636] = {.lex_state = 21},
  [637] = {.lex_state = 21},
  [638] = {.lex_state = 21},
  [639] = {.lex_state = 21},
  [640] = {.lex_state = 21},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 21},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 21},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 21},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 21},
  [654] = {.lex_state = 21},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 21},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 21},
  [659] = {.lex_state = 21},
  [660] = {.lex_state = 21},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 21},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 21},
  [666] = {.lex_state = 21},
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
  [679] = {.lex_state = 7},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 6},
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
  [699] = {.lex_state = 6},
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
  [712] = {.lex_state = 24},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 21},
  [715] = {.lex_state = 21},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 6},
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
  [733] = {.lex_state = 24},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 24},
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
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 24},
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
  [801] = {.lex_state = 24},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 24},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 24},
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
  [845] = {.lex_state = 728},
  [846] = {.lex_state = 737},
  [847] = {.lex_state = 21},
  [848] = {.lex_state = 24},
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
  [862] = {.lex_state = 728},
  [863] = {.lex_state = 737},
  [864] = {.lex_state = 21},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 21},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 24},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 21},
  [879] = {.lex_state = 24},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 21},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 21},
  [885] = {.lex_state = 21},
  [886] = {.lex_state = 21},
  [887] = {.lex_state = 21},
  [888] = {.lex_state = 21},
  [889] = {.lex_state = 21},
  [890] = {.lex_state = 21},
  [891] = {.lex_state = 21},
  [892] = {.lex_state = 21},
  [893] = {.lex_state = 21},
  [894] = {.lex_state = 21},
  [895] = {.lex_state = 21},
  [896] = {.lex_state = 21},
  [897] = {.lex_state = 21},
  [898] = {.lex_state = 21},
  [899] = {.lex_state = 21},
  [900] = {.lex_state = 21},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 737},
  [905] = {.lex_state = 728},
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
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
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
    [sym_keyword_with] = ACTIONS(1),
    [sym_keyword_no] = ACTIONS(1),
    [sym_keyword_data] = ACTIONS(1),
    [sym_keyword_type] = ACTIONS(1),
    [sym_keyword_rename] = ACTIONS(1),
    [sym_keyword_to] = ACTIONS(1),
    [sym_keyword_schema] = ACTIONS(1),
    [sym_keyword_owner] = ACTIONS(1),
    [sym_keyword_temp] = ACTIONS(1),
    [sym_keyword_temporary] = ACTIONS(1),
    [sym_keyword_bigint] = ACTIONS(1),
    [sym_keyword_null] = ACTIONS(1),
    [sym_keyword_date] = ACTIONS(1),
    [sym_keyword_datetime] = ACTIONS(1),
    [sym_keyword_char] = ACTIONS(1),
    [sym_keyword_varchar] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_program] = STATE(926),
    [sym_statement] = STATE(924),
    [sym__select_statement] = STATE(923),
    [sym_select] = STATE(546),
    [sym__delete_statement] = STATE(923),
    [sym_delete] = STATE(674),
    [sym__create_statement] = STATE(923),
    [sym_create_table] = STATE(923),
    [sym_create_view] = STATE(923),
    [sym_create_materialized_view] = STATE(923),
    [sym__alter_statement] = STATE(923),
    [sym_alter_table] = STATE(923),
    [sym_alter_view] = STATE(923),
    [sym__drop_statement] = STATE(923),
    [sym_drop_table] = STATE(923),
    [sym_drop_view] = STATE(923),
    [sym__insert_statement] = STATE(923),
    [sym_insert] = STATE(923),
    [sym__update_statement] = STATE(923),
    [sym_update] = STATE(923),
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
    ACTIONS(21), 7,
      sym_keyword_in,
      sym_keyword_or,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 44,
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
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_cascade,
      sym_keyword_with,
      sym_keyword_type,
      sym_keyword_rename,
      sym_keyword_to,
      sym_keyword_owner,
      sym_keyword_bigint,
      sym_keyword_datetime,
      sym_keyword_char,
      sym_keyword_varchar,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [60] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 7,
      sym_keyword_in,
      sym_keyword_or,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 44,
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
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_cascade,
      sym_keyword_with,
      sym_keyword_type,
      sym_keyword_rename,
      sym_keyword_to,
      sym_keyword_owner,
      sym_keyword_bigint,
      sym_keyword_datetime,
      sym_keyword_char,
      sym_keyword_varchar,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [120] = 8,
    ACTIONS(31), 1,
      sym_keyword_as,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 12,
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
    ACTIONS(27), 13,
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
  [169] = 8,
    ACTIONS(31), 1,
      sym_keyword_as,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 11,
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
    ACTIONS(27), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
  [218] = 8,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(45), 1,
      sym_keyword_as,
    ACTIONS(47), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 11,
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
    ACTIONS(41), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
  [267] = 8,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(45), 1,
      sym_keyword_as,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 12,
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
    ACTIONS(41), 13,
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
  [316] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(55), 1,
      sym_keyword_as,
    STATE(37), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 12,
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
    ACTIONS(51), 13,
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
  [362] = 3,
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
  [400] = 3,
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
  [438] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(55), 1,
      sym_keyword_as,
    STATE(37), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 11,
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
    ACTIONS(51), 14,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
  [484] = 3,
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
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
  [522] = 3,
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
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
  [560] = 23,
    ACTIONS(57), 1,
      sym_keyword_select,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(610), 1,
      sym_select,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(883), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [637] = 23,
    ACTIONS(57), 1,
      sym_keyword_select,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(610), 1,
      sym_select,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(877), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [714] = 23,
    ACTIONS(57), 1,
      sym_keyword_select,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(610), 1,
      sym_select,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(871), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [791] = 23,
    ACTIONS(57), 1,
      sym_keyword_select,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(610), 1,
      sym_select,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(855), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [868] = 23,
    ACTIONS(57), 1,
      sym_keyword_select,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(182), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(610), 1,
      sym_select,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(856), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [945] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(753), 1,
      sym__function_params,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(698), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1019] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    STATE(915), 1,
      sym__function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(698), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1093] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(799), 1,
      sym__function_params,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(698), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1167] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(77), 1,
      sym_keyword_distinct,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(849), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1241] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(79), 1,
      sym_keyword_distinct,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(802), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1315] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(795), 1,
      sym__function_params,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(698), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1389] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(81), 1,
      sym_keyword_distinct,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(792), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1463] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(83), 1,
      sym_keyword_distinct,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(751), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1537] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(85), 1,
      sym_keyword_distinct,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(773), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1611] = 22,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(776), 1,
      sym__function_params,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(698), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1685] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(785), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1756] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(866), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1827] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(89), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
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
  [1862] = 3,
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
      sym_keyword_with,
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
  [1897] = 3,
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
      sym_keyword_with,
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
  [1932] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(794), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2003] = 3,
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
      sym_keyword_with,
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
  [2038] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(778), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2109] = 3,
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
    ACTIONS(105), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
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
  [2144] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(775), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2215] = 3,
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
      sym_keyword_with,
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
  [2250] = 3,
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
      sym_keyword_with,
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
  [2285] = 3,
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
      sym_keyword_with,
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
  [2320] = 3,
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
      sym_keyword_with,
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
  [2355] = 3,
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
      sym_keyword_with,
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
  [2390] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(754), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2461] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(752), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2532] = 4,
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
    ACTIONS(135), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(131), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2569] = 3,
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
      sym_keyword_with,
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
  [2604] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(805), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2675] = 4,
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
    ACTIONS(135), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(143), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2712] = 4,
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
    ACTIONS(135), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(145), 11,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2749] = 3,
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
      sym_keyword_with,
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
  [2784] = 4,
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
    ACTIONS(135), 9,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2821] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(723), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2892] = 3,
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
    ACTIONS(153), 20,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
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
  [2927] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(796), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [2998] = 21,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(187), 1,
      sym_literal,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_predicate,
    STATE(762), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(217), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [3069] = 8,
    ACTIONS(161), 1,
      sym_keyword_as,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 12,
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
  [3113] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 21,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_offset,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3147] = 8,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 12,
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
  [3191] = 9,
    ACTIONS(173), 1,
      sym_keyword_in,
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
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3237] = 4,
    ACTIONS(183), 1,
      anon_sym_CARET,
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
    ACTIONS(99), 18,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3273] = 8,
    ACTIONS(161), 1,
      sym_keyword_as,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 11,
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
  [3317] = 6,
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
    ACTIONS(101), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 16,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3357] = 11,
    ACTIONS(101), 1,
      sym_keyword_or,
    ACTIONS(173), 1,
      sym_keyword_in,
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
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 4,
      anon_sym_EQ,
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
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
  [3407] = 8,
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
    ACTIONS(101), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 15,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3451] = 8,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 11,
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
  [3495] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 21,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_offset,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3529] = 8,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_SLASH,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 15,
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
  [3573] = 11,
    ACTIONS(101), 1,
      sym_keyword_or,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_SLASH,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(203), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 4,
      anon_sym_EQ,
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
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3623] = 9,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_SLASH,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(203), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 15,
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
  [3669] = 8,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 11,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3713] = 8,
    ACTIONS(161), 1,
      sym_keyword_as,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(211), 1,
      anon_sym_DOT,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 11,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3757] = 4,
    ACTIONS(201), 1,
      anon_sym_CARET,
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
    ACTIONS(99), 18,
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
  [3793] = 6,
    ACTIONS(199), 1,
      anon_sym_SLASH,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 16,
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
  [3833] = 8,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 10,
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
  [3876] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3909] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 11,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
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
  [3942] = 21,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(215), 1,
      sym_keyword_distinct,
    ACTIONS(217), 1,
      sym_keyword_count,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(336), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(516), 1,
      sym_select_expression,
    STATE(917), 1,
      sym__unary_function_name,
    STATE(918), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(468), 2,
      sym_field,
      sym_function_call,
    STATE(513), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4011] = 3,
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
  [4044] = 7,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 12,
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
  [4085] = 21,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(217), 1,
      sym_keyword_count,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__literal_string,
    STATE(336), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(491), 1,
      sym_select_expression,
    STATE(917), 1,
      sym__unary_function_name,
    STATE(918), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(468), 2,
      sym_field,
      sym_function_call,
    STATE(513), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4154] = 3,
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
  [4187] = 7,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 11,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4228] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(155), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4261] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4294] = 21,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_keyword_count,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(340), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(491), 1,
      sym_select_expression,
    STATE(880), 1,
      sym__function_name,
    STATE(881), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(459), 2,
      sym_field,
      sym_function_call,
    STATE(513), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4363] = 8,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(169), 1,
      sym_keyword_as,
    ACTIONS(235), 1,
      anon_sym_DOT,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 11,
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
  [4406] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(89), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4439] = 8,
    ACTIONS(161), 1,
      sym_keyword_as,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(237), 1,
      anon_sym_DOT,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 10,
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
  [4482] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 11,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
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
  [4515] = 21,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(229), 1,
      sym_keyword_count,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_distinct,
    STATE(58), 1,
      sym__literal_string,
    STATE(340), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(516), 1,
      sym_select_expression,
    STATE(880), 1,
      sym__function_name,
    STATE(881), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(459), 2,
      sym_field,
      sym_function_call,
    STATE(513), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4584] = 8,
    ACTIONS(161), 1,
      sym_keyword_as,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 11,
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
  [4627] = 7,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 11,
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
  [4668] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
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
  [4701] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4734] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
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
  [4767] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4800] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4832] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(89), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4864] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4896] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4928] = 3,
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
  [4960] = 20,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(402), 1,
      sym_identifier,
    STATE(803), 1,
      sym_select_expression,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(513), 2,
      sym__field_list,
      sym_literal,
    STATE(648), 2,
      sym_field,
      sym_function_call,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [5026] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5058] = 7,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 11,
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
  [5098] = 7,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_keyword_as,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 9,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 10,
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
  [5138] = 8,
    ACTIONS(247), 1,
      sym_keyword_as,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5180] = 20,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(255), 1,
      sym_keyword_count,
    ACTIONS(257), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      anon_sym_BQUOTE,
    ACTIONS(261), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(309), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(479), 1,
      sym_order_expression,
    STATE(921), 1,
      sym__unary_function_name,
    STATE(922), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(407), 2,
      sym_field,
      sym_function_call,
    STATE(412), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [5246] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5278] = 8,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(263), 1,
      sym_keyword_as,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5320] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5352] = 3,
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
  [5384] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5416] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5448] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5480] = 8,
    ACTIONS(247), 1,
      sym_keyword_as,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5522] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5554] = 20,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(257), 1,
      anon_sym_STAR,
    ACTIONS(269), 1,
      sym_keyword_count,
    ACTIONS(271), 1,
      anon_sym_BQUOTE,
    ACTIONS(273), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(306), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(479), 1,
      sym_order_expression,
    STATE(913), 1,
      sym__unary_function_name,
    STATE(914), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(404), 2,
      sym_field,
      sym_function_call,
    STATE(412), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [5620] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5652] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5684] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
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
    ACTIONS(25), 11,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
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
  [5812] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 11,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_with,
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
  [5844] = 3,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5876] = 8,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(263), 1,
      sym_keyword_as,
    ACTIONS(275), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5918] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(277), 1,
      sym_keyword_as,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5957] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(277), 1,
      sym_keyword_as,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5996] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
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
  [6027] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
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
  [6058] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
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
  [6089] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
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
  [6120] = 6,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(279), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(133), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 10,
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
  [6156] = 12,
    ACTIONS(285), 1,
      sym_keyword_in,
    ACTIONS(287), 1,
      sym_keyword_and,
    ACTIONS(289), 1,
      sym_keyword_or,
    ACTIONS(295), 1,
      anon_sym_PLUS,
    ACTIONS(297), 1,
      anon_sym_DASH,
    ACTIONS(299), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(283), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6203] = 4,
    ACTIONS(305), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 14,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6234] = 9,
    ACTIONS(305), 1,
      anon_sym_CARET,
    ACTIONS(307), 1,
      sym_keyword_in,
    ACTIONS(311), 1,
      anon_sym_PLUS,
    ACTIONS(313), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 10,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6275] = 12,
    ACTIONS(317), 1,
      sym_keyword_in,
    ACTIONS(319), 1,
      sym_keyword_and,
    ACTIONS(321), 1,
      sym_keyword_or,
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
    ACTIONS(283), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_SEMI,
  [6322] = 8,
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
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6361] = 8,
    ACTIONS(295), 1,
      anon_sym_PLUS,
    ACTIONS(297), 1,
      anon_sym_DASH,
    ACTIONS(299), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
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
  [6400] = 11,
    ACTIONS(101), 1,
      sym_keyword_or,
    ACTIONS(285), 1,
      sym_keyword_in,
    ACTIONS(295), 1,
      anon_sym_PLUS,
    ACTIONS(297), 1,
      anon_sym_DASH,
    ACTIONS(299), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(99), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6445] = 11,
    ACTIONS(101), 1,
      sym_keyword_or,
    ACTIONS(317), 1,
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
    ACTIONS(99), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
  [6490] = 9,
    ACTIONS(285), 1,
      sym_keyword_in,
    ACTIONS(295), 1,
      anon_sym_PLUS,
    ACTIONS(297), 1,
      anon_sym_DASH,
    ACTIONS(299), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 10,
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
  [6531] = 6,
    ACTIONS(305), 1,
      anon_sym_CARET,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 12,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6566] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(337), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(135), 10,
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
  [6597] = 9,
    ACTIONS(317), 1,
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
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 10,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6638] = 6,
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
    ACTIONS(101), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 12,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6673] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(339), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(135), 10,
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
  [6704] = 4,
    ACTIONS(333), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 14,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6735] = 11,
    ACTIONS(101), 1,
      sym_keyword_or,
    ACTIONS(305), 1,
      anon_sym_CARET,
    ACTIONS(307), 1,
      sym_keyword_in,
    ACTIONS(311), 1,
      anon_sym_PLUS,
    ACTIONS(313), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(341), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(99), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6780] = 8,
    ACTIONS(305), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PLUS,
    ACTIONS(313), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6819] = 6,
    ACTIONS(299), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 12,
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
  [6854] = 4,
    ACTIONS(301), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 14,
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
  [6885] = 8,
    ACTIONS(347), 1,
      anon_sym_PLUS,
    ACTIONS(349), 1,
      anon_sym_DASH,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(345), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 10,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6923] = 11,
    ACTIONS(101), 1,
      sym_keyword_or,
    ACTIONS(347), 1,
      anon_sym_PLUS,
    ACTIONS(349), 1,
      anon_sym_DASH,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(345), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(359), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(99), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
  [6967] = 16,
    ACTIONS(363), 1,
      sym_keyword_inner,
    ACTIONS(365), 1,
      sym_keyword_join,
    ACTIONS(367), 1,
      sym_keyword_where,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(371), 1,
      sym_keyword_group_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(200), 1,
      sym_index_hint,
    STATE(383), 1,
      sym_where,
    STATE(418), 1,
      sym_group_by,
    STATE(462), 1,
      sym_order_by,
    STATE(598), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(375), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(377), 2,
      sym_keyword_with,
      anon_sym_SEMI,
    STATE(193), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7021] = 6,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
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
  [7055] = 9,
    ACTIONS(347), 1,
      anon_sym_PLUS,
    ACTIONS(349), 1,
      anon_sym_DASH,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(345), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7095] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 15,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7123] = 8,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_CARET,
    ACTIONS(385), 1,
      anon_sym_PLUS,
    ACTIONS(387), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 10,
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
  [7161] = 4,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 13,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7191] = 11,
    ACTIONS(101), 1,
      sym_keyword_or,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_CARET,
    ACTIONS(385), 1,
      anon_sym_PLUS,
    ACTIONS(387), 1,
      anon_sym_DASH,
    ACTIONS(389), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(99), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7235] = 6,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(345), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_with,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7269] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7297] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7325] = 16,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_inner,
    ACTIONS(399), 1,
      sym_keyword_join,
    ACTIONS(401), 1,
      sym_keyword_where,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(405), 1,
      sym_keyword_group_by,
    STATE(202), 1,
      sym_index_hint,
    STATE(359), 1,
      sym_where,
    STATE(429), 1,
      sym_group_by,
    STATE(462), 1,
      sym_order_by,
    STATE(598), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(377), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(395), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(199), 2,
      sym_join,
      aux_sym_from_repeat1,
  [7379] = 9,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_CARET,
    ACTIONS(385), 1,
      anon_sym_PLUS,
    ACTIONS(387), 1,
      anon_sym_DASH,
    ACTIONS(389), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7419] = 4,
    ACTIONS(383), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 13,
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
  [7449] = 6,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(279), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(133), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 11,
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
  [7483] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7511] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7539] = 9,
    ACTIONS(409), 1,
      sym_keyword_in,
    ACTIONS(413), 1,
      anon_sym_PLUS,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7578] = 4,
    ACTIONS(421), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 13,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7607] = 6,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7640] = 4,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 13,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7669] = 9,
    ACTIONS(421), 1,
      anon_sym_CARET,
    ACTIONS(423), 1,
      sym_keyword_in,
    ACTIONS(427), 1,
      anon_sym_PLUS,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7708] = 10,
    ACTIONS(409), 1,
      sym_keyword_in,
    ACTIONS(413), 1,
      anon_sym_PLUS,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(433), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(99), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7749] = 8,
    ACTIONS(413), 1,
      anon_sym_PLUS,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 10,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7786] = 12,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_CARET,
    ACTIONS(385), 1,
      anon_sym_PLUS,
    ACTIONS(387), 1,
      anon_sym_DASH,
    ACTIONS(389), 1,
      sym_keyword_in,
    ACTIONS(437), 1,
      sym_keyword_and,
    ACTIONS(439), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(283), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(391), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7831] = 6,
    ACTIONS(421), 1,
      anon_sym_CARET,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 11,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7864] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 3,
      sym_keyword_where,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(133), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 11,
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
  [7893] = 6,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(657), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 11,
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
  [7926] = 10,
    ACTIONS(421), 1,
      anon_sym_CARET,
    ACTIONS(423), 1,
      sym_keyword_in,
    ACTIONS(427), 1,
      anon_sym_PLUS,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(447), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(445), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(99), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7967] = 8,
    ACTIONS(421), 1,
      anon_sym_CARET,
    ACTIONS(427), 1,
      anon_sym_PLUS,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 10,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8004] = 8,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(453), 1,
      sym_keyword_as,
    ACTIONS(455), 1,
      anon_sym_DOT,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(451), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(449), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8040] = 8,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(457), 1,
      sym_keyword_as,
    ACTIONS(459), 1,
      anon_sym_DOT,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(451), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(449), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_with,
  [8076] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(441), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(133), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 11,
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
  [8104] = 11,
    ACTIONS(409), 1,
      sym_keyword_in,
    ACTIONS(413), 1,
      anon_sym_PLUS,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(461), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(463), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(433), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8146] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(441), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(133), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 11,
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
  [8174] = 3,
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
  [8199] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(469), 1,
      sym_keyword_as,
    STATE(252), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(467), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(465), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [8232] = 3,
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
      sym_keyword_with,
      sym__identifier,
  [8257] = 14,
    ACTIONS(363), 1,
      sym_keyword_inner,
    ACTIONS(365), 1,
      sym_keyword_join,
    ACTIONS(367), 1,
      sym_keyword_where,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(371), 1,
      sym_keyword_group_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(354), 1,
      sym_where,
    STATE(452), 1,
      sym_group_by,
    STATE(467), 1,
      sym_order_by,
    STATE(651), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(471), 2,
      sym_keyword_with,
      anon_sym_SEMI,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8304] = 14,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_inner,
    ACTIONS(399), 1,
      sym_keyword_join,
    ACTIONS(401), 1,
      sym_keyword_where,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(405), 1,
      sym_keyword_group_by,
    STATE(367), 1,
      sym_where,
    STATE(446), 1,
      sym_group_by,
    STATE(473), 1,
      sym_order_by,
    STATE(629), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(304), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8351] = 11,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    ACTIONS(409), 1,
      sym_keyword_in,
    ACTIONS(413), 1,
      anon_sym_PLUS,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(461), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(433), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8392] = 14,
    ACTIONS(363), 1,
      sym_keyword_inner,
    ACTIONS(365), 1,
      sym_keyword_join,
    ACTIONS(367), 1,
      sym_keyword_where,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(371), 1,
      sym_keyword_group_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(360), 1,
      sym_where,
    STATE(435), 1,
      sym_group_by,
    STATE(473), 1,
      sym_order_by,
    STATE(629), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(473), 2,
      sym_keyword_with,
      anon_sym_SEMI,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8439] = 3,
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
      sym_keyword_with,
      sym__identifier,
  [8464] = 3,
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
  [8489] = 14,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_inner,
    ACTIONS(399), 1,
      sym_keyword_join,
    ACTIONS(401), 1,
      sym_keyword_where,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(405), 1,
      sym_keyword_group_by,
    STATE(344), 1,
      sym_where,
    STATE(414), 1,
      sym_group_by,
    STATE(467), 1,
      sym_order_by,
    STATE(651), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(471), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(304), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8536] = 14,
    ACTIONS(363), 1,
      sym_keyword_inner,
    ACTIONS(365), 1,
      sym_keyword_join,
    ACTIONS(367), 1,
      sym_keyword_where,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(371), 1,
      sym_keyword_group_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(354), 1,
      sym_where,
    STATE(452), 1,
      sym_group_by,
    STATE(467), 1,
      sym_order_by,
    STATE(651), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(471), 2,
      sym_keyword_with,
      anon_sym_SEMI,
    STATE(196), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8583] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(475), 1,
      sym_keyword_as,
    STATE(252), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(467), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(465), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_with,
  [8616] = 14,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(397), 1,
      sym_keyword_inner,
    ACTIONS(399), 1,
      sym_keyword_join,
    ACTIONS(401), 1,
      sym_keyword_where,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(405), 1,
      sym_keyword_group_by,
    STATE(344), 1,
      sym_where,
    STATE(414), 1,
      sym_group_by,
    STATE(467), 1,
      sym_order_by,
    STATE(651), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(471), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(194), 2,
      sym_join,
      aux_sym_from_repeat1,
  [8663] = 6,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(267), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(479), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(477), 9,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_with,
  [8693] = 11,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(113), 1,
      sym__literal_string,
    STATE(443), 1,
      sym_where_expression,
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
  [8733] = 13,
    ACTIONS(59), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(402), 1,
      sym_identifier,
    STATE(902), 1,
      sym__unary_function_name,
    STATE(903), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(351), 2,
      sym_field,
      sym_function_call,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [8777] = 6,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(248), 1,
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
      sym_keyword_with,
  [8807] = 10,
    ACTIONS(305), 1,
      anon_sym_CARET,
    ACTIONS(307), 1,
      sym_keyword_in,
    ACTIONS(311), 1,
      anon_sym_PLUS,
    ACTIONS(313), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(497), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(341), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8845] = 11,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(499), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(113), 1,
      sym__literal_string,
    STATE(443), 1,
      sym_where_expression,
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
  [8885] = 10,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_SLASH,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(503), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(505), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(205), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8923] = 10,
    ACTIONS(421), 1,
      anon_sym_CARET,
    ACTIONS(423), 1,
      sym_keyword_in,
    ACTIONS(427), 1,
      anon_sym_PLUS,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(447), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(507), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(445), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8961] = 10,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_CARET,
    ACTIONS(385), 1,
      anon_sym_PLUS,
    ACTIONS(387), 1,
      anon_sym_DASH,
    ACTIONS(389), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(437), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(391), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8999] = 13,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(229), 1,
      sym_keyword_count,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    STATE(340), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(880), 1,
      sym__function_name,
    STATE(881), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(351), 2,
      sym_field,
      sym_function_call,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [9043] = 13,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(255), 1,
      sym_keyword_count,
    ACTIONS(259), 1,
      anon_sym_BQUOTE,
    ACTIONS(261), 1,
      sym__identifier,
    STATE(309), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(921), 1,
      sym__unary_function_name,
    STATE(922), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(351), 2,
      sym_field,
      sym_function_call,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [9087] = 6,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(248), 1,
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
  [9117] = 10,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_CARET,
    ACTIONS(509), 1,
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
    ACTIONS(511), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9155] = 13,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(269), 1,
      sym_keyword_count,
    ACTIONS(271), 1,
      anon_sym_BQUOTE,
    ACTIONS(273), 1,
      sym__identifier,
    STATE(306), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(913), 1,
      sym__unary_function_name,
    STATE(914), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(351), 2,
      sym_field,
      sym_function_call,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [9199] = 10,
    ACTIONS(409), 1,
      sym_keyword_in,
    ACTIONS(413), 1,
      anon_sym_PLUS,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(461), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(433), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9237] = 10,
    ACTIONS(347), 1,
      anon_sym_PLUS,
    ACTIONS(349), 1,
      anon_sym_DASH,
    ACTIONS(351), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(345), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(359), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(513), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(357), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9275] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(443), 1,
      sym_where_expression,
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
  [9315] = 12,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(169), 1,
      sym_predicate,
    STATE(582), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(210), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9357] = 12,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(134), 1,
      sym_predicate,
    STATE(408), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(207), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9399] = 11,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(519), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(113), 1,
      sym__literal_string,
    STATE(443), 1,
      sym_where_expression,
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
  [9439] = 13,
    ACTIONS(63), 1,
      sym_keyword_if,
    ACTIONS(217), 1,
      sym_keyword_count,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(223), 1,
      sym__identifier,
    STATE(336), 1,
      sym_identifier,
    STATE(379), 1,
      sym__multi_param_function,
    STATE(381), 1,
      sym__count_function,
    STATE(382), 1,
      sym__unary_function,
    STATE(917), 1,
      sym__unary_function_name,
    STATE(918), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(351), 2,
      sym_field,
      sym_function_call,
    ACTIONS(61), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [9483] = 6,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(267), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(479), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(477), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [9513] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(41), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(35), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [9550] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9587] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9624] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9661] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9698] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9735] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9772] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9809] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(519), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9846] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9883] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9920] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9957] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(519), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(113), 1,
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
  [9994] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(46), 1,
      sym_predicate,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [10033] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(148), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(207), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10072] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(41), 1,
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
  [10109] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(41), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(64), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10146] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(49), 1,
      sym_predicate,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(215), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10185] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(75), 1,
      sym_identifier,
    STATE(113), 1,
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
  [10222] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(145), 1,
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
  [10261] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(41), 1,
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
  [10298] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(41), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(61), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10335] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(41), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(63), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10372] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 14,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10393] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(41), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(35), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10430] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(75), 1,
      sym_identifier,
    STATE(113), 1,
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
  [10467] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(113), 1,
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
  [10504] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(547), 14,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10525] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(75), 1,
      sym_identifier,
    STATE(113), 1,
      sym__literal_string,
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
  [10562] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(75), 1,
      sym_identifier,
    STATE(113), 1,
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
  [10599] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [10636] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(46), 1,
      sym_predicate,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(215), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10675] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [10712] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(113), 1,
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
  [10749] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(181), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(210), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10788] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(116), 1,
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
  [10825] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    STATE(145), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(211), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [10864] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [10901] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
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
  [10938] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [10975] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [11012] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(75), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11049] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(553), 14,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11070] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(116), 1,
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
  [11107] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(75), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11144] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(116), 1,
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
  [11181] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(116), 1,
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
  [11218] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(116), 1,
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
  [11255] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(49), 1,
      sym_predicate,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [11294] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(52), 1,
      sym_predicate,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(215), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11333] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(116), 1,
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
  [11370] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(555), 14,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11391] = 10,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [11428] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(41), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(74), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11465] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(499), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11502] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(52), 1,
      sym_predicate,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [11541] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(499), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11578] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(50), 1,
      sym_predicate,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(215), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11617] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(41), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(73), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11654] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(499), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11691] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(41), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(70), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [11728] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(499), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11765] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(499), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11802] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(499), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11839] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(519), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11876] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(519), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11913] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(519), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(113), 1,
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
  [11950] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(41), 1,
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
  [11987] = 10,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      sym__number,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(41), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(68), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [12024] = 10,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym__number,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(519), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(113), 1,
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
  [12061] = 11,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(50), 1,
      sym_predicate,
    STATE(58), 1,
      sym__literal_string,
    STATE(107), 1,
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
  [12100] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(557), 13,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12120] = 9,
    ACTIONS(559), 1,
      sym_keyword_set,
    ACTIONS(561), 1,
      sym_keyword_alter,
    ACTIONS(563), 1,
      sym_keyword_drop,
    ACTIONS(565), 1,
      sym_keyword_add,
    ACTIONS(567), 1,
      sym_keyword_rename,
    ACTIONS(569), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(628), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(731), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12154] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(571), 13,
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
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12174] = 9,
    ACTIONS(559), 1,
      sym_keyword_set,
    ACTIONS(561), 1,
      sym_keyword_alter,
    ACTIONS(563), 1,
      sym_keyword_drop,
    ACTIONS(565), 1,
      sym_keyword_add,
    ACTIONS(567), 1,
      sym_keyword_rename,
    ACTIONS(569), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(593), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
    STATE(771), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [12208] = 3,
    ACTIONS(575), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 12,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12230] = 10,
    ACTIONS(579), 1,
      sym_keyword_primary,
    ACTIONS(581), 1,
      sym_keyword_not,
    ACTIONS(583), 1,
      sym_keyword_auto_increment,
    ACTIONS(585), 1,
      sym_keyword_default,
    STATE(428), 1,
      sym__primary_key,
    STATE(601), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    STATE(337), 2,
      sym__not_null,
      sym__default_null,
    ACTIONS(587), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12266] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(589), 12,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12285] = 6,
    ACTIONS(594), 1,
      sym_keyword_inner,
    ACTIONS(597), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(591), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(303), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(600), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_SEMI,
  [12312] = 6,
    ACTIONS(605), 1,
      sym_keyword_inner,
    ACTIONS(608), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(602), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(304), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(600), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12339] = 13,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(611), 1,
      sym_keyword_primary,
    ACTIONS(613), 1,
      sym_keyword_key,
    ACTIONS(615), 1,
      sym_keyword_constraint,
    STATE(342), 1,
      sym_identifier,
    STATE(612), 1,
      sym_constraint,
    STATE(702), 1,
      sym_column_definition,
    STATE(704), 1,
      sym__constraint_literal,
    STATE(708), 1,
      sym__primary_key_constraint,
    STATE(710), 1,
      sym__key_constraint,
    STATE(726), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12380] = 8,
    ACTIONS(247), 1,
      sym_keyword_as,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(617), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(43), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12410] = 8,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(263), 1,
      sym_keyword_as,
    ACTIONS(619), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(27), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
  [12440] = 8,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(263), 1,
      sym_keyword_as,
    ACTIONS(621), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(29), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12470] = 8,
    ACTIONS(247), 1,
      sym_keyword_as,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(41), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
  [12500] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12519] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(627), 1,
      sym_keyword_as,
    STATE(357), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(625), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(629), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12546] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_with,
      sym__identifier,
  [12565] = 3,
    ACTIONS(633), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(631), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12584] = 3,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(635), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12603] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(277), 1,
      sym_keyword_as,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(51), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
  [12630] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(627), 1,
      sym_keyword_as,
    STATE(357), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(629), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(625), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
  [12657] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(277), 1,
      sym_keyword_as,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(53), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12684] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(641), 1,
      sym_keyword_as,
    STATE(343), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(643), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(639), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
  [12711] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(647), 1,
      sym_keyword_as,
    STATE(374), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(645), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
  [12738] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(653), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(655), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(651), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
  [12765] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(659), 1,
      sym_keyword_as,
    STATE(352), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(661), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(657), 4,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
  [12792] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_BQUOTE,
  [12811] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(647), 1,
      sym_keyword_as,
    STATE(374), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(645), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(649), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12838] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_with,
      sym__identifier,
  [12857] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(653), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(651), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(655), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12884] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(641), 1,
      sym_keyword_as,
    STATE(343), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(639), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(643), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12911] = 3,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(663), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12930] = 7,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(253), 1,
      sym__identifier,
    ACTIONS(659), 1,
      sym_keyword_as,
    STATE(352), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(657), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(661), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12957] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [12976] = 3,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_BQUOTE,
  [12995] = 8,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(667), 1,
      sym_keyword_as,
    ACTIONS(669), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 2,
      sym_keyword_from,
      sym_keyword_with,
    ACTIONS(29), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13023] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(671), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13039] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(673), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13055] = 2,
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
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13071] = 8,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(677), 1,
      sym_keyword_as,
    ACTIONS(679), 1,
      anon_sym_DOT,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(451), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [13099] = 8,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(681), 1,
      sym_keyword_as,
    ACTIONS(683), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 2,
      sym_keyword_from,
      sym_keyword_with,
    ACTIONS(43), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13127] = 7,
    ACTIONS(579), 1,
      sym_keyword_primary,
    ACTIONS(685), 1,
      sym_keyword_auto_increment,
    STATE(417), 1,
      sym__primary_key,
    STATE(579), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(687), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13153] = 8,
    ACTIONS(27), 1,
      sym_keyword_from,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(667), 1,
      sym_keyword_as,
    ACTIONS(689), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13181] = 7,
    ACTIONS(691), 1,
      sym_keyword_bigint,
    ACTIONS(693), 1,
      sym_keyword_date,
    ACTIONS(695), 1,
      sym_keyword_datetime,
    ACTIONS(697), 1,
      sym_keyword_char,
    ACTIONS(699), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(678), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [13207] = 8,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(41), 1,
      sym_keyword_from,
    ACTIONS(681), 1,
      sym_keyword_as,
    ACTIONS(701), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13235] = 7,
    ACTIONS(691), 1,
      sym_keyword_bigint,
    ACTIONS(697), 1,
      sym_keyword_char,
    ACTIONS(699), 1,
      sym_keyword_varchar,
    ACTIONS(703), 1,
      sym_keyword_date,
    ACTIONS(705), 1,
      sym_keyword_datetime,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(689), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [13261] = 7,
    ACTIONS(691), 1,
      sym_keyword_bigint,
    ACTIONS(697), 1,
      sym_keyword_char,
    ACTIONS(699), 1,
      sym_keyword_varchar,
    ACTIONS(707), 1,
      sym_keyword_date,
    ACTIONS(709), 1,
      sym_keyword_datetime,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(301), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [13287] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(711), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13302] = 8,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(405), 1,
      sym_keyword_group_by,
    STATE(446), 1,
      sym_group_by,
    STATE(473), 1,
      sym_order_by,
    STATE(629), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13329] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(713), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13344] = 8,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(715), 1,
      sym_keyword_default,
    ACTIONS(717), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_identifier,
    STATE(739), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(393), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [13371] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_keyword_from,
    ACTIONS(719), 1,
      sym_keyword_as,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13396] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(721), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13411] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(723), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13426] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(725), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13441] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(729), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13471] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(21), 4,
      sym_keyword_from,
      sym_keyword_as,
      sym_keyword_with,
      sym__identifier,
  [13488] = 8,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(371), 1,
      sym_keyword_group_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(435), 1,
      sym_group_by,
    STATE(473), 1,
      sym_order_by,
    STATE(629), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 2,
      sym_keyword_with,
      anon_sym_SEMI,
  [13515] = 3,
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
  [13532] = 3,
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
  [13549] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13564] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(733), 1,
      sym_keyword_as,
    STATE(374), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(645), 2,
      sym_keyword_from,
      sym_keyword_with,
    ACTIONS(649), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13589] = 8,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(405), 1,
      sym_keyword_group_by,
    STATE(414), 1,
      sym_group_by,
    STATE(467), 1,
      sym_order_by,
    STATE(651), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13616] = 8,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(371), 1,
      sym_keyword_group_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(430), 1,
      sym_group_by,
    STATE(471), 1,
      sym_order_by,
    STATE(587), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(735), 2,
      sym_keyword_with,
      anon_sym_SEMI,
  [13643] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(737), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(651), 2,
      sym_keyword_from,
      sym_keyword_with,
    ACTIONS(655), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13668] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(739), 1,
      sym_keyword_as,
    STATE(343), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(639), 2,
      sym_keyword_from,
      sym_keyword_with,
    ACTIONS(643), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13693] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(719), 1,
      sym_keyword_as,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 2,
      sym_keyword_from,
      sym_keyword_with,
    ACTIONS(53), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13718] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(25), 4,
      sym_keyword_from,
      sym_keyword_as,
      sym_keyword_with,
      sym__identifier,
  [13735] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(657), 1,
      sym_keyword_from,
    ACTIONS(741), 1,
      sym_keyword_as,
    STATE(352), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(661), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13760] = 6,
    ACTIONS(579), 1,
      sym_keyword_primary,
    STATE(417), 1,
      sym__primary_key,
    STATE(579), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(687), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13783] = 8,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(405), 1,
      sym_keyword_group_by,
    STATE(449), 1,
      sym_group_by,
    STATE(471), 1,
      sym_order_by,
    STATE(587), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(735), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [13810] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(743), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13825] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(741), 1,
      sym_keyword_as,
    STATE(352), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(657), 2,
      sym_keyword_from,
      sym_keyword_with,
    ACTIONS(661), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13850] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(745), 1,
      sym_keyword_as,
    STATE(252), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(465), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(467), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [13875] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(747), 1,
      sym_keyword_as,
    STATE(357), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(625), 2,
      sym_keyword_from,
      sym_keyword_with,
    ACTIONS(629), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13900] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(639), 1,
      sym_keyword_from,
    ACTIONS(739), 1,
      sym_keyword_as,
    STATE(343), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(643), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13925] = 6,
    ACTIONS(579), 1,
      sym_keyword_primary,
    STATE(445), 1,
      sym__primary_key,
    STATE(561), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(749), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13948] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(751), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13963] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(651), 1,
      sym_keyword_from,
    ACTIONS(737), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(655), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13988] = 9,
    ACTIONS(579), 1,
      sym_keyword_primary,
    ACTIONS(753), 1,
      sym_keyword_key,
    ACTIONS(755), 1,
      sym_keyword_constraint,
    STATE(686), 1,
      sym_constraint,
    STATE(704), 1,
      sym__constraint_literal,
    STATE(708), 1,
      sym__primary_key_constraint,
    STATE(710), 1,
      sym__key_constraint,
    STATE(726), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14017] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(645), 1,
      sym_keyword_from,
    ACTIONS(733), 1,
      sym_keyword_as,
    STATE(374), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14042] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(625), 1,
      sym_keyword_from,
    ACTIONS(747), 1,
      sym_keyword_as,
    STATE(357), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(629), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14067] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14082] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(759), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14097] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14112] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(757), 8,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14127] = 8,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(371), 1,
      sym_keyword_group_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(452), 1,
      sym_group_by,
    STATE(467), 1,
      sym_order_by,
    STATE(651), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 2,
      sym_keyword_with,
      anon_sym_SEMI,
  [14154] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(761), 1,
      sym_keyword_as,
    ACTIONS(763), 1,
      anon_sym_DOT,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [14179] = 8,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(715), 1,
      sym_keyword_default,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_identifier,
    STATE(927), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(393), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14206] = 9,
    ACTIONS(767), 1,
      sym_keyword_table,
    ACTIONS(769), 1,
      sym_keyword_view,
    ACTIONS(771), 1,
      sym_keyword_materialized,
    ACTIONS(773), 1,
      sym_keyword_or,
    ACTIONS(775), 1,
      sym_keyword_temp,
    ACTIONS(777), 1,
      sym_keyword_temporary,
    STATE(676), 1,
      sym__or_replace,
    STATE(867), 1,
      sym__temporary,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14235] = 8,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(715), 1,
      sym_keyword_default,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_identifier,
    STATE(765), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(393), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14262] = 8,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(547), 1,
      sym_table_reference,
    STATE(870), 1,
      sym__table_references,
    STATE(874), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(873), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [14289] = 5,
    ACTIONS(559), 1,
      sym_keyword_set,
    ACTIONS(567), 1,
      sym_keyword_rename,
    ACTIONS(569), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(770), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [14309] = 5,
    ACTIONS(559), 1,
      sym_keyword_set,
    ACTIONS(567), 1,
      sym_keyword_rename,
    ACTIONS(569), 1,
      sym_keyword_owner,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(819), 4,
      sym_rename_column,
      sym_rename_object,
      sym_set_schema,
      sym_change_ownership,
  [14329] = 4,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14347] = 6,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(267), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(477), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(479), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [14369] = 7,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(715), 1,
      sym_keyword_default,
    ACTIONS(786), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(394), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14393] = 7,
    ACTIONS(788), 1,
      sym_keyword_default,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(796), 1,
      sym__identifier,
    STATE(738), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(394), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [14417] = 3,
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
  [14433] = 3,
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
  [14449] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    STATE(58), 1,
      sym__literal_string,
    STATE(606), 1,
      sym_literal,
    STATE(608), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14475] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    STATE(58), 1,
      sym__literal_string,
    STATE(667), 1,
      sym_select,
    STATE(668), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14501] = 6,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(248), 1,
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
  [14523] = 7,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(799), 1,
      sym_keyword_as,
    ACTIONS(801), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14547] = 6,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(803), 1,
      sym_keyword_as,
    STATE(252), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(465), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [14569] = 7,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(805), 1,
      sym_keyword_as,
    ACTIONS(807), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14593] = 8,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(809), 1,
      sym_keyword_where,
    ACTIONS(811), 1,
      anon_sym_SEMI,
    STATE(456), 1,
      sym_where,
    STATE(600), 1,
      sym_order_by,
    STATE(763), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14619] = 4,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(813), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14637] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    STATE(58), 1,
      sym__literal_string,
    STATE(531), 1,
      sym_literal,
    STATE(610), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14663] = 4,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(817), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14681] = 4,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(409), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(813), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_SEMI,
  [14699] = 8,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(809), 1,
      sym_keyword_where,
    ACTIONS(821), 1,
      anon_sym_SEMI,
    STATE(470), 1,
      sym_where,
    STATE(621), 1,
      sym_order_by,
    STATE(741), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14725] = 4,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(817), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_SEMI,
  [14743] = 4,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_SEMI,
  [14761] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(826), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14775] = 4,
    STATE(520), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(828), 4,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14793] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(830), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14807] = 6,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    STATE(473), 1,
      sym_order_by,
    STATE(629), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [14828] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(832), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14841] = 4,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(416), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [14858] = 4,
    STATE(561), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(749), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14875] = 6,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(467), 1,
      sym_order_by,
    STATE(651), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 2,
      sym_keyword_with,
      anon_sym_SEMI,
  [14896] = 3,
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
  [14911] = 4,
    ACTIONS(839), 1,
      sym_keyword_having,
    STATE(464), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(837), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_SEMI,
  [14928] = 3,
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
  [14943] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_if,
    STATE(342), 1,
      sym_identifier,
    STATE(517), 1,
      sym__if_not_exists,
    STATE(696), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14966] = 6,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(843), 1,
      sym_keyword_as,
    STATE(357), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(629), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14987] = 6,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(845), 1,
      sym_keyword_as,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15008] = 7,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_if,
    STATE(486), 1,
      sym__if_not_exists,
    STATE(649), 1,
      sym_identifier,
    STATE(682), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15031] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_if,
    STATE(300), 1,
      sym_identifier,
    STATE(483), 1,
      sym__if_not_exists,
    STATE(811), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15054] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(847), 1,
      sym_keyword_if,
    STATE(299), 1,
      sym_table_reference,
    STATE(300), 1,
      sym_identifier,
    STATE(504), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15077] = 4,
    STATE(579), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(687), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [15094] = 6,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    STATE(467), 1,
      sym_order_by,
    STATE(651), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15115] = 6,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(463), 1,
      sym_order_by,
    STATE(568), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 2,
      sym_keyword_with,
      anon_sym_SEMI,
  [15136] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(847), 1,
      sym_keyword_if,
    STATE(300), 1,
      sym_identifier,
    STATE(389), 1,
      sym_table_reference,
    STATE(481), 1,
      sym__if_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15159] = 6,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(851), 1,
      sym_keyword_as,
    STATE(352), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(661), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15180] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(847), 1,
      sym_keyword_if,
    STATE(300), 1,
      sym_identifier,
    STATE(505), 1,
      sym__if_exists,
    STATE(694), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15203] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(847), 1,
      sym_keyword_if,
    STATE(300), 1,
      sym_identifier,
    STATE(490), 1,
      sym__if_exists,
    STATE(697), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15226] = 6,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(471), 1,
      sym_order_by,
    STATE(587), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(735), 2,
      sym_keyword_with,
      anon_sym_SEMI,
  [15247] = 6,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(853), 1,
      sym_keyword_as,
    STATE(343), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(643), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15268] = 5,
    ACTIONS(561), 1,
      sym_keyword_alter,
    ACTIONS(563), 1,
      sym_keyword_drop,
    ACTIONS(565), 1,
      sym_keyword_add,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(701), 3,
      sym_add_column,
      sym_alter_column,
      sym_drop_column,
  [15287] = 6,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(855), 1,
      sym_keyword_as,
    STATE(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(655), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15308] = 4,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(416), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(857), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [15325] = 6,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(859), 1,
      sym_keyword_as,
    STATE(374), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15346] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_if,
    STATE(300), 1,
      sym_identifier,
    STATE(478), 1,
      sym__if_not_exists,
    STATE(875), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15369] = 7,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_if,
    STATE(503), 1,
      sym__if_not_exists,
    STATE(649), 1,
      sym_identifier,
    STATE(700), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15392] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(861), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15405] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_if,
    STATE(300), 1,
      sym_identifier,
    STATE(493), 1,
      sym__if_not_exists,
    STATE(786), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15428] = 4,
    STATE(551), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(863), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [15445] = 6,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    STATE(471), 1,
      sym_order_by,
    STATE(587), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(735), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15466] = 7,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(841), 1,
      sym_keyword_if,
    STATE(300), 1,
      sym_identifier,
    STATE(502), 1,
      sym__if_not_exists,
    STATE(735), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15489] = 4,
    ACTIONS(865), 1,
      sym_keyword_having,
    STATE(464), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(837), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15506] = 6,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    STATE(463), 1,
      sym_order_by,
    STATE(568), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15527] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(248), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(493), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [15546] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(267), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(477), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [15565] = 6,
    ACTIONS(369), 1,
      sym_keyword_order_by,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(473), 1,
      sym_order_by,
    STATE(629), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 2,
      sym_keyword_with,
      anon_sym_SEMI,
  [15586] = 6,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(867), 1,
      sym_keyword_column,
    ACTIONS(869), 1,
      sym_keyword_to,
    STATE(806), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15606] = 4,
    STATE(680), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(871), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15622] = 6,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(847), 1,
      sym_keyword_if,
    STATE(640), 1,
      sym__if_exists,
    STATE(695), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15642] = 6,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    STATE(652), 1,
      sym_order_by,
    STATE(853), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15662] = 4,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 3,
      sym_keyword_from,
      sym_keyword_with,
      anon_sym_SEMI,
  [15678] = 4,
    ACTIONS(878), 1,
      sym_keyword_offset,
    STATE(630), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(880), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15694] = 4,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(813), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15710] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(884), 5,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [15722] = 6,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(550), 1,
      sym_table_reference,
    STATE(851), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15742] = 4,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(651), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15758] = 4,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(556), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(886), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15774] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(888), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15786] = 6,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    STATE(58), 1,
      sym__literal_string,
    STATE(458), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15806] = 4,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15822] = 4,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(629), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15838] = 4,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(476), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(813), 3,
      sym_keyword_from,
      sym_keyword_with,
      anon_sym_SEMI,
  [15854] = 4,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(817), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15870] = 6,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(403), 1,
      sym_keyword_order_by,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    STATE(662), 1,
      sym_order_by,
    STATE(928), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15890] = 4,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(568), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15906] = 6,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    STATE(58), 1,
      sym__literal_string,
    STATE(709), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15926] = 4,
    ACTIONS(373), 1,
      sym_keyword_limit,
    STATE(587), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(735), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [15942] = 6,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    STATE(58), 1,
      sym__literal_string,
    STATE(531), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15962] = 6,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__number,
    STATE(58), 1,
      sym__literal_string,
    STATE(545), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [15982] = 4,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(817), 3,
      sym_keyword_from,
      sym_keyword_with,
      anon_sym_SEMI,
  [15998] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(897), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(899), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16011] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(735), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16028] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(901), 4,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16039] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(903), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(905), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16052] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(390), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16069] = 4,
    ACTIONS(907), 1,
      sym_keyword_on,
    STATE(730), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16084] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(786), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16101] = 4,
    ACTIONS(909), 1,
      sym_keyword_on,
    STATE(822), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16116] = 5,
    ACTIONS(911), 1,
      anon_sym_BQUOTE,
    ACTIONS(913), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(508), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16133] = 5,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(649), 1,
      sym_identifier,
    STATE(700), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16150] = 4,
    ACTIONS(917), 1,
      sym_keyword_from,
    STATE(677), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(919), 2,
      sym_keyword_with,
      anon_sym_SEMI,
  [16165] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(711), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16182] = 4,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(489), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [16197] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(713), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16214] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(924), 4,
      sym_keyword_from,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16225] = 4,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(489), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(857), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [16240] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(733), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16257] = 5,
    ACTIONS(926), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(335), 1,
      sym_identifier,
    STATE(403), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16274] = 5,
    ACTIONS(930), 1,
      anon_sym_BQUOTE,
    ACTIONS(932), 1,
      sym__identifier,
    STATE(166), 1,
      sym_table_expression,
    STATE(185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16291] = 5,
    ACTIONS(911), 1,
      anon_sym_BQUOTE,
    ACTIONS(913), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(482), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16308] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(934), 4,
      sym_keyword_from,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16319] = 5,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(454), 1,
      sym_identifier,
    STATE(564), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16336] = 5,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(620), 1,
      sym__column_without_order,
    STATE(719), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16353] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(938), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(940), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16366] = 5,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(649), 1,
      sym_identifier,
    STATE(830), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16383] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(818), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16400] = 5,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(649), 1,
      sym_identifier,
    STATE(706), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16417] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(297), 1,
      sym_table_reference,
    STATE(300), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16434] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    STATE(716), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16451] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(25), 2,
      sym_keyword_default,
      sym__identifier,
  [16464] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(342), 1,
      sym_identifier,
    STATE(510), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16481] = 4,
    ACTIONS(942), 1,
      sym_keyword_on,
    STATE(779), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16496] = 5,
    ACTIONS(911), 1,
      anon_sym_BQUOTE,
    ACTIONS(913), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(484), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16513] = 5,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(525), 1,
      aux_sym_column_definitions_repeat1,
    STATE(919), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16530] = 5,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(454), 1,
      sym_identifier,
    STATE(675), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16547] = 4,
    ACTIONS(948), 1,
      sym_keyword_from,
    STATE(876), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16562] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(950), 4,
      sym_keyword_from,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16573] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(952), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(954), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16586] = 5,
    ACTIONS(956), 1,
      anon_sym_BQUOTE,
    ACTIONS(958), 1,
      sym__identifier,
    STATE(156), 1,
      sym_table_expression,
    STATE(186), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16603] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(960), 4,
      sym_keyword_from,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16614] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(342), 1,
      sym_identifier,
    STATE(724), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16631] = 4,
    ACTIONS(962), 1,
      sym_keyword_on,
    STATE(908), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16646] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [16659] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(964), 4,
      sym_keyword_limit,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [16670] = 4,
    ACTIONS(966), 1,
      sym_keyword_on,
    STATE(910), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16685] = 4,
    ACTIONS(968), 1,
      sym_keyword_on,
    STATE(911), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      sym_keyword_force,
      sym_keyword_use,
  [16700] = 5,
    ACTIONS(911), 1,
      anon_sym_BQUOTE,
    ACTIONS(913), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(518), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16717] = 5,
    ACTIONS(911), 1,
      anon_sym_BQUOTE,
    ACTIONS(913), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(521), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16734] = 5,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      aux_sym_column_definitions_repeat1,
    STATE(755), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16751] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(972), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(974), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [16764] = 5,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(342), 1,
      sym_identifier,
    STATE(702), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16781] = 5,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(717), 1,
      sym__column_without_order,
    STATE(719), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16798] = 5,
    ACTIONS(911), 1,
      anon_sym_BQUOTE,
    ACTIONS(913), 1,
      sym__identifier,
    STATE(384), 1,
      sym_identifier,
    STATE(522), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16815] = 4,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    ACTIONS(978), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16829] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(657), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16843] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16857] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(420), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16871] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(380), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16885] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(348), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16899] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(349), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16913] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(350), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16927] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(424), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16941] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16955] = 4,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(540), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16969] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16983] = 4,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    ACTIONS(983), 1,
      sym__identifier,
    STATE(400), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [16997] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17011] = 4,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    STATE(540), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17025] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(990), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17035] = 4,
    ACTIONS(919), 1,
      anon_sym_SEMI,
    ACTIONS(992), 1,
      sym_keyword_from,
    STATE(677), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17049] = 4,
    ACTIONS(994), 1,
      sym_keyword_set,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    STATE(552), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17063] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17077] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(338), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17091] = 4,
    ACTIONS(998), 1,
      sym_keyword_values,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    STATE(790), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17105] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1002), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [17115] = 4,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(1004), 1,
      sym_keyword_set,
    STATE(581), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17129] = 4,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17143] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17157] = 4,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17171] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1010), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17181] = 4,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(543), 1,
      sym__identifier,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17195] = 4,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17209] = 4,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(539), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17223] = 4,
    ACTIONS(259), 1,
      anon_sym_BQUOTE,
    ACTIONS(1012), 1,
      sym__identifier,
    STATE(315), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17237] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(863), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [17247] = 4,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(562), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17261] = 4,
    ACTIONS(259), 1,
      anon_sym_BQUOTE,
    ACTIONS(1012), 1,
      sym__identifier,
    STATE(307), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17275] = 4,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17289] = 4,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(519), 1,
      sym__identifier,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17303] = 4,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(519), 1,
      sym__identifier,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17317] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17331] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(886), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17341] = 4,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17355] = 4,
    ACTIONS(529), 1,
      anon_sym_BQUOTE,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17369] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1021), 1,
      sym__identifier,
    STATE(363), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17383] = 4,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    ACTIONS(1021), 1,
      sym__identifier,
    STATE(331), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17397] = 4,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(128), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17411] = 4,
    ACTIONS(549), 1,
      anon_sym_BQUOTE,
    ACTIONS(551), 1,
      sym__identifier,
    STATE(127), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17425] = 4,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17439] = 4,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17453] = 4,
    ACTIONS(499), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17467] = 4,
    ACTIONS(499), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      sym__identifier,
    STATE(92), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17481] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(749), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [17491] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(744), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17505] = 4,
    ACTIONS(1023), 1,
      sym_keyword_set,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    STATE(581), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17519] = 4,
    ACTIONS(1028), 1,
      sym_keyword_where,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
    STATE(740), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17533] = 4,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    STATE(562), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17547] = 4,
    ACTIONS(271), 1,
      anon_sym_BQUOTE,
    ACTIONS(1036), 1,
      sym__identifier,
    STATE(317), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17561] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(546), 1,
      sym_select,
    STATE(736), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17575] = 4,
    ACTIONS(271), 1,
      anon_sym_BQUOTE,
    ACTIONS(1036), 1,
      sym__identifier,
    STATE(308), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17589] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(849), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17599] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17613] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17627] = 4,
    ACTIONS(956), 1,
      anon_sym_BQUOTE,
    ACTIONS(958), 1,
      sym__identifier,
    STATE(201), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17641] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(821), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17655] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17669] = 4,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    STATE(644), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17683] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17697] = 4,
    ACTIONS(1042), 1,
      sym_keyword_not,
    ACTIONS(1044), 1,
      sym_keyword_default,
    ACTIONS(1046), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17711] = 4,
    ACTIONS(1048), 1,
      sym_keyword_select,
    STATE(487), 1,
      sym_select,
    STATE(692), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17725] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(448), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17739] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17749] = 4,
    ACTIONS(930), 1,
      anon_sym_BQUOTE,
    ACTIONS(932), 1,
      sym__identifier,
    STATE(191), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17763] = 4,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    STATE(853), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17777] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(687), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [17787] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(491), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17801] = 4,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(1050), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17815] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17829] = 4,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(1050), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17843] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17857] = 4,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    STATE(607), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17871] = 4,
    ACTIONS(992), 1,
      sym_keyword_from,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17885] = 4,
    ACTIONS(911), 1,
      anon_sym_BQUOTE,
    ACTIONS(913), 1,
      sym__identifier,
    STATE(401), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17899] = 4,
    ACTIONS(992), 1,
      sym_keyword_from,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(861), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17913] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17927] = 4,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17941] = 4,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    ACTIONS(1050), 1,
      sym__identifier,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17955] = 4,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    STATE(661), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17969] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(721), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17983] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(703), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [17997] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18011] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(347), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18025] = 4,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    STATE(619), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18039] = 4,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    STATE(664), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18053] = 4,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    STATE(928), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18067] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(546), 1,
      sym_select,
    STATE(824), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18081] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18095] = 4,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    STATE(624), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18109] = 4,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18123] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(380), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18137] = 4,
    ACTIONS(1048), 1,
      sym_keyword_select,
    STATE(487), 1,
      sym_select,
    STATE(690), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18151] = 4,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_SEMI,
    STATE(643), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18165] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(735), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18175] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1087), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18185] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(813), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18199] = 4,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    STATE(632), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18213] = 4,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18227] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(641), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18241] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(777), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18255] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(800), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18269] = 4,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18283] = 4,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18297] = 4,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(380), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18311] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(722), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18325] = 4,
    ACTIONS(1094), 1,
      sym_keyword_set,
    ACTIONS(1096), 1,
      sym_keyword_drop,
    ACTIONS(1098), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18339] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(729), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18353] = 4,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
    STATE(632), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18367] = 4,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_SEMI,
    STATE(632), 1,
      aux_sym_alter_table_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18381] = 4,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(546), 1,
      sym_select,
    STATE(766), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18395] = 4,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(348), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18409] = 4,
    ACTIONS(1048), 1,
      sym_keyword_select,
    STATE(487), 1,
      sym_select,
    STATE(669), 1,
      sym__select_statement,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18423] = 4,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    STATE(544), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18437] = 3,
    ACTIONS(1102), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 2,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [18449] = 4,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(349), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18463] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(473), 3,
      sym_keyword_with,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [18473] = 4,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(1104), 1,
      anon_sym_SEMI,
    STATE(732), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18487] = 4,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(350), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18501] = 4,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18515] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18529] = 4,
    ACTIONS(1108), 1,
      anon_sym_BQUOTE,
    ACTIONS(1110), 1,
      sym__identifier,
    STATE(477), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18543] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18557] = 4,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(936), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18571] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(349), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18585] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(350), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18599] = 4,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    STATE(661), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18613] = 4,
    ACTIONS(373), 1,
      sym_keyword_limit,
    ACTIONS(1119), 1,
      anon_sym_SEMI,
    STATE(746), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18627] = 4,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__identifier,
    STATE(348), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18641] = 4,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18655] = 4,
    ACTIONS(926), 1,
      anon_sym_BQUOTE,
    ACTIONS(928), 1,
      sym__identifier,
    STATE(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18669] = 4,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(737), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18683] = 4,
    ACTIONS(992), 1,
      sym_keyword_from,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(850), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18697] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18711] = 3,
    ACTIONS(1127), 1,
      sym_keyword_with,
    ACTIONS(1129), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18722] = 3,
    ACTIONS(1131), 1,
      sym_keyword_outer,
    ACTIONS(1133), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18733] = 3,
    ACTIONS(1135), 1,
      sym_keyword_table,
    ACTIONS(1137), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18744] = 3,
    ACTIONS(1139), 1,
      sym_keyword_table,
    ACTIONS(1141), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18755] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1143), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18764] = 3,
    ACTIONS(1145), 1,
      sym_keyword_from,
    STATE(860), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18775] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(976), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18784] = 3,
    ACTIONS(1147), 1,
      sym_keyword_view,
    ACTIONS(1149), 1,
      sym_keyword_materialized,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18795] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1151), 2,
      sym_keyword_with,
      anon_sym_SEMI,
  [18804] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1153), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [18813] = 3,
    ACTIONS(1155), 1,
      sym_keyword_for,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18824] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1159), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18833] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1161), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18842] = 3,
    ACTIONS(1163), 1,
      anon_sym_LPAREN,
    STATE(346), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18853] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1165), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18862] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(463), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [18871] = 3,
    ACTIONS(1167), 1,
      sym_keyword_no,
    ACTIONS(1169), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18882] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1014), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18891] = 3,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
    STATE(683), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18902] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1173), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18911] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1175), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [18920] = 3,
    ACTIONS(1177), 1,
      sym_keyword_with,
    ACTIONS(1179), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18931] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1181), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [18940] = 3,
    ACTIONS(1183), 1,
      sym_keyword_with,
    ACTIONS(1185), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18951] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1187), 2,
      sym_keyword_view,
      sym_keyword_materialized,
  [18960] = 3,
    ACTIONS(1189), 1,
      sym_keyword_cascade,
    ACTIONS(1191), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [18971] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1193), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [18980] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1195), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [18989] = 3,
    ACTIONS(1197), 1,
      sym_keyword_cascade,
    ACTIONS(1199), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19000] = 3,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19011] = 3,
    ACTIONS(1201), 1,
      sym_keyword_no,
    ACTIONS(1203), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19022] = 3,
    ACTIONS(1163), 1,
      anon_sym_LPAREN,
    STATE(385), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19033] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1089), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [19042] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1056), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19051] = 3,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
    STATE(688), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19062] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1205), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19071] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1207), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19080] = 3,
    ACTIONS(1163), 1,
      anon_sym_LPAREN,
    STATE(387), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19091] = 3,
    ACTIONS(1209), 1,
      sym_keyword_outer,
    ACTIONS(1211), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19102] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1213), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19111] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1080), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19120] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1205), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19129] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1023), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [19138] = 3,
    ACTIONS(1042), 1,
      sym_keyword_not,
    ACTIONS(1215), 1,
      sym_keyword_default,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19149] = 3,
    ACTIONS(1217), 1,
      sym_keyword_cascade,
    ACTIONS(1219), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19160] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1221), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [19169] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1223), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [19178] = 3,
    ACTIONS(1225), 1,
      sym_keyword_cascade,
    ACTIONS(1227), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19189] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1229), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19198] = 3,
    ACTIONS(1231), 1,
      anon_sym_LPAREN,
    STATE(929), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19209] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19218] = 3,
    ACTIONS(1235), 1,
      sym_keyword_no,
    ACTIONS(1237), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19229] = 3,
    ACTIONS(579), 1,
      sym_keyword_primary,
    STATE(687), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19240] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1239), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [19249] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1241), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19258] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(1243), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [19267] = 3,
    ACTIONS(1231), 1,
      anon_sym_LPAREN,
    STATE(743), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19278] = 3,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
    STATE(705), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19289] = 2,
    ACTIONS(1245), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19297] = 2,
    ACTIONS(1247), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19305] = 2,
    ACTIONS(1249), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19313] = 2,
    ACTIONS(942), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19321] = 2,
    ACTIONS(1085), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19329] = 2,
    ACTIONS(1251), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19337] = 2,
    ACTIONS(1253), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19345] = 2,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19353] = 2,
    ACTIONS(1257), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19361] = 2,
    ACTIONS(1259), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19369] = 2,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19377] = 2,
    ACTIONS(1263), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19385] = 2,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19393] = 2,
    ACTIONS(1265), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19401] = 2,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19409] = 2,
    ACTIONS(1267), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19417] = 2,
    ACTIONS(1269), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19425] = 2,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19433] = 2,
    ACTIONS(1273), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19441] = 2,
    ACTIONS(1275), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19449] = 2,
    ACTIONS(1277), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19457] = 2,
    ACTIONS(1279), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19465] = 2,
    ACTIONS(1279), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19473] = 2,
    ACTIONS(1281), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19481] = 2,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19489] = 2,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19497] = 2,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19505] = 2,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19513] = 2,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19521] = 2,
    ACTIONS(1293), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19529] = 2,
    ACTIONS(1295), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19537] = 2,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19545] = 2,
    ACTIONS(1299), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19553] = 2,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19561] = 2,
    ACTIONS(1303), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19569] = 2,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19577] = 2,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19585] = 2,
    ACTIONS(1307), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19593] = 2,
    ACTIONS(1309), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19601] = 2,
    ACTIONS(1311), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19609] = 2,
    ACTIONS(1211), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19617] = 2,
    ACTIONS(1219), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19625] = 2,
    ACTIONS(1227), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19633] = 2,
    ACTIONS(1313), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19641] = 2,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19649] = 2,
    ACTIONS(1315), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19657] = 2,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19665] = 2,
    ACTIONS(1319), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19673] = 2,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19681] = 2,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19689] = 2,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19697] = 2,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19705] = 2,
    ACTIONS(909), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19713] = 2,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19721] = 2,
    ACTIONS(1331), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19729] = 2,
    ACTIONS(1333), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19737] = 2,
    ACTIONS(1335), 1,
      sym_keyword_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19745] = 2,
    ACTIONS(1337), 1,
      sym_keyword_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19753] = 2,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19761] = 2,
    ACTIONS(1341), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19769] = 2,
    ACTIONS(1343), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19777] = 2,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19785] = 2,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19793] = 2,
    ACTIONS(1349), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19801] = 2,
    ACTIONS(1351), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19809] = 2,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19817] = 2,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19825] = 2,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19833] = 2,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19841] = 2,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19849] = 2,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19857] = 2,
    ACTIONS(1365), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19865] = 2,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19873] = 2,
    ACTIONS(1369), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19881] = 2,
    ACTIONS(1371), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19889] = 2,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19897] = 2,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19905] = 2,
    ACTIONS(1237), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19913] = 2,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19921] = 2,
    ACTIONS(1379), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19929] = 2,
    ACTIONS(1381), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19937] = 2,
    ACTIONS(1383), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19945] = 2,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19953] = 2,
    ACTIONS(1387), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19961] = 2,
    ACTIONS(1389), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19969] = 2,
    ACTIONS(1185), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19977] = 2,
    ACTIONS(1391), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19985] = 2,
    ACTIONS(1393), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [19993] = 2,
    ACTIONS(1395), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20001] = 2,
    ACTIONS(1397), 1,
      sym_keyword_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20009] = 2,
    ACTIONS(1399), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20017] = 2,
    ACTIONS(1401), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20025] = 2,
    ACTIONS(1403), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20033] = 2,
    ACTIONS(1405), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20041] = 2,
    ACTIONS(1407), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20049] = 2,
    ACTIONS(1409), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20057] = 2,
    ACTIONS(1411), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20065] = 2,
    ACTIONS(1413), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20073] = 2,
    ACTIONS(1415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20081] = 2,
    ACTIONS(1417), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20089] = 2,
    ACTIONS(1419), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20097] = 2,
    ACTIONS(1169), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20105] = 2,
    ACTIONS(1421), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20113] = 2,
    ACTIONS(1423), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20121] = 2,
    ACTIONS(1425), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20129] = 2,
    ACTIONS(1427), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20137] = 2,
    ACTIONS(1429), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20145] = 2,
    ACTIONS(1429), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20153] = 2,
    ACTIONS(1431), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20161] = 2,
    ACTIONS(1433), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20169] = 2,
    ACTIONS(1435), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20177] = 2,
    ACTIONS(1437), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20185] = 2,
    ACTIONS(1439), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20193] = 2,
    ACTIONS(1441), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20201] = 2,
    ACTIONS(1443), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20209] = 2,
    ACTIONS(1445), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20217] = 2,
    ACTIONS(1447), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20225] = 2,
    ACTIONS(1449), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20233] = 2,
    ACTIONS(1453), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1451), 2,
      sym_comment,
      sym_marginalia,
  [20241] = 2,
    ACTIONS(1455), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1451), 2,
      sym_comment,
      sym_marginalia,
  [20249] = 2,
    ACTIONS(1457), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20257] = 2,
    ACTIONS(1459), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20265] = 2,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20273] = 2,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20281] = 2,
    ACTIONS(1465), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20289] = 2,
    ACTIONS(1467), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20297] = 2,
    ACTIONS(1104), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20305] = 2,
    ACTIONS(1469), 1,
      sym_keyword_data,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20313] = 2,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20321] = 2,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20329] = 2,
    ACTIONS(1475), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20337] = 2,
    ACTIONS(1477), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20345] = 2,
    ACTIONS(1477), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20353] = 2,
    ACTIONS(1479), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20361] = 2,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20369] = 2,
    ACTIONS(1483), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1451), 2,
      sym_comment,
      sym_marginalia,
  [20377] = 2,
    ACTIONS(1485), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1451), 2,
      sym_comment,
      sym_marginalia,
  [20385] = 2,
    ACTIONS(1487), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20393] = 2,
    ACTIONS(1489), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20401] = 2,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20409] = 2,
    ACTIONS(1493), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20417] = 2,
    ACTIONS(1495), 1,
      sym_keyword_replace,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20425] = 2,
    ACTIONS(1497), 1,
      sym_keyword_view,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20433] = 2,
    ACTIONS(1499), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20441] = 2,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20449] = 2,
    ACTIONS(1503), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20457] = 2,
    ACTIONS(1505), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20465] = 2,
    ACTIONS(1507), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20473] = 2,
    ACTIONS(1509), 1,
      sym_keyword_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20481] = 2,
    ACTIONS(1511), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20489] = 2,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20497] = 2,
    ACTIONS(1515), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20505] = 2,
    ACTIONS(1517), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20513] = 2,
    ACTIONS(1519), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20521] = 2,
    ACTIONS(1521), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20529] = 2,
    ACTIONS(1523), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20537] = 2,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20545] = 2,
    ACTIONS(1527), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20553] = 2,
    ACTIONS(1529), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20561] = 2,
    ACTIONS(1531), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20569] = 2,
    ACTIONS(1533), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20577] = 2,
    ACTIONS(1535), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20585] = 2,
    ACTIONS(1537), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20593] = 2,
    ACTIONS(1539), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20601] = 2,
    ACTIONS(1541), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20609] = 2,
    ACTIONS(1543), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20617] = 2,
    ACTIONS(1545), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20625] = 2,
    ACTIONS(1547), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20633] = 2,
    ACTIONS(1549), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20641] = 2,
    ACTIONS(1551), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20649] = 2,
    ACTIONS(1553), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20657] = 2,
    ACTIONS(1555), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20665] = 2,
    ACTIONS(1557), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20673] = 2,
    ACTIONS(1559), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20681] = 2,
    ACTIONS(1561), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20689] = 2,
    ACTIONS(1563), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20697] = 2,
    ACTIONS(1565), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20705] = 2,
    ACTIONS(1567), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1451), 2,
      sym_comment,
      sym_marginalia,
  [20713] = 2,
    ACTIONS(1569), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1451), 2,
      sym_comment,
      sym_marginalia,
  [20721] = 2,
    ACTIONS(1571), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20729] = 2,
    ACTIONS(1573), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20737] = 2,
    ACTIONS(966), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20745] = 2,
    ACTIONS(1575), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20753] = 2,
    ACTIONS(968), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20761] = 2,
    ACTIONS(1577), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20769] = 2,
    ACTIONS(1579), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20777] = 2,
    ACTIONS(1581), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20785] = 2,
    ACTIONS(1583), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20793] = 2,
    ACTIONS(1585), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20801] = 2,
    ACTIONS(1587), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20809] = 2,
    ACTIONS(1589), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20817] = 2,
    ACTIONS(1591), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20825] = 2,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20833] = 2,
    ACTIONS(1593), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20841] = 2,
    ACTIONS(1595), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20849] = 2,
    ACTIONS(1597), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20857] = 2,
    ACTIONS(1599), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20865] = 2,
    ACTIONS(1601), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20873] = 2,
    ACTIONS(1603), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20881] = 2,
    ACTIONS(1605), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20889] = 2,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20897] = 2,
    ACTIONS(1119), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20905] = 2,
    ACTIONS(1607), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20913] = 2,
    ACTIONS(1133), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [20921] = 2,
    ACTIONS(1609), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 316,
  [SMALL_STATE(9)] = 362,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 438,
  [SMALL_STATE(12)] = 484,
  [SMALL_STATE(13)] = 522,
  [SMALL_STATE(14)] = 560,
  [SMALL_STATE(15)] = 637,
  [SMALL_STATE(16)] = 714,
  [SMALL_STATE(17)] = 791,
  [SMALL_STATE(18)] = 868,
  [SMALL_STATE(19)] = 945,
  [SMALL_STATE(20)] = 1019,
  [SMALL_STATE(21)] = 1093,
  [SMALL_STATE(22)] = 1167,
  [SMALL_STATE(23)] = 1241,
  [SMALL_STATE(24)] = 1315,
  [SMALL_STATE(25)] = 1389,
  [SMALL_STATE(26)] = 1463,
  [SMALL_STATE(27)] = 1537,
  [SMALL_STATE(28)] = 1611,
  [SMALL_STATE(29)] = 1685,
  [SMALL_STATE(30)] = 1756,
  [SMALL_STATE(31)] = 1827,
  [SMALL_STATE(32)] = 1862,
  [SMALL_STATE(33)] = 1897,
  [SMALL_STATE(34)] = 1932,
  [SMALL_STATE(35)] = 2003,
  [SMALL_STATE(36)] = 2038,
  [SMALL_STATE(37)] = 2109,
  [SMALL_STATE(38)] = 2144,
  [SMALL_STATE(39)] = 2215,
  [SMALL_STATE(40)] = 2250,
  [SMALL_STATE(41)] = 2285,
  [SMALL_STATE(42)] = 2320,
  [SMALL_STATE(43)] = 2355,
  [SMALL_STATE(44)] = 2390,
  [SMALL_STATE(45)] = 2461,
  [SMALL_STATE(46)] = 2532,
  [SMALL_STATE(47)] = 2569,
  [SMALL_STATE(48)] = 2604,
  [SMALL_STATE(49)] = 2675,
  [SMALL_STATE(50)] = 2712,
  [SMALL_STATE(51)] = 2749,
  [SMALL_STATE(52)] = 2784,
  [SMALL_STATE(53)] = 2821,
  [SMALL_STATE(54)] = 2892,
  [SMALL_STATE(55)] = 2927,
  [SMALL_STATE(56)] = 2998,
  [SMALL_STATE(57)] = 3069,
  [SMALL_STATE(58)] = 3113,
  [SMALL_STATE(59)] = 3147,
  [SMALL_STATE(60)] = 3191,
  [SMALL_STATE(61)] = 3237,
  [SMALL_STATE(62)] = 3273,
  [SMALL_STATE(63)] = 3317,
  [SMALL_STATE(64)] = 3357,
  [SMALL_STATE(65)] = 3407,
  [SMALL_STATE(66)] = 3451,
  [SMALL_STATE(67)] = 3495,
  [SMALL_STATE(68)] = 3529,
  [SMALL_STATE(69)] = 3573,
  [SMALL_STATE(70)] = 3623,
  [SMALL_STATE(71)] = 3669,
  [SMALL_STATE(72)] = 3713,
  [SMALL_STATE(73)] = 3757,
  [SMALL_STATE(74)] = 3793,
  [SMALL_STATE(75)] = 3833,
  [SMALL_STATE(76)] = 3876,
  [SMALL_STATE(77)] = 3909,
  [SMALL_STATE(78)] = 3942,
  [SMALL_STATE(79)] = 4011,
  [SMALL_STATE(80)] = 4044,
  [SMALL_STATE(81)] = 4085,
  [SMALL_STATE(82)] = 4154,
  [SMALL_STATE(83)] = 4187,
  [SMALL_STATE(84)] = 4228,
  [SMALL_STATE(85)] = 4261,
  [SMALL_STATE(86)] = 4294,
  [SMALL_STATE(87)] = 4363,
  [SMALL_STATE(88)] = 4406,
  [SMALL_STATE(89)] = 4439,
  [SMALL_STATE(90)] = 4482,
  [SMALL_STATE(91)] = 4515,
  [SMALL_STATE(92)] = 4584,
  [SMALL_STATE(93)] = 4627,
  [SMALL_STATE(94)] = 4668,
  [SMALL_STATE(95)] = 4701,
  [SMALL_STATE(96)] = 4734,
  [SMALL_STATE(97)] = 4767,
  [SMALL_STATE(98)] = 4800,
  [SMALL_STATE(99)] = 4832,
  [SMALL_STATE(100)] = 4864,
  [SMALL_STATE(101)] = 4896,
  [SMALL_STATE(102)] = 4928,
  [SMALL_STATE(103)] = 4960,
  [SMALL_STATE(104)] = 5026,
  [SMALL_STATE(105)] = 5058,
  [SMALL_STATE(106)] = 5098,
  [SMALL_STATE(107)] = 5138,
  [SMALL_STATE(108)] = 5180,
  [SMALL_STATE(109)] = 5246,
  [SMALL_STATE(110)] = 5278,
  [SMALL_STATE(111)] = 5320,
  [SMALL_STATE(112)] = 5352,
  [SMALL_STATE(113)] = 5384,
  [SMALL_STATE(114)] = 5416,
  [SMALL_STATE(115)] = 5448,
  [SMALL_STATE(116)] = 5480,
  [SMALL_STATE(117)] = 5522,
  [SMALL_STATE(118)] = 5554,
  [SMALL_STATE(119)] = 5620,
  [SMALL_STATE(120)] = 5652,
  [SMALL_STATE(121)] = 5684,
  [SMALL_STATE(122)] = 5716,
  [SMALL_STATE(123)] = 5748,
  [SMALL_STATE(124)] = 5780,
  [SMALL_STATE(125)] = 5812,
  [SMALL_STATE(126)] = 5844,
  [SMALL_STATE(127)] = 5876,
  [SMALL_STATE(128)] = 5918,
  [SMALL_STATE(129)] = 5957,
  [SMALL_STATE(130)] = 5996,
  [SMALL_STATE(131)] = 6027,
  [SMALL_STATE(132)] = 6058,
  [SMALL_STATE(133)] = 6089,
  [SMALL_STATE(134)] = 6120,
  [SMALL_STATE(135)] = 6156,
  [SMALL_STATE(136)] = 6203,
  [SMALL_STATE(137)] = 6234,
  [SMALL_STATE(138)] = 6275,
  [SMALL_STATE(139)] = 6322,
  [SMALL_STATE(140)] = 6361,
  [SMALL_STATE(141)] = 6400,
  [SMALL_STATE(142)] = 6445,
  [SMALL_STATE(143)] = 6490,
  [SMALL_STATE(144)] = 6531,
  [SMALL_STATE(145)] = 6566,
  [SMALL_STATE(146)] = 6597,
  [SMALL_STATE(147)] = 6638,
  [SMALL_STATE(148)] = 6673,
  [SMALL_STATE(149)] = 6704,
  [SMALL_STATE(150)] = 6735,
  [SMALL_STATE(151)] = 6780,
  [SMALL_STATE(152)] = 6819,
  [SMALL_STATE(153)] = 6854,
  [SMALL_STATE(154)] = 6885,
  [SMALL_STATE(155)] = 6923,
  [SMALL_STATE(156)] = 6967,
  [SMALL_STATE(157)] = 7021,
  [SMALL_STATE(158)] = 7055,
  [SMALL_STATE(159)] = 7095,
  [SMALL_STATE(160)] = 7123,
  [SMALL_STATE(161)] = 7161,
  [SMALL_STATE(162)] = 7191,
  [SMALL_STATE(163)] = 7235,
  [SMALL_STATE(164)] = 7269,
  [SMALL_STATE(165)] = 7297,
  [SMALL_STATE(166)] = 7325,
  [SMALL_STATE(167)] = 7379,
  [SMALL_STATE(168)] = 7419,
  [SMALL_STATE(169)] = 7449,
  [SMALL_STATE(170)] = 7483,
  [SMALL_STATE(171)] = 7511,
  [SMALL_STATE(172)] = 7539,
  [SMALL_STATE(173)] = 7578,
  [SMALL_STATE(174)] = 7607,
  [SMALL_STATE(175)] = 7640,
  [SMALL_STATE(176)] = 7669,
  [SMALL_STATE(177)] = 7708,
  [SMALL_STATE(178)] = 7749,
  [SMALL_STATE(179)] = 7786,
  [SMALL_STATE(180)] = 7831,
  [SMALL_STATE(181)] = 7864,
  [SMALL_STATE(182)] = 7893,
  [SMALL_STATE(183)] = 7926,
  [SMALL_STATE(184)] = 7967,
  [SMALL_STATE(185)] = 8004,
  [SMALL_STATE(186)] = 8040,
  [SMALL_STATE(187)] = 8076,
  [SMALL_STATE(188)] = 8104,
  [SMALL_STATE(189)] = 8146,
  [SMALL_STATE(190)] = 8174,
  [SMALL_STATE(191)] = 8199,
  [SMALL_STATE(192)] = 8232,
  [SMALL_STATE(193)] = 8257,
  [SMALL_STATE(194)] = 8304,
  [SMALL_STATE(195)] = 8351,
  [SMALL_STATE(196)] = 8392,
  [SMALL_STATE(197)] = 8439,
  [SMALL_STATE(198)] = 8464,
  [SMALL_STATE(199)] = 8489,
  [SMALL_STATE(200)] = 8536,
  [SMALL_STATE(201)] = 8583,
  [SMALL_STATE(202)] = 8616,
  [SMALL_STATE(203)] = 8663,
  [SMALL_STATE(204)] = 8693,
  [SMALL_STATE(205)] = 8733,
  [SMALL_STATE(206)] = 8777,
  [SMALL_STATE(207)] = 8807,
  [SMALL_STATE(208)] = 8845,
  [SMALL_STATE(209)] = 8885,
  [SMALL_STATE(210)] = 8923,
  [SMALL_STATE(211)] = 8961,
  [SMALL_STATE(212)] = 8999,
  [SMALL_STATE(213)] = 9043,
  [SMALL_STATE(214)] = 9087,
  [SMALL_STATE(215)] = 9117,
  [SMALL_STATE(216)] = 9155,
  [SMALL_STATE(217)] = 9199,
  [SMALL_STATE(218)] = 9237,
  [SMALL_STATE(219)] = 9275,
  [SMALL_STATE(220)] = 9315,
  [SMALL_STATE(221)] = 9357,
  [SMALL_STATE(222)] = 9399,
  [SMALL_STATE(223)] = 9439,
  [SMALL_STATE(224)] = 9483,
  [SMALL_STATE(225)] = 9513,
  [SMALL_STATE(226)] = 9550,
  [SMALL_STATE(227)] = 9587,
  [SMALL_STATE(228)] = 9624,
  [SMALL_STATE(229)] = 9661,
  [SMALL_STATE(230)] = 9698,
  [SMALL_STATE(231)] = 9735,
  [SMALL_STATE(232)] = 9772,
  [SMALL_STATE(233)] = 9809,
  [SMALL_STATE(234)] = 9846,
  [SMALL_STATE(235)] = 9883,
  [SMALL_STATE(236)] = 9920,
  [SMALL_STATE(237)] = 9957,
  [SMALL_STATE(238)] = 9994,
  [SMALL_STATE(239)] = 10033,
  [SMALL_STATE(240)] = 10072,
  [SMALL_STATE(241)] = 10109,
  [SMALL_STATE(242)] = 10146,
  [SMALL_STATE(243)] = 10185,
  [SMALL_STATE(244)] = 10222,
  [SMALL_STATE(245)] = 10261,
  [SMALL_STATE(246)] = 10298,
  [SMALL_STATE(247)] = 10335,
  [SMALL_STATE(248)] = 10372,
  [SMALL_STATE(249)] = 10393,
  [SMALL_STATE(250)] = 10430,
  [SMALL_STATE(251)] = 10467,
  [SMALL_STATE(252)] = 10504,
  [SMALL_STATE(253)] = 10525,
  [SMALL_STATE(254)] = 10562,
  [SMALL_STATE(255)] = 10599,
  [SMALL_STATE(256)] = 10636,
  [SMALL_STATE(257)] = 10675,
  [SMALL_STATE(258)] = 10712,
  [SMALL_STATE(259)] = 10749,
  [SMALL_STATE(260)] = 10788,
  [SMALL_STATE(261)] = 10825,
  [SMALL_STATE(262)] = 10864,
  [SMALL_STATE(263)] = 10901,
  [SMALL_STATE(264)] = 10938,
  [SMALL_STATE(265)] = 10975,
  [SMALL_STATE(266)] = 11012,
  [SMALL_STATE(267)] = 11049,
  [SMALL_STATE(268)] = 11070,
  [SMALL_STATE(269)] = 11107,
  [SMALL_STATE(270)] = 11144,
  [SMALL_STATE(271)] = 11181,
  [SMALL_STATE(272)] = 11218,
  [SMALL_STATE(273)] = 11255,
  [SMALL_STATE(274)] = 11294,
  [SMALL_STATE(275)] = 11333,
  [SMALL_STATE(276)] = 11370,
  [SMALL_STATE(277)] = 11391,
  [SMALL_STATE(278)] = 11428,
  [SMALL_STATE(279)] = 11465,
  [SMALL_STATE(280)] = 11502,
  [SMALL_STATE(281)] = 11541,
  [SMALL_STATE(282)] = 11578,
  [SMALL_STATE(283)] = 11617,
  [SMALL_STATE(284)] = 11654,
  [SMALL_STATE(285)] = 11691,
  [SMALL_STATE(286)] = 11728,
  [SMALL_STATE(287)] = 11765,
  [SMALL_STATE(288)] = 11802,
  [SMALL_STATE(289)] = 11839,
  [SMALL_STATE(290)] = 11876,
  [SMALL_STATE(291)] = 11913,
  [SMALL_STATE(292)] = 11950,
  [SMALL_STATE(293)] = 11987,
  [SMALL_STATE(294)] = 12024,
  [SMALL_STATE(295)] = 12061,
  [SMALL_STATE(296)] = 12100,
  [SMALL_STATE(297)] = 12120,
  [SMALL_STATE(298)] = 12154,
  [SMALL_STATE(299)] = 12174,
  [SMALL_STATE(300)] = 12208,
  [SMALL_STATE(301)] = 12230,
  [SMALL_STATE(302)] = 12266,
  [SMALL_STATE(303)] = 12285,
  [SMALL_STATE(304)] = 12312,
  [SMALL_STATE(305)] = 12339,
  [SMALL_STATE(306)] = 12380,
  [SMALL_STATE(307)] = 12410,
  [SMALL_STATE(308)] = 12440,
  [SMALL_STATE(309)] = 12470,
  [SMALL_STATE(310)] = 12500,
  [SMALL_STATE(311)] = 12519,
  [SMALL_STATE(312)] = 12546,
  [SMALL_STATE(313)] = 12565,
  [SMALL_STATE(314)] = 12584,
  [SMALL_STATE(315)] = 12603,
  [SMALL_STATE(316)] = 12630,
  [SMALL_STATE(317)] = 12657,
  [SMALL_STATE(318)] = 12684,
  [SMALL_STATE(319)] = 12711,
  [SMALL_STATE(320)] = 12738,
  [SMALL_STATE(321)] = 12765,
  [SMALL_STATE(322)] = 12792,
  [SMALL_STATE(323)] = 12811,
  [SMALL_STATE(324)] = 12838,
  [SMALL_STATE(325)] = 12857,
  [SMALL_STATE(326)] = 12884,
  [SMALL_STATE(327)] = 12911,
  [SMALL_STATE(328)] = 12930,
  [SMALL_STATE(329)] = 12957,
  [SMALL_STATE(330)] = 12976,
  [SMALL_STATE(331)] = 12995,
  [SMALL_STATE(332)] = 13023,
  [SMALL_STATE(333)] = 13039,
  [SMALL_STATE(334)] = 13055,
  [SMALL_STATE(335)] = 13071,
  [SMALL_STATE(336)] = 13099,
  [SMALL_STATE(337)] = 13127,
  [SMALL_STATE(338)] = 13153,
  [SMALL_STATE(339)] = 13181,
  [SMALL_STATE(340)] = 13207,
  [SMALL_STATE(341)] = 13235,
  [SMALL_STATE(342)] = 13261,
  [SMALL_STATE(343)] = 13287,
  [SMALL_STATE(344)] = 13302,
  [SMALL_STATE(345)] = 13329,
  [SMALL_STATE(346)] = 13344,
  [SMALL_STATE(347)] = 13371,
  [SMALL_STATE(348)] = 13396,
  [SMALL_STATE(349)] = 13411,
  [SMALL_STATE(350)] = 13426,
  [SMALL_STATE(351)] = 13441,
  [SMALL_STATE(352)] = 13456,
  [SMALL_STATE(353)] = 13471,
  [SMALL_STATE(354)] = 13488,
  [SMALL_STATE(355)] = 13515,
  [SMALL_STATE(356)] = 13532,
  [SMALL_STATE(357)] = 13549,
  [SMALL_STATE(358)] = 13564,
  [SMALL_STATE(359)] = 13589,
  [SMALL_STATE(360)] = 13616,
  [SMALL_STATE(361)] = 13643,
  [SMALL_STATE(362)] = 13668,
  [SMALL_STATE(363)] = 13693,
  [SMALL_STATE(364)] = 13718,
  [SMALL_STATE(365)] = 13735,
  [SMALL_STATE(366)] = 13760,
  [SMALL_STATE(367)] = 13783,
  [SMALL_STATE(368)] = 13810,
  [SMALL_STATE(369)] = 13825,
  [SMALL_STATE(370)] = 13850,
  [SMALL_STATE(371)] = 13875,
  [SMALL_STATE(372)] = 13900,
  [SMALL_STATE(373)] = 13925,
  [SMALL_STATE(374)] = 13948,
  [SMALL_STATE(375)] = 13963,
  [SMALL_STATE(376)] = 13988,
  [SMALL_STATE(377)] = 14017,
  [SMALL_STATE(378)] = 14042,
  [SMALL_STATE(379)] = 14067,
  [SMALL_STATE(380)] = 14082,
  [SMALL_STATE(381)] = 14097,
  [SMALL_STATE(382)] = 14112,
  [SMALL_STATE(383)] = 14127,
  [SMALL_STATE(384)] = 14154,
  [SMALL_STATE(385)] = 14179,
  [SMALL_STATE(386)] = 14206,
  [SMALL_STATE(387)] = 14235,
  [SMALL_STATE(388)] = 14262,
  [SMALL_STATE(389)] = 14289,
  [SMALL_STATE(390)] = 14309,
  [SMALL_STATE(391)] = 14329,
  [SMALL_STATE(392)] = 14347,
  [SMALL_STATE(393)] = 14369,
  [SMALL_STATE(394)] = 14393,
  [SMALL_STATE(395)] = 14417,
  [SMALL_STATE(396)] = 14433,
  [SMALL_STATE(397)] = 14449,
  [SMALL_STATE(398)] = 14475,
  [SMALL_STATE(399)] = 14501,
  [SMALL_STATE(400)] = 14523,
  [SMALL_STATE(401)] = 14547,
  [SMALL_STATE(402)] = 14569,
  [SMALL_STATE(403)] = 14593,
  [SMALL_STATE(404)] = 14619,
  [SMALL_STATE(405)] = 14637,
  [SMALL_STATE(406)] = 14663,
  [SMALL_STATE(407)] = 14681,
  [SMALL_STATE(408)] = 14699,
  [SMALL_STATE(409)] = 14725,
  [SMALL_STATE(410)] = 14743,
  [SMALL_STATE(411)] = 14761,
  [SMALL_STATE(412)] = 14775,
  [SMALL_STATE(413)] = 14793,
  [SMALL_STATE(414)] = 14807,
  [SMALL_STATE(415)] = 14828,
  [SMALL_STATE(416)] = 14841,
  [SMALL_STATE(417)] = 14858,
  [SMALL_STATE(418)] = 14875,
  [SMALL_STATE(419)] = 14896,
  [SMALL_STATE(420)] = 14911,
  [SMALL_STATE(421)] = 14928,
  [SMALL_STATE(422)] = 14943,
  [SMALL_STATE(423)] = 14966,
  [SMALL_STATE(424)] = 14987,
  [SMALL_STATE(425)] = 15008,
  [SMALL_STATE(426)] = 15031,
  [SMALL_STATE(427)] = 15054,
  [SMALL_STATE(428)] = 15077,
  [SMALL_STATE(429)] = 15094,
  [SMALL_STATE(430)] = 15115,
  [SMALL_STATE(431)] = 15136,
  [SMALL_STATE(432)] = 15159,
  [SMALL_STATE(433)] = 15180,
  [SMALL_STATE(434)] = 15203,
  [SMALL_STATE(435)] = 15226,
  [SMALL_STATE(436)] = 15247,
  [SMALL_STATE(437)] = 15268,
  [SMALL_STATE(438)] = 15287,
  [SMALL_STATE(439)] = 15308,
  [SMALL_STATE(440)] = 15325,
  [SMALL_STATE(441)] = 15346,
  [SMALL_STATE(442)] = 15369,
  [SMALL_STATE(443)] = 15392,
  [SMALL_STATE(444)] = 15405,
  [SMALL_STATE(445)] = 15428,
  [SMALL_STATE(446)] = 15445,
  [SMALL_STATE(447)] = 15466,
  [SMALL_STATE(448)] = 15489,
  [SMALL_STATE(449)] = 15506,
  [SMALL_STATE(450)] = 15527,
  [SMALL_STATE(451)] = 15546,
  [SMALL_STATE(452)] = 15565,
  [SMALL_STATE(453)] = 15586,
  [SMALL_STATE(454)] = 15606,
  [SMALL_STATE(455)] = 15622,
  [SMALL_STATE(456)] = 15642,
  [SMALL_STATE(457)] = 15662,
  [SMALL_STATE(458)] = 15678,
  [SMALL_STATE(459)] = 15694,
  [SMALL_STATE(460)] = 15710,
  [SMALL_STATE(461)] = 15722,
  [SMALL_STATE(462)] = 15742,
  [SMALL_STATE(463)] = 15758,
  [SMALL_STATE(464)] = 15774,
  [SMALL_STATE(465)] = 15786,
  [SMALL_STATE(466)] = 15806,
  [SMALL_STATE(467)] = 15822,
  [SMALL_STATE(468)] = 15838,
  [SMALL_STATE(469)] = 15854,
  [SMALL_STATE(470)] = 15870,
  [SMALL_STATE(471)] = 15890,
  [SMALL_STATE(472)] = 15906,
  [SMALL_STATE(473)] = 15926,
  [SMALL_STATE(474)] = 15942,
  [SMALL_STATE(475)] = 15962,
  [SMALL_STATE(476)] = 15982,
  [SMALL_STATE(477)] = 15998,
  [SMALL_STATE(478)] = 16011,
  [SMALL_STATE(479)] = 16028,
  [SMALL_STATE(480)] = 16039,
  [SMALL_STATE(481)] = 16052,
  [SMALL_STATE(482)] = 16069,
  [SMALL_STATE(483)] = 16084,
  [SMALL_STATE(484)] = 16101,
  [SMALL_STATE(485)] = 16116,
  [SMALL_STATE(486)] = 16133,
  [SMALL_STATE(487)] = 16150,
  [SMALL_STATE(488)] = 16165,
  [SMALL_STATE(489)] = 16182,
  [SMALL_STATE(490)] = 16197,
  [SMALL_STATE(491)] = 16214,
  [SMALL_STATE(492)] = 16225,
  [SMALL_STATE(493)] = 16240,
  [SMALL_STATE(494)] = 16257,
  [SMALL_STATE(495)] = 16274,
  [SMALL_STATE(496)] = 16291,
  [SMALL_STATE(497)] = 16308,
  [SMALL_STATE(498)] = 16319,
  [SMALL_STATE(499)] = 16336,
  [SMALL_STATE(500)] = 16353,
  [SMALL_STATE(501)] = 16366,
  [SMALL_STATE(502)] = 16383,
  [SMALL_STATE(503)] = 16400,
  [SMALL_STATE(504)] = 16417,
  [SMALL_STATE(505)] = 16434,
  [SMALL_STATE(506)] = 16451,
  [SMALL_STATE(507)] = 16464,
  [SMALL_STATE(508)] = 16481,
  [SMALL_STATE(509)] = 16496,
  [SMALL_STATE(510)] = 16513,
  [SMALL_STATE(511)] = 16530,
  [SMALL_STATE(512)] = 16547,
  [SMALL_STATE(513)] = 16562,
  [SMALL_STATE(514)] = 16573,
  [SMALL_STATE(515)] = 16586,
  [SMALL_STATE(516)] = 16603,
  [SMALL_STATE(517)] = 16614,
  [SMALL_STATE(518)] = 16631,
  [SMALL_STATE(519)] = 16646,
  [SMALL_STATE(520)] = 16659,
  [SMALL_STATE(521)] = 16670,
  [SMALL_STATE(522)] = 16685,
  [SMALL_STATE(523)] = 16700,
  [SMALL_STATE(524)] = 16717,
  [SMALL_STATE(525)] = 16734,
  [SMALL_STATE(526)] = 16751,
  [SMALL_STATE(527)] = 16764,
  [SMALL_STATE(528)] = 16781,
  [SMALL_STATE(529)] = 16798,
  [SMALL_STATE(530)] = 16815,
  [SMALL_STATE(531)] = 16829,
  [SMALL_STATE(532)] = 16843,
  [SMALL_STATE(533)] = 16857,
  [SMALL_STATE(534)] = 16871,
  [SMALL_STATE(535)] = 16885,
  [SMALL_STATE(536)] = 16899,
  [SMALL_STATE(537)] = 16913,
  [SMALL_STATE(538)] = 16927,
  [SMALL_STATE(539)] = 16941,
  [SMALL_STATE(540)] = 16955,
  [SMALL_STATE(541)] = 16969,
  [SMALL_STATE(542)] = 16983,
  [SMALL_STATE(543)] = 16997,
  [SMALL_STATE(544)] = 17011,
  [SMALL_STATE(545)] = 17025,
  [SMALL_STATE(546)] = 17035,
  [SMALL_STATE(547)] = 17049,
  [SMALL_STATE(548)] = 17063,
  [SMALL_STATE(549)] = 17077,
  [SMALL_STATE(550)] = 17091,
  [SMALL_STATE(551)] = 17105,
  [SMALL_STATE(552)] = 17115,
  [SMALL_STATE(553)] = 17129,
  [SMALL_STATE(554)] = 17143,
  [SMALL_STATE(555)] = 17157,
  [SMALL_STATE(556)] = 17171,
  [SMALL_STATE(557)] = 17181,
  [SMALL_STATE(558)] = 17195,
  [SMALL_STATE(559)] = 17209,
  [SMALL_STATE(560)] = 17223,
  [SMALL_STATE(561)] = 17237,
  [SMALL_STATE(562)] = 17247,
  [SMALL_STATE(563)] = 17261,
  [SMALL_STATE(564)] = 17275,
  [SMALL_STATE(565)] = 17289,
  [SMALL_STATE(566)] = 17303,
  [SMALL_STATE(567)] = 17317,
  [SMALL_STATE(568)] = 17331,
  [SMALL_STATE(569)] = 17341,
  [SMALL_STATE(570)] = 17355,
  [SMALL_STATE(571)] = 17369,
  [SMALL_STATE(572)] = 17383,
  [SMALL_STATE(573)] = 17397,
  [SMALL_STATE(574)] = 17411,
  [SMALL_STATE(575)] = 17425,
  [SMALL_STATE(576)] = 17439,
  [SMALL_STATE(577)] = 17453,
  [SMALL_STATE(578)] = 17467,
  [SMALL_STATE(579)] = 17481,
  [SMALL_STATE(580)] = 17491,
  [SMALL_STATE(581)] = 17505,
  [SMALL_STATE(582)] = 17519,
  [SMALL_STATE(583)] = 17533,
  [SMALL_STATE(584)] = 17547,
  [SMALL_STATE(585)] = 17561,
  [SMALL_STATE(586)] = 17575,
  [SMALL_STATE(587)] = 17589,
  [SMALL_STATE(588)] = 17599,
  [SMALL_STATE(589)] = 17613,
  [SMALL_STATE(590)] = 17627,
  [SMALL_STATE(591)] = 17641,
  [SMALL_STATE(592)] = 17655,
  [SMALL_STATE(593)] = 17669,
  [SMALL_STATE(594)] = 17683,
  [SMALL_STATE(595)] = 17697,
  [SMALL_STATE(596)] = 17711,
  [SMALL_STATE(597)] = 17725,
  [SMALL_STATE(598)] = 17739,
  [SMALL_STATE(599)] = 17749,
  [SMALL_STATE(600)] = 17763,
  [SMALL_STATE(601)] = 17777,
  [SMALL_STATE(602)] = 17787,
  [SMALL_STATE(603)] = 17801,
  [SMALL_STATE(604)] = 17815,
  [SMALL_STATE(605)] = 17829,
  [SMALL_STATE(606)] = 17843,
  [SMALL_STATE(607)] = 17857,
  [SMALL_STATE(608)] = 17871,
  [SMALL_STATE(609)] = 17885,
  [SMALL_STATE(610)] = 17899,
  [SMALL_STATE(611)] = 17913,
  [SMALL_STATE(612)] = 17927,
  [SMALL_STATE(613)] = 17941,
  [SMALL_STATE(614)] = 17955,
  [SMALL_STATE(615)] = 17969,
  [SMALL_STATE(616)] = 17983,
  [SMALL_STATE(617)] = 17997,
  [SMALL_STATE(618)] = 18011,
  [SMALL_STATE(619)] = 18025,
  [SMALL_STATE(620)] = 18039,
  [SMALL_STATE(621)] = 18053,
  [SMALL_STATE(622)] = 18067,
  [SMALL_STATE(623)] = 18081,
  [SMALL_STATE(624)] = 18095,
  [SMALL_STATE(625)] = 18109,
  [SMALL_STATE(626)] = 18123,
  [SMALL_STATE(627)] = 18137,
  [SMALL_STATE(628)] = 18151,
  [SMALL_STATE(629)] = 18165,
  [SMALL_STATE(630)] = 18175,
  [SMALL_STATE(631)] = 18185,
  [SMALL_STATE(632)] = 18199,
  [SMALL_STATE(633)] = 18213,
  [SMALL_STATE(634)] = 18227,
  [SMALL_STATE(635)] = 18241,
  [SMALL_STATE(636)] = 18255,
  [SMALL_STATE(637)] = 18269,
  [SMALL_STATE(638)] = 18283,
  [SMALL_STATE(639)] = 18297,
  [SMALL_STATE(640)] = 18311,
  [SMALL_STATE(641)] = 18325,
  [SMALL_STATE(642)] = 18339,
  [SMALL_STATE(643)] = 18353,
  [SMALL_STATE(644)] = 18367,
  [SMALL_STATE(645)] = 18381,
  [SMALL_STATE(646)] = 18395,
  [SMALL_STATE(647)] = 18409,
  [SMALL_STATE(648)] = 18423,
  [SMALL_STATE(649)] = 18437,
  [SMALL_STATE(650)] = 18449,
  [SMALL_STATE(651)] = 18463,
  [SMALL_STATE(652)] = 18473,
  [SMALL_STATE(653)] = 18487,
  [SMALL_STATE(654)] = 18501,
  [SMALL_STATE(655)] = 18515,
  [SMALL_STATE(656)] = 18529,
  [SMALL_STATE(657)] = 18543,
  [SMALL_STATE(658)] = 18557,
  [SMALL_STATE(659)] = 18571,
  [SMALL_STATE(660)] = 18585,
  [SMALL_STATE(661)] = 18599,
  [SMALL_STATE(662)] = 18613,
  [SMALL_STATE(663)] = 18627,
  [SMALL_STATE(664)] = 18641,
  [SMALL_STATE(665)] = 18655,
  [SMALL_STATE(666)] = 18669,
  [SMALL_STATE(667)] = 18683,
  [SMALL_STATE(668)] = 18697,
  [SMALL_STATE(669)] = 18711,
  [SMALL_STATE(670)] = 18722,
  [SMALL_STATE(671)] = 18733,
  [SMALL_STATE(672)] = 18744,
  [SMALL_STATE(673)] = 18755,
  [SMALL_STATE(674)] = 18764,
  [SMALL_STATE(675)] = 18775,
  [SMALL_STATE(676)] = 18784,
  [SMALL_STATE(677)] = 18795,
  [SMALL_STATE(678)] = 18804,
  [SMALL_STATE(679)] = 18813,
  [SMALL_STATE(680)] = 18824,
  [SMALL_STATE(681)] = 18833,
  [SMALL_STATE(682)] = 18842,
  [SMALL_STATE(683)] = 18853,
  [SMALL_STATE(684)] = 18862,
  [SMALL_STATE(685)] = 18871,
  [SMALL_STATE(686)] = 18882,
  [SMALL_STATE(687)] = 18891,
  [SMALL_STATE(688)] = 18902,
  [SMALL_STATE(689)] = 18911,
  [SMALL_STATE(690)] = 18920,
  [SMALL_STATE(691)] = 18931,
  [SMALL_STATE(692)] = 18940,
  [SMALL_STATE(693)] = 18951,
  [SMALL_STATE(694)] = 18960,
  [SMALL_STATE(695)] = 18971,
  [SMALL_STATE(696)] = 18980,
  [SMALL_STATE(697)] = 18989,
  [SMALL_STATE(698)] = 19000,
  [SMALL_STATE(699)] = 19011,
  [SMALL_STATE(700)] = 19022,
  [SMALL_STATE(701)] = 19033,
  [SMALL_STATE(702)] = 19042,
  [SMALL_STATE(703)] = 19051,
  [SMALL_STATE(704)] = 19062,
  [SMALL_STATE(705)] = 19071,
  [SMALL_STATE(706)] = 19080,
  [SMALL_STATE(707)] = 19091,
  [SMALL_STATE(708)] = 19102,
  [SMALL_STATE(709)] = 19111,
  [SMALL_STATE(710)] = 19120,
  [SMALL_STATE(711)] = 19129,
  [SMALL_STATE(712)] = 19138,
  [SMALL_STATE(713)] = 19149,
  [SMALL_STATE(714)] = 19160,
  [SMALL_STATE(715)] = 19169,
  [SMALL_STATE(716)] = 19178,
  [SMALL_STATE(717)] = 19189,
  [SMALL_STATE(718)] = 19198,
  [SMALL_STATE(719)] = 19209,
  [SMALL_STATE(720)] = 19218,
  [SMALL_STATE(721)] = 19229,
  [SMALL_STATE(722)] = 19240,
  [SMALL_STATE(723)] = 19249,
  [SMALL_STATE(724)] = 19258,
  [SMALL_STATE(725)] = 19267,
  [SMALL_STATE(726)] = 19278,
  [SMALL_STATE(727)] = 19289,
  [SMALL_STATE(728)] = 19297,
  [SMALL_STATE(729)] = 19305,
  [SMALL_STATE(730)] = 19313,
  [SMALL_STATE(731)] = 19321,
  [SMALL_STATE(732)] = 19329,
  [SMALL_STATE(733)] = 19337,
  [SMALL_STATE(734)] = 19345,
  [SMALL_STATE(735)] = 19353,
  [SMALL_STATE(736)] = 19361,
  [SMALL_STATE(737)] = 19369,
  [SMALL_STATE(738)] = 19377,
  [SMALL_STATE(739)] = 19385,
  [SMALL_STATE(740)] = 19393,
  [SMALL_STATE(741)] = 19401,
  [SMALL_STATE(742)] = 19409,
  [SMALL_STATE(743)] = 19417,
  [SMALL_STATE(744)] = 19425,
  [SMALL_STATE(745)] = 19433,
  [SMALL_STATE(746)] = 19441,
  [SMALL_STATE(747)] = 19449,
  [SMALL_STATE(748)] = 19457,
  [SMALL_STATE(749)] = 19465,
  [SMALL_STATE(750)] = 19473,
  [SMALL_STATE(751)] = 19481,
  [SMALL_STATE(752)] = 19489,
  [SMALL_STATE(753)] = 19497,
  [SMALL_STATE(754)] = 19505,
  [SMALL_STATE(755)] = 19513,
  [SMALL_STATE(756)] = 19521,
  [SMALL_STATE(757)] = 19529,
  [SMALL_STATE(758)] = 19537,
  [SMALL_STATE(759)] = 19545,
  [SMALL_STATE(760)] = 19553,
  [SMALL_STATE(761)] = 19561,
  [SMALL_STATE(762)] = 19569,
  [SMALL_STATE(763)] = 19577,
  [SMALL_STATE(764)] = 19585,
  [SMALL_STATE(765)] = 19593,
  [SMALL_STATE(766)] = 19601,
  [SMALL_STATE(767)] = 19609,
  [SMALL_STATE(768)] = 19617,
  [SMALL_STATE(769)] = 19625,
  [SMALL_STATE(770)] = 19633,
  [SMALL_STATE(771)] = 19641,
  [SMALL_STATE(772)] = 19649,
  [SMALL_STATE(773)] = 19657,
  [SMALL_STATE(774)] = 19665,
  [SMALL_STATE(775)] = 19673,
  [SMALL_STATE(776)] = 19681,
  [SMALL_STATE(777)] = 19689,
  [SMALL_STATE(778)] = 19697,
  [SMALL_STATE(779)] = 19705,
  [SMALL_STATE(780)] = 19713,
  [SMALL_STATE(781)] = 19721,
  [SMALL_STATE(782)] = 19729,
  [SMALL_STATE(783)] = 19737,
  [SMALL_STATE(784)] = 19745,
  [SMALL_STATE(785)] = 19753,
  [SMALL_STATE(786)] = 19761,
  [SMALL_STATE(787)] = 19769,
  [SMALL_STATE(788)] = 19777,
  [SMALL_STATE(789)] = 19785,
  [SMALL_STATE(790)] = 19793,
  [SMALL_STATE(791)] = 19801,
  [SMALL_STATE(792)] = 19809,
  [SMALL_STATE(793)] = 19817,
  [SMALL_STATE(794)] = 19825,
  [SMALL_STATE(795)] = 19833,
  [SMALL_STATE(796)] = 19841,
  [SMALL_STATE(797)] = 19849,
  [SMALL_STATE(798)] = 19857,
  [SMALL_STATE(799)] = 19865,
  [SMALL_STATE(800)] = 19873,
  [SMALL_STATE(801)] = 19881,
  [SMALL_STATE(802)] = 19889,
  [SMALL_STATE(803)] = 19897,
  [SMALL_STATE(804)] = 19905,
  [SMALL_STATE(805)] = 19913,
  [SMALL_STATE(806)] = 19921,
  [SMALL_STATE(807)] = 19929,
  [SMALL_STATE(808)] = 19937,
  [SMALL_STATE(809)] = 19945,
  [SMALL_STATE(810)] = 19953,
  [SMALL_STATE(811)] = 19961,
  [SMALL_STATE(812)] = 19969,
  [SMALL_STATE(813)] = 19977,
  [SMALL_STATE(814)] = 19985,
  [SMALL_STATE(815)] = 19993,
  [SMALL_STATE(816)] = 20001,
  [SMALL_STATE(817)] = 20009,
  [SMALL_STATE(818)] = 20017,
  [SMALL_STATE(819)] = 20025,
  [SMALL_STATE(820)] = 20033,
  [SMALL_STATE(821)] = 20041,
  [SMALL_STATE(822)] = 20049,
  [SMALL_STATE(823)] = 20057,
  [SMALL_STATE(824)] = 20065,
  [SMALL_STATE(825)] = 20073,
  [SMALL_STATE(826)] = 20081,
  [SMALL_STATE(827)] = 20089,
  [SMALL_STATE(828)] = 20097,
  [SMALL_STATE(829)] = 20105,
  [SMALL_STATE(830)] = 20113,
  [SMALL_STATE(831)] = 20121,
  [SMALL_STATE(832)] = 20129,
  [SMALL_STATE(833)] = 20137,
  [SMALL_STATE(834)] = 20145,
  [SMALL_STATE(835)] = 20153,
  [SMALL_STATE(836)] = 20161,
  [SMALL_STATE(837)] = 20169,
  [SMALL_STATE(838)] = 20177,
  [SMALL_STATE(839)] = 20185,
  [SMALL_STATE(840)] = 20193,
  [SMALL_STATE(841)] = 20201,
  [SMALL_STATE(842)] = 20209,
  [SMALL_STATE(843)] = 20217,
  [SMALL_STATE(844)] = 20225,
  [SMALL_STATE(845)] = 20233,
  [SMALL_STATE(846)] = 20241,
  [SMALL_STATE(847)] = 20249,
  [SMALL_STATE(848)] = 20257,
  [SMALL_STATE(849)] = 20265,
  [SMALL_STATE(850)] = 20273,
  [SMALL_STATE(851)] = 20281,
  [SMALL_STATE(852)] = 20289,
  [SMALL_STATE(853)] = 20297,
  [SMALL_STATE(854)] = 20305,
  [SMALL_STATE(855)] = 20313,
  [SMALL_STATE(856)] = 20321,
  [SMALL_STATE(857)] = 20329,
  [SMALL_STATE(858)] = 20337,
  [SMALL_STATE(859)] = 20345,
  [SMALL_STATE(860)] = 20353,
  [SMALL_STATE(861)] = 20361,
  [SMALL_STATE(862)] = 20369,
  [SMALL_STATE(863)] = 20377,
  [SMALL_STATE(864)] = 20385,
  [SMALL_STATE(865)] = 20393,
  [SMALL_STATE(866)] = 20401,
  [SMALL_STATE(867)] = 20409,
  [SMALL_STATE(868)] = 20417,
  [SMALL_STATE(869)] = 20425,
  [SMALL_STATE(870)] = 20433,
  [SMALL_STATE(871)] = 20441,
  [SMALL_STATE(872)] = 20449,
  [SMALL_STATE(873)] = 20457,
  [SMALL_STATE(874)] = 20465,
  [SMALL_STATE(875)] = 20473,
  [SMALL_STATE(876)] = 20481,
  [SMALL_STATE(877)] = 20489,
  [SMALL_STATE(878)] = 20497,
  [SMALL_STATE(879)] = 20505,
  [SMALL_STATE(880)] = 20513,
  [SMALL_STATE(881)] = 20521,
  [SMALL_STATE(882)] = 20529,
  [SMALL_STATE(883)] = 20537,
  [SMALL_STATE(884)] = 20545,
  [SMALL_STATE(885)] = 20553,
  [SMALL_STATE(886)] = 20561,
  [SMALL_STATE(887)] = 20569,
  [SMALL_STATE(888)] = 20577,
  [SMALL_STATE(889)] = 20585,
  [SMALL_STATE(890)] = 20593,
  [SMALL_STATE(891)] = 20601,
  [SMALL_STATE(892)] = 20609,
  [SMALL_STATE(893)] = 20617,
  [SMALL_STATE(894)] = 20625,
  [SMALL_STATE(895)] = 20633,
  [SMALL_STATE(896)] = 20641,
  [SMALL_STATE(897)] = 20649,
  [SMALL_STATE(898)] = 20657,
  [SMALL_STATE(899)] = 20665,
  [SMALL_STATE(900)] = 20673,
  [SMALL_STATE(901)] = 20681,
  [SMALL_STATE(902)] = 20689,
  [SMALL_STATE(903)] = 20697,
  [SMALL_STATE(904)] = 20705,
  [SMALL_STATE(905)] = 20713,
  [SMALL_STATE(906)] = 20721,
  [SMALL_STATE(907)] = 20729,
  [SMALL_STATE(908)] = 20737,
  [SMALL_STATE(909)] = 20745,
  [SMALL_STATE(910)] = 20753,
  [SMALL_STATE(911)] = 20761,
  [SMALL_STATE(912)] = 20769,
  [SMALL_STATE(913)] = 20777,
  [SMALL_STATE(914)] = 20785,
  [SMALL_STATE(915)] = 20793,
  [SMALL_STATE(916)] = 20801,
  [SMALL_STATE(917)] = 20809,
  [SMALL_STATE(918)] = 20817,
  [SMALL_STATE(919)] = 20825,
  [SMALL_STATE(920)] = 20833,
  [SMALL_STATE(921)] = 20841,
  [SMALL_STATE(922)] = 20849,
  [SMALL_STATE(923)] = 20857,
  [SMALL_STATE(924)] = 20865,
  [SMALL_STATE(925)] = 20873,
  [SMALL_STATE(926)] = 20881,
  [SMALL_STATE(927)] = 20889,
  [SMALL_STATE(928)] = 20897,
  [SMALL_STATE(929)] = 20905,
  [SMALL_STATE(930)] = 20913,
  [SMALL_STATE(931)] = 20921,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 22),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 22),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 21),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 21),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 17),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 17),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 32),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 32),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 40),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 40),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 12),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 12),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 6, .production_id = 27),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 7),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 7),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 7),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 7),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 14),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 28),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 37),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 8),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 41),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 23),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 25),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 7),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(670),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(930),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(523),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(707),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(767),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(496),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 38),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 38),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_param_function, 4, .production_id = 11),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 4, .production_id = 11),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 9),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 9),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unary_function, 4, .production_id = 9),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 4, .production_id = 9),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 15),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 15),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 46),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 46),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 46),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 25),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 5, .production_id = 20),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 9, .production_id = 47),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 6, .production_id = 31),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 6, .production_id = 30),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 30),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 29),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 8, .production_id = 44),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 5, .production_id = 16),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 25),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 16),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 39),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(867),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(216),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(514),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(882),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(322),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(213),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(239),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(848),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 25),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 3),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(223),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(212),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 34),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 34),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 1),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(259),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 13),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 13),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(511),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(205),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 25),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(376),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(488),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [1058] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(527),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 10),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(528),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(472),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 5),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_repeat1, 2), SHIFT_REPEAT(437),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 19),
  [1116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 19), SHIFT_REPEAT(53),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 7),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 7, .production_id = 48),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 3),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 45),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 45),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 42),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 6),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_column, 5, .production_id = 27),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 8),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_replace, 2),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 3, .production_id = 27),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 3),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 3),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 33),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 4),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_exists, 2),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 24),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 3),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_column, 4, .production_id = 35),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 18),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_column, 4),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 9),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_ownership, 3),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 5),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 24),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 7),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 4),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 4, .production_id = 36),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 24),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_schema, 3, .production_id = 26),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_view, 5),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_column, 5, .production_id = 43),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_view, 6),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_view, 5),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_object, 3),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 10),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 2),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, .production_id = 1),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function_name, 1),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 11),
  [1605] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
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
