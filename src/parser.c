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
#define STATE_COUNT 639
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 1
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 42

enum {
  sym_keyword_select = 1,
  sym_keyword_delete = 2,
  sym_keyword_create = 3,
  sym_keyword_insert = 4,
  sym_keyword_replace = 5,
  sym_keyword_update = 6,
  sym_keyword_into = 7,
  sym_keyword_values = 8,
  sym_keyword_set = 9,
  sym_keyword_from = 10,
  sym_keyword_left = 11,
  sym_keyword_right = 12,
  sym_keyword_inner = 13,
  sym_keyword_outer = 14,
  sym_keyword_join = 15,
  sym_keyword_on = 16,
  sym_keyword_where = 17,
  sym_keyword_order_by = 18,
  sym_keyword_group_by = 19,
  sym_keyword_having = 20,
  sym_keyword_desc = 21,
  sym_keyword_asc = 22,
  sym_keyword_limit = 23,
  sym_keyword_offset = 24,
  sym_keyword_primary = 25,
  sym_keyword_table = 26,
  sym_keyword_key = 27,
  sym_keyword_as = 28,
  sym_keyword_distinct = 29,
  sym_keyword_constraint = 30,
  sym_keyword_count = 31,
  sym_keyword_max = 32,
  sym_keyword_min = 33,
  sym_keyword_avg = 34,
  sym_keyword_in = 35,
  sym_keyword_and = 36,
  sym_keyword_or = 37,
  sym_keyword_not = 38,
  sym_keyword_force = 39,
  sym_keyword_use = 40,
  sym_keyword_index = 41,
  sym_keyword_for = 42,
  sym_keyword_if = 43,
  sym_keyword_exists = 44,
  sym_keyword_auto_increment = 45,
  sym_keyword_default = 46,
  sym_keyword_bigint = 47,
  sym_keyword_null = 48,
  sym_keyword_date = 49,
  sym_keyword_datetime = 50,
  sym_keyword_char = 51,
  sym_keyword_varchar = 52,
  anon_sym_LPAREN = 53,
  anon_sym_RPAREN = 54,
  sym_comment = 55,
  sym_marginalia = 56,
  anon_sym_SEMI = 57,
  anon_sym_DOT = 58,
  anon_sym_COMMA = 59,
  anon_sym_EQ = 60,
  anon_sym_STAR = 61,
  anon_sym_PLUS = 62,
  anon_sym_DASH = 63,
  anon_sym_SLASH = 64,
  anon_sym_PERCENT = 65,
  anon_sym_CARET = 66,
  anon_sym_LT = 67,
  anon_sym_LT_EQ = 68,
  anon_sym_BANG_EQ = 69,
  anon_sym_GT_EQ = 70,
  anon_sym_GT = 71,
  anon_sym_SQUOTE = 72,
  aux_sym__literal_string_token1 = 73,
  anon_sym_DQUOTE = 74,
  aux_sym__literal_string_token2 = 75,
  sym__number = 76,
  anon_sym_BQUOTE = 77,
  sym__identifier = 78,
  sym_program = 79,
  sym__not_null = 80,
  sym__primary_key = 81,
  sym__if_not_exists = 82,
  sym__default_null = 83,
  sym_direction = 84,
  sym__type = 85,
  sym_bigint = 86,
  sym_char = 87,
  sym_varchar = 88,
  sym_statement = 89,
  sym__select_statement = 90,
  sym_select = 91,
  sym_select_expression = 92,
  sym__delete_statement = 93,
  sym__delete_from = 94,
  sym_delete = 95,
  sym__create_statement = 96,
  sym_create = 97,
  sym_table_reference = 98,
  sym__insert_statement = 99,
  sym_insert = 100,
  sym_insert_expression = 101,
  sym__column_list_without_order = 102,
  sym__column_without_order = 103,
  sym__update_statement = 104,
  sym_update = 105,
  sym_update_expression = 106,
  sym__single_table_update = 107,
  sym__multi_table_update = 108,
  sym__table_references = 109,
  sym_assignment_list = 110,
  sym_table_options = 111,
  sym_table_option = 112,
  sym_column_definitions = 113,
  sym_column_definition = 114,
  sym_constraints = 115,
  sym_constraint = 116,
  sym__constraint_literal = 117,
  sym__primary_key_constraint = 118,
  sym__key_constraint = 119,
  sym_column_list = 120,
  sym_column = 121,
  sym__field_list = 122,
  sym_field = 123,
  sym_function_call = 124,
  sym__unary_function = 125,
  sym__count_function = 126,
  sym__multi_param_function = 127,
  sym__function_param = 128,
  sym__function_params = 129,
  sym__unary_function_name = 130,
  sym__function_name = 131,
  sym_from = 132,
  sym_table_expression = 133,
  sym_index_hint = 134,
  sym_join = 135,
  sym_where = 136,
  sym_group_by = 137,
  sym__having = 138,
  sym_order_by = 139,
  sym_order_expression = 140,
  sym_limit = 141,
  sym_offset = 142,
  sym_where_expression = 143,
  sym_predicate = 144,
  sym__expression = 145,
  sym_subquery = 146,
  sym_list = 147,
  sym_literal = 148,
  sym__literal_string = 149,
  sym_identifier = 150,
  aux_sym__column_list_without_order_repeat1 = 151,
  aux_sym__table_references_repeat1 = 152,
  aux_sym_assignment_list_repeat1 = 153,
  aux_sym_table_options_repeat1 = 154,
  aux_sym_column_definitions_repeat1 = 155,
  aux_sym_constraints_repeat1 = 156,
  aux_sym_column_list_repeat1 = 157,
  aux_sym__field_list_repeat1 = 158,
  aux_sym__function_params_repeat1 = 159,
  aux_sym_from_repeat1 = 160,
  aux_sym_list_repeat1 = 161,
  anon_alias_sym_if = 162,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_delete] = "keyword_delete",
  [sym_keyword_create] = "keyword_create",
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
  [sym_keyword_table] = "keyword_table",
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
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
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
  [sym__not_null] = "_not_null",
  [sym__primary_key] = "_primary_key",
  [sym__if_not_exists] = "_if_not_exists",
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
  [sym_create] = "create",
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
  [sym_keyword_create] = sym_keyword_create,
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
  [sym_keyword_table] = sym_keyword_table,
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__not_null] = sym__not_null,
  [sym__primary_key] = sym__primary_key,
  [sym__if_not_exists] = sym__if_not_exists,
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
  [sym_create] = sym_create,
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
  [sym_keyword_create] = {
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
  [sym_keyword_table] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym__not_null] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_key] = {
    .visible = false,
    .named = true,
  },
  [sym__if_not_exists] = {
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
  [sym_create] = {
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
  field_operator = 5,
  field_parameter = 6,
  field_right = 7,
  field_schema = 8,
  field_size = 9,
  field_table_alias = 10,
  field_type = 11,
  field_value = 12,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_index_name] = "index_name",
  [field_left] = "left",
  [field_name] = "name",
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
  [24] = {.index = 46, .length = 2},
  [25] = {.index = 48, .length = 1},
  [26] = {.index = 49, .length = 3},
  [27] = {.index = 52, .length = 3},
  [28] = {.index = 55, .length = 3},
  [29] = {.index = 58, .length = 3},
  [30] = {.index = 61, .length = 4},
  [31] = {.index = 65, .length = 1},
  [32] = {.index = 66, .length = 2},
  [33] = {.index = 68, .length = 3},
  [34] = {.index = 71, .length = 2},
  [35] = {.index = 73, .length = 3},
  [36] = {.index = 76, .length = 4},
  [37] = {.index = 80, .length = 1},
  [38] = {.index = 81, .length = 3},
  [39] = {.index = 84, .length = 1},
  [40] = {.index = 85, .length = 1},
  [41] = {.index = 86, .length = 3},
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
    {field_name, 0},
    {field_type, 1},
  [48] =
    {field_name, 1, .inherited = true},
  [49] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 3},
  [52] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 3},
  [55] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2},
  [58] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [61] =
    {field_alias, 5},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [65] =
    {field_name, 0, .inherited = true},
  [66] =
    {field_name, 0},
    {field_value, 2},
  [68] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 4},
  [71] =
    {field_name, 0},
    {field_parameter, 4},
  [73] =
    {field_alias, 6},
    {field_name, 0},
    {field_parameter, 3},
  [76] =
    {field_alias, 6},
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [80] =
    {field_index_name, 5},
  [81] =
    {field_alias, 7},
    {field_name, 0},
    {field_parameter, 4},
  [84] =
    {field_name, 1},
  [85] =
    {field_size, 2},
  [86] =
    {field_alias, 8},
    {field_name, 0},
    {field_parameter, 4},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_if,
  },
  [13] = {
    [0] = sym_identifier,
  },
  [40] = {
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
      if (eof) ADVANCE(448);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == 'B') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(223);
      if (lookahead == 'F') ADVANCE(162);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(97);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'K') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'S') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == 'U') ADVANCE(167);
      if (lookahead == 'V') ADVANCE(39);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'j') ADVANCE(354);
      if (lookahead == 'k') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(359);
      if (lookahead == 'v') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(447)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(544);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(141);
      if (lookahead == 'B') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(142);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(189);
      if (lookahead == 'V') ADVANCE(39);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'j') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(382);
      if (lookahead == 'v') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(141);
      if (lookahead == 'D') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(165);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == 'w') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(430)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'O') ADVANCE(652);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(432)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == 'w') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(433)
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'G') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(632);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(599);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(619);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead == 'j') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'G') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(427)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(429)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'O') ADVANCE(652);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(431)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'D') ADVANCE(620);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead == 'M') ADVANCE(589);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(741);
      if (lookahead == 'd') ADVANCE(716);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(425)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead == 'M') ADVANCE(589);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead == 'M') ADVANCE(589);
      if (lookahead == 'S') ADVANCE(601);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(685);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(435)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'F') ADVANCE(659);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(439)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'A') ADVANCE(663);
      if (lookahead == 'D') ADVANCE(610);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'd') ADVANCE(706);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(438)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(444)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'G') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(638);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(599);
      if (lookahead == 'O') ADVANCE(654);
      if (lookahead == 'R') ADVANCE(619);
      if (lookahead == 'U') ADVANCE(665);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == 'j') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(434)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'C') ADVANCE(178);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'U') ADVANCE(167);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'j') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'G') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(638);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(599);
      if (lookahead == 'O') ADVANCE(654);
      if (lookahead == 'R') ADVANCE(619);
      if (lookahead == 'U') ADVANCE(665);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == 'j') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(436)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(654);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(440)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'O') ADVANCE(636);
      if (lookahead == 'U') ADVANCE(665);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(441)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'D') ADVANCE(607);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'd') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(442)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(654);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(443)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(648);
      if (lookahead == 'K') ADVANCE(605);
      if (lookahead == 'P') ADVANCE(660);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'c') ADVANCE(744);
      if (lookahead == 'k') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(437)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'O') ADVANCE(636);
      if (lookahead == 'U') ADVANCE(665);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(446)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(445)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(562);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(220);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(221);
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == 'E') ADVANCE(186);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(218);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(171);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(176);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(174);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(213);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(215);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 51:
      if (lookahead == 'B') ADVANCE(226);
      END_STATE();
    case 52:
      if (lookahead == 'B') ADVANCE(227);
      END_STATE();
    case 53:
      if (lookahead == 'B') ADVANCE(132);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(479);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(477);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(202);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(204);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'C') ADVANCE(183);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(512);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 65:
      if (lookahead == 'D') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(224);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(523);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(537);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(521);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(486);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(472);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(452);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(451);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(455);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(454);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(539);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(186);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(201);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'F') ADVANCE(529);
      if (lookahead == 'N') ADVANCE(507);
      END_STATE();
    case 98:
      if (lookahead == 'F') ADVANCE(193);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(470);
      if (lookahead == 'R') ADVANCE(515);
      if (lookahead == 'U') ADVANCE(212);
      END_STATE();
    case 100:
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(514);
      END_STATE();
    case 101:
      if (lookahead == 'F') ADVANCE(196);
      END_STATE();
    case 102:
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 103:
      if (lookahead == 'G') ADVANCE(504);
      END_STATE();
    case 104:
      if (lookahead == 'G') ADVANCE(476);
      END_STATE();
    case 105:
      if (lookahead == 'G') ADVANCE(110);
      END_STATE();
    case 106:
      if (lookahead == 'G') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'H') ADVANCE(44);
      END_STATE();
    case 108:
      if (lookahead == 'H') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 109:
      if (lookahead == 'H') ADVANCE(83);
      END_STATE();
    case 110:
      if (lookahead == 'H') ADVANCE(199);
      END_STATE();
    case 111:
      if (lookahead == 'H') ADVANCE(47);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 113:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 114:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 117:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 118:
      if (lookahead == 'I') ADVANCE(149);
      END_STATE();
    case 119:
      if (lookahead == 'I') ADVANCE(156);
      END_STATE();
    case 120:
      if (lookahead == 'I') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'I') ADVANCE(198);
      END_STATE();
    case 122:
      if (lookahead == 'I') ADVANCE(152);
      END_STATE();
    case 123:
      if (lookahead == 'I') ADVANCE(192);
      END_STATE();
    case 124:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(536);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 128:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 129:
      if (lookahead == 'L') ADVANCE(45);
      END_STATE();
    case 130:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 131:
      if (lookahead == 'L') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(458);
      END_STATE();
    case 132:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 133:
      if (lookahead == 'L') ADVANCE(203);
      END_STATE();
    case 134:
      if (lookahead == 'M') ADVANCE(459);
      END_STATE();
    case 135:
      if (lookahead == 'M') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 137:
      if (lookahead == 'M') ADVANCE(79);
      END_STATE();
    case 138:
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(489);
      if (lookahead == 'U') ADVANCE(209);
      if (lookahead == 'V') ADVANCE(103);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(507);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(470);
      if (lookahead == 'R') ADVANCE(515);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(470);
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(502);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(468);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(506);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(197);
      END_STATE();
    case 152:
      if (lookahead == 'N') ADVANCE(200);
      END_STATE();
    case 153:
      if (lookahead == 'N') ADVANCE(205);
      END_STATE();
    case 154:
      if (lookahead == 'N') ADVANCE(206);
      END_STATE();
    case 155:
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'U') ADVANCE(151);
      END_STATE();
    case 156:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(217);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(228);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(456);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 161:
      if (lookahead == 'O') ADVANCE(116);
      END_STATE();
    case 162:
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(160);
      END_STATE();
    case 163:
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'U') ADVANCE(126);
      END_STATE();
    case 164:
      if (lookahead == 'O') ADVANCE(184);
      if (lookahead == 'R') ADVANCE(160);
      END_STATE();
    case 165:
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(160);
      END_STATE();
    case 166:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 167:
      if (lookahead == 'P') ADVANCE(65);
      if (lookahead == 'S') ADVANCE(70);
      END_STATE();
    case 168:
      if (lookahead == 'P') ADVANCE(129);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(515);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(527);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(540);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(465);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(467);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(541);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(526);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(225);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 178:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 179:
      if (lookahead == 'R') ADVANCE(115);
      END_STATE();
    case 180:
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 181:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 182:
      if (lookahead == 'R') ADVANCE(207);
      END_STATE();
    case 183:
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 184:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 185:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 186:
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 187:
      if (lookahead == 'S') ADVANCE(531);
      END_STATE();
    case 188:
      if (lookahead == 'S') ADVANCE(457);
      END_STATE();
    case 189:
      if (lookahead == 'S') ADVANCE(70);
      END_STATE();
    case 190:
      if (lookahead == 'S') ADVANCE(216);
      END_STATE();
    case 191:
      if (lookahead == 'S') ADVANCE(211);
      END_STATE();
    case 192:
      if (lookahead == 'S') ADVANCE(208);
      END_STATE();
    case 193:
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(520);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(458);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(461);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(498);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(481);
      END_STATE();
    case 199:
      if (lookahead == 'T') ADVANCE(463);
      END_STATE();
    case 200:
      if (lookahead == 'T') ADVANCE(535);
      END_STATE();
    case 201:
      if (lookahead == 'T') ADVANCE(483);
      END_STATE();
    case 202:
      if (lookahead == 'T') ADVANCE(449);
      END_STATE();
    case 203:
      if (lookahead == 'T') ADVANCE(533);
      END_STATE();
    case 204:
      if (lookahead == 'T') ADVANCE(494);
      END_STATE();
    case 205:
      if (lookahead == 'T') ADVANCE(496);
      END_STATE();
    case 206:
      if (lookahead == 'T') ADVANCE(532);
      END_STATE();
    case 207:
      if (lookahead == 'T') ADVANCE(453);
      END_STATE();
    case 208:
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 209:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 210:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 211:
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 212:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 213:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 214:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 215:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 216:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 217:
      if (lookahead == 'U') ADVANCE(166);
      END_STATE();
    case 218:
      if (lookahead == 'U') ADVANCE(133);
      END_STATE();
    case 219:
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 220:
      if (lookahead == 'V') ADVANCE(118);
      END_STATE();
    case 221:
      if (lookahead == 'X') ADVANCE(500);
      END_STATE();
    case 222:
      if (lookahead == 'X') ADVANCE(525);
      END_STATE();
    case 223:
      if (lookahead == 'X') ADVANCE(123);
      END_STATE();
    case 224:
      if (lookahead == 'Y') ADVANCE(487);
      END_STATE();
    case 225:
      if (lookahead == 'Y') ADVANCE(484);
      END_STATE();
    case 226:
      if (lookahead == 'Y') ADVANCE(475);
      END_STATE();
    case 227:
      if (lookahead == 'Y') ADVANCE(474);
      END_STATE();
    case 228:
      if (lookahead == '_') ADVANCE(120);
      END_STATE();
    case 229:
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 244:
      if (lookahead == 'b') ADVANCE(419);
      END_STATE();
    case 245:
      if (lookahead == 'b') ADVANCE(420);
      END_STATE();
    case 246:
      if (lookahead == 'b') ADVANCE(325);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 290:
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 291:
      if (lookahead == 'f') ADVANCE(386);
      END_STATE();
    case 292:
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 293:
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 294:
      if (lookahead == 'f') ADVANCE(389);
      END_STATE();
    case 295:
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 296:
      if (lookahead == 'g') ADVANCE(504);
      END_STATE();
    case 297:
      if (lookahead == 'g') ADVANCE(476);
      END_STATE();
    case 298:
      if (lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 299:
      if (lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 300:
      if (lookahead == 'h') ADVANCE(237);
      END_STATE();
    case 301:
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 302:
      if (lookahead == 'h') ADVANCE(276);
      END_STATE();
    case 303:
      if (lookahead == 'h') ADVANCE(392);
      END_STATE();
    case 304:
      if (lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(459);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 329:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 330:
      if (lookahead == 'm') ADVANCE(272);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead == 'u') ADVANCE(402);
      if (lookahead == 'v') ADVANCE(296);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 410:
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 411:
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 412:
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 413:
      if (lookahead == 'v') ADVANCE(311);
      END_STATE();
    case 414:
      if (lookahead == 'x') ADVANCE(500);
      END_STATE();
    case 415:
      if (lookahead == 'x') ADVANCE(525);
      END_STATE();
    case 416:
      if (lookahead == 'x') ADVANCE(316);
      END_STATE();
    case 417:
      if (lookahead == 'y') ADVANCE(487);
      END_STATE();
    case 418:
      if (lookahead == 'y') ADVANCE(484);
      END_STATE();
    case 419:
      if (lookahead == 'y') ADVANCE(475);
      END_STATE();
    case 420:
      if (lookahead == 'y') ADVANCE(474);
      END_STATE();
    case 421:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'C') ADVANCE(178);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'U') ADVANCE(167);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'j') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(302);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(141);
      if (lookahead == 'B') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(142);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(189);
      if (lookahead == 'V') ADVANCE(39);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'j') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(382);
      if (lookahead == 'v') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(302);
      END_STATE();
    case 423:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'G') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(632);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(599);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(619);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead == 'j') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 424:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead == 'M') ADVANCE(589);
      if (lookahead == 'S') ADVANCE(601);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(685);
      if (lookahead == 's') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 425:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(425)
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'D') ADVANCE(620);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead == 'M') ADVANCE(589);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(741);
      if (lookahead == 'd') ADVANCE(716);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 426:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead == 'M') ADVANCE(589);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(427)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'G') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 429:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(429)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 430:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(141);
      if (lookahead == 'D') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(165);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == 'w') ADVANCE(302);
      END_STATE();
    case 431:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(431)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'O') ADVANCE(652);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 432:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(432)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'O') ADVANCE(652);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 433:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(433)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == 'w') ADVANCE(302);
      END_STATE();
    case 434:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(434)
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'G') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(638);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(599);
      if (lookahead == 'O') ADVANCE(654);
      if (lookahead == 'R') ADVANCE(619);
      if (lookahead == 'U') ADVANCE(665);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == 'j') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 435:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(435)
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 436:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(436)
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'G') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(638);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(599);
      if (lookahead == 'O') ADVANCE(654);
      if (lookahead == 'R') ADVANCE(619);
      if (lookahead == 'U') ADVANCE(665);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == 'j') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 437:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(437)
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(648);
      if (lookahead == 'K') ADVANCE(605);
      if (lookahead == 'P') ADVANCE(660);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'c') ADVANCE(744);
      if (lookahead == 'k') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(756);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 438:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(438)
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'A') ADVANCE(663);
      if (lookahead == 'D') ADVANCE(610);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'd') ADVANCE(706);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 439:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(439)
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'F') ADVANCE(659);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 440:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(440)
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(654);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 441:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(441)
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'O') ADVANCE(636);
      if (lookahead == 'U') ADVANCE(665);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 442:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(442)
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'D') ADVANCE(607);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'd') ADVANCE(703);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 443:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(443)
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(654);
      if (lookahead == 'W') ADVANCE(616);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 444:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(444)
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 445:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(445)
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 446:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(446)
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'O') ADVANCE(636);
      if (lookahead == 'U') ADVANCE(665);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 447:
      if (eof) ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(447)
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == '(') ADVANCE(542);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == ';') ADVANCE(550);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(564);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == 'B') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(223);
      if (lookahead == 'F') ADVANCE(162);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(97);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'K') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'S') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == 'U') ADVANCE(167);
      if (lookahead == 'V') ADVANCE(39);
      if (lookahead == 'W') ADVANCE(109);
      if (lookahead == '^') ADVANCE(559);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'j') ADVANCE(354);
      if (lookahead == 'k') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(359);
      if (lookahead == 'v') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_outer);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(479);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_keyword_char);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_keyword_varchar);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(582);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(573);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '*') ADVANCE(576);
      if (lookahead != 0) ADVANCE(577);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(563);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead == '/') ADVANCE(548);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(546);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '/') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(573);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(573);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '/') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(575);
      if (lookahead == '*') ADVANCE(576);
      if (lookahead != 0) ADVANCE(577);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '*') ADVANCE(576);
      if (lookahead == '/') ADVANCE(547);
      if (lookahead != 0) ADVANCE(577);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '*') ADVANCE(576);
      if (lookahead != 0) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(545);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(582);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(582);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(581);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(582);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(682);
      if (lookahead == 'I') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(611);
      if (lookahead == 'I') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(597);
      if (lookahead == 'S') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(778);
      if (lookahead == 'i') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == 'i') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead == 's') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
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
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 13},
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
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 24},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 18},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 25},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 16},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 25},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 18},
  [167] = {.lex_state = 18},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 18},
  [170] = {.lex_state = 18},
  [171] = {.lex_state = 18},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 18},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 18},
  [179] = {.lex_state = 18},
  [180] = {.lex_state = 18},
  [181] = {.lex_state = 18},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 18},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 18},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 24},
  [209] = {.lex_state = 24},
  [210] = {.lex_state = 24},
  [211] = {.lex_state = 24},
  [212] = {.lex_state = 33},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 21},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 21},
  [225] = {.lex_state = 21},
  [226] = {.lex_state = 21},
  [227] = {.lex_state = 21},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 29},
  [236] = {.lex_state = 30},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 31},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 29},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 29},
  [245] = {.lex_state = 29},
  [246] = {.lex_state = 31},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 20},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 20},
  [256] = {.lex_state = 20},
  [257] = {.lex_state = 31},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 31},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 32},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 30},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 22},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 32},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 30},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 30},
  [286] = {.lex_state = 22},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 22},
  [292] = {.lex_state = 35},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 22},
  [295] = {.lex_state = 22},
  [296] = {.lex_state = 34},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 22},
  [304] = {.lex_state = 22},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 22},
  [307] = {.lex_state = 22},
  [308] = {.lex_state = 34},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 22},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 18},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 18},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 18},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 18},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 31},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 31},
  [341] = {.lex_state = 18},
  [342] = {.lex_state = 18},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 18},
  [345] = {.lex_state = 24},
  [346] = {.lex_state = 31},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 31},
  [351] = {.lex_state = 31},
  [352] = {.lex_state = 18},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 24},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 24},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 24},
  [361] = {.lex_state = 31},
  [362] = {.lex_state = 18},
  [363] = {.lex_state = 31},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 18},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 18},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 18},
  [379] = {.lex_state = 18},
  [380] = {.lex_state = 18},
  [381] = {.lex_state = 18},
  [382] = {.lex_state = 18},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 18},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 18},
  [390] = {.lex_state = 18},
  [391] = {.lex_state = 18},
  [392] = {.lex_state = 18},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 18},
  [395] = {.lex_state = 18},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 18},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 18},
  [401] = {.lex_state = 18},
  [402] = {.lex_state = 18},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 18},
  [406] = {.lex_state = 18},
  [407] = {.lex_state = 18},
  [408] = {.lex_state = 18},
  [409] = {.lex_state = 18},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 18},
  [412] = {.lex_state = 18},
  [413] = {.lex_state = 18},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 18},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 18},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 18},
  [421] = {.lex_state = 18},
  [422] = {.lex_state = 18},
  [423] = {.lex_state = 18},
  [424] = {.lex_state = 18},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 18},
  [428] = {.lex_state = 18},
  [429] = {.lex_state = 18},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 18},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 18},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 18},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 18},
  [440] = {.lex_state = 18},
  [441] = {.lex_state = 18},
  [442] = {.lex_state = 18},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 18},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 18},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 18},
  [449] = {.lex_state = 18},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 18},
  [452] = {.lex_state = 18},
  [453] = {.lex_state = 18},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 18},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 18},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 18},
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
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
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
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 7},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
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
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 24},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 18},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 579},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
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
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 570},
  [599] = {.lex_state = 579},
  [600] = {.lex_state = 18},
  [601] = {.lex_state = 570},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 570},
  [610] = {.lex_state = 579},
  [611] = {.lex_state = 18},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 18},
  [619] = {.lex_state = 18},
  [620] = {.lex_state = 18},
  [621] = {.lex_state = 18},
  [622] = {.lex_state = 18},
  [623] = {.lex_state = 18},
  [624] = {.lex_state = 18},
  [625] = {.lex_state = 18},
  [626] = {.lex_state = 18},
  [627] = {.lex_state = 18},
  [628] = {.lex_state = 18},
  [629] = {.lex_state = 18},
  [630] = {.lex_state = 18},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 24},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_delete] = ACTIONS(1),
    [sym_keyword_create] = ACTIONS(1),
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
    [sym_keyword_table] = ACTIONS(1),
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_program] = STATE(616),
    [sym_statement] = STATE(615),
    [sym__select_statement] = STATE(614),
    [sym_select] = STATE(415),
    [sym__delete_statement] = STATE(614),
    [sym_delete] = STATE(473),
    [sym__create_statement] = STATE(614),
    [sym_create] = STATE(607),
    [sym__insert_statement] = STATE(614),
    [sym_insert] = STATE(606),
    [sym__update_statement] = STATE(614),
    [sym_update] = STATE(605),
    [sym_keyword_select] = ACTIONS(5),
    [sym_keyword_delete] = ACTIONS(7),
    [sym_keyword_create] = ACTIONS(9),
    [sym_keyword_insert] = ACTIONS(11),
    [sym_keyword_replace] = ACTIONS(11),
    [sym_keyword_update] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 7,
      sym_keyword_in,
      sym_keyword_or,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 36,
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
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_primary,
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_bigint,
      sym_keyword_datetime,
      sym_keyword_char,
      sym_keyword_varchar,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [52] = 3,
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
    ACTIONS(19), 36,
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
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_primary,
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_bigint,
      sym_keyword_datetime,
      sym_keyword_char,
      sym_keyword_varchar,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [104] = 8,
    ACTIONS(27), 1,
      sym_keyword_as,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 12,
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
    ACTIONS(23), 13,
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
  [153] = 8,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(39), 1,
      sym_keyword_as,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(29), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(37), 12,
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
    ACTIONS(35), 13,
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
  [202] = 3,
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
  [240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 14,
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
    ACTIONS(17), 15,
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
  [278] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(47), 1,
      sym_keyword_as,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 12,
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
    ACTIONS(43), 13,
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
  [324] = 23,
    ACTIONS(49), 1,
      sym_keyword_select,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(134), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(455), 1,
      sym_select,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(617), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [401] = 23,
    ACTIONS(49), 1,
      sym_keyword_select,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(134), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(455), 1,
      sym_select,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(608), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [478] = 23,
    ACTIONS(49), 1,
      sym_keyword_select,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(134), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(455), 1,
      sym_select,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(557), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [555] = 22,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    ACTIONS(69), 1,
      sym_keyword_distinct,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(509), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [629] = 22,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(512), 1,
      sym__function_params,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(485), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [703] = 22,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_keyword_distinct,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(526), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [777] = 22,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(548), 1,
      sym__function_params,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(485), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [851] = 22,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(520), 1,
      sym__function_params,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(485), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [925] = 22,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    ACTIONS(73), 1,
      sym_keyword_distinct,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(518), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [999] = 21,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(515), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1070] = 21,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(517), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1141] = 21,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(567), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1212] = 21,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(511), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1283] = 21,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(484), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1354] = 21,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(547), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1425] = 21,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_literal,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(140), 2,
      sym_field,
      sym_predicate,
    STATE(550), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(159), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1496] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1530] = 3,
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
    ACTIONS(85), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1564] = 8,
    ACTIONS(89), 1,
      sym_keyword_as,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 12,
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
  [1608] = 3,
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
    ACTIONS(97), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1642] = 3,
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
    ACTIONS(101), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1676] = 4,
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
    ACTIONS(109), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(105), 10,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1712] = 8,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(111), 1,
      sym_keyword_as,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 11,
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
  [1756] = 4,
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
    ACTIONS(109), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(115), 10,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1792] = 8,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(111), 1,
      sym_keyword_as,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 12,
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
  [1836] = 4,
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
    ACTIONS(109), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 10,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1872] = 3,
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
    ACTIONS(121), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1906] = 3,
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
    ACTIONS(125), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1940] = 4,
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
    ACTIONS(109), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(129), 10,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1976] = 8,
    ACTIONS(89), 1,
      sym_keyword_as,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
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
  [2020] = 3,
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
    ACTIONS(133), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2054] = 3,
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
    ACTIONS(137), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2088] = 3,
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
    ACTIONS(141), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2122] = 3,
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
    ACTIONS(145), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2156] = 8,
    ACTIONS(155), 1,
      anon_sym_PLUS,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 15,
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
  [2200] = 11,
    ACTIONS(151), 1,
      sym_keyword_or,
    ACTIONS(155), 1,
      anon_sym_PLUS,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_CARET,
    ACTIONS(163), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 11,
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
  [2250] = 9,
    ACTIONS(155), 1,
      anon_sym_PLUS,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_CARET,
    ACTIONS(163), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 15,
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
  [2296] = 4,
    ACTIONS(161), 1,
      anon_sym_CARET,
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
    ACTIONS(149), 18,
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
  [2332] = 3,
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
    ACTIONS(169), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2366] = 3,
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
    ACTIONS(173), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2400] = 6,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 16,
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
  [2440] = 3,
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
    ACTIONS(149), 19,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2474] = 7,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(177), 1,
      sym_keyword_as,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 12,
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
  [2515] = 3,
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
  [2548] = 8,
    ACTIONS(89), 1,
      sym_keyword_as,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
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
  [2591] = 3,
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
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [2624] = 21,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(181), 1,
      sym_keyword_distinct,
    ACTIONS(183), 1,
      sym_keyword_count,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(233), 1,
      sym_identifier,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(383), 1,
      sym_select_expression,
    STATE(564), 1,
      sym__function_name,
    STATE(566), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(316), 2,
      sym_field,
      sym_function_call,
    STATE(388), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2693] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 11,
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
    ACTIONS(15), 13,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [2726] = 8,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(111), 1,
      sym_keyword_as,
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 11,
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
  [2769] = 21,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(183), 1,
      sym_keyword_count,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__literal_string,
    STATE(233), 1,
      sym_identifier,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(447), 1,
      sym_select_expression,
    STATE(564), 1,
      sym__function_name,
    STATE(566), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(316), 2,
      sym_field,
      sym_function_call,
    STATE(388), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2838] = 7,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(177), 1,
      sym_keyword_as,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 9,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 11,
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
  [2879] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 20,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_offset,
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
  [2912] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 10,
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
    ACTIONS(15), 14,
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
  [2945] = 3,
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
      sym_keyword_offset,
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
  [2978] = 8,
    ACTIONS(195), 1,
      sym_keyword_as,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(201), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 10,
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
  [3020] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 19,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
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
  [3052] = 8,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(201), 1,
      sym__identifier,
    ACTIONS(203), 1,
      sym_keyword_as,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 10,
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
  [3094] = 20,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(207), 1,
      sym_keyword_count,
    ACTIONS(209), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(218), 1,
      sym_identifier,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(425), 1,
      sym_order_expression,
    STATE(636), 1,
      sym__unary_function_name,
    STATE(637), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(287), 2,
      sym_field,
      sym_function_call,
    STATE(299), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [3160] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 19,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
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
  [3192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 19,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
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
  [3224] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 19,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
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
  [3256] = 20,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_BQUOTE,
    ACTIONS(217), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(286), 1,
      sym_identifier,
    STATE(507), 1,
      sym_select_expression,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(388), 2,
      sym__field_list,
      sym_literal,
    STATE(396), 2,
      sym_field,
      sym_function_call,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [3322] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 10,
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
    ACTIONS(15), 13,
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
  [3354] = 8,
    ACTIONS(195), 1,
      sym_keyword_as,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(201), 1,
      sym__identifier,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 11,
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
  [3396] = 3,
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
  [3428] = 8,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(201), 1,
      sym__identifier,
    ACTIONS(203), 1,
      sym_keyword_as,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
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
  [3470] = 7,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(177), 1,
      sym_keyword_as,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 8,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 11,
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
  [3510] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 19,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
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
  [3542] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 19,
      sym_keyword_from,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
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
  [3574] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [3605] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [3636] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [3667] = 7,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(201), 1,
      sym__identifier,
    ACTIONS(223), 1,
      sym_keyword_as,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 7,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 11,
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
  [3706] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [3737] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [3768] = 3,
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
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [3799] = 3,
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
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [3830] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 9,
      sym_keyword_as,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
    ACTIONS(15), 13,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [3861] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 10,
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
    ACTIONS(15), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_BQUOTE,
  [3892] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [3923] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(123), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [3954] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [3985] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [4016] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [4047] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(143), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [4078] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [4109] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [4140] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [4171] = 7,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(201), 1,
      sym__identifier,
    ACTIONS(223), 1,
      sym_keyword_as,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 8,
      sym_keyword_where,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 10,
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
  [4210] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 17,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [4241] = 6,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(225), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(107), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 10,
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
  [4277] = 4,
    ACTIONS(229), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 14,
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
  [4308] = 6,
    ACTIONS(229), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 12,
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
  [4343] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(109), 10,
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
  [4374] = 8,
    ACTIONS(229), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    ACTIONS(237), 1,
      anon_sym_PLUS,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 11,
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
  [4413] = 11,
    ACTIONS(151), 1,
      sym_keyword_or,
    ACTIONS(229), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
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
    ACTIONS(231), 2,
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
    ACTIONS(149), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4458] = 8,
    ACTIONS(249), 1,
      anon_sym_PLUS,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(253), 1,
      anon_sym_SLASH,
    ACTIONS(255), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 11,
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
  [4497] = 9,
    ACTIONS(229), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
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
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 10,
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
  [4538] = 11,
    ACTIONS(151), 1,
      sym_keyword_or,
    ACTIONS(249), 1,
      anon_sym_PLUS,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(253), 1,
      anon_sym_SLASH,
    ACTIONS(255), 1,
      anon_sym_CARET,
    ACTIONS(257), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4583] = 9,
    ACTIONS(249), 1,
      anon_sym_PLUS,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(253), 1,
      anon_sym_SLASH,
    ACTIONS(255), 1,
      anon_sym_CARET,
    ACTIONS(257), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 10,
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
  [4624] = 12,
    ACTIONS(249), 1,
      anon_sym_PLUS,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(253), 1,
      anon_sym_SLASH,
    ACTIONS(255), 1,
      anon_sym_CARET,
    ACTIONS(257), 1,
      sym_keyword_in,
    ACTIONS(265), 1,
      sym_keyword_and,
    ACTIONS(267), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(263), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4671] = 4,
    ACTIONS(255), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 14,
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
  [4702] = 6,
    ACTIONS(253), 1,
      anon_sym_SLASH,
    ACTIONS(255), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 12,
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
  [4737] = 6,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(225), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [4771] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 15,
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
  [4799] = 6,
    ACTIONS(273), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 11,
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
  [4833] = 3,
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
  [4861] = 4,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 13,
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
  [4891] = 9,
    ACTIONS(273), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(277), 1,
      sym_keyword_in,
    ACTIONS(279), 1,
      anon_sym_PLUS,
    ACTIONS(281), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 9,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4931] = 11,
    ACTIONS(151), 1,
      sym_keyword_or,
    ACTIONS(273), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(277), 1,
      sym_keyword_in,
    ACTIONS(279), 1,
      anon_sym_PLUS,
    ACTIONS(281), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(285), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(283), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 5,
      sym_keyword_order_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4975] = 8,
    ACTIONS(273), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(279), 1,
      anon_sym_PLUS,
    ACTIONS(281), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 10,
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
  [5013] = 3,
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
  [5041] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(287), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(107), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 10,
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
  [5071] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 15,
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
  [5099] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 15,
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
  [5127] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 15,
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
  [5155] = 16,
    ACTIONS(291), 1,
      sym_keyword_inner,
    ACTIONS(293), 1,
      sym_keyword_join,
    ACTIONS(295), 1,
      sym_keyword_where,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(299), 1,
      sym_keyword_group_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(148), 1,
      sym_index_hint,
    STATE(243), 1,
      sym_where,
    STATE(293), 1,
      sym_group_by,
    STATE(331), 1,
      sym_order_by,
    STATE(462), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(289), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(303), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(305), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(146), 2,
      sym_join,
      aux_sym_from_repeat1,
  [5209] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 15,
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
  [5237] = 6,
    ACTIONS(309), 1,
      anon_sym_SLASH,
    ACTIONS(311), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(307), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 11,
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
  [5270] = 9,
    ACTIONS(309), 1,
      anon_sym_SLASH,
    ACTIONS(311), 1,
      anon_sym_CARET,
    ACTIONS(313), 1,
      sym_keyword_in,
    ACTIONS(315), 1,
      anon_sym_PLUS,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5309] = 10,
    ACTIONS(319), 1,
      sym_keyword_in,
    ACTIONS(325), 1,
      anon_sym_PLUS,
    ACTIONS(327), 1,
      anon_sym_DASH,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(323), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5350] = 12,
    ACTIONS(273), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(277), 1,
      sym_keyword_in,
    ACTIONS(279), 1,
      anon_sym_PLUS,
    ACTIONS(281), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      sym_keyword_and,
    ACTIONS(337), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(285), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(283), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5395] = 6,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(323), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 11,
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
  [5428] = 8,
    ACTIONS(325), 1,
      anon_sym_PLUS,
    ACTIONS(327), 1,
      anon_sym_DASH,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(323), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 10,
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
  [5465] = 4,
    ACTIONS(331), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 13,
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
  [5494] = 6,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [5527] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 3,
      sym_keyword_where,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [5556] = 8,
    ACTIONS(309), 1,
      anon_sym_SLASH,
    ACTIONS(311), 1,
      anon_sym_CARET,
    ACTIONS(315), 1,
      anon_sym_PLUS,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 10,
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
  [5593] = 10,
    ACTIONS(309), 1,
      anon_sym_SLASH,
    ACTIONS(311), 1,
      anon_sym_CARET,
    ACTIONS(313), 1,
      sym_keyword_in,
    ACTIONS(315), 1,
      anon_sym_PLUS,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(307), 2,
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
    ACTIONS(149), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5634] = 9,
    ACTIONS(319), 1,
      sym_keyword_in,
    ACTIONS(325), 1,
      anon_sym_PLUS,
    ACTIONS(327), 1,
      anon_sym_DASH,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(323), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5673] = 4,
    ACTIONS(311), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(151), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 13,
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
  [5702] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [5730] = 8,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(351), 1,
      sym_keyword_as,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(209), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(349), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(347), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [5766] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(339), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 11,
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
  [5794] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 6,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(17), 10,
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
  [5819] = 11,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      sym_keyword_in,
    ACTIONS(325), 1,
      anon_sym_PLUS,
    ACTIONS(327), 1,
      anon_sym_DASH,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(323), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(355), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(321), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5860] = 14,
    ACTIONS(291), 1,
      sym_keyword_inner,
    ACTIONS(293), 1,
      sym_keyword_join,
    ACTIONS(295), 1,
      sym_keyword_where,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(299), 1,
      sym_keyword_group_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(249), 1,
      sym_where,
    STATE(309), 1,
      sym_group_by,
    STATE(355), 1,
      sym_order_by,
    STATE(490), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(289), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(357), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(213), 2,
      sym_join,
      aux_sym_from_repeat1,
  [5907] = 14,
    ACTIONS(291), 1,
      sym_keyword_inner,
    ACTIONS(293), 1,
      sym_keyword_join,
    ACTIONS(295), 1,
      sym_keyword_where,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(299), 1,
      sym_keyword_group_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(247), 1,
      sym_where,
    STATE(301), 1,
      sym_group_by,
    STATE(349), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(289), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(213), 2,
      sym_join,
      aux_sym_from_repeat1,
  [5954] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(365), 1,
      sym_keyword_as,
    STATE(210), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(363), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(361), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [5987] = 14,
    ACTIONS(291), 1,
      sym_keyword_inner,
    ACTIONS(293), 1,
      sym_keyword_join,
    ACTIONS(295), 1,
      sym_keyword_where,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(299), 1,
      sym_keyword_group_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(247), 1,
      sym_where,
    STATE(301), 1,
      sym_group_by,
    STATE(349), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(289), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(145), 2,
      sym_join,
      aux_sym_from_repeat1,
  [6034] = 3,
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
  [6059] = 11,
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
    STATE(57), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
    STATE(320), 1,
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
  [6099] = 13,
    ACTIONS(51), 1,
      sym_keyword_count,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(215), 1,
      anon_sym_BQUOTE,
    ACTIONS(217), 1,
      sym__identifier,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(286), 1,
      sym_identifier,
    STATE(632), 1,
      sym__unary_function_name,
    STATE(633), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(265), 2,
      sym_field,
      sym_function_call,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [6143] = 10,
    ACTIONS(309), 1,
      anon_sym_SLASH,
    ACTIONS(311), 1,
      anon_sym_CARET,
    ACTIONS(313), 1,
      sym_keyword_in,
    ACTIONS(315), 1,
      anon_sym_PLUS,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(307), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(345), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(379), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(343), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6181] = 10,
    ACTIONS(273), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(277), 1,
      sym_keyword_in,
    ACTIONS(279), 1,
      anon_sym_PLUS,
    ACTIONS(281), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(285), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(283), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6219] = 10,
    ACTIONS(155), 1,
      anon_sym_PLUS,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_CARET,
    ACTIONS(381), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(383), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(165), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6257] = 11,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(320), 1,
      sym_where_expression,
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
  [6297] = 6,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(387), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [6327] = 12,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(112), 1,
      sym_predicate,
    STATE(434), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(152), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6369] = 10,
    ACTIONS(229), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
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
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(245), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(243), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6407] = 10,
    ACTIONS(319), 1,
      sym_keyword_in,
    ACTIONS(325), 1,
      anon_sym_PLUS,
    ACTIONS(327), 1,
      anon_sym_DASH,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(323), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(355), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(321), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6445] = 12,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(99), 1,
      sym_predicate,
    STATE(288), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(158), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6487] = 13,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(183), 1,
      sym_keyword_count,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    STATE(233), 1,
      sym_identifier,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(564), 1,
      sym__function_name,
    STATE(566), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(265), 2,
      sym_field,
      sym_function_call,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [6531] = 13,
    ACTIONS(55), 1,
      sym_keyword_if,
    ACTIONS(207), 1,
      sym_keyword_count,
    ACTIONS(211), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      sym__identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(269), 1,
      sym__multi_param_function,
    STATE(272), 1,
      sym__count_function,
    STATE(275), 1,
      sym__unary_function,
    STATE(636), 1,
      sym__unary_function_name,
    STATE(637), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(265), 2,
      sym_field,
      sym_function_call,
    ACTIONS(53), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [6575] = 11,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
    STATE(320), 1,
      sym_where_expression,
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
  [6615] = 6,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(208), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(397), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [6645] = 10,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      sym__number,
    ACTIONS(409), 1,
      anon_sym_BQUOTE,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(42), 1,
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
  [6682] = 11,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(121), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(153), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6721] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
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
  [6758] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
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
  [6795] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
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
  [6832] = 11,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(102), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(158), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [6871] = 10,
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
    STATE(57), 1,
      sym_identifier,
    STATE(92), 1,
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
  [6908] = 10,
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
    STATE(57), 1,
      sym_identifier,
    STATE(92), 1,
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
  [6945] = 10,
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
    STATE(57), 1,
      sym_identifier,
    STATE(92), 1,
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
  [6982] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(413), 1,
      anon_sym_BQUOTE,
    ACTIONS(415), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
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
  [7019] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(413), 1,
      anon_sym_BQUOTE,
    ACTIONS(415), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(104), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7056] = 10,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      sym__number,
    ACTIONS(409), 1,
      anon_sym_BQUOTE,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(42), 1,
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
  [7093] = 10,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      sym__number,
    ACTIONS(409), 1,
      anon_sym_BQUOTE,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(42), 1,
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
  [7130] = 10,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      sym__number,
    ACTIONS(409), 1,
      anon_sym_BQUOTE,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(42), 1,
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
  [7167] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(413), 1,
      anon_sym_BQUOTE,
    ACTIONS(415), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    STATE(92), 1,
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
  [7204] = 10,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      sym__number,
    ACTIONS(409), 1,
      anon_sym_BQUOTE,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(42), 1,
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
  [7241] = 10,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      sym__number,
    ACTIONS(409), 1,
      anon_sym_BQUOTE,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(42), 1,
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
  [7278] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(413), 1,
      anon_sym_BQUOTE,
    ACTIONS(415), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(100), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7315] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(413), 1,
      anon_sym_BQUOTE,
    ACTIONS(415), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    STATE(92), 1,
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
  [7352] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
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
  [7389] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(63), 1,
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
  [7426] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
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
  [7463] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(413), 1,
      anon_sym_BQUOTE,
    ACTIONS(415), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(88), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7500] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(88), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7537] = 11,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(30), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(154), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7576] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    STATE(92), 1,
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
  [7613] = 10,
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
    STATE(57), 1,
      sym_identifier,
    STATE(92), 1,
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
  [7650] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    STATE(92), 1,
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
  [7687] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    STATE(92), 1,
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
  [7724] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(107), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7761] = 10,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__number,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(105), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7798] = 11,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(32), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(154), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7837] = 10,
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
    STATE(57), 1,
      sym_identifier,
    STATE(92), 1,
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
  [7874] = 11,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    STATE(135), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(152), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7913] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(63), 1,
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
  [7950] = 10,
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
    STATE(57), 1,
      sym_identifier,
    STATE(92), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(88), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [7987] = 11,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(34), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(154), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8026] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(63), 1,
      sym_identifier,
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
  [8063] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(63), 1,
      sym_identifier,
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
  [8100] = 11,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(37), 1,
      sym_predicate,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(154), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8139] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(113), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8176] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(113), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [8213] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 1,
      sym__identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(63), 1,
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
  [8250] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(421), 13,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8270] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(423), 13,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8290] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(425), 13,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8310] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(427), 13,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8330] = 13,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(429), 1,
      sym_keyword_primary,
    ACTIONS(431), 1,
      sym_keyword_key,
    ACTIONS(433), 1,
      sym_keyword_constraint,
    STATE(229), 1,
      sym_identifier,
    STATE(426), 1,
      sym_constraint,
    STATE(472), 1,
      sym_column_definition,
    STATE(474), 1,
      sym__constraint_literal,
    STATE(477), 1,
      sym__primary_key,
    STATE(487), 1,
      sym__primary_key_constraint,
    STATE(495), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8371] = 6,
    ACTIONS(438), 1,
      sym_keyword_inner,
    ACTIONS(441), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(435), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(213), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(444), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8398] = 10,
    ACTIONS(448), 1,
      sym_keyword_primary,
    ACTIONS(450), 1,
      sym_keyword_not,
    ACTIONS(452), 1,
      sym_keyword_auto_increment,
    ACTIONS(454), 1,
      sym_keyword_default,
    STATE(319), 1,
      sym__primary_key,
    STATE(496), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(456), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(237), 2,
      sym__not_null,
      sym__default_null,
  [8433] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(458), 12,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(460), 12,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8471] = 8,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(462), 1,
      sym_keyword_as,
    ACTIONS(464), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(25), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8501] = 8,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(466), 1,
      sym_keyword_as,
    ACTIONS(468), 1,
      anon_sym_DOT,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(37), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8531] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(472), 1,
      sym_keyword_as,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(470), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(474), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8558] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(478), 1,
      sym_keyword_as,
    STATE(277), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(476), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(480), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8585] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(482), 1,
      sym_keyword_as,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(45), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8612] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(486), 1,
      sym_keyword_as,
    STATE(280), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(484), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(488), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8639] = 3,
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
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BQUOTE,
  [8658] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(492), 1,
      sym_keyword_as,
    STATE(258), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(490), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(494), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8685] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
    ACTIONS(21), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [8704] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(498), 1,
      sym_keyword_as,
    STATE(261), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(496), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(500), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8731] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
    ACTIONS(17), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [8750] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(15), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BQUOTE,
  [8769] = 7,
    ACTIONS(502), 1,
      sym_keyword_bigint,
    ACTIONS(504), 1,
      sym_keyword_date,
    ACTIONS(506), 1,
      sym_keyword_datetime,
    ACTIONS(508), 1,
      sym_keyword_char,
    ACTIONS(510), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(214), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [8795] = 3,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(512), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8813] = 3,
    ACTIONS(518), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(516), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8831] = 3,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(520), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8849] = 8,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(35), 1,
      sym_keyword_from,
    ACTIONS(466), 1,
      sym_keyword_as,
    ACTIONS(524), 1,
      anon_sym_DOT,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(37), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8877] = 8,
    ACTIONS(23), 1,
      sym_keyword_from,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(462), 1,
      sym_keyword_as,
    ACTIONS(526), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8905] = 8,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(528), 1,
      sym_keyword_as,
    ACTIONS(530), 1,
      anon_sym_DOT,
    STATE(209), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(347), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(349), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [8933] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(532), 1,
      sym_keyword_as,
    ACTIONS(534), 1,
      anon_sym_DOT,
    STATE(209), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(347), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [8958] = 7,
    ACTIONS(448), 1,
      sym_keyword_primary,
    ACTIONS(536), 1,
      sym_keyword_auto_increment,
    STATE(325), 1,
      sym__primary_key,
    STATE(479), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(538), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8983] = 8,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(540), 1,
      sym_keyword_default,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    STATE(544), 1,
      sym_table_options,
    STATE(545), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(264), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9010] = 8,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(326), 1,
      sym_identifier,
    STATE(404), 1,
      sym_table_reference,
    STATE(539), 1,
      sym__table_references,
    STATE(546), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(540), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [9037] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(490), 1,
      sym_keyword_from,
    ACTIONS(492), 1,
      sym_keyword_as,
    STATE(258), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(494), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9062] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(546), 1,
      sym_keyword_as,
    STATE(210), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(363), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [9087] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(476), 1,
      sym_keyword_from,
    ACTIONS(478), 1,
      sym_keyword_as,
    STATE(277), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(480), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9112] = 8,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(299), 1,
      sym_keyword_group_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(301), 1,
      sym_group_by,
    STATE(349), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9139] = 3,
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
  [9156] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 4,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(17), 4,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [9173] = 8,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(540), 1,
      sym_keyword_default,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    STATE(545), 1,
      sym_identifier,
    STATE(559), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(264), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9200] = 8,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(299), 1,
      sym_keyword_group_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(309), 1,
      sym_group_by,
    STATE(355), 1,
      sym_order_by,
    STATE(490), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(357), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9227] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(550), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9242] = 8,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(299), 1,
      sym_keyword_group_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(297), 1,
      sym_group_by,
    STATE(335), 1,
      sym_order_by,
    STATE(480), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(552), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9269] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(554), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9284] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(556), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9299] = 9,
    ACTIONS(448), 1,
      sym_keyword_primary,
    ACTIONS(558), 1,
      sym_keyword_key,
    ACTIONS(560), 1,
      sym_keyword_constraint,
    STATE(467), 1,
      sym_constraint,
    STATE(474), 1,
      sym__constraint_literal,
    STATE(477), 1,
      sym__primary_key,
    STATE(487), 1,
      sym__primary_key_constraint,
    STATE(495), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9328] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_keyword_from,
    ACTIONS(482), 1,
      sym_keyword_as,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9353] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(470), 1,
      sym_keyword_from,
    ACTIONS(472), 1,
      sym_keyword_as,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(474), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9378] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(484), 1,
      sym_keyword_from,
    ACTIONS(486), 1,
      sym_keyword_as,
    STATE(280), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(488), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9403] = 7,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(496), 1,
      sym_keyword_from,
    ACTIONS(498), 1,
      sym_keyword_as,
    STATE(261), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(500), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9428] = 7,
    ACTIONS(562), 1,
      sym_keyword_default,
    ACTIONS(565), 1,
      anon_sym_SEMI,
    ACTIONS(567), 1,
      anon_sym_BQUOTE,
    ACTIONS(570), 1,
      sym__identifier,
    STATE(545), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(257), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9466] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(575), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9480] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(577), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9494] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(579), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9508] = 6,
    ACTIONS(448), 1,
      sym_keyword_primary,
    STATE(325), 1,
      sym__primary_key,
    STATE(479), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(538), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9530] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(581), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9548] = 7,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(540), 1,
      sym_keyword_default,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    STATE(545), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(257), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [9572] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(581), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9586] = 6,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(387), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(389), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [9608] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    STATE(60), 1,
      sym__literal_string,
    STATE(430), 1,
      sym_literal,
    STATE(431), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9634] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(588), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9648] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(590), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9662] = 4,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(592), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9680] = 6,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(596), 1,
      sym_keyword_as,
    STATE(210), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [9702] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(590), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9716] = 6,
    ACTIONS(448), 1,
      sym_keyword_primary,
    STATE(321), 1,
      sym__primary_key,
    STATE(482), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(598), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9738] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(600), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9752] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(590), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9766] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(602), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9780] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(604), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9794] = 7,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(606), 1,
      sym_keyword_as,
    ACTIONS(608), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9818] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    STATE(60), 1,
      sym__literal_string,
    STATE(454), 1,
      sym_literal,
    STATE(455), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9844] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(610), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9858] = 6,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(208), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(397), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(399), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [9880] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(612), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9894] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(17), 5,
      sym_keyword_on,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [9910] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    STATE(60), 1,
      sym__literal_string,
    STATE(374), 1,
      sym_literal,
    STATE(386), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9936] = 3,
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
  [9952] = 7,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(614), 1,
      sym_keyword_as,
    ACTIONS(616), 1,
      anon_sym_DOT,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(37), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9976] = 4,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(618), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9994] = 8,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    ACTIONS(620), 1,
      sym_keyword_where,
    ACTIONS(622), 1,
      anon_sym_SEMI,
    STATE(322), 1,
      sym_where,
    STATE(366), 1,
      sym_order_by,
    STATE(551), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10020] = 8,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    ACTIONS(620), 1,
      sym_keyword_where,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    STATE(312), 1,
      sym_where,
    STATE(459), 1,
      sym_order_by,
    STATE(519), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10046] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(626), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10059] = 6,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(628), 1,
      sym_keyword_as,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10080] = 7,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(630), 1,
      sym_keyword_if,
    STATE(334), 1,
      sym__if_not_exists,
    STATE(488), 1,
      sym_identifier,
    STATE(497), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10103] = 6,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(349), 1,
      sym_order_by,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10124] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(19), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [10139] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 2,
      sym_keyword_as,
      sym__identifier,
    ACTIONS(15), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [10154] = 5,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(387), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [10173] = 6,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(333), 1,
      sym_order_by,
    STATE(463), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(632), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10194] = 4,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(634), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [10211] = 4,
    STATE(393), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(636), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10228] = 4,
    ACTIONS(640), 1,
      sym_keyword_having,
    STATE(359), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(638), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10245] = 6,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(355), 1,
      sym_order_by,
    STATE(490), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(357), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10266] = 4,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [10283] = 6,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(645), 1,
      sym_keyword_as,
    STATE(280), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(488), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10304] = 6,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(647), 1,
      sym_keyword_as,
    STATE(258), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(494), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10325] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10338] = 6,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(651), 1,
      sym_keyword_as,
    STATE(261), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(500), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10359] = 6,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(653), 1,
      sym_keyword_as,
    STATE(277), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(480), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10380] = 5,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(208), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(397), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [10399] = 6,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(335), 1,
      sym_order_by,
    STATE(480), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(552), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10420] = 6,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(655), 1,
      sym_keyword_as,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(474), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10441] = 6,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    STATE(60), 1,
      sym__literal_string,
    STATE(348), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10461] = 6,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    ACTIONS(657), 1,
      anon_sym_SEMI,
    STATE(419), 1,
      sym_order_by,
    STATE(555), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10481] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(659), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10493] = 6,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(326), 1,
      sym_identifier,
    STATE(370), 1,
      sym_table_reference,
    STATE(508), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10513] = 6,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    STATE(60), 1,
      sym__literal_string,
    STATE(464), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10533] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(618), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10549] = 6,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    STATE(60), 1,
      sym__literal_string,
    STATE(491), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10569] = 4,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(581), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10585] = 4,
    STATE(479), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(538), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10601] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(666), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10613] = 4,
    STATE(498), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(668), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10629] = 6,
    ACTIONS(297), 1,
      sym_keyword_order_by,
    ACTIONS(301), 1,
      sym_keyword_limit,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    STATE(397), 1,
      sym_order_by,
    STATE(503), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10649] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(592), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10665] = 6,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__number,
    STATE(60), 1,
      sym__literal_string,
    STATE(454), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10685] = 4,
    STATE(482), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(598), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10701] = 3,
    ACTIONS(674), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(672), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [10715] = 4,
    STATE(501), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(676), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10731] = 4,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [10746] = 5,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(229), 1,
      sym_identifier,
    STATE(472), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10763] = 5,
    ACTIONS(681), 1,
      anon_sym_BQUOTE,
    ACTIONS(683), 1,
      sym__identifier,
    STATE(236), 1,
      sym_identifier,
    STATE(345), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10780] = 4,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(481), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10795] = 5,
    ACTIONS(685), 1,
      anon_sym_BQUOTE,
    ACTIONS(687), 1,
      sym__identifier,
    STATE(235), 1,
      sym_identifier,
    STATE(289), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10812] = 4,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(475), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10827] = 5,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(478), 1,
      sym_table_reference,
    STATE(488), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10844] = 4,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(463), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(632), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10859] = 5,
    ACTIONS(693), 1,
      anon_sym_BQUOTE,
    ACTIONS(695), 1,
      sym__identifier,
    STATE(125), 1,
      sym_table_expression,
    STATE(141), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10876] = 5,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_column_definitions_repeat1,
    STATE(560), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10893] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(701), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(703), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10906] = 4,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(634), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [10921] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(705), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(707), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [10934] = 5,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(229), 1,
      sym_identifier,
    STATE(337), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10951] = 5,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(438), 1,
      sym__column_without_order,
    STATE(468), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10968] = 5,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_column_definitions_repeat1,
    STATE(588), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10985] = 5,
    ACTIONS(681), 1,
      anon_sym_BQUOTE,
    ACTIONS(683), 1,
      sym__identifier,
    STATE(236), 1,
      sym_identifier,
    STATE(354), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11002] = 4,
    ACTIONS(711), 1,
      sym_keyword_on,
    STATE(572), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(303), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11017] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 2,
      sym_keyword_default,
      sym__identifier,
  [11030] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(713), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [11041] = 4,
    ACTIONS(715), 1,
      sym_keyword_offset,
    STATE(489), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(717), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11056] = 4,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(490), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(357), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11071] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(719), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(721), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [11084] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [11097] = 5,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(326), 1,
      sym_identifier,
    STATE(486), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11114] = 5,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(327), 1,
      sym_identifier,
    STATE(494), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11131] = 4,
    ACTIONS(723), 1,
      sym_keyword_on,
    STATE(533), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(303), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11146] = 4,
    ACTIONS(301), 1,
      sym_keyword_limit,
    STATE(480), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(552), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11161] = 5,
    ACTIONS(681), 1,
      anon_sym_BQUOTE,
    ACTIONS(683), 1,
      sym__identifier,
    STATE(236), 1,
      sym_identifier,
    STATE(357), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11178] = 4,
    ACTIONS(725), 1,
      sym_keyword_on,
    STATE(586), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(303), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11193] = 5,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(327), 1,
      sym_identifier,
    STATE(445), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11210] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(727), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11221] = 4,
    ACTIONS(729), 1,
      sym_keyword_from,
    STATE(562), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(303), 2,
      sym_keyword_force,
      sym_keyword_use,
  [11236] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(731), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(733), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [11249] = 5,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(468), 1,
      sym_identifier,
    STATE(492), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11266] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(735), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(737), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [11279] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(739), 4,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [11290] = 4,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11304] = 4,
    ACTIONS(301), 1,
      sym_keyword_limit,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    STATE(503), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11318] = 4,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11332] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11346] = 4,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(751), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11360] = 4,
    ACTIONS(753), 1,
      sym_keyword_values,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    STATE(589), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11374] = 4,
    ACTIONS(757), 1,
      sym_keyword_set,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11388] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(347), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11402] = 4,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11416] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11430] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11444] = 4,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11458] = 4,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11472] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11486] = 4,
    ACTIONS(215), 1,
      anon_sym_BQUOTE,
    ACTIONS(775), 1,
      sym__identifier,
    STATE(278), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11500] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11514] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(347), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11528] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(48), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11542] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(777), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11552] = 4,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11566] = 4,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11580] = 4,
    ACTIONS(787), 1,
      sym_keyword_from,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(514), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11594] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(268), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11608] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(791), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11618] = 4,
    ACTIONS(685), 1,
      anon_sym_BQUOTE,
    ACTIONS(687), 1,
      sym__identifier,
    STATE(241), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11632] = 4,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(751), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11646] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11660] = 4,
    ACTIONS(215), 1,
      anon_sym_BQUOTE,
    ACTIONS(775), 1,
      sym__identifier,
    STATE(291), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(793), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11684] = 4,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11698] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(274), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11712] = 4,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11726] = 4,
    ACTIONS(301), 1,
      sym_keyword_limit,
    ACTIONS(795), 1,
      anon_sym_SEMI,
    STATE(575), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11740] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(500), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11754] = 4,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11768] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(259), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11782] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(260), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11796] = 4,
    ACTIONS(801), 1,
      anon_sym_BQUOTE,
    ACTIONS(803), 1,
      sym__identifier,
    STATE(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11810] = 4,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11824] = 4,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      sym_keyword_set,
    STATE(371), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11838] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11852] = 4,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11866] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(577), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11880] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(282), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11894] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(260), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11908] = 4,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11922] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11936] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(259), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11950] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(274), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11964] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11978] = 4,
    ACTIONS(787), 1,
      sym_keyword_from,
    ACTIONS(818), 1,
      anon_sym_SEMI,
    STATE(535), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [11992] = 4,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(820), 1,
      sym__identifier,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12006] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12020] = 4,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(820), 1,
      sym__identifier,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12034] = 4,
    ACTIONS(301), 1,
      sym_keyword_limit,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    STATE(568), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12048] = 4,
    ACTIONS(409), 1,
      anon_sym_BQUOTE,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12062] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(538), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12076] = 4,
    ACTIONS(409), 1,
      anon_sym_BQUOTE,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12090] = 4,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(751), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12104] = 4,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 1,
      sym__identifier,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12118] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(826), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12128] = 4,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12142] = 4,
    ACTIONS(211), 1,
      anon_sym_BQUOTE,
    ACTIONS(830), 1,
      sym__identifier,
    STATE(217), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12156] = 4,
    ACTIONS(211), 1,
      anon_sym_BQUOTE,
    ACTIONS(830), 1,
      sym__identifier,
    STATE(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12170] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(268), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12184] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12198] = 4,
    ACTIONS(787), 1,
      sym_keyword_from,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12212] = 4,
    ACTIONS(836), 1,
      sym_keyword_set,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12226] = 4,
    ACTIONS(681), 1,
      anon_sym_BQUOTE,
    ACTIONS(683), 1,
      sym__identifier,
    STATE(271), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12240] = 4,
    ACTIONS(841), 1,
      sym_keyword_where,
    ACTIONS(843), 1,
      anon_sym_SEMI,
    STATE(552), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12254] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12268] = 4,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12282] = 4,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(74), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12296] = 4,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12310] = 4,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12324] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(483), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12338] = 4,
    ACTIONS(375), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      sym__identifier,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12352] = 4,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(820), 1,
      sym__identifier,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12366] = 4,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12380] = 4,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 1,
      sym__identifier,
    STATE(65), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12394] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12408] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12422] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(859), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12432] = 4,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12446] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(253), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12460] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12474] = 4,
    ACTIONS(413), 1,
      anon_sym_BQUOTE,
    ACTIONS(415), 1,
      sym__identifier,
    STATE(59), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12488] = 4,
    ACTIONS(187), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      sym__identifier,
    STATE(234), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12502] = 4,
    ACTIONS(693), 1,
      anon_sym_BQUOTE,
    ACTIONS(695), 1,
      sym__identifier,
    STATE(147), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12516] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12530] = 4,
    ACTIONS(787), 1,
      sym_keyword_from,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12544] = 4,
    ACTIONS(413), 1,
      anon_sym_BQUOTE,
    ACTIONS(415), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12558] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(865), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12568] = 4,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(544), 1,
      sym__identifier,
    STATE(282), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12582] = 4,
    ACTIONS(301), 1,
      sym_keyword_limit,
    ACTIONS(657), 1,
      anon_sym_SEMI,
    STATE(555), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12596] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(867), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12605] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(869), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12614] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12632] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(871), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12641] = 3,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
    STATE(460), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12652] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(875), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [12661] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(852), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12670] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(877), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12679] = 3,
    ACTIONS(879), 1,
      sym_keyword_outer,
    ACTIONS(881), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12690] = 3,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    STATE(565), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12701] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(885), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12710] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(845), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12719] = 3,
    ACTIONS(887), 1,
      sym_keyword_from,
    STATE(532), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(889), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12739] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(891), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12748] = 3,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    STATE(549), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12759] = 3,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
    STATE(499), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12770] = 3,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    STATE(246), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12781] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(598), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12790] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(632), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12799] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(357), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12808] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(668), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12817] = 3,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
    STATE(461), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12828] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(895), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12837] = 3,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12848] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(836), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [12857] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(897), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12866] = 3,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(899), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12877] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(901), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12886] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(552), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12895] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(782), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12904] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(903), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12913] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(905), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12922] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(761), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12931] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(889), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12940] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(538), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12949] = 3,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12960] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(907), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12969] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(909), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12978] = 3,
    ACTIONS(448), 1,
      sym_keyword_primary,
    STATE(465), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [12989] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(911), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12998] = 3,
    ACTIONS(913), 1,
      sym_keyword_for,
    ACTIONS(915), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13009] = 2,
    ACTIONS(795), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13017] = 2,
    ACTIONS(917), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13025] = 2,
    ACTIONS(917), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13033] = 2,
    ACTIONS(919), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13041] = 2,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13049] = 2,
    ACTIONS(923), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13057] = 2,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13065] = 2,
    ACTIONS(927), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13073] = 2,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13081] = 2,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13089] = 2,
    ACTIONS(933), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13097] = 2,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13105] = 2,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13113] = 2,
    ACTIONS(939), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13121] = 2,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13129] = 2,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13137] = 2,
    ACTIONS(657), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13145] = 2,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13153] = 2,
    ACTIONS(947), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13161] = 2,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13169] = 2,
    ACTIONS(951), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13177] = 2,
    ACTIONS(953), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13185] = 2,
    ACTIONS(955), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13193] = 2,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13201] = 2,
    ACTIONS(955), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13209] = 2,
    ACTIONS(881), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13217] = 2,
    ACTIONS(959), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13225] = 2,
    ACTIONS(961), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13233] = 2,
    ACTIONS(963), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13241] = 2,
    ACTIONS(965), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13249] = 2,
    ACTIONS(725), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13257] = 2,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13265] = 2,
    ACTIONS(969), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13273] = 2,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13281] = 2,
    ACTIONS(973), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13289] = 2,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13297] = 2,
    ACTIONS(977), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13305] = 2,
    ACTIONS(979), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13313] = 2,
    ACTIONS(981), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13321] = 2,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13329] = 2,
    ACTIONS(983), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13337] = 2,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13345] = 2,
    ACTIONS(985), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13353] = 2,
    ACTIONS(987), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13361] = 2,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13369] = 2,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13377] = 2,
    ACTIONS(993), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13385] = 2,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13393] = 2,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13401] = 2,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13409] = 2,
    ACTIONS(999), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13417] = 2,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13425] = 2,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13433] = 2,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13441] = 2,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13449] = 2,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13457] = 2,
    ACTIONS(1009), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13465] = 2,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13473] = 2,
    ACTIONS(1011), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13481] = 2,
    ACTIONS(1013), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13489] = 2,
    ACTIONS(1015), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13497] = 2,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13505] = 2,
    ACTIONS(1019), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13513] = 2,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13521] = 2,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13529] = 2,
    ACTIONS(1025), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13537] = 2,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13545] = 2,
    ACTIONS(1029), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13553] = 2,
    ACTIONS(1031), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13561] = 2,
    ACTIONS(723), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13569] = 2,
    ACTIONS(1035), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1033), 2,
      sym_comment,
      sym_marginalia,
  [13577] = 2,
    ACTIONS(1037), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13585] = 2,
    ACTIONS(1039), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13593] = 2,
    ACTIONS(1041), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13601] = 2,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13609] = 2,
    ACTIONS(1045), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13617] = 2,
    ACTIONS(1047), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13625] = 2,
    ACTIONS(1049), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13633] = 2,
    ACTIONS(1051), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13641] = 2,
    ACTIONS(1053), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13649] = 2,
    ACTIONS(1055), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13657] = 2,
    ACTIONS(1057), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13665] = 2,
    ACTIONS(1059), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13673] = 2,
    ACTIONS(1061), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13681] = 2,
    ACTIONS(1063), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13689] = 2,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13697] = 2,
    ACTIONS(1067), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13705] = 2,
    ACTIONS(1069), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13713] = 2,
    ACTIONS(1071), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13721] = 2,
    ACTIONS(1073), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13729] = 2,
    ACTIONS(1075), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13737] = 2,
    ACTIONS(1077), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13745] = 2,
    ACTIONS(1079), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13753] = 2,
    ACTIONS(1081), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13761] = 2,
    ACTIONS(1083), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13769] = 2,
    ACTIONS(1085), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1033), 2,
      sym_comment,
      sym_marginalia,
  [13777] = 2,
    ACTIONS(1087), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1033), 2,
      sym_comment,
      sym_marginalia,
  [13785] = 2,
    ACTIONS(1089), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13793] = 2,
    ACTIONS(1091), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1033), 2,
      sym_comment,
      sym_marginalia,
  [13801] = 2,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13809] = 2,
    ACTIONS(1095), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13817] = 2,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13825] = 2,
    ACTIONS(1099), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13833] = 2,
    ACTIONS(1101), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13841] = 2,
    ACTIONS(1103), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13849] = 2,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13857] = 2,
    ACTIONS(1107), 1,
      aux_sym__literal_string_token1,
    ACTIONS(1033), 2,
      sym_comment,
      sym_marginalia,
  [13865] = 2,
    ACTIONS(1109), 1,
      aux_sym__literal_string_token2,
    ACTIONS(1033), 2,
      sym_comment,
      sym_marginalia,
  [13873] = 2,
    ACTIONS(1111), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13881] = 2,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13889] = 2,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13897] = 2,
    ACTIONS(1117), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13905] = 2,
    ACTIONS(1119), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13913] = 2,
    ACTIONS(1121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13921] = 2,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13929] = 2,
    ACTIONS(1125), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13937] = 2,
    ACTIONS(1127), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13945] = 2,
    ACTIONS(1129), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13953] = 2,
    ACTIONS(1131), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13961] = 2,
    ACTIONS(1133), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13969] = 2,
    ACTIONS(1135), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13977] = 2,
    ACTIONS(1137), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13985] = 2,
    ACTIONS(1139), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [13993] = 2,
    ACTIONS(1141), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14001] = 2,
    ACTIONS(1143), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14009] = 2,
    ACTIONS(1145), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14017] = 2,
    ACTIONS(1147), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14025] = 2,
    ACTIONS(1149), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14033] = 2,
    ACTIONS(1151), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14041] = 2,
    ACTIONS(1153), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14049] = 2,
    ACTIONS(1155), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14057] = 2,
    ACTIONS(1157), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14065] = 2,
    ACTIONS(1159), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14073] = 2,
    ACTIONS(1161), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14081] = 2,
    ACTIONS(1163), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [14089] = 2,
    ACTIONS(1165), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 202,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 278,
  [SMALL_STATE(9)] = 324,
  [SMALL_STATE(10)] = 401,
  [SMALL_STATE(11)] = 478,
  [SMALL_STATE(12)] = 555,
  [SMALL_STATE(13)] = 629,
  [SMALL_STATE(14)] = 703,
  [SMALL_STATE(15)] = 777,
  [SMALL_STATE(16)] = 851,
  [SMALL_STATE(17)] = 925,
  [SMALL_STATE(18)] = 999,
  [SMALL_STATE(19)] = 1070,
  [SMALL_STATE(20)] = 1141,
  [SMALL_STATE(21)] = 1212,
  [SMALL_STATE(22)] = 1283,
  [SMALL_STATE(23)] = 1354,
  [SMALL_STATE(24)] = 1425,
  [SMALL_STATE(25)] = 1496,
  [SMALL_STATE(26)] = 1530,
  [SMALL_STATE(27)] = 1564,
  [SMALL_STATE(28)] = 1608,
  [SMALL_STATE(29)] = 1642,
  [SMALL_STATE(30)] = 1676,
  [SMALL_STATE(31)] = 1712,
  [SMALL_STATE(32)] = 1756,
  [SMALL_STATE(33)] = 1792,
  [SMALL_STATE(34)] = 1836,
  [SMALL_STATE(35)] = 1872,
  [SMALL_STATE(36)] = 1906,
  [SMALL_STATE(37)] = 1940,
  [SMALL_STATE(38)] = 1976,
  [SMALL_STATE(39)] = 2020,
  [SMALL_STATE(40)] = 2054,
  [SMALL_STATE(41)] = 2088,
  [SMALL_STATE(42)] = 2122,
  [SMALL_STATE(43)] = 2156,
  [SMALL_STATE(44)] = 2200,
  [SMALL_STATE(45)] = 2250,
  [SMALL_STATE(46)] = 2296,
  [SMALL_STATE(47)] = 2332,
  [SMALL_STATE(48)] = 2366,
  [SMALL_STATE(49)] = 2400,
  [SMALL_STATE(50)] = 2440,
  [SMALL_STATE(51)] = 2474,
  [SMALL_STATE(52)] = 2515,
  [SMALL_STATE(53)] = 2548,
  [SMALL_STATE(54)] = 2591,
  [SMALL_STATE(55)] = 2624,
  [SMALL_STATE(56)] = 2693,
  [SMALL_STATE(57)] = 2726,
  [SMALL_STATE(58)] = 2769,
  [SMALL_STATE(59)] = 2838,
  [SMALL_STATE(60)] = 2879,
  [SMALL_STATE(61)] = 2912,
  [SMALL_STATE(62)] = 2945,
  [SMALL_STATE(63)] = 2978,
  [SMALL_STATE(64)] = 3020,
  [SMALL_STATE(65)] = 3052,
  [SMALL_STATE(66)] = 3094,
  [SMALL_STATE(67)] = 3160,
  [SMALL_STATE(68)] = 3192,
  [SMALL_STATE(69)] = 3224,
  [SMALL_STATE(70)] = 3256,
  [SMALL_STATE(71)] = 3322,
  [SMALL_STATE(72)] = 3354,
  [SMALL_STATE(73)] = 3396,
  [SMALL_STATE(74)] = 3428,
  [SMALL_STATE(75)] = 3470,
  [SMALL_STATE(76)] = 3510,
  [SMALL_STATE(77)] = 3542,
  [SMALL_STATE(78)] = 3574,
  [SMALL_STATE(79)] = 3605,
  [SMALL_STATE(80)] = 3636,
  [SMALL_STATE(81)] = 3667,
  [SMALL_STATE(82)] = 3706,
  [SMALL_STATE(83)] = 3737,
  [SMALL_STATE(84)] = 3768,
  [SMALL_STATE(85)] = 3799,
  [SMALL_STATE(86)] = 3830,
  [SMALL_STATE(87)] = 3861,
  [SMALL_STATE(88)] = 3892,
  [SMALL_STATE(89)] = 3923,
  [SMALL_STATE(90)] = 3954,
  [SMALL_STATE(91)] = 3985,
  [SMALL_STATE(92)] = 4016,
  [SMALL_STATE(93)] = 4047,
  [SMALL_STATE(94)] = 4078,
  [SMALL_STATE(95)] = 4109,
  [SMALL_STATE(96)] = 4140,
  [SMALL_STATE(97)] = 4171,
  [SMALL_STATE(98)] = 4210,
  [SMALL_STATE(99)] = 4241,
  [SMALL_STATE(100)] = 4277,
  [SMALL_STATE(101)] = 4308,
  [SMALL_STATE(102)] = 4343,
  [SMALL_STATE(103)] = 4374,
  [SMALL_STATE(104)] = 4413,
  [SMALL_STATE(105)] = 4458,
  [SMALL_STATE(106)] = 4497,
  [SMALL_STATE(107)] = 4538,
  [SMALL_STATE(108)] = 4583,
  [SMALL_STATE(109)] = 4624,
  [SMALL_STATE(110)] = 4671,
  [SMALL_STATE(111)] = 4702,
  [SMALL_STATE(112)] = 4737,
  [SMALL_STATE(113)] = 4771,
  [SMALL_STATE(114)] = 4799,
  [SMALL_STATE(115)] = 4833,
  [SMALL_STATE(116)] = 4861,
  [SMALL_STATE(117)] = 4891,
  [SMALL_STATE(118)] = 4931,
  [SMALL_STATE(119)] = 4975,
  [SMALL_STATE(120)] = 5013,
  [SMALL_STATE(121)] = 5041,
  [SMALL_STATE(122)] = 5071,
  [SMALL_STATE(123)] = 5099,
  [SMALL_STATE(124)] = 5127,
  [SMALL_STATE(125)] = 5155,
  [SMALL_STATE(126)] = 5209,
  [SMALL_STATE(127)] = 5237,
  [SMALL_STATE(128)] = 5270,
  [SMALL_STATE(129)] = 5309,
  [SMALL_STATE(130)] = 5350,
  [SMALL_STATE(131)] = 5395,
  [SMALL_STATE(132)] = 5428,
  [SMALL_STATE(133)] = 5465,
  [SMALL_STATE(134)] = 5494,
  [SMALL_STATE(135)] = 5527,
  [SMALL_STATE(136)] = 5556,
  [SMALL_STATE(137)] = 5593,
  [SMALL_STATE(138)] = 5634,
  [SMALL_STATE(139)] = 5673,
  [SMALL_STATE(140)] = 5702,
  [SMALL_STATE(141)] = 5730,
  [SMALL_STATE(142)] = 5766,
  [SMALL_STATE(143)] = 5794,
  [SMALL_STATE(144)] = 5819,
  [SMALL_STATE(145)] = 5860,
  [SMALL_STATE(146)] = 5907,
  [SMALL_STATE(147)] = 5954,
  [SMALL_STATE(148)] = 5987,
  [SMALL_STATE(149)] = 6034,
  [SMALL_STATE(150)] = 6059,
  [SMALL_STATE(151)] = 6099,
  [SMALL_STATE(152)] = 6143,
  [SMALL_STATE(153)] = 6181,
  [SMALL_STATE(154)] = 6219,
  [SMALL_STATE(155)] = 6257,
  [SMALL_STATE(156)] = 6297,
  [SMALL_STATE(157)] = 6327,
  [SMALL_STATE(158)] = 6369,
  [SMALL_STATE(159)] = 6407,
  [SMALL_STATE(160)] = 6445,
  [SMALL_STATE(161)] = 6487,
  [SMALL_STATE(162)] = 6531,
  [SMALL_STATE(163)] = 6575,
  [SMALL_STATE(164)] = 6615,
  [SMALL_STATE(165)] = 6645,
  [SMALL_STATE(166)] = 6682,
  [SMALL_STATE(167)] = 6721,
  [SMALL_STATE(168)] = 6758,
  [SMALL_STATE(169)] = 6795,
  [SMALL_STATE(170)] = 6832,
  [SMALL_STATE(171)] = 6871,
  [SMALL_STATE(172)] = 6908,
  [SMALL_STATE(173)] = 6945,
  [SMALL_STATE(174)] = 6982,
  [SMALL_STATE(175)] = 7019,
  [SMALL_STATE(176)] = 7056,
  [SMALL_STATE(177)] = 7093,
  [SMALL_STATE(178)] = 7130,
  [SMALL_STATE(179)] = 7167,
  [SMALL_STATE(180)] = 7204,
  [SMALL_STATE(181)] = 7241,
  [SMALL_STATE(182)] = 7278,
  [SMALL_STATE(183)] = 7315,
  [SMALL_STATE(184)] = 7352,
  [SMALL_STATE(185)] = 7389,
  [SMALL_STATE(186)] = 7426,
  [SMALL_STATE(187)] = 7463,
  [SMALL_STATE(188)] = 7500,
  [SMALL_STATE(189)] = 7537,
  [SMALL_STATE(190)] = 7576,
  [SMALL_STATE(191)] = 7613,
  [SMALL_STATE(192)] = 7650,
  [SMALL_STATE(193)] = 7687,
  [SMALL_STATE(194)] = 7724,
  [SMALL_STATE(195)] = 7761,
  [SMALL_STATE(196)] = 7798,
  [SMALL_STATE(197)] = 7837,
  [SMALL_STATE(198)] = 7874,
  [SMALL_STATE(199)] = 7913,
  [SMALL_STATE(200)] = 7950,
  [SMALL_STATE(201)] = 7987,
  [SMALL_STATE(202)] = 8026,
  [SMALL_STATE(203)] = 8063,
  [SMALL_STATE(204)] = 8100,
  [SMALL_STATE(205)] = 8139,
  [SMALL_STATE(206)] = 8176,
  [SMALL_STATE(207)] = 8213,
  [SMALL_STATE(208)] = 8250,
  [SMALL_STATE(209)] = 8270,
  [SMALL_STATE(210)] = 8290,
  [SMALL_STATE(211)] = 8310,
  [SMALL_STATE(212)] = 8330,
  [SMALL_STATE(213)] = 8371,
  [SMALL_STATE(214)] = 8398,
  [SMALL_STATE(215)] = 8433,
  [SMALL_STATE(216)] = 8452,
  [SMALL_STATE(217)] = 8471,
  [SMALL_STATE(218)] = 8501,
  [SMALL_STATE(219)] = 8531,
  [SMALL_STATE(220)] = 8558,
  [SMALL_STATE(221)] = 8585,
  [SMALL_STATE(222)] = 8612,
  [SMALL_STATE(223)] = 8639,
  [SMALL_STATE(224)] = 8658,
  [SMALL_STATE(225)] = 8685,
  [SMALL_STATE(226)] = 8704,
  [SMALL_STATE(227)] = 8731,
  [SMALL_STATE(228)] = 8750,
  [SMALL_STATE(229)] = 8769,
  [SMALL_STATE(230)] = 8795,
  [SMALL_STATE(231)] = 8813,
  [SMALL_STATE(232)] = 8831,
  [SMALL_STATE(233)] = 8849,
  [SMALL_STATE(234)] = 8877,
  [SMALL_STATE(235)] = 8905,
  [SMALL_STATE(236)] = 8933,
  [SMALL_STATE(237)] = 8958,
  [SMALL_STATE(238)] = 8983,
  [SMALL_STATE(239)] = 9010,
  [SMALL_STATE(240)] = 9037,
  [SMALL_STATE(241)] = 9062,
  [SMALL_STATE(242)] = 9087,
  [SMALL_STATE(243)] = 9112,
  [SMALL_STATE(244)] = 9139,
  [SMALL_STATE(245)] = 9156,
  [SMALL_STATE(246)] = 9173,
  [SMALL_STATE(247)] = 9200,
  [SMALL_STATE(248)] = 9227,
  [SMALL_STATE(249)] = 9242,
  [SMALL_STATE(250)] = 9269,
  [SMALL_STATE(251)] = 9284,
  [SMALL_STATE(252)] = 9299,
  [SMALL_STATE(253)] = 9328,
  [SMALL_STATE(254)] = 9353,
  [SMALL_STATE(255)] = 9378,
  [SMALL_STATE(256)] = 9403,
  [SMALL_STATE(257)] = 9428,
  [SMALL_STATE(258)] = 9452,
  [SMALL_STATE(259)] = 9466,
  [SMALL_STATE(260)] = 9480,
  [SMALL_STATE(261)] = 9494,
  [SMALL_STATE(262)] = 9508,
  [SMALL_STATE(263)] = 9530,
  [SMALL_STATE(264)] = 9548,
  [SMALL_STATE(265)] = 9572,
  [SMALL_STATE(266)] = 9586,
  [SMALL_STATE(267)] = 9608,
  [SMALL_STATE(268)] = 9634,
  [SMALL_STATE(269)] = 9648,
  [SMALL_STATE(270)] = 9662,
  [SMALL_STATE(271)] = 9680,
  [SMALL_STATE(272)] = 9702,
  [SMALL_STATE(273)] = 9716,
  [SMALL_STATE(274)] = 9738,
  [SMALL_STATE(275)] = 9752,
  [SMALL_STATE(276)] = 9766,
  [SMALL_STATE(277)] = 9780,
  [SMALL_STATE(278)] = 9794,
  [SMALL_STATE(279)] = 9818,
  [SMALL_STATE(280)] = 9844,
  [SMALL_STATE(281)] = 9858,
  [SMALL_STATE(282)] = 9880,
  [SMALL_STATE(283)] = 9894,
  [SMALL_STATE(284)] = 9910,
  [SMALL_STATE(285)] = 9936,
  [SMALL_STATE(286)] = 9952,
  [SMALL_STATE(287)] = 9976,
  [SMALL_STATE(288)] = 9994,
  [SMALL_STATE(289)] = 10020,
  [SMALL_STATE(290)] = 10046,
  [SMALL_STATE(291)] = 10059,
  [SMALL_STATE(292)] = 10080,
  [SMALL_STATE(293)] = 10103,
  [SMALL_STATE(294)] = 10124,
  [SMALL_STATE(295)] = 10139,
  [SMALL_STATE(296)] = 10154,
  [SMALL_STATE(297)] = 10173,
  [SMALL_STATE(298)] = 10194,
  [SMALL_STATE(299)] = 10211,
  [SMALL_STATE(300)] = 10228,
  [SMALL_STATE(301)] = 10245,
  [SMALL_STATE(302)] = 10266,
  [SMALL_STATE(303)] = 10283,
  [SMALL_STATE(304)] = 10304,
  [SMALL_STATE(305)] = 10325,
  [SMALL_STATE(306)] = 10338,
  [SMALL_STATE(307)] = 10359,
  [SMALL_STATE(308)] = 10380,
  [SMALL_STATE(309)] = 10399,
  [SMALL_STATE(310)] = 10420,
  [SMALL_STATE(311)] = 10441,
  [SMALL_STATE(312)] = 10461,
  [SMALL_STATE(313)] = 10481,
  [SMALL_STATE(314)] = 10493,
  [SMALL_STATE(315)] = 10513,
  [SMALL_STATE(316)] = 10533,
  [SMALL_STATE(317)] = 10549,
  [SMALL_STATE(318)] = 10569,
  [SMALL_STATE(319)] = 10585,
  [SMALL_STATE(320)] = 10601,
  [SMALL_STATE(321)] = 10613,
  [SMALL_STATE(322)] = 10629,
  [SMALL_STATE(323)] = 10649,
  [SMALL_STATE(324)] = 10665,
  [SMALL_STATE(325)] = 10685,
  [SMALL_STATE(326)] = 10701,
  [SMALL_STATE(327)] = 10715,
  [SMALL_STATE(328)] = 10731,
  [SMALL_STATE(329)] = 10746,
  [SMALL_STATE(330)] = 10763,
  [SMALL_STATE(331)] = 10780,
  [SMALL_STATE(332)] = 10795,
  [SMALL_STATE(333)] = 10812,
  [SMALL_STATE(334)] = 10827,
  [SMALL_STATE(335)] = 10844,
  [SMALL_STATE(336)] = 10859,
  [SMALL_STATE(337)] = 10876,
  [SMALL_STATE(338)] = 10893,
  [SMALL_STATE(339)] = 10906,
  [SMALL_STATE(340)] = 10921,
  [SMALL_STATE(341)] = 10934,
  [SMALL_STATE(342)] = 10951,
  [SMALL_STATE(343)] = 10968,
  [SMALL_STATE(344)] = 10985,
  [SMALL_STATE(345)] = 11002,
  [SMALL_STATE(346)] = 11017,
  [SMALL_STATE(347)] = 11030,
  [SMALL_STATE(348)] = 11041,
  [SMALL_STATE(349)] = 11056,
  [SMALL_STATE(350)] = 11071,
  [SMALL_STATE(351)] = 11084,
  [SMALL_STATE(352)] = 11097,
  [SMALL_STATE(353)] = 11114,
  [SMALL_STATE(354)] = 11131,
  [SMALL_STATE(355)] = 11146,
  [SMALL_STATE(356)] = 11161,
  [SMALL_STATE(357)] = 11178,
  [SMALL_STATE(358)] = 11193,
  [SMALL_STATE(359)] = 11210,
  [SMALL_STATE(360)] = 11221,
  [SMALL_STATE(361)] = 11236,
  [SMALL_STATE(362)] = 11249,
  [SMALL_STATE(363)] = 11266,
  [SMALL_STATE(364)] = 11279,
  [SMALL_STATE(365)] = 11290,
  [SMALL_STATE(366)] = 11304,
  [SMALL_STATE(367)] = 11318,
  [SMALL_STATE(368)] = 11332,
  [SMALL_STATE(369)] = 11346,
  [SMALL_STATE(370)] = 11360,
  [SMALL_STATE(371)] = 11374,
  [SMALL_STATE(372)] = 11388,
  [SMALL_STATE(373)] = 11402,
  [SMALL_STATE(374)] = 11416,
  [SMALL_STATE(375)] = 11430,
  [SMALL_STATE(376)] = 11444,
  [SMALL_STATE(377)] = 11458,
  [SMALL_STATE(378)] = 11472,
  [SMALL_STATE(379)] = 11486,
  [SMALL_STATE(380)] = 11500,
  [SMALL_STATE(381)] = 11514,
  [SMALL_STATE(382)] = 11528,
  [SMALL_STATE(383)] = 11542,
  [SMALL_STATE(384)] = 11552,
  [SMALL_STATE(385)] = 11566,
  [SMALL_STATE(386)] = 11580,
  [SMALL_STATE(387)] = 11594,
  [SMALL_STATE(388)] = 11608,
  [SMALL_STATE(389)] = 11618,
  [SMALL_STATE(390)] = 11632,
  [SMALL_STATE(391)] = 11646,
  [SMALL_STATE(392)] = 11660,
  [SMALL_STATE(393)] = 11674,
  [SMALL_STATE(394)] = 11684,
  [SMALL_STATE(395)] = 11698,
  [SMALL_STATE(396)] = 11712,
  [SMALL_STATE(397)] = 11726,
  [SMALL_STATE(398)] = 11740,
  [SMALL_STATE(399)] = 11754,
  [SMALL_STATE(400)] = 11768,
  [SMALL_STATE(401)] = 11782,
  [SMALL_STATE(402)] = 11796,
  [SMALL_STATE(403)] = 11810,
  [SMALL_STATE(404)] = 11824,
  [SMALL_STATE(405)] = 11838,
  [SMALL_STATE(406)] = 11852,
  [SMALL_STATE(407)] = 11866,
  [SMALL_STATE(408)] = 11880,
  [SMALL_STATE(409)] = 11894,
  [SMALL_STATE(410)] = 11908,
  [SMALL_STATE(411)] = 11922,
  [SMALL_STATE(412)] = 11936,
  [SMALL_STATE(413)] = 11950,
  [SMALL_STATE(414)] = 11964,
  [SMALL_STATE(415)] = 11978,
  [SMALL_STATE(416)] = 11992,
  [SMALL_STATE(417)] = 12006,
  [SMALL_STATE(418)] = 12020,
  [SMALL_STATE(419)] = 12034,
  [SMALL_STATE(420)] = 12048,
  [SMALL_STATE(421)] = 12062,
  [SMALL_STATE(422)] = 12076,
  [SMALL_STATE(423)] = 12090,
  [SMALL_STATE(424)] = 12104,
  [SMALL_STATE(425)] = 12118,
  [SMALL_STATE(426)] = 12128,
  [SMALL_STATE(427)] = 12142,
  [SMALL_STATE(428)] = 12156,
  [SMALL_STATE(429)] = 12170,
  [SMALL_STATE(430)] = 12184,
  [SMALL_STATE(431)] = 12198,
  [SMALL_STATE(432)] = 12212,
  [SMALL_STATE(433)] = 12226,
  [SMALL_STATE(434)] = 12240,
  [SMALL_STATE(435)] = 12254,
  [SMALL_STATE(436)] = 12268,
  [SMALL_STATE(437)] = 12282,
  [SMALL_STATE(438)] = 12296,
  [SMALL_STATE(439)] = 12310,
  [SMALL_STATE(440)] = 12324,
  [SMALL_STATE(441)] = 12338,
  [SMALL_STATE(442)] = 12352,
  [SMALL_STATE(443)] = 12366,
  [SMALL_STATE(444)] = 12380,
  [SMALL_STATE(445)] = 12394,
  [SMALL_STATE(446)] = 12408,
  [SMALL_STATE(447)] = 12422,
  [SMALL_STATE(448)] = 12432,
  [SMALL_STATE(449)] = 12446,
  [SMALL_STATE(450)] = 12460,
  [SMALL_STATE(451)] = 12474,
  [SMALL_STATE(452)] = 12488,
  [SMALL_STATE(453)] = 12502,
  [SMALL_STATE(454)] = 12516,
  [SMALL_STATE(455)] = 12530,
  [SMALL_STATE(456)] = 12544,
  [SMALL_STATE(457)] = 12558,
  [SMALL_STATE(458)] = 12568,
  [SMALL_STATE(459)] = 12582,
  [SMALL_STATE(460)] = 12596,
  [SMALL_STATE(461)] = 12605,
  [SMALL_STATE(462)] = 12614,
  [SMALL_STATE(463)] = 12623,
  [SMALL_STATE(464)] = 12632,
  [SMALL_STATE(465)] = 12641,
  [SMALL_STATE(466)] = 12652,
  [SMALL_STATE(467)] = 12661,
  [SMALL_STATE(468)] = 12670,
  [SMALL_STATE(469)] = 12679,
  [SMALL_STATE(470)] = 12690,
  [SMALL_STATE(471)] = 12701,
  [SMALL_STATE(472)] = 12710,
  [SMALL_STATE(473)] = 12719,
  [SMALL_STATE(474)] = 12730,
  [SMALL_STATE(475)] = 12739,
  [SMALL_STATE(476)] = 12748,
  [SMALL_STATE(477)] = 12759,
  [SMALL_STATE(478)] = 12770,
  [SMALL_STATE(479)] = 12781,
  [SMALL_STATE(480)] = 12790,
  [SMALL_STATE(481)] = 12799,
  [SMALL_STATE(482)] = 12808,
  [SMALL_STATE(483)] = 12817,
  [SMALL_STATE(484)] = 12828,
  [SMALL_STATE(485)] = 12837,
  [SMALL_STATE(486)] = 12848,
  [SMALL_STATE(487)] = 12857,
  [SMALL_STATE(488)] = 12866,
  [SMALL_STATE(489)] = 12877,
  [SMALL_STATE(490)] = 12886,
  [SMALL_STATE(491)] = 12895,
  [SMALL_STATE(492)] = 12904,
  [SMALL_STATE(493)] = 12913,
  [SMALL_STATE(494)] = 12922,
  [SMALL_STATE(495)] = 12931,
  [SMALL_STATE(496)] = 12940,
  [SMALL_STATE(497)] = 12949,
  [SMALL_STATE(498)] = 12960,
  [SMALL_STATE(499)] = 12969,
  [SMALL_STATE(500)] = 12978,
  [SMALL_STATE(501)] = 12989,
  [SMALL_STATE(502)] = 12998,
  [SMALL_STATE(503)] = 13009,
  [SMALL_STATE(504)] = 13017,
  [SMALL_STATE(505)] = 13025,
  [SMALL_STATE(506)] = 13033,
  [SMALL_STATE(507)] = 13041,
  [SMALL_STATE(508)] = 13049,
  [SMALL_STATE(509)] = 13057,
  [SMALL_STATE(510)] = 13065,
  [SMALL_STATE(511)] = 13073,
  [SMALL_STATE(512)] = 13081,
  [SMALL_STATE(513)] = 13089,
  [SMALL_STATE(514)] = 13097,
  [SMALL_STATE(515)] = 13105,
  [SMALL_STATE(516)] = 13113,
  [SMALL_STATE(517)] = 13121,
  [SMALL_STATE(518)] = 13129,
  [SMALL_STATE(519)] = 13137,
  [SMALL_STATE(520)] = 13145,
  [SMALL_STATE(521)] = 13153,
  [SMALL_STATE(522)] = 13161,
  [SMALL_STATE(523)] = 13169,
  [SMALL_STATE(524)] = 13177,
  [SMALL_STATE(525)] = 13185,
  [SMALL_STATE(526)] = 13193,
  [SMALL_STATE(527)] = 13201,
  [SMALL_STATE(528)] = 13209,
  [SMALL_STATE(529)] = 13217,
  [SMALL_STATE(530)] = 13225,
  [SMALL_STATE(531)] = 13233,
  [SMALL_STATE(532)] = 13241,
  [SMALL_STATE(533)] = 13249,
  [SMALL_STATE(534)] = 13257,
  [SMALL_STATE(535)] = 13265,
  [SMALL_STATE(536)] = 13273,
  [SMALL_STATE(537)] = 13281,
  [SMALL_STATE(538)] = 13289,
  [SMALL_STATE(539)] = 13297,
  [SMALL_STATE(540)] = 13305,
  [SMALL_STATE(541)] = 13313,
  [SMALL_STATE(542)] = 13321,
  [SMALL_STATE(543)] = 13329,
  [SMALL_STATE(544)] = 13337,
  [SMALL_STATE(545)] = 13345,
  [SMALL_STATE(546)] = 13353,
  [SMALL_STATE(547)] = 13361,
  [SMALL_STATE(548)] = 13369,
  [SMALL_STATE(549)] = 13377,
  [SMALL_STATE(550)] = 13385,
  [SMALL_STATE(551)] = 13393,
  [SMALL_STATE(552)] = 13401,
  [SMALL_STATE(553)] = 13409,
  [SMALL_STATE(554)] = 13417,
  [SMALL_STATE(555)] = 13425,
  [SMALL_STATE(556)] = 13433,
  [SMALL_STATE(557)] = 13441,
  [SMALL_STATE(558)] = 13449,
  [SMALL_STATE(559)] = 13457,
  [SMALL_STATE(560)] = 13465,
  [SMALL_STATE(561)] = 13473,
  [SMALL_STATE(562)] = 13481,
  [SMALL_STATE(563)] = 13489,
  [SMALL_STATE(564)] = 13497,
  [SMALL_STATE(565)] = 13505,
  [SMALL_STATE(566)] = 13513,
  [SMALL_STATE(567)] = 13521,
  [SMALL_STATE(568)] = 13529,
  [SMALL_STATE(569)] = 13537,
  [SMALL_STATE(570)] = 13545,
  [SMALL_STATE(571)] = 13553,
  [SMALL_STATE(572)] = 13561,
  [SMALL_STATE(573)] = 13569,
  [SMALL_STATE(574)] = 13577,
  [SMALL_STATE(575)] = 13585,
  [SMALL_STATE(576)] = 13593,
  [SMALL_STATE(577)] = 13601,
  [SMALL_STATE(578)] = 13609,
  [SMALL_STATE(579)] = 13617,
  [SMALL_STATE(580)] = 13625,
  [SMALL_STATE(581)] = 13633,
  [SMALL_STATE(582)] = 13641,
  [SMALL_STATE(583)] = 13649,
  [SMALL_STATE(584)] = 13657,
  [SMALL_STATE(585)] = 13665,
  [SMALL_STATE(586)] = 13673,
  [SMALL_STATE(587)] = 13681,
  [SMALL_STATE(588)] = 13689,
  [SMALL_STATE(589)] = 13697,
  [SMALL_STATE(590)] = 13705,
  [SMALL_STATE(591)] = 13713,
  [SMALL_STATE(592)] = 13721,
  [SMALL_STATE(593)] = 13729,
  [SMALL_STATE(594)] = 13737,
  [SMALL_STATE(595)] = 13745,
  [SMALL_STATE(596)] = 13753,
  [SMALL_STATE(597)] = 13761,
  [SMALL_STATE(598)] = 13769,
  [SMALL_STATE(599)] = 13777,
  [SMALL_STATE(600)] = 13785,
  [SMALL_STATE(601)] = 13793,
  [SMALL_STATE(602)] = 13801,
  [SMALL_STATE(603)] = 13809,
  [SMALL_STATE(604)] = 13817,
  [SMALL_STATE(605)] = 13825,
  [SMALL_STATE(606)] = 13833,
  [SMALL_STATE(607)] = 13841,
  [SMALL_STATE(608)] = 13849,
  [SMALL_STATE(609)] = 13857,
  [SMALL_STATE(610)] = 13865,
  [SMALL_STATE(611)] = 13873,
  [SMALL_STATE(612)] = 13881,
  [SMALL_STATE(613)] = 13889,
  [SMALL_STATE(614)] = 13897,
  [SMALL_STATE(615)] = 13905,
  [SMALL_STATE(616)] = 13913,
  [SMALL_STATE(617)] = 13921,
  [SMALL_STATE(618)] = 13929,
  [SMALL_STATE(619)] = 13937,
  [SMALL_STATE(620)] = 13945,
  [SMALL_STATE(621)] = 13953,
  [SMALL_STATE(622)] = 13961,
  [SMALL_STATE(623)] = 13969,
  [SMALL_STATE(624)] = 13977,
  [SMALL_STATE(625)] = 13985,
  [SMALL_STATE(626)] = 13993,
  [SMALL_STATE(627)] = 14001,
  [SMALL_STATE(628)] = 14009,
  [SMALL_STATE(629)] = 14017,
  [SMALL_STATE(630)] = 14025,
  [SMALL_STATE(631)] = 14033,
  [SMALL_STATE(632)] = 14041,
  [SMALL_STATE(633)] = 14049,
  [SMALL_STATE(634)] = 14057,
  [SMALL_STATE(635)] = 14065,
  [SMALL_STATE(636)] = 14073,
  [SMALL_STATE(637)] = 14081,
  [SMALL_STATE(638)] = 14089,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 22),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 22),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 30),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 30),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 21),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 21),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, .production_id = 36),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, .production_id = 36),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 12),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 17),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 17),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 7),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 7),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 7),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 7),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 14),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 8),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 26),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 33),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(469),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(528),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(330),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 24),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 37),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 23),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 34),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 34),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 15),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 15),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unary_function, 4, .production_id = 9),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 4, .production_id = 9),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_param_function, 4, .production_id = 11),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 4, .production_id = 11),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 9),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 9),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 24),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 40),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 40),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 40),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(338),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(570),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(228),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 5, .production_id = 20),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 6, .production_id = 28),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 6, .production_id = 29),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 16),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(162),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 35),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 24),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 28),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 8, .production_id = 38),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 27),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 5, .production_id = 16),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 9, .production_id = 41),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(170),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(161),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 24),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 3),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(198),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 13),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 13),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 7),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 32),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 32),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 10),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(353),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(362),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(151),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(317),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 19),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 19), SHIFT_REPEAT(22),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(352),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(329),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(252),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 39),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 39),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 31),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 18),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 25),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 24),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_statement, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insert_statement, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 25),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 25),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, .production_id = 1),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function_name, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
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
